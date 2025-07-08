/* ResourceFormatLoader::get_recognized_extensions_for_type(String const&, List<String,
   DefaultAllocator>*) const */void ResourceFormatLoader::get_recognized_extensions_for_type(ResourceFormatLoader *this, String *param_1, List *param_2) {
   char cVar1;
   long lVar2;
   lVar2 = *(long*)this;
   if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      cVar1 = ( **(code**)( lVar2 + 0x178 ) )();
      if (cVar1 == '\0') {
         return;
      }

      lVar2 = *(long*)this;
   }

   /* WARNING: Could not recover jumptable at 0x0010002c. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( lVar2 + 0x160 ) )(this, param_2);
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
/* Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */void Ref<Resource>::operator =(Ref<Resource> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

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
/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   undefined4 *puVar3;
   undefined1(*pauVar4)[16];
   if (*(long*)this == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   lVar2 = *(long*)( param_1 + 8 );
   *puVar3 = 0;
   puVar3[6] = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = *(undefined4*)param_1;
   if (lVar2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar3 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar3[10] = *(undefined4*)( param_1 + 0x28 );
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar3 + 0xc ) = 0;
   *(long**)( puVar3 + 0x10 ) = plVar1;
   *(long*)( puVar3 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar3;
   }

   plVar1[1] = (long)puVar3;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)puVar3;
   return;
}
/* ResourceLoader::get_recognized_extensions_for_type(String const&, List<String,
   DefaultAllocator>*) */void ResourceLoader::get_recognized_extensions_for_type(String *param_1, List *param_2) {
   undefined8 *puVar1;
   long lVar2;
   if (0 < loader_count) {
      lVar2 = 0;
      do {
         puVar1 = &loader + lVar2;
         lVar2 = lVar2 + 1;
         ( **(code**)( *(long*)*puVar1 + 0x168 ) )((long*)*puVar1, param_1, param_2);
      }
 while ( (int)lVar2 < loader_count );
      return;
   }

   return;
}
/* ResourceLoader::set_is_import_thread(bool) */void ResourceLoader::set_is_import_thread(bool param_1) {
   undefined8 in_FS_OFFSET;
   *(bool*)in_FS_OFFSET = param_1;
   return;
}
/* ResourceLoader::_ensure_load_progress() */bool ResourceLoader::_ensure_load_progress(void) {
   long lVar1;
   long *plVar2;
   bool bVar3;
   lVar1 = OS::get_singleton();
   bVar3 = *(char*)( lVar1 + 0x128 ) == '\0';
   if (bVar3) {
      plVar2 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar2 + 0x11d0 ) )(plVar2);
   }

   return bVar3;
}
/* ResourceLoader::resource_changed_connect(Resource*, Callable const&, unsigned int) */void ResourceLoader::resource_changed_connect(Resource *param_1, Callable *param_2, uint param_3) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   long *plVar7;
   long *plVar8;
   undefined8 *puVar9;
   long *in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   uint local_60;
   Resource *local_58;
   Callable local_50[16];
   uint local_40;
   long local_30;
   local_30 = in_FS_OFFSET[5];
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar4 = (int)*in_FS_OFFSET + 1;
   *(int*)in_FS_OFFSET = iVar4;
   if (iVar4 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00100878;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar4 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
      if (iVar4 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar4);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   plVar7 = *(long**)( *in_FS_OFFSET + 0xa0 );
   plVar8 = plVar7 + ( ulong ) * (uint*)( *in_FS_OFFSET + 0x98 ) * 4;
   for (; plVar8 != plVar7; plVar7 = plVar7 + 4) {
      if (( (Resource*)*plVar7 == param_1 ) && ( cVar3 = Callable::operator ==((Callable*)( plVar7 + 1 ), param_2) ),cVar3 != '\0') {
         cVar3 = (char)*in_FS_OFFSET;
         goto joined_r0x00100637;
      }

   }

   local_70 = 0;
   local_60 = 0;
   local_68 = 0;
   Callable::operator =((Callable*)&local_70, param_2);
   lVar1 = *in_FS_OFFSET;
   local_60 = param_3;
   local_58 = param_1;
   Callable::Callable(local_50, (Callable*)&local_70);
   uVar6 = *(uint*)( lVar1 + 0x98 );
   local_40 = local_60;
   if (uVar6 == *(uint*)( lVar1 + 0x9c )) {
      uVar6 = uVar6 * 2;
      if (uVar6 == 0) {
         uVar6 = 1;
      }

      *(uint*)( lVar1 + 0x9c ) = uVar6;
      lVar5 = Memory::realloc_static(*(void**)( lVar1 + 0xa0 ), (ulong)uVar6 << 5, false);
      *(long*)( lVar1 + 0xa0 ) = lVar5;
      if (lVar5 == 0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      uVar6 = *(uint*)( lVar1 + 0x98 );
   }
 else {
      lVar5 = *(long*)( lVar1 + 0xa0 );
   }

   *(uint*)( lVar1 + 0x98 ) = uVar6 + 1;
   puVar9 = (undefined8*)( lVar5 + (ulong)uVar6 * 0x20 );
   *puVar9 = local_58;
   Callable::Callable((Callable*)( puVar9 + 1 ), local_50);
   *(uint*)( puVar9 + 3 ) = local_40;
   Callable::~Callable(local_50);
   Callable::~Callable((Callable*)&local_70);
   cVar3 = (char)*in_FS_OFFSET;
   joined_r0x00100637:if (cVar3 == '\0') {
      __tls_init_part_0();
      *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
      iVar4 = (int)*in_FS_OFFSET;
   }
 else {
      *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
      iVar4 = (int)*in_FS_OFFSET;
   }

   if (iVar4 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00100878:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (local_30 != in_FS_OFFSET[5]) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceLoader::resource_changed_disconnect(Resource*, Callable const&) */void ResourceLoader::resource_changed_disconnect(Resource *param_1, Callable *param_2) {
   char cVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long *plVar8;
   long *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar2 = (int)*in_FS_OFFSET + 1;
   *(int*)in_FS_OFFSET = iVar2;
   if (iVar2 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00100af2;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar2 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   lVar4 = *in_FS_OFFSET;
   uVar5 = 0;
   if (*(int*)( lVar4 + 0x98 ) != 0) {
      do {
         while (true) {
            plVar8 = (long*)( *(long*)( lVar4 + 0xa0 ) + uVar5 * 0x20 );
            if ((Resource*)*plVar8 != param_1) break;
            cVar1 = Callable::operator ==((Callable*)( plVar8 + 1 ), param_2);
            if (cVar1 != '\0') {
               lVar4 = *in_FS_OFFSET;
               uVar3 = *(uint*)( lVar4 + 0x98 );
               if ((uint)uVar5 < uVar3) {
                  uVar3 = uVar3 - 1;
                  *(uint*)( lVar4 + 0x98 ) = uVar3;
                  if ((uint)uVar5 < uVar3) {
                     puVar6 = (undefined8*)( (ulong)uVar3 * 0x20 + *(long*)( lVar4 + 0xa0 ) );
                     puVar7 = (undefined8*)( uVar5 * 0x20 + *(long*)( lVar4 + 0xa0 ) );
                     *puVar7 = *puVar6;
                     Callable::operator =((Callable*)( puVar7 + 1 ), (Callable*)( puVar6 + 1 ));
                     *(undefined4*)( puVar7 + 3 ) = *(undefined4*)( puVar6 + 3 );
                     uVar3 = *(uint*)( lVar4 + 0x98 );
                  }

                  Callable::~Callable((Callable*)( (ulong)uVar3 * 0x20 + *(long*)( lVar4 + 0xa0 ) + 8 ));
               }
 else {
                  _err_print_index_error("remove_at_unordered", "./core/templates/local_vector.h", 0x59, uVar5 & 0xffffffff, (ulong)uVar3, "p_index", "count", "", false, false);
               }

               goto LAB_00100940;
            }

            lVar4 = *in_FS_OFFSET;
            uVar5 = uVar5 + 1;
            if (*(uint*)( lVar4 + 0x98 ) <= (uint)uVar5) goto LAB_00100940;
         }
;
         uVar5 = uVar5 + 1;
      }
 while ( (uint)uVar5 < *(uint*)( lVar4 + 0x98 ) );
   }

   LAB_00100940:if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
   if ((int)*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00100af2:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
         return;
      }

   }

   return;
}
/* ResourceLoader::resource_changed_emit(Resource*) */void ResourceLoader::resource_changed_emit(Resource *param_1) {
   int iVar1;
   long *plVar2;
   long *plVar3;
   long *in_FS_OFFSET;
   int local_78[2];
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = in_FS_OFFSET[5];
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar1 = (int)*in_FS_OFFSET + 1;
   *(int*)in_FS_OFFSET = iVar1;
   if (iVar1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00100d17;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar1 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
      if (iVar1 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar1);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   plVar2 = *(long**)( *in_FS_OFFSET + 0xa0 );
   plVar3 = plVar2 + ( ulong ) * (uint*)( *in_FS_OFFSET + 0x98 ) * 4;
   for (; plVar3 != plVar2; plVar2 = plVar2 + 4) {
      if ((Resource*)*plVar2 == param_1) {
         Variant::Variant((Variant*)local_58, 0);
         local_70 = (undefined1[16])0x0;
         local_78[0] = 0;
         Callable::callp((Variant**)( plVar2 + 1 ), 0, (Variant*)0x0, (CallError*)local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
   if ((int)*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00100d17:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (local_40 == in_FS_OFFSET[5]) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::add_resource_format_loader(Ref<ResourceFormatLoader>, bool) */void ResourceLoader::add_resource_format_loader(long *param_1, char param_2) {
   Object *pOVar1;
   char cVar2;
   uint uVar3;
   char *pcVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   Object *pOVar8;
   pOVar1 = (Object*)*param_1;
   if (pOVar1 == (Object*)0x0) {
      uVar6 = 0x40c;
      pcVar4 = "Condition \"p_format_loader.is_null()\" is true.";
      LAB_00100f4a:_err_print_error("add_resource_format_loader", "core/io/resource_loader.cpp", uVar6, pcVar4, 0, 0);
      return;
   }

   if (0x3f < loader_count) {
      uVar6 = 0x40d;
      pcVar4 = "Condition \"loader_count >= MAX_LOADERS\" is true.";
      goto LAB_00100f4a;
   }

   if (param_2 == '\0') {
      lVar5 = (long)loader_count;
      loader_count = loader_count + 1;
      pOVar8 = ( &loader )[lVar5];
      if (pOVar1 == pOVar8) {
         return;
      }

      ( &loader )[lVar5] = pOVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         ( &loader )[lVar5] = (Object*)0x0;
      }

      if (pOVar8 == (Object*)0x0) {
         return;
      }

      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      cVar2 = predelete_handler(pOVar8);
      if (cVar2 == '\0') {
         return;
      }

      ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
      Memory::free_static(pOVar8, false);
      return;
   }

   if (loader_count < 1) {
      pOVar8 = loader;
      if (pOVar1 == loader) goto LAB_00100e4b;
      LAB_00100ee7:loader = pOVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         loader = (Object*)0x0;
      }

   }
 else {
      lVar5 = (long)loader_count;
      uVar3 = loader_count - 1;
      plVar7 = (long*)( &loader + lVar5 );
      do {
         while (true) {
            pOVar1 = (Object*)plVar7[-1];
            pOVar8 = (Object*)*plVar7;
            if (pOVar1 != pOVar8) break;
            LAB_00100da0:plVar7 = plVar7 + -1;
            if ((long*)( &DAT_00113058 + ( lVar5 - (ulong)uVar3 ) * 8 ) == plVar7) goto LAB_00100e10;
         }
;
         *plVar7 = (long)pOVar1;
         if (( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
            *plVar7 = 0;
         }

         if (( ( pOVar8 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00100da0;
         plVar7 = plVar7 + -1;
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }
 while ( (long*)( &DAT_00113058 + ( lVar5 - (ulong)uVar3 ) * 8 ) != plVar7 );
      LAB_00100e10:pOVar1 = (Object*)*param_1;
      if (pOVar1 == loader) goto LAB_00100e4b;
      pOVar8 = loader;
      loader = pOVar1;
      if (pOVar1 != (Object*)0x0) goto LAB_00100ee7;
   }

   if (( ( pOVar8 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
   Memory::free_static(pOVar8, false);
}
LAB_00100e4b:loader_count = loader_count + 1;return;}/* ResourceLoader::remove_resource_format_loader(Ref<ResourceFormatLoader>) */void ResourceLoader::remove_resource_format_loader(long *param_1) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   int iVar7;
   if (*param_1 == 0) {
      _err_print_error("remove_resource_format_loader", "core/io/resource_loader.cpp", 0x41b, "Condition \"p_format_loader.is_null()\" is true.", 0, 0);
      return;
   }

   plVar6 = &loader;
   iVar7 = 0;
   if (0 < loader_count) {
      do {
         if (*plVar6 == *param_1) {
            if (iVar7 < loader_count) {
               iVar5 = loader_count + -1;
               plVar6 = &loader + iVar7;
               iVar4 = loader_count;
               if (iVar7 < iVar5) {
                  do {
                     pOVar2 = (Object*)plVar6[1];
                     pOVar1 = (Object*)*plVar6;
                     iVar7 = iVar7 + 1;
                     if (pOVar2 != pOVar1) {
                        *plVar6 = (long)pOVar2;
                        if (( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::reference() ),cVar3 == '\0') {
                           *plVar6 = 0;
                        }

                        iVar4 = loader_count;
                        if (( ( pOVar1 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),iVar4 = loader_count,cVar3 != '\0' )) {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                           iVar4 = loader_count;
                        }

                     }

                     iVar5 = iVar4 + -1;
                     plVar6 = plVar6 + 1;
                  }
 while ( iVar7 < iVar5 );
               }

               if (( ( &loader )[iVar5] != 0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0') {
                  pOVar2 = (Object*)( &loader )[iVar5];
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

               ( &loader )[iVar5] = 0;
               loader_count = loader_count + -1;
               return;
            }

            break;
         }

         iVar7 = iVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( iVar7 != loader_count );
   }

   _err_print_error("remove_resource_format_loader", "core/io/resource_loader.cpp", 0x425, "Condition \"i >= loader_count\" is true.", 0, 0);
   return;
}
/* ResourceLoader::import_remap(String const&) */ResourceLoader * __thiscall ResourceLoader::import_remap(ResourceLoader *this,String *param_1){
   long *plVar1;
   long lVar2;
   char cVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = 0;
   cVar3 = ( **(code**)( *ResourceFormatImporter::singleton + 0x170 ) )(ResourceFormatImporter::singleton, param_1, &local_28);
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

   if (cVar3 == '\0') {
      *(undefined8*)this = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
      }

   }
 else {
      ResourceFormatImporter::get_internal_resource_path((String*)this);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::reload_translation_remaps() */void ResourceLoader::reload_translation_remaps(void) {
   long lVar1;
   void *pvVar2;
   int iVar3;
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   long lVar6;
   undefined8 uVar7;
   iVar3 = pthread_mutex_lock((pthread_mutex_t*)&ResourceCache::lock);
   lVar6 = remapped_list;
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   if (remapped_list == 0) {
      pauVar4 = (undefined1(*) [16])0x0;
   }
 else {
      uVar7 = *(undefined8*)( remapped_list + 8 );
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
      while (true) {
         puVar5 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
         lVar1 = *(long*)( *pauVar4 + 8 );
         puVar5[1] = 0;
         *puVar5 = uVar7;
         puVar5[2] = lVar1;
         puVar5[3] = pauVar4;
         if (lVar1 != 0) {
            *(undefined8**)( lVar1 + 8 ) = puVar5;
         }

         lVar1 = *(long*)*pauVar4;
         *(undefined8**)( *pauVar4 + 8 ) = puVar5;
         if (lVar1 == 0) {
            lVar6 = *(long*)( lVar6 + 0x10 );
            *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
            *(undefined8**)*pauVar4 = puVar5;
         }
 else {
            lVar6 = *(long*)( lVar6 + 0x10 );
            *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
         }

         if (lVar6 == 0) break;
         uVar7 = *(undefined8*)( lVar6 + 8 );
      }
;
   }

   pthread_mutex_unlock((pthread_mutex_t*)&ResourceCache::lock);
   if (pauVar4 != (undefined1(*) [16])0x0) {
      do {
         if (*(undefined8**)*pauVar4 == (undefined8*)0x0) {
            LAB_00101360:if (*(int*)pauVar4[1] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            Memory::free_static(pauVar4, false);
            return;
         }

         ( **(code**)( *(long*)**(undefined8**)*pauVar4 + 0x180 ) )();
         pvVar2 = *(void**)*pauVar4;
         if (pvVar2 == (void*)0x0) goto LAB_00101360;
         if (*(undefined1(**) [16])( (long)pvVar2 + 0x18 ) == pauVar4) {
            lVar6 = *(long*)( (long)pvVar2 + 8 );
            lVar1 = *(long*)( (long)pvVar2 + 0x10 );
            *(long*)*pauVar4 = lVar6;
            if (pvVar2 == *(void**)( *pauVar4 + 8 )) {
               *(long*)( *pauVar4 + 8 ) = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 8 ) = lVar6;
               lVar6 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar6 != 0) {
               *(long*)( lVar6 + 0x10 ) = lVar1;
            }

            Memory::free_static(pvVar2, false);
            iVar3 = *(int*)pauVar4[1] + -1;
            *(int*)pauVar4[1] = iVar3;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            iVar3 = *(int*)pauVar4[1];
         }

      }
 while ( iVar3 != 0 );
      Memory::free_static(pauVar4, false);
   }

   return;
}
/* ResourceLoader::clear_path_remaps() */void ResourceLoader::clear_path_remaps(void) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   if (( path_remaps._8_8_ != 0 ) && ( path_remaps._44_4_ != 0 )) {
      uVar2 = ( &hash_table_size_primes )[(uint)path_remaps._40_4_];
      if (uVar2 != 0) {
         lVar5 = 0;
         do {
            if (*(int*)( path_remaps._16_8_ + lVar5 ) != 0) {
               *(int*)( path_remaps._16_8_ + lVar5 ) = 0;
               pvVar3 = *(void**)( path_remaps._8_8_ + lVar5 * 2 );
               if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x18 );
                     *(undefined8*)( (long)pvVar3 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar3, false);
               *(undefined8*)( path_remaps._8_8_ + lVar5 * 2 ) = 0;
            }

            lVar5 = lVar5 + 4;
         }
 while ( lVar5 != (ulong)uVar2 << 2 );
      }

      path_remaps._44_4_ = 0;
      path_remaps._24_16_ = (undefined1[16])0x0;
      return;
   }

   return;
}
/* ResourceLoader::set_load_callback(void (*)(Ref<Resource>, String const&)) */void ResourceLoader::set_load_callback(_func_void_Ref_String_ptr *param_1) {
   _loaded_callback = param_1;
   return;
}
/* ResourceLoader::_find_custom_resource_format_loader(String const&) */ResourceLoader * __thiscall
ResourceLoader::_find_custom_resource_format_loader(ResourceLoader *this,String *param_1){
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   char cVar5;
   long lVar6;
   long in_FS_OFFSET;
   Object *local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0 < loader_count) {
      lVar6 = 0;
      do {
         plVar1 = *(long**)( ( &loader )[lVar6] + 0x98 );
         if (plVar1 != (long*)0x0) {
            if (*(code**)( *plVar1 + 0x90 ) == PlaceHolderScriptInstance::get_script) {
               local_50 = (Object*)plVar1[0x10];
               if (( local_50 == (Object*)0x0 ) || ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
                  local_50 = (Object*)0x0;
               }

            }
 else {
               ( **(code**)( *plVar1 + 0x90 ) )(&local_50);
            }

            Resource::get_path();
            cVar4 = String::operator ==((String*)&local_48, param_1);
            lVar3 = local_48;
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            if (( ( local_50 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar2 = local_50,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))();
            Memory::free_static(pOVar2, false);
         }

         if (cVar4 != '\0') {
            *(undefined8*)this = 0;
            if (( &loader )[(int)lVar6] == 0) goto LAB_00101644;
            *(undefined8*)this = ( &loader )[(int)lVar6];
            cVar4 = RefCounted::reference();
            if (cVar4 != '\0') goto LAB_00101644;
            break;
         }

      }
 while ( (int)lVar6 < loader_count );
   }

   *(undefined8*)this = 0;
   LAB_00101644:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::set_create_missing_resources_if_class_unavailable(bool) */void ResourceLoader::set_create_missing_resources_if_class_unavailable(bool param_1) {
   create_missing_resources_if_class_unavailable = param_1;
   return;
}
/* ResourceLoader::is_cleaning_tasks() */undefined1 ResourceLoader::is_cleaning_tasks(void) {
   undefined1 uVar1;
   int iVar2;
   char cVar3;
   int *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
      iVar2 = *in_FS_OFFSET;
      cVar3 = (char)*in_FS_OFFSET;
      *in_FS_OFFSET = iVar2 + 1;
      if (iVar2 + 1 == 1) {
         if (cVar3 == '\0') {
            __tls_init_part_0();
         }

         goto LAB_001017d9;
      }

      LAB_0010177e:uVar1 = cleaning_tasks;
      if (cVar3 != '\0') goto LAB_00101743;
      __tls_init_part_0();
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar2 = *in_FS_OFFSET;
   }
 else {
      iVar2 = *in_FS_OFFSET;
      *in_FS_OFFSET = iVar2 + 1;
      if (iVar2 + 1 == 1) {
         LAB_001017d9:if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00101822;
         if ((char)*in_FS_OFFSET != '\0') {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }

         iVar2 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

         *(undefined1*)in_FS_OFFSET = 1;
         cVar3 = (char)*in_FS_OFFSET;
         goto LAB_0010177e;
      }

      LAB_00101743:uVar1 = cleaning_tasks;
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar2 = *in_FS_OFFSET;
   }

   if (iVar2 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00101822:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
         return uVar1;
      }

   }

   return uVar1;
}
/* ResourceLoader::initialize() */void ResourceLoader::initialize(void) {
   return;
}
/* ResourceLoader::finalize() */void ResourceLoader::finalize(void) {
   return;
}
/* ResourceLoader::_validate_local_path(String const&) */String *ResourceLoader::_validate_local_path(String *param_1) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   CowData<char32_t> aCStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = ResourceUID::text_to_id(ResourceUID::singleton);
   if (lVar2 == -1) {
      cVar1 = String::is_relative_path();
      if (cVar1 == '\0') {
         ProjectSettings::get_singleton();
         ProjectSettings::localize_path(param_1);
      }
 else {
         operator+((char *)
         aCStack_28,(String*)"res://";
         String::simplify_path();
         CowData<char32_t>::_unref(aCStack_28);
      }

   }
 else {
      ResourceUID::get_id_path((long)param_1);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::get_resource_uid(String const&) */long ResourceLoader::get_resource_uid(String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_28);
   if (0 < loader_count) {
      lVar3 = 0;
      do {
         lVar2 = ( **(code**)( *(long*)( &loader )[lVar3] + 0x198 ) )();
         if (lVar2 != -1) goto LAB_0010199a;
         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 < loader_count );
   }

   lVar2 = -1;
   LAB_0010199a:lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::has_custom_uid_support(String const&) */ulong ResourceLoader::has_custom_uid_support(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   ulong uVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_40);
   if (0 < loader_count) {
      lVar5 = 0;
      do {
         local_38 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], (String*)&local_40, &local_38);
         lVar2 = local_38;
         if (local_38 != 0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (cVar3 != '\0') {
            uVar4 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x1a0 ) )();
            if ((char)uVar4 != '\0') goto LAB_00101acd;
         }

         lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_00101acd:lVar5 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         uVar4 = uVar4 & 0xff;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::get_resource_type(String const&) */String *ResourceLoader::get_resource_type(String *param_1) {
   long *plVar1;
   undefined *puVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_50);
   if (0 < loader_count) {
      lVar3 = 0;
      do {
         ( **(code**)( *(long*)( &loader )[lVar3] + 0x188 ) )(&local_48, (long*)( &loader )[lVar3], (String*)&local_50);
         puVar2 = local_48;
         if (local_48 != (undefined*)0x0) {
            if (1 < *(uint*)( local_48 + -8 )) {
               *(undefined**)param_1 = local_48;
               if (local_50 == 0) goto LAB_00101bf0;
               goto LAB_00101c41;
            }

            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (undefined*)0x0;
               Memory::free_static(puVar2 + -0x10, false);
            }

         }

         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 < loader_count );
   }

   *(undefined8*)param_1 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (local_50 != 0) {
      LAB_00101c41:lVar3 = local_50;
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   LAB_00101bf0:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ResourceLoader::get_resource_script_class(String const&) */String *ResourceLoader::get_resource_script_class(String *param_1) {
   long *plVar1;
   undefined *puVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_50);
   if (0 < loader_count) {
      lVar3 = 0;
      do {
         ( **(code**)( *(long*)( &loader )[lVar3] + 400 ) )(&local_48, (long*)( &loader )[lVar3], (String*)&local_50);
         puVar2 = local_48;
         if (local_48 != (undefined*)0x0) {
            if (1 < *(uint*)( local_48 + -8 )) {
               *(undefined**)param_1 = local_48;
               if (local_50 == 0) goto LAB_00101d30;
               goto LAB_00101d81;
            }

            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (undefined*)0x0;
               Memory::free_static(puVar2 + -0x10, false);
            }

         }

         lVar3 = lVar3 + 1;
      }
 while ( (int)lVar3 < loader_count );
   }

   *(undefined8*)param_1 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (local_50 != 0) {
      LAB_00101d81:lVar3 = local_50;
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   LAB_00101d30:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ResourceLoader::ThreadLoadTask::TEMPNAMEPLACEHOLDERVALUE(ResourceLoader::ThreadLoadTask const&)
   [clone .isra.0] */void ResourceLoader::ThreadLoadTask::operator =(ThreadLoadTask *this, ThreadLoadTask *param_1) {
   uint uVar1;
   ulong uVar2;
   Object *pOVar3;
   Object *pOVar4;
   long lVar5;
   long lVar6;
   code *pcVar7;
   char cVar8;
   undefined1(*pauVar9)[16];
   undefined1(*pauVar10)[16];
   undefined8 uVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   undefined8 *puVar15;
   CowData *pCVar16;
   long lVar17;
   CowData<char32_t> *this_00;
   void *pvVar18;
   uint uVar19;
   undefined8 *puVar20;
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
   this[0x10] = param_1[0x10];
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   this[0x24] = param_1[0x24];
   *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   if (*(long*)( this + 0x30 ) != *(long*)( param_1 + 0x30 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x30 ), (CowData*)( param_1 + 0x30 ));
   }

   if (*(long*)( this + 0x38 ) != *(long*)( param_1 + 0x38 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x38 ), (CowData*)( param_1 + 0x38 ));
   }

   pOVar3 = *(Object**)( this + 0x60 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 64 ) ) = *(undefined8*)( param_1 + ( 8*i + 64 ) );
   }

   pOVar4 = *(Object**)( param_1 + 0x60 );
   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
   if (pOVar4 != pOVar3) {
      *(Object**)( this + 0x60 ) = pOVar4;
      if (( pOVar4 != (Object*)0x0 ) && ( cVar8 = RefCounted::reference() ),cVar8 == '\0') {
         *(undefined8*)( this + 0x60 ) = 0;
      }

      if (( ( pOVar3 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
      Memory::free_static(pOVar3, false);
   }

}
this[0x68] = param_1[0x68];if (param_1 + 0x70 != this + 0x70) {
   pvVar18 = *(void**)( this + 0x70 );
   if (pvVar18 != (void*)0x0) {
      if (( *(int*)( this + 0x94 ) != 0 ) && ( ( ( &hash_table_size_primes )[*(uint*)( this + 0x90 )] == 0 || ( memset(*(void**)( this + 0x88 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x90 )] * 4),*(int*)( this + 0x94 ) != 0 ) ) )) {
         lVar14 = 0;
         do {
            lVar17 = lVar14 * 8;
            lVar14 = lVar14 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar18 + lVar17 ));
            pvVar18 = *(void**)( this + 0x70 );
         }
 while ( (uint)lVar14 < *(uint*)( this + 0x94 ) );
         *(undefined4*)( this + 0x94 ) = 0;
         if (pvVar18 == (void*)0x0) goto LAB_00101f1d;
      }

      Memory::free_static(pvVar18, false);
      Memory::free_static(*(void**)( this + 0x80 ), false);
      Memory::free_static(*(void**)( this + 0x78 ), false);
      Memory::free_static(*(void**)( this + 0x88 ), false);
      *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
   }

   LAB_00101f1d:uVar2 = *(ulong*)( param_1 + 0x90 );
   *(ulong*)( this + 0x90 ) = uVar2;
   if ((int)( uVar2 >> 0x20 ) != 0) {
      uVar19 = ( &hash_table_size_primes )[uVar2 & 0xffffffff];
      uVar2 = (ulong)uVar19 * 4;
      uVar11 = Memory::alloc_static(uVar2, false);
      lVar14 = 0;
      *(undefined8*)( this + 0x88 ) = uVar11;
      uVar11 = Memory::alloc_static((ulong)uVar19 * 8, false);
      *(undefined8*)( this + 0x70 ) = uVar11;
      uVar11 = Memory::alloc_static(uVar2, false);
      *(undefined8*)( this + 0x80 ) = uVar11;
      uVar11 = Memory::alloc_static(uVar2, false);
      *(undefined8*)( this + 0x78 ) = uVar11;
      if (*(int*)( this + 0x94 ) != 0) {
         do {
            this_00 = (CowData<char32_t>*)( *(long*)( this + 0x70 ) + lVar14 * 8 );
            pCVar16 = (CowData*)( lVar14 * 8 + *(long*)( param_1 + 0x70 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar16 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar16);
            }

            *(undefined4*)( *(long*)( this + 0x80 ) + lVar14 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x80 ) + lVar14 * 4 );
            lVar14 = lVar14 + 1;
         }
 while ( (uint)lVar14 < *(uint*)( this + 0x94 ) );
      }

      if (uVar19 != 0) {
         lVar14 = *(long*)( param_1 + 0x88 );
         lVar17 = *(long*)( this + 0x88 );
         uVar12 = 0;
         lVar5 = *(long*)( param_1 + 0x78 );
         lVar6 = *(long*)( this + 0x78 );
         do {
            *(undefined4*)( lVar17 + uVar12 ) = *(undefined4*)( lVar14 + uVar12 );
            *(undefined4*)( lVar6 + uVar12 ) = *(undefined4*)( lVar5 + uVar12 );
            uVar12 = uVar12 + 4;
         }
 while ( uVar12 != uVar2 );
      }

   }

}
uVar13 = *(uint*)( param_1 + 0x98 );uVar19 = *(uint*)( this + 0x98 );if (uVar13 < uVar19) {
   lVar14 = (ulong)uVar13 << 5;
   uVar19 = uVar13;
   do {
      uVar19 = uVar19 + 1;
      lVar17 = *(long*)( this + 0xa0 ) + lVar14;
      lVar14 = lVar14 + 0x20;
      Callable::~Callable((Callable*)( lVar17 + 8 ));
   }
 while ( uVar19 < *(uint*)( this + 0x98 ) );
}
 else {
   if (uVar13 <= uVar19) goto LAB_00101f92;
   uVar1 = uVar13 - 1;
   if (*(uint*)( this + 0x9c ) < uVar13) {
      uVar19 = uVar1 >> 1 | uVar1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = ( uVar19 | uVar19 >> 0x10 ) + 1;
      *(uint*)( this + 0x9c ) = uVar19;
      lVar14 = Memory::realloc_static(*(void**)( this + 0xa0 ), (ulong)uVar19 << 5, false);
      *(long*)( this + 0xa0 ) = lVar14;
      if (lVar14 == 0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar7 = (code*)invalidInstructionException();
         ( *pcVar7 )();
      }

      uVar19 = *(uint*)( this + 0x98 );
      if (uVar13 <= uVar19) goto LAB_00101f84;
   }

   lVar14 = *(long*)( this + 0xa0 );
   pauVar9 = (undefined1(*) [16])( (ulong)uVar19 * 0x20 + lVar14 );
   do {
      *(undefined8*)pauVar9[1] = 0;
      pauVar10 = pauVar9 + 2;
      *pauVar9 = (undefined1[16])0x0;
      *(undefined4*)( pauVar9[1] + 8 ) = 0;
      pauVar9 = pauVar10;
   }
 while ( (undefined1(*) [16])( lVar14 + 0x20 + ( ( ulong )(uVar1 - uVar19) + (ulong)uVar19 ) * 0x20 ) != pauVar10 );
}
LAB_00101f84:*(uint*)( this + 0x98 ) = uVar13;uVar13 = *(uint*)( param_1 + 0x98 );LAB_00101f92:lVar14 = 0;if (uVar13 != 0) {
   do {
      lVar17 = lVar14 + 1;
      puVar20 = (undefined8*)( *(long*)( param_1 + 0xa0 ) + lVar14 * 0x20 );
      puVar15 = (undefined8*)( lVar14 * 0x20 + *(long*)( this + 0xa0 ) );
      *puVar15 = *puVar20;
      Callable::operator =((Callable*)( puVar15 + 1 ), (Callable*)( puVar20 + 1 ));
      *(undefined4*)( puVar15 + 3 ) = *(undefined4*)( puVar20 + 3 );
      lVar14 = lVar17;
   }
 while ( (uint)lVar17 < *(uint*)( param_1 + 0x98 ) );
}
return;}/* ResourceLoader::get_classes_used(String const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */void ResourceLoader::get_classes_used(String *param_1, HashSet *param_2) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_50);
   if (0 < loader_count) {
      lVar4 = 0;
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar4] + 0x170 ) )((long*)( &loader )[lVar4], (String*)&local_50, &local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_001022e7;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_00102356;
            LAB_001022ec:( **(code**)( *(long*)( &loader )[(int)lVar4] + 0x180 ) )((long*)( &loader )[(int)lVar4], param_1, param_2);
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

            goto LAB_00102316;
         }

         LAB_001022e7:if (cVar3 != '\0') goto LAB_001022ec;
         LAB_00102356:lVar4 = lVar4 + 1;
      }
 while ( (int)lVar4 < loader_count );
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_00102316:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::should_create_uid_file(String const&) */uint ResourceLoader::should_create_uid_file(String *param_1) {
   long *plVar1;
   undefined *puVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   long in_FS_OFFSET;
   String aSStack_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path(aSStack_58);
   local_48 = &_LC48;
   local_50 = 0;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_50);
   String::operator +((String*)&local_48, aSStack_58);
   cVar3 = FileAccess::exists((String*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (( cVar3 == '\0' ) && ( 0 < loader_count )) {
      lVar5 = 0;
      do {
         local_48 = (undefined*)0x0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], aSStack_58, (String*)&local_48);
         puVar2 = local_48;
         if (local_48 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (undefined*)0x0;
               Memory::free_static(puVar2 + -0x10, false);
            }

         }

         if (cVar3 != '\0') {
            uVar4 = ( **(code**)( *(long*)( &loader )[(int)lVar5] + 0x1a0 ) )();
            uVar4 = uVar4 ^ 1;
            goto LAB_001024c2;
         }

         lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_001024c2:CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<String, ResourceLoader::LoadToken*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::LoadToken*> > >::erase(String const&) [clone .isra.0] */ulong HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::erase(HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>> *this, String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
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
   ulong in_RAX;
   ulong uVar30;
   uint uVar31;
   uint uVar32;
   long lVar33;
   long lVar34;
   long *plVar35;
   long lVar36;
   uint *puVar37;
   ulong uVar38;
   uint uVar39;
   if (*(long*)( this + 8 ) == 0) {
      return in_RAX;
   }

   uVar30 = ( ulong ) * (uint*)( this + 0x2c );
   if (*(uint*)( this + 0x2c ) != 0) {
      uVar5 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar38 = CONCAT44(0, uVar5);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = String::hash();
      lVar36 = *(long*)( this + 0x10 );
      uVar31 = 1;
      if (uVar29 != 0) {
         uVar31 = uVar29;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar31 * lVar6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      auVar8 = auVar8 * auVar18;
      lVar33 = auVar8._8_8_;
      uVar30 = auVar8._0_8_;
      uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
      uVar32 = auVar8._8_4_;
      if (uVar29 != 0) {
         uVar39 = 0;
         do {
            if (uVar31 == uVar29) {
               cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar33 * 8 ) + 0x10 ), param_1);
               if (cVar28 != '\0') {
                  lVar6 = *(long*)( this + 0x10 );
                  lVar36 = *(long*)( this + 8 );
                  uVar5 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar30 = CONCAT44(0, uVar5);
                  lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar30;
                  lVar34 = SUB168(auVar12 * auVar22, 8);
                  puVar37 = (uint*)( lVar6 + lVar34 * 4 );
                  uVar29 = SUB164(auVar12 * auVar22, 8);
                  uVar31 = *puVar37;
                  if (( uVar31 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar31 * lVar33,auVar23._8_8_ = 0,auVar23._0_8_ = uVar30,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar33,auVar24._8_8_ = 0,auVar24._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_001026eb;
                  goto LAB_001026a5;
               }

               lVar36 = *(long*)( this + 0x10 );
            }

            uVar39 = uVar39 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar32 + 1) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            auVar9 = auVar9 * auVar19;
            lVar33 = auVar9._8_8_;
            uVar30 = auVar9._0_8_;
            uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
            uVar32 = auVar9._8_4_;
         }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar6,auVar20._8_8_ = 0,auVar20._0_8_ = uVar38,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar5 + uVar32 ) - SUB164(auVar10 * auVar20, 8)) * lVar6,auVar21._8_8_ = 0,auVar21._0_8_ = uVar38,uVar30 = SUB168(auVar11 * auVar21, 0),uVar39 <= SUB164(auVar11 * auVar21, 8) );
      }

   }

   return uVar30;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar31 * lVar33,auVar25._8_8_ = 0,auVar25._0_8_ = uVar30,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar29 + uVar5 ) - SUB164(auVar15 * auVar25, 8)) * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_001026a5:uVar32 = uVar29;
      puVar1 = (uint*)( lVar6 + (ulong)uVar39 * 4 );
      *puVar37 = *puVar1;
      puVar2 = (undefined8*)( lVar36 + lVar34 * 8 );
      *puVar1 = uVar31;
      puVar3 = (undefined8*)( lVar36 + (ulong)uVar39 * 8 );
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar30;
      lVar34 = SUB168(auVar17 * auVar27, 8);
      puVar37 = (uint*)( lVar6 + lVar34 * 4 );
      uVar29 = SUB164(auVar17 * auVar27, 8);
      uVar31 = *puVar37;
      if (uVar31 == 0) break;
   }
;
   LAB_001026eb:uVar30 = (ulong)uVar32;
   plVar4 = (long*)( lVar36 + uVar30 * 8 );
   *(undefined4*)( lVar6 + uVar30 * 4 ) = 0;
   plVar35 = (long*)*plVar4;
   if (*(long**)( this + 0x18 ) == plVar35) {
      *(long*)( this + 0x18 ) = *plVar35;
      plVar35 = (long*)*plVar4;
      if (*(long**)( this + 0x20 ) != plVar35) goto LAB_00102709;
   }
 else if (*(long**)( this + 0x20 ) != plVar35) goto LAB_00102709;
   *(long*)( this + 0x20 ) = plVar35[1];
   plVar35 = (long*)*plVar4;
   LAB_00102709:if ((long*)plVar35[1] != (long*)0x0) {
      *(long*)plVar35[1] = *plVar35;
      plVar35 = (long*)*plVar4;
   }

   if (*plVar35 != 0) {
      *(long*)( *plVar35 + 8 ) = plVar35[1];
      plVar35 = (long*)*plVar4;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar35 + 2 ));
   Memory::free_static(plVar35, false);
   uVar38 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar38 + uVar30 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar38;
}
/* ResourceLoader::_load_threaded_request_setup_user_token(ResourceLoader::LoadToken*, String
   const&) */void ResourceLoader::_load_threaded_request_setup_user_token(LoadToken *param_1, String *param_2) {
   undefined8 *puVar1;
   if (*(long*)( param_1 + 0x188 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x188 ), (CowData*)param_2);
   }

   RefCounted::reference();
   *(undefined4*)( param_1 + 400 ) = 1;
   puVar1 = (undefined8*)HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::operator []((HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>*)user_load_tokens, param_2);
   *puVar1 = param_1;
   return;
}
/* ResourceLoader::_path_remap(String const&, bool*) */ResourceLoader * __thiscall
ResourceLoader::_path_remap(ResourceLoader *this,String *param_1,bool *param_2){
   uint uVar1;
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
   code *pcVar26;
   Object *pOVar27;
   char cVar28;
   uint uVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   CowData *pCVar33;
   uint uVar34;
   long lVar35;
   long lVar36;
   ulong uVar37;
   void *pvVar38;
   long lVar39;
   uint uVar40;
   uint uVar41;
   long lVar42;
   long in_FS_OFFSET;
   String *local_2188;
   String *local_2180;
   CowData<char32_t> *local_2178;
   int local_212c;
   long local_2128;
   Object *local_2120;
   long local_2118;
   long local_2110;
   long local_2108;
   undefined8 local_2100;
   undefined8 local_20f8;
   long local_20f0;
   long local_20e8[2];
   undefined1 local_20d8[16];
   undefined1 local_20c8[16];
   undefined8 local_20b8;
   undefined8 local_20a8;
   undefined1 local_20a0[16];
   undefined8 local_2088;
   undefined1 local_2080[16];
   code *local_2068[1025];
   undefined8 local_60;
   undefined2 local_58;
   undefined4 local_54;
   Object *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_2128 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_2128, (CowData*)param_1);
   }

   if (( translation_remaps._8_8_ != 0 ) && ( translation_remaps._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)translation_remaps._40_4_];
      uVar37 = CONCAT44(0, uVar1);
      lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)translation_remaps._40_4_ * 8 );
      uVar29 = String::hash();
      uVar34 = 1;
      if (uVar29 != 0) {
         uVar34 = uVar29;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar34 * lVar36;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar37;
      lVar35 = SUB168(auVar6 * auVar18, 8);
      uVar29 = *(uint*)( translation_remaps._16_8_ + lVar35 * 4 );
      iVar32 = SUB164(auVar6 * auVar18, 8);
      if (uVar29 != 0) {
         uVar40 = 0;
         lVar42 = translation_remaps._16_8_;
         while (( uVar34 != uVar29 || ( cVar28 = String::operator ==((String*)( *(long*)( translation_remaps._8_8_ + lVar35 * 8 ) + 0x10 ), param_1) ),lVar42 = translation_remaps._16_8_,cVar28 == '\0' )) {
            uVar40 = uVar40 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar32 + 1) * lVar36;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar37;
            lVar35 = SUB168(auVar7 * auVar19, 8);
            uVar29 = *(uint*)( lVar42 + lVar35 * 4 );
            iVar32 = SUB164(auVar7 * auVar19, 8);
            if (( uVar29 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar29 * lVar36,auVar20._8_8_ = 0,auVar20._0_8_ = uVar37,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar1 + iVar32 ) - SUB164(auVar8 * auVar20, 8)) * lVar36,auVar21._8_8_ = 0,auVar21._0_8_ = uVar37,SUB164(auVar9 * auVar21, 8) < uVar40) goto joined_r0x00102cd9;
         }
;
         TranslationServer::get_locale();
         if (local_2108 == 0) {
            local_20f0 = 0;
            LAB_00102bd2:local_2178 = (CowData<char32_t>*)&local_20f0;
            local_20f8 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_20f8, (CowData*)param_1);
            }

            local_2100 = 0;
            String::parse_latin1((String*)&local_2100, "Could not remap path \'%s\' for translation as configured locale \'%s\' is invalid.");
            vformat<String,String>((CowData<char32_t>*)local_20e8, (String*)&local_2100, (CowData<char32_t>*)&local_20f8, local_2178);
            _err_print_error("_path_remap", "core/io/resource_loader.cpp", 0x4de, "Condition \"locale.length() < 2\" is true. Returning: p_path", (CowData<char32_t>*)local_20e8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
            CowData<char32_t>::_unref(local_2178);
            *(undefined8*)this = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
            goto LAB_00102b3c;
         }

         iVar32 = (int)*(undefined8*)( local_2108 + -8 );
         if (( iVar32 == 0 ) || ( iVar32 < 3 )) {
            local_20f0 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_20f0, (CowData*)&local_2108);
            goto LAB_00102bd2;
         }

         if (( translation_remaps._8_8_ == 0 ) || ( translation_remaps._44_4_ == 0 )) goto LAB_00103847;
         uVar1 = ( &hash_table_size_primes )[(uint)translation_remaps._40_4_];
         uVar37 = CONCAT44(0, uVar1);
         lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)translation_remaps._40_4_ * 8 );
         uVar29 = String::hash();
         uVar34 = 1;
         if (uVar29 != 0) {
            uVar34 = uVar29;
         }

         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar34 * lVar36;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar37;
         lVar35 = SUB168(auVar10 * auVar22, 8);
         uVar29 = *(uint*)( translation_remaps._16_8_ + lVar35 * 4 );
         uVar40 = SUB164(auVar10 * auVar22, 8);
         if (uVar29 == 0) goto LAB_00103847;
         uVar41 = 0;
         lVar42 = translation_remaps._16_8_;
         while (( uVar29 != uVar34 || ( cVar28 = String::operator ==((String*)( *(long*)( translation_remaps._8_8_ + lVar35 * 8 ) + 0x10 ), (String*)&local_2128) ),lVar42 = translation_remaps._16_8_,cVar28 == '\0' )) {
            uVar41 = uVar41 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar40 + 1) * lVar36;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar35 = SUB168(auVar11 * auVar23, 8);
            uVar29 = *(uint*)( lVar42 + lVar35 * 4 );
            uVar40 = SUB164(auVar11 * auVar23, 8);
            if (( uVar29 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar29 * lVar36,auVar24._8_8_ = 0,auVar24._0_8_ = uVar37,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar1 + uVar40 ) - SUB164(auVar12 * auVar24, 8)) * lVar36,auVar25._8_8_ = 0,auVar25._0_8_ = uVar37,SUB164(auVar13 * auVar25, 8) < uVar41) {
               LAB_00103847:/* WARNING: Does not return */pcVar26 = (code*)invalidInstructionException();
               ( *pcVar26 )();
            }

         }
;
         lVar36 = *(long*)( translation_remaps._8_8_ + (ulong)uVar40 * 8 );
         lVar35 = *(long*)( lVar36 + 0x20 );
         if (lVar35 != 0) {
            lVar42 = 0;
            iVar32 = 0;
            do {
               if (*(long*)( lVar35 + -8 ) <= lVar42) break;
               iVar31 = (int)lVar42 * 8;
               iVar30 = String::rfind_char((int)lVar35 + iVar31, 0x3a);
               if (iVar30 != -1) {
                  lVar35 = *(long*)( lVar36 + 0x20 );
                  if (lVar35 == 0) {
                     LAB_00102fa0:lVar39 = 0;
                     LAB_00102fa3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar42, lVar39, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar26 = (code*)invalidInstructionException();
                     ( *pcVar26 )();
                  }

                  lVar39 = *(long*)( lVar35 + -8 );
                  if (lVar39 <= lVar42) goto LAB_00102fa3;
                  iVar30 = (int)(CowData<char32_t>*)local_20e8;
                  String::substr(iVar30, (int)lVar35 + iVar31);
                  String::strip_edges(SUB81((CowData<char32_t>*)&local_20f0, 0), SUB81((CowData<char32_t>*)local_20e8, 0));
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
                  iVar31 = TranslationServer::compare_locales(TranslationServer::singleton, (String*)&local_2108);
                  if (( 0 < iVar31 ) && ( iVar32 <= iVar31 )) {
                     if (*(long*)( lVar36 + 0x20 ) == 0) goto LAB_00102fa0;
                     lVar39 = *(long*)( *(long*)( lVar36 + 0x20 ) + -8 );
                     if (lVar39 <= lVar42) goto LAB_00102fa3;
                     String::left(iVar30);
                     if (local_2128 != local_20e8[0]) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_2128);
                        local_2128 = local_20e8[0];
                        local_20e8[0] = 0;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
                     iVar32 = iVar31;
                     if (iVar31 == 10) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
                        break;
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
               }

               lVar35 = *(long*)( lVar36 + 0x20 );
               lVar42 = lVar42 + 1;
            }
 while ( lVar35 != 0 );
         }

         local_2178 = (CowData<char32_t>*)&local_20f0;
         local_2180 = (String*)local_20e8;
         if (param_2 != (bool*)0x0) {
            *param_2 = true;
         }

         local_20f0 = 0;
         String::parse_latin1((String*)local_2178, ".import");
         String::operator +(local_2180, (String*)&local_2128);
         cVar28 = FileAccess::exists(local_2180);
         if (( cVar28 == '\0' ) && ( cVar28 = FileAccess::exists((String*)&local_2128) ),cVar28 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_2180);
            CowData<char32_t>::_unref(local_2178);
            local_20f0 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref(local_2178, (CowData*)param_1);
            }

            local_20f8 = 0;
            if (local_2128 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_20f8, (CowData*)&local_2128);
            }

            local_2100 = 0;
            String::parse_latin1((String*)&local_2100, "Translation remap \'%s\' does not exist. Falling back to \'%s\'.");
            vformat<String,String>(local_2180, (String*)&local_2100, (CowData<char32_t>*)&local_20f8, local_2178);
            _err_print_error("_path_remap", "core/io/resource_loader.cpp", 0x4f9, local_2180, 0, 1);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_2180);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
            CowData<char32_t>::_unref(local_2178);
            if (local_2128 != *(long*)param_1) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_2128, (CowData*)param_1);
            }

         }
 else {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_2180);
            CowData<char32_t>::_unref(local_2178);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
      }

   }

   joined_r0x00102cd9:if (( path_remaps._8_8_ != 0 ) && ( local_2188 = (String*)&local_2128 ),path_remaps._44_4_ != 0) {
      uVar1 = ( &hash_table_size_primes )[(uint)path_remaps._40_4_];
      uVar37 = CONCAT44(0, uVar1);
      lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)path_remaps._40_4_ * 8 );
      uVar29 = String::hash();
      uVar34 = 1;
      if (uVar29 != 0) {
         uVar34 = uVar29;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar34 * lVar36;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar37;
      lVar35 = SUB168(auVar2 * auVar14, 8);
      uVar29 = *(uint*)( path_remaps._16_8_ + lVar35 * 4 );
      iVar32 = SUB164(auVar2 * auVar14, 8);
      if (uVar29 != 0) {
         uVar40 = 0;
         lVar42 = path_remaps._16_8_;
         do {
            if (( uVar29 == uVar34 ) && ( cVar28 = String::operator ==((String*)( *(long*)( path_remaps._8_8_ + lVar35 * 8 ) + 0x10 ), local_2188) ),lVar42 = path_remaps._16_8_,cVar28 != '\0') {
               pCVar33 = (CowData*)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)path_remaps, local_2188);
               lVar36 = *(long*)pCVar33;
               if (local_2128 != *(long*)pCVar33) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_2188, pCVar33);
                  lVar36 = local_2128;
               }

               goto LAB_00102b2b;
            }

            uVar40 = uVar40 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar32 + 1) * lVar36;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar37;
            lVar35 = SUB168(auVar3 * auVar15, 8);
            uVar29 = *(uint*)( lVar42 + lVar35 * 4 );
            iVar32 = SUB164(auVar3 * auVar15, 8);
         }
 while ( ( uVar29 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar29 * lVar36,auVar16._8_8_ = 0,auVar16._0_8_ = uVar37,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar32 ) - SUB164(auVar4 * auVar16, 8)) * lVar36,auVar17._8_8_ = 0,auVar17._0_8_ = uVar37,uVar40 <= SUB164(auVar5 * auVar17, 8) );
      }

   }

   local_2188 = (String*)&local_2128;
   ResourceUID::ensure_path((String*)local_20e8);
   if (local_2128 != local_20e8[0]) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_2188);
      local_2128 = local_20e8[0];
      local_20e8[0] = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
   local_20f0 = 0;
   String::parse_latin1((String*)&local_20f0, ".remap");
   String::operator +((String*)local_20e8, local_2188);
   cVar28 = FileAccess::exists((String*)local_20e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
   lVar36 = local_2128;
   if (cVar28 == '\0') goto LAB_00102b2b;
   local_20f0 = 0;
   String::parse_latin1((String*)&local_20f0, ".remap");
   String::operator +((String*)local_20e8, local_2188);
   FileAccess::open((String*)&local_2120, (int)(String*)local_20e8, (Error*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
   lVar36 = local_2128;
   if (local_2120 == (Object*)0x0) goto LAB_00102b2b;
   local_60 = 0;
   local_54 = 0;
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   local_58 = 0x100;
   local_50 = local_2120;
   cVar28 = RefCounted::reference();
   if (cVar28 == '\0') {
      local_50 = (Object*)0x0;
   }

   local_2118 = 0;
   local_212c = 0;
   local_20a8 = 0;
   local_20e8[0] = 0;
   local_20b8 = 2;
   local_2110 = 0;
   local_20a0 = (undefined1[16])0x0;
   local_20d8 = (undefined1[16])0x0;
   local_20c8 = (undefined1[16])0x0;
   do {
      local_2088 = 0;
      local_2080 = (undefined1[16])0x0;
      Variant::operator_cast_to_String((Variant*)&local_20f0);
      if (local_2118 != local_20f0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2118);
         local_2118 = local_20f0;
         local_20f0 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
      if (Variant::needs_deinit[(int)local_2088] != '\0') {
         Variant::_clear_internal();
      }

      if (( local_20d8._0_8_ != 0 ) && ( local_20b8._4_4_ != 0 )) {
         lVar36 = 0;
         uVar1 = ( &hash_table_size_primes )[local_20b8 & 0xffffffff];
         if (uVar1 != 0) {
            do {
               if (*(int*)( local_20d8._8_8_ + lVar36 ) != 0) {
                  *(int*)( local_20d8._8_8_ + lVar36 ) = 0;
                  pvVar38 = *(void**)( local_20d8._0_8_ + lVar36 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar38 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar38 + 0x10 ));
                  Memory::free_static(pvVar38, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar36 * 2 ) = 0;
               }

               lVar36 = lVar36 + 4;
            }
 while ( lVar36 != (ulong)uVar1 * 4 );
         }

         local_20b8 = local_20b8 & 0xffffffff;
         local_20c8 = (undefined1[16])0x0;
      }

      local_20f0 = 0;
      if (local_20e8[0] != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
         local_20e8[0] = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
      iVar32 = VariantParser::parse_tag_assign_eof((Stream*)local_2068, &local_212c, (String*)&local_2110, (Tag*)local_20e8, (String*)&local_2118, (Variant*)&local_20a8, (ResourceParser*)0x0, true);
      if (iVar32 == 0x12) break;
      if (iVar32 != 0) {
         local_20f8 = 0;
         if (local_2110 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_20f8, (CowData*)&local_2110);
         }

         iVar32 = local_212c;
         local_2100 = 0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_2100, (CowData*)param_1);
         }

         local_2108 = 0;
         String::parse_latin1((String*)&local_2108, "Parse error: %s.remap:%d error: %s.");
         vformat<String,int,String>((String*)&local_20f0, (String*)&local_2108, (CowData<char32_t>*)&local_2100, iVar32, (CowData<char32_t>*)&local_20f8);
         _err_print_error("_path_remap", "core/io/resource_loader.cpp", 0x51a, (String*)&local_20f0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2100);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f8);
         break;
      }

      cVar28 = String::operator ==((String*)&local_2118, "path");
      if (cVar28 != '\0') {
         Variant::operator_cast_to_String((Variant*)&local_20f0);
         if (local_2128 != local_20f0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_2188);
            local_2128 = local_20f0;
            local_20f0 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_20f0);
         break;
      }

      cVar28 = String::operator !=((String*)local_20e8, "remap");
   }
 while ( cVar28 == '\0' );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2110);
   if ((void*)local_20d8._0_8_ != (void*)0x0) {
      pvVar38 = (void*)local_20d8._0_8_;
      if (local_20b8._4_4_ != 0) {
         uVar1 = ( &hash_table_size_primes )[local_20b8 & 0xffffffff];
         if (uVar1 == 0) {
            local_20b8 = local_20b8 & 0xffffffff;
            local_20c8 = (undefined1[16])0x0;
         }
 else {
            lVar36 = 0;
            do {
               if (*(int*)( local_20d8._8_8_ + lVar36 ) != 0) {
                  pvVar38 = *(void**)( (long)pvVar38 + lVar36 * 2 );
                  *(int*)( local_20d8._8_8_ + lVar36 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar38 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar38 + 0x10 ));
                  Memory::free_static(pvVar38, false);
                  *(undefined8*)( local_20d8._0_8_ + lVar36 * 2 ) = 0;
                  pvVar38 = (void*)local_20d8._0_8_;
               }

               lVar36 = lVar36 + 4;
            }
 while ( lVar36 != (ulong)uVar1 * 4 );
            local_20b8 = local_20b8 & 0xffffffff;
            local_20c8 = (undefined1[16])0x0;
            if (pvVar38 == (void*)0x0) goto LAB_0010349d;
         }

      }

      Memory::free_static(pvVar38, false);
      Memory::free_static((void*)local_20d8._8_8_, false);
   }

   LAB_0010349d:CowData<char32_t>::_unref((CowData<char32_t>*)local_20e8);
   if (Variant::needs_deinit[(int)local_20a8] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2118);
   local_2068[0] = VariantParser::parse_tag_assign_eof;
   if (( ( local_50 != (Object*)0x0 ) && ( cVar28 = RefCounted::unreference() ),pOVar27 = local_50,cVar28 != '\0' )) &&( cVar28 = cVar28 != '\0' )(**(code**)( *(long*)pOVar27 + 0x140 ))(pOVar27);
   Memory::free_static(pOVar27, false);
}
lVar36 = local_2128;if (( ( local_2120 != (Object*)0x0 ) && ( cVar28 = RefCounted::unreference() ),lVar36 = local_2128,cVar28 != '\0' )) {
   ( **(code**)( *(long*)local_2120 + 0x140 ) )(local_2120);
   Memory::free_static(local_2120, false);
   lVar36 = local_2128;
}
LAB_00102b2b:local_2128 = 0;*(long*)this = lVar36;LAB_00102b3c:local_2188 = (String*)&local_2128;CowData<char32_t>::_unref((CowData<char32_t>*)local_2188);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceLoader::exists(String const&, String const&) */undefined4 ResourceLoader::exists(String *param_1, String *param_2) {
   long *plVar1;
   char cVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   bool local_41;
   long local_40;
   ResourceLoader local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_40);
   uVar3 = ResourceCache::has((String*)&local_40);
   uVar4 = uVar3;
   if ((char)uVar3 == '\0') {
      local_41 = false;
      _path_remap(local_38, (String*)&local_40, &local_41);
      if (0 < loader_count) {
         lVar5 = 0;
         do {
            cVar2 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], local_38, param_2);
            if (cVar2 != '\0') {
               uVar4 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x158 ) )();
               if ((char)uVar4 != '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
                  goto LAB_001038a2;
               }

            }

            lVar5 = lVar5 + 1;
         }
 while ( (int)lVar5 < loader_count );
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      uVar4 = uVar3;
   }

   LAB_001038a2:lVar5 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::get_import_order(String const&) */undefined4 ResourceLoader::get_import_order(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap((ResourceLoader*)&local_50, (String*)&local_48, (bool*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (0 < loader_count) {
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], (ResourceLoader*)&local_50, (String*)&local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_00103a29;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_00103a9e;
            LAB_00103a2e:uVar4 = ( **(code**)( *(long*)( &loader )[(int)lVar5] + 0x1c8 ) )();
            goto LAB_00103a43;
         }

         LAB_00103a29:if (cVar3 != '\0') goto LAB_00103a2e;
         LAB_00103a9e:lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_00103a43:lVar5 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::get_import_group_file(String const&) */ResourceLoader * __thiscall
ResourceLoader::get_import_group_file(ResourceLoader *this,String *param_1){
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap((ResourceLoader*)&local_50, (String*)&local_48, (bool*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (0 < loader_count) {
      lVar4 = 0;
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar4] + 0x170 ) )((long*)( &loader )[lVar4], (ResourceLoader*)&local_50, (String*)&local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_00103b7d;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_00103bee;
            LAB_00103b82:( **(code**)( *(long*)( &loader )[(int)lVar4] + 0x1d0 ) )(this, (long*)( &loader )[(int)lVar4], param_1);
            goto LAB_00103b9b;
         }

         LAB_00103b7d:if (cVar3 != '\0') goto LAB_00103b82;
         LAB_00103bee:lVar4 = lVar4 + 1;
      }
 while ( (int)lVar4 < loader_count );
   }

   *(undefined8*)this = 0;
   LAB_00103b9b:lVar4 = local_50;
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::is_import_valid(String const&) */undefined4 ResourceLoader::is_import_valid(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   ResourceLoader local_50[8];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap(local_50, (String*)&local_48, (bool*)0x0);
   lVar5 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = 0;
   if (0 < loader_count) {
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], local_50, (String*)&local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_00103ce7;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_00103d4e;
            LAB_00103cec:uVar4 = ( **(code**)( *(long*)( &loader )[(int)lVar5] + 0x1b8 ) )((long*)( &loader )[(int)lVar5], param_1);
            goto LAB_00103d01;
         }

         LAB_00103ce7:if (cVar3 != '\0') goto LAB_00103cec;
         LAB_00103d4e:lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_00103d01:CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::is_imported(String const&) */undefined4 ResourceLoader::is_imported(String *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   ResourceLoader local_50[8];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap(local_50, (String*)&local_48, (bool*)0x0);
   lVar5 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = 0;
   if (0 < loader_count) {
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], local_50, (String*)&local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_00103e37;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_00103e9e;
            LAB_00103e3c:uVar4 = ( **(code**)( *(long*)( &loader )[(int)lVar5] + 0x1c0 ) )((long*)( &loader )[(int)lVar5], param_1);
            goto LAB_00103e51;
         }

         LAB_00103e37:if (cVar3 != '\0') goto LAB_00103e3c;
         LAB_00103e9e:lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_00103e51:CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::get_dependencies(String const&, List<String, DefaultAllocator>*, bool) */void ResourceLoader::get_dependencies(String *param_1, List *param_2, bool param_3) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap((ResourceLoader*)&local_50, (String*)&local_48, (bool*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (0 < loader_count) {
      lVar4 = 0;
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar4] + 0x170 ) )((long*)( &loader )[lVar4], (ResourceLoader*)&local_50, (String*)&local_48);
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

         if (cVar3 != '\0') {
            ( **(code**)( *(long*)( &loader )[lVar4] + 0x1a8 ) )((long*)( &loader )[lVar4], (ResourceLoader*)&local_50, param_2, param_3);
         }

         lVar4 = lVar4 + 1;
      }
 while ( (int)lVar4 < loader_count );
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::rename_dependencies(String const&, HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&) */undefined4 ResourceLoader::rename_dependencies(String *param_1, HashMap *param_2) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined4 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _validate_local_path((String*)&local_48);
   _path_remap((ResourceLoader*)&local_50, (String*)&local_48, (bool*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (0 < loader_count) {
      do {
         local_48 = 0;
         cVar3 = ( **(code**)( *(long*)( &loader )[lVar5] + 0x170 ) )((long*)( &loader )[lVar5], (ResourceLoader*)&local_50, (String*)&local_48);
         lVar2 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 != 0) goto LAB_001040b9;
            local_48 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            if (cVar3 == '\0') goto LAB_0010412e;
            LAB_001040be:uVar4 = ( **(code**)( *(long*)( &loader )[(int)lVar5] + 0x1b0 ) )((long*)( &loader )[(int)lVar5], (ResourceLoader*)&local_50, param_2);
            goto LAB_001040d6;
         }

         LAB_001040b9:if (cVar3 != '\0') goto LAB_001040be;
         LAB_0010412e:lVar5 = lVar5 + 1;
      }
 while ( (int)lVar5 < loader_count );
   }

   uVar4 = 0;
   LAB_001040d6:lVar5 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::path_remap(String const&) */ResourceLoader * __thiscall ResourceLoader::path_remap(ResourceLoader *this,String *param_1){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   _path_remap(this, param_1, (bool*)0x0);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   *(undefined4*)this = *(undefined4*)param_1;
   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( param_1 + 8 ) = 0;
   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      StringName::unref();
      *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_1 + 0x10 ) = 0;
   }

   lVar3 = *(long*)( param_1 + 0x20 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   lVar2 = *(long*)( this + 0x20 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x20 );
            *(undefined8*)( this + 0x20 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 0x20 );
         }
 else {
            *(undefined8*)( this + 0x20 ) = 0;
            lVar3 = *(long*)( param_1 + 0x20 );
         }

      }

      *(long*)( this + 0x20 ) = lVar3;
      *(undefined8*)( param_1 + 0x20 ) = 0;
   }

   *(undefined4*)( this + 0x28 ) = *(undefined4*)( param_1 + 0x28 );
   return;
}
/* ResourceLoader::_load_threaded_request_reuse_user_token(String const&) */long ResourceLoader::_load_threaded_request_reuse_user_token(String *param_1) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   char cVar10;
   uint uVar11;
   long lVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   long in_FS_OFFSET;
   CowData<char32_t> local_80[8];
   undefined8 local_78;
   String local_70[8];
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( user_load_tokens._8_8_ != 0 ) && ( user_load_tokens._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)user_load_tokens._40_4_];
      uVar17 = CONCAT44(0, uVar1);
      lVar12 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)user_load_tokens._40_4_ * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar13 * lVar12;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar15 = SUB168(auVar2 * auVar6, 8);
      uVar11 = *(uint*)( user_load_tokens._16_8_ + lVar15 * 4 );
      uVar14 = SUB164(auVar2 * auVar6, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         lVar16 = user_load_tokens._16_8_;
         while (( uVar13 != uVar11 || ( cVar10 = String::operator ==((String*)( *(long*)( user_load_tokens._8_8_ + lVar15 * 8 ) + 0x10 ), param_1) ),lVar16 = user_load_tokens._16_8_,cVar10 == '\0' )) {
            uVar18 = uVar18 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar14 + 1) * lVar12;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            lVar15 = SUB168(auVar3 * auVar7, 8);
            uVar11 = *(uint*)( lVar16 + lVar15 * 4 );
            uVar14 = SUB164(auVar3 * auVar7, 8);
            if (( uVar11 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar11 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,SUB164(auVar5 * auVar9, 8) < uVar18) goto LAB_001042bb;
         }
;
         lVar12 = *(long*)( user_load_tokens._8_8_ + (ulong)uVar14 * 8 );
         if (lVar12 != 0) {
            cVar10 = is_print_verbose_enabled();
            if (cVar10 != '\0') {
               local_78 = 0;
               local_60 = 0x23;
               local_68 = "\' has been initiated. Not an error.";
               String::parse_latin1((StrRange*)&local_78);
               operator+((char *)
               local_80,(String*)"load_threaded_request(): Another threaded load for resource path \'";
               String::operator +(local_70, (String*)local_80);
               Variant::Variant((Variant*)local_58, local_70);
               stringify_variants((Variant*)&local_68);
               __print_line((String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
               CowData<char32_t>::_unref(local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            }

            lVar12 = *(long*)( lVar12 + 0x18 );
            *(int*)( lVar12 + 400 ) = *(int*)( lVar12 + 400 ) + 1;
            goto LAB_001042bd;
         }

      }

   }

   LAB_001042bb:lVar12 = 0;
   LAB_001042bd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar12;
}
/* ResourceLoader::clear_thread_load_tasks() */void ResourceLoader::clear_thread_load_tasks(void) {
   int *piVar1;
   uint uVar2;
   void *pvVar3;
   bool bVar4;
   bool bVar5;
   int iVar6;
   long *plVar7;
   long lVar8;
   int *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar6 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar6 + 1;
   if (iVar6 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00104876;
      if ((char)*in_FS_OFFSET != '\0') {
         LAB_0010486c:/* WARNING: Subroutine does not return */std::__throw_system_error(0x23);
      }

      iVar6 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar6 != 0) {
         LAB_00104867:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar6);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   cleaning_tasks = 1;
   LAB_00104500:if (thread_load_tasks._44_4_ != 0) {
      do {
         if (thread_load_tasks._24_8_ == 0) break;
         plVar7 = (long*)thread_load_tasks._24_8_;
         bVar5 = true;
         do {
            while (bVar4 = bVar5,(int)plVar7[0xd] == 1) {
               if (( plVar7[6] != 0 ) && ( *(char*)( (long)plVar7 + 0x3c ) != '\0' )) {
                  std::condition_variable::notify_all();
               }

               *(undefined1*)( (long)plVar7 + 0x3c ) = 0;
               plVar7 = (long*)*plVar7;
               bVar4 = false;
               bVar5 = false;
               if (plVar7 == (long*)0x0) goto LAB_00104557;
            }
;
            plVar7 = (long*)*plVar7;
            bVar5 = bVar4;
         }
 while ( plVar7 != (long*)0x0 );
         LAB_00104557:if (bVar4) break;
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         piVar1 = in_FS_OFFSET + 4;
         *piVar1 = *piVar1 + -1;
         if (*piVar1 == 0) {
            if ((char)*in_FS_OFFSET == '\0') {
               __tls_init_part_0();
            }

            if ((char)in_FS_OFFSET[2] == '\0') goto LAB_00104876;
            if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
               pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
               *(undefined1*)( in_FS_OFFSET + 2 ) = 0;
            }

         }

         plVar7 = (long*)OS::get_singleton();
         ( **(code**)( *plVar7 + 0x1f8 ) )(plVar7, 1000);
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         iVar6 = in_FS_OFFSET[4];
         in_FS_OFFSET[4] = iVar6 + 1;
         if (iVar6 + 1 != 1) goto LAB_00104500;
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00104876;
         if ((char)in_FS_OFFSET[2] != '\0') goto LAB_0010486c;
         iVar6 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
         if (iVar6 != 0) goto LAB_00104867;
         *(undefined1*)( in_FS_OFFSET + 2 ) = 1;
         if (thread_load_tasks._44_4_ == 0) break;
      }
 while ( true );
   }

   while (user_load_tokens._24_8_ != 0) {
      lVar8 = *(long*)( user_load_tokens._24_8_ + 0x18 );
      HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::erase((HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>*)user_load_tokens, (String*)( user_load_tokens._24_8_ + 0x10 ));
      if (( *(long*)( lVar8 + 0x188 ) != 0 ) && ( *(long*)( *(long*)( lVar8 + 0x188 ) + -8 ) != 0 )) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar8 + 0x188 ));
      }

      *(undefined4*)( lVar8 + 400 ) = 0;
      RefCounted::unreference();
   }
;
   user_load_tokens._24_8_ = 0;
   if (( thread_load_tasks._8_8_ != 0 ) && ( thread_load_tasks._44_4_ != 0 )) {
      uVar2 = ( &hash_table_size_primes )[(uint)thread_load_tasks._40_4_];
      if (uVar2 != 0) {
         lVar8 = 0;
         do {
            if (*(int*)( thread_load_tasks._16_8_ + lVar8 ) != 0) {
               *(int*)( thread_load_tasks._16_8_ + lVar8 ) = 0;
               pvVar3 = *(void**)( thread_load_tasks._8_8_ + lVar8 * 2 );
               ThreadLoadTask::~ThreadLoadTask((ThreadLoadTask*)( (long)pvVar3 + 0x18 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
               Memory::free_static(pvVar3, false);
               *(undefined8*)( thread_load_tasks._8_8_ + lVar8 * 2 ) = 0;
            }

            lVar8 = lVar8 + 4;
         }
 while ( lVar8 != (ulong)uVar2 * 4 );
      }

      thread_load_tasks._44_4_ = 0;
      thread_load_tasks._24_16_ = (undefined1[16])0x0;
   }

   cleaning_tasks = 0;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   if (*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00104876:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
         return;
      }

   }

   return;
}
/* ResourceLoader::get_resource_ref_override(String const&) */ResourceLoader * __thiscall
ResourceLoader::get_resource_ref_override(ResourceLoader *this,String *param_1){
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
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   char cVar19;
   uint uVar20;
   uint uVar21;
   ulong uVar22;
   long lVar23;
   long lVar24;
   uint uVar25;
   ulong uVar26;
   long lVar27;
   ulong uVar28;
   uint uVar29;
   uint *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   lVar2 = *(long*)in_FS_OFFSET;
   uVar1 = *in_FS_OFFSET;
   if (( lVar2 != 0 ) && ( *in_FS_OFFSET != 0 )) {
      uVar28 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * in_FS_OFFSET * 8 );
      uVar20 = ( uVar1 >> 0x10 ^ uVar1 ) * -0x7a143595;
      uVar20 = ( uVar20 ^ uVar20 >> 0xd ) * -0x3d4d51cb;
      uVar25 = uVar20 ^ uVar20 >> 0x10;
      if (uVar20 == uVar20 >> 0x10) {
         uVar25 = 1;
         uVar22 = uVar28;
      }
 else {
         uVar22 = uVar25 * uVar28;
      }

      uVar26 = CONCAT44(0, ( &hash_table_size_primes )[*in_FS_OFFSET]);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar26;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      lVar23 = SUB168(auVar3 * auVar11, 8);
      uVar20 = *(uint*)( *(long*)in_FS_OFFSET + lVar23 * 4 );
      uVar21 = SUB164(auVar3 * auVar11, 8);
      if (uVar20 != 0) {
         uVar29 = 0;
         while (( uVar25 != uVar20 || ( uVar1 != *(uint*)( *(long*)( lVar2 + lVar23 * 8 ) + 0x10 ) ) )) {
            uVar29 = uVar29 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( uVar21 + 1 ) * uVar28;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar26;
            lVar23 = SUB168(auVar4 * auVar12, 8);
            uVar20 = *(uint*)( *(long*)in_FS_OFFSET + lVar23 * 4 );
            uVar21 = SUB164(auVar4 * auVar12, 8);
            if (( uVar20 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar20 * uVar28,auVar13._8_8_ = 0,auVar13._0_8_ = uVar26,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( ( &hash_table_size_primes )[*in_FS_OFFSET] + uVar21 ) - SUB164(auVar5 * auVar13, 8) ) * uVar28,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,SUB164(auVar6 * auVar14, 8) < uVar29) goto LAB_00104ac8;
         }
;
         lVar2 = *(long*)( lVar2 + (ulong)uVar21 * 8 );
         if (( ( lVar2 != 0 ) && ( *(long*)( lVar2 + 0x20 ) != 0 ) ) && ( *(int*)( lVar2 + 0x44 ) != 0 )) {
            uVar1 = ( &hash_table_size_primes )[*(uint*)( lVar2 + 0x40 )];
            lVar23 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar2 + 0x40 ) * 8 );
            uVar25 = String::hash();
            uVar28 = CONCAT44(0, uVar1);
            lVar27 = *(long*)( lVar2 + 0x28 );
            uVar20 = 1;
            if (uVar25 != 0) {
               uVar20 = uVar25;
            }

            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar20 * lVar23;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar28;
            lVar24 = SUB168(auVar7 * auVar15, 8);
            uVar25 = *(uint*)( lVar27 + lVar24 * 4 );
            uVar21 = SUB164(auVar7 * auVar15, 8);
            if (uVar25 != 0) {
               uVar29 = 0;
               goto LAB_00104a87;
            }

         }

      }

   }

   LAB_00104ac8:*(undefined8*)this = 0;
   return this;
   LAB_00104a87:if (uVar20 == uVar25) {
      cVar19 = String::operator ==((String*)( *(long*)( *(long*)( lVar2 + 0x20 ) + lVar24 * 8 ) + 0x10 ), param_1);
      if (cVar19 != '\0') {
         lVar2 = *(long*)( *(long*)( lVar2 + 0x20 ) + (ulong)uVar21 * 8 );
         if (lVar2 != 0) {
            *(undefined8*)this = 0;
            Ref<Resource>::operator =((Ref<Resource>*)this, *(Ref**)( lVar2 + 0x18 ));
            return this;
         }

         goto LAB_00104ac8;
      }

      lVar27 = *(long*)( lVar2 + 0x28 );
   }

   uVar29 = uVar29 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar21 + 1) * lVar23;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar28;
   lVar24 = SUB168(auVar8 * auVar16, 8);
   uVar25 = *(uint*)( lVar27 + lVar24 * 4 );
   uVar21 = SUB164(auVar8 * auVar16, 8);
   if (( uVar25 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar25 * lVar23,auVar17._8_8_ = 0,auVar17._0_8_ = uVar28,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar21 ) - SUB164(auVar9 * auVar17, 8)) * lVar23,auVar18._8_8_ = 0,auVar18._0_8_ = uVar28,SUB164(auVar10 * auVar18, 8) < uVar29) goto LAB_00104ac8;
   goto LAB_00104a87;
}
/* ResourceLoader::clear_translation_remaps() */void ResourceLoader::clear_translation_remaps(void) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long lVar8;
   puVar6 = remapped_list;
   if (( translation_remaps._8_8_ != 0 ) && ( translation_remaps._44_4_ != 0 )) {
      lVar8 = 0;
      uVar2 = ( &hash_table_size_primes )[(uint)translation_remaps._40_4_];
      if (uVar2 != 0) {
         do {
            if (*(int*)( translation_remaps._16_8_ + lVar8 ) != 0) {
               *(int*)( translation_remaps._16_8_ + lVar8 ) = 0;
               pvVar3 = *(void**)( translation_remaps._8_8_ + lVar8 * 2 );
               CowData<String>::_unref((CowData<String>*)( (long)pvVar3 + 0x20 ));
               if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                     *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar3, false);
               *(undefined8*)( translation_remaps._8_8_ + lVar8 * 2 ) = 0;
            }

            lVar8 = lVar8 + 4;
         }
 while ( lVar8 != (ulong)uVar2 << 2 );
      }

      translation_remaps._44_4_ = 0;
      translation_remaps._24_16_ = (undefined1[16])0x0;
      puVar6 = remapped_list;
   }

   while (puVar6 != (undefined8*)0x0) {
      if ((undefined8**)*puVar6 == &remapped_list) {
         puVar7 = (undefined8*)puVar6[2];
         if (puVar7 != (undefined8*)0x0) {
            puVar7[3] = puVar6[3];
         }

         puVar5 = (undefined8*)puVar6[3];
         if (puVar5 != (undefined8*)0x0) {
            puVar5[2] = puVar7;
            puVar7 = (undefined8*)puVar6[2];
         }

         if (puVar6 == DAT_00112f78) {
            DAT_00112f78 = puVar5;
         }

         remapped_list = puVar7;
         *puVar6 = 0;
         *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
         puVar6 = puVar7;
      }
 else {
         _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
         puVar6 = remapped_list;
      }

   }
;
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
/* ResourceLoader::load_path_remaps() */void ResourceLoader::load_path_remaps(void) {
   long lVar1;
   char cVar2;
   int iVar3;
   String *pSVar4;
   CowData<char32_t> *this;
   CowData *pCVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar4 = (String*)ProjectSettings::get_singleton();
   local_58 = "path_remap/remapped_paths";
   local_60 = 0;
   local_50 = 0x19;
   String::parse_latin1((StrRange*)&local_60);
   cVar2 = ProjectSettings::has_setting(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (cVar2 != '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_60, "path_remap/remapped_paths", false);
      ProjectSettings::get_setting_with_override((StringName*)local_48);
      Variant::operator_cast_to_Vector((Variant*)&local_58);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      if (local_50 != 0) {
         if (( *(ulong*)( local_50 + -8 ) & 1 ) == 0) {
            iVar3 = (int)*(ulong*)( local_50 + -8 );
            if (0 < iVar3) {
               pCVar5 = (CowData*)( local_50 + 8 );
               lVar1 = local_50 + 0x18;
               do {
                  this(CowData<char32_t> * HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator []((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>*)path_remaps, (String*)( pCVar5 + -8 )));
                  if (*(long*)this != *(long*)pCVar5) {
                     CowData<char32_t>::_ref(this, pCVar5);
                  }

                  pCVar5 = pCVar5 + 0x10;
               }
 while ( pCVar5 != (CowData*)( lVar1 + ( ulong )(iVar3 - 1U >> 1) * 0x10 ) );
            }

         }
 else {
            _err_print_error("load_path_remaps", "core/io/resource_loader.cpp", 0x598, "Condition \"rc & 1\" is true.", 0, 0);
         }

      }

      CowData<String>::_unref((CowData<String>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* ResourceLoader::load_translation_remaps() */void ResourceLoader::load_translation_remaps(void) {
   Variant *pVVar1;
   long lVar2;
   Variant *pVVar3;
   char cVar4;
   int iVar5;
   String *pSVar6;
   long lVar7;
   long lVar8;
   long *plVar9;
   long *plVar10;
   long in_FS_OFFSET;
   Variant local_a8[8];
   long *local_a0;
   Variant local_98[8];
   long local_90[2];
   long *local_80;
   Variant *local_78;
   Variant *local_70;
   Variant *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar6 = (String*)ProjectSettings::get_singleton();
   local_68 = (Variant*)0x115b20;
   local_78 = (Variant*)0x0;
   local_60 = 0x2e;
   String::parse_latin1((StrRange*)&local_78);
   cVar4 = ProjectSettings::has_setting(pSVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (cVar4 != '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName*)&local_68, "internationalization/locale/translation_remaps", false);
      ProjectSettings::get_setting_with_override((StringName*)local_58);
      Variant::operator_cast_to_Dictionary(local_a8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Variant*)0x0 )) {
         StringName::unref();
      }

      local_a0 = (long*)0x0;
      Dictionary::get_key_list((List*)local_a8);
      if (( local_a0 != (long*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
         do {
            Dictionary::operator [](local_a8);
            Variant::operator_cast_to_Array(local_98);
            local_80 = (long*)0x0;
            iVar5 = Array::size();
            CowData<String>::resize<false>((CowData<String>*)&local_80, (long)iVar5);
            CowData<String>::_copy_on_write((CowData<String>*)&local_80);
            plVar10 = local_80;
            Array::begin();
            Array::end();
            plVar9 = plVar10;
            if (local_68 != local_78) {
               do {
                  if (local_70 != (Variant*)0x0) {
                     Variant::operator =(local_70, local_78);
                  }

                  Variant::operator_cast_to_String((Variant*)local_90);
                  lVar2 = local_90[0];
                  lVar7 = *plVar9;
                  if (lVar7 == local_90[0]) {
                     if (lVar7 != 0) {
                        LOCK();
                        plVar10 = (long*)( lVar7 + -0x10 );
                        *plVar10 = *plVar10 + -1;
                        UNLOCK();
                        if (*plVar10 == 0) {
                           local_90[0] = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                        }

                     }

                  }
 else {
                     if (lVar7 != 0) {
                        LOCK();
                        plVar10 = (long*)( lVar7 + -0x10 );
                        *plVar10 = *plVar10 + -1;
                        UNLOCK();
                        if (*plVar10 == 0) {
                           lVar7 = *plVar9;
                           *plVar9 = 0;
                           Memory::free_static((void*)( lVar7 + -0x10 ), false);
                        }
 else {
                           *plVar9 = 0;
                        }

                     }

                     *plVar9 = local_90[0];
                  }

                  local_78 = local_78 + 0x18;
                  plVar10 = local_80;
                  plVar9 = plVar9 + 1;
               }
 while ( local_78 != local_68 );
            }

            Variant::operator_cast_to_String((Variant*)&local_68);
            lVar7 = HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator []((HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>*)translation_remaps, (String*)&local_68);
            if (*(long**)( lVar7 + 8 ) != plVar10) {
               CowData<String>::_ref((CowData<String>*)( lVar7 + 8 ), (CowData*)&local_80);
            }

            pVVar3 = local_68;
            if (local_68 != (Variant*)0x0) {
               LOCK();
               pVVar1 = local_68 + -0x10;
               *(long*)pVVar1 = *(long*)pVVar1 + -1;
               UNLOCK();
               if (*(long*)pVVar1 == 0) {
                  local_68 = (Variant*)0x0;
                  Memory::free_static(pVVar3 + -0x10, false);
               }

            }

            CowData<String>::_unref((CowData<String>*)&local_80);
            Array::~Array((Array*)local_98);
            lVar8 = *(long*)( lVar8 + 0x18 );
         }
 while ( lVar8 != 0 );
      }

      List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_a0);
      Dictionary::~Dictionary((Dictionary*)local_a8);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* ResourceLoader::_load(String const&, String const&, String const&,
   ResourceFormatLoader::CacheMode, Error*, bool, float*) */ResourceLoader * __thiscall
ResourceLoader::_load
          (ResourceLoader *this,CowData *param_1,String *param_2,CowData *param_3,undefined4 param_5
          ,undefined4 *param_6,undefined1 param_7,undefined8 param_8){
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   CowData *pCVar5;
   uint uVar6;
   ulong uVar7;
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
   code *pcVar28;
   ulong uVar29;
   ulong uVar30;
   char cVar31;
   char cVar32;
   char cVar33;
   uint uVar34;
   int iVar35;
   ulong uVar36;
   uint uVar37;
   long lVar38;
   ulong uVar39;
   undefined8 uVar40;
   uint uVar41;
   String *this_00;
   long lVar42;
   ulong uVar43;
   void *pvVar44;
   long lVar45;
   uint uVar46;
   uint uVar47;
   uint *puVar48;
   Object *pOVar49;
   long *plVar50;
   Object *pOVar51;
   uint *in_FS_OFFSET;
   CowData<char32_t> *local_c8;
   Object *local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   this_00 = (String*)param_1;
   if (( *(long*)param_2 != 0 ) && ( 1 < *(uint*)( *(long*)param_2 + -8 ) )) {
      this_00 = param_2;
   }

   *in_FS_OFFSET = *in_FS_OFFSET + 1;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
      lVar42 = *(long*)in_FS_OFFSET;
      cVar31 = (char)*in_FS_OFFSET;
      if (( lVar42 != 0 ) && ( *(long*)( lVar42 + -8 ) != 0 )) {
         if (cVar31 == '\0') {
            __tls_init_part_0();
            uVar47 = *in_FS_OFFSET;
            cVar31 = (char)*in_FS_OFFSET;
            *in_FS_OFFSET = uVar47 + 1;
            if (uVar47 + 1 == 1) {
               if (cVar31 == '\0') {
                  __tls_init_part_0();
               }

               goto LAB_00105fab;
            }

            LAB_00105feb:if (( cVar31 == '\0' ) && ( __tls_init_part_0(),(char)*in_FS_OFFSET == '\0' )) {
               __tls_init_part_0();
            }

            lVar42 = *(long*)in_FS_OFFSET;
            goto LAB_00105aec;
         }

         uVar47 = *in_FS_OFFSET;
         *in_FS_OFFSET = uVar47 + 1;
         if (uVar47 + 1 == 1) {
            LAB_00105fab:if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00106362;
            if ((char)*in_FS_OFFSET != '\0') {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(0x23);
            }

            iVar35 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
            if (iVar35 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar35);
            }

            *(undefined1*)in_FS_OFFSET = 1;
            cVar31 = (char)*in_FS_OFFSET;
            goto LAB_00105feb;
         }

         goto LAB_00105af5;
      }

      LAB_00105c9d:if (cVar31 == '\0') {
         __tls_init_part_0();
      }

   }
 else {
      lVar42 = *(long*)in_FS_OFFSET;
      if (( lVar42 != 0 ) && ( *(long*)( lVar42 + -8 ) != 0 )) {
         uVar47 = *in_FS_OFFSET;
         *in_FS_OFFSET = uVar47 + 1;
         if (uVar47 + 1 == 1) goto LAB_00105fab;
         LAB_00105aec:if (lVar42 == 0) {
            lVar45 = 0;
            lVar38 = -1;
            goto LAB_00106308;
         }

         LAB_00105af5:lVar45 = *(long*)( lVar42 + -8 );
         lVar38 = lVar45 + -1;
         if (lVar38 < 0) {
            LAB_00106308:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar38, lVar45, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar28 = (code*)invalidInstructionException();
            ( *pcVar28 )();
         }

         pCVar5 = (CowData*)( lVar42 + lVar38 * 8 );
         local_70 = 0;
         if (*(long*)pCVar5 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, pCVar5);
         }

         local_68 = (char*)( (ulong)local_68._4_4_ << 0x20 );
         cVar31 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_70, (uint*)&local_68);
         if (cVar31 == '\0') {
            String::operator ==(this_00, (String*)&local_70);
         }
 else {
            lVar42 = *(long*)( thread_load_tasks._8_8_ + ( (ulong)local_68 & 0xffffffff ) * 8 );
            cVar31 = String::operator ==(this_00, (String*)&local_70);
            if (( lVar42 != 0 ) && ( cVar31 == '\0' )) {
               HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)&local_68);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
            *in_FS_OFFSET = *in_FS_OFFSET - 1;
            cVar31 = (char)*in_FS_OFFSET;
            if (*in_FS_OFFSET != 0) goto LAB_00105c9d;
            if (cVar31 == '\0') {
               __tls_init_part_0();
            }

         }
 else {
            *in_FS_OFFSET = *in_FS_OFFSET - 1;
            if (*in_FS_OFFSET != 0) goto LAB_001054f9;
         }

         if ((char)*in_FS_OFFSET == '\0') {
            LAB_00106362:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
            *(undefined1*)in_FS_OFFSET = 0;
         }

         cVar31 = (char)*in_FS_OFFSET;
         goto LAB_00105c9d;
      }

   }

   LAB_001054f9:local_c8 = (CowData<char32_t>*)&local_68;
   local_68 = (char*)0x0;
   if (*(long*)this_00 != 0) {
      CowData<char32_t>::_ref(local_c8, (CowData*)this_00);
   }

   Vector<String>::push_back(*(Vector<String>**)in_FS_OFFSET, local_c8);
   CowData<char32_t>::_unref(local_c8);
   cVar31 = is_print_verbose_enabled();
   if (cVar31 != '\0') {
      local_78 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, param_1);
      }

      local_80 = 0;
      local_68 = "Loading resource: %s";
      local_60 = 0x14;
      String::parse_latin1((StrRange*)&local_80);
      vformat<String>((CowData<char32_t>*)&local_70, (StrRange*)&local_80, (CowData<char32_t>*)&local_78);
      Variant::Variant((Variant*)local_58, (String*)&local_70);
      stringify_variants((Variant*)local_c8);
      __print_line((String*)local_c8);
      CowData<char32_t>::_unref(local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   if (loader_count < 1) {
      pOVar49 = (Object*)0x0;
      cVar31 = '\0';
      LAB_00105700:cVar32 = (char)*in_FS_OFFSET;
   }
 else {
      lVar42 = 0;
      cVar31 = '\0';
      do {
         cVar32 = ( **(code**)( *(long*)( &loader )[lVar42] + 0x170 ) )((long*)( &loader )[lVar42], param_1, param_3);
         if (( cVar32 != '\0' ) && ( ( **(code**)( *(long*)( &loader )[lVar42] + 0x150 ) )(local_c8, (long*)( &loader )[lVar42], param_1, this_00, param_6, param_7, param_8, param_5),pOVar49 = (Object*)local_68,cVar31 = cVar32,(Object*)local_68 != (Object*)0x0 )) {
            cVar31 = RefCounted::reference();
            if (cVar31 == '\0') {
               cVar31 = cVar32;
               if (( (Object*)local_68 != (Object*)0x0 ) && ( cVar33 = RefCounted::unreference() ),pOVar51 = (Object*)local_68,cVar33 != '\0') {
                  pOVar49 = (Object*)0x0;
                  cVar33 = predelete_handler((Object*)local_68);
                  if (cVar33 != '\0') goto LAB_00105c05;
               }

            }
 else {
               if (( ( (Object*)local_68 == (Object*)0x0 ) || ( cVar33 = RefCounted::unreference() ),pOVar51 = (Object*)local_68,cVar33 == '\0' )) goto LAB_00105700;
               LAB_00105c05:( **(code**)( *(long*)pOVar51 + 0x140 ) )(pOVar51);
               Memory::free_static(pOVar51, false);
               cVar31 = cVar32;
               if (pOVar49 != (Object*)0x0) goto LAB_00105700;
            }

         }

         lVar42 = lVar42 + 1;
      }
 while ( (int)lVar42 < loader_count );
      pOVar49 = (Object*)0x0;
      cVar32 = (char)*in_FS_OFFSET;
   }

   if (( cVar32 == '\0' ) && ( __tls_init_part_0(),(char)*in_FS_OFFSET == '\0' )) {
      __tls_init_part_0();
   }

   if (*(long*)in_FS_OFFSET == 0) {
      lVar42 = -1;
   }
 else {
      lVar42 = *(long*)( *(long*)in_FS_OFFSET + -8 ) + -1;
   }

   CowData<String>::resize<false>(*(CowData<String>**)in_FS_OFFSET, lVar42);
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   lVar42 = *(long*)in_FS_OFFSET;
   uVar47 = *in_FS_OFFSET;
   if (( lVar42 != 0 ) && ( *in_FS_OFFSET != 0 )) {
      uVar6 = ( &hash_table_size_primes )[*in_FS_OFFSET];
      uVar7 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * in_FS_OFFSET * 8 );
      uVar34 = ( uVar47 >> 0x10 ^ uVar47 ) * -0x7a143595;
      uVar34 = ( uVar34 ^ uVar34 >> 0xd ) * -0x3d4d51cb;
      uVar41 = uVar34 ^ uVar34 >> 0x10;
      if (uVar34 == uVar34 >> 0x10) {
         uVar41 = 1;
         uVar36 = uVar7;
      }
 else {
         uVar36 = uVar41 * uVar7;
      }

      lVar45 = *(long*)in_FS_OFFSET;
      uVar29 = CONCAT44(0, uVar6);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar29;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar36;
      lVar38 = SUB168(auVar8 * auVar18, 8);
      uVar34 = *(uint*)( lVar45 + lVar38 * 4 );
      uVar37 = SUB164(auVar8 * auVar18, 8);
      if (uVar34 != 0) {
         uVar46 = 0;
         LAB_00105848:uVar36 = (ulong)uVar37;
         if (( uVar34 != uVar41 ) || ( uVar47 != *(uint*)( *(long*)( lVar42 + lVar38 * 8 ) + 0x10 ) )) goto LAB_00105800;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( uVar37 + 1 ) * uVar7;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar29;
         uVar39 = SUB168(auVar12 * auVar22, 8);
         puVar48 = (uint*)( lVar45 + uVar39 * 4 );
         uVar34 = SUB164(auVar12 * auVar22, 8);
         uVar47 = *puVar48;
         if (( uVar47 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar47 * uVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar29,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( uVar34 + uVar6 ) - SUB164(auVar13 * auVar23, 8) ) * uVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar29,uVar30 = (ulong)uVar34,uVar43 = uVar36,SUB164(auVar14 * auVar24, 8) != 0) {
            while (true) {
               uVar36 = uVar30;
               puVar1 = (uint*)( lVar45 + uVar43 * 4 );
               *puVar48 = *puVar1;
               puVar2 = (undefined8*)( lVar42 + uVar39 * 8 );
               *puVar1 = uVar47;
               puVar3 = (undefined8*)( lVar42 + uVar43 * 8 );
               uVar40 = *puVar2;
               *puVar2 = *puVar3;
               *puVar3 = uVar40;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( (int)uVar36 + 1 ) * uVar7;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar29;
               uVar39 = SUB168(auVar17 * auVar27, 8);
               puVar48 = (uint*)( lVar45 + uVar39 * 4 );
               uVar47 = *puVar48;
               if (( uVar47 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = uVar47 * uVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar29,auVar16._8_8_ = 0,auVar16._0_8_ = ( ( SUB164(auVar17 * auVar27, 8) + uVar6 ) - SUB164(auVar15 * auVar25, 8) ) * uVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar29,SUB164(auVar16 * auVar26, 8) == 0) break;
               uVar30 = uVar39 & 0xffffffff;
               uVar43 = uVar36;
            }
;
         }

         plVar4 = (long*)( lVar42 + uVar36 * 8 );
         *(undefined4*)( lVar45 + uVar36 * 4 ) = 0;
         plVar50 = (long*)*plVar4;
         if (*(long**)in_FS_OFFSET == plVar50) {
            *(long*)in_FS_OFFSET = *plVar50;
            plVar50 = (long*)*plVar4;
            if (*(long**)in_FS_OFFSET == plVar50) goto LAB_00106036;
         }
 else if (*(long**)in_FS_OFFSET == plVar50) {
            LAB_00106036:*(long*)in_FS_OFFSET = plVar50[1];
            plVar50 = (long*)*plVar4;
         }

         if ((long*)plVar50[1] != (long*)0x0) {
            *(long*)plVar50[1] = *plVar50;
            plVar50 = (long*)*plVar4;
         }

         if (*plVar50 != 0) {
            *(long*)( *plVar50 + 8 ) = plVar50[1];
            plVar50 = (long*)*plVar4;
         }

         pvVar44 = (void*)plVar50[4];
         if (pvVar44 != (void*)0x0) {
            if (*(int*)( (long)plVar50 + 0x44 ) != 0) {
               uVar47 = ( &hash_table_size_primes )[*(uint*)( plVar50 + 8 )];
               if (uVar47 == 0) {
                  *(undefined4*)( (long)plVar50 + 0x44 ) = 0;
                  *(undefined1(*) [16])( plVar50 + 6 ) = (undefined1[16])0x0;
               }
 else {
                  lVar42 = 0;
                  do {
                     if (*(int*)( plVar50[5] + lVar42 ) != 0) {
                        pvVar44 = *(void**)( (long)pvVar44 + lVar42 * 2 );
                        *(int*)( plVar50[5] + lVar42 ) = 0;
                        if (( *(long*)( (long)pvVar44 + 0x18 ) != 0 ) && ( cVar32 = RefCounted::unreference() ),cVar32 != '\0') {
                           pOVar51 = *(Object**)( (long)pvVar44 + 0x18 );
                           cVar32 = predelete_handler(pOVar51);
                           if (cVar32 != '\0') {
                              ( **(code**)( *(long*)pOVar51 + 0x140 ) )(pOVar51);
                              Memory::free_static(pOVar51, false);
                           }

                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar44 + 0x10 ));
                        Memory::free_static(pvVar44, false);
                        pvVar44 = (void*)plVar50[4];
                        *(undefined8*)( (long)pvVar44 + lVar42 * 2 ) = 0;
                     }

                     lVar42 = lVar42 + 4;
                  }
 while ( lVar42 != (ulong)uVar47 << 2 );
                  *(undefined4*)( (long)plVar50 + 0x44 ) = 0;
                  *(undefined1(*) [16])( plVar50 + 6 ) = (undefined1[16])0x0;
                  if (pvVar44 == (void*)0x0) goto LAB_00105a30;
               }

            }

            Memory::free_static(pvVar44, false);
            Memory::free_static((void*)plVar50[5], false);
         }

         LAB_00105a30:Memory::free_static(plVar50, false);
         *(undefined8*)( *(long*)in_FS_OFFSET + uVar36 * 8 ) = 0;
         uVar47 = *in_FS_OFFSET;
         *in_FS_OFFSET = *in_FS_OFFSET - 1;
      }

   }

   LAB_00105a5d:*in_FS_OFFSET = uVar47 - 1;
   if (pOVar49 != (Object*)0x0) {
      *(undefined8*)this = 0;
      Ref<Resource>::operator =((Ref<Resource>*)this, (Ref*)pOVar49);
      cVar31 = RefCounted::unreference();
      if (( cVar31 != '\0' ) && ( cVar31 = predelete_handler(pOVar49) ),cVar31 != '\0') {
         ( **(code**)( *(long*)pOVar49 + 0x140 ) )(pOVar49);
         Memory::free_static(pOVar49, false);
      }

      goto LAB_00105a9a;
   }

   cVar32 = is_print_verbose_enabled();
   if (cVar32 != '\0') {
      local_78 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, param_1);
      }

      local_80 = 0;
      String::parse_latin1((String*)&local_80, "Failed loading resource: %s");
      vformat<String>((CowData<char32_t>*)&local_70, (String*)&local_80, (CowData<char32_t>*)&local_78);
      Variant::Variant((Variant*)local_58, (String*)&local_70);
      stringify_variants((Variant*)local_c8);
      __print_line((String*)local_c8);
      CowData<char32_t>::_unref(local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   lVar42 = Engine::get_singleton();
   if (*(char*)( lVar42 + 0xc0 ) == '\0') {
      LAB_00105ce9:if (cVar31 == '\0') {
         FileAccess::create(&local_88, 0);
         cVar31 = ( **(code**)( *(long*)local_88 + 0x2e0 ) )(local_88, param_1);
         if (cVar31 == '\0') {
            if (param_6 != (undefined4*)0x0) {
               *param_6 = 7;
            }

            local_70 = 0;
            if (*(long*)param_3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, param_3);
            }

            local_78 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, param_1);
            }

            local_80 = 0;
            String::parse_latin1((String*)&local_80, "Resource file not found: %s (expected type: %s)");
            vformat<String,String>(local_c8, (String*)&local_80, (CowData<char32_t>*)&local_78, (CowData<char32_t>*)&local_70);
            uVar40 = 0x160;
         }
 else {
            if (param_6 != (undefined4*)0x0) {
               *param_6 = 0xf;
            }

            local_70 = 0;
            if (*(long*)param_3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, param_3);
            }

            local_78 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, param_1);
            }

            local_80 = 0;
            String::parse_latin1((String*)&local_80, "No loader found for resource: %s (expected type: %s)");
            vformat<String,String>(local_c8, (String*)&local_80, (CowData<char32_t>*)&local_78, (CowData<char32_t>*)&local_70);
            uVar40 = 0x167;
         }

         _err_print_error("_load", "core/io/resource_loader.cpp", uVar40, "Method/function failed. Returning: Ref<Resource>()", local_c8, 0, 0);
         CowData<char32_t>::_unref(local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         *(undefined8*)this = 0;
         if (( ( local_88 != (Object*)0x0 ) && ( cVar31 = RefCounted::unreference() ),cVar31 != '\0' )) &&( cVar31 = cVar31 != '\0' )(**(code**)( *(long*)local_88 + 0x140 ))(local_88);
         Memory::free_static(local_88, false);
      }

      goto LAB_00105a9a;
   }

}
else{String::get_extension();ResourceFormatImporter::get_importer_by_extension((String*)local_c8);if ((Object*)local_68 == (Object*)0x0) {
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   goto LAB_00105ce9;
}
cVar31 = RefCounted::unreference();pOVar49 = (Object*)local_68;if (( cVar31 != '\0' ) && ( cVar31 = predelete_handler((Object*)local_68) ),cVar31 != '\0') {
   ( **(code**)( *(long*)pOVar49 + 0x140 ) )(pOVar49);
   Memory::free_static(pOVar49, false);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);if (param_6 != (undefined4*)0x0) {
   *param_6 = 7;
}
}local_70 = 0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, param_1);
}
local_78 = 0;String::parse_latin1((String*)&local_78, "Failed loading resource: %s. Make sure resources have been imported by opening the project in the editor at least once.");vformat<String>(local_c8, (CowData<char32_t>*)&local_78, (CowData<char32_t>*)&local_70);_err_print_error("_load", "core/io/resource_loader.cpp", 0x157, "Condition \"found\" is true. Returning: Ref<Resource>()", local_c8, 0, 0);CowData<char32_t>::_unref(local_c8);CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);*(undefined8*)this = 0;LAB_00105a9a:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_00105800:uVar46 = uVar46 + 1;auVar9._8_8_ = 0;auVar9._0_8_ = ( uVar37 + 1 ) * uVar7;auVar19._8_8_ = 0;auVar19._0_8_ = uVar29;lVar38 = SUB168(auVar9 * auVar19, 8);uVar34 = *(uint*)( lVar45 + lVar38 * 4 );uVar37 = SUB164(auVar9 * auVar19, 8);if (( uVar34 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar34 * uVar7,auVar20._8_8_ = 0,auVar20._0_8_ = uVar29,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( uVar6 + uVar37 ) - SUB164(auVar10 * auVar20, 8) ) * uVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar29,SUB164(auVar11 * auVar21, 8) < uVar46) goto LAB_00105a5d;goto LAB_00105848;}/* WARNING: Removing unreachable block (ram,0x00106a10) *//* WARNING: Removing unreachable block (ram,0x00106a1d) *//* ResourceLoader::_run_load_task(void*) */void ResourceLoader::_run_load_task(void *param_1) {
   String *pSVar1;
   Ref<Resource> *this;
   undefined4 uVar2;
   int iVar3;
   undefined8 uVar4;
   code *pcVar5;
   char cVar6;
   int iVar7;
   long lVar8;
   int *in_FS_OFFSET;
   CallQueue *local_70;
   bool local_65;
   int local_64;
   ResourceLoader local_60[8];
   Ref *local_58;
   Ref *local_50;
   Ref *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
      iVar7 = *in_FS_OFFSET;
      cVar6 = (char)*in_FS_OFFSET;
      *in_FS_OFFSET = iVar7 + 1;
      if (iVar7 + 1 == 1) {
         if (cVar6 == '\0') {
            __tls_init_part_0();
         }

         goto LAB_00106951;
      }

      joined_r0x00106891:if (cleaning_tasks == '\0') {
         if (cVar6 != '\0') goto LAB_001063ed;
         __tls_init_part_0();
         *in_FS_OFFSET = *in_FS_OFFSET + -1;
         iVar7 = *in_FS_OFFSET;
         joined_r0x001068ad:if (iVar7 == 0) {
            if ((char)*in_FS_OFFSET == '\0') {
               __tls_init_part_0();
            }

            if ((char)*in_FS_OFFSET == '\0') goto LAB_00106d56;
            if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
               pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
               *(undefined1*)in_FS_OFFSET = 0;
            }

         }

         uVar4 = *(undefined8*)in_FS_OFFSET;
         iVar7 = *in_FS_OFFSET;
         *(void**)in_FS_OFFSET = param_1;
         if (iVar7 == 0) {
            if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
               /* WARNING: Subroutine does not return */
               Thread::caller_id();
            }

            if (*(long*)( (long)in_FS_OFFSET + lRam0000000000106676 ) == 1) goto LAB_00106423;
            MessageQueue::thread_singleton();
            lVar8 = lRam0000000000106699;
            if (( *(long*)( (long)in_FS_OFFSET + lRam0000000000106699 ) == 0 ) || ( MessageQueue::thread_singleton(),MessageQueue::main_singleton == *(long*)( (long)in_FS_OFFSET + lVar8 ) )) {
               local_70 = (CallQueue*)operator_new(0x78, "");
               local_48 = (Ref*)0x0;
               CallQueue::CallQueue(local_70, (PagedAllocator*)0x0, 0x2000, (String*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               MessageQueue::set_thread_singleton_override(local_70);
            }
 else {
               local_70 = (CallQueue*)0x0;
            }

            set_current_thread_safe_for_nodes(true);
         }
 else {
            LAB_00106423:local_70 = (CallQueue*)0x0;
            lVar8 = lRam000000000010643f;
         }

         pSVar1 = (String*)( (long)param_1 + 0x30 );
         local_65 = false;
         _path_remap(local_60, pSVar1, &local_65);
         local_64 = 0;
         uVar2 = *(undefined4*)( (long)param_1 + 0x54 );
         cVar6 = String::operator !=((String*)local_60, pSVar1);
         local_48 = (Ref*)0x0;
         if (( cVar6 != '\0' ) && ( *(long*)( (long)param_1 + 0x30 ) != 0 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)pSVar1);
         }

         _load((ResourceLoader*)&local_58, local_60, (CowData<char32_t>*)&local_48, (long)param_1 + 0x38, uVar2, &local_64);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         MessageQueue::thread_singleton();
         if (( *(long*)( (long)in_FS_OFFSET + lVar8 ) != 0 ) && ( MessageQueue::thread_singleton(),MessageQueue::main_singleton != *(long*)( (long)in_FS_OFFSET + lVar8 ) )) {
            MessageQueue::thread_singleton();
            if (*(long*)( (long)in_FS_OFFSET + lVar8 ) != 0) {
               MessageQueue::thread_singleton();
            }

            CallQueue::flush();
         }

         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         iVar7 = *in_FS_OFFSET;
         *in_FS_OFFSET = iVar7 + 1;
         if (iVar7 + 1 == 1) {
            if ((char)*in_FS_OFFSET == '\0') {
               __tls_init_part_0();
            }

            if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00106d56;
            if ((char)*in_FS_OFFSET != '\0') {
               LAB_00106d67:/* WARNING: Subroutine does not return */std::__throw_system_error(0x23);
            }

            iVar7 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
            if (iVar7 != 0) goto LAB_00106d60;
            *(undefined1*)in_FS_OFFSET = 1;
         }

         this(Ref<Resource> * )((long)param_1 + 0x60);
         Ref<Resource>::operator =(this, local_58);
         *(undefined4*)( (long)param_1 + 0x40 ) = 0x3f800000;
         *(int*)( (long)param_1 + 0x58 ) = local_64;
         *(uint*)( (long)param_1 + 0x50 ) = ( local_64 == 0 ) + 2;
         if (( *(long*)( (long)param_1 + 0x18 ) != 0 ) && ( *(char*)( (long)param_1 + 0x24 ) != '\0' )) {
            std::condition_variable::notify_all();
         }

         iVar3 = *(int*)( (long)param_1 + 0x54 );
         *(undefined1*)( (long)param_1 + 0x24 ) = 0;
         if (*(long*)( (long)param_1 + 0x60 ) == 0) {
            if (iVar3 != 3 && iVar3 != 0) {
               ResourceCache::get_ref((String*)&local_50);
               if (local_50 != (Ref*)0x0) {
                  Ref<Resource>::operator =(this, local_50);
                  *(undefined4*)( (long)param_1 + 0x50 ) = 3;
                  *(undefined4*)( (long)param_1 + 0x40 ) = 0x3f800000;
                  if ((char)*in_FS_OFFSET == '\0') {
                     __tls_init_part_0();
                  }

                  *in_FS_OFFSET = *in_FS_OFFSET + -1;
                  if (*in_FS_OFFSET == 0) {
                     if ((char)*in_FS_OFFSET == '\0') {
                        __tls_init_part_0();
                     }

                     std::unique_lock<std::mutex>::unlock(*(unique_lock<std::mutex>**)in_FS_OFFSET);
                  }

                  pcVar5 = _loaded_callback;
                  if (_loaded_callback != (code*)0x0) {
                     local_48 = (Ref*)0x0;
                     Ref<Resource>::operator =((Ref<Resource>*)&local_48, *(Ref**)( (long)param_1 + 0x60 ));
                     ( *pcVar5 )((CowData<char32_t>*)&local_48);
                     Ref<Resource>::unref((Ref<Resource>*)&local_48);
                  }

                  Ref<Resource>::unref((Ref<Resource>*)&local_50);
                  goto LAB_001067bb;
               }

               Ref<Resource>::unref((Ref<Resource>*)&local_50);
            }

            RefCounted::unreference();
            if ((char)*in_FS_OFFSET == '\0') {
               __tls_init_part_0();
            }

            *in_FS_OFFSET = *in_FS_OFFSET + -1;
            if (*in_FS_OFFSET == 0) {
               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
               }

               if ((char)*in_FS_OFFSET == '\0') goto LAB_00106d56;
               if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
                  pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
                  *(undefined1*)in_FS_OFFSET = 0;
               }

            }

         }
 else {
            if ((char)*in_FS_OFFSET == '\0') {
               __tls_init_part_0();
            }

            *in_FS_OFFSET = *in_FS_OFFSET + -1;
            if (*in_FS_OFFSET == 0) {
               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
               }

               if ((char)*in_FS_OFFSET == '\0') goto LAB_00106d56;
               if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
                  pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
                  *(undefined1*)in_FS_OFFSET = 0;
               }

            }

            if (iVar3 != 3 && iVar3 != 0) {
               iVar7 = pthread_mutex_lock((pthread_mutex_t*)&ResourceCache::lock);
               if (iVar7 != 0) {
                  LAB_00106d60:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar7);
               }

               ResourceCache::get_ref((String*)&local_48);
               if (local_48 == (Ref*)0x0) {
                  ( **(code**)( **(long**)( (long)param_1 + 0x60 ) + 0x188 ) )(*(long**)( (long)param_1 + 0x60 ), pSVar1, 0);
                  LAB_00106c82:pthread_mutex_unlock((pthread_mutex_t*)&ResourceCache::lock);
               }
 else {
                  if (*(Ref**)( (long)param_1 + 0x60 ) == local_48) goto LAB_00106c82;
                  pthread_mutex_unlock((pthread_mutex_t*)&ResourceCache::lock);
                  if (( iVar3 - 2U & 0xfffffffd ) == 0) {
                     ( **(code**)( *(long*)local_48 + 0x178 ) )(local_48, this);
                  }

                  Ref<Resource>::operator =(this, local_48);
               }

               Ref<Resource>::unref((Ref<Resource>*)&local_48);
            }
 else {
               ( **(code**)( **(long**)( (long)param_1 + 0x60 ) + 400 ) )();
            }

            if (local_65 != false) {
               Resource::set_as_translation_remapped(SUB81(*(undefined8*)( (long)param_1 + 0x60 ), 0));
            }

            Object::set_edited(SUB81(*(undefined8*)( (long)param_1 + 0x60 ), 0));
            if (timestamp_on_load != '\0') {
               lVar8 = FileAccess::get_modified_time((String*)local_60);
               pcVar5 = *(code**)( **(long**)( (long)param_1 + 0x60 ) + 0x1b0 );
               if (pcVar5 == Resource::set_last_modified_time) {
                  ( *(long**)( (long)param_1 + 0x60 ) )[0x33] = lVar8;
               }
 else {
                  ( *pcVar5 )();
               }

            }

            pcVar5 = _loaded_callback;
            if (_loaded_callback == (code*)0x0) {
               LAB_001067bb:RefCounted::unreference();
            }
 else {
               local_48 = (Ref*)0x0;
               Ref<Resource>::operator =((Ref<Resource>*)&local_48, *(Ref**)( (long)param_1 + 0x60 ));
               ( *pcVar5 )((CowData<char32_t>*)&local_48);
               Ref<Resource>::unref((Ref<Resource>*)&local_48);
               RefCounted::unreference();
            }

         }

         if (( *in_FS_OFFSET == 0 ) && ( local_70 != (CallQueue*)0x0 )) {
            MessageQueue::set_thread_singleton_override((CallQueue*)0x0);
            ( *(code*)**(undefined8**)local_70 )(local_70);
            Memory::free_static(local_70, false);
         }

         *(undefined8*)in_FS_OFFSET = uVar4;
         if (( ( local_58 != (Ref*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
         Memory::free_static(local_58, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_0010681e;
   }

   *(undefined4*)( (long)param_1 + 0x50 ) = 2;
   if (cVar6 == '\0') {
      __tls_init_part_0();
   }

}
else{iVar7 = *in_FS_OFFSET;*in_FS_OFFSET = iVar7 + 1;if (iVar7 + 1 == 1) {
   LAB_00106951:if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00106d56;
   if ((char)*in_FS_OFFSET != '\0') goto LAB_00106d67;
   iVar7 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
   if (iVar7 != 0) goto LAB_00106d60;
   *(undefined1*)in_FS_OFFSET = 1;
   cVar6 = (char)*in_FS_OFFSET;
   goto joined_r0x00106891;
}
if (cleaning_tasks == '\0') {
   LAB_001063ed:*in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar7 = *in_FS_OFFSET;
   goto joined_r0x001068ad;
}
*(undefined4*)( (long)param_1 + 0x50 ) = 2;}*in_FS_OFFSET = *in_FS_OFFSET + -1;if (*in_FS_OFFSET == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   if ((char)*in_FS_OFFSET == '\0') {
      LAB_00106d56:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
   }

   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
LAB_0010681e:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceFormatLoader::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ResourceFormatLoader::get_recognized_extensions(ResourceFormatLoader *this, List *param_1) {
   long lVar1;
   CowData<char32_t> *this_00;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_120;
   undefined8 local_118;
   long local_110[2];
   long local_100;
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined8 local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   if (plVar5 == (long*)0x0) {
      LAB_00106e1b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (ResourceFormatLoader)0x0 )) {
         local_c8 = 0;
         local_b8 = (undefined1[16])0x0;
         local_c0 = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)&local_c8, "_get_recognized_extensions");
         local_90 = CONCAT44(local_90._4_4_, 0xc);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_f8);
         PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)local_f8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
         local_70 = local_70 & 0xffffffff00000000;
         MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 400 ) = 0;
         lVar4 = *(long*)( this + 8 );
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_118 = 0;
            String::parse_latin1((String*)&local_118, "ResourceFormatLoader");
            StringName::StringName((StringName*)local_110, (String*)&local_118, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)local_110);
            if (CONCAT44(uStack_ec, uStack_f0) == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               local_120 = 0;
               if (StringName::configured != '\0') goto LAB_00107296;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               LAB_001072b6:lVar4 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001071ae;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180);
               *(undefined8*)( this + 400 ) = uVar3;
            }
 else {
               local_120 = *(long*)( CONCAT44(uStack_ec, uStack_f0) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_f0);
               if (StringName::configured != '\0') {
                  LAB_00107296:if (local_110[0] != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               if (local_120 == 0) goto LAB_001072b6;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180);
            *(undefined8*)( this + 400 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_001071ae:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 400 );
            plVar5[1] = (long)( this + 0x188 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x188] = (ResourceFormatLoader)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
      }

      pcVar6 = *(code**)( this + 400 );
      if (pcVar6 == (code*)0x0) goto LAB_00106f70;
      uStack_f0 = 0;
      uStack_ec = 0;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_f8);
         if (CONCAT44(uStack_ec, uStack_f0) != 0) goto LAB_00106e85;
         LAB_00106fee:local_c0 = 0;
         LAB_00106ffd:lVar4 = local_100;
         CowData<String>::_unref((CowData<String>*)&local_c0);
         CowData<String>::_unref((CowData<String>*)&uStack_f0);
         goto LAB_00107012;
      }

      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, pcVar6, 0, local_f8);
      if (CONCAT44(uStack_ec, uStack_f0) == 0) goto LAB_00106fee;
      LAB_00106e85:local_c0 = 0;
      CowData<String>::_ref((CowData<String>*)&local_c0, (CowData*)&uStack_f0);
      lVar4 = local_c0;
      if (local_c0 == 0) goto LAB_00106ffd;
      CowData<String>::_unref((CowData<String>*)&local_100);
      local_100 = lVar4;
      local_c0 = 0;
      CowData<String>::_unref((CowData<String>*)&local_c0);
      CowData<String>::_unref((CowData<String>*)&uStack_f0);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )(local_58, plVar5, this + 0x180, 0, 0, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106e1b;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_c8);
      if (local_c0 == 0) {
         CowData<String>::_unref((CowData<String>*)&local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00106f70;
      }

      CowData<String>::_unref((CowData<String>*)&local_100);
      lVar4 = local_c0;
      local_c0 = 0;
      local_100 = lVar4;
      CowData<String>::_unref((CowData<String>*)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00107012:if (lVar4 == 0) goto LAB_00106f70;
   }

   lVar7 = 0;
   if (0 < *(long*)( lVar4 + -8 )) {
      do {
         while (true) {
            if (*(long*)param_1 == 0) {
               pauVar2 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_1 = pauVar2;
               *(undefined4*)pauVar2[1] = 0;
               *pauVar2 = (undefined1[16])0x0;
            }

            this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            if (*(long*)( lVar4 + lVar7 * 8 ) != 0) {
               CowData<char32_t>::_ref(this_00, (CowData*)( lVar4 + lVar7 * 8 ));
            }

            plVar5 = *(long**)param_1;
            lVar1 = plVar5[1];
            *(undefined8*)( this_00 + 8 ) = 0;
            *(long**)( this_00 + 0x18 ) = plVar5;
            *(long*)( this_00 + 0x10 ) = lVar1;
            if (lVar1 != 0) {
               *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
            }

            plVar5[1] = (long)this_00;
            if (*plVar5 != 0) break;
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
            lVar7 = lVar7 + 1;
            *plVar5 = (long)this_00;
            if (*(long*)( lVar4 + -8 ) <= lVar7) goto LAB_00106f70;
         }
;
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
         lVar7 = lVar7 + 1;
      }
 while ( lVar7 < *(long*)( lVar4 + -8 ) );
   }

   LAB_00106f70:CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* ResourceFormatLoader::recognize_path(String const&, String const&) const */ulong ResourceFormatLoader::recognize_path(ResourceFormatLoader *this, String *param_1, String *param_2) {
   String *pSVar1;
   char cVar2;
   bool bVar3;
   undefined7 extraout_var;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   String *local_190;
   long local_178;
   long local_168;
   long local_160;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   undefined8 local_148;
   long local_140[5];
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   CowData<char32_t> *local_78;
   String *pSStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_160, param_2, false);
   local_168 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)param_1);
   }

   plVar6 = *(long**)( this + 0x98 );
   if (plVar6 == (long*)0x0) {
      LAB_001075d6:local_190 = (String*)&local_118;
      if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1a0] == (ResourceFormatLoader)0x0 )) {
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1(local_190, "_recognize_path");
         local_e0 = CONCAT44(local_e0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
         PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)&local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
         Vector<int>::push_back(local_b8, 0);
         MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x1a8 ) = 0;
         lVar5 = *(long*)( this + 8 );
         pcVar7 = *(code**)( lVar5 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "ResourceFormatLoader");
            StringName::StringName(&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, &local_150);
            if (local_140[0] == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               local_178 = 0;
               if (StringName::configured != '\0') goto LAB_00107b20;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_00107b44:lVar5 = *(long*)( this + 8 );
               pcVar7 = *(code**)( lVar5 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_001079fc;
               uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x198);
               *(undefined8*)( this + 0x1a8 ) = uVar4;
            }
 else {
               local_178 = *(long*)( local_140[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
               if (StringName::configured != '\0') {
                  LAB_00107b20:if (CONCAT71(uStack_14f, local_150) != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (local_178 == 0) goto LAB_00107b44;
            }

            lVar5 = *(long*)( this + 8 );
         }
 else {
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x198);
            *(undefined8*)( this + 0x1a8 ) = uVar4;
            lVar5 = *(long*)( this + 8 );
         }

         LAB_001079fc:if (*(char*)( lVar5 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( this + 0x1a8 );
            plVar6[1] = (long)( this + 0x1a0 );
            plVar6[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar6;
         }

         this[0x1a0] = (ResourceFormatLoader)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_190);
      }

      if (*(long*)( this + 0x1a8 ) == 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
            StringName::unref();
         }

         String::get_extension();
         local_118 = 0;
         uStack_114 = 0;
         if (( *(long*)param_2 == 0 ) || ( *(uint*)( *(long*)param_2 + -8 ) < 2 )) {
            ( **(code**)( *(long*)this + 0x160 ) )(this, local_190);
         }
 else {
            ( **(code**)( *(long*)this + 0x168 ) )(this, param_2, local_190);
         }

         if ((undefined8*)CONCAT44(uStack_114, local_118) != (undefined8*)0x0) {
            for (pSVar1 = *(String**)CONCAT44(uStack_114, local_118); pSVar1 != (String*)0x0; pSVar1 = *(String**)( pSVar1 + 8 )) {
               cVar2 = String::nocasecmp_to(pSVar1);
               if (cVar2 == '\0') {
                  uVar8 = 1;
                  goto LAB_00107691;
               }

            }

         }

         uVar8 = 0;
         LAB_00107691:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)local_190);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         goto LAB_001076a3;
      }

      local_148 = 0;
      if (local_168 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_168);
      }

      StringName::StringName((StringName*)local_190, (StringName*)&local_160);
      pSStack_70 = local_190;
      local_78 = (CowData<char32_t>*)&local_148;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x1a8 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x198, *(undefined8*)( this + 0x1a8 ), &local_78, &local_150);
      }

      uVar8 = CONCAT71(( int7 )((ulong)this >> 8), local_150 != (StringName)0x0);
      if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_114, local_118) != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_168);
      Variant::Variant((Variant*)local_60, (StringName*)&local_160);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x198, &local_a8, 2, &local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001075d6;
      }

      bVar3 = Variant::operator_cast_to_bool((Variant*)local_98);
      uVar8 = CONCAT71(extraout_var, bVar3) & 0xffffffff;
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   LAB_001076a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8 & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatLoader::_bind_methods() */void ResourceFormatLoader::_bind_methods(void) {
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
   long in_FS_OFFSET;
   undefined8 local_120;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   char *local_e8;
   undefined1 local_e0[16];
   int local_d0;
   undefined8 local_c8;
   undefined4 local_c0;
   char *local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   undefined8 local_68;
   ulong local_60;
   Vector<int> local_58[8];
   undefined8 local_50;
   long local_40;
   local_e0._8_8_ = local_e0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_118, "CACHE_MODE_IGNORE", false);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "CACHE_MODE_IGNORE");
   local_b8 = "ResourceFormatLoader::CacheMode";
   local_100 = 0;
   local_b0 = 0x1f;
   String::parse_latin1((StrRange*)&local_100);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_f8, (String*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
   local_108 = 0;
   local_110 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (CowData<char32_t>*)&local_110, 0, (CowData<char32_t>*)&local_108, 0x10006, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   local_e8 = (char*)local_a8._0_8_;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_a8._8_8_;
   local_a8 = auVar1 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
   local_f8 = 0;
   String::parse_latin1((String*)&local_f8, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_e8, (StringName*)&local_118, 0, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_118, "CACHE_MODE_REUSE", false);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "CACHE_MODE_REUSE");
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader::CacheMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_f8, (String*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
   local_108 = 0;
   local_110 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (CowData<char32_t>*)&local_110, 0, (CowData<char32_t>*)&local_108, 0x10006, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   local_e8 = (char*)local_a8._0_8_;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_a8._8_8_;
   local_a8 = auVar2 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
   local_f8 = 0;
   String::parse_latin1((String*)&local_f8, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_e8, (StringName*)&local_118, 1, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_118, "CACHE_MODE_REPLACE", false);
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "CACHE_MODE_REPLACE");
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader::CacheMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_f8, (String*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
   local_108 = 0;
   local_110 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (CowData<char32_t>*)&local_110, 0, (CowData<char32_t>*)&local_108, 0x10006, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   local_e8 = (char*)local_a8._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_a8._8_8_;
   local_a8 = auVar3 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
   local_b8 = "ResourceFormatLoader";
   local_f8 = 0;
   local_b0 = 0x14;
   String::parse_latin1((StrRange*)&local_f8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_e8, (StringName*)&local_118, 2, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_118, "CACHE_MODE_IGNORE_DEEP", false);
   local_b8 = "CACHE_MODE_IGNORE_DEEP";
   local_120 = 0;
   local_b0 = 0x16;
   String::parse_latin1((StrRange*)&local_120);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader::CacheMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_f8, (String*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
   local_108 = 0;
   local_110 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (CowData<char32_t>*)&local_110, 0, (CowData<char32_t>*)&local_108, 0x10006, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   local_e8 = (char*)local_a8._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_a8._8_8_;
   local_a8 = auVar4 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
   local_b8 = "ResourceFormatLoader";
   local_f8 = 0;
   local_b0 = 0x14;
   String::parse_latin1((StrRange*)&local_f8);
   StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_e8, (StringName*)&local_118, 3, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_118, "CACHE_MODE_REPLACE_DEEP", false);
   local_b8 = "CACHE_MODE_REPLACE_DEEP";
   local_120 = 0;
   local_b0 = 0x17;
   String::parse_latin1((StrRange*)&local_120);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader::CacheMode");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_f8, (String*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
   local_108 = 0;
   local_110 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (CowData<char32_t>*)&local_110, 0, (CowData<char32_t>*)&local_108, 0x10006, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   local_e8 = (char*)local_a8._0_8_;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = local_a8._8_8_;
   local_a8 = auVar5 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
   local_f8 = 0;
   String::parse_latin1((String*)&local_f8, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_e8, (StringName*)&local_118, 4, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   local_f0 = 0;
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_get_recognized_extensions");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "path";
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "type");
   local_b8 = (char*)0x0;
   if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_recognize_path");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_118 = 0;
   local_110 = 0;
   local_e8 = "";
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_e0._8_8_;
   local_e0 = auVar9 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x15);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_110 == 0) {
      LAB_0010888b:local_c0 = 6;
      StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010888b;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatLoader";
   local_100 = 0;
   local_e0._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "type");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_e8 = "_handles_type";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   local_118 = 0;
   local_110 = 0;
   local_e8 = "";
   auVar10._8_8_ = 0;
   auVar10._0_8_ = local_e0._8_8_;
   local_e0 = auVar10 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x15);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_110 == 0) {
      LAB_00108b83:local_c0 = 6;
      StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_00108b83;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatLoader";
   local_100 = 0;
   local_e0._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "path");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_e8 = "_get_resource_type";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatLoader";
   local_100 = 0;
   local_e0._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "path");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_e8 = "_get_resource_script_class";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x1a;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "path");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_get_resource_uid");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_118 = 0;
   local_110 = 0;
   local_e8 = "";
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_e0._8_8_;
   local_e0 = auVar6 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
      local_c0 = 6;
      if (local_d0 == 0x11) {
         StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
         if (local_e0._8_8_ == local_100) {
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_e0._8_8_ = local_100;
         }

         goto LAB_001091fd;
      }

   }

   local_c0 = 6;
   StringName::operator =((StringName*)( local_e0 + 8 ), (StringName*)&local_118);
   LAB_001091fd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = CONCAT44(local_60._4_4_, 4);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatLoader";
   local_100 = 0;
   local_e0._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "path";
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "add_types");
   local_b8 = (char*)0x0;
   if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_get_dependencies");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   String::parse_latin1((String*)&local_e8, "path");
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   local_b8 = "renames";
   local_b0 = 7;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_rename_dependencies");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_e0._8_8_;
   local_e0 = auVar7 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_100 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 0x1b, (StrRange*)&local_100, 0, (CowData<char32_t>*)&local_108, 6, (CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "path");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((String*)&local_b8, "_exists");
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_b8 = (char*)0x0;
   String::parse_latin1((String*)&local_b8, "path");
   local_e8 = (char*)0x0;
   if (local_b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (StringName*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_a8 = (undefined1[16])0x0;
   local_e8 = "_get_classes_used";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_e8);
   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   String::parse_latin1((String*)&local_e8, "path");
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_110 = 0;
   String::parse_latin1((String*)&local_110, "original_path");
   local_b8 = (char*)0x0;
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_110);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   local_b8 = "use_sub_threads";
   local_b0 = 0xf;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   if (local_100 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "cache_mode");
   local_b8 = (char*)0x0;
   if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)&local_f8, (PropertyInfo*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = 0;
   local_60 = 0;
   local_50 = 0;
   local_a8 = (undefined1[16])0x0;
   String::parse_latin1((String*)&local_b8, "_load");
   local_110 = 0;
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_108 = 0;
   local_100 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 0, (StrRange*)&local_100, 0, (CowData<char32_t>*)&local_108, 0x20006, (CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_e8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_e0._8_8_;
   local_e0 = auVar8 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_100 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_e8, 2, (StrRange*)&local_100, 0, (CowData<char32_t>*)&local_108, 6, (CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)&local_e8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_e8);
   Vector<int>::push_back(local_58, 3);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "ResourceFormatLoader");
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatLoader::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */long *ResourceFormatLoader::load(long *param_1, long param_2, CowData *param_3, CowData *param_4, undefined4 *param_5, bool param_6, undefined8 param_7, int param_8) {
   Variant *pVVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   char cVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   long *plVar11;
   code *pcVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   String *local_220;
   long local_1f0;
   undefined8 local_1e8;
   undefined8 local_1e0;
   undefined8 local_1d8;
   long local_1d0;
   undefined8 local_1c8;
   long local_1c0[5];
   int local_198;
   int iStack_194;
   undefined4 uStack_190;
   undefined4 uStack_18c;
   undefined1 local_188[16];
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_158[2];
   undefined8 local_148;
   ulong local_140;
   Vector<int> local_138[8];
   undefined8 local_130;
   undefined8 local_128;
   undefined1 local_120[24];
   int local_108[8];
   undefined8 local_e8;
   undefined1 local_e0[16];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   StrRange *local_a8;
   CowData<char32_t> *pCStack_a0;
   undefined8 *local_98;
   String *apSStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_120._0_16_ = (undefined1[16])0x0;
   local_128 = 0;
   local_1e0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e0, param_4);
   local_1e8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, param_3);
   plVar11 = *(long**)( param_2 + 0x98 );
   if (plVar11 == (long*)0x0) {
      LAB_0010a207:local_220 = (String*)&local_198;
      if (( *(long*)( param_2 + 8 ) != 0 ) && ( *(char*)( param_2 + 0x278 ) == '\0' )) {
         local_198 = 0;
         iStack_194 = 0;
         local_188 = (undefined1[16])0x0;
         uStack_190 = 0;
         uStack_18c = 0;
         local_178 = 0;
         local_170 = 0;
         local_168 = 6;
         local_160 = 1;
         local_158[0] = 0;
         local_148 = 0;
         local_140 = 0;
         local_130 = 0;
         String::parse_latin1(local_220, "_load");
         local_160 = CONCAT44(local_160._4_4_, 0xc);
         GetTypeInfo<Variant,void>::get_class_info((GetTypeInfo<Variant,void>*)&local_1c8);
         PropertyInfo::operator =((PropertyInfo*)&uStack_190, (PropertyInfo*)&local_1c8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
         local_140 = local_140 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_1c8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)&local_1c8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
         Vector<int>::push_back(local_138, 0);
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_1c8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)&local_1c8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
         Vector<int>::push_back(local_138, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_1c8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)&local_1c8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
         Vector<int>::push_back(local_138, 0);
         GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_1c8);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)&local_1c8);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1c8);
         Vector<int>::push_back(local_138, 3);
         uVar7 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( param_2 + 0x280 ) = 0;
         lVar9 = *(long*)( param_2 + 8 );
         if (( *(code**)( lVar9 + 0xd8 ) == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 )) {
            if (*(code**)( lVar9 + 0xd0 ) == (code*)0x0) {
               local_1d8 = 0;
               String::parse_latin1((String*)&local_1d8, "ResourceFormatLoader");
               StringName::StringName((StringName*)&local_1d0, (String*)&local_1d8, false);
               ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_1c8, (StringName*)&local_1d0);
               if (local_1c0[0] == 0) {
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1c0);
                  local_1f0 = 0;
                  if (StringName::configured != '\0') goto LAB_0010aa0b;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
                  LAB_0010aa2d:lVar9 = *(long*)( param_2 + 8 );
                  pcVar12 = *(code**)( lVar9 + 200 );
                  if (( ( pcVar12 == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 ) ) && ( pcVar12 = *(code**)( lVar9 + 0xc0 ) ),pcVar12 == (code*)0x0) goto LAB_0010a862;
                  uVar10 = ( *pcVar12 )(*(undefined8*)( lVar9 + 0xa0 ), param_2 + 0x270);
                  *(undefined8*)( param_2 + 0x280 ) = uVar10;
               }
 else {
                  local_1f0 = *(long*)( local_1c0[0] + -8 );
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1c0);
                  if (StringName::configured != '\0') {
                     LAB_0010aa0b:if (local_1d0 != 0) {
                        StringName::unref();
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
                  if (local_1f0 == 0) goto LAB_0010aa2d;
               }

               lVar9 = *(long*)( param_2 + 8 );
            }
 else {
               uVar10 = ( **(code**)( lVar9 + 0xd0 ) )(*(undefined8*)( lVar9 + 0xa0 ), param_2 + 0x270, uVar7);
               *(undefined8*)( param_2 + 0x280 ) = uVar10;
               lVar9 = *(long*)( param_2 + 8 );
            }

         }
 else {
            uVar10 = ( **(code**)( lVar9 + 0xd8 ) )(*(undefined8*)( lVar9 + 0xa0 ), param_2 + 0x270);
            *(undefined8*)( param_2 + 0x280 ) = uVar10;
            lVar9 = *(long*)( param_2 + 8 );
         }

         LAB_0010a862:if (*(char*)( lVar9 + 0x29 ) != '\0') {
            plVar11 = (long*)operator_new(0x18, "");
            *plVar11 = param_2 + 0x280;
            plVar11[1] = param_2 + 0x278;
            plVar11[2] = *(long*)( param_2 + 0x168 );
            *(long**)( param_2 + 0x168 ) = plVar11;
         }

         *(undefined1*)( param_2 + 0x278 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)local_220);
      }

      if (*(long*)( param_2 + 0x280 ) != 0) {
         local_1d0 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1d0, (CowData*)&local_1e8);
         local_1c8 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_1c8, (CowData*)&local_1e0);
         local_e8 = 0;
         local_1d8 = CONCAT71(local_1d8._1_7_, param_6);
         local_198 = param_8;
         iStack_194 = param_8 >> 0x1f;
         local_98 = &local_1d8;
         apSStack_90[0] = local_220;
         local_e0 = (undefined1[16])0x0;
         pcVar12 = *(code**)( *(long*)( param_2 + 8 ) + 0xe0 );
         local_a8 = (StrRange*)&local_1d0;
         pCStack_a0 = (CowData<char32_t>*)&local_1c8;
         if (pcVar12 == (code*)0x0) {
            ( **(code**)( param_2 + 0x280 ) )(*(undefined8*)( param_2 + 0x10 ), &local_a8, (Variant*)&local_e8);
            Variant::Variant((Variant*)&local_c8, (Variant*)&local_e8);
            if (Variant::needs_deinit[(int)local_128] != '\0') {
               Variant::_clear_internal();
            }

            local_120._8_8_ = local_b8;
            local_120._0_8_ = pVStack_c0;
            local_128 = CONCAT44(local_128._4_4_, local_c8._0_4_);
         }
 else {
            ( *pcVar12 )(*(undefined8*)( param_2 + 0x10 ), param_2 + 0x270, *(undefined8*)( param_2 + 0x280 ), &local_a8, (Variant*)&local_e8);
            Variant::Variant((Variant*)&local_c8, (Variant*)&local_e8);
            if (Variant::needs_deinit[(int)local_128] != '\0') {
               Variant::_clear_internal();
            }

            local_128 = CONCAT44(local_128._4_4_, local_c8._0_4_);
            local_120._8_8_ = local_b8;
            local_120._0_8_ = pVStack_c0;
         }

         if (Variant::needs_deinit[(int)local_e8] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
         goto LAB_0010a46f;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
      local_1c8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1c8, param_3);
      local_198 = 0x115cf0;
      iStack_194 = 0;
      local_1d0 = 0;
      uStack_190 = 100;
      uStack_18c = 0;
      String::parse_latin1((StrRange*)&local_1d0);
      vformat<String>(local_220, (StrRange*)&local_1d0, (CowData<char32_t>*)&local_1c8);
      _err_print_error(&_LC122, "core/io/resource_loader.cpp", 0xb2, "Method/function failed. Returning: Ref<Resource>()", local_220, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_220);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1c8);
      *param_1 = 0;
      iVar2 = (int)local_128;
   }
 else {
      local_198 = 0;
      iStack_194 = 0;
      uStack_190 = 0;
      Variant::Variant((Variant*)&local_a8, (String*)&local_1e8);
      Variant::Variant((Variant*)apSStack_90, (String*)&local_1e0);
      Variant::Variant(local_78, param_6);
      Variant::Variant(local_60, param_8);
      local_c8 = (Variant*)&local_a8;
      pVStack_c0 = (Variant*)apSStack_90;
      local_b8 = local_78;
      pVStack_b0 = local_60;
      ( **(code**)( *plVar11 + 0x60 ) )((Variant*)local_108, plVar11, param_2 + 0x270, &local_c8, 4, &local_198);
      if (local_198 != 0) {
         if (Variant::needs_deinit[local_108[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar13 = local_48;
         do {
            pVVar1 = pVVar13 + -0x18;
            pVVar13 = pVVar13 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar13 != (Variant*)&local_a8 );
         goto LAB_0010a207;
      }

      Variant::Variant((Variant*)&local_e8, (Variant*)local_108);
      if (Variant::needs_deinit[(int)local_128] != '\0') {
         Variant::_clear_internal();
      }

      local_128 = CONCAT44(local_128._4_4_, (int)local_e8);
      local_120._0_16_ = local_e0;
      if (Variant::needs_deinit[local_108[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar13 = local_48;
      do {
         pVVar1 = pVVar13 + -0x18;
         pVVar13 = pVVar13 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar13 != (Variant*)&local_a8 );
      LAB_0010a46f:local_220 = (String*)&local_198;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e0);
      if ((int)local_128 != 2) {
         if (param_5 != (undefined4*)0x0) {
            *param_5 = 0;
         }

         *param_1 = 0;
         lVar8 = Variant::get_validated_object();
         iVar4 = iStack_194;
         iVar2 = local_198;
         lVar9 = *param_1;
         local_198 = iVar2;
         iStack_194 = iVar4;
         if (lVar8 != lVar9) {
            local_198 = (int)lVar9;
            iVar3 = local_198;
            iStack_194 = (int)( (ulong)lVar9 >> 0x20 );
            iVar5 = iStack_194;
            if (lVar8 == 0) {
               local_198 = iVar2;
               iStack_194 = iVar4;
               if (lVar9 != 0) {
                  *param_1 = 0;
                  local_198 = iVar3;
                  iStack_194 = iVar5;
                  goto LAB_0010a506;
               }

            }
 else {
               local_198 = iVar2;
               iStack_194 = iVar4;
               lVar8 = __dynamic_cast(lVar8, &Object::typeinfo, &Resource::typeinfo, 0);
               if (lVar9 != lVar8) {
                  *param_1 = lVar8;
                  local_198 = iVar3;
                  iStack_194 = iVar5;
                  if (( lVar8 != 0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                     *param_1 = 0;
                  }

                  LAB_0010a506:Ref<Resource>::unref((Ref<Resource>*)local_220);
               }

            }

         }

         cVar6 = Variant::needs_deinit[(int)local_128];
         goto joined_r0x0010a51d;
      }

      iVar2 = 2;
      if (param_5 != (undefined4*)0x0) {
         lVar9 = Variant::operator_cast_to_long((Variant*)&local_128);
         *param_5 = (int)lVar9;
         iVar2 = (int)local_128;
      }

      *param_1 = 0;
   }

   cVar6 = Variant::needs_deinit[iVar2];
   joined_r0x0010a51d:if (cVar6 != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatLoader::get_classes_used(String const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >*) */void ResourceFormatLoader::get_classes_used(String *param_1, HashSet *param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long lVar6;
   long in_FS_OFFSET;
   CowData<String> *local_168;
   undefined8 local_150;
   undefined8 local_148;
   long local_140[2];
   long local_130;
   int local_128;
   undefined4 uStack_124;
   undefined4 uStack_120;
   undefined4 uStack_11c;
   undefined8 local_f8;
   long local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = 0;
   local_150 = 0;
   if (*(long*)param_2 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)param_2);
   }

   plVar4 = *(long**)( param_1 + 0x98 );
   if (plVar4 == (long*)0x0) {
      LAB_0010abb8:if (( *(long*)( param_1 + 8 ) != 0 ) && ( param_1[0x230] == (String)0x0 )) {
         local_f8 = 0;
         local_e8 = (undefined1[16])0x0;
         local_f0 = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_get_classes_used");
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)&local_128);
         PropertyInfo::operator =((PropertyInfo*)&local_f0, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
         Vector<int>::push_back(local_98, 0);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( param_1 + 8 );
         *(undefined8*)( param_1 + 0x238 ) = 0;
         if (( *(code**)( lVar3 + 0xd8 ) == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 )) {
            if (*(code**)( lVar3 + 0xd0 ) == (code*)0x0) {
               local_148 = 0;
               String::parse_latin1((String*)&local_148, "ResourceFormatLoader");
               StringName::StringName((StringName*)local_140, (String*)&local_148, false);
               ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)local_140);
               if (CONCAT44(uStack_11c, uStack_120) == 0) {
                  lVar3 = 0;
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
                  if (StringName::configured != '\0') goto LAB_0010b163;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
                  LAB_0010b182:lVar3 = *(long*)( param_1 + 8 );
                  pcVar5 = *(code**)( lVar3 + 200 );
                  if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010b030;
                  uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), param_1 + 0x228);
                  *(undefined8*)( param_1 + 0x238 ) = uVar2;
               }
 else {
                  lVar3 = *(long*)( CONCAT44(uStack_11c, uStack_120) + -8 );
                  CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
                  if (StringName::configured != '\0') {
                     LAB_0010b163:if (local_140[0] != 0) {
                        StringName::unref();
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
                  if (lVar3 == 0) goto LAB_0010b182;
               }

               lVar3 = *(long*)( param_1 + 8 );
            }
 else {
               uVar2 = ( **(code**)( lVar3 + 0xd0 ) )(*(undefined8*)( lVar3 + 0xa0 ), param_1 + 0x228, uVar1);
               *(undefined8*)( param_1 + 0x238 ) = uVar2;
               lVar3 = *(long*)( param_1 + 8 );
            }

         }
 else {
            uVar2 = ( **(code**)( lVar3 + 0xd8 ) )(*(undefined8*)( lVar3 + 0xa0 ), param_1 + 0x228, uVar1);
            *(undefined8*)( param_1 + 0x238 ) = uVar2;
            lVar3 = *(long*)( param_1 + 8 );
         }

         LAB_0010b030:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( param_1 + 0x238 );
            plVar4[1] = (long)( param_1 + 0x230 );
            plVar4[2] = *(long*)( param_1 + 0x168 );
            *(long**)( param_1 + 0x168 ) = plVar4;
         }

         param_1[0x230] = (String)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      if (*(long*)( param_1 + 0x238 ) == 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
         ( **(code**)( *(long*)param_1 + 0x188 ) )((CowData<char32_t>*)local_140, param_1, param_2);
         if (( local_140[0] != 0 ) && ( 1 < *(uint*)( local_140[0] + -8 ) )) {
            StringName::StringName((StringName*)&local_128, (String*)local_140, false);
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_f8);
            if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_124, local_128) != 0 )) {
               StringName::unref();
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
         CowData<String>::_unref((CowData<String>*)&local_130);
         goto LAB_0010ac15;
      }

      local_140[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_140, (CowData*)&local_150);
      uStack_120 = 0;
      uStack_11c = 0;
      local_58[0] = (CowData<char32_t>*)local_140;
      if (*(code**)( *(long*)( param_1 + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( param_1 + 0x238 ) )(*(undefined8*)( param_1 + 0x10 ), local_58, &local_128);
         if (CONCAT44(uStack_11c, uStack_120) != 0) goto LAB_0010acff;
         LAB_0010aea6:local_f0 = 0;
      }
 else {
         ( **(code**)( *(long*)( param_1 + 8 ) + 0xe0 ) )(*(undefined8*)( param_1 + 0x10 ), param_1 + 0x228, *(undefined8*)( param_1 + 0x238 ), local_58, &local_128);
         if (CONCAT44(uStack_11c, uStack_120) == 0) goto LAB_0010aea6;
         LAB_0010acff:local_f0 = 0;
         CowData<String>::_ref((CowData<String>*)&local_f0, (CowData*)&uStack_120);
         lVar3 = local_f0;
         if (local_f0 != 0) {
            CowData<String>::_unref((CowData<String>*)&local_130);
            local_130 = lVar3;
            local_f0 = 0;
         }

      }

      lVar3 = local_130;
      CowData<String>::_unref((CowData<String>*)&local_f0);
      CowData<String>::_unref((CowData<String>*)&uStack_120);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
   }
 else {
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_150);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, param_1 + 0x228, &local_80, 1, &local_128);
      if (local_128 != 0) {
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010abb8;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_f8);
      lVar3 = local_f0;
      if (local_f0 != 0) {
         CowData<String>::_unref((CowData<String>*)&local_130);
         lVar3 = local_f0;
         local_f0 = 0;
         local_130 = lVar3;
      }

      CowData<String>::_unref((CowData<String>*)&local_f0);
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_168 = (CowData<String>*)&local_130;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (lVar3 != 0) {
      lVar6 = 0;
      if (0 < *(long*)( lVar3 + -8 )) {
         do {
            StringName::StringName((StringName*)&local_128, (String*)( lVar3 + lVar6 * 8 ), false);
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_f8);
            if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_124, local_128) != 0 )) {
               StringName::unref();
            }

            lVar6 = lVar6 + 1;
         }
 while ( lVar6 < *(long*)( lVar3 + -8 ) );
      }

   }

   CowData<String>::_unref(local_168);
   LAB_0010ac15:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatLoader::get_resource_uid(String const&) const */long ResourceFormatLoader::get_resource_uid(ResourceFormatLoader *this, String *param_1) {
   String *pSVar1;
   char cVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   long *plVar5;
   code *pcVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   Object *local_130;
   undefined8 local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   undefined8 local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = ( **(code**)( *(long*)this + 0x1a0 ) )();
   if (cVar2 == '\0') {
      local_128 = 0;
      uStack_f0 = 4;
      uStack_ec = 0;
      local_f8 = 0x113a0c;
      uStack_f4 = 0;
      String::parse_latin1((StrRange*)&local_128);
      String::operator +((String*)&local_f8, param_1);
      FileAccess::open((String*)&local_130, (int)(String*)&local_f8, (Error*)0x1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      lVar7 = -1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      pSVar1 = ResourceUID::singleton;
      if (local_130 != (Object*)0x0) {
         ( **(code**)( *(long*)local_130 + 0x228 ) )((String*)&local_f8);
         lVar7 = ResourceUID::text_to_id(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         if (( ( local_130 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_130 + 0x140 ))(local_130);
         Memory::free_static(local_130, false);
      }

   }

   goto LAB_0010b332;
}
local_140 = 0;CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)param_1);plVar5 = *(long**)( this + 0x98 );if (plVar5 == (long*)0x0) {
   LAB_0010b30a:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x200] == (ResourceFormatLoader)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_resource_uid");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = CONCAT44(local_a0._4_4_, 4);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar7 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x208 ) = 0;
      pcVar6 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar7 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ResourceFormatLoader");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010b73f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010b75e:lVar7 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar7 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar7 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010b6a6;
            uVar4 = ( *pcVar6 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x1f8);
            *(undefined8*)( this + 0x208 ) = uVar4;
         }
 else {
            lVar7 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010b73f:if (local_130 != (Object*)0x0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar7 == 0) goto LAB_0010b75e;
         }

         lVar7 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar6 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x1f8, uVar3);
         *(undefined8*)( this + 0x208 ) = uVar4;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_0010b6a6:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x208 );
         plVar5[1] = (long)( this + 0x200 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x200] = (ResourceFormatLoader)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   lVar7 = -1;
   if (*(long*)( this + 0x208 ) != 0) {
      local_128 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_140);
      local_58[0] = (CowData<char32_t>*)&local_128;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x208 ) )(*(undefined8*)( this + 0x10 ), local_58, &local_f8);
         lVar7 = CONCAT44(uStack_f4, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f8, *(undefined8*)( this + 0x208 ), local_58, &local_f8);
         lVar7 = CONCAT44(uStack_f4, local_f8);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   }

}
 else {
   local_f8 = 0;
   uStack_f4 = 0;
   uStack_f0 = 0;
   Variant::Variant((Variant*)local_78, (String*)&local_140);
   local_80 = (Variant*)local_78;
   ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1f8, &local_80, 1, &local_f8);
   if (local_f8 != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_0010b30a;
   }

   lVar7 = Variant::operator_cast_to_long((Variant*)local_58);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);LAB_0010b332:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return lVar7;}/* ResourceFormatLoader::rename_dependencies(String const&, HashMap<String, String,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > const&) */ulong ResourceFormatLoader::rename_dependencies(ResourceFormatLoader *this, String *param_1, HashMap *param_2) {
   long *plVar1;
   undefined4 uVar2;
   long lVar3;
   Variant *pVVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   Dictionary local_170[8];
   undefined8 local_168;
   Dictionary local_160[8];
   undefined8 local_158;
   long local_150;
   Dictionary local_148[8];
   long local_140[5];
   uint local_118;
   undefined4 uStack_114;
   undefined4 local_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   CowData<char32_t> *local_78;
   Dictionary *pDStack_70;
   undefined8 uStack_68;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_170);
   plVar8 = *(long**)( param_2 + 0x18 );
   if (plVar8 != (long*)0x0) {
      do {
         local_118 = 0;
         uStack_114 = 0;
         plVar1 = (long*)( plVar8[2] + -0x10 );
         if (plVar8[2] != 0) {
            do {
               lVar7 = *plVar1;
               if (lVar7 == 0) goto LAB_0010b8ce;
               LOCK();
               lVar3 = *plVar1;
               bVar10 = lVar7 == lVar3;
               if (bVar10) {
                  *plVar1 = lVar7 + 1;
                  lVar3 = lVar7;
               }

               UNLOCK();
            }
 while ( !bVar10 );
            if (lVar3 != -1) {
               local_118 = (uint)plVar8[2];
               uStack_114 = ( undefined4 )((ulong)plVar8[2] >> 0x20);
            }

         }

         LAB_0010b8ce:local_110 = 0;
         uStack_10c = 0;
         plVar1 = (long*)( plVar8[3] + -0x10 );
         if (plVar8[3] != 0) {
            do {
               lVar7 = *plVar1;
               if (lVar7 == 0) goto LAB_0010b90c;
               LOCK();
               lVar3 = *plVar1;
               bVar10 = lVar7 == lVar3;
               if (bVar10) {
                  *plVar1 = lVar7 + 1;
                  lVar3 = lVar7;
               }

               UNLOCK();
            }
 while ( !bVar10 );
            if (lVar3 != -1) {
               local_110 = (undefined4)plVar8[3];
               uStack_10c = ( undefined4 )((ulong)plVar8[3] >> 0x20);
            }

         }

         LAB_0010b90c:Variant::Variant((Variant*)&local_78, (String*)&local_110);
         Variant::Variant((Variant*)local_98, (String*)&local_118);
         pVVar4 = (Variant*)Dictionary::operator []((Variant*)local_170);
         if (pVVar4 != (Variant*)&local_78) {
            if (Variant::needs_deinit[*(int*)pVVar4] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar4 = 0;
            *(int*)pVVar4 = (int)local_78;
            *(Dictionary**)( pVVar4 + 8 ) = pDStack_70;
            *(undefined8*)( pVVar4 + 0x10 ) = uStack_68;
            local_78 = (CowData<char32_t>*)( (ulong)local_78 & 0xffffffff00000000 );
         }

         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         if (CONCAT44(uStack_10c, local_110) != 0) {
            LOCK();
            plVar1 = (long*)( CONCAT44(uStack_10c, local_110) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = CONCAT44(uStack_10c, local_110);
               local_110 = 0;
               uStack_10c = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         if (CONCAT44(uStack_114, local_118) != 0) {
            LOCK();
            plVar1 = (long*)( CONCAT44(uStack_114, local_118) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = CONCAT44(uStack_114, local_118);
               local_118 = 0;
               uStack_114 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         plVar8 = (long*)*plVar8;
      }
 while ( plVar8 != (long*)0x0 );
   }

   Dictionary::Dictionary(local_160, local_170);
   local_168 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)param_1);
   plVar8 = *(long**)( this + 0x98 );
   if (plVar8 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      local_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_168);
      Variant::Variant((Variant*)local_60, local_160);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_98, plVar8, this + 0x240, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         uVar5 = Variant::operator_cast_to_long((Variant*)local_98);
         uVar5 = uVar5 & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010bb36;
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (ResourceFormatLoader)0x0 )) {
      local_118 = 0;
      uStack_114 = 0;
      local_108 = (undefined1[16])0x0;
      local_110 = 0;
      uStack_10c = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8[0] = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      String::parse_latin1((String*)&local_118, "_rename_dependencies");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)local_148);
      PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x250 ) = 0;
      lVar7 = *(long*)( this + 8 );
      pcVar9 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar7 + 0xd0 ) ),pcVar9 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "ResourceFormatLoader");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010bf7b;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         }
 else {
            lVar7 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010bf7b:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar7 != 0) {
               lVar7 = *(long*)( this + 8 );
               goto LAB_0010be8a;
            }

         }

         lVar7 = *(long*)( this + 8 );
         pcVar9 = *(code**)( lVar7 + 200 );
         if (( ( pcVar9 != (code*)0x0 ) && ( *(long*)( lVar7 + 0xe0 ) != 0 ) ) || ( pcVar9 = *(code**)( lVar7 + 0xc0 ) ),pcVar9 != (code*)0x0) {
            uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x240);
            *(undefined8*)( this + 0x250 ) = uVar6;
            lVar7 = *(long*)( this + 8 );
         }

      }
 else {
         uVar6 = ( *pcVar9 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x240, uVar2);
         *(undefined8*)( this + 0x250 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_0010be8a:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x250 );
         plVar8[1] = (long)( this + 0x248 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x248] = (ResourceFormatLoader)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   uVar5 = 0;
   if (*(long*)( this + 0x250 ) != 0) {
      local_150 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)&local_168);
      Dictionary::Dictionary(local_148, local_160);
      local_78 = (CowData<char32_t>*)&local_150;
      pDStack_70 = local_148;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x250 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, *(undefined8*)( this + 0x250 ), &local_78, &local_118);
      }

      uVar5 = (ulong)local_118;
      Dictionary::~Dictionary(local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   }

   LAB_0010bb36:CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   Dictionary::~Dictionary(local_160);
   Dictionary::~Dictionary(local_170);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* ResourceFormatLoader::get_dependencies(String const&, List<String, DefaultAllocator>*, bool) */void ResourceFormatLoader::get_dependencies(ResourceFormatLoader *this, String *param_1, List *param_2, bool param_3) {
   long lVar1;
   undefined4 uVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long lVar8;
   long in_FS_OFFSET;
   CowData<String> *local_190;
   undefined8 local_170;
   undefined8 local_168;
   long local_160[2];
   long local_150;
   int local_148[2];
   undefined4 uStack_140;
   undefined4 uStack_13c;
   undefined8 local_118;
   long local_110;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8[2];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   CowData<char32_t> *local_78;
   undefined8 *puStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_150 = 0;
   local_170 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_170, (CowData*)param_1);
   }

   plVar6 = *(long**)( this + 0x98 );
   if (plVar6 == (long*)0x0) {
      LAB_0010c19c:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x218] == (ResourceFormatLoader)0x0 )) {
         local_118 = 0;
         local_108 = (undefined1[16])0x0;
         local_110 = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         String::parse_latin1((String*)&local_118, "_get_dependencies");
         local_e0 = CONCAT44(local_e0._4_4_, 0xc);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_148);
         PropertyInfo::operator =((PropertyInfo*)&local_110, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_148);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)local_148);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_148);
         Vector<int>::push_back(local_b8, 0);
         uVar2 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x220 ) = 0;
         lVar5 = *(long*)( this + 8 );
         pcVar7 = *(code**)( lVar5 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_168 = 0;
            String::parse_latin1((String*)&local_168, "ResourceFormatLoader");
            StringName::StringName((StringName*)local_160, (String*)&local_168, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_148, (StringName*)local_160);
            if (CONCAT44(uStack_13c, uStack_140) == 0) {
               lVar5 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
               if (StringName::configured != '\0') goto LAB_0010c769;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
               LAB_0010c788:lVar5 = *(long*)( this + 8 );
               pcVar7 = *(code**)( lVar5 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010c651;
               uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x210);
               *(undefined8*)( this + 0x220 ) = uVar4;
            }
 else {
               lVar5 = *(long*)( CONCAT44(uStack_13c, uStack_140) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_140);
               if (StringName::configured != '\0') {
                  LAB_0010c769:if (local_160[0] != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
               if (lVar5 == 0) goto LAB_0010c788;
            }

            lVar5 = *(long*)( this + 8 );
         }
 else {
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x210, uVar2);
            *(undefined8*)( this + 0x220 ) = uVar4;
            lVar5 = *(long*)( this + 8 );
         }

         LAB_0010c651:if (*(char*)( lVar5 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( this + 0x220 );
            plVar6[1] = (long)( this + 0x218 );
            plVar6[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar6;
         }

         this[0x218] = (ResourceFormatLoader)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      if (*(long*)( this + 0x220 ) == 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
         goto LAB_0010c1be;
      }

      local_160[0] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_160, (CowData*)&local_170);
      puStack_70 = &local_168;
      local_168 = CONCAT71(local_168._1_7_, param_3);
      uStack_140 = 0;
      uStack_13c = 0;
      local_78 = (CowData<char32_t>*)local_160;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x220 ) )(*(undefined8*)( this + 0x10 ), &local_78, local_148);
         if (CONCAT44(uStack_13c, uStack_140) != 0) goto LAB_0010c27e;
         LAB_0010c488:local_110 = 0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x210, *(undefined8*)( this + 0x220 ), &local_78, local_148);
         if (CONCAT44(uStack_13c, uStack_140) == 0) goto LAB_0010c488;
         LAB_0010c27e:local_110 = 0;
         CowData<String>::_ref((CowData<String>*)&local_110, (CowData*)&uStack_140);
         lVar5 = local_110;
         if (local_110 != 0) {
            CowData<String>::_unref((CowData<String>*)&local_150);
            local_150 = lVar5;
            local_110 = 0;
         }

      }

      lVar5 = local_150;
      local_190 = (CowData<String>*)&local_110;
      CowData<String>::_unref(local_190);
      CowData<String>::_unref((CowData<String>*)&uStack_140);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
   }
 else {
      local_148[0] = 0;
      local_148[1] = 0;
      uStack_140 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_170);
      Variant::Variant((Variant*)local_60, param_3);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_98, plVar6, this + 0x210, &local_a8, 2, local_148);
      if (local_148[0] != 0) {
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c19c;
      }

      Variant::operator_cast_to_Vector((Variant*)&local_118);
      lVar5 = local_110;
      if (local_110 != 0) {
         CowData<String>::_unref((CowData<String>*)&local_150);
         lVar5 = local_110;
         local_110 = 0;
         local_150 = lVar5;
      }

      CowData<String>::_unref((CowData<String>*)&local_110);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
   if (( lVar5 != 0 ) && ( lVar8 = 0 ),0 < *(long*)( lVar5 + -8 )) {
      do {
         if (*(long*)param_2 == 0) {
            pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_2 = pauVar3;
            *(undefined4*)pauVar3[1] = 0;
            *pauVar3 = (undefined1[16])0x0;
         }

         this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         if (*(long*)( lVar5 + lVar8 * 8 ) != 0) {
            CowData<char32_t>::_ref(this_00, (CowData*)( lVar5 + lVar8 * 8 ));
         }

         plVar6 = *(long**)param_2;
         lVar1 = plVar6[1];
         *(long**)( this_00 + 0x18 ) = plVar6;
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long*)( this_00 + 0x10 ) = lVar1;
         if (lVar1 != 0) {
            *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
         }

         plVar6[1] = (long)this_00;
         if (*plVar6 == 0) {
            *plVar6 = (long)this_00;
         }

         *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
         lVar8 = lVar8 + 1;
      }
 while ( lVar8 < *(long*)( lVar5 + -8 ) );
   }

   LAB_0010c1be:CowData<String>::_unref((CowData<String>*)&local_150);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatLoader::exists(String const&) const */ulong ResourceFormatLoader::exists(ResourceFormatLoader *this, String *param_1) {
   bool bVar1;
   undefined4 uVar2;
   ulong uVar3;
   undefined7 extraout_var;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
   long local_120[5];
   int local_f8[2];
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_140 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)param_1);
   }

   plVar6 = *(long**)( this + 0x98 );
   if (plVar6 == (long*)0x0) {
      LAB_0010c93e:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x260] == (ResourceFormatLoader)0x0 )) {
         local_f8[0] = 0;
         local_f8[1] = 0;
         local_e8 = (undefined1[16])0x0;
         uStack_f0 = 0;
         uStack_ec = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)local_f8, "_exists");
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info(local_128);
         PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)local_128);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)local_128);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
         Vector<int>::push_back(local_98, 0);
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar5 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x268 ) = 0;
         pcVar7 = *(code**)( lVar5 + 0xd8 );
         if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
            local_138 = 0;
            String::parse_latin1((String*)&local_138, "ResourceFormatLoader");
            StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)&local_130);
            if (local_120[0] == 0) {
               lVar5 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') goto LAB_0010ccb4;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               LAB_0010ccd3:lVar5 = *(long*)( this + 8 );
               pcVar7 = *(code**)( lVar5 + 200 );
               if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010cbe6;
               uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 600);
               *(undefined8*)( this + 0x268 ) = uVar4;
            }
 else {
               lVar5 = *(long*)( local_120[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') {
                  LAB_0010ccb4:if (local_130 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               if (lVar5 == 0) goto LAB_0010ccd3;
            }

            lVar5 = *(long*)( this + 8 );
         }
 else {
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 600, uVar2);
            *(undefined8*)( this + 0x268 ) = uVar4;
            lVar5 = *(long*)( this + 8 );
         }

         LAB_0010cbe6:if (*(char*)( lVar5 + 0x29 ) != '\0') {
            plVar6 = (long*)operator_new(0x18, "");
            *plVar6 = (long)( this + 0x268 );
            plVar6[1] = (long)( this + 0x260 );
            plVar6[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar6;
         }

         this[0x260] = (ResourceFormatLoader)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_f8);
      }

      if (*(long*)( this + 0x268 ) == 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar3 = FileAccess::exists(param_1);
            return uVar3;
         }

         goto LAB_0010cd47;
      }

      local_f8[0] = 0;
      local_f8[1] = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_f8, (CowData*)&local_140);
      local_58[0] = (CowData<char32_t>*)local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x268 ) )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 600, *(undefined8*)( this + 0x268 ), local_58, local_128);
      }

      uVar3 = CONCAT71(( int7 )((ulong)param_1 >> 8), local_128[0] != (GetTypeInfo<bool,void>)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   }
 else {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_58, plVar6, this + 600, &local_80, 1, local_f8);
      if (local_f8[0] != 0) {
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c93e;
      }

      bVar1 = Variant::operator_cast_to_bool((Variant*)local_58);
      uVar3 = CONCAT71(extraout_var, bVar1) & 0xffffffff;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3 & 0xffffffff;
   }

   LAB_0010cd47:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ResourceFormatLoader::has_custom_uid_support() const */char ResourceFormatLoader::has_custom_uid_support(ResourceFormatLoader *this) {
   char cVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   undefined8 local_f8;
   long local_f0;
   GetTypeInfo<long,void> local_e8[8];
   long local_e0[5];
   undefined8 local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   undefined8 local_68;
   undefined8 local_60;
   Vector<int> local_58[8];
   undefined8 local_50;
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( plVar5 != (long*)0x0 ) && ( cVar1 = ( **(code**)( *plVar5 + 0x50 ) )(plVar5, this + 0x1f8) ),cVar1 != '\0') goto LAB_0010cdea;
   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x200] == (ResourceFormatLoader)0x0 )) {
      local_b8 = 0;
      local_a8 = (undefined1[16])0x0;
      local_b0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 6;
      local_80 = 1;
      local_78[0] = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((String*)&local_b8, "_get_resource_uid");
      local_80 = CONCAT44(local_80._4_4_, 0xc);
      GetTypeInfo<long,void>::get_class_info(local_e8);
      PropertyInfo::operator =((PropertyInfo*)&local_b0, (PropertyInfo*)local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_e8);
      local_60 = CONCAT44(local_60._4_4_, 4);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)local_e8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)local_e8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_e8);
      Vector<int>::push_back(local_58, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x208 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_f8 = 0;
         String::parse_latin1((String*)&local_f8, "ResourceFormatLoader");
         StringName::StringName((StringName*)&local_f0, (String*)&local_f8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_e8, (StringName*)&local_f0);
         if (local_e0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_e0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_f0 != 0 )) goto LAB_0010cfe8;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            LAB_0010cffd:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010cf52;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1f8);
            *(undefined8*)( this + 0x208 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_e0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_e0);
            if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
               LAB_0010cfe8:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            if (lVar4 == 0) goto LAB_0010cffd;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1f8, uVar2);
         *(undefined8*)( this + 0x208 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010cf52:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x208 );
         plVar5[1] = (long)( this + 0x200 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x200] = (ResourceFormatLoader)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
   }

   cVar1 = *(long*)( this + 0x208 ) != 0;
   LAB_0010cdea:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return cVar1;
}
/* ResourceFormatLoader::get_resource_script_class(String const&) const */String *ResourceFormatLoader::get_resource_script_class(String *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   CowData *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   local_140 = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, in_RDX);
   }

   plVar4 = *(long**)( in_RSI + 0x98 );
   if (plVar4 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x1e0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_128);
         if (*(long*)param_1 != local_128) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar3 = local_128;
            local_128 = 0;
            *(long*)param_1 = lVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d1cd;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x1e8 ) == '\0' )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_resource_script_class");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x1f0 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ResourceFormatLoader");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010d574;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010d593:lVar3 = *(long*)( in_RSI + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010d4a6;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x1e0);
            *(undefined8*)( in_RSI + 0x1f0 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010d574:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010d593;
         }

         lVar3 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x1e0, uVar1);
         *(undefined8*)( in_RSI + 0x1f0 ) = uVar2;
         lVar3 = *(long*)( in_RSI + 8 );
      }

      LAB_0010d4a6:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = in_RSI + 0x1f0;
         plVar4[1] = in_RSI + 0x1e8;
         plVar4[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar4;
      }

      *(undefined1*)( in_RSI + 0x1e8 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   if (*(long*)( in_RSI + 0x1f0 ) != 0) {
      local_130 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)&local_140);
      local_128 = 0;
      pcVar5 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      local_58[0] = (CowData<char32_t>*)&local_130;
      if (pcVar5 == (code*)0x0) {
         ( **(code**)( in_RSI + 0x1f0 ) )(*(undefined8*)( in_RSI + 0x10 ), local_58, (CowData<char32_t>*)&local_128);
      }
 else {
         ( *pcVar5 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x1e0, *(undefined8*)( in_RSI + 0x1f0 ), local_58, (CowData<char32_t>*)&local_128);
      }

      local_f8 = 0;
      uStack_f4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
      lVar3 = CONCAT44(uStack_f4, local_f8);
      if (*(long*)param_1 != lVar3) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar3;
         local_f8 = 0;
         uStack_f4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   }

   LAB_0010d1cd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ResourceFormatLoader::get_resource_type(String const&) const */String *ResourceFormatLoader::get_resource_type(String *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   CowData *in_RDX;
   long in_RSI;
   long in_FS_OFFSET;
   undefined8 local_140;
   undefined8 local_138;
   long local_130;
   long local_128;
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   CowData<char32_t> *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   local_140 = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, in_RDX);
   }

   plVar4 = *(long**)( in_RSI + 0x98 );
   if (plVar4 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (String*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, in_RSI + 0x1c8, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         Variant::operator_cast_to_String((Variant*)&local_128);
         if (*(long*)param_1 != local_128) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar3 = local_128;
            local_128 = 0;
            *(long*)param_1 = lVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d75d;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( in_RSI + 8 ) != 0 ) && ( *(char*)( in_RSI + 0x1d0 ) == '\0' )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8[0] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      String::parse_latin1((String*)&local_f8, "_get_resource_type");
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( in_RSI + 8 );
      *(undefined8*)( in_RSI + 0x1d8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ResourceFormatLoader");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010db04;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010db23:lVar3 = *(long*)( in_RSI + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010da36;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x1c8);
            *(undefined8*)( in_RSI + 0x1d8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010db04:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar3 == 0) goto LAB_0010db23;
         }

         lVar3 = *(long*)( in_RSI + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), in_RSI + 0x1c8, uVar1);
         *(undefined8*)( in_RSI + 0x1d8 ) = uVar2;
         lVar3 = *(long*)( in_RSI + 8 );
      }

      LAB_0010da36:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = in_RSI + 0x1d8;
         plVar4[1] = in_RSI + 0x1d0;
         plVar4[2] = *(long*)( in_RSI + 0x168 );
         *(long**)( in_RSI + 0x168 ) = plVar4;
      }

      *(undefined1*)( in_RSI + 0x1d0 ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   if (*(long*)( in_RSI + 0x1d8 ) != 0) {
      local_130 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)&local_140);
      local_128 = 0;
      pcVar5 = *(code**)( *(long*)( in_RSI + 8 ) + 0xe0 );
      local_58[0] = (CowData<char32_t>*)&local_130;
      if (pcVar5 == (code*)0x0) {
         ( **(code**)( in_RSI + 0x1d8 ) )(*(undefined8*)( in_RSI + 0x10 ), local_58, (CowData<char32_t>*)&local_128);
      }
 else {
         ( *pcVar5 )(*(undefined8*)( in_RSI + 0x10 ), in_RSI + 0x1c8, *(undefined8*)( in_RSI + 0x1d8 ), local_58, (CowData<char32_t>*)&local_128);
      }

      local_f8 = 0;
      uStack_f4 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_128);
      lVar3 = CONCAT44(uStack_f4, local_f8);
      if (*(long*)param_1 != lVar3) {
         CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
         *(long*)param_1 = lVar3;
         local_f8 = 0;
         uStack_f4 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   }

   LAB_0010d75d:CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ResourceFormatLoader::handles_type(String const&) const */ulong ResourceFormatLoader::handles_type(ResourceFormatLoader *this, String *param_1) {
   bool bVar1;
   undefined4 uVar2;
   undefined7 extraout_var;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   GetTypeInfo<bool,void> *unaff_R12;
   ulong uVar7;
   long in_FS_OFFSET;
   long local_140;
   undefined8 local_138;
   long local_130;
   GetTypeInfo<bool,void> local_128[8];
   long local_120[5];
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8[2];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   StringName *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_140, param_1, false);
   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 == (long*)0x0) {
      LAB_0010dcbe:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b8] == (ResourceFormatLoader)0x0 )) {
         unaff_R12 = local_128;
         local_f8 = 0;
         uStack_f4 = 0;
         local_e8 = (undefined1[16])0x0;
         uStack_f0 = 0;
         uStack_ec = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8[0] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         String::parse_latin1((String*)&local_f8, "_handles_type");
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info(unaff_R12);
         PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)unaff_R12);
         PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_R12);
         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<StringName,void>::get_class_info((GetTypeInfo<StringName,void>*)unaff_R12);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)unaff_R12);
         PropertyInfo::~PropertyInfo((PropertyInfo*)unaff_R12);
         Vector<int>::push_back(local_98, 0);
         uVar2 = MethodInfo::get_compatibility_hash();
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x1c0 ) = 0;
         pcVar6 = *(code**)( lVar4 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_138 = 0;
            String::parse_latin1((String*)&local_138, "ResourceFormatLoader");
            StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)unaff_R12, (StringName*)&local_130);
            if (local_120[0] == 0) {
               unaff_R12 = (GetTypeInfo<bool,void>*)0x0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') goto LAB_0010e037;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               LAB_0010e056:lVar4 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar4 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010df6e;
               uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1b0);
               *(undefined8*)( this + 0x1c0 ) = uVar3;
            }
 else {
               unaff_R12 = *(GetTypeInfo<bool,void>**)( local_120[0] + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
               if (StringName::configured != '\0') {
                  LAB_0010e037:if (local_130 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               if (unaff_R12 == (GetTypeInfo<bool,void>*)0x0) goto LAB_0010e056;
            }

            lVar4 = *(long*)( this + 8 );
         }
 else {
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1b0, uVar2);
            *(undefined8*)( this + 0x1c0 ) = uVar3;
            lVar4 = *(long*)( this + 8 );
         }

         LAB_0010df6e:if (*(char*)( lVar4 + 0x29 ) != '\0') {
            plVar5 = (long*)operator_new(0x18, "");
            *plVar5 = (long)( this + 0x1c0 );
            plVar5[1] = (long)( this + 0x1b8 );
            plVar5[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar5;
         }

         this[0x1b8] = (ResourceFormatLoader)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      if (*(long*)( this + 0x1c0 ) == 0) {
         uVar7 = 0;
         goto LAB_0010dcdd;
      }

      StringName::StringName((StringName*)&local_f8, (StringName*)&local_140);
      local_58[0] = (StringName*)&local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x1c0 ) )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b0, *(undefined8*)( this + 0x1c0 ), local_58, local_128);
      }

      uVar7 = CONCAT71(( int7 )((ulong)unaff_R12 >> 8), local_128[0] != (GetTypeInfo<bool,void>)0x0);
      if (StringName::configured == '\0') goto LAB_0010dcf1;
      if (CONCAT44(uStack_f4, local_f8) != 0) {
         StringName::unref();
         goto LAB_0010dcdd;
      }

   }
 else {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, (StringName*)&local_140);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1b0, &local_80, 1, &local_f8);
      if (local_f8 != 0) {
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010dcbe;
      }

      bVar1 = Variant::operator_cast_to_bool((Variant*)local_58);
      uVar7 = CONCAT71(extraout_var, bVar1) & 0xffffffff;
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_0010dcdd:if (StringName::configured == '\0') goto LAB_0010dcf1;
   }

   if (local_140 != 0) {
      StringName::unref();
   }

   LAB_0010dcf1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7 & 0xffffffff;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ResourceLoader::_dependency_get_progress(String const&) [clone .part.0] */ulong ResourceLoader::_dependency_get_progress(String *param_1) {
   uint uVar1;
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
   char cVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   int iVar17;
   long lVar18;
   uint uVar19;
   String *pSVar20;
   long lVar21;
   ulong uVar22;
   float fVar23;
   float extraout_XMM0_Da;
   float fVar24;
   uint local_4c;
   lVar14 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, param_1);
   uVar1 = *(uint*)( lVar14 + 0x94 );
   uVar15 = (ulong)uVar1;
   if (0 < (int)uVar1) {
      local_4c = 1;
      pSVar20 = *(String**)( lVar14 + 0x70 );
      fVar24 = 0.0;
      do {
         fVar23 = _LC98;
         if (( thread_load_tasks._8_8_ != 0 ) && ( uVar15 = (ulong)(uint)thread_load_tasks._44_4_ ),thread_load_tasks._44_4_ != 0) {
            uVar2 = ( &hash_table_size_primes )[(uint)thread_load_tasks._40_4_];
            uVar22 = CONCAT44(0, uVar2);
            lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)thread_load_tasks._40_4_ * 8 );
            uVar13 = String::hash();
            uVar16 = 1;
            if (uVar13 != 0) {
               uVar16 = uVar13;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar16 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar22;
            auVar4 = auVar4 * auVar8;
            lVar18 = auVar4._8_8_;
            uVar15 = auVar4._0_8_;
            uVar13 = *(uint*)( thread_load_tasks._16_8_ + lVar18 * 4 );
            iVar17 = auVar4._8_4_;
            fVar23 = _LC98;
            if (uVar13 != 0) {
               uVar19 = 0;
               lVar21 = thread_load_tasks._16_8_;
               while (( uVar16 != uVar13 || ( cVar12 = String::operator ==((String*)( *(long*)( thread_load_tasks._8_8_ + lVar18 * 8 ) + 0x10 ), pSVar20) ),lVar21 = thread_load_tasks._16_8_,cVar12 == '\0' )) {
                  uVar19 = uVar19 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(iVar17 + 1) * lVar3;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar22;
                  auVar5 = auVar5 * auVar9;
                  lVar18 = auVar5._8_8_;
                  uVar15 = auVar5._0_8_;
                  uVar13 = *(uint*)( lVar21 + lVar18 * 4 );
                  iVar17 = auVar5._8_4_;
                  fVar23 = _LC98;
                  if (( uVar13 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar13 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar22,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + iVar17 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar22,uVar15 = SUB168(auVar7 * auVar11, 0),SUB164(auVar7 * auVar11, 8) < uVar19) goto LAB_0010e272;
               }
;
               uVar15 = _dependency_get_progress(pSVar20);
               fVar23 = extraout_XMM0_Da;
            }

         }

         LAB_0010e272:fVar24 = fVar24 + fVar23;
         if (uVar1 == local_4c) goto code_r0x0010e280;
         local_4c = local_4c + 1;
         pSVar20 = pSVar20 + 8;
      }
 while ( true );
   }

   fVar24 = *(float*)( lVar14 + 0x40 );
   LAB_0010e2b8:fVar23 = *(float*)( lVar14 + 0x44 );
   if (*(float*)( lVar14 + 0x44 ) <= fVar24) {
      fVar23 = fVar24;
   }

   *(float*)( lVar14 + 0x44 ) = fVar23;
   return uVar15;
   code_r0x0010e280:fVar24 = (float)( (double)*(float*)( lVar14 + 0x40 ) * __LC126 + (double)( ( fVar24 / (float)(int)uVar1 ) * __LC127 ) );
   goto LAB_0010e2b8;
}
/* ResourceLoader::_dependency_get_progress(String const&) */ulong ResourceLoader::_dependency_get_progress(String *param_1) {
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
   char cVar11;
   uint uVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   long lVar16;
   uint uVar17;
   ulong uVar18;
   if (( thread_load_tasks._8_8_ != 0 ) && ( thread_load_tasks._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)thread_load_tasks._40_4_];
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)thread_load_tasks._40_4_ * 8 );
      uVar12 = String::hash();
      uVar13 = 1;
      if (uVar12 != 0) {
         uVar13 = uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( thread_load_tasks._16_8_ + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar17 = 0;
         lVar16 = thread_load_tasks._16_8_;
         do {
            if (( uVar13 == uVar12 ) && ( cVar11 = String::operator ==((String*)( *(long*)( thread_load_tasks._8_8_ + lVar15 * 8 ) + 0x10 ), param_1) ),lVar16 = thread_load_tasks._16_8_,cVar11 != '\0') {
               uVar18 = _dependency_get_progress(param_1);
               return uVar18;
            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar12 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return (ulong)_LC98;
}
/* ResourceLoader::load_threaded_get_status(String const&, float*) */int ResourceLoader::load_threaded_get_status(String *param_1, float *param_2) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   bool bVar10;
   char cVar11;
   uint uVar12;
   int iVar13;
   long lVar14;
   long *plVar15;
   uint uVar16;
   long lVar17;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   int *in_FS_OFFSET;
   float fVar21;
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   uint local_68[2];
   String local_60[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar13 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar13 + 1;
   if (iVar13 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_0010e963;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar13 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar13 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar13);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( user_load_tokens._8_8_ != 0 ) && ( user_load_tokens._44_4_ != 0 )) {
      uVar1 = ( &hash_table_size_primes )[(uint)user_load_tokens._40_4_];
      uVar19 = CONCAT44(0, uVar1);
      lVar14 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)user_load_tokens._40_4_ * 8 );
      uVar12 = String::hash();
      uVar16 = 1;
      if (uVar12 != 0) {
         uVar16 = uVar12;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar16 * lVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar19;
      lVar17 = SUB168(auVar2 * auVar6, 8);
      uVar12 = *(uint*)( user_load_tokens._16_8_ + lVar17 * 4 );
      iVar13 = SUB164(auVar2 * auVar6, 8);
      if (uVar12 != 0) {
         uVar20 = 0;
         lVar18 = user_load_tokens._16_8_;
         do {
            if (( uVar16 == uVar12 ) && ( cVar11 = String::operator ==((String*)( *(long*)( user_load_tokens._8_8_ + lVar17 * 8 ) + 0x10 ), param_1) ),lVar18 = user_load_tokens._16_8_,cVar11 != '\0') {
               _validate_local_path(local_60);
               local_68[0] = 0;
               cVar11 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, local_60, local_68);
               if (cVar11 == '\0') {
                  _err_print_error("load_threaded_get_status", "core/io/resource_loader.cpp", 700, "Condition \"!thread_load_tasks.has(local_path)\" is true. Returning: THREAD_LOAD_INVALID_RESOURCE", "Bug in ResourceLoader logic, please report.", 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
                  goto LAB_0010e4b5;
               }

               lVar14 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, local_60);
               iVar13 = *(int*)( lVar14 + 0x50 );
               if (param_2 != (float*)0x0) {
                  local_68[0] = 0;
                  cVar11 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, local_60, local_68);
                  fVar21 = _LC98;
                  if (cVar11 != '\0') {
                     fVar21 = (float)_dependency_get_progress(local_60);
                  }

                  *param_2 = fVar21;
               }

               if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
                  /* WARNING: Subroutine does not return */
                  Thread::caller_id();
               }

               bVar10 = *(long*)( (long)in_FS_OFFSET + lRam000000000010e672 ) == 1 && iVar13 == 1;
               if (bVar10) {
                  lVar17 = Engine::get_singleton();
                  if (*(long*)( lVar14 + 0x48 ) != *(long*)( lVar17 + 0x78 )) {
                     *(long*)( lVar14 + 0x48 ) = *(long*)( lVar17 + 0x78 );
                     goto LAB_0010e68b;
                  }

               }
 else {
                  LAB_0010e68b:bVar10 = false;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
               }

               *in_FS_OFFSET = *in_FS_OFFSET + -1;
               if (*in_FS_OFFSET == 0) {
                  if ((char)*in_FS_OFFSET == '\0') {
                     __tls_init_part_0();
                  }

                  if ((char)*in_FS_OFFSET == '\0') goto LAB_0010e963;
                  if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
                     pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
                     *(undefined1*)in_FS_OFFSET = 0;
                  }

               }

               if (( bVar10 ) && ( lVar14 = OS::get_singleton() * (char*)( lVar14 + 0x128 ) == '\0' )) {
                  plVar15 = (long*)RenderingServer::get_singleton();
                  ( **(code**)( *plVar15 + 0x11d0 ) )(plVar15);
               }

               goto LAB_0010e4d5;
            }

            uVar20 = uVar20 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar13 + 1) * lVar14;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar19;
            lVar17 = SUB168(auVar3 * auVar7, 8);
            uVar12 = *(uint*)( lVar18 + lVar17 * 4 );
            iVar13 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar12 * lVar14,auVar8._8_8_ = 0,auVar8._0_8_ = uVar19,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar4 * auVar8, 8)) * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,uVar20 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   cVar11 = is_print_verbose_enabled();
   if (cVar11 == '\0') {
      LAB_0010e4b5:if ((char)*in_FS_OFFSET != '\0') goto LAB_0010e4c4;
      LAB_0010e7fc:__tls_init_part_0();
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar13 = *in_FS_OFFSET;
   }
 else {
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "\' has been initiated or its result has already been collected.");
      operator+((char *)
      local_78,(String*)"load_threaded_get_status(): No threaded load for resource path \'";
      String::operator +((String*)local_68, (String*)local_78);
      Variant::Variant((Variant*)local_58, (String*)local_68);
      stringify_variants((Variant*)local_60);
      __print_line(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if ((char)*in_FS_OFFSET == '\0') goto LAB_0010e7fc;
      LAB_0010e4c4:*in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar13 = *in_FS_OFFSET;
   }

   if (iVar13 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_0010e963:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   iVar13 = 0;
   LAB_0010e4d5:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return iVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::LoadToken::clear() */void ResourceLoader::LoadToken::clear(LoadToken *this) {
   String *this_00;
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   uint uVar4;
   CowData<String> *this_01;
   ThreadLoadTask *this_02;
   undefined8 uVar5;
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
   undefined8 uVar27;
   char cVar28;
   int iVar29;
   uint uVar30;
   long *plVar31;
   uint uVar32;
   uint uVar33;
   long lVar34;
   long *plVar35;
   long lVar36;
   ulong uVar37;
   long lVar38;
   uint uVar39;
   long lVar40;
   uint *puVar41;
   long *in_FS_OFFSET;
   long local_50[2];
   long local_40;
   local_40 = in_FS_OFFSET[5];
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar29 = (int)*in_FS_OFFSET + 1;
   *(int*)in_FS_OFFSET = iVar29;
   if (iVar29 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_0010f058;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar29 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
      if (iVar29 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar29);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( *(long*)( this + 0x180 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x180 ) + -8 ) )) {
      this_02 = *(ThreadLoadTask**)( this + 0x198 );
      if (this_02 == (ThreadLoadTask*)0x0) {
         this_00 = (String*)( this + 0x180 );
         plVar31 = (long*)HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, this_00);
         lVar38 = *plVar31;
         if (( lVar38 != 0 ) && ( (char)plVar31[2] == '\0' )) {
            puVar2 = (undefined8*)thread_load_tasks._24_8_;
            if (thread_load_tasks._8_8_ == 0) {
               if (( *(long*)( this + 0x180 ) != 0 ) && ( *(long*)( *(long*)( this + 0x180 ) + -8 ) != 0 )) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
                  puVar2 = (undefined8*)thread_load_tasks._24_8_;
               }

            }
 else {
               if (thread_load_tasks._44_4_ != 0) goto LAB_0010ed43;
               if (( *(long*)( this + 0x180 ) != 0 ) && ( *(long*)( *(long*)( this + 0x180 ) + -8 ) != 0 )) goto LAB_0010eca7;
            }

            goto joined_r0x0010ecc3;
         }

         if (( thread_load_tasks._8_8_ != 0 ) && ( thread_load_tasks._44_4_ != 0 )) {
            lVar38 = 0;
            LAB_0010ed43:uVar4 = ( &hash_table_size_primes )[(uint)thread_load_tasks._40_4_];
            lVar40 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)thread_load_tasks._40_4_ * 8 );
            uVar30 = String::hash();
            uVar37 = CONCAT44(0, uVar4);
            uVar32 = 1;
            if (uVar30 != 0) {
               uVar32 = uVar30;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar32 * lVar40;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar37;
            lVar34 = SUB168(auVar6 * auVar16, 8);
            uVar30 = *(uint*)( thread_load_tasks._16_8_ + lVar34 * 4 );
            uVar33 = SUB164(auVar6 * auVar16, 8);
            if (uVar30 != 0) {
               uVar39 = 0;
               lVar36 = thread_load_tasks._16_8_;
               do {
                  if (( uVar30 == uVar32 ) && ( cVar28 = String::operator ==((String*)( *(long*)( thread_load_tasks._8_8_ + lVar34 * 8 ) + 0x10 ), this_00) ),uVar27 = thread_load_tasks._16_8_,uVar26 = thread_load_tasks._8_8_,lVar36 = thread_load_tasks._16_8_,cVar28 != '\0') {
                     uVar4 = ( &hash_table_size_primes )[(uint)thread_load_tasks._40_4_];
                     uVar37 = CONCAT44(0, uVar4);
                     lVar40 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)thread_load_tasks._40_4_ * 8 );
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(uVar33 + 1) * lVar40;
                     auVar20._8_8_ = 0;
                     auVar20._0_8_ = uVar37;
                     lVar34 = SUB168(auVar10 * auVar20, 8);
                     puVar41 = (uint*)( thread_load_tasks._16_8_ + lVar34 * 4 );
                     uVar30 = SUB164(auVar10 * auVar20, 8);
                     uVar32 = *puVar41;
                     if (( uVar32 == 0 ) || ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar32 * lVar40,auVar21._8_8_ = 0,auVar21._0_8_ = uVar37,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar4 + uVar30 ) - SUB164(auVar11 * auVar21, 8)) * lVar40,auVar22._8_8_ = 0,auVar22._0_8_ = uVar37,uVar39 = uVar33,SUB164(auVar12 * auVar22, 8) == 0) goto LAB_0010ef39;
                     goto LAB_0010eeed;
                  }

                  uVar39 = uVar39 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(uVar33 + 1) * lVar40;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar37;
                  lVar34 = SUB168(auVar7 * auVar17, 8);
                  uVar30 = *(uint*)( lVar36 + lVar34 * 4 );
                  uVar33 = SUB164(auVar7 * auVar17, 8);
               }
 while ( ( uVar30 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar30 * lVar40,auVar18._8_8_ = 0,auVar18._0_8_ = uVar37,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar4 + uVar33 ) - SUB164(auVar8 * auVar18, 8)) * lVar40,auVar19._8_8_ = 0,auVar19._0_8_ = uVar37,uVar39 <= SUB164(auVar9 * auVar19, 8) );
            }

            goto LAB_0010efc4;
         }

         if (( *(long*)( this + 0x180 ) != 0 ) && ( *(long*)( *(long*)( this + 0x180 ) + -8 ) != 0 )) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
         }

      }
 else {
         ThreadLoadTask::~ThreadLoadTask(this_02);
         Memory::free_static(this_02, false);
         *(undefined8*)( this + 0x198 ) = 0;
         if (( *(long*)( this + 0x180 ) != 0 ) && ( *(long*)( *(long*)( this + 0x180 ) + -8 ) != 0 )) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
         }

      }

   }

   LAB_0010e9d6:lVar38 = 0;
   goto LAB_0010e9d9;
   while (auVar13._8_8_ = 0,auVar13._0_8_ = (ulong)uVar32 * lVar40,auVar23._8_8_ = 0,auVar23._0_8_ = uVar37,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar30 + uVar4 ) - SUB164(auVar13 * auVar23, 8)) * lVar40,auVar24._8_8_ = 0,auVar24._0_8_ = uVar37,uVar39 = uVar33,SUB164(auVar14 * auVar24, 8) != 0) {
      LAB_0010eeed:uVar33 = uVar30;
      puVar1 = (uint*)( uVar27 + (ulong)uVar39 * 4 );
      *puVar41 = *puVar1;
      puVar2 = (undefined8*)( uVar26 + lVar34 * 8 );
      *puVar1 = uVar32;
      puVar3 = (undefined8*)( uVar26 + (ulong)uVar39 * 8 );
      uVar5 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(uVar33 + 1) * lVar40;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar37;
      lVar34 = SUB168(auVar15 * auVar25, 8);
      puVar41 = (uint*)( uVar27 + lVar34 * 4 );
      uVar30 = SUB164(auVar15 * auVar25, 8);
      uVar32 = *puVar41;
      if (uVar32 == 0) break;
   }
;
   LAB_0010ef39:uVar37 = (ulong)uVar33;
   *(undefined4*)( uVar27 + uVar37 * 4 ) = 0;
   plVar31 = (long*)( uVar26 + uVar37 * 8 );
   plVar35 = (long*)*plVar31;
   if ((long*)thread_load_tasks._24_8_ == plVar35) {
      thread_load_tasks._24_8_ = *plVar35;
      plVar35 = (long*)*plVar31;
   }

   if ((long*)thread_load_tasks._32_8_ == plVar35) {
      thread_load_tasks._32_8_ = plVar35[1];
      plVar35 = (long*)*plVar31;
   }

   if ((long*)plVar35[1] != (long*)0x0) {
      *(long*)plVar35[1] = *plVar35;
      plVar35 = (long*)*plVar31;
   }

   if (*plVar35 != 0) {
      *(long*)( *plVar35 + 8 ) = plVar35[1];
      plVar35 = (long*)*plVar31;
   }

   ThreadLoadTask::~ThreadLoadTask((ThreadLoadTask*)( plVar35 + 3 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar35 + 2 ));
   Memory::free_static(plVar35, false);
   *(undefined8*)( thread_load_tasks._8_8_ + uVar37 * 8 ) = 0;
   thread_load_tasks._44_4_ = thread_load_tasks._44_4_ + -1;
   LAB_0010efc4:if (( *(long*)( this + 0x180 ) != 0 ) && ( *(long*)( *(long*)( this + 0x180 ) + -8 ) != 0 )) {
      LAB_0010eca7:CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
   }

   puVar2 = (undefined8*)thread_load_tasks._24_8_;
   if (lVar38 == 0) goto LAB_0010e9d6;
   joined_r0x0010ecc3:for (; puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      if (puVar2[3] == lVar38) goto LAB_0010e9d6;
   }

   LAB_0010e9d9:if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
   if ((int)*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_0010f058:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (lVar38 != 0) {
      lVar38 = *in_FS_OFFSET;
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      local_50[0] = 0;
      this_01 = (CowData<String>*)*in_FS_OFFSET;
      lVar40 = *in_FS_OFFSET;
      if (*in_FS_OFFSET != 0) {
         CowData<String>::_ref((CowData<String>*)local_50, (CowData*)this_01);
         lVar40 = local_50[0];
      }

      lVar34 = *in_FS_OFFSET;
      *(int*)in_FS_OFFSET = 0;
      if ((char)lVar34 == '\0') {
         __tls_init_part_0();
      }

      CowData<String>::resize<false>(this_01, 0);
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
      lVar34 = *in_FS_OFFSET;
      *(int*)in_FS_OFFSET = (int)lVar38;
      if ((char)lVar34 == '\0') {
         __tls_init_part_0();
      }

      if (*in_FS_OFFSET != lVar40) {
         CowData<String>::_ref(this_01, (CowData*)local_50);
      }

      CowData<String>::resize<false>((CowData<String>*)local_50, 0);
      CowData<String>::_unref((CowData<String>*)local_50);
   }

   if (local_40 != in_FS_OFFSET[5]) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceLoader::LoadToken::~LoadToken() */void ResourceLoader::LoadToken::~LoadToken(LoadToken *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001206d0;
   clear(this);
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x180 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x180 );
         *(undefined8*)( this + 0x180 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00120228;
   Object::~Object((Object*)this);
   return;
}
/* ResourceLoader::LoadToken::~LoadToken() */void ResourceLoader::LoadToken::~LoadToken(LoadToken *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001206d0;
   clear(this);
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x180 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x180 );
         *(undefined8*)( this + 0x180 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00120228;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1a0);
   return;
}
/* ResourceLoader::_load_complete_inner(ResourceLoader::LoadToken&, Error*,
   MutexLock<SafeBinaryMutex<1> >&) */LoadToken *ResourceLoader::_load_complete_inner(LoadToken *param_1, Error *param_2, MutexLock *param_3) {
   Variant *pVVar1;
   ulong *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   condition_variable *this;
   code *pcVar5;
   Callable *pCVar6;
   Ref *pRVar7;
   char cVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   CallableCustom *pCVar12;
   Variant *pVVar13;
   long *plVar14;
   long *plVar15;
   unique_lock *this_00;
   uint uVar16;
   ulong *puVar17;
   long lVar18;
   CowData<String> *this_01;
   undefined8 *puVar19;
   ulong *puVar20;
   long *in_FS_OFFSET;
   Ref *local_300;
   Callable local_2f8[16];
   Callable local_2e8[16];
   ulong local_2d8;
   long local_2d0[2];
   undefined4 local_2c0;
   Variant *local_2b8;
   undefined8 local_2a8;
   undefined1 local_2a0[16];
   undefined8 local_290;
   undefined1 local_288[16];
   Variant local_278[24];
   Variant local_260[24];
   undefined8 local_248;
   undefined1 local_240[16];
   Variant local_230[8];
   Variant *local_228;
   undefined1 auStack_220[16];
   undefined8 local_1c8;
   pthread_mutex_t local_a8;
   condition_variable local_80[48];
   undefined8 local_50;
   long local_40;
   local_40 = in_FS_OFFSET[5];
   if (param_3 != (MutexLock*)0x0) {
      *(undefined4*)param_3 = 0;
   }

   plVar14 = *(long**)( param_2 + 0x198 );
   if (plVar14 == (long*)0x0) {
      local_2d8 = local_2d8 & 0xffffffff00000000;
      cVar8 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)( param_2 + 0x180 ), (uint*)&local_2d8);
      if (cVar8 == '\0') {
         if (param_3 != (MutexLock*)0x0) {
            *(undefined4*)param_3 = 0x2f;
         }

         _err_print_error("_load_complete_inner", "core/io/resource_loader.cpp", 800, "Method/function failed. Returning: Ref<Resource>()", "Bug in ResourceLoader logic, please report.", 0);
         *(undefined8*)param_1 = 0;
         goto LAB_0010f3d4;
      }

      plVar14 = (long*)HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)( param_2 + 0x180 ));
      if ((int)plVar14[10] == 1) {
         lVar18 = *plVar14;
         if (lVar18 == 0) {
            lVar18 = plVar14[1];
            if (lVar18 != 0) {
               LAB_0010fafa:if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
                  /* WARNING: Subroutine does not return */
                  Thread::caller_id();
               }

               if (*(long*)( (long)in_FS_OFFSET + lRam000000000010fb10 ) == lVar18) goto LAB_0010fcfb;
               goto LAB_0010fb1a;
            }

         }
 else {
            lVar11 = WorkerThreadPool::get_caller_task_id();
            if (lVar18 == lVar11) {
               LAB_0010fcfb:if (param_3 != (MutexLock*)0x0) {
                  *(undefined4*)param_3 = 0x2c;
               }

               *(undefined8*)param_1 = 0;
               goto LAB_0010f3d4;
            }

            lVar18 = plVar14[1];
            if (lVar18 != 0) goto LAB_0010fafa;
            LAB_0010fb1a:if (*plVar14 != 0) {
               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
                  *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
                  cVar8 = (char)*in_FS_OFFSET;
                  this_01 = (CowData<String>*)*in_FS_OFFSET;
                  if ((int)*in_FS_OFFSET == 0) {
                     if (cVar8 == '\0') {
                        __tls_init_part_0();
                     }

                     goto LAB_0010fdc4;
                  }

                  LAB_0010fde2:iVar9 = (int)*in_FS_OFFSET;
                  if (cVar8 == '\0') {
                     __tls_init_part_0();
                  }

               }
 else {
                  *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
                  if ((int)*in_FS_OFFSET == 0) {
                     LAB_0010fdc4:this_01 = (CowData<String>*)*in_FS_OFFSET;
                     std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex>*)this_01);
                     cVar8 = (char)*in_FS_OFFSET;
                     goto LAB_0010fde2;
                  }

                  iVar9 = (int)*in_FS_OFFSET;
                  this_01 = (CowData<String>*)*in_FS_OFFSET;
               }

               local_2d0[0] = 0;
               lVar18 = *in_FS_OFFSET;
               if (*in_FS_OFFSET != 0) {
                  CowData<String>::_ref((CowData<String>*)local_2d0, (CowData*)this_01);
                  lVar18 = local_2d0[0];
               }

               lVar11 = *in_FS_OFFSET;
               *(int*)in_FS_OFFSET = 0;
               if ((char)lVar11 == '\0') {
                  __tls_init_part_0();
               }

               CowData<String>::resize<false>(this_01, 0);
               iVar10 = WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
               lVar11 = *in_FS_OFFSET;
               *(int*)in_FS_OFFSET = iVar9;
               if ((char)lVar11 == '\0') {
                  __tls_init_part_0();
               }

               if (lVar18 != *in_FS_OFFSET) {
                  CowData<String>::_ref(this_01, (CowData*)local_2d0);
               }

               CowData<String>::resize<false>((CowData<String>*)local_2d0, 0);
               if (iVar10 == 0x2c) {
                  RefCounted::reference();
                  _run_load_task(plVar14);
               }

               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
               }

               iVar9 = (int)*in_FS_OFFSET + 1;
               *(int*)in_FS_OFFSET = iVar9;
               if (iVar9 == 1) {
                  if ((char)*in_FS_OFFSET == '\0') {
                     __tls_init_part_0();
                  }

                  if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_0010febe;
                  if ((char)*in_FS_OFFSET != '\0') goto LAB_0010fead;
                  iVar9 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
                  if (iVar9 != 0) goto LAB_0010feb9;
                  *(undefined1*)in_FS_OFFSET = 1;
               }

               plVar15 = (long*)thread_load_tasks._24_8_;
               *(undefined1*)( plVar14 + 2 ) = 1;
               if (plVar15 != (long*)0x0) {
                  lVar18 = *plVar14;
                  do {
                     if (plVar15[3] == lVar18) {
                        *(undefined1*)( plVar15 + 5 ) = 1;
                     }

                     plVar15 = (long*)*plVar15;
                  }
 while ( plVar15 != (long*)0x0 );
               }

               CowData<String>::_unref((CowData<String>*)local_2d0);
               goto LAB_0010f7d8;
            }

         }

         if (*(char*)( (long)plVar14 + 0x24 ) != '\0') {
            this_00 = (unique_lock*)plVar14[3];
            if (this_00 == (unique_lock*)0x0) {
               this_00 = (unique_lock*)operator_new(0x30, "");
               std::condition_variable::condition_variable((condition_variable*)this_00);
               plVar14[3] = (long)this_00;
            }

            *(int*)( plVar14 + 4 ) = (int)plVar14[4] + 1;
            while (true) {
               if ((char)*in_FS_OFFSET == '\0') {
                  __tls_init_part_0();
               }

               std::condition_variable::wait(this_00);
               if (*(char*)( (long)plVar14 + 0x24 ) == '\0') break;
               this_00 = (unique_lock*)plVar14[3];
            }
;
            plVar15 = plVar14 + 4;
            *(int*)plVar15 = (int)*plVar15 + -1;
            if ((int)*plVar15 == 0) {
               this(condition_variable * plVar14[3]);
               std::condition_variable::~condition_variable(this);
               Memory::free_static(this, false);
               plVar14[3] = 0;
            }

         }

      }

      LAB_0010f7d8:if (cleaning_tasks != '\0') {
         Ref<Resource>::operator =((Ref<Resource>*)( plVar14 + 0xc ), (Ref*)0x0);
         *(undefined4*)( plVar14 + 0xb ) = 1;
      }

   }

   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *(int*)in_FS_OFFSET = (int)*in_FS_OFFSET + -1;
   if ((int)*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') goto LAB_0010febe;
      if ((pthread_mutex_t*)*in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   local_300 = (Ref*)0x0;
   Ref<Resource>::operator =((Ref<Resource>*)&local_300, (Ref*)plVar14[0xc]);
   pRVar7 = local_300;
   if (param_3 != (MutexLock*)0x0) {
      *(int*)param_3 = (int)plVar14[0xb];
   }

   if (local_300 != (Ref*)0x0) {
      lVar18 = *in_FS_OFFSET;
      if (lVar18 == 0) {
         if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
            /* WARNING: Subroutine does not return */
            Thread::caller_id();
         }

         uVar16 = *(uint*)( plVar14 + 0x13 );
         if (*(long*)( (long)in_FS_OFFSET + lRam000000000010f50e ) == 1) {
            puVar19 = (undefined8*)plVar14[0x14];
            puVar3 = puVar19 + (ulong)uVar16 * 4;
            for (; puVar3 != puVar19; puVar19 = puVar19 + 4) {
               cVar8 = Callable::is_valid();
               if (cVar8 != '\0') {
                  Resource::connect_changed((Callable*)*puVar19, (int)puVar19 + 8);
               }

            }

         }
 else if (uVar16 != 0) {
            plVar14 = (long*)plVar14[0x14];
            plVar15 = plVar14 + (ulong)uVar16 * 4;
            do {
               cVar8 = Callable::is_valid();
               pCVar6 = MessageQueue::main_singleton;
               if (cVar8 != '\0') {
                  lVar18 = *plVar14;
                  pCVar12 = (CallableCustom*)operator_new(0x48, "");
                  CallableCustom::CallableCustom(pCVar12);
                  *(undefined8*)( pCVar12 + 0x40 ) = 0;
                  *(undefined**)( pCVar12 + 0x20 ) = &_LC15;
                  *(undefined1(*) [16])( pCVar12 + 0x30 ) = (undefined1[16])0x0;
                  *(undefined***)pCVar12 = &PTR_hash_00120830;
                  uVar4 = *(undefined8*)( lVar18 + 0x60 );
                  *(long*)( pCVar12 + 0x28 ) = lVar18;
                  *(undefined8*)( pCVar12 + 0x30 ) = uVar4;
                  *(undefined8*)( pCVar12 + 0x10 ) = 0;
                  *(code**)( pCVar12 + 0x38 ) = Resource::connect_changed;
                  CallableCustomMethodPointerBase::_setup((uint*)pCVar12, (int)pCVar12 + 0x28);
                  *(char**)( pCVar12 + 0x20 ) = "Resource::connect_changed";
                  Callable::Callable(local_2f8, pCVar12);
                  uVar16 = *(uint*)( plVar14 + 3 );
                  Callable::Callable(local_2e8, (Callable*)( plVar14 + 1 ));
                  Variant::Variant(local_278, local_2e8);
                  Variant::Variant(local_260, uVar16);
                  local_248 = 0;
                  local_240 = (undefined1[16])0x0;
                  auStack_220._0_8_ = local_260;
                  local_228 = local_278;
                  Callable::bindp((Variant**)&local_2d8, (int)local_2f8);
                  pVVar13 = local_230;
                  do {
                     pVVar1 = pVVar13 + -0x18;
                     pVVar13 = pVVar13 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar13 != local_278 );
                  local_228 = (Variant*)0x0;
                  auStack_220 = (undefined1[16])0x0;
                  CallQueue::push_callablep(pCVar6, (Variant**)&local_2d8, 0, false);
                  if (Variant::needs_deinit[(int)local_228] != '\0') {
                     Variant::_clear_internal();
                  }

                  Callable::~Callable((Callable*)&local_2d8);
                  Callable::~Callable(local_2e8);
                  Callable::~Callable(local_2f8);
               }

               plVar14 = plVar14 + 4;
            }
 while ( plVar15 != plVar14 );
            if ((char)*in_FS_OFFSET == '\0') {
               RefCounted::RefCounted((RefCounted*)&local_228);
               local_a8.__data.__list.__next = (__pthread_internal_list*)0x0;
               local_228 = (Variant*)&PTR__initialize_classv_00120388;
               local_a8._0_16_ = (undefined1[16])0x0;
               local_a8._16_16_ = (undefined1[16])0x0;
               std::condition_variable::condition_variable(local_80);
               pCVar6 = MessageQueue::main_singleton;
               local_50 = 0;
               pCVar12 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar12);
               *(undefined**)( pCVar12 + 0x20 ) = &_LC15;
               *(RefCounted**)( pCVar12 + 0x28 ) = (RefCounted*)&local_228;
               *(undefined1(*) [16])( pCVar12 + 0x30 ) = (undefined1[16])0x0;
               *(undefined***)pCVar12 = &PTR_hash_001208c0;
               *(undefined8*)( pCVar12 + 0x40 ) = 0;
               *(undefined8*)( pCVar12 + 0x10 ) = 0;
               *(undefined8*)( pCVar12 + 0x30 ) = local_1c8;
               *(code**)( pCVar12 + 0x38 ) = core_bind::Semaphore::post;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar12, (int)pCVar12 + 0x28);
               *(char**)( pCVar12 + 0x20 ) = "core_bind::Semaphore::post";
               Callable::Callable(local_2e8, pCVar12);
               Variant::Variant((Variant*)&local_2a8, 1);
               local_290 = 0;
               local_288 = (undefined1[16])0x0;
               local_2b8 = (Variant*)&local_2a8;
               Callable::bindp((Variant**)&local_2d8, (int)local_2e8);
               if (Variant::needs_deinit[(int)local_290] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[(int)local_2a8] != '\0') {
                  Variant::_clear_internal();
               }

               local_2a8 = 0;
               local_2a0 = (undefined1[16])0x0;
               CallQueue::push_callablep(pCVar6, (Variant**)&local_2d8, 0, false);
               if (Variant::needs_deinit[(int)local_2a8] != '\0') {
                  Variant::_clear_internal();
               }

               Callable::~Callable((Callable*)&local_2d8);
               Callable::~Callable(local_2e8);
               core_bind::Semaphore::wait();
               local_228 = (Variant*)&PTR__initialize_classv_00120388;
               iVar9 = pthread_mutex_lock(&local_a8);
               if (iVar9 != 0) goto LAB_0010feb9;
               if (local_50._4_4_ != 0) {
                  _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
                  std::condition_variable::condition_variable(local_80);
               }

               pthread_mutex_unlock(&local_a8);
               std::condition_variable::~condition_variable(local_80);
               local_228 = (Variant*)&PTR__initialize_classv_00120228;
               Object::~Object((Object*)&local_228);
            }

         }

      }
 else {
         puVar20 = (ulong*)plVar14[0x14];
         puVar2 = puVar20 + ( ulong ) * (uint*)( plVar14 + 0x13 ) * 4;
         if (puVar2 != puVar20) {
            while (true) {
               local_2d8 = *puVar20;
               Callable::Callable((Callable*)local_2d0, (Callable*)( puVar20 + 1 ));
               local_2c0 = (undefined4)puVar20[3];
               uVar16 = *(uint*)( lVar18 + 0x98 );
               if (uVar16 == *(uint*)( lVar18 + 0x9c )) {
                  uVar16 = uVar16 * 2;
                  if (uVar16 == 0) {
                     uVar16 = 1;
                  }

                  *(uint*)( lVar18 + 0x9c ) = uVar16;
                  lVar11 = Memory::realloc_static(*(void**)( lVar18 + 0xa0 ), (ulong)uVar16 << 5, false);
                  *(long*)( lVar18 + 0xa0 ) = lVar11;
                  if (lVar11 == 0) {
                     _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }

                  uVar16 = *(uint*)( lVar18 + 0x98 );
               }
 else {
                  lVar11 = *(long*)( lVar18 + 0xa0 );
               }

               puVar20 = puVar20 + 4;
               *(uint*)( lVar18 + 0x98 ) = uVar16 + 1;
               puVar17 = (ulong*)( lVar11 + (ulong)uVar16 * 0x20 );
               *puVar17 = local_2d8;
               Callable::Callable((Callable*)( puVar17 + 1 ), (Callable*)local_2d0);
               *(undefined4*)( puVar17 + 3 ) = local_2c0;
               Callable::~Callable((Callable*)local_2d0);
               if (puVar2 == puVar20) break;
               lVar18 = *in_FS_OFFSET;
            }
;
         }

      }

   }

   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar9 = (int)*in_FS_OFFSET + 1;
   *(int*)in_FS_OFFSET = iVar9;
   if (iVar9 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((pthread_mutex_t*)*in_FS_OFFSET == (pthread_mutex_t*)0x0) {
         LAB_0010febe:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if ((char)*in_FS_OFFSET != '\0') {
         LAB_0010fead:/* WARNING: Subroutine does not return */std::__throw_system_error(0x23);
      }

      iVar9 = pthread_mutex_lock((pthread_mutex_t*)*in_FS_OFFSET);
      if (iVar9 != 0) {
         LAB_0010feb9:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar9);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   *(undefined8*)param_1 = 0;
   Ref<Resource>::operator =((Ref<Resource>*)param_1, pRVar7);
   if (( ( pRVar7 != (Ref*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pRVar7 + 0x140 ))(pRVar7);
   Memory::free_static(pRVar7, false);
}
LAB_0010f3d4:if (local_40 == in_FS_OFFSET[5]) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceLoader::_load_complete(ResourceLoader::LoadToken&, Error*) */ResourceLoader * __thiscall
ResourceLoader::_load_complete(ResourceLoader *this,LoadToken *param_1,Error *param_2){
   long lVar1;
   int iVar2;
   int *in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar2 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar2 + 1;
   if (iVar2 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_0011002f;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar2 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   _load_complete_inner((LoadToken*)this, (Error*)param_1, (MutexLock*)param_2);
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   if (*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_0011002f:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 10 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::load_threaded_get(String const&, Error*) */ResourceLoader * __thiscall
ResourceLoader::load_threaded_get(ResourceLoader *this,String *param_1,Error *param_2){
   Object *pOVar1;
   int *piVar2;
   uint uVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   ulong uVar13;
   char cVar14;
   uint uVar15;
   int iVar16;
   undefined8 *puVar17;
   long lVar18;
   long *plVar19;
   uint uVar20;
   long lVar21;
   char cVar22;
   uint uVar23;
   long lVar24;
   int *in_FS_OFFSET;
   Object *local_88;
   undefined1 *local_80;
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   String local_68[8];
   Ref *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (param_2 != (Error*)0x0) {
      *(undefined4*)param_2 = 0;
   }

   local_88 = (Object*)0x0;
   local_80 = thread_load_mutex;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar16 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar16 + 1;
   if (iVar16 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_001107e9;
      if ((char)*in_FS_OFFSET != '\0') {
         LAB_001107f8:/* WARNING: Subroutine does not return */std::__throw_system_error(0x23);
      }

      iVar16 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar16 != 0) {
         LAB_00110802:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar16);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( user_load_tokens._8_8_ == 0 ) || ( user_load_tokens._44_4_ == 0 )) {
      LAB_001100da:cVar14 = is_print_verbose_enabled();
   }
 else {
      uVar3 = ( &hash_table_size_primes )[(uint)user_load_tokens._40_4_];
      lVar18 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)user_load_tokens._40_4_ * 8 );
      uVar15 = String::hash();
      uVar13 = CONCAT44(0, uVar3);
      uVar20 = 1;
      if (uVar15 != 0) {
         uVar20 = uVar15;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar20 * lVar18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar13;
      lVar21 = SUB168(auVar5 * auVar9, 8);
      uVar15 = *(uint*)( user_load_tokens._16_8_ + lVar21 * 4 );
      iVar16 = SUB164(auVar5 * auVar9, 8);
      if (uVar15 == 0) goto LAB_001100da;
      uVar23 = 0;
      lVar24 = user_load_tokens._16_8_;
      do {
         if (( uVar15 == uVar20 ) && ( cVar14 = String::operator ==((String*)( *(long*)( user_load_tokens._8_8_ + lVar21 * 8 ) + 0x10 ), param_1) ),lVar24 = user_load_tokens._16_8_,cVar14 != '\0') {
            puVar17 = (undefined8*)HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::operator []((HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>*)user_load_tokens, param_1);
            pOVar4 = (Object*)*puVar17;
            if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
               /* WARNING: Subroutine does not return */
               Thread::caller_id();
            }

            if (( ( *(long*)( (long)in_FS_OFFSET + lRam0000000000110278 ) != 1 ) || ( *(long*)( pOVar4 + 0x180 ) == 0 ) ) || ( *(uint*)( *(long*)( pOVar4 + 0x180 ) + -8 ) < 2 )) goto LAB_00110283;
            lVar18 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)( pOVar4 + 0x180 ));
            goto LAB_00110580;
         }

         uVar23 = uVar23 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(iVar16 + 1) * lVar18;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = uVar13;
         lVar21 = SUB168(auVar6 * auVar10, 8);
         uVar15 = *(uint*)( lVar24 + lVar21 * 4 );
         iVar16 = SUB164(auVar6 * auVar10, 8);
      }
 while ( ( uVar15 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar15 * lVar18,auVar11._8_8_ = 0,auVar11._0_8_ = uVar13,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + iVar16 ) - SUB164(auVar7 * auVar11, 8)) * lVar18,auVar12._8_8_ = 0,auVar12._0_8_ = uVar13,uVar23 <= SUB164(auVar8 * auVar12, 8) );
      cVar14 = is_print_verbose_enabled();
   }

   if (cVar14 != '\0') {
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "\' has been initiated or its result has already been collected.");
      operator+((char *)
      local_78,(String*)"load_threaded_get(): No threaded load for resource path \'";
      String::operator +(local_68, (String*)local_78);
      Variant::Variant((Variant*)local_58, local_68);
      stringify_variants((Variant*)&local_60);
      __print_line((String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   if (param_2 != (Error*)0x0) {
      *(undefined4*)param_2 = 0x1f;
   }

   *(undefined8*)this = 0;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   if (*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_001107e9:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   LAB_00110119:if (local_40 != *(long*)( in_FS_OFFSET + 10 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
   while (true) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
         piVar2 = in_FS_OFFSET + 4;
         *piVar2 = *piVar2 + -1;
         iVar16 = *piVar2;
      }
 else {
         piVar2 = in_FS_OFFSET + 4;
         *piVar2 = *piVar2 + -1;
         iVar16 = *piVar2;
      }

      if (iVar16 == 0) {
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         if ((char)in_FS_OFFSET[2] == '\0') goto LAB_001107e9;
         if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
            *(undefined1*)( in_FS_OFFSET + 2 ) = 0;
         }

      }

      lVar21 = OS::get_singleton();
      cVar22 = '\0';
      if (*(char*)( lVar21 + 0x128 ) == '\0') {
         plVar19 = (long*)RenderingServer::get_singleton();
         ( **(code**)( *plVar19 + 0x11d0 ) )(plVar19);
         cVar22 = cVar14;
      }

      plVar19 = (long*)OS::get_singleton();
      ( **(code**)( *plVar19 + 0x1f8 ) )(plVar19, 1000);
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      iVar16 = in_FS_OFFSET[4];
      in_FS_OFFSET[4] = iVar16 + 1;
      if (iVar16 + 1 == 1) {
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_001107e9;
         if ((char)in_FS_OFFSET[2] != '\0') goto LAB_001107f8;
         iVar16 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
         if (iVar16 != 0) goto LAB_00110802;
         *(undefined1*)( in_FS_OFFSET + 2 ) = 1;
      }

      if (cVar22 == '\0') break;
      LAB_00110580:if (*(int*)( lVar18 + 0x50 ) != 1) break;
   }
;
   LAB_00110283:_load_complete_inner((LoadToken*)&local_60, (Error*)pOVar4, (MutexLock*)param_2);
   Ref<Resource>::operator =((Ref<Resource>*)&local_88, local_60);
   if (( ( local_60 != (Ref*)0x0 ) && ( cVar14 = RefCounted::unreference() ),cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
   Memory::free_static(local_60, false);
}
pOVar1 = pOVar4 + 400;*(int*)pOVar1 = *(int*)pOVar1 + -1;if (*(int*)pOVar1 == 0) {
   if (( *(long*)( pOVar4 + 0x188 ) != 0 ) && ( *(long*)( *(long*)( pOVar4 + 0x188 ) + -8 ) != 0 )) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pOVar4 + 0x188 ));
   }

   HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::erase((HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>*)user_load_tokens, param_1);
   cVar14 = RefCounted::unreference();
   if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler(pOVar4) ),cVar14 != '\0') {
      if (*(code**)( *(long*)pOVar4 + 0x140 ) == LoadToken::~LoadToken) {
         *(undefined***)pOVar4 = &PTR__initialize_classv_001206d0;
         LoadToken::clear((LoadToken*)pOVar4);
         CowData<char32_t>::_unref((CowData<char32_t>*)( pOVar4 + 0x188 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( pOVar4 + 0x180 ));
         *(undefined***)pOVar4 = &PTR__initialize_classv_00120228;
         Object::~Object(pOVar4);
      }
 else {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      }

      Memory::free_static(pOVar4, false);
   }

}
if ((char)*in_FS_OFFSET == '\0') {
   __tls_init_part_0();
   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar16 = *in_FS_OFFSET;
}
 else {
   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar16 = *in_FS_OFFSET;
}
if (iVar16 == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   if ((char)*in_FS_OFFSET == '\0') goto LAB_001107e9;
   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
pOVar4 = local_88;*(undefined8*)this = 0;Ref<Resource>::operator =((Ref<Resource>*)this, (Ref*)local_88);if (( ( pOVar4 != (Object*)0x0 ) && ( cVar14 = RefCounted::unreference() ),cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);Memory::free_static(pOVar4, false);}goto LAB_00110119;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ResourceLoader::_load_start(String const&, String const&, ResourceLoader::LoadThreadMode,
   ResourceFormatLoader::CacheMode, bool) */ResourceLoader * __thiscall
ResourceLoader::_load_start
          (ResourceLoader *this,String *param_1,CowData *param_2,int param_4,int param_5,
          char param_6){
   Object *this_00;
   code *pcVar1;
   char cVar2;
   int iVar3;
   RefCounted *this_01;
   undefined8 *puVar4;
   ThreadLoadTask *pTVar5;
   long lVar6;
   RefCounted *pRVar7;
   int *in_FS_OFFSET;
   byte bVar8;
   long local_f8;
   uint local_f0;
   undefined4 uStack_ec;
   ulong local_e8;
   undefined8 local_e0;
   undefined1 local_d8;
   undefined8 local_d0;
   undefined4 local_c8;
   undefined1 local_c4;
   RefCounted *local_c0;
   undefined8 local_b8;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined4 local_90;
   undefined8 local_88;
   undefined1 local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   bVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   _validate_local_path((String*)&local_f8);
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar3 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar3 + 1;
   if (iVar3 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00111199;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar3 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar3 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar3);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( param_6 != '\0' ) && ( lVar6 = _load_threaded_request_reuse_user_token(param_1) ),lVar6 != 0) {
      *(long*)this = lVar6;
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      pRVar7 = (RefCounted*)0x0;
      LAB_00110c40:cVar2 = (char)*in_FS_OFFSET;
      joined_r0x00110c49:if (cVar2 == '\0') {
         __tls_init_part_0();
      }

      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      if (*in_FS_OFFSET == 0) {
         if ((char)*in_FS_OFFSET == '\0') {
            __tls_init_part_0();
         }

         if ((char)*in_FS_OFFSET != '\0') {
            if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
               pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
               *(undefined1*)in_FS_OFFSET = 0;
            }

            goto LAB_00110b40;
         }

         goto LAB_00111199;
      }

      goto LAB_00110b40;
   }

   if (param_5 != 0 && param_5 != 3) {
      local_e8 = local_e8 & 0xffffffff00000000;
      cVar2 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_f8, (uint*)&local_e8);
      if (cVar2 != '\0') {
         lVar6 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_f8);
         this_00 = *(Object**)( lVar6 + 0x28 );
         if (( this_00 != (Object*)0x0 ) && ( cVar2 = RefCounted::init_ref() ),cVar2 != '\0') {
            cVar2 = RefCounted::reference();
            if (cVar2 != '\0') {
               cVar2 = RefCounted::unreference();
               pRVar7 = (RefCounted*)this_00;
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(this_00) ),cVar2 != '\0') goto LAB_00111003;
               LAB_0011106f:if (param_6 != '\0') {
                  _load_threaded_request_setup_user_token((LoadToken*)pRVar7, param_1);
               }

               *(RefCounted**)this = pRVar7;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *(undefined8*)this = 0;
               }

               goto LAB_00110c40;
            }

            cVar2 = RefCounted::unreference();
            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(this_00) ),cVar2 != '\0') {
               pRVar7 = (RefCounted*)(Object*)0x0;
               LAB_00111003:if (*(code**)( *(long*)this_00 + 0x140 ) == LoadToken::~LoadToken) {
                  *(undefined***)this_00 = &PTR__initialize_classv_001206d0;
                  LoadToken::clear((LoadToken*)this_00);
                  CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 0x188 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 0x180 ));
                  *(undefined***)this_00 = &PTR__initialize_classv_00120228;
                  Object::~Object(this_00);
               }
 else {
                  ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
               }

               Memory::free_static(this_00, false);
               if (pRVar7 != (RefCounted*)0x0) goto LAB_0011106f;
            }

         }

         lVar6 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_f8);
         LoadToken::clear(*(LoadToken**)( lVar6 + 0x28 ));
      }

   }

   this_01 = (RefCounted*)operator_new(0x1a0, "");
   pRVar7 = this_01;
   for (lVar6 = 0x34; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined8*)pRVar7 = 0;
      pRVar7 = pRVar7 + (ulong)bVar8 * -0x10 + 8;
   }

   RefCounted::RefCounted(this_01);
   *(undefined***)this_01 = &PTR__initialize_classv_001206d0;
   *(undefined4*)( this_01 + 400 ) = 0;
   *(undefined8*)( this_01 + 0x198 ) = 0;
   *(undefined1(*) [16])( this_01 + 0x180 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_01);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   cVar2 = RefCounted::reference();
   pRVar7 = (RefCounted*)0x0;
   if (cVar2 != '\0') {
      pRVar7 = this_01;
   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_01) ),cVar2 != '\0') {
      if (*(code**)( *(long*)this_01 + 0x140 ) == LoadToken::~LoadToken) {
         *(undefined***)this_01 = &PTR__initialize_classv_001206d0;
         LoadToken::clear((LoadToken*)this_01);
         CowData<char32_t>::_unref((CowData<char32_t>*)( this_01 + 0x188 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( this_01 + 0x180 ));
         *(undefined***)this_01 = &PTR__initialize_classv_00120228;
         Object::~Object((Object*)this_01);
      }
 else {
         ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
      }

      Memory::free_static(this_01, false);
   }

   if (*(long*)( pRVar7 + 0x180 ) != local_f8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pRVar7 + 0x180 ), (CowData*)&local_f8);
   }

   if (param_6 != '\0') {
      if (*(long*)( pRVar7 + 0x188 ) != *(long*)param_1) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pRVar7 + 0x188 ), (CowData*)param_1);
      }

      RefCounted::reference();
      *(undefined4*)( pRVar7 + 400 ) = 1;
      puVar4 = (undefined8*)HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::operator []((HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>*)user_load_tokens, param_1);
      *puVar4 = pRVar7;
   }

   local_e8 = 0;
   local_78 = (undefined1[16])0x0;
   local_98 = _LC123;
   local_68 = (undefined1[16])0x0;
   local_e0 = 0;
   local_d8 = 0;
   local_d0 = 0;
   local_c8 = 0;
   local_c4 = 1;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 0;
   local_a0 = 0xffffffffffffffff;
   local_90 = 0;
   local_88 = 0;
   local_80 = 0;
   local_48 = 0;
   local_58 = _LC3;
   uStack_50 = _UNK_00120b98;
   local_c0 = pRVar7;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f8);
      local_f8 = local_b0;
   }

   if (*(long*)param_2 != local_f8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, param_2);
   }

   local_80 = param_4 == 2;
   local_98 = CONCAT44(param_5, (undefined4)local_98);
   if (param_5 == 1) {
      ResourceCache::get_ref((String*)&local_f0);
      if ((Ref*)CONCAT44(uStack_ec, local_f0) != (Ref*)0x0) {
         Ref<Resource>::operator =((Ref<Resource>*)&local_88, (Ref*)CONCAT44(uStack_ec, local_f0));
         local_98 = CONCAT44(local_98._4_4_, 3);
         local_a8 = CONCAT44(local_a8._4_4_, 0x3f800000);
         pTVar5 = (ThreadLoadTask*)HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator []((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_f8);
         ThreadLoadTask::operator =(pTVar5, (ThreadLoadTask*)&local_e8);
         *(RefCounted**)this = pRVar7;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

         Ref<Resource>::unref((Ref<Resource>*)&local_f0);
         ThreadLoadTask::~ThreadLoadTask((ThreadLoadTask*)&local_e8);
         cVar2 = (char)*in_FS_OFFSET;
         goto joined_r0x00110c49;
      }

      Ref<Resource>::unref((Ref<Resource>*)&local_f0);
      LAB_00110aa2:HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::insert((String*)&local_f0, (ThreadLoadTask*)thread_load_tasks, SUB81((String*)&local_f8, 0));
      pTVar5 = (ThreadLoadTask*)( CONCAT44(uStack_ec, local_f0) + 0x18 );
   }
 else {
      if (param_5 != 0 && param_5 != 3) goto LAB_00110aa2;
      local_f0 = 0;
      cVar2 = HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)thread_load_tasks, (String*)&local_f8, &local_f0);
      if (cVar2 == '\0') goto LAB_00110aa2;
      pTVar5 = (ThreadLoadTask*)operator_new(0xa8, "");
      ThreadLoadTask::ThreadLoadTask(pTVar5, (ThreadLoadTask*)&local_e8);
      *(ThreadLoadTask**)( pRVar7 + 0x198 ) = pTVar5;
   }

   ThreadLoadTask::~ThreadLoadTask((ThreadLoadTask*)&local_e8);
   RefCounted::reference();
   if (param_4 == 0) {
      lVar6 = WorkerThreadPool::get_caller_task_id();
      if (lVar6 == -1) {
         if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
            /* WARNING: Subroutine does not return */
            Thread::caller_id();
         }

         *(long*)( pTVar5 + 8 ) = *(long*)( (long)in_FS_OFFSET + lRam00000000001110b6 );
      }
 else {
         *(long*)pTVar5 = lVar6;
      }

      if ((char)*in_FS_OFFSET == '\0') goto LAB_00110ce6;
      LAB_00110b08:*in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar3 = *in_FS_OFFSET;
   }
 else {
      local_e8 = 0;
      lVar6 = WorkerThreadPool::add_native_task(WorkerThreadPool::singleton, _run_load_task, SUB81(pTVar5, 0), (String*)0x0);
      *(long*)pTVar5 = lVar6;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if ((char)*in_FS_OFFSET != '\0') goto LAB_00110b08;
      LAB_00110ce6:__tls_init_part_0();
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar3 = *in_FS_OFFSET;
   }

   if (iVar3 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00111199:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (param_4 == 0) {
      _run_load_task(pTVar5);
   }

   *(RefCounted**)this = pRVar7;
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      *(undefined8*)this = 0;
   }

   LAB_00110b40:if (( ( pRVar7 != (RefCounted*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
      if (*(code**)( *(long*)pRVar7 + 0x140 ) == LoadToken::~LoadToken) {
         *(undefined***)pRVar7 = &PTR__initialize_classv_001206d0;
         LoadToken::clear((LoadToken*)pRVar7);
         CowData<char32_t>::_unref((CowData<char32_t>*)( (Object*)pRVar7 + 0x188 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( (Object*)pRVar7 + 0x180 ));
         *(undefined***)pRVar7 = &PTR__initialize_classv_00120228;
         Object::~Object((Object*)pRVar7);
      }
 else {
         ( **(code**)( *(long*)pRVar7 + 0x140 ) )(pRVar7);
      }

      Memory::free_static(pRVar7, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (local_40 != *(long*)( in_FS_OFFSET + 10 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* ResourceLoader::load_threaded_request(String const&, String const&, bool,
   ResourceFormatLoader::CacheMode) */undefined8 ResourceLoader::load_threaded_request(undefined8 param_1, undefined8 param_2, byte param_3, undefined4 param_4) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   Object *local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   _load_start((ResourceLoader*)&local_18, param_1, param_2, param_3 + 1, param_4, 1);
   uVar2 = 1;
   if (local_18 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_18);
         if (cVar1 != '\0') {
            if (*(code**)( *(long*)local_18 + 0x140 ) == LoadToken::~LoadToken) {
               *(undefined***)local_18 = &PTR__initialize_classv_001206d0;
               LoadToken::clear((LoadToken*)local_18);
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_18 + 0x188 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( local_18 + 0x180 ));
               *(undefined***)local_18 = &PTR__initialize_classv_00120228;
               Object::~Object(local_18);
            }
 else {
               ( **(code**)( *(long*)local_18 + 0x140 ) )(local_18);
            }

            Memory::free_static(local_18, false);
         }

      }

      uVar2 = 0;
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::load(String const&, String const&, ResourceFormatLoader::CacheMode, Error*) */ResourceLoader * __thiscall
ResourceLoader::load
          (ResourceLoader *this,undefined8 param_1,undefined8 param_2,undefined4 param_4,
          MutexLock *param_5){
   char cVar1;
   int iVar2;
   long lVar3;
   Object *this_00;
   int *in_FS_OFFSET;
   Object *local_48;
   Object *local_40;
   undefined1 *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 10 );
   if (param_5 == (MutexLock*)0x0) {
      lVar3 = WorkerThreadPool::get_caller_task_id();
      _load_start((ResourceLoader*)&local_48, param_1, param_2, lVar3 != -1, param_4, 0);
      this_00 = local_48;
      if (local_48 == (Object*)0x0) goto LAB_00111406;
   }
 else {
      *(undefined4*)param_5 = 0;
      lVar3 = WorkerThreadPool::get_caller_task_id();
      _load_start((ResourceLoader*)&local_48, param_1, param_2, lVar3 != -1, param_4, 0);
      this_00 = local_48;
      if (local_48 == (Object*)0x0) {
         *(undefined4*)param_5 = 1;
         LAB_00111406:*(undefined8*)this = 0;
         goto LAB_001113d9;
      }

   }

   local_38 = thread_load_mutex;
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   iVar2 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar2 + 1;
   if (iVar2 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_001115cf;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar2 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   _load_complete_inner((LoadToken*)&local_40, (Error*)this_00, param_5);
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar2 = *in_FS_OFFSET;
   }
 else {
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar2 = *in_FS_OFFSET;
   }

   if (iVar2 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         __tls_init_part_0();
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_001115cf:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   *(undefined8*)this = 0;
   if (local_40 != (Object*)0x0) {
      *(Object**)this = local_40;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(local_40) ),cVar1 != '\0') {
         ( **(code**)( *(long*)local_40 + 0x140 ) )(local_40);
         Memory::free_static(local_40, false);
      }

   }

   cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(this_00) ),cVar1 != '\0') {
      if (*(code**)( *(long*)this_00 + 0x140 ) == LoadToken::~LoadToken) {
         *(undefined***)this_00 = &PTR__initialize_classv_001206d0;
         LoadToken::clear((LoadToken*)this_00);
         CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 0x188 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 0x180 ));
         *(undefined***)this_00 = &PTR__initialize_classv_00120228;
         Object::~Object(this_00);
      }
 else {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      }

      Memory::free_static(this_00, false);
   }

   LAB_001113d9:if (local_30 == *(long*)( in_FS_OFFSET + 10 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::add_custom_resource_format_loader(String const&) [clone .part.0] */uint ResourceLoader::add_custom_resource_format_loader(String *param_1) {
   code *pcVar1;
   char cVar2;
   uint uVar3;
   Object *pOVar4;
   long lVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   Object *local_88;
   long local_80;
   undefined8 local_78;
   long local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_68 = (Object*)&_LC15;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   load((ResourceLoader*)&local_88, param_1, (StrRange*)&local_70, 1, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_88 == (Object*)0x0) {
      uVar3 = 0;
      _err_print_error("add_custom_resource_format_loader", "core/io/resource_loader.cpp", 0x5b9, "Condition \"res.is_null()\" is true. Returning: false", 0, 0);
      goto LAB_00111857;
   }

   pcVar1 = *(code**)( *(long*)local_88 + 0x58 );
   local_70 = 0;
   local_68 = (Object*)0x113ccb;
   local_60 = 6;
   String::parse_latin1((StrRange*)&local_70);
   uVar3 = ( *pcVar1 )(local_88, (StrRange*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if ((char)uVar3 == '\0') {
      _err_print_error("add_custom_resource_format_loader", "core/io/resource_loader.cpp", 0x5ba, "Condition \"!res->is_class(\"Script\")\" is true. Returning: false", 0, 0);
   }
 else {
      pOVar4 = (Object*)__dynamic_cast(local_88, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar4 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pOVar4 = (Object*)0x0;
      }

      ( **(code**)( *(long*)pOVar4 + 0x1f0 ) )((StringName*)&local_80, pOVar4);
      StringName::StringName((StringName*)&local_68, "ResourceFormatLoader", false);
      uVar3 = ClassDB::is_parent_class((StringName*)&local_80, (StringName*)&local_68);
      if (( StringName::configured != 0 ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

      if ((char)uVar3 == '\0') {
         local_70 = 0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_1);
         }

         local_78 = 0;
         String::parse_latin1((String*)&local_78, "Failed to add a custom resource loader, script \'%s\' does not inherit \'ResourceFormatLoader\'.");
         vformat<String>((StringName*)&local_68, (String*)&local_78, (StrRange*)&local_70);
         _err_print_error("add_custom_resource_format_loader", "core/io/resource_loader.cpp", 0x5bf, "Condition \"!valid_type\" is true. Returning: false", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         LAB_00111823:if (StringName::configured != 0) {
            LAB_00111827:if (local_80 != 0) {
               StringName::unref();
            }

         }

      }
 else {
         lVar5 = ClassDB::instantiate((StringName*)&local_80);
         if (lVar5 != 0) {
            pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &ResourceFormatLoader::typeinfo, 0);
            if (pOVar6 == (Object*)0x0) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            cVar2 = RefCounted::init_ref();
            if (cVar2 == '\0') {
               pOVar6 = (Object*)0x0;
            }

            pcVar1 = *(code**)( *(long*)pOVar6 + 0x90 );
            Variant::Variant((Variant*)local_58, pOVar4);
            ( *pcVar1 )(pOVar6);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            local_68 = pOVar6;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               local_68 = (Object*)0x0;
               add_resource_format_loader((StringName*)&local_68);
               cVar2 = RefCounted::unreference();
            }
 else {
               add_resource_format_loader((StringName*)&local_68);
               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar6) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                  Memory::free_static(pOVar6, false);
               }

               cVar2 = RefCounted::unreference();
            }

            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar6) ),cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

            goto LAB_00111823;
         }

         StringName::StringName((StringName*)&local_70, (StringName*)&local_80);
         local_78 = 0;
         String::parse_latin1((String*)&local_78, "Failed to add a custom resource loader, cannot instantiate \'%s\'.");
         vformat<StringName>((StringName*)&local_68, (String*)&local_78, (StrRange*)&local_70);
         _err_print_error("add_custom_resource_format_loader", "core/io/resource_loader.cpp", 0x5c2, "Parameter \"obj\" is null.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         uVar3 = (uint)StringName::configured;
         if (StringName::configured != 0) {
            uVar3 = 0;
            if (local_70 != 0) {
               uVar3 = 0;
               StringName::unref();
               goto LAB_00111823;
            }

            goto LAB_00111827;
         }

      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar4) ),cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(local_88) ),cVar2 != '\0') {
      ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
      Memory::free_static(local_88, false);
   }

   LAB_00111857:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::add_custom_resource_format_loader(String const&) */undefined8 ResourceLoader::add_custom_resource_format_loader(String *param_1) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   _find_custom_resource_format_loader((ResourceLoader*)&local_28, param_1);
   if (local_28 == (Object*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar2 = add_custom_resource_format_loader(param_1);
         return uVar2;
      }

   }
 else {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_28);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
            Memory::free_static(local_28, false);
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::add_custom_loaders() */void ResourceLoader::add_custom_loaders(void) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   char cVar4;
   long *plVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long *local_78;
   long local_70;
   long local_68;
   long local_60;
   Object *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = 0;
   local_50 = 0x14;
   local_58 = (Object*)0x114194;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = (long*)0x0;
   ScriptServer::get_global_class_list((List*)&local_78);
   if (( local_78 != (long*)0x0 ) && ( plVar5 = (long*)*local_78 ),plVar5 != (long*)0x0) {
      do {
         lVar3 = *plVar5;
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pOVar2 = *(Object**)( lVar3 + 8 );
            local_60 = 0;
            if (pOVar2 == (Object*)0x0) {
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
               }

            }
 else {
               local_50 = strlen((char*)pOVar2);
               local_58 = pOVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         ScriptServer::get_global_class_native_base((String*)&local_70);
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

         cVar4 = StringName::operator ==((StringName*)&local_70, (String*)&local_80);
         if (cVar4 != '\0') {
            lVar3 = *plVar5;
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pOVar2 = *(Object**)( lVar3 + 8 );
               local_60 = 0;
               if (pOVar2 == (Object*)0x0) {
                  if (*(long*)( lVar3 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
                  }

               }
 else {
                  local_50 = strlen((char*)pOVar2);
                  local_58 = pOVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            ScriptServer::get_global_class_path((String*)&local_68);
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

            _find_custom_resource_format_loader((ResourceLoader*)&local_58, (String*)&local_68);
            pOVar2 = local_58;
            if (local_58 == (Object*)0x0) {
               add_custom_resource_format_loader((String*)&local_68);
            }
 else {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar2);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                     Memory::free_static(pOVar2, false);
                  }

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

         }

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         plVar5 = (long*)plVar5[1];
      }
 while ( plVar5 != (long*)0x0 );
   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Ref<ResourceFormatLoader> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<ResourceFormatLoader>>::_copy_on_write(CowData<Ref<ResourceFormatLoader>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* ResourceLoader::list_directory(String const&) */ResourceLoader * __thiscall ResourceLoader::list_directory(ResourceLoader *this,String *param_1){
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   wchar32 wVar9;
   Element *pEVar10;
   long lVar11;
   long in_FS_OFFSET;
   bool bVar12;
   RBSet<String,Comparator<String>,DefaultAllocator> *local_98;
   Object *local_80;
   long local_78;
   undefined8 local_70;
   long local_68;
   Element *local_60;
   Element *local_58;
   Element *local_50;
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (Element*)0x0;
   local_48 = 0;
   local_50 = (Element*)&_GlobalNilClass::_nil;
   DirAccess::open((String*)&local_80, (Error*)param_1);
   if (local_80 == (Object*)0x0) {
      *(undefined8*)( this + 8 ) = 0;
   }
 else {
      iVar4 = ( **(code**)( *(long*)local_80 + 0x160 ) )();
      if (iVar4 == 0) {
         ( **(code**)( *(long*)local_80 + 0x168 ) )((CowData<char32_t>*)&local_78);
         while (( local_78 != 0 && ( 1 < *(uint*)( local_78 + -8 ) ) )) {
            cVar3 = ( **(code**)( *(long*)local_80 + 0x170 ) )();
            if (cVar3 == '\0') {
               cVar3 = String::ends_with((char*)&local_78);
               wVar9 = (wchar32)(CowData<char32_t>*)&local_78;
               if (( ( cVar3 != '\0' ) || ( cVar3 = String::ends_with((char*)&local_78) ),cVar3 != '\0' )) {
                  String::rfind_char(wVar9, 0x2e);
                  String::substr((int)(CowData<char32_t>*)&local_68, wVar9);
                  if (local_78 != local_68) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     local_78 = local_68;
                     local_68 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               }

               cVar3 = String::ends_with((char*)&local_78);
               if (cVar3 != '\0') {
                  String::rfind_char(wVar9, 0x2e);
                  String::substr((int)(CowData<char32_t>*)&local_68, wVar9);
                  if (local_78 != local_68) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     local_78 = local_68;
                     local_68 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  String::operator +=((String*)&local_78, ".gd");
               }

               String::path_join((String*)&local_70);
               if (0 < loader_count) {
                  lVar11 = 0;
                  do {
                     local_68 = 0;
                     cVar3 = ( **(code**)( *(long*)( &loader )[lVar11] + 0x170 ) )((long*)( &loader )[lVar11], (String*)&local_70, (CowData<char32_t>*)&local_68);
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

                     if (cVar3 != '\0') {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        pEVar6 = local_58;
                        goto joined_r0x001123a9;
                     }

                     lVar11 = lVar11 + 1;
                  }
 while ( (int)lVar11 < loader_count );
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            }
 else {
               cVar3 = String::operator !=((String*)&local_78, ".");
               if (( cVar3 != '\0' ) && ( cVar3 = String::operator !=((String*)&local_78, "..") ),cVar3 != '\0') {
                  String::operator +=((String*)&local_78, "/");
                  pEVar6 = local_58;
                  joined_r0x001123a9:local_58 = pEVar6;
                  if (pEVar6 == (Element*)0x0) {
                     pEVar6 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( pEVar6 + 0x20 ) = (undefined1[16])0x0;
                     *(undefined8*)( pEVar6 + 0x30 ) = 0;
                     *(undefined4*)pEVar6 = 1;
                     for (int i = 0; i < 3; i++) {
                        *(Element**)( pEVar6 + ( 8*i + 8 ) ) = local_50;
                     }

                     local_58 = pEVar6;
                  }
 else {
                     pEVar5 = *(Element**)( pEVar6 + 0x10 );
                     if (*(Element**)( pEVar6 + 0x10 ) != local_50) {
                        do {
                           while (true) {
                              pEVar6 = pEVar5;
                              cVar3 = String::operator <((String*)&local_78, (String*)( pEVar6 + 0x30 ));
                              if (cVar3 != '\0') break;
                              cVar3 = String::operator <((String*)( pEVar6 + 0x30 ), (String*)&local_78);
                              if (cVar3 == '\0') goto LAB_0011220e;
                              pEVar5 = *(Element**)( pEVar6 + 8 );
                              if (local_50 == *(Element**)( pEVar6 + 8 )) goto LAB_00112406;
                           }
;
                           pEVar5 = *(Element**)( pEVar6 + 0x10 );
                        }
 while ( local_50 != *(Element**)( pEVar6 + 0x10 ) );
                     }

                  }

                  LAB_00112406:local_98 = (RBSet<String,Comparator<String>,DefaultAllocator>*)&local_58;
                  pEVar5 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
                  *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
                  *(undefined4*)pEVar5 = 0;
                  *(undefined8*)( pEVar5 + 0x30 ) = 0;
                  *(Element**)( pEVar5 + 0x18 ) = pEVar6;
                  *(Element**)( pEVar5 + 8 ) = local_50;
                  *(Element**)( pEVar5 + 0x10 ) = local_50;
                  if (local_78 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( pEVar5 + 0x30 ), (CowData*)&local_78);
                  }

                  pEVar10 = pEVar6;
                  if (( local_58 == pEVar6 ) || ( cVar3 = String::operator <((String*)&local_78, (String*)( pEVar6 + 0x30 )) ),pEVar10 = local_58,cVar3 != '\0') {
                     *(Element**)( pEVar6 + 0x10 ) = pEVar5;
                  }
 else {
                     *(Element**)( pEVar6 + 8 ) = pEVar5;
                  }

                  pEVar6 = *(Element**)( pEVar5 + 8 );
                  pEVar8 = pEVar5;
                  if (local_50 == pEVar6) {
                     do {
                        pEVar7 = *(Element**)( pEVar8 + 0x18 );
                        bVar12 = pEVar8 == *(Element**)( pEVar7 + 8 );
                        pEVar8 = pEVar7;
                     }
 while ( bVar12 );
                     if (pEVar10 == pEVar7) {
                        pEVar7 = (Element*)0x0;
                     }

                  }
 else {
                     do {
                        pEVar8 = pEVar6 + 0x10;
                        pEVar7 = pEVar6;
                        pEVar6 = *(Element**)pEVar8;
                     }
 while ( local_50 != *(Element**)pEVar8 );
                  }

                  *(Element**)( pEVar5 + 0x20 ) = pEVar7;
                  pEVar8 = *(Element**)( pEVar5 + 0x10 );
                  pEVar6 = pEVar5;
                  if (local_50 == *(Element**)( pEVar5 + 0x10 )) {
                     do {
                        pEVar8 = pEVar6;
                        pEVar6 = *(Element**)( pEVar8 + 0x18 );
                     }
 while ( pEVar8 == *(Element**)( pEVar6 + 0x10 ) );
                     if (pEVar10 != pEVar8) goto LAB_001125f4;
                     *(undefined8*)( pEVar5 + 0x28 ) = 0;
                     if (pEVar7 != (Element*)0x0) goto LAB_001125fe;
                  }
 else {
                     do {
                        pEVar6 = pEVar8;
                        pEVar8 = *(Element**)( pEVar6 + 8 );
                     }
 while ( local_50 != *(Element**)( pEVar6 + 8 ) );
                     LAB_001125f4:*(Element**)( pEVar5 + 0x28 ) = pEVar6;
                     if (pEVar7 != (Element*)0x0) {
                        LAB_001125fe:*(Element**)( pEVar7 + 0x28 ) = pEVar5;
                        pEVar6 = *(Element**)( pEVar5 + 0x28 );
                        if (pEVar6 == (Element*)0x0) goto LAB_00112610;
                     }

                     *(Element**)( pEVar6 + 0x20 ) = pEVar5;
                  }

                  LAB_00112610:local_48 = local_48 + 1;
                  RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(local_98, pEVar5);
               }

            }

            LAB_0011220e:( **(code**)( *(long*)local_80 + 0x168 ) )((CowData<char32_t>*)&local_68);
            if (local_78 != local_68) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               local_78 = local_68;
               local_68 = 0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         }
;
         local_60 = (Element*)0x0;
         pEVar6 = local_58;
         if (local_58 != (Element*)0x0) {
            pEVar6 = *(Element**)( local_58 + 0x10 );
            if (*(Element**)( local_58 + 0x10 ) == local_50) {
               pEVar6 = (Element*)0x0;
            }
 else {
               do {
                  pEVar5 = pEVar6;
                  pEVar6 = *(Element**)( pEVar5 + 0x10 );
               }
 while ( local_50 != *(Element**)( pEVar5 + 0x10 ) );
               do {
                  local_70 = 0;
                  if (*(long*)( pEVar5 + 0x30 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( pEVar5 + 0x30 ));
                  }

                  Vector<String>::push_back((Vector<String>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  pEVar5 = *(Element**)( pEVar5 + 0x20 );
                  pEVar6 = local_60;
               }
 while ( pEVar5 != (Element*)0x0 );
            }

         }

         *(Element**)( this + 8 ) = pEVar6;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      }
 else {
         *(undefined8*)( this + 8 ) = 0;
      }

      if (( ( local_80 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)local_80 + 0x140 ))(local_80);
      Memory::free_static(local_80, false);
   }

}
local_98 = (RBSet<String,Comparator<String>,DefaultAllocator>*)&local_58;RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(local_98);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this;}/* ResourceLoader::ensure_resource_ref_override_for_outer_load(String const&, String const&) */ResourceLoader * __thiscall
ResourceLoader::ensure_resource_ref_override_for_outer_load
          (ResourceLoader *this,String *param_1,String *param_2){
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
   char cVar11;
   uint uVar12;
   HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>> *this_00;
   Object *pOVar13;
   long lVar14;
   Object *pOVar15;
   Ref<Resource> *this_01;
   char *pcVar16;
   uint uVar17;
   uint uVar18;
   undefined8 uVar19;
   long lVar20;
   long lVar21;
   uint uVar22;
   int *in_FS_OFFSET;
   String local_68[8];
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (*in_FS_OFFSET == 0) {
      _err_print_error("ensure_resource_ref_override_for_outer_load", "core/io/resource_loader.cpp", 0x3d2, "Condition \"load_nesting == 0\" is true. Returning: Ref<Resource>()", 0, 0);
      *(undefined8*)this = 0;
      goto LAB_001129dd;
   }

   _validate_local_path(local_68);
   if ((char)*in_FS_OFFSET == '\0') {
      __tls_init_part_0();
   }

   local_60 = CONCAT44(local_60._4_4_, *in_FS_OFFSET + -1);
   this_00 = (HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>*)HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref < Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>> >> ::operator [](*( HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref < Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>> >> **)in_FS_OFFSET,(int*)&local_60 ));
   if (( *(long*)( this_00 + 8 ) != 0 ) && ( *(int*)( this_00 + 0x2c ) != 0 )) {
      uVar1 = ( &hash_table_size_primes )[*(uint*)( this_00 + 0x28 )];
      lVar14 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this_00 + 0x28 ) * 8 );
      uVar12 = String::hash();
      uVar10 = CONCAT44(0, uVar1);
      lVar21 = *(long*)( this_00 + 0x10 );
      uVar17 = 1;
      if (uVar12 != 0) {
         uVar17 = uVar12;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar17 * lVar14;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar10;
      lVar20 = SUB168(auVar2 * auVar6, 8);
      uVar12 = *(uint*)( lVar21 + lVar20 * 4 );
      uVar18 = SUB164(auVar2 * auVar6, 8);
      if (uVar12 != 0) {
         uVar22 = 0;
         do {
            if (uVar17 == uVar12) {
               cVar11 = String::operator ==((String*)( *(long*)( *(long*)( this_00 + 8 ) + lVar20 * 8 ) + 0x10 ), local_68);
               if (cVar11 != '\0') {
                  lVar14 = *(long*)( *(long*)( this_00 + 8 ) + (ulong)uVar18 * 8 );
                  if (lVar14 != 0) {
                     *(undefined8*)this = 0;
                     Ref<Resource>::operator =((Ref<Resource>*)this, *(Ref**)( lVar14 + 0x18 ));
                     goto LAB_001129d5;
                  }

                  break;
               }

               lVar21 = *(long*)( this_00 + 0x10 );
            }

            uVar22 = uVar22 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar18 + 1) * lVar14;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar10;
            lVar20 = SUB168(auVar3 * auVar7, 8);
            uVar12 = *(uint*)( lVar21 + lVar20 * 4 );
            uVar18 = SUB164(auVar3 * auVar7, 8);
            if (( uVar12 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar12 * lVar14,auVar8._8_8_ = 0,auVar8._0_8_ = uVar10,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + uVar18 ) - SUB164(auVar4 * auVar8, 8)) * lVar14,auVar9._8_8_ = 0,auVar9._0_8_ = uVar10,SUB164(auVar5 * auVar9, 8) < uVar22) break;
         }
 while ( true );
      }

   }

   StringName::StringName((StringName*)&local_60, param_2, false);
   pOVar13 = (Object*)ClassDB::instantiate((StringName*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (pOVar13 == (Object*)0x0) {
      uVar19 = 0x3da;
      pcVar16 = "Parameter \"obj\" is null.";
      LAB_0011289a:_err_print_error("ensure_resource_ref_override_for_outer_load", "core/io/resource_loader.cpp", uVar19, pcVar16, 0, 0);
      *(undefined8*)this = 0;
   }
 else {
      Variant::Variant((Variant*)local_58, pOVar13);
      lVar14 = Variant::get_validated_object();
      if (lVar14 == 0) {
         LAB_00112850:cVar11 = Variant::needs_deinit[local_58[0]];
         joined_r0x00112af4:if (cVar11 != '\0') {
            Variant::_clear_internal();
         }

         cVar11 = predelete_handler(pOVar13);
         if (cVar11 != '\0') {
            ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
            Memory::free_static(pOVar13, false);
         }

         uVar19 = 0x3de;
         pcVar16 = "Method/function failed. Returning: Ref<Resource>()";
         goto LAB_0011289a;
      }

      pOVar15 = (Object*)__dynamic_cast(lVar14, &Object::typeinfo, &Resource::typeinfo, 0);
      if (pOVar15 == (Object*)0x0) {
         cVar11 = Variant::needs_deinit[local_58[0]];
         goto joined_r0x00112af4;
      }

      local_60 = 0;
      cVar11 = RefCounted::reference();
      if (cVar11 == '\0') {
         Ref<Resource>::unref((Ref<Resource>*)&local_60);
         goto LAB_00112850;
      }

      Ref<Resource>::unref((Ref<Resource>*)&local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      this_01 = (Ref<Resource>*)HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>::operator [](this_00, local_68);
      Ref<Resource>::operator =(this_01, (Ref*)pOVar15);
      *(undefined8*)this = 0;
      Ref<Resource>::operator =((Ref<Resource>*)this, (Ref*)pOVar15);
      cVar11 = RefCounted::unreference();
      if (( cVar11 != '\0' ) && ( cVar11 = predelete_handler(pOVar15) ),cVar11 != '\0') {
         ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
         Memory::free_static(pOVar15, false);
      }

   }

   LAB_001129d5:CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   LAB_001129dd:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceLoader::remove_custom_loaders() */void ResourceLoader::remove_custom_loaders(void) {
   undefined8 *puVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   Object *pOVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   Object *local_60[2];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50[0] = 0;
   if (0 < loader_count) {
      lVar7 = 0;
      lVar6 = 0;
      do {
         pOVar5 = (Object*)( &loader )[lVar7];
         if (*(long*)( pOVar5 + 0x98 ) != 0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               pOVar5 = (Object*)0x0;
            }

            if (lVar6 == 0) {
               lVar6 = 1;
            }
 else {
               lVar6 = *(long*)( lVar6 + -8 ) + 1;
            }

            iVar4 = CowData<Ref<ResourceFormatLoader>>::resize<false>((CowData<Ref<ResourceFormatLoader>>*)local_50, lVar6);
            if (iVar4 == 0) {
               if (local_50[0] == 0) {
                  lVar8 = -1;
                  lVar6 = 0;
                  LAB_00112e42:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar6, "p_index", "size()", "", false, false);
                  lVar6 = local_50[0];
                  goto joined_r0x00112d68;
               }

               lVar6 = *(long*)( local_50[0] + -8 );
               lVar8 = lVar6 + -1;
               if (lVar8 < 0) goto LAB_00112e42;
               CowData<Ref<ResourceFormatLoader>>::_copy_on_write((CowData<Ref<ResourceFormatLoader>>*)local_50);
               lVar6 = local_50[0];
               puVar1 = (undefined8*)( local_50[0] + lVar8 * 8 );
               pOVar2 = (Object*)*puVar1;
               if (pOVar2 == pOVar5) goto joined_r0x00112d68;
               *puVar1 = pOVar5;
               if (pOVar5 == (Object*)0x0) {
                  if (( ( pOVar2 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_00112c53;
                  LAB_00112dd9:( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
                  lVar6 = local_50[0];
                  goto joined_r0x00112d68;
               }

               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *puVar1 = 0;
                  if (pOVar2 != (Object*)0x0) {
                     cVar3 = RefCounted::unreference();
                     goto joined_r0x00112e1a;
                  }

               }
 else if (pOVar2 != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  joined_r0x00112e1a:if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar2) ),cVar3 != '\0') goto LAB_00112dd9;
               }

               cVar3 = RefCounted::unreference();
               lVar6 = local_50[0];
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               lVar6 = local_50[0];
               joined_r0x00112d68:local_50[0] = lVar6;
               if (pOVar5 == (Object*)0x0) goto LAB_00112c53;
               cVar3 = RefCounted::unreference();
               lVar6 = local_50[0];
            }

            local_50[0] = lVar6;
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),lVar6 = local_50[0],cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

         LAB_00112c53:lVar7 = lVar7 + 1;
      }
 while ( (int)lVar7 < loader_count );
      if (( lVar6 != 0 ) && ( 0 < *(long*)( lVar6 + -8 ) )) {
         lVar7 = 0;
         do {
            while (( pOVar5 = *(Object**)( lVar6 + lVar7 * 8 ) ),pOVar5 == (Object*)0x0 || ( local_60[0] = pOVar5 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
               local_60[0] = (Object*)0x0;
               remove_resource_format_loader(local_60);
               LAB_00112c99:lVar7 = lVar7 + 1;
               if (*(long*)( lVar6 + -8 ) <= lVar7) goto LAB_00112d10;
            }
;
            remove_resource_format_loader(local_60);
            cVar3 = RefCounted::unreference();
            if (( cVar3 == '\0' ) || ( cVar3 = predelete_handler(pOVar5) ),cVar3 == '\0') goto LAB_00112c99;
            lVar7 = lVar7 + 1;
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }
 while ( lVar7 < *(long*)( lVar6 + -8 ) );
      }

   }

   LAB_00112d10:CowData<Ref<ResourceFormatLoader>>::_unref((CowData<Ref<ResourceFormatLoader>>*)local_50);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TLS init function for ResourceLoader::load_paths_stack */void ResourceLoader::load_paths_stack(void) {
   char *in_FS_OFFSET;
   if (*in_FS_OFFSET != '\0') {
      return;
   }

   __tls_init_part_0();
   return;
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1209, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1209, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* ResourceFormatLoader::is_class_ptr(void*) const */uint ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x1209, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1209, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1209, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_notificationv(int, bool) */void ResourceFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}
/* ResourceFormatLoader::is_import_valid(String const&) const */undefined8 ResourceFormatLoader::is_import_valid(String *param_1) {
   return 1;
}
/* ResourceFormatLoader::is_imported(String const&) const */undefined8 ResourceFormatLoader::is_imported(String *param_1) {
   return 0;
}
/* ResourceFormatLoader::get_import_order(String const&) const */undefined8 ResourceFormatLoader::get_import_order(String *param_1) {
   return 0;
}
/* core_bind::Semaphore::is_class_ptr(void*) const */uint core_bind::Semaphore::is_class_ptr(Semaphore *this, void *param_1) {
   return (uint)CONCAT71(0x1209, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1209, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1209, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* core_bind::Semaphore::_getv(StringName const&, Variant&) const */undefined8 core_bind::Semaphore::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* core_bind::Semaphore::_setv(StringName const&, Variant const&) */undefined8 core_bind::Semaphore::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* core_bind::Semaphore::_validate_propertyv(PropertyInfo&) const */void core_bind::Semaphore::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* core_bind::Semaphore::_property_can_revertv(StringName const&) const */undefined8 core_bind::Semaphore::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* core_bind::Semaphore::_property_get_revertv(StringName const&, Variant&) const */undefined8 core_bind::Semaphore::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* core_bind::Semaphore::_notificationv(int, bool) */void core_bind::Semaphore::_notificationv(int param_1, bool param_2) {
   return;
}
/* Vector<String>::~Vector() */void Vector<String>::~Vector(Vector<String> *this) {
   CowData<String>::_unref((CowData<String>*)( this + 8 ));
   return;
}
/* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<core_bind::Semaphore,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this) {
   return;
}
/* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<core_bind::Semaphore,void,int>::get_argument_count(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned
   int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::get_argument_count(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* SafeBinaryMutex<1>::~SafeBinaryMutex() */void SafeBinaryMutex<1>::~SafeBinaryMutex(SafeBinaryMutex<1> *this) {
   return;
}
/* SelfList<Resource>::List::~List() */void SelfList<Resource>::List::~List(List *this) {
   return;
}
/* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<core_bind::Semaphore,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00120228;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00120228;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_001204e8;
   if (bVar1) {
      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00113763;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00113763:*(undefined***)this = &PTR__initialize_classv_00120228;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   ~ResourceFormatLoader(this)
   ;;
   operator_delete(this, 0x288);
   return;
}
/* core_bind::Semaphore::~Semaphore() */void core_bind::Semaphore::~Semaphore(Semaphore *this) {
   int iVar1;
   *(undefined***)this = &PTR__initialize_classv_00120388;
   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar1 == 0) {
      if (*(int*)( this + 0x1dc ) != 0) {
         _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
         std::condition_variable::condition_variable((condition_variable*)( this + 0x1a8 ));
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
      std::condition_variable::~condition_variable((condition_variable*)( this + 0x1a8 ));
      *(undefined***)this = &PTR__initialize_classv_00120228;
      Object::~Object((Object*)this);
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
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
/* ResourceLoader::_load_start(String const&, String const&, ResourceLoader::LoadThreadMode,
   ResourceFormatLoader::CacheMode, bool) [clone .cold] */void ResourceLoader::_load_start(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceLoader::add_custom_resource_format_loader(String const&) [clone .part.0] [clone .cold] */void ResourceLoader::add_custom_resource_format_loader(String *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<ResourceFormatLoader> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<ResourceFormatLoader>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<core_bind::Semaphore,void,int>::get_object(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this) {
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
         goto LAB_00113e2d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00113e2d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00113e2d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned int>::get_object() const */undefined8 CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::get_object(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this) {
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
         goto LAB_00113f2d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00113f2d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00113f2d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* core_bind::Semaphore::~Semaphore() */void core_bind::Semaphore::~Semaphore(Semaphore *this) {
   int iVar1;
   *(undefined***)this = &PTR__initialize_classv_00120388;
   iVar1 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x180 ));
   if (iVar1 == 0) {
      if (*(int*)( this + 0x1dc ) != 0) {
         _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
         std::condition_variable::condition_variable((condition_variable*)( this + 0x1a8 ));
      }

      pthread_mutex_unlock((pthread_mutex_t*)( this + 0x180 ));
      std::condition_variable::~condition_variable((condition_variable*)( this + 0x1a8 ));
      *(undefined***)this = &PTR__initialize_classv_00120228;
      Object::~Object((Object*)this);
      operator_delete(this, 0x1e0);
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* PlaceHolderScriptInstance::get_script() const */void PlaceHolderScriptInstance::get_script(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x80 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x80 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* SafeBinaryMutex<1>::TLSData::~TLSData() */void SafeBinaryMutex<1>::TLSData::~TLSData(TLSData *this) {
   if (( this[8] != (TLSData)0x0 ) && ( *(pthread_mutex_t**)this != (pthread_mutex_t*)0x0 )) {
      pthread_mutex_unlock(*(pthread_mutex_t**)this);
      return;
   }

   return;
}
/* core_bind::Semaphore::_get_class_namev() const */undefined8 *core_bind::Semaphore::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001140f3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001140f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Semaphore");
         goto LAB_0011415e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Semaphore");
   LAB_0011415e:return &_get_class_namev();
}
/* ResourceFormatLoader::_get_class_namev() const */undefined8 *ResourceFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001141e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001141e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_0011424e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_0011424e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001142c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001142c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0011432e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0011432e:return &_get_class_namev();
}
/* ResourceFormatLoader::get_import_group_file(String const&) const */String *ResourceFormatLoader::get_import_group_file(String *param_1) {
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
/* HashMap<int, HashMap<String, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > >
   >, HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > > > > >::~HashMap() */void HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>>>>::~HashMap(HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>>> > *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   int *piVar7;
   long lVar8;
   void *pvVar9;
   void *pvVar10;
   long lVar11;
   pvVar10 = *(void**)( this + 8 );
   if (pvVar10 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar8 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar8 ) != 0) {
               pvVar10 = *(void**)( (long)pvVar10 + lVar8 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar8 ) = 0;
               pvVar9 = *(void**)( (long)pvVar10 + 0x20 );
               if (pvVar9 != (void*)0x0) {
                  if (*(int*)( (long)pvVar10 + 0x44 ) != 0) {
                     uVar3 = ( &hash_table_size_primes )[*(uint*)( (long)pvVar10 + 0x40 )];
                     if (uVar3 == 0) {
                        *(undefined4*)( (long)pvVar10 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar10 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar11 = 0;
                        do {
                           piVar7 = (int*)( *(long*)( (long)pvVar10 + 0x28 ) + lVar11 );
                           if (*piVar7 != 0) {
                              pvVar9 = *(void**)( (long)pvVar9 + lVar11 * 2 );
                              *piVar7 = 0;
                              if (( *(long*)( (long)pvVar9 + 0x18 ) != 0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
                                 pOVar5 = *(Object**)( (long)pvVar9 + 0x18 );
                                 cVar6 = predelete_handler(pOVar5);
                                 if (cVar6 != '\0') {
                                    ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                                    Memory::free_static(pOVar5, false);
                                 }

                              }

                              if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar9 + 0x10 );
                                    *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }

                              }

                              Memory::free_static(pvVar9, false);
                              pvVar9 = *(void**)( (long)pvVar10 + 0x20 );
                              *(undefined8*)( (long)pvVar9 + lVar11 * 2 ) = 0;
                           }

                           lVar11 = lVar11 + 4;
                        }
 while ( lVar11 != (ulong)uVar3 << 2 );
                        *(undefined4*)( (long)pvVar10 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar10 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar9 == (void*)0x0) goto LAB_0011459a;
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  Memory::free_static(*(void**)( (long)pvVar10 + 0x28 ), false);
               }

               LAB_0011459a:Memory::free_static(pvVar10, false);
               pvVar10 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar10 + lVar8 * 2 ) = 0;
            }

            lVar8 = lVar8 + 4;
         }
 while ( lVar8 != (ulong)uVar2 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar10 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar10, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<String, ResourceLoader::LoadToken*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::LoadToken*> > >::~HashMap() */void HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::~HashMap(HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 8 );
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar4 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
               pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
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
               pvVar5 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
            }

            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar5 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 8 );
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar4 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
               pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
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
               pvVar5 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
            }

            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar5 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* core_bind::Semaphore::get_class() const */void core_bind::Semaphore::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* ResourceFormatLoader::get_class() const */void ResourceFormatLoader::get_class(void) {
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
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

         LAB_00114eaf:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                  if (lVar4 == 0) goto LAB_00114dc3;
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

      LAB_00114dc3:uVar5 = String::operator ==(param_1, (String*)&local_50);
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

         goto LAB_00114eaf;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00114f2f;
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
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_00114f2f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00114fe3;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Object::is_class((Object*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00114fe3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* core_bind::Semaphore::is_class(String const&) const */undefined8 core_bind::Semaphore::is_class(Semaphore *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011513b;
   }

   cVar5 = String::operator ==(param_1, "Semaphore");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar5 != '\0') goto LAB_0011513b;
      }

      cVar5 = String::operator ==(param_1, "RefCounted");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Object::is_class((Object*)this, param_1);
            return uVar6;
         }

         goto LAB_00115278;
      }

   }

   LAB_0011513b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00115278:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ResourceFormatLoader::is_class(String const&) const */undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0011537b;
   }

   cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar5 != '\0') goto LAB_0011537b;
      }

      cVar5 = String::operator ==(param_1, "RefCounted");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Object::is_class((Object*)this, param_1);
            return uVar6;
         }

         goto LAB_001154b8;
      }

   }

   LAB_0011537b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001154b8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ResourceLoader::ThreadLoadTask::ThreadLoadTask(ResourceLoader::ThreadLoadTask const&) */void ResourceLoader::ThreadLoadTask::ThreadLoadTask(ThreadLoadTask *this, ThreadLoadTask *param_1) {
   uint uVar1;
   ulong uVar2;
   ThreadLoadTask TVar3;
   undefined4 uVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   code *pcVar8;
   char cVar9;
   uint uVar10;
   long lVar11;
   undefined8 uVar12;
   ulong uVar13;
   undefined1(*pauVar14)[16];
   undefined1(*pauVar15)[16];
   undefined8 *puVar16;
   CowData *pCVar17;
   CowData<char32_t> *this_00;
   long lVar18;
   undefined8 *puVar19;
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
   this[0x10] = param_1[0x10];
   *(undefined8*)( this + 0x18 ) = *(undefined8*)( param_1 + 0x18 );
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   this[0x24] = param_1[0x24];
   uVar12 = *(undefined8*)( param_1 + 0x28 );
   *(undefined8*)( this + 0x30 ) = 0;
   lVar11 = *(long*)( param_1 + 0x30 );
   *(undefined8*)( this + 0x28 ) = uVar12;
   if (lVar11 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x30 ), (CowData*)( param_1 + 0x30 ));
   }

   *(undefined8*)( this + 0x38 ) = 0;
   if (*(long*)( param_1 + 0x38 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x38 ), (CowData*)( param_1 + 0x38 ));
   }

   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 64 ) ) = *(undefined8*)( param_1 + ( 8*i + 64 ) );
   }

   uVar4 = *(undefined4*)( param_1 + 0x58 );
   *(undefined8*)( this + 0x60 ) = 0;
   lVar11 = *(long*)( param_1 + 0x60 );
   *(undefined4*)( this + 0x58 ) = uVar4;
   if (lVar11 != 0) {
      *(long*)( this + 0x60 ) = lVar11;
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         *(undefined8*)( this + 0x60 ) = 0;
      }

   }

   TVar3 = param_1[0x68];
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
   uVar2 = *(ulong*)( param_1 + 0x90 );
   this[0x68] = TVar3;
   *(ulong*)( this + 0x90 ) = uVar2;
   if ((int)( uVar2 >> 0x20 ) != 0) {
      uVar5 = ( &hash_table_size_primes )[uVar2 & 0xffffffff];
      uVar2 = (ulong)uVar5 * 4;
      uVar12 = Memory::alloc_static(uVar2, false);
      lVar11 = 0;
      *(undefined8*)( this + 0x88 ) = uVar12;
      uVar12 = Memory::alloc_static((ulong)uVar5 * 8, false);
      *(undefined8*)( this + 0x70 ) = uVar12;
      uVar12 = Memory::alloc_static(uVar2, false);
      *(undefined8*)( this + 0x80 ) = uVar12;
      uVar12 = Memory::alloc_static(uVar2, false);
      *(undefined8*)( this + 0x78 ) = uVar12;
      if (*(int*)( this + 0x94 ) != 0) {
         do {
            this_00 = (CowData<char32_t>*)( *(long*)( this + 0x70 ) + lVar11 * 8 );
            pCVar17 = (CowData*)( lVar11 * 8 + *(long*)( param_1 + 0x70 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar17 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar17);
            }

            *(undefined4*)( *(long*)( this + 0x80 ) + lVar11 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x80 ) + lVar11 * 4 );
            lVar11 = lVar11 + 1;
         }
 while ( (uint)lVar11 < *(uint*)( this + 0x94 ) );
      }

      if (uVar5 != 0) {
         lVar11 = *(long*)( param_1 + 0x88 );
         lVar18 = *(long*)( this + 0x88 );
         uVar13 = 0;
         lVar6 = *(long*)( param_1 + 0x78 );
         lVar7 = *(long*)( this + 0x78 );
         do {
            *(undefined4*)( lVar18 + uVar13 ) = *(undefined4*)( lVar11 + uVar13 );
            *(undefined4*)( lVar7 + uVar13 ) = *(undefined4*)( lVar6 + uVar13 );
            uVar13 = uVar13 + 4;
         }
 while ( uVar13 != uVar2 );
      }

   }

   uVar5 = *(uint*)( param_1 + 0x98 );
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   if (uVar5 != 0) {
      uVar1 = uVar5 - 1;
      uVar10 = uVar1 >> 1 | uVar1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = ( uVar10 | uVar10 >> 0x10 ) + 1;
      *(uint*)( this + 0x9c ) = uVar10;
      lVar11 = Memory::realloc_static((void*)0x0, (ulong)uVar10 << 5, false);
      *(long*)( this + 0xa0 ) = lVar11;
      if (lVar11 == 0) {
         _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar8 = (code*)invalidInstructionException();
         ( *pcVar8 )();
      }

      uVar10 = *(uint*)( this + 0x98 );
      if (uVar10 < uVar5) {
         pauVar14 = (undefined1(*) [16])( (ulong)uVar10 * 0x20 + lVar11 );
         do {
            *(undefined8*)pauVar14[1] = 0;
            pauVar15 = pauVar14 + 2;
            *pauVar14 = (undefined1[16])0x0;
            *(undefined4*)( pauVar14[1] + 8 ) = 0;
            pauVar14 = pauVar15;
         }
 while ( (undefined1(*) [16])( ( (ulong)uVar10 + 1 + ( ulong )(uVar1 - uVar10) ) * 0x20 + lVar11 ) != pauVar15 );
      }

      *(uint*)( this + 0x98 ) = uVar5;
      if (*(int*)( param_1 + 0x98 ) != 0) {
         lVar18 = 0;
         while (true) {
            puVar19 = (undefined8*)( *(long*)( param_1 + 0xa0 ) + lVar18 * 0x20 );
            puVar16 = (undefined8*)( lVar18 * 0x20 + lVar11 );
            *puVar16 = *puVar19;
            Callable::operator =((Callable*)( puVar16 + 1 ), (Callable*)( puVar19 + 1 ));
            *(undefined4*)( puVar16 + 3 ) = *(undefined4*)( puVar19 + 3 );
            if (*(uint*)( param_1 + 0x98 ) <= ( uint )(lVar18 + 1)) break;
            lVar11 = *(long*)( this + 0xa0 );
            lVar18 = lVar18 + 1;
         }
;
      }

   }

   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */StringName *HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(StringName *param_1) {
   void *pvVar1;
   void *pvVar2;
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
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   int iVar33;
   StringName *in_RDX;
   long lVar34;
   ulong uVar35;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   undefined4 uVar39;
   uint uVar40;
   ulong uVar41;
   uint uVar42;
   uint *puVar43;
   int iVar44;
   uint local_88;
   long local_68;
   uVar27 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   if (*in_RSI == 0) {
      uVar29 = (ulong)uVar27 * 4;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::alloc_static((ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_001162dc;
   }
 else {
      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      LAB_001162dc:if (iVar44 != 0) {
         uVar40 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
         uVar29 = CONCAT44(0, uVar40);
         lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar28 = StringName::get_empty_hash();
            iVar44 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            uVar28 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar37 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar28 * lVar30;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar29;
         lVar34 = SUB168(auVar3 * auVar15, 8);
         iVar33 = SUB164(auVar3 * auVar15, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
         if (uVar42 != 0) {
            do {
               if (uVar28 == uVar42) {
                  lVar36 = *in_RSI;
                  uVar42 = *(uint*)( in_RSI[1] + lVar34 * 4 );
                  if (*(long*)( lVar36 + (ulong)uVar42 * 8 ) == *(long*)in_RDX) goto LAB_00116728;
               }

               uVar37 = uVar37 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar33 + 1) * lVar30;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar29;
               lVar34 = SUB168(auVar4 * auVar16, 8);
               uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
            }
 while ( ( uVar42 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar42 * lVar30,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar40 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar30,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,uVar37 <= SUB164(auVar6 * auVar18, 8) );
         }

      }

   }

   if ((float)( iVar44 + 1 ) <= (float)uVar27 * __LC36) {
      lVar30 = *(long*)in_RDX;
      if (lVar30 != 0) goto LAB_00116605;
      LAB_00116766:uVar27 = StringName::get_empty_hash();
   }
 else {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         uVar42 = 0xffffffff;
         iVar44 = *(int*)( (long)in_RSI + 0x24 );
         lVar36 = *in_RSI;
         goto LAB_00116728;
      }

      uVar27 = (int)in_RSI[4] + 1;
      uVar29 = (ulong)uVar27;
      if (uVar27 < 2) {
         uVar29 = 2;
      }

      uVar27 = ( &hash_table_size_primes )[uVar29];
      *(int*)( in_RSI + 4 ) = (int)uVar29;
      pvVar1 = (void*)in_RSI[3];
      uVar29 = (ulong)uVar27 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::realloc_static((void*)in_RSI[1], uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar29 = 0;
         lVar34 = in_RSI[3];
         lVar36 = in_RSI[2];
         do {
            uVar41 = uVar29 & 0xffffffff;
            uVar39 = (undefined4)uVar29;
            uVar42 = 0;
            uVar27 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar29 * 4 ) * 4 );
            uVar35 = (ulong)uVar27;
            uVar40 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
            uVar38 = CONCAT44(0, uVar40);
            lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar35 * lVar31;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
            iVar44 = SUB164(auVar7 * auVar19, 8);
            puVar43 = (uint*)( lVar34 + lVar32 );
            uVar28 = *puVar43;
            if (uVar28 == 0) {
               lVar31 = uVar29 * 4;
            }
 else {
               do {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar28 * lVar31;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar38;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(( uVar40 + iVar44 ) - SUB164(auVar8 * auVar20, 8)) * lVar31;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar38;
                  local_88 = SUB164(auVar9 * auVar21, 8);
                  if (local_88 < uVar42) {
                     *(int*)( lVar36 + uVar41 * 4 ) = iVar44;
                     uVar27 = *puVar43;
                     *puVar43 = (uint)uVar35;
                     uVar28 = *(uint*)( lVar32 + lVar30 );
                     uVar35 = (ulong)uVar27;
                     *(uint*)( lVar32 + lVar30 ) = (uint)uVar41;
                     uVar41 = (ulong)uVar28;
                     uVar42 = local_88;
                  }

                  uVar39 = (undefined4)uVar41;
                  uVar27 = (uint)uVar35;
                  uVar42 = uVar42 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(iVar44 + 1) * lVar31;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
                  iVar44 = SUB164(auVar10 * auVar22, 8);
                  puVar43 = (uint*)( lVar34 + lVar32 );
                  uVar28 = *puVar43;
               }
 while ( uVar28 != 0 );
               lVar31 = uVar41 << 2;
            }

            *puVar43 = uVar27;
            uVar29 = uVar29 + 1;
            *(int*)( lVar36 + lVar31 ) = iVar44;
            *(undefined4*)( lVar30 + lVar32 ) = uVar39;
         }
 while ( (uint)uVar29 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      lVar30 = *(long*)in_RDX;
      if (lVar30 == 0) goto LAB_00116766;
      LAB_00116605:uVar27 = *(uint*)( lVar30 + 0x20 );
   }

   if (uVar27 == 0) {
      uVar27 = 1;
   }

   uVar29 = (ulong)uVar27;
   StringName::StringName((StringName*)( *in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8 ), in_RDX);
   uVar40 = *(uint*)( (long)in_RSI + 0x24 );
   lVar34 = in_RSI[3];
   uVar28 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   uVar35 = CONCAT44(0, uVar28);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar29 * lVar36;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar35;
   lVar30 = SUB168(auVar11 * auVar23, 8) * 4;
   iVar44 = SUB164(auVar11 * auVar23, 8);
   puVar43 = (uint*)( lVar34 + lVar30 );
   uVar42 = *puVar43;
   if (uVar42 == 0) {
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
   }
 else {
      uVar37 = 0;
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
      do {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar42 * lVar36;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar35;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( uVar28 + iVar44 ) - SUB164(auVar12 * auVar24, 8)) * lVar36;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar35;
         local_88 = SUB164(auVar13 * auVar25, 8);
         if (local_88 < uVar37) {
            *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
            uVar27 = *puVar43;
            *puVar43 = (uint)uVar29;
            uVar42 = *(uint*)( lVar30 + lVar32 );
            uVar29 = (ulong)uVar27;
            *(uint*)( lVar30 + lVar32 ) = uVar40;
            uVar40 = uVar42;
            uVar37 = local_88;
         }

         uVar27 = (uint)uVar29;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar44 + 1) * lVar36;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar35;
         lVar30 = SUB168(auVar14 * auVar26, 8) * 4;
         iVar44 = SUB164(auVar14 * auVar26, 8);
         puVar43 = (uint*)( lVar34 + lVar30 );
         uVar42 = *puVar43;
      }
 while ( uVar42 != 0 );
   }

   *puVar43 = uVar27;
   *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
   *(uint*)( lVar32 + lVar30 ) = uVar40;
   uVar42 = *(uint*)( (long)in_RSI + 0x24 );
   lVar36 = *in_RSI;
   iVar44 = uVar42 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar44;
   LAB_00116728:*(uint*)( param_1 + 0xc ) = uVar42;
   *(long*)param_1 = lVar36;
   *(int*)( param_1 + 8 ) = iVar44;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
   void *pvVar1;
   void *pvVar2;
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
   char cVar27;
   uint uVar28;
   uint uVar29;
   int iVar30;
   ulong uVar31;
   long lVar32;
   long lVar33;
   long lVar34;
   int iVar35;
   uint uVar36;
   String *in_RDX;
   ulong uVar37;
   long lVar38;
   long *in_RSI;
   long lVar39;
   uint uVar40;
   ulong uVar41;
   undefined4 uVar42;
   ulong uVar43;
   uint uVar44;
   uint *puVar45;
   uint local_88;
   long local_68;
   uVar28 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   if (*in_RSI == 0) {
      uVar31 = (ulong)uVar28 * 4;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[3] = lVar32;
      lVar32 = Memory::alloc_static((ulong)uVar28 * 8, false);
      *in_RSI = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[2] = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[1] = lVar32;
      if (uVar28 != 0) {
         memset((void*)in_RSI[3], 0, uVar31);
      }

      iVar35 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_001168cc;
   }
 else {
      iVar35 = *(int*)( (long)in_RSI + 0x24 );
      LAB_001168cc:if (iVar35 != 0) {
         uVar29 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
         lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar44 = String::hash();
         uVar31 = CONCAT44(0, uVar29);
         lVar39 = in_RSI[3];
         uVar36 = 1;
         if (uVar44 != 0) {
            uVar36 = uVar44;
         }

         uVar40 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar36 * lVar32;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar31;
         lVar38 = SUB168(auVar11 * auVar23, 8);
         uVar44 = *(uint*)( lVar39 + lVar38 * 4 );
         iVar35 = SUB164(auVar11 * auVar23, 8);
         if (uVar44 == 0) {
            iVar35 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar36 == uVar44) {
                  cVar27 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar38 * 4 ) * 8 ), in_RDX);
                  if (cVar27 != '\0') {
                     iVar35 = *(int*)( (long)in_RSI + 0x24 );
                     iVar30 = *(int*)( in_RSI[1] + lVar38 * 4 );
                     goto LAB_00116c2b;
                  }

                  lVar39 = in_RSI[3];
               }

               uVar40 = uVar40 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar32;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar31;
               lVar38 = SUB168(auVar12 * auVar24, 8);
               uVar44 = *(uint*)( lVar39 + lVar38 * 4 );
               iVar35 = SUB164(auVar12 * auVar24, 8);
            }
 while ( ( uVar44 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar32,auVar25._8_8_ = 0,auVar25._0_8_ = uVar31,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar13 * auVar25, 8)) * lVar32,auVar26._8_8_ = 0,auVar26._0_8_ = uVar31,uVar40 <= SUB164(auVar14 * auVar26, 8) );
            iVar35 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar28 * __LC36 < (float)( iVar35 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar35 = *(int*)( (long)in_RSI + 0x24 );
         iVar30 = -1;
         goto LAB_00116c2b;
      }

      uVar28 = (int)in_RSI[4] + 1;
      uVar31 = (ulong)uVar28;
      if (uVar28 < 2) {
         uVar31 = 2;
      }

      uVar28 = ( &hash_table_size_primes )[uVar31];
      *(int*)( in_RSI + 4 ) = (int)uVar31;
      pvVar1 = (void*)in_RSI[3];
      uVar31 = (ulong)uVar28 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[3] = lVar32;
      lVar32 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar28 * 8, false);
      *in_RSI = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[2] = lVar32;
      lVar32 = Memory::realloc_static((void*)in_RSI[1], uVar31, false);
      in_RSI[1] = lVar32;
      if (uVar28 != 0) {
         memset((void*)in_RSI[3], 0, uVar31);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar31 = 0;
         lVar39 = in_RSI[3];
         lVar38 = in_RSI[2];
         do {
            uVar43 = uVar31 & 0xffffffff;
            uVar42 = (undefined4)uVar31;
            uVar44 = 0;
            uVar28 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar31 * 4 ) * 4 );
            uVar37 = (ulong)uVar28;
            uVar29 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
            uVar41 = CONCAT44(0, uVar29);
            lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar37 * lVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar41;
            lVar34 = SUB168(auVar3 * auVar15, 8) * 4;
            iVar35 = SUB164(auVar3 * auVar15, 8);
            puVar45 = (uint*)( lVar39 + lVar34 );
            uVar36 = *puVar45;
            if (uVar36 == 0) {
               lVar33 = uVar31 * 4;
            }
 else {
               do {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar36 * lVar33;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar41;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar4 * auVar16, 8)) * lVar33;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar41;
                  local_88 = SUB164(auVar5 * auVar17, 8);
                  if (local_88 < uVar44) {
                     *(int*)( lVar38 + uVar43 * 4 ) = iVar35;
                     uVar28 = *puVar45;
                     *puVar45 = (uint)uVar37;
                     uVar36 = *(uint*)( lVar34 + lVar32 );
                     uVar37 = (ulong)uVar28;
                     *(uint*)( lVar34 + lVar32 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar36;
                     uVar44 = local_88;
                  }

                  uVar42 = (undefined4)uVar43;
                  uVar28 = (uint)uVar37;
                  uVar44 = uVar44 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(iVar35 + 1) * lVar33;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar41;
                  lVar34 = SUB168(auVar6 * auVar18, 8) * 4;
                  iVar35 = SUB164(auVar6 * auVar18, 8);
                  puVar45 = (uint*)( lVar39 + lVar34 );
                  uVar36 = *puVar45;
               }
 while ( uVar36 != 0 );
               lVar33 = uVar43 << 2;
            }

            *puVar45 = uVar28;
            uVar31 = uVar31 + 1;
            *(int*)( lVar38 + lVar33 ) = iVar35;
            *(undefined4*)( lVar32 + lVar34 ) = uVar42;
         }
 while ( (uint)uVar31 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar29 = String::hash();
   uVar28 = 1;
   if (uVar29 != 0) {
      uVar28 = uVar29;
   }

   uVar31 = (ulong)uVar28;
   this(CowData<char32_t> * )(*in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8);
   *(undefined8*)this = 0;
   CowData<char32_t>::_ref(this, (CowData*)in_RDX);
   uVar29 = *(uint*)( (long)in_RSI + 0x24 );
   lVar39 = in_RSI[3];
   uVar36 = ( &hash_table_size_primes )[*(uint*)( in_RSI + 4 )];
   uVar37 = CONCAT44(0, uVar36);
   lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar7._8_8_ = 0;
   auVar7._0_8_ = uVar31 * lVar38;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = uVar37;
   lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
   iVar35 = SUB164(auVar7 * auVar19, 8);
   puVar45 = (uint*)( lVar39 + lVar32 );
   uVar44 = *puVar45;
   if (uVar44 == 0) {
      local_68 = in_RSI[2];
      lVar34 = in_RSI[1];
   }
 else {
      uVar40 = 0;
      local_68 = in_RSI[2];
      lVar34 = in_RSI[1];
      do {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar44 * lVar38;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar37;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(( uVar36 + iVar35 ) - SUB164(auVar8 * auVar20, 8)) * lVar38;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar37;
         local_88 = SUB164(auVar9 * auVar21, 8);
         if (local_88 < uVar40) {
            *(int*)( local_68 + (ulong)uVar29 * 4 ) = iVar35;
            uVar28 = *puVar45;
            *puVar45 = (uint)uVar31;
            uVar44 = *(uint*)( lVar32 + lVar34 );
            uVar31 = (ulong)uVar28;
            *(uint*)( lVar32 + lVar34 ) = uVar29;
            uVar29 = uVar44;
            uVar40 = local_88;
         }

         uVar28 = (uint)uVar31;
         uVar40 = uVar40 + 1;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(iVar35 + 1) * lVar38;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar37;
         lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
         iVar35 = SUB164(auVar10 * auVar22, 8);
         puVar45 = (uint*)( lVar39 + lVar32 );
         uVar44 = *puVar45;
      }
 while ( uVar44 != 0 );
   }

   *puVar45 = uVar28;
   *(int*)( local_68 + (ulong)uVar29 * 4 ) = iVar35;
   *(uint*)( lVar34 + lVar32 ) = uVar29;
   iVar30 = *(int*)( (long)in_RSI + 0x24 );
   iVar35 = iVar30 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar35;
   LAB_00116c2b:lVar32 = *in_RSI;
   *(int*)( param_1 + 0xc ) = iVar30;
   *(long*)param_1 = lVar32;
   *(int*)( param_1 + 8 ) = iVar35;
   return param_1;
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

         if (Variant::needs_deinit[*piVar1] != '\0') {
            Variant::_clear_internal();
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 1;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117145;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117145:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 4;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_001172d5;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_001172d5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<StringName, void>::get_class_info() */GetTypeInfo<StringName,void> * __thiscall
GetTypeInfo<StringName,void>::get_class_info(GetTypeInfo<StringName,void> *this){
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x15;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117425;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117425:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Vector<String>, void>::get_class_info() */GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *(undefined4*)this = 0x22;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117585;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117585:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<long, void>::get_class_info() */GetTypeInfo<long,void> * __thiscall
GetTypeInfo<long,void>::get_class_info(GetTypeInfo<long,void> *this){
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117715;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117715:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Variant, void>::get_class_info() */GetTypeInfo<Variant,void> * __thiscall
GetTypeInfo<Variant,void>::get_class_info(GetTypeInfo<Variant,void> *this){
   long in_FS_OFFSET;
   undefined8 local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)this = 0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x20006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   local_28 = 0;
   local_30 = 0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_28);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_30);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117925;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117925:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC15;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x1b;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
         }

         goto LAB_00117ab5;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   LAB_00117ab5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* core_bind::Semaphore::_initialize_classv() */void core_bind::Semaphore::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00126018 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class() {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00126008 != RefCounted::_bind_methods) {
            core_bind::Semaphore::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_00126010 != Object::_bind_compatibility_methods) {
            core_bind::Semaphore::_bind_compatibility_methods();
         }

         initialize_class()::initialized = '\x01'
         ;;
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* WARNING: Removing unreachable block (ram,0x00117f18) */
   /* String vformat<String>(String const&, String const) */
   undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
      local_c0[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   /* WARNING: Removing unreachable block (ram,0x00118250) */
   /* String vformat<String, String>(String const&, String const, String const) */
   undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
      local_d0[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
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

   /* WARNING: Removing unreachable block (ram,0x00118550) */
   /* String vformat<String, int, String>(String const&, String const, int const, String const) */
   undefined8 *vformat<String,int,String>(undefined8 *param_1, bool *param_2, String *param_3, int param_4, String *param_5) {
      Variant *pVVar1;
      Variant *pVVar2;
      int iVar3;
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
      Variant::Variant(local_78, param_5);
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
      String::sprintf((Array*)local_f0, param_2);
      *param_1 = local_f0[0];
      local_f0[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
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

   /* WARNING: Removing unreachable block (ram,0x00118808) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
      local_c0[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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

   /* ResourceLoader::ThreadLoadTask::~ThreadLoadTask() */
   void ResourceLoader::ThreadLoadTask::~ThreadLoadTask(ThreadLoadTask *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      Object *pOVar4;
      char cVar5;
      long lVar6;
      void *pvVar7;
      pvVar7 = *(void**)( this + 0xa0 );
      if (pvVar7 != (void*)0x0) {
         if (*(int*)( this + 0x98 ) != 0) {
            lVar6 = 0;
            while (true) {
               Callable::~Callable((Callable*)( (long)pvVar7 + lVar6 * 0x20 + 8 ));
               if (*(uint*)( this + 0x98 ) <= ( uint )(lVar6 + 1)) break;
               pvVar7 = *(void**)( this + 0xa0 );
               lVar6 = lVar6 + 1;
            }
;
            pvVar7 = *(void**)( this + 0xa0 );
            *(undefined4*)( this + 0x98 ) = 0;
            if (pvVar7 == (void*)0x0) goto LAB_00118a4e;
         }

         Memory::free_static(pvVar7, false);
      }

      LAB_00118a4e:pvVar7 = *(void**)( this + 0x70 );
      if (pvVar7 == (void*)0x0) goto LAB_00118ae8;
      if (*(int*)( this + 0x94 ) != 0) {
         if (( &hash_table_size_primes )[*(uint*)( this + 0x90 )] != 0) {
            memset(*(void**)( this + 0x88 ), 0, ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x90 )] << 2);
            if (*(int*)( this + 0x94 ) == 0) goto LAB_00118b10;
         }

         lVar6 = 0;
         do {
            plVar2 = (long*)( (long)pvVar7 + lVar6 * 8 );
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

               pvVar7 = *(void**)( this + 0x70 );
            }

            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < *(uint*)( this + 0x94 ) );
         *(undefined4*)( this + 0x94 ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00118ae8;
      }

      LAB_00118b10:Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x80 ), false);
      Memory::free_static(*(void**)( this + 0x78 ), false);
      Memory::free_static(*(void**)( this + 0x88 ), false);
      LAB_00118ae8:if (*(long*)( this + 0x60 ) != 0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            pOVar4 = *(Object**)( this + 0x60 );
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x38 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x30 ));
      return;
   }

   /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::~HashMap() */
   void HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::~HashMap(HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>> *this) {
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      void *pvVar5;
      pvVar5 = *(void**)( this + 8 );
      if (pvVar5 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
                  ResourceLoader::ThreadLoadTask::~ThreadLoadTask((ThreadLoadTask*)( (long)pvVar5 + 0x18 ));
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
                  pvVar5 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, ResourceLoader::LoadToken*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::LoadToken*> > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::operator [](HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>> * this, String * param_1);
   {
      undefined8 *puVar1;
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
      void *pvVar42;
      ulong uVar43;
      int iVar44;
      long lVar45;
      long lVar46;
      ulong uVar47;
      undefined8 uVar48;
      uint *puVar49;
      uint uVar50;
      uint uVar51;
      long lVar52;
      uint uVar53;
      uint uVar54;
      undefined1(*pauVar55)[16];
      undefined1(*pauVar56)[16];
      long in_FS_OFFSET;
      long local_58[3];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar54 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (*(long*)( this + 8 ) == 0) {
         LAB_001193b8:uVar39 = (ulong)uVar54;
         uVar43 = uVar39 * 4;
         uVar47 = uVar39 * 8;
         uVar40 = Memory::alloc_static(uVar43, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         pvVar42 = (void*)Memory::alloc_static(uVar47, false);
         *(void**)( this + 8 ) = pvVar42;
         if (uVar54 != 0) {
            pvVar2 = *(void**)( this + 0x10 );
            if (( pvVar2 < (void*)( (long)pvVar42 + uVar47 ) ) && ( pvVar42 < (void*)( (long)pvVar2 + uVar43 ) )) {
               uVar43 = 0;
               do {
                  *(undefined4*)( (long)pvVar2 + uVar43 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar42 + uVar43 * 8 ) = 0;
                  uVar43 = uVar43 + 1;
               }
 while ( uVar39 != uVar43 );
               goto LAB_0011923a;
            }

            memset(pvVar2, 0, uVar43);
            memset(pvVar42, 0, uVar47);
            iVar44 = *(int*)( this + 0x2c );
            LAB_0011923e:if (iVar44 != 0) {
               LAB_00119246:uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar51 = String::hash();
               uVar39 = CONCAT44(0, uVar37);
               lVar52 = *(long*)( this + 0x10 );
               uVar38 = 1;
               if (uVar51 != 0) {
                  uVar38 = uVar51;
               }

               uVar53 = 0;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = (ulong)uVar38 * lVar3;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar39;
               lVar45 = SUB168(auVar16 * auVar32, 8);
               uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
               uVar50 = SUB164(auVar16 * auVar32, 8);
               if (uVar51 != 0) {
                  do {
                     if (uVar38 == uVar51) {
                        cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                        if (cVar36 != '\0') {
                           pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           *(undefined8*)( pauVar41[1] + 8 ) = 0;
                           goto LAB_0011911b;
                        }

                        lVar52 = *(long*)( this + 0x10 );
                     }

                     uVar53 = uVar53 + 1;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = ( ulong )(uVar50 + 1) * lVar3;
                     auVar33._8_8_ = 0;
                     auVar33._0_8_ = uVar39;
                     lVar45 = SUB168(auVar17 * auVar33, 8);
                     uVar51 = *(uint*)( lVar52 + lVar45 * 4 );
                     uVar50 = SUB164(auVar17 * auVar33, 8);
                  }
 while ( ( uVar51 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar51 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar50 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar53 <= SUB164(auVar19 * auVar35, 8) );
               }

               iVar44 = *(int*)( this + 0x2c );
            }

            uVar39 = (ulong)uVar54;
            goto LAB_00118d64;
         }

         iVar44 = *(int*)( this + 0x2c );
         if (pvVar42 == (void*)0x0) goto LAB_00118d64;
         if (iVar44 != 0) goto LAB_00119246;
         LAB_00118d8a:uVar54 = *(uint*)( this + 0x28 );
         if (uVar54 == 0x1c) {
            pauVar41 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0011911b;
         }

         uVar39 = ( ulong )(uVar54 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar37 = ( &hash_table_size_primes )[uVar54];
         if (uVar54 + 1 < 2) {
            uVar39 = 2;
         }

         uVar54 = ( &hash_table_size_primes )[uVar39];
         uVar47 = (ulong)uVar54;
         *(int*)( this + 0x28 ) = (int)uVar39;
         pvVar42 = *(void**)( this + 8 );
         uVar39 = uVar47 * 4;
         uVar43 = uVar47 * 8;
         pvVar2 = *(void**)( this + 0x10 );
         uVar40 = Memory::alloc_static(uVar39, false);
         *(undefined8*)( this + 0x10 ) = uVar40;
         __s_00 = (void*)Memory::alloc_static(uVar43, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar54 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar43 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
               uVar39 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
                  uVar39 = uVar39 + 1;
               }
 while ( uVar39 != uVar47 );
            }
 else {
               memset(__s, 0, uVar39);
               memset(__s_00, 0, uVar43);
            }

         }

         if (uVar37 != 0) {
            uVar39 = 0;
            do {
               uVar54 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
               if (uVar54 != 0) {
                  lVar3 = *(long*)( this + 0x10 );
                  uVar50 = 0;
                  uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar43 = CONCAT44(0, uVar38);
                  lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar54 * lVar52;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar43;
                  lVar45 = SUB168(auVar4 * auVar20, 8);
                  puVar49 = (uint*)( lVar3 + lVar45 * 4 );
                  iVar44 = SUB164(auVar4 * auVar20, 8);
                  uVar51 = *puVar49;
                  uVar40 = *(undefined8*)( (long)pvVar42 + uVar39 * 8 );
                  while (uVar51 != 0) {
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar51 * lVar52;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar43;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar5 * auVar21, 8)) * lVar52;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar43;
                     uVar53 = SUB164(auVar6 * auVar22, 8);
                     uVar48 = uVar40;
                     if (uVar53 < uVar50) {
                        *puVar49 = uVar54;
                        puVar1 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                        uVar48 = *puVar1;
                        *puVar1 = uVar40;
                        uVar54 = uVar51;
                        uVar50 = uVar53;
                     }

                     uVar50 = uVar50 + 1;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar43;
                     lVar45 = SUB168(auVar7 * auVar23, 8);
                     puVar49 = (uint*)( lVar3 + lVar45 * 4 );
                     iVar44 = SUB164(auVar7 * auVar23, 8);
                     uVar40 = uVar48;
                     uVar51 = *puVar49;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar40;
                  *puVar49 = uVar54;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar39 = uVar39 + 1;
            }
 while ( uVar37 != uVar39 );
            Memory::free_static(pvVar42, false);
            Memory::free_static(pvVar2, false);
         }

      }
 else {
         iVar44 = *(int*)( this + 0x2c );
         uVar39 = CONCAT44(0, uVar54);
         if (iVar44 != 0) {
            lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar38 = String::hash();
            lVar52 = *(long*)( this + 0x10 );
            uVar37 = 1;
            if (uVar38 != 0) {
               uVar37 = uVar38;
            }

            uVar50 = 0;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar3;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar39;
            lVar45 = SUB168(auVar12 * auVar28, 8);
            uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar51 = SUB164(auVar12 * auVar28, 8);
            if (uVar38 != 0) {
               do {
                  if (uVar37 == uVar38) {
                     cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                     if (cVar36 != '\0') {
                        pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                        goto LAB_0011911b;
                     }

                     lVar52 = *(long*)( this + 0x10 );
                  }

                  uVar50 = uVar50 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar39;
                  lVar45 = SUB168(auVar13 * auVar29, 8);
                  uVar38 = *(uint*)( lVar52 + lVar45 * 4 );
                  uVar51 = SUB164(auVar13 * auVar29, 8);
               }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar51 + uVar54 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar50 <= SUB164(auVar15 * auVar31, 8) );
            }

            uVar54 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            if (*(long*)( this + 8 ) == 0) goto LAB_001193b8;
            LAB_0011923a:iVar44 = *(int*)( this + 0x2c );
            goto LAB_0011923e;
         }

         LAB_00118d64:if ((float)uVar39 * __LC36 < (float)( iVar44 + 1 )) goto LAB_00118d8a;
      }

      local_58[0] = 0;
      if (*(long*)param_1 == 0) {
         local_58[1] = 0;
         pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar41[1] = 0;
         *pauVar41 = (undefined1[16])0x0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
         lVar3 = local_58[0];
         local_58[1] = 0;
         pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
         *(undefined8*)pauVar41[1] = 0;
         *(undefined8*)*pauVar41 = 0;
         *(undefined8*)( *pauVar41 + 8 ) = 0;
         if (lVar3 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)local_58);
         }

      }

      *(undefined8*)( pauVar41[1] + 8 ) = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
      puVar1 = *(undefined8**)( this + 0x20 );
      if (puVar1 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
      }
 else {
         *puVar1 = pauVar41;
         *(undefined8**)( *pauVar41 + 8 ) = puVar1;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
      uVar37 = String::hash();
      lVar3 = *(long*)( this + 0x10 );
      uVar54 = 1;
      if (uVar37 != 0) {
         uVar54 = uVar37;
      }

      uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar39 = CONCAT44(0, uVar37);
      lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar54 * lVar52;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar39;
      lVar46 = SUB168(auVar8 * auVar24, 8);
      lVar45 = *(long*)( this + 8 );
      puVar49 = (uint*)( lVar3 + lVar46 * 4 );
      iVar44 = SUB164(auVar8 * auVar24, 8);
      uVar38 = *puVar49;
      pauVar56 = pauVar41;
      if (uVar38 != 0) {
         uVar51 = 0;
         pauVar55 = pauVar41;
         do {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar52;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar39;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar52;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar39;
            uVar50 = SUB164(auVar10 * auVar26, 8);
            pauVar56 = pauVar55;
            if (uVar50 < uVar51) {
               *puVar49 = uVar54;
               puVar1 = (undefined8*)( lVar45 + lVar46 * 8 );
               pauVar56 = (undefined1(*) [16])*puVar1;
               *puVar1 = pauVar55;
               uVar51 = uVar50;
               uVar54 = uVar38;
            }

            uVar51 = uVar51 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar39;
            lVar46 = SUB168(auVar11 * auVar27, 8);
            puVar49 = (uint*)( lVar3 + lVar46 * 4 );
            iVar44 = SUB164(auVar11 * auVar27, 8);
            uVar38 = *puVar49;
            pauVar55 = pauVar56;
         }
 while ( uVar38 != 0 );
      }

      *(undefined1(**) [16])( lVar45 + lVar46 * 8 ) = pauVar56;
      *puVar49 = uVar54;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0011911b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pauVar41[1] + 8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */
   CowData<char32_t> * __thiscallHashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::operator [](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> * this, String * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      long lVar4;
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
      undefined1 auVar36[16];
      char cVar37;
      uint uVar38;
      uint uVar39;
      ulong uVar40;
      undefined8 uVar41;
      void *__s_00;
      undefined8 *puVar42;
      void *pvVar43;
      int iVar44;
      long lVar45;
      long lVar46;
      ulong uVar47;
      undefined8 uVar48;
      uint uVar49;
      uint uVar50;
      ulong uVar51;
      long lVar52;
      uint uVar53;
      undefined8 *puVar54;
      uint uVar55;
      long in_FS_OFFSET;
      CowData<char32_t> *local_a0;
      undefined8 local_70;
      undefined1 local_68[16];
      undefined8 local_58;
      undefined8 local_50[2];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      if (*(long*)( this + 8 ) == 0) {
         LAB_00119b3b:local_70 = 0;
         uVar47 = (ulong)uVar55;
         uVar40 = uVar47 * 4;
         uVar51 = uVar47 * 8;
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         pvVar43 = (void*)Memory::alloc_static(uVar51, false);
         *(void**)( this + 8 ) = pvVar43;
         if (uVar55 != 0) {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar43 + uVar51 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar43 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar47 != uVar40 );
            }
 else {
               memset(pvVar3, 0, uVar40);
               memset(pvVar43, 0, uVar51);
            }

            LAB_00119a34:iVar44 = *(int*)( this + 0x2c );
            if (iVar44 != 0) {
               LAB_00119a40:uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar50 = String::hash();
               uVar40 = CONCAT44(0, uVar38);
               lVar52 = *(long*)( this + 0x10 );
               uVar39 = 1;
               if (uVar50 != 0) {
                  uVar39 = uVar50;
               }

               uVar53 = 0;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = (ulong)uVar39 * lVar4;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar40;
               lVar45 = SUB168(auVar17 * auVar33, 8);
               uVar50 = *(uint*)( lVar52 + lVar45 * 4 );
               uVar49 = SUB164(auVar17 * auVar33, 8);
               if (uVar50 != 0) {
                  do {
                     if (uVar39 == uVar50) {
                        cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                        if (cVar37 != '\0') {
                           lVar4 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                           if (*(long*)( lVar4 + 0x18 ) == 0) {
                              local_a0 = (CowData<char32_t>*)( lVar4 + 0x18 );
                           }
 else {
                              CowData<char32_t>::_ref((CowData<char32_t>*)( lVar4 + 0x18 ), (CowData*)&local_70);
                              local_a0 = (CowData<char32_t>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar49 * 8 ) + 0x18 );
                           }

                           goto LAB_001198f0;
                        }

                        lVar52 = *(long*)( this + 0x10 );
                     }

                     uVar53 = uVar53 + 1;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )(uVar49 + 1) * lVar4;
                     auVar34._8_8_ = 0;
                     auVar34._0_8_ = uVar40;
                     lVar45 = SUB168(auVar18 * auVar34, 8);
                     uVar50 = *(uint*)( lVar52 + lVar45 * 4 );
                     uVar49 = SUB164(auVar18 * auVar34, 8);
                  }
 while ( ( uVar50 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar50 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar49 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar53 <= SUB164(auVar20 * auVar36, 8) );
               }

               iVar44 = *(int*)( this + 0x2c );
            }

            uVar47 = (ulong)uVar55;
            goto LAB_00119530;
         }

         iVar44 = *(int*)( this + 0x2c );
         if (pvVar43 == (void*)0x0) goto LAB_00119530;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_00119a40;
         LAB_00119556:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            local_a0 = (CowData<char32_t>*)0x18;
            goto LAB_001198f0;
         }

         uVar40 = ( ulong )(uVar55 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar38 = ( &hash_table_size_primes )[uVar55];
         if (uVar55 + 1 < 2) {
            uVar40 = 2;
         }

         uVar55 = ( &hash_table_size_primes )[uVar40];
         uVar47 = (ulong)uVar55;
         *(int*)( this + 0x28 ) = (int)uVar40;
         pvVar43 = *(void**)( this + 8 );
         uVar40 = uVar47 * 4;
         uVar51 = uVar47 * 8;
         pvVar3 = *(void**)( this + 0x10 );
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         __s_00 = (void*)Memory::alloc_static(uVar51, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar40 != uVar47 );
            }
 else {
               memset(__s, 0, uVar40);
               memset(__s_00, 0, uVar51);
            }

         }

         if (uVar38 != 0) {
            uVar40 = 0;
            do {
               uVar55 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
               if (uVar55 != 0) {
                  lVar4 = *(long*)( this + 0x10 );
                  uVar49 = 0;
                  uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar51 = CONCAT44(0, uVar39);
                  lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar55 * lVar52;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar51;
                  lVar45 = SUB168(auVar5 * auVar21, 8);
                  puVar1 = (uint*)( lVar4 + lVar45 * 4 );
                  iVar44 = SUB164(auVar5 * auVar21, 8);
                  uVar50 = *puVar1;
                  uVar41 = *(undefined8*)( (long)pvVar43 + uVar40 * 8 );
                  while (uVar50 != 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar50 * lVar52;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar51;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar6 * auVar22, 8)) * lVar52;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar51;
                     uVar53 = SUB164(auVar7 * auVar23, 8);
                     uVar48 = uVar41;
                     if (uVar53 < uVar49) {
                        *puVar1 = uVar55;
                        puVar54 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                        uVar48 = *puVar54;
                        *puVar54 = uVar41;
                        uVar55 = uVar50;
                        uVar49 = uVar53;
                     }

                     uVar49 = uVar49 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar51;
                     lVar45 = SUB168(auVar8 * auVar24, 8);
                     puVar1 = (uint*)( lVar4 + lVar45 * 4 );
                     iVar44 = SUB164(auVar8 * auVar24, 8);
                     uVar41 = uVar48;
                     uVar50 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
                  *puVar1 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar40 = uVar40 + 1;
            }
 while ( uVar38 != uVar40 );
            Memory::free_static(pvVar43, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         if (*(int*)( this + 0x2c ) != 0) {
            uVar40 = CONCAT44(0, uVar55);
            lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar39 = String::hash();
            lVar52 = *(long*)( this + 0x10 );
            uVar38 = 1;
            if (uVar39 != 0) {
               uVar38 = uVar39;
            }

            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar38 * lVar4;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar40;
            lVar45 = SUB168(auVar13 * auVar29, 8);
            uVar39 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar50 = SUB164(auVar13 * auVar29, 8);
            if (uVar39 == 0) {
               lVar46 = *(long*)( this + 8 );
            }
 else {
               lVar46 = *(long*)( this + 8 );
               uVar49 = 0;
               do {
                  if (uVar38 == uVar39) {
                     cVar37 = String::operator ==((String*)( *(long*)( lVar46 + lVar45 * 8 ) + 0x10 ), param_1);
                     if (cVar37 != '\0') {
                        local_a0 = (CowData<char32_t>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar50 * 8 ) + 0x18 );
                        goto LAB_001198fd;
                     }

                     lVar52 = *(long*)( this + 0x10 );
                     lVar46 = *(long*)( this + 8 );
                  }

                  uVar49 = uVar49 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = uVar40;
                  lVar45 = SUB168(auVar14 * auVar30, 8);
                  uVar39 = *(uint*)( lVar52 + lVar45 * 4 );
                  uVar50 = SUB164(auVar14 * auVar30, 8);
               }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar50 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar49 <= SUB164(auVar16 * auVar32, 8) );
            }

            local_70 = 0;
            uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            if (lVar46 == 0) goto LAB_00119b3b;
            goto LAB_00119a34;
         }

         local_70 = 0;
         uVar47 = (ulong)uVar55;
         iVar44 = 0;
         LAB_00119530:if ((float)uVar47 * __LC36 < (float)( iVar44 + 1 )) goto LAB_00119556;
      }

      local_58 = 0;
      local_68 = (undefined1[16])0x0;
      if (*(long*)param_1 == 0) {
         uVar41 = 0;
         uVar48 = 0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         uVar41 = local_68._0_8_;
         uVar48 = local_68._8_8_;
      }

      local_50[0] = 0;
      puVar42 = (undefined8*)operator_new(0x20, "");
      puVar42[2] = 0;
      *puVar42 = uVar41;
      puVar42[1] = uVar48;
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 2 ), (CowData*)&local_58);
      puVar42[3] = 0;
      local_a0 = (CowData<char32_t>*)( puVar42 + 3 );
      CowData<char32_t>::_ref(local_a0, (CowData*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar54 = *(undefined8**)( this + 0x20 );
      if (puVar54 == (undefined8*)0x0) {
         *(undefined8**)( this + 0x18 ) = puVar42;
      }
 else {
         *puVar54 = puVar42;
         puVar42[1] = puVar54;
      }

      *(undefined8**)( this + 0x20 ) = puVar42;
      uVar38 = String::hash();
      lVar4 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar38 != 0) {
         uVar55 = uVar38;
      }

      uVar50 = 0;
      uVar38 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar40 = CONCAT44(0, uVar38);
      lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar55 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar40;
      lVar46 = SUB168(auVar9 * auVar25, 8);
      lVar45 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar4 + lVar46 * 4 );
      iVar44 = SUB164(auVar9 * auVar25, 8);
      uVar39 = *puVar1;
      while (uVar39 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar39 * lVar52;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar40;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar10 * auVar26, 8)) * lVar52;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar40;
         uVar49 = SUB164(auVar11 * auVar27, 8);
         puVar54 = puVar42;
         if (uVar49 < uVar50) {
            *puVar1 = uVar55;
            puVar2 = (undefined8*)( lVar45 + lVar46 * 8 );
            puVar54 = (undefined8*)*puVar2;
            *puVar2 = puVar42;
            uVar50 = uVar49;
            uVar55 = uVar39;
         }

         uVar50 = uVar50 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar40;
         lVar46 = SUB168(auVar12 * auVar28, 8);
         puVar1 = (uint*)( lVar4 + lVar46 * 4 );
         iVar44 = SUB164(auVar12 * auVar28, 8);
         puVar42 = puVar54;
         uVar39 = *puVar1;
      }
;
      *(undefined8**)( lVar45 + lVar46 * 8 ) = puVar42;
      *puVar1 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_001198f0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_001198fd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_a0;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      CowData<char32_t> *this_00;
      long lVar1;
      long lVar2;
      long *plVar3;
      plVar3 = *(long**)this;
      if (plVar3 == (long*)0x0) {
         return;
      }

      do {
         this_00 = (CowData<char32_t>*)*plVar3;
         if (this_00 == (CowData<char32_t>*)0x0) {
            if ((int)plVar3[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if (*(long**)( this_00 + 0x18 ) == plVar3) {
            lVar2 = *(long*)( this_00 + 8 );
            lVar1 = *(long*)( this_00 + 0x10 );
            *plVar3 = lVar2;
            if (this_00 == (CowData<char32_t>*)plVar3[1]) {
               plVar3[1] = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 8 ) = lVar2;
               lVar2 = *(long*)( this_00 + 8 );
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar1;
            }

            CowData<char32_t>::_unref(this_00);
            Memory::free_static(this_00, false);
            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar3 = *(long**)this;
      }
 while ( (int)plVar3[2] != 0 );
      Memory::free_static(plVar3, false);
      return;
   }

   /* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */
   void CallableCustomMethodPointer<core_bind::Semaphore,void,int>::call(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
      long lVar1;
      long lVar2;
      ulong uVar3;
      undefined8 uVar4;
      char cVar5;
      int iVar6;
      uint uVar7;
      ulong *puVar8;
      code *UNRECOVERED_JUMPTABLE;
      long in_FS_OFFSET;
      bool bVar9;
      CowData<char32_t> local_60[8];
      CowData<char32_t> local_58[8];
      undefined8 local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar7 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar3 = (ulong)local_48 >> 8;
            local_48 = (char*)( uVar3 << 8 );
            LOCK();
            bVar9 = (char)ObjectDB::spin_lock == '\0';
            if (bVar9) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar9) break;
            local_48 = (char*)( uVar3 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
         if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_0011a028;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar8[1] == 0) goto LAB_0011a028;
         lVar1 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar2 = *(long*)( this + 0x40 );
         if ((uint)param_2 < 2) {
            if (param_2 != 0) {
               *(undefined4*)param_4 = 0;
               if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                  UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
               }

               cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
               uVar4 = _LC56;
               if (cVar5 == '\0') {
                  *(undefined4*)param_4 = 2;
                  *(undefined8*)( param_4 + 4 ) = uVar4;
               }

               iVar6 = Variant::operator_cast_to_int(*param_1);
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Could not recover jumptable at 0x00119fd7. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
                  return;
               }

               goto LAB_0011a0ea;
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
         LAB_0011a028:local_50 = 0;
         local_48 = "\', can\'t call method.";
         local_40 = 0x15;
         String::parse_latin1((StrRange*)&local_50);
         uitos((ulong)local_60);
         operator+((char *)
         local_58,(String*)"Invalid Object id \'";
         String::operator +((String*)&local_48, (String*)local_58);
         _err_print_error(&_LC55, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref(local_58);
         CowData<char32_t>::_unref(local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0011a0ea:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned int>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */
   void CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::call(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
      long lVar1;
      long lVar2;
      ulong uVar3;
      undefined8 uVar4;
      char cVar5;
      uint uVar6;
      ulong *puVar7;
      code *pcVar8;
      long in_FS_OFFSET;
      bool bVar9;
      CowData<char32_t> local_70[8];
      CowData<char32_t> local_68[8];
      undefined8 local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar6 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar3 = (ulong)local_58 >> 8;
            local_58 = (char*)( uVar3 << 8 );
            LOCK();
            bVar9 = (char)ObjectDB::spin_lock == '\0';
            if (bVar9) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar9) break;
            local_58 = (char*)( uVar3 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
         if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar7[1] != 0) {
               lVar1 = *(long*)( this + 0x28 );
               pcVar8 = *(code**)( this + 0x38 );
               lVar2 = *(long*)( this + 0x40 );
               if ((uint)param_2 < 3) {
                  if (param_2 == 2) {
                     *(undefined4*)param_4 = 0;
                     if (( (ulong)pcVar8 & 1 ) != 0) {
                        pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                     }

                     cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
                     uVar4 = _LC57;
                     if (cVar5 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar4;
                     }

                     uVar6 = Variant::operator_cast_to_unsigned_int(param_1[1]);
                     cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x19);
                     uVar4 = _LC58;
                     if (cVar5 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar4;
                     }

                     Variant::operator_cast_to_Callable((Variant*)&local_58);
                     ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_58, uVar6);
                     Callable::~Callable((Callable*)&local_58);
                  }
 else {
                     *(undefined4*)param_4 = 4;
                     *(undefined4*)( param_4 + 8 ) = 2;
                  }

               }
 else {
                  *(undefined4*)param_4 = 3;
                  *(undefined4*)( param_4 + 8 ) = 2;
               }

               goto LAB_0011a1b5;
            }

         }
 else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC55, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_0011a1b5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */
   void RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
      Element *pEVar1;
      Element *pEVar2;
      Element *pEVar3;
      Element *pEVar4;
      Element *pEVar5;
      Element *pEVar6;
      pEVar1 = *(Element**)( param_1 + 0x10 );
      pEVar2 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar5 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar5) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar2 != pEVar6) {
                  pEVar4 = *(Element**)( pEVar6 + 0x10 );
                  if (pEVar2 != pEVar4) {
                     _cleanup_tree(this, pEVar4);
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (pEVar4 != *(Element**)( pEVar6 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar6 = *(Element**)( this + 8 );
               }

               pEVar2 = *(Element**)( pEVar5 + 8 );
               if (pEVar2 != pEVar6) {
                  pEVar4 = *(Element**)( pEVar2 + 0x10 );
                  if (pEVar6 != pEVar4) {
                     _cleanup_tree(this, pEVar4);
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar2 + 8 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
                  Memory::free_static(pEVar2, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar5) {
               pEVar6 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar5) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar5 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar2 + 8 );
               if (pEVar6 != pEVar5) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar5 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar5 != pEVar3) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar5 + 8 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar5 = *(Element**)( pEVar2 + 8 );
            if (pEVar5 != pEVar3) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar5 + 8 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
         Memory::free_static(pEVar1, false);
         pEVar2 = *(Element**)( this + 8 );
      }

      pEVar1 = *(Element**)( param_1 + 8 );
      if (pEVar1 != pEVar2) {
         pEVar3 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar2 != pEVar3) {
            pEVar5 = *(Element**)( pEVar3 + 0x10 );
            if (pEVar2 != pEVar5) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar2 != pEVar6) {
                  pEVar4 = *(Element**)( pEVar6 + 0x10 );
                  if (pEVar2 != pEVar4) {
                     _cleanup_tree(this, pEVar4);
                     pEVar4 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar4) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar6 = *(Element**)( this + 8 );
               }

               pEVar2 = *(Element**)( pEVar5 + 8 );
               if (pEVar2 != pEVar6) {
                  if (*(Element**)( pEVar2 + 0x10 ) != pEVar6) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 0x10 ));
                     pEVar6 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar2 + 8 ) != pEVar6) {
                     _cleanup_tree(this, *(Element**)( pEVar2 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
                  Memory::free_static(pEVar2, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar2 = *(Element**)( pEVar3 + 8 );
            if (pEVar2 != pEVar5) {
               pEVar6 = *(Element**)( pEVar2 + 0x10 );
               if (pEVar6 != pEVar5) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar5 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar2 + 8 );
               if (pEVar6 != pEVar5) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar5 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar5) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
               Memory::free_static(pEVar2, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
            Memory::free_static(pEVar3, false);
            pEVar3 = *(Element**)( this + 8 );
         }

         pEVar2 = *(Element**)( pEVar1 + 8 );
         if (pEVar2 != pEVar3) {
            pEVar5 = *(Element**)( pEVar2 + 0x10 );
            if (pEVar5 != pEVar3) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar5 + 8 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
               pEVar3 = *(Element**)( this + 8 );
            }

            pEVar5 = *(Element**)( pEVar2 + 8 );
            if (pEVar5 != pEVar3) {
               pEVar6 = *(Element**)( pEVar5 + 0x10 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
                  pEVar3 = *(Element**)( this + 8 );
               }

               pEVar6 = *(Element**)( pEVar5 + 8 );
               if (pEVar6 != pEVar3) {
                  if (*(Element**)( pEVar6 + 0x10 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                     pEVar3 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar6 + 8 ) != pEVar3) {
                     _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                  Memory::free_static(pEVar6, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar5 + 0x30 ));
               Memory::free_static(pEVar5, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar2 + 0x30 ));
            Memory::free_static(pEVar2, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
         Memory::free_static(pEVar1, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
      Memory::free_static(param_1, false);
      return;
   }

   /* RefCounted::_initialize_classv() */
   void RefCounted::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_60;
      undefined8 local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00126020 != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         initialize_class()::initialized = '\x01'
         ;;
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */
   void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
      Element *pEVar1;
      Element *pEVar2;
      Element *pEVar3;
      Element *pEVar4;
      void *pvVar5;
      Element *pEVar6;
      Element *pEVar7;
      pvVar5 = *(void**)this;
      if (pvVar5 != (void*)0x0) {
         pEVar1 = *(Element**)( (long)pvVar5 + 0x10 );
         pEVar3 = *(Element**)( this + 8 );
         if (pEVar1 != pEVar3) {
            pEVar4 = *(Element**)( pEVar1 + 0x10 );
            if (pEVar3 != pEVar4) {
               pEVar7 = *(Element**)( pEVar4 + 0x10 );
               if (pEVar3 != pEVar7) {
                  pEVar6 = *(Element**)( pEVar7 + 0x10 );
                  if (pEVar3 != pEVar6) {
                     _cleanup_tree(this, pEVar6);
                     pEVar6 = *(Element**)( this + 8 );
                  }

                  pEVar3 = *(Element**)( pEVar7 + 8 );
                  if (pEVar6 != pEVar3) {
                     pEVar2 = *(Element**)( pEVar3 + 0x10 );
                     if (pEVar6 != pEVar2) {
                        _cleanup_tree(this, pEVar2);
                        pEVar2 = *(Element**)( this + 8 );
                     }

                     if (pEVar2 != *(Element**)( pEVar3 + 8 )) {
                        _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
                     Memory::free_static(pEVar3, false);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
                  Memory::free_static(pEVar7, false);
                  pEVar7 = *(Element**)( this + 8 );
               }

               pEVar3 = *(Element**)( pEVar4 + 8 );
               if (pEVar3 != pEVar7) {
                  if (*(Element**)( pEVar3 + 0x10 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 0x10 ));
                     pEVar7 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar3 + 8 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar3 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
                  Memory::free_static(pEVar3, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
               Memory::free_static(pEVar4, false);
               pEVar4 = *(Element**)( this + 8 );
            }

            pEVar3 = *(Element**)( pEVar1 + 8 );
            if (pEVar3 != pEVar4) {
               pEVar7 = *(Element**)( pEVar3 + 0x10 );
               if (pEVar4 != pEVar7) {
                  pEVar6 = *(Element**)( pEVar7 + 0x10 );
                  if (pEVar4 != pEVar6) {
                     pEVar2 = *(Element**)( pEVar6 + 0x10 );
                     if (pEVar4 != pEVar2) {
                        _cleanup_tree(this, pEVar2);
                        pEVar2 = *(Element**)( this + 8 );
                     }

                     if (pEVar2 != *(Element**)( pEVar6 + 8 )) {
                        _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                     Memory::free_static(pEVar6, false);
                     pEVar6 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar7 + 8 ) != pEVar6) {
                     _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar7 + 0x30 ));
                  Memory::free_static(pEVar7, false);
                  pEVar7 = *(Element**)( this + 8 );
               }

               pEVar4 = *(Element**)( pEVar3 + 8 );
               if (pEVar4 != pEVar7) {
                  pEVar6 = *(Element**)( pEVar4 + 0x10 );
                  if (pEVar6 != pEVar7) {
                     if (*(Element**)( pEVar6 + 0x10 ) != pEVar7) {
                        _cleanup_tree(this, *(Element**)( pEVar6 + 0x10 ));
                        pEVar7 = *(Element**)( this + 8 );
                     }

                     if (pEVar7 != *(Element**)( pEVar6 + 8 )) {
                        _cleanup_tree(this, *(Element**)( pEVar6 + 8 ));
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar6 + 0x30 ));
                     Memory::free_static(pEVar6, false);
                     pEVar7 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar4 + 8 ) != pEVar7) {
                     _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar4 + 0x30 ));
                  Memory::free_static(pEVar4, false);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar3 + 0x30 ));
               Memory::free_static(pEVar3, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( pEVar1 + 0x30 ));
            Memory::free_static(pEVar1, false);
            pvVar5 = *(void**)this;
            pEVar3 = *(Element**)( this + 8 );
         }

         *(Element**)( (long)pvVar5 + 0x10 ) = pEVar3;
         *(undefined4*)( this + 0x10 ) = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x30 ));
         Memory::free_static(pvVar5, false);
         return;
      }

      return;
   }

   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      void *pvVar1;
      long lVar2;
      long lVar3;
      long *plVar4;
      plVar4 = *(long**)this;
      if (plVar4 == (long*)0x0) {
         return;
      }

      do {
         pvVar1 = (void*)*plVar4;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }

            break;
         }

         if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
            lVar2 = *(long*)( (long)pvVar1 + 0x38 );
            *plVar4 = lVar3;
            if (pvVar1 == (void*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x30 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar1 + 0x30 );
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x38 ) = lVar2;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
            Memory::free_static(pvVar1, false);
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

   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      long *plVar1;
      int *piVar2;
      long lVar3;
      code *pcVar4;
      int *piVar5;
      long lVar6;
      if (*(long*)( this + 0x68 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 0x68 );
            *(undefined8*)( this + 0x68 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x50 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            piVar2 = *(int**)( this + 0x50 );
            if (piVar2 == (int*)0x0) {
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar3 = *(long*)( piVar2 + -2 );
            *(undefined8*)( this + 0x50 ) = 0;
            if (lVar3 != 0) {
               lVar6 = 0;
               piVar5 = piVar2;
               do {
                  if (Variant::needs_deinit[*piVar5] != '\0') {
                     Variant::_clear_internal();
                  }

                  lVar6 = lVar6 + 1;
                  piVar5 = piVar5 + 6;
               }
 while ( lVar3 != lVar6 );
            }

            Memory::free_static(piVar2 + -4, false);
         }

      }

      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x28 ));
      if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      return;
   }

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
      undefined7 in_register_00000031;
      long in_FS_OFFSET;
      long local_98;
      long local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_78 = "RefCounted";
      local_88 = 0;
      local_90 = 0;
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
      if (local_90 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 == 0x11) {
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            goto LAB_0011b2ec;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_0011b2ec:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "RefCounted", false);
      ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      CowData<char32_t> *local_b0;
      long local_98;
      long local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "ResourceFormatLoader";
      local_70 = 0x14;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "ResourceFormatLoader";
      local_98 = 0;
      local_70 = 0x14;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      }

      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 == 0x11) {
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            goto LAB_0011b551;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_0011b551:local_b0 = (CowData<char32_t>*)&local_58;
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_b0);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "ResourceFormatLoader", false);
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

   /* core_bind::Semaphore::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void core_bind::Semaphore::_get_property_listv(Semaphore *this, List *param_1, bool param_2) {
      long in_FS_OFFSET;
      CowData<char32_t> *local_b0;
      long local_98;
      long local_90;
      long local_88;
      long local_80;
      char *local_78;
      undefined8 local_70;
      long local_68;
      int local_60;
      undefined8 local_58;
      undefined4 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (!param_2) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "Semaphore";
      local_70 = 9;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Semaphore";
      local_98 = 0;
      local_70 = 9;
      String::parse_latin1((StrRange*)&local_98);
      local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
      local_70 = 0;
      if (local_98 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
      }

      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      if (local_90 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 == 0x11) {
            StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_68 = local_80;
            }

            goto LAB_0011b801;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_0011b801:local_b0 = (CowData<char32_t>*)&local_58;
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
      CowData<char32_t>::_unref(local_b0);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

      StringName::StringName((StringName*)&local_78, "Semaphore", false);
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

   /* CowData<char32_t>::_realloc(long) */
   undefined8 CowData<char32_t>::_realloc(CowData<char32_t> *this, long param_1) {
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

   /* std::unique_lock<std::mutex>::unlock() */
   void std::unique_lock<std::mutex>::unlock(unique_lock<std::mutex> *this) {
      if (this[8] != (unique_lock<std::mutex>)0x0) {
         if (*(pthread_mutex_t**)this != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(*(pthread_mutex_t**)this);
            this[8] = (unique_lock<std::mutex>)0x0;
         }

         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_system_error(1);
   }

   /* Ref<Resource>::unref() */
   void Ref<Resource>::unref(Ref<Resource> *this) {
      Object *pOVar1;
      char cVar2;
      if (*(long*)this != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)this;
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               *(undefined8*)this = 0;
               return;
            }

         }

      }

      *(undefined8*)this = 0;
      return;
   }

   /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::_lookup_pos(String const&, unsigned int&) const */
   undefined8 HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_lookup_pos(HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>> *this, String *param_1, uint *param_2) {
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
      undefined8 uVar12;
      uint uVar13;
      uint uVar14;
      long lVar15;
      ulong uVar16;
      long lVar17;
      uint uVar18;
      if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
         uVar1 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         uVar16 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar11 = String::hash();
         uVar13 = 1;
         if (uVar11 != 0) {
            uVar13 = uVar11;
         }

         lVar17 = *(long*)( this + 0x10 );
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar13 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar15 = SUB168(auVar3 * auVar7, 8);
         uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
         uVar14 = SUB164(auVar3 * auVar7, 8);
         if (uVar11 != 0) {
            uVar18 = 0;
            do {
               if (uVar13 == uVar11) {
                  uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
                  if ((char)uVar12 != '\0') {
                     *param_2 = uVar14;
                     return uVar12;
                  }

                  lVar17 = *(long*)( this + 0x10 );
               }

               uVar18 = uVar18 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar15 = SUB168(auVar4 * auVar8, 8);
               uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
               uVar14 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      return 0;
   }

   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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

   /* godot::details::enum_qualified_name_to_class_info_name(String const&) */
   details * __thiscallgodot::details::enum_qualified_name_to_class_info_name(details * this, String * param_1);
   {
      code *pcVar1;
      long lVar2;
      long lVar3;
      long in_FS_OFFSET;
      undefined8 local_60;
      char local_58[8];
      long local_50;
      undefined *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      String::split(local_58, SUB81(param_1, 0), 0x11bc3a);
      if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
         local_60 = 0;
         local_48 = &_LC42;
         local_40 = 1;
         String::parse_latin1((StrRange*)&local_60);
         if (local_50 == 0) {
            lVar3 = 0;
            lVar2 = -2;
         }
 else {
            lVar3 = *(long*)( local_50 + -8 );
            lVar2 = lVar3 + -2;
            if (-1 < lVar2) {
               String::operator +((String*)&local_48, (String*)( local_50 + lVar2 * 8 ));
               String::operator +((String*)this, (String*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               goto LAB_0011bcd4;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, lVar3, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      local_60 = 0;
      local_48 = &_LC42;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      String::join((Vector*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      LAB_0011bcd4:CowData<String>::_unref((CowData<String>*)&local_50);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::operator[](String const&) */
   undefined1 * __thiscallHashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::operator [](HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> * this, String * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *pvVar3;
      void *__s;
      long lVar4;
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
      undefined1 auVar36[16];
      undefined1(*pauVar37)[16];
      char cVar38;
      uint uVar39;
      uint uVar40;
      ulong uVar41;
      undefined8 uVar42;
      void *__s_00;
      undefined1(*pauVar43)[16];
      void *pvVar44;
      int iVar45;
      long lVar46;
      long lVar47;
      ulong uVar48;
      undefined8 uVar49;
      uint uVar50;
      uint uVar51;
      ulong uVar52;
      long lVar53;
      uint uVar54;
      uint uVar55;
      undefined1(*pauVar56)[16];
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined1 local_68[16];
      long local_58[2];
      undefined8 local_48;
      long local_40;
      uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( this + 8 ) == 0) {
         LAB_0011c48c:local_70 = 0;
         uVar48 = (ulong)uVar55;
         uVar41 = uVar48 * 4;
         uVar52 = uVar48 * 8;
         uVar42 = Memory::alloc_static(uVar41, false);
         *(undefined8*)( this + 0x10 ) = uVar42;
         pvVar44 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = pvVar44;
         if (uVar55 != 0) {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)pvVar44 + uVar52 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar41 ) )) {
               uVar41 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar44 + uVar41 * 8 ) = 0;
                  uVar41 = uVar41 + 1;
               }
 while ( uVar48 != uVar41 );
            }
 else {
               memset(pvVar3, 0, uVar41);
               memset(pvVar44, 0, uVar52);
            }

            LAB_0011c375:iVar45 = *(int*)( this + 0x2c );
            if (iVar45 != 0) {
               LAB_0011c385:uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar51 = String::hash();
               uVar41 = CONCAT44(0, uVar39);
               lVar53 = *(long*)( this + 0x10 );
               uVar40 = 1;
               if (uVar51 != 0) {
                  uVar40 = uVar51;
               }

               uVar54 = 0;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = (ulong)uVar40 * lVar4;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar41;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar50 = SUB164(auVar17 * auVar33, 8);
               if (uVar51 != 0) {
                  do {
                     if (uVar40 == uVar51) {
                        cVar38 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                        if (cVar38 != '\0') {
                           pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           if (*(long*)pauVar43[2] != 0) {
                              CowData<String>::_ref((CowData<String>*)( pauVar43 + 2 ), (CowData*)&local_70);
                              pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                           }

                           goto LAB_0011c22b;
                        }

                        lVar53 = *(long*)( this + 0x10 );
                     }

                     uVar54 = uVar54 + 1;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
                     auVar34._8_8_ = 0;
                     auVar34._0_8_ = uVar41;
                     lVar46 = SUB168(auVar18 * auVar34, 8);
                     uVar51 = *(uint*)( lVar53 + lVar46 * 4 );
                     uVar50 = SUB164(auVar18 * auVar34, 8);
                  }
 while ( ( uVar51 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar41,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar39 + uVar50 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar41,uVar54 <= SUB164(auVar20 * auVar36, 8) );
               }

               iVar45 = *(int*)( this + 0x2c );
            }

            uVar48 = (ulong)uVar55;
            goto LAB_0011be47;
         }

         iVar45 = *(int*)( this + 0x2c );
         if (pvVar44 == (void*)0x0) goto LAB_0011be47;
         if (*(int*)( this + 0x2c ) != 0) goto LAB_0011c385;
         LAB_0011be6d:uVar55 = *(uint*)( this + 0x28 );
         if (uVar55 == 0x1c) {
            pauVar43 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0011c22b;
         }

         uVar41 = ( ulong )(uVar55 + 1);
         uVar39 = ( &hash_table_size_primes )[uVar55];
         *(undefined4*)( this + 0x2c ) = 0;
         if (uVar55 + 1 < 2) {
            uVar41 = 2;
         }

         uVar55 = ( &hash_table_size_primes )[uVar41];
         *(int*)( this + 0x28 ) = (int)uVar41;
         pvVar44 = *(void**)( this + 8 );
         uVar48 = (ulong)uVar55;
         uVar41 = uVar48 * 4;
         pvVar3 = *(void**)( this + 0x10 );
         uVar52 = uVar48 * 8;
         uVar42 = Memory::alloc_static(uVar41, false);
         *(undefined8*)( this + 0x10 ) = uVar42;
         __s_00 = (void*)Memory::alloc_static(uVar52, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar55 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
               uVar41 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
                  uVar41 = uVar41 + 1;
               }
 while ( uVar41 != uVar48 );
            }
 else {
               memset(__s, 0, uVar41);
               memset(__s_00, 0, uVar52);
            }

         }

         uVar41 = 0;
         if (uVar39 != 0) {
            do {
               uVar55 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
               if (uVar55 != 0) {
                  uVar50 = 0;
                  lVar4 = *(long*)( this + 0x10 );
                  uVar40 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar52 = CONCAT44(0, uVar40);
                  lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar55 * lVar53;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar52;
                  lVar46 = SUB168(auVar5 * auVar21, 8);
                  puVar1 = (uint*)( lVar4 + lVar46 * 4 );
                  iVar45 = SUB164(auVar5 * auVar21, 8);
                  uVar51 = *puVar1;
                  uVar42 = *(undefined8*)( (long)pvVar44 + uVar41 * 8 );
                  while (uVar51 != 0) {
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = (ulong)uVar51 * lVar53;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar52;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = ( ulong )(( uVar40 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
                     auVar23._8_8_ = 0;
                     auVar23._0_8_ = uVar52;
                     uVar54 = SUB164(auVar7 * auVar23, 8);
                     uVar49 = uVar42;
                     if (uVar54 < uVar50) {
                        *puVar1 = uVar55;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                        uVar49 = *puVar2;
                        *puVar2 = uVar42;
                        uVar55 = uVar51;
                        uVar50 = uVar54;
                     }

                     uVar50 = uVar50 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
                     auVar24._8_8_ = 0;
                     auVar24._0_8_ = uVar52;
                     lVar46 = SUB168(auVar8 * auVar24, 8);
                     puVar1 = (uint*)( lVar4 + lVar46 * 4 );
                     iVar45 = SUB164(auVar8 * auVar24, 8);
                     uVar42 = uVar49;
                     uVar51 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
                  *puVar1 = uVar55;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar41 = uVar41 + 1;
            }
 while ( uVar39 != uVar41 );
            Memory::free_static(pvVar44, false);
            Memory::free_static(pvVar3, false);
         }

      }
 else {
         if (*(int*)( this + 0x2c ) != 0) {
            uVar41 = CONCAT44(0, uVar55);
            lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar40 = String::hash();
            uVar39 = 1;
            if (uVar40 != 0) {
               uVar39 = uVar40;
            }

            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar39 * lVar4;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar41;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            lVar53 = *(long*)( this + 0x10 );
            uVar51 = SUB164(auVar13 * auVar29, 8);
            uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
            if (uVar40 == 0) {
               lVar47 = *(long*)( this + 8 );
            }
 else {
               uVar50 = 0;
               lVar47 = *(long*)( this + 8 );
               do {
                  if (uVar39 == uVar40) {
                     cVar38 = String::operator ==((String*)( *(long*)( lVar47 + lVar46 * 8 ) + 0x10 ), param_1);
                     if (cVar38 != '\0') {
                        pauVar43 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                        goto LAB_0011c237;
                     }

                     lVar53 = *(long*)( this + 0x10 );
                     lVar47 = *(long*)( this + 8 );
                  }

                  uVar50 = uVar50 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar51 + 1) * lVar4;
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = uVar41;
                  lVar46 = SUB168(auVar14 * auVar30, 8);
                  uVar40 = *(uint*)( lVar53 + lVar46 * 4 );
                  uVar51 = SUB164(auVar14 * auVar30, 8);
               }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar41,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar51 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar41,uVar50 <= SUB164(auVar16 * auVar32, 8) );
            }

            local_70 = 0;
            uVar55 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            if (lVar47 == 0) goto LAB_0011c48c;
            goto LAB_0011c375;
         }

         local_70 = 0;
         uVar48 = (ulong)uVar55;
         iVar45 = 0;
         LAB_0011be47:if ((float)uVar48 * __LC36 < (float)( iVar45 + 1 )) goto LAB_0011be6d;
      }

      local_58[0] = 0;
      local_68 = (undefined1[16])0x0;
      if (*(long*)param_1 == 0) {
         local_48 = 0;
         pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
         *(undefined8*)pauVar43[1] = 0;
         *pauVar43 = (undefined1[16])0x0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
         lVar4 = local_58[0];
         uVar42 = local_68._0_8_;
         uVar49 = local_68._8_8_;
         local_48 = 0;
         pauVar43 = (undefined1(*) [16])operator_new(0x28, "");
         *(undefined8*)pauVar43[1] = 0;
         *(undefined8*)*pauVar43 = uVar42;
         *(undefined8*)( *pauVar43 + 8 ) = uVar49;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar43 + 1 ), (CowData*)local_58);
         }

      }

      *(undefined8*)pauVar43[2] = 0;
      CowData<String>::_unref((CowData<String>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
      puVar2 = *(undefined8**)( this + 0x20 );
      if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
      }
 else {
         *puVar2 = pauVar43;
         *(undefined8**)( *pauVar43 + 8 ) = puVar2;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar43;
      uVar39 = String::hash();
      lVar4 = *(long*)( this + 0x10 );
      uVar55 = 1;
      if (uVar39 != 0) {
         uVar55 = uVar39;
      }

      uVar51 = 0;
      uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar41 = CONCAT44(0, uVar39);
      lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar55 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      lVar47 = SUB168(auVar9 * auVar25, 8);
      lVar46 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar4 + lVar47 * 4 );
      iVar45 = SUB164(auVar9 * auVar25, 8);
      uVar40 = *puVar1;
      pauVar37 = pauVar43;
      while (uVar40 != 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar40 * lVar53;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar41;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar41;
         uVar50 = SUB164(auVar11 * auVar27, 8);
         pauVar56 = pauVar37;
         if (uVar50 < uVar51) {
            *puVar1 = uVar55;
            puVar2 = (undefined8*)( lVar46 + lVar47 * 8 );
            pauVar56 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar37;
            uVar51 = uVar50;
            uVar55 = uVar40;
         }

         uVar51 = uVar51 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar41;
         lVar47 = SUB168(auVar12 * auVar28, 8);
         puVar1 = (uint*)( lVar4 + lVar47 * 4 );
         iVar45 = SUB164(auVar12 * auVar28, 8);
         pauVar37 = pauVar56;
         uVar40 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar37;
      *puVar1 = uVar55;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0011c22b:CowData<String>::_unref((CowData<String>*)&local_70);
      LAB_0011c237:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return pauVar43[1] + 8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::~HashMap() */
   void HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::~HashMap(HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> *this) {
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      void *pvVar5;
      pvVar5 = *(void**)( this + 8 );
      if (pvVar5 == (void*)0x0) {
         return;
      }

      if (*(int*)( this + 0x2c ) != 0) {
         uVar2 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
                  CowData<String>::_unref((CowData<String>*)( (long)pvVar5 + 0x20 ));
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
                  pvVar5 = *(void**)( this + 8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x2c ) = 0;
            *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) {
               return;
            }

         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      return;
   }

   /* GetTypeInfo<Error, void>::get_class_info() */
   GetTypeInfo<Error,void> * GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> * this);
   {
      code *pcVar1;
      long lVar2;
      long lVar3;
      long in_FS_OFFSET;
      undefined8 local_80;
      Vector local_78[8];
      undefined8 local_70;
      undefined8 local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_80 = 0;
      local_58 = "Error";
      local_50 = 5;
      String::parse_latin1((StrRange*)&local_80);
      String::split((char*)&local_68, SUB81((StrRange*)&local_80, 0), 0x11bc3a);
      if (( local_60 != 0 ) && ( 2 < *(long*)( local_60 + -8 ) )) {
         local_70 = 0;
         local_58 = ".";
         local_50 = 1;
         String::parse_latin1((StrRange*)&local_70);
         if (local_60 == 0) {
            lVar2 = -2;
            lVar3 = 0;
         }
 else {
            lVar3 = *(long*)( local_60 + -8 );
            lVar2 = lVar3 + -2;
            if (-1 < lVar2) {
               String::operator +((String*)&local_58, (String*)( local_60 + lVar2 * 8 ));
               String::operator +((String*)local_78, (String*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               goto LAB_0011c835;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, lVar3, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      local_70 = 0;
      local_58 = ".";
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_70);
      String::join(local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      LAB_0011c835:CowData<String>::_unref((CowData<String>*)&local_60);
      StringName::StringName((StringName*)&local_58, (String*)local_78, false);
      *(undefined4*)this = 2;
      *(undefined4*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x20 ) = 0;
      *(undefined4*)( this + 0x28 ) = 0x10006;
      *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
      local_68 = 0;
      local_70 = 0;
      StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<String>::_realloc(long) */
   undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<String>::resize<false>(long) */
   undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
      code *pcVar1;
      undefined8 *puVar2;
      undefined8 uVar3;
      long lVar4;
      long lVar5;
      ulong uVar6;
      undefined8 *puVar7;
      ulong uVar8;
      long lVar9;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar4 = 0;
         lVar5 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar4) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar5 = lVar4 * 8;
         if (lVar5 != 0) {
            uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
            uVar6 = uVar6 | uVar6 >> 2;
            uVar6 = uVar6 | uVar6 >> 4;
            uVar6 = uVar6 | uVar6 >> 8;
            uVar6 = uVar6 | uVar6 >> 0x10;
            lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 8 == 0) {
         LAB_0011cd30:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar6 = param_1 * 8 - 1;
      uVar6 = uVar6 >> 1 | uVar6;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = uVar6 | uVar6 >> 0x20;
      lVar9 = uVar6 + 1;
      if (lVar9 == 0) goto LAB_0011cd30;
      uVar8 = param_1;
      if (param_1 <= lVar4) {
         while (lVar4 = *(long*)this,lVar4 != 0) {
            if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
               if (lVar9 != lVar5) {
                  uVar3 = _realloc(this, lVar9);
                  if ((int)uVar3 != 0) {
                     return uVar3;
                  }

                  lVar4 = *(long*)this;
                  if (lVar4 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar1 = (code*)invalidInstructionException();
                     ( *pcVar1 )();
                  }

               }

               *(long*)( lVar4 + -8 ) = param_1;
               return 0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
            uVar8 = uVar8 + 1;
         }
;
         goto LAB_0011cd86;
      }

      if (lVar9 == lVar5) {
         LAB_0011ccab:puVar7 = *(undefined8**)this;
         if (puVar7 == (undefined8*)0x0) {
            LAB_0011cd86:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar4 = puVar7[-1];
         if (param_1 <= lVar4) goto LAB_0011cc1f;
      }
 else {
         if (lVar4 != 0) {
            uVar3 = _realloc(this, lVar9);
            if ((int)uVar3 != 0) {
               return uVar3;
            }

            goto LAB_0011ccab;
         }

         puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
         if (puVar2 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar7 = puVar2 + 2;
         *puVar2 = 1;
         puVar2[1] = 0;
         *(undefined8**)this = puVar7;
         lVar4 = 0;
      }

      memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
      LAB_0011cc1f:puVar7[-1] = param_1;
      return 0;
   }

   /* CowData<unsigned int>::_unref() */
   void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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

   /* CowData<int>::_realloc(long) */
   undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<int>::resize<false>(long) */
   undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
         lVar3 = lVar9 * 4;
         if (lVar3 != 0) {
            uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
            uVar4 = uVar4 | uVar4 >> 2;
            uVar4 = uVar4 | uVar4 >> 4;
            uVar4 = uVar4 | uVar4 >> 8;
            uVar4 = uVar4 | uVar4 >> 0x10;
            lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 4 == 0) {
         LAB_0011d050:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      lVar8 = uVar4 + 1;
      if (lVar8 == 0) goto LAB_0011d050;
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
               goto LAB_0011cf61;
            }

            uVar6 = _realloc(this, lVar8);
            if ((int)uVar6 != 0) {
               return uVar6;
            }

         }

         puVar7 = *(undefined8**)this;
         if (puVar7 != (undefined8*)0x0) {
            LAB_0011cf61:puVar7[-1] = param_1;
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

   /* ResourceFormatLoader::_initialize_classv() */
   void ResourceFormatLoader::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_60;
      undefined8 local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_58 = 0;
            local_40 = 6;
            local_48 = "Object";
            String::parse_latin1((StrRange*)&local_58);
            StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
            local_48 = "RefCounted";
            local_60 = 0;
            local_40 = 10;
            String::parse_latin1((StrRange*)&local_60);
            StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if ((code*)PTR__bind_methods_00126020 != Object::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class() {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            _bind_methods();
            initialize_class()::initialized = '\x01'
            ;;
         }

         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::_resize_and_rehash(unsigned int) */
      void HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::_resize_and_rehash(HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>> *this, uint param_1) {
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
         uVar3 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         if (param_1 < 2) {
            param_1 = 2;
         }

         *(uint*)( this + 0x28 ) = param_1;
         uVar21 = ( &hash_table_size_primes )[param_1];
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
                  uVar4 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
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

      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::operator[](String const&) */
      ThreadLoadTask * __thiscallHashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::operator [](HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>> * this, String * param_1);
      {
         uint *puVar1;
         undefined8 *puVar2;
         void *__s;
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
         char cVar19;
         uint uVar20;
         uint uVar21;
         undefined8 *puVar22;
         undefined8 uVar23;
         void *__s_00;
         long lVar24;
         long lVar25;
         int iVar26;
         uint uVar27;
         long lVar28;
         ulong uVar29;
         ThreadLoadTask *pTVar30;
         uint uVar31;
         ulong uVar32;
         long lVar33;
         undefined8 *puVar34;
         ulong uVar35;
         uint uVar36;
         long in_FS_OFFSET;
         byte bVar37;
         uint local_1f8;
         ThreadLoadTask *local_1d8;
         ThreadLoadTask *local_1d0;
         uint local_1bc;
         ThreadLoadTask local_1b8[36];
         undefined1 local_194;
         undefined8 local_170;
         undefined8 local_168;
         undefined1 local_148[16];
         undefined1 local_138[16];
         undefined8 local_128;
         undefined8 uStack_120;
         undefined8 local_118;
         undefined1 local_108[16];
         long local_f8;
         ThreadLoadTask local_f0[176];
         long local_40;
         bVar37 = 0;
         lVar24 = *(long*)( this + 8 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar20 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         if (lVar24 == 0) {
            LAB_0011d920:pTVar30 = local_1b8;
            for (lVar25 = 0xe; lVar25 != 0; lVar25 = lVar25 + -1) {
               *(undefined8*)pTVar30 = 0;
               pTVar30 = pTVar30 + ( (ulong)bVar37 * -2 + 1 ) * 8;
            }

            local_168 = _LC123;
            local_148 = (undefined1[16])0x0;
            local_138 = (undefined1[16])0x0;
            local_128 = _LC3;
            uStack_120 = _UNK_00120b98;
            local_194 = 1;
            local_170 = 0xffffffffffffffff;
            uVar20 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            local_118 = 0;
            if (lVar24 == 0) {
               uVar35 = (ulong)uVar20;
               uVar29 = uVar35 * 4;
               uVar32 = uVar35 * 8;
               uVar23 = Memory::alloc_static(uVar29, false);
               *(undefined8*)( this + 0x10 ) = uVar23;
               __s_00 = (void*)Memory::alloc_static(uVar32, false);
               *(void**)( this + 8 ) = __s_00;
               if (uVar20 != 0) {
                  __s = *(void**)( this + 0x10 );
                  if (( __s < (void*)( (long)__s_00 + uVar32 ) ) && ( __s_00 < (void*)( (long)__s + uVar29 ) )) {
                     uVar29 = 0;
                     do {
                        *(undefined4*)( (long)__s + uVar29 * 4 ) = 0;
                        *(undefined8*)( (long)__s_00 + uVar29 * 8 ) = 0;
                        uVar29 = uVar29 + 1;
                     }
 while ( uVar35 != uVar29 );
                  }
 else {
                     memset(__s, 0, uVar29);
                     memset(__s_00, 0, uVar32);
                  }

               }

            }

         }
 else {
            if (*(int*)( this + 0x2c ) != 0) {
               lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar21 = String::hash();
               uVar29 = CONCAT44(0, uVar20);
               lVar33 = *(long*)( this + 0x10 );
               uVar27 = 1;
               if (uVar21 != 0) {
                  uVar27 = uVar21;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar27 * lVar25;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar29;
               lVar28 = SUB168(auVar7 * auVar15, 8);
               uVar21 = *(uint*)( lVar33 + lVar28 * 4 );
               uVar31 = SUB164(auVar7 * auVar15, 8);
               if (uVar21 == 0) {
                  lVar24 = *(long*)( this + 8 );
               }
 else {
                  lVar24 = *(long*)( this + 8 );
                  uVar36 = 0;
                  do {
                     if (uVar21 == uVar27) {
                        cVar19 = String::operator ==((String*)( *(long*)( lVar24 + lVar28 * 8 ) + 0x10 ), param_1);
                        if (cVar19 != '\0') {
                           local_1d0 = (ThreadLoadTask*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar31 * 8 ) + 0x18 );
                           goto LAB_0011d7ff;
                        }

                        lVar24 = *(long*)( this + 8 );
                        lVar33 = *(long*)( this + 0x10 );
                     }

                     uVar36 = uVar36 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(uVar31 + 1) * lVar25;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar29;
                     lVar28 = SUB168(auVar8 * auVar16, 8);
                     uVar21 = *(uint*)( lVar33 + lVar28 * 4 );
                     uVar31 = SUB164(auVar8 * auVar16, 8);
                  }
 while ( ( uVar21 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar21 * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar31 + uVar20 ) - SUB164(auVar9 * auVar17, 8)) * lVar25,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,uVar36 <= SUB164(auVar10 * auVar18, 8) );
               }

               goto LAB_0011d920;
            }

            pTVar30 = local_1b8;
            for (lVar24 = 0xe; lVar24 != 0; lVar24 = lVar24 + -1) {
               *(undefined8*)pTVar30 = 0;
               pTVar30 = pTVar30 + 8;
            }

            local_148 = (undefined1[16])0x0;
            local_138 = (undefined1[16])0x0;
            local_168 = _LC123;
            local_194 = 1;
            local_170 = 0xffffffffffffffff;
            uVar20 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            local_118 = 0;
            local_128 = _LC3;
            uStack_120 = _UNK_00120b98;
         }

         local_1d8 = local_1b8;
         local_1bc = 0;
         cVar19 = _lookup_pos(this, param_1, &local_1bc);
         if (cVar19 == '\0') {
            if ((float)uVar20 * __LC36 < (float)( *(int*)( this + 0x2c ) + 1 )) {
               if (*(int*)( this + 0x28 ) == 0x1c) {
                  _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
                  local_1d0 = (ThreadLoadTask*)0x18;
                  goto LAB_0011d7f0;
               }

               _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
            }

            local_f8 = 0;
            local_108 = (undefined1[16])0x0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)param_1);
            }

            ResourceLoader::ThreadLoadTask::ThreadLoadTask(local_f0, local_1d8);
            puVar22 = (undefined8*)operator_new(0xc0, "");
            puVar22[2] = 0;
            *puVar22 = local_108._0_8_;
            puVar22[1] = local_108._8_8_;
            if (local_f8 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)&local_f8);
            }

            local_1d0 = (ThreadLoadTask*)( puVar22 + 3 );
            ResourceLoader::ThreadLoadTask::ThreadLoadTask(local_1d0, local_f0);
            ResourceLoader::ThreadLoadTask::~ThreadLoadTask(local_f0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            puVar34 = *(undefined8**)( this + 0x20 );
            if (puVar34 == (undefined8*)0x0) {
               *(undefined8**)( this + 0x18 ) = puVar22;
            }
 else {
               *puVar34 = puVar22;
               puVar22[1] = puVar34;
            }

            *(undefined8**)( this + 0x20 ) = puVar22;
            uVar20 = String::hash();
            lVar24 = *(long*)( this + 0x10 );
            uVar29 = 1;
            if (uVar20 != 0) {
               uVar29 = (ulong)uVar20;
            }

            uVar31 = 0;
            lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            uVar21 = (uint)uVar29;
            uVar20 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
            uVar32 = CONCAT44(0, uVar20);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar29 * lVar25;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar32;
            lVar28 = SUB168(auVar3 * auVar11, 8);
            lVar33 = *(long*)( this + 8 );
            puVar1 = (uint*)( lVar24 + lVar28 * 4 );
            iVar26 = SUB164(auVar3 * auVar11, 8);
            uVar27 = *puVar1;
            while (uVar27 != 0) {
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar27 * lVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = uVar32;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(( iVar26 + uVar20 ) - SUB164(auVar4 * auVar12, 8)) * lVar25;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar32;
               local_1f8 = SUB164(auVar5 * auVar13, 8);
               puVar34 = puVar22;
               if (local_1f8 < uVar31) {
                  *puVar1 = (uint)uVar29;
                  uVar29 = (ulong)uVar27;
                  puVar2 = (undefined8*)( lVar33 + lVar28 * 8 );
                  puVar34 = (undefined8*)*puVar2;
                  *puVar2 = puVar22;
                  uVar31 = local_1f8;
               }

               uVar21 = (uint)uVar29;
               uVar31 = uVar31 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(iVar26 + 1) * lVar25;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar32;
               lVar28 = SUB168(auVar6 * auVar14, 8);
               puVar1 = (uint*)( lVar24 + lVar28 * 4 );
               iVar26 = SUB164(auVar6 * auVar14, 8);
               puVar22 = puVar34;
               uVar27 = *puVar1;
            }
;
            *(undefined8**)( lVar33 + lVar28 * 8 ) = puVar22;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
 else {
            uVar29 = (ulong)local_1bc;
            ResourceLoader::ThreadLoadTask::operator =((ThreadLoadTask*)( *(long*)( *(long*)( this + 8 ) + uVar29 * 8 ) + 0x18 ), local_1d8);
            local_1d0 = (ThreadLoadTask*)( *(long*)( *(long*)( this + 8 ) + uVar29 * 8 ) + 0x18 );
         }

         LAB_0011d7f0:ResourceLoader::ThreadLoadTask::~ThreadLoadTask(local_1d8);
         LAB_0011d7ff:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return local_1d0;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::insert(String const&, ResourceLoader::ThreadLoadTask const&,
   bool) */
      String *HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::insert(String *param_1, ThreadLoadTask *param_2, bool param_3) {
         uint *puVar1;
         undefined8 *puVar2;
         long lVar3;
         void *__s;
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
         long *plVar20;
         char cVar21;
         uint uVar22;
         undefined8 uVar23;
         void *__s_00;
         ulong uVar24;
         ThreadLoadTask *in_RCX;
         uint uVar25;
         int iVar26;
         uint uVar27;
         uint uVar28;
         undefined7 in_register_00000011;
         String *pSVar29;
         long lVar30;
         long lVar31;
         char in_R8B;
         uint uVar32;
         ulong uVar33;
         long lVar34;
         ulong uVar35;
         long *plVar36;
         uint uVar37;
         long in_FS_OFFSET;
         uint local_138;
         long *local_120;
         long local_f8;
         ThreadLoadTask local_f0[176];
         long local_40;
         pSVar29 = (String*)CONCAT71(in_register_00000011, param_3);
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar25 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
         if (*(long*)( param_2 + 8 ) == 0) {
            uVar35 = (ulong)uVar25;
            uVar24 = uVar35 * 4;
            uVar33 = uVar35 * 8;
            uVar23 = Memory::alloc_static(uVar24, false);
            *(undefined8*)( param_2 + 0x10 ) = uVar23;
            __s_00 = (void*)Memory::alloc_static(uVar33, false);
            *(void**)( param_2 + 8 ) = __s_00;
            if (uVar25 != 0) {
               __s = *(void**)( param_2 + 0x10 );
               if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
                  uVar24 = 0;
                  do {
                     *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
                     *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
                     uVar24 = uVar24 + 1;
                  }
 while ( uVar35 != uVar24 );
               }
 else {
                  memset(__s, 0, uVar24);
                  memset(__s_00, 0, uVar33);
               }

               goto LAB_0011db25;
            }

            iVar26 = *(int*)( param_2 + 0x2c );
            if (__s_00 == (void*)0x0) goto LAB_0011db33;
            if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011dd60;
            LAB_0011db55:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               local_120 = (long*)0x0;
               goto LAB_0011dd0f;
            }

            _resize_and_rehash((HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
         }
 else {
            LAB_0011db25:iVar26 = *(int*)( param_2 + 0x2c );
            if (iVar26 != 0) {
               LAB_0011dd60:uVar22 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               uVar32 = String::hash();
               uVar24 = CONCAT44(0, uVar22);
               lVar34 = *(long*)( param_2 + 0x10 );
               uVar27 = 1;
               if (uVar32 != 0) {
                  uVar27 = uVar32;
               }

               uVar37 = 0;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar27 * lVar3;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar24;
               lVar31 = SUB168(auVar8 * auVar16, 8);
               uVar32 = *(uint*)( lVar34 + lVar31 * 4 );
               uVar28 = SUB164(auVar8 * auVar16, 8);
               if (uVar32 != 0) {
                  do {
                     if (uVar27 == uVar32) {
                        cVar21 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ), pSVar29);
                        if (cVar21 != '\0') {
                           ResourceLoader::ThreadLoadTask::operator =((ThreadLoadTask*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 ) + 0x18 ), in_RCX);
                           local_120 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                           goto LAB_0011dd0f;
                        }

                        lVar34 = *(long*)( param_2 + 0x10 );
                     }

                     uVar37 = uVar37 + 1;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(uVar28 + 1) * lVar3;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar24;
                     lVar31 = SUB168(auVar9 * auVar17, 8);
                     uVar32 = *(uint*)( lVar34 + lVar31 * 4 );
                     uVar28 = SUB164(auVar9 * auVar17, 8);
                  }
 while ( ( uVar32 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar32 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar24,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar22 + uVar28 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar24,uVar37 <= SUB164(auVar11 * auVar19, 8) );
               }

               iVar26 = *(int*)( param_2 + 0x2c );
            }

            LAB_0011db33:if ((float)uVar25 * __LC36 < (float)( iVar26 + 1 )) goto LAB_0011db55;
         }

         local_f8 = 0;
         if (*(long*)pSVar29 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)pSVar29);
         }

         ResourceLoader::ThreadLoadTask::ThreadLoadTask(local_f0, in_RCX);
         local_120 = (long*)operator_new(0xc0, "");
         local_120[2] = 0;
         *local_120 = 0;
         local_120[1] = 0;
         if (local_f8 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( local_120 + 2 ), (CowData*)&local_f8);
         }

         ResourceLoader::ThreadLoadTask::ThreadLoadTask((ThreadLoadTask*)( local_120 + 3 ), local_f0);
         ResourceLoader::ThreadLoadTask::~ThreadLoadTask(local_f0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         puVar2 = *(undefined8**)( param_2 + 0x20 );
         if (puVar2 == (undefined8*)0x0) {
            *(long**)( param_2 + 0x18 ) = local_120;
            *(long**)( param_2 + 0x20 ) = local_120;
         }
 else if (in_R8B == '\0') {
            *puVar2 = local_120;
            local_120[1] = (long)puVar2;
            *(long**)( param_2 + 0x20 ) = local_120;
         }
 else {
            lVar3 = *(long*)( param_2 + 0x18 );
            *(long**)( lVar3 + 8 ) = local_120;
            *local_120 = lVar3;
            *(long**)( param_2 + 0x18 ) = local_120;
         }

         uVar22 = String::hash();
         lVar3 = *(long*)( param_2 + 0x10 );
         uVar25 = 1;
         if (uVar22 != 0) {
            uVar25 = uVar22;
         }

         uVar32 = 0;
         uVar24 = (ulong)uVar25;
         uVar22 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
         uVar33 = CONCAT44(0, uVar22);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar24 * lVar34;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar33;
         lVar30 = SUB168(auVar4 * auVar12, 8);
         lVar31 = *(long*)( param_2 + 8 );
         puVar1 = (uint*)( lVar3 + lVar30 * 4 );
         iVar26 = SUB164(auVar4 * auVar12, 8);
         uVar27 = *puVar1;
         plVar20 = local_120;
         while (uVar27 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar27 * lVar34;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar33;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(( uVar22 + iVar26 ) - SUB164(auVar5 * auVar13, 8)) * lVar34;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar33;
            local_138 = SUB164(auVar6 * auVar14, 8);
            plVar36 = plVar20;
            if (local_138 < uVar32) {
               *puVar1 = (uint)uVar24;
               uVar24 = (ulong)uVar27;
               puVar2 = (undefined8*)( lVar31 + lVar30 * 8 );
               plVar36 = (long*)*puVar2;
               *puVar2 = plVar20;
               uVar32 = local_138;
            }

            uVar25 = (uint)uVar24;
            uVar32 = uVar32 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar26 + 1) * lVar34;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar33;
            lVar30 = SUB168(auVar7 * auVar15, 8);
            puVar1 = (uint*)( lVar3 + lVar30 * 4 );
            iVar26 = SUB164(auVar7 * auVar15, 8);
            plVar20 = plVar36;
            uVar27 = *puVar1;
         }
;
         *(long**)( lVar31 + lVar30 * 8 ) = plVar20;
         *puVar1 = uVar25;
         *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
         LAB_0011dd0f:*(long**)param_1 = local_120;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::_resize_and_rehash(unsigned
   int) */
      void HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>::_resize_and_rehash(HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>> *this, uint param_1) {
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
         uVar3 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         if (param_1 < 2) {
            param_1 = 2;
         }

         *(uint*)( this + 0x28 ) = param_1;
         uVar21 = ( &hash_table_size_primes )[param_1];
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
                  uVar4 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
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

      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::operator[](String const&) */
      Ref<Resource> * __thiscallHashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>::operator [](HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>> * this, String * param_1);
      {
         uint *puVar1;
         undefined8 *puVar2;
         ulong __n;
         long lVar3;
         void *__s;
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
         Ref *pRVar28;
         char cVar29;
         uint uVar30;
         uint uVar31;
         undefined8 *puVar32;
         undefined8 uVar33;
         void *__s_00;
         ulong uVar34;
         int iVar35;
         uint uVar36;
         long lVar37;
         long lVar38;
         ulong uVar39;
         uint uVar40;
         long lVar41;
         undefined8 *puVar42;
         uint uVar43;
         uint uVar44;
         long in_FS_OFFSET;
         uint local_88;
         Ref<Resource> *local_70;
         long local_58;
         Ref *local_50[2];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar30 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
         uVar39 = (ulong)uVar30;
         if (*(long*)( this + 8 ) == 0) {
            LAB_0011e6f8:uVar34 = uVar39 * 4;
            __n = uVar39 * 8;
            uVar33 = Memory::alloc_static(uVar34, false);
            *(undefined8*)( this + 0x10 ) = uVar33;
            __s_00 = (void*)Memory::alloc_static(__n, false);
            *(void**)( this + 8 ) = __s_00;
            if ((int)uVar39 != 0) {
               __s = *(void**)( this + 0x10 );
               if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
                  uVar34 = 0;
                  do {
                     *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
                     *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
                     uVar34 = uVar34 + 1;
                  }
 while ( uVar39 != uVar34 );
                  goto LAB_0011e56f;
               }

               memset(__s, 0, uVar34);
               memset(__s_00, 0, __n);
               iVar35 = *(int*)( this + 0x2c );
               LAB_0011e573:uVar30 = (uint)uVar39;
               if (iVar35 != 0) {
                  LAB_0011e57b:uVar36 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  uVar40 = String::hash();
                  uVar39 = CONCAT44(0, uVar36);
                  lVar41 = *(long*)( this + 0x10 );
                  uVar31 = 1;
                  if (uVar40 != 0) {
                     uVar31 = uVar40;
                  }

                  uVar44 = 0;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = (ulong)uVar31 * lVar3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar39;
                  lVar38 = SUB168(auVar12 * auVar24, 8);
                  uVar40 = *(uint*)( lVar41 + lVar38 * 4 );
                  uVar43 = SUB164(auVar12 * auVar24, 8);
                  if (uVar40 != 0) {
                     do {
                        if (uVar31 == uVar40) {
                           cVar29 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar38 * 8 ) + 0x10 ), param_1);
                           if (cVar29 != '\0') {
                              Ref<Resource>::operator =((Ref<Resource>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar43 * 8 ) + 0x18 ), (Ref*)0x0);
                              local_70 = (Ref<Resource>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar43 * 8 ) + 0x18 );
                              goto LAB_0011e444;
                           }

                           lVar41 = *(long*)( this + 0x10 );
                        }

                        uVar44 = uVar44 + 1;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = ( ulong )(uVar43 + 1) * lVar3;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ = uVar39;
                        lVar38 = SUB168(auVar13 * auVar25, 8);
                        uVar40 = *(uint*)( lVar41 + lVar38 * 4 );
                        uVar43 = SUB164(auVar13 * auVar25, 8);
                     }
 while ( ( uVar40 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar40 * lVar3,auVar26._8_8_ = 0,auVar26._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar36 + uVar43 ) - SUB164(auVar14 * auVar26, 8)) * lVar3,auVar27._8_8_ = 0,auVar27._0_8_ = uVar39,uVar44 <= SUB164(auVar15 * auVar27, 8) );
                  }

                  uVar39 = (ulong)uVar30;
                  iVar35 = *(int*)( this + 0x2c );
               }

               goto LAB_0011e253;
            }

            iVar35 = *(int*)( this + 0x2c );
            if (__s_00 == (void*)0x0) goto LAB_0011e253;
            uVar30 = 0;
            if (iVar35 != 0) goto LAB_0011e57b;
            LAB_0011e275:if (*(int*)( this + 0x28 ) == 0x1c) {
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               local_70 = (Ref<Resource>*)0x18;
               goto LAB_0011e444;
            }

            _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
         }
 else {
            iVar35 = *(int*)( this + 0x2c );
            uVar39 = CONCAT44(0, uVar30);
            if (iVar35 != 0) {
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               uVar31 = String::hash();
               lVar41 = *(long*)( this + 0x10 );
               uVar36 = 1;
               if (uVar31 != 0) {
                  uVar36 = uVar31;
               }

               uVar43 = 0;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar36 * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar39;
               lVar38 = SUB168(auVar8 * auVar20, 8);
               uVar31 = *(uint*)( lVar41 + lVar38 * 4 );
               uVar40 = SUB164(auVar8 * auVar20, 8);
               if (uVar31 != 0) {
                  do {
                     if (uVar31 == uVar36) {
                        cVar29 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar38 * 8 ) + 0x10 ), param_1);
                        if (cVar29 != '\0') {
                           local_70 = (Ref<Resource>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar40 * 8 ) + 0x18 );
                           goto LAB_0011e444;
                        }

                        lVar41 = *(long*)( this + 0x10 );
                     }

                     uVar43 = uVar43 + 1;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(uVar40 + 1) * lVar3;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar39;
                     lVar38 = SUB168(auVar9 * auVar21, 8);
                     uVar31 = *(uint*)( lVar41 + lVar38 * 4 );
                     uVar40 = SUB164(auVar9 * auVar21, 8);
                  }
 while ( ( uVar31 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar31 * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar40 + uVar30 ) - SUB164(auVar10 * auVar22, 8)) * lVar3,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,uVar43 <= SUB164(auVar11 * auVar23, 8) );
               }

               uVar39 = ( ulong )(uint)(&hash_table_size_primes)[*(uint*)( this + 0x28 )];
               if (*(long*)( this + 8 ) == 0) goto LAB_0011e6f8;
               LAB_0011e56f:iVar35 = *(int*)( this + 0x2c );
               goto LAB_0011e573;
            }

            LAB_0011e253:if ((float)uVar39 * __LC36 < (float)( iVar35 + 1 )) goto LAB_0011e275;
         }

         local_58 = 0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
         }

         local_50[0] = (Ref*)0x0;
         Ref<Resource>::operator =((Ref<Resource>*)local_50, (Ref*)0x0);
         puVar32 = (undefined8*)operator_new(0x20, "");
         puVar32[2] = 0;
         *puVar32 = 0;
         puVar32[1] = 0;
         if (local_58 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar32 + 2 ), (CowData*)&local_58);
         }

         pRVar28 = local_50[0];
         puVar32[3] = 0;
         local_70 = (Ref<Resource>*)( puVar32 + 3 );
         Ref<Resource>::operator =(local_70, local_50[0]);
         if (( ( pRVar28 != (Ref*)0x0 ) && ( cVar29 = RefCounted::unreference() ),cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pRVar28 + 0x140 ))(pRVar28);
         Memory::free_static(pRVar28, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar42 = *(undefined8**)( this + 0x20 );
      if (puVar42 == (undefined8*)0x0) {
         *(undefined8**)( this + 0x18 ) = puVar32;
      }
 else {
         *puVar42 = puVar32;
         puVar32[1] = puVar42;
      }

      *(undefined8**)( this + 0x20 ) = puVar32;
      uVar30 = String::hash();
      lVar3 = *(long*)( this + 0x10 );
      uVar39 = 1;
      if (uVar30 != 0) {
         uVar39 = (ulong)uVar30;
      }

      uVar40 = 0;
      lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar31 = (uint)uVar39;
      uVar30 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar34 = CONCAT44(0, uVar30);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar39 * lVar41;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar34;
      lVar37 = SUB168(auVar4 * auVar16, 8);
      lVar38 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar3 + lVar37 * 4 );
      iVar35 = SUB164(auVar4 * auVar16, 8);
      uVar36 = *puVar1;
      while (uVar36 != 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar36 * lVar41;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar34;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(( uVar30 + iVar35 ) - SUB164(auVar5 * auVar17, 8)) * lVar41;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar34;
         local_88 = SUB164(auVar6 * auVar18, 8);
         puVar42 = puVar32;
         if (local_88 < uVar40) {
            *puVar1 = (uint)uVar39;
            uVar39 = (ulong)uVar36;
            puVar2 = (undefined8*)( lVar38 + lVar37 * 8 );
            puVar42 = (undefined8*)*puVar2;
            *puVar2 = puVar32;
            uVar40 = local_88;
         }

         uVar31 = (uint)uVar39;
         uVar40 = uVar40 + 1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = ( ulong )(iVar35 + 1) * lVar41;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar34;
         lVar37 = SUB168(auVar7 * auVar19, 8);
         puVar1 = (uint*)( lVar3 + lVar37 * 4 );
         iVar35 = SUB164(auVar7 * auVar19, 8);
         puVar32 = puVar42;
         uVar36 = *puVar1;
      }
;
      *(undefined8**)( lVar38 + lVar37 * 8 ) = puVar32;
      *puVar1 = uVar31;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0011e444:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_70;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* CowData<Ref<ResourceFormatLoader> >::_unref() */
   void CowData<Ref<ResourceFormatLoader>>::_unref(CowData<Ref<ResourceFormatLoader>> *this) {
      long *plVar1;
      long lVar2;
      Object *pOVar3;
      code *pcVar4;
      char cVar5;
      long *plVar6;
      long lVar7;
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

      plVar1 = *(long**)this;
      if (plVar1 == (long*)0x0) {
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar2 = plVar1[-1];
      *(undefined8*)this = 0;
      if (lVar2 != 0) {
         lVar7 = 0;
         plVar6 = plVar1;
         LAB_0011e85d:do {
            if (*plVar6 != 0) {
               cVar5 = RefCounted::unreference();
               if (cVar5 != '\0') {
                  pOVar3 = (Object*)*plVar6;
                  cVar5 = predelete_handler(pOVar3);
                  if (cVar5 != '\0') {
                     lVar7 = lVar7 + 1;
                     plVar6 = plVar6 + 1;
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                     if (lVar2 == lVar7) break;
                     goto LAB_0011e85d;
                  }

               }

            }

            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
         }
 while ( lVar2 != lVar7 );
      }

      Memory::free_static(plVar1 + -2, false);
      return;
   }

   /* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */
   void RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
      int iVar1;
      long lVar2;
      long lVar3;
      long lVar4;
      Element *pEVar5;
      Element *pEVar6;
      Element *pEVar7;
      Element *pEVar8;
      iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
      pEVar7 = *(Element**)( param_1 + 0x18 );
      do {
         while (true) {
            pEVar8 = pEVar7;
            if (iVar1 != 0) {
               **(undefined4**)( *(long*)this + 0x10 ) = 1;
               return;
            }

            pEVar5 = *(Element**)( pEVar8 + 0x18 );
            pEVar6 = *(Element**)( pEVar5 + 0x10 );
            pEVar7 = pEVar8;
            if (pEVar6 == pEVar8) break;
            if (*(int*)pEVar6 == 0) goto LAB_0011e9dd;
            if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( param_1 + 8 );
               *(long*)( pEVar8 + 0x10 ) = lVar3;
               pEVar7 = pEVar5;
               if (lVar2 != lVar3) {
                  *(Element**)( lVar3 + 0x18 ) = pEVar8;
                  pEVar7 = *(Element**)( pEVar8 + 0x18 );
               }

               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
                  *(Element**)( pEVar7 + 8 ) = param_1;
               }
 else {
                  *(Element**)( pEVar7 + 0x10 ) = param_1;
               }

               *(Element**)( param_1 + 8 ) = pEVar8;
               *(Element**)( pEVar8 + 0x18 ) = param_1;
               pEVar6 = *(Element**)( this + 8 );
               *(int*)param_1 = 1;
               pEVar7 = param_1;
               if (pEVar5 == pEVar6) goto LAB_0011eb00;
               LAB_0011e986:*(int*)pEVar5 = 0;
            }
 else {
               pEVar6 = *(Element**)( this + 8 );
               *(int*)pEVar8 = 1;
               pEVar8 = param_1;
               if (pEVar5 != pEVar6) goto LAB_0011e986;
               LAB_0011eb00:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }

            lVar2 = *(long*)( pEVar5 + 8 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 0x10 );
            *(long*)( pEVar5 + 8 ) = lVar4;
            if (lVar3 != lVar4) {
               *(Element**)( lVar4 + 0x18 ) = pEVar5;
            }

            lVar3 = *(long*)( pEVar5 + 0x18 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 8 ) = lVar2;
            }

            *(Element**)( lVar2 + 0x10 ) = pEVar5;
            *(long*)( pEVar5 + 0x18 ) = lVar2;
            LAB_0011e9c3:iVar1 = *(int*)pEVar7;
            param_1 = pEVar8;
         }
;
         pEVar6 = *(Element**)( pEVar5 + 8 );
         if (*(int*)pEVar6 != 0) {
            if (*(Element**)( pEVar8 + 8 ) == param_1) {
               lVar2 = *(long*)( this + 8 );
               lVar3 = *(long*)( param_1 + 0x10 );
               *(long*)( pEVar8 + 8 ) = lVar3;
               if (lVar2 == lVar3) {
                  *(Element**)( param_1 + 0x18 ) = pEVar5;
                  pEVar7 = pEVar5;
                  LAB_0011ebf2:*(Element**)( pEVar7 + 0x10 ) = param_1;
               }
 else {
                  *(Element**)( lVar3 + 0x18 ) = pEVar8;
                  pEVar7 = *(Element**)( pEVar8 + 0x18 );
                  *(Element**)( param_1 + 0x18 ) = pEVar7;
                  if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_0011ebf2;
                  *(Element**)( pEVar7 + 8 ) = param_1;
               }

               *(Element**)( param_1 + 0x10 ) = pEVar8;
               *(Element**)( pEVar8 + 0x18 ) = param_1;
               pEVar6 = *(Element**)( this + 8 );
               *(int*)param_1 = 1;
               pEVar7 = param_1;
               if (pEVar5 == pEVar6) goto LAB_0011ebc0;
               LAB_0011ea50:*(int*)pEVar5 = 0;
            }
 else {
               pEVar6 = *(Element**)( this + 8 );
               *(int*)pEVar8 = 1;
               pEVar8 = param_1;
               if (pEVar5 != pEVar6) goto LAB_0011ea50;
               LAB_0011ebc0:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
            }

            lVar2 = *(long*)( pEVar5 + 0x10 );
            lVar3 = *(long*)( this + 8 );
            lVar4 = *(long*)( lVar2 + 8 );
            *(long*)( pEVar5 + 0x10 ) = lVar4;
            if (lVar3 != lVar4) {
               *(Element**)( lVar4 + 0x18 ) = pEVar5;
            }

            lVar3 = *(long*)( pEVar5 + 0x18 );
            *(long*)( lVar2 + 0x18 ) = lVar3;
            if (pEVar5 == *(Element**)( lVar3 + 8 )) {
               *(long*)( lVar3 + 8 ) = lVar2;
            }
 else {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            *(Element**)( lVar2 + 8 ) = pEVar5;
            *(long*)( pEVar5 + 0x18 ) = lVar2;
            goto LAB_0011e9c3;
         }

         LAB_0011e9dd:pEVar7 = *(Element**)( this + 8 );
         *(int*)pEVar8 = 1;
         *(int*)pEVar6 = 1;
         if (pEVar5 == pEVar7) {
            _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }
 else {
            *(int*)pEVar5 = 0;
         }

         iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
         pEVar7 = *(Element**)( pEVar5 + 0x18 );
         param_1 = pEVar5;
      }
 while ( true );
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > >::insert(String const&,
   Ref<Resource> const&, bool) */
   String * HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>::insert(String * param_1, Ref * param_2, bool, param_3);
   {
      undefined8 *puVar1;
      long lVar2;
      void *__s;
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
      Object *pOVar19;
      char cVar20;
      uint uVar21;
      long *plVar22;
      undefined8 uVar23;
      void *__s_00;
      ulong uVar24;
      undefined8 *in_RCX;
      uint uVar25;
      int iVar26;
      uint uVar27;
      undefined7 in_register_00000011;
      String *pSVar28;
      long lVar29;
      long lVar30;
      uint *puVar31;
      uint uVar32;
      char in_R8B;
      uint uVar33;
      long lVar34;
      ulong uVar35;
      long *plVar36;
      long *plVar37;
      uint uVar38;
      ulong uVar39;
      long in_FS_OFFSET;
      uint local_98;
      long local_58;
      Object *local_50[2];
      long local_40;
      pSVar28 = (String*)CONCAT71(in_register_00000011, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar25 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
      if (*(long*)( param_2 + 8 ) == 0) {
         uVar35 = (ulong)uVar25;
         uVar24 = uVar35 * 4;
         uVar39 = uVar35 * 8;
         uVar23 = Memory::alloc_static(uVar24, false);
         *(undefined8*)( param_2 + 0x10 ) = uVar23;
         __s_00 = (void*)Memory::alloc_static(uVar39, false);
         *(void**)( param_2 + 8 ) = __s_00;
         if (uVar25 != 0) {
            __s = *(void**)( param_2 + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
               uVar24 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
                  uVar24 = uVar24 + 1;
               }
 while ( uVar35 != uVar24 );
            }
 else {
               memset(__s, 0, uVar24);
               memset(__s_00, 0, uVar39);
            }

            goto LAB_0011ec5f;
         }

         iVar26 = *(int*)( param_2 + 0x2c );
         if (__s_00 == (void*)0x0) goto LAB_0011ec6f;
         if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011eed8;
         LAB_0011ec91:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
            plVar22 = (long*)0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0011ee89;
         }

         _resize_and_rehash((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
      }
 else {
         LAB_0011ec5f:iVar26 = *(int*)( param_2 + 0x2c );
         if (iVar26 != 0) {
            LAB_0011eed8:uVar21 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
            uVar33 = String::hash();
            uVar24 = CONCAT44(0, uVar21);
            lVar34 = *(long*)( param_2 + 0x10 );
            uVar32 = 1;
            if (uVar33 != 0) {
               uVar32 = uVar33;
            }

            uVar38 = 0;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar32 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar24;
            lVar30 = SUB168(auVar7 * auVar15, 8);
            uVar33 = *(uint*)( lVar34 + lVar30 * 4 );
            uVar27 = SUB164(auVar7 * auVar15, 8);
            if (uVar33 != 0) {
               do {
                  if (uVar32 == uVar33) {
                     cVar20 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ), pSVar28);
                     if (cVar20 != '\0') {
                        Ref<Resource>::operator =((Ref<Resource>*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 ) + 0x18 ), (Ref*)*in_RCX);
                        plVar22 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                        goto LAB_0011ee89;
                     }

                     lVar34 = *(long*)( param_2 + 0x10 );
                  }

                  uVar38 = uVar38 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar24;
                  lVar30 = SUB168(auVar8 * auVar16, 8);
                  uVar33 = *(uint*)( lVar34 + lVar30 * 4 );
                  uVar27 = SUB164(auVar8 * auVar16, 8);
               }
 while ( ( uVar33 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar33 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar24,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar21 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar24,uVar38 <= SUB164(auVar10 * auVar18, 8) );
            }

            iVar26 = *(int*)( param_2 + 0x2c );
         }

         LAB_0011ec6f:if ((float)uVar25 * __LC36 < (float)( iVar26 + 1 )) goto LAB_0011ec91;
      }

      local_58 = 0;
      if (*(long*)pSVar28 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar28);
      }

      local_50[0] = (Object*)0x0;
      Ref<Resource>::operator =((Ref<Resource>*)local_50, (Ref*)*in_RCX);
      plVar22 = (long*)operator_new(0x20, "");
      plVar22[2] = 0;
      *plVar22 = 0;
      plVar22[1] = 0;
      if (local_58 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( plVar22 + 2 ), (CowData*)&local_58);
      }

      pOVar19 = local_50[0];
      plVar22[3] = 0;
      if (local_50[0] != (Object*)0x0) {
         plVar22[3] = (long)local_50[0];
         cVar20 = RefCounted::reference();
         if (cVar20 == '\0') {
            plVar22[3] = 0;
         }

         cVar20 = RefCounted::unreference();
         if (( cVar20 != '\0' ) && ( cVar20 = predelete_handler(pOVar19) ),cVar20 != '\0') {
            ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
            Memory::free_static(pOVar19, false);
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      puVar1 = *(undefined8**)( param_2 + 0x20 );
      if (puVar1 == (undefined8*)0x0) {
         *(long**)( param_2 + 0x18 ) = plVar22;
         *(long**)( param_2 + 0x20 ) = plVar22;
      }
 else if (in_R8B == '\0') {
         *puVar1 = plVar22;
         plVar22[1] = (long)puVar1;
         *(long**)( param_2 + 0x20 ) = plVar22;
      }
 else {
         lVar2 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar2 + 8 ) = plVar22;
         *plVar22 = lVar2;
         *(long**)( param_2 + 0x18 ) = plVar22;
      }

      uVar21 = String::hash();
      lVar2 = *(long*)( param_2 + 0x10 );
      uVar25 = 1;
      if (uVar21 != 0) {
         uVar25 = uVar21;
      }

      uVar39 = (ulong)uVar25;
      uVar21 = ( &hash_table_size_primes )[*(uint*)( param_2 + 0x28 )];
      uVar24 = CONCAT44(0, uVar21);
      lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar39 * lVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar24;
      lVar29 = SUB168(auVar3 * auVar11, 8);
      lVar30 = *(long*)( param_2 + 8 );
      puVar31 = (uint*)( lVar2 + lVar29 * 4 );
      iVar26 = SUB164(auVar3 * auVar11, 8);
      uVar32 = *puVar31;
      plVar37 = plVar22;
      if (uVar32 != 0) {
         uVar33 = 0;
         plVar36 = plVar22;
         do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar32 * lVar34;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar24;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( iVar26 + uVar21 ) - SUB164(auVar4 * auVar12, 8)) * lVar34;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar24;
            local_98 = SUB164(auVar5 * auVar13, 8);
            plVar37 = plVar36;
            if (local_98 < uVar33) {
               *puVar31 = (uint)uVar39;
               uVar39 = (ulong)uVar32;
               puVar1 = (undefined8*)( lVar30 + lVar29 * 8 );
               plVar37 = (long*)*puVar1;
               *puVar1 = plVar36;
               uVar33 = local_98;
            }

            uVar25 = (uint)uVar39;
            uVar33 = uVar33 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(iVar26 + 1) * lVar34;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar24;
            lVar29 = SUB168(auVar6 * auVar14, 8);
            puVar31 = (uint*)( lVar2 + lVar29 * 4 );
            iVar26 = SUB164(auVar6 * auVar14, 8);
            uVar32 = *puVar31;
            plVar36 = plVar37;
         }
 while ( uVar32 != 0 );
      }

      *(long**)( lVar30 + lVar29 * 8 ) = plVar37;
      *puVar31 = uVar25;
      *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
      LAB_0011ee89:*(long**)param_1 = plVar22;
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<int, HashMap<String, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > >
   >, HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > > > > >::operator[](int const&) */
   undefined1 * __thiscallHashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref < Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>> >> ::operator [](HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref < Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>> >> *this, int, *param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      void *__s;
      void *pvVar3;
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
      undefined1(*pauVar36)[16];
      uint uVar37;
      uint uVar38;
      uint uVar39;
      ulong uVar40;
      undefined8 uVar41;
      void *__s_00;
      undefined1(*pauVar42)[16];
      long lVar43;
      int *piVar44;
      ulong uVar45;
      int iVar46;
      long lVar47;
      long lVar48;
      long lVar49;
      ulong uVar50;
      undefined8 uVar51;
      uint uVar52;
      ulong uVar53;
      ulong uVar54;
      uint uVar55;
      uint uVar56;
      undefined1(*pauVar57)[16];
      void *local_70;
      local_70 = *(void**)( this + 8 );
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      uVar38 = *param_1;
      uVar39 = ( &hash_table_size_primes )[uVar40];
      uVar53 = CONCAT44(0, uVar39);
      if (local_70 == (void*)0x0) {
         uVar40 = uVar53 * 4;
         uVar50 = uVar53 * 8;
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         local_70 = (void*)Memory::alloc_static(uVar50, false);
         *(void**)( this + 8 ) = local_70;
         if (uVar39 == 0) {
            iVar46 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
            if (local_70 == (void*)0x0) goto LAB_0011f303;
         }
 else {
            pvVar3 = *(void**)( this + 0x10 );
            if (( pvVar3 < (void*)( (long)local_70 + uVar50 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar53 != uVar40 );
               iVar46 = *(int*)( this + 0x2c );
               uVar38 = *param_1;
            }
 else {
               memset(pvVar3, 0, uVar40);
               memset(local_70, 0, uVar50);
               iVar46 = *(int*)( this + 0x2c );
               uVar38 = *param_1;
            }

         }

         if (iVar46 != 0) {
            uVar40 = ( ulong ) * (uint*)( this + 0x28 );
            lVar43 = *(long*)( this + 0x10 );
            goto LAB_0011f73b;
         }

      }
 else {
         iVar46 = *(int*)( this + 0x2c );
         if (iVar46 != 0) {
            uVar50 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
            uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
            uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
            uVar55 = uVar37 ^ uVar37 >> 0x10;
            if (uVar37 == uVar37 >> 0x10) {
               uVar55 = 1;
               uVar45 = uVar50;
            }
 else {
               uVar45 = uVar55 * uVar50;
            }

            lVar43 = *(long*)( this + 0x10 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar45;
            lVar47 = SUB168(auVar4 * auVar20, 8);
            uVar37 = *(uint*)( lVar43 + lVar47 * 4 );
            uVar56 = SUB164(auVar4 * auVar20, 8);
            if (uVar37 != 0) {
               uVar52 = 0;
               do {
                  if (( uVar55 == uVar37 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_70 + lVar47 * 8 ) + 0x10 ) )) {
                     return (undefined1*)( *(long*)( (long)local_70 + (ulong)uVar56 * 8 ) + 0x18 );
                  }

                  uVar52 = uVar52 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( uVar56 + 1 ) * uVar50;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar53;
                  lVar47 = SUB168(auVar5 * auVar21, 8);
                  uVar37 = *(uint*)( lVar43 + lVar47 * 4 );
                  uVar56 = SUB164(auVar5 * auVar21, 8);
               }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar50,auVar22._8_8_ = 0,auVar22._0_8_ = uVar53,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar56 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar50,auVar23._8_8_ = 0,auVar23._0_8_ = uVar53,uVar52 <= SUB164(auVar7 * auVar23, 8) );
            }

            LAB_0011f73b:uVar50 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
            uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
            uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
            uVar37 = uVar39 ^ uVar39 >> 0x10;
            if (uVar39 == uVar39 >> 0x10) {
               uVar37 = 1;
               uVar45 = uVar50;
            }
 else {
               uVar45 = uVar37 * uVar50;
            }

            uVar54 = CONCAT44(0, ( &hash_table_size_primes )[uVar40]);
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar54;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            lVar47 = SUB168(auVar16 * auVar32, 8);
            uVar39 = *(uint*)( lVar43 + lVar47 * 4 );
            uVar55 = SUB164(auVar16 * auVar32, 8);
            if (uVar39 != 0) {
               uVar56 = 0;
               do {
                  if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_70 + lVar47 * 8 ) + 0x10 ) == uVar38 )) {
                     lVar43 = *(long*)( (long)local_70 + (ulong)uVar55 * 8 );
                     uVar38 = *(uint*)( lVar43 + 0x40 );
                     uVar39 = ( &hash_table_size_primes )[uVar38];
                     if (( *(int*)( lVar43 + 0x44 ) == 0 ) || ( *(long*)( lVar43 + 0x20 ) == 0 )) goto LAB_0011f834;
                     lVar47 = 0;
                     if (uVar39 != 0) goto LAB_0011fa80;
                     *(undefined4*)( lVar43 + 0x44 ) = 0;
                     *(undefined1(*) [16])( lVar43 + 0x30 ) = (undefined1[16])0x0;
                     goto LAB_0011f839;
                  }

                  uVar56 = uVar56 + 1;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( uVar55 + 1 ) * uVar50;
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uVar54;
                  lVar47 = SUB168(auVar17 * auVar33, 8);
                  uVar39 = *(uint*)( lVar43 + lVar47 * 4 );
                  uVar55 = SUB164(auVar17 * auVar33, 8);
               }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar50,auVar34._8_8_ = 0,auVar34._0_8_ = uVar54,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( ( &hash_table_size_primes )[uVar40] + uVar55 ) - SUB164(auVar18 * auVar34, 8) ) * uVar50,auVar35._8_8_ = 0,auVar35._0_8_ = uVar54,uVar56 <= SUB164(auVar19 * auVar35, 8) );
            }

         }

      }

      LAB_0011f303:if ((float)uVar53 * __LC36 < (float)( iVar46 + 1 )) {
         uVar38 = *(uint*)( this + 0x28 );
         if (uVar38 == 0x1c) {
            pauVar42 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0011f71f;
         }

         uVar40 = ( ulong )(uVar38 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar39 = ( &hash_table_size_primes )[uVar38];
         if (uVar38 + 1 < 2) {
            uVar40 = 2;
         }

         uVar38 = ( &hash_table_size_primes )[uVar40];
         uVar50 = (ulong)uVar38;
         *(int*)( this + 0x28 ) = (int)uVar40;
         pvVar3 = *(void**)( this + 0x10 );
         uVar40 = uVar50 * 4;
         uVar53 = uVar50 * 8;
         uVar41 = Memory::alloc_static(uVar40, false);
         *(undefined8*)( this + 0x10 ) = uVar41;
         __s_00 = (void*)Memory::alloc_static(uVar53, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar38 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar53 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
               uVar40 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
                  uVar40 = uVar40 + 1;
               }
 while ( uVar50 != uVar40 );
            }
 else {
               memset(__s, 0, uVar40);
               memset(__s_00, 0, uVar53);
            }

         }

         if (uVar39 != 0) {
            uVar40 = 0;
            do {
               uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
               if (uVar38 != 0) {
                  lVar43 = *(long*)( this + 0x10 );
                  uVar56 = 0;
                  uVar37 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
                  uVar53 = CONCAT44(0, uVar37);
                  lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar38 * lVar47;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar53;
                  lVar48 = SUB168(auVar8 * auVar24, 8);
                  puVar1 = (uint*)( lVar43 + lVar48 * 4 );
                  iVar46 = SUB164(auVar8 * auVar24, 8);
                  uVar55 = *puVar1;
                  uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
                  while (uVar55 != 0) {
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = (ulong)uVar55 * lVar47;
                     auVar25._8_8_ = 0;
                     auVar25._0_8_ = uVar53;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(( uVar37 + iVar46 ) - SUB164(auVar9 * auVar25, 8)) * lVar47;
                     auVar26._8_8_ = 0;
                     auVar26._0_8_ = uVar53;
                     uVar52 = SUB164(auVar10 * auVar26, 8);
                     uVar51 = uVar41;
                     if (uVar52 < uVar56) {
                        *puVar1 = uVar38;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar48 * 8 );
                        uVar51 = *puVar2;
                        *puVar2 = uVar41;
                        uVar38 = uVar55;
                        uVar56 = uVar52;
                     }

                     uVar56 = uVar56 + 1;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(iVar46 + 1) * lVar47;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar53;
                     lVar48 = SUB168(auVar11 * auVar27, 8);
                     puVar1 = (uint*)( lVar43 + lVar48 * 4 );
                     iVar46 = SUB164(auVar11 * auVar27, 8);
                     uVar41 = uVar51;
                     uVar55 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar48 * 8 ) = uVar41;
                  *puVar1 = uVar38;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar40 = uVar40 + 1;
            }
 while ( uVar39 != uVar40 );
            Memory::free_static(local_70, false);
            Memory::free_static(pvVar3, false);
         }

      }

      uVar40 = 1;
      iVar46 = *param_1;
      do {
         if (0x16 < ( uint )(&hash_table_size_primes)[uVar40]) goto LAB_0011f568;
         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != 0x1d );
      uVar40 = 0;
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      LAB_0011f568:pauVar42 = (undefined1(*) [16])operator_new(0x48, "");
      *(int*)pauVar42[1] = iVar46;
      *(undefined8*)pauVar42[4] = 0;
      *pauVar42 = (undefined1[16])0x0;
      pauVar42[2] = (undefined1[16])0x0;
      pauVar42[3] = (undefined1[16])0x0;
      lVar43 = 1;
      if (5 < ( uint )(&hash_table_size_primes)[uVar40 & 0xffffffff]) {
         do {
            if (( uint )(&hash_table_size_primes)[uVar40 & 0xffffffff] <= ( uint )(&hash_table_size_primes)[lVar43]) {
               *(int*)pauVar42[4] = (int)lVar43;
               puVar2 = *(undefined8**)( this + 0x20 );
               goto joined_r0x0011f8ca;
            }

            lVar43 = lVar43 + 1;
         }
 while ( lVar43 != 0x1d );
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      puVar2 = *(undefined8**)( this + 0x20 );
      joined_r0x0011f8ca:if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
      }
 else {
         *puVar2 = pauVar42;
         *(undefined8**)( *pauVar42 + 8 ) = puVar2;
      }

      *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
      uVar38 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
      uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
      uVar38 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar40 = 1;
         uVar38 = 1;
      }
 else {
         uVar40 = (ulong)uVar38;
      }

      uVar55 = 0;
      lVar43 = *(long*)( this + 0x10 );
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = ( &hash_table_size_primes )[*(uint*)( this + 0x28 )];
      uVar53 = CONCAT44(0, uVar39);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar40 * lVar47;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar53;
      lVar49 = SUB168(auVar12 * auVar28, 8);
      lVar48 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar43 + lVar49 * 4 );
      iVar46 = SUB164(auVar12 * auVar28, 8);
      uVar37 = *puVar1;
      pauVar36 = pauVar42;
      while (uVar37 != 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar37 * lVar47;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar53;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(( iVar46 + uVar39 ) - SUB164(auVar13 * auVar29, 8)) * lVar47;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar53;
         uVar56 = SUB164(auVar14 * auVar30, 8);
         pauVar57 = pauVar36;
         if (uVar56 < uVar55) {
            *puVar1 = uVar38;
            puVar2 = (undefined8*)( lVar48 + lVar49 * 8 );
            pauVar57 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar36;
            uVar38 = uVar37;
            uVar55 = uVar56;
         }

         uVar55 = uVar55 + 1;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = ( ulong )(iVar46 + 1) * lVar47;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar53;
         lVar49 = SUB168(auVar15 * auVar31, 8);
         puVar1 = (uint*)( lVar43 + lVar49 * 4 );
         iVar46 = SUB164(auVar15 * auVar31, 8);
         pauVar36 = pauVar57;
         uVar37 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar48 + lVar49 * 8 ) = pauVar36;
      *puVar1 = uVar38;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      LAB_0011f71f:return pauVar42[1] + 8;
      LAB_0011fa80:do {
         piVar44 = (int*)( *(long*)( lVar43 + 0x28 ) + lVar47 );
         if (*piVar44 != 0) {
            *piVar44 = 0;
            pvVar3 = *(void**)( *(long*)( lVar43 + 0x20 ) + lVar47 * 2 );
            Ref<Resource>::unref((Ref<Resource>*)( (long)pvVar3 + 0x18 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
            Memory::free_static(pvVar3, false);
            *(undefined8*)( *(long*)( lVar43 + 0x20 ) + lVar47 * 2 ) = 0;
         }

         lVar47 = lVar47 + 4;
      }
 while ( (ulong)uVar39 << 2 != lVar47 );
      uVar38 = *(uint*)( lVar43 + 0x40 );
      *(undefined4*)( lVar43 + 0x44 ) = 0;
      *(undefined1(*) [16])( lVar43 + 0x30 ) = (undefined1[16])0x0;
      uVar39 = ( &hash_table_size_primes )[uVar38];
      LAB_0011f834:if (uVar39 < 0x17) {
         LAB_0011f839:if (uVar38 != 0x1c) {
            uVar40 = (ulong)uVar38;
            do {
               uVar39 = (int)uVar40 + 1;
               uVar40 = (ulong)uVar39;
               if (0x16 < ( uint )(&hash_table_size_primes)[uVar40]) {
                  if (uVar39 != uVar38) {
                     if (*(long*)( lVar43 + 0x20 ) == 0) {
                        *(uint*)( lVar43 + 0x40 ) = uVar39;
                     }
 else {
                        HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>::_resize_and_rehash((HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>*)( lVar43 + 0x18 ), uVar39);
                     }

                  }

                  goto LAB_0011f889;
               }

            }
 while ( uVar39 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_0011f889:pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar55 * 8 );
      goto LAB_0011f71f;
   }

   /* CowData<Ref<ResourceFormatLoader> >::_realloc(long) */
   undefined8 CowData<Ref<ResourceFormatLoader>>::_realloc(CowData<Ref<ResourceFormatLoader>> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<Ref<ResourceFormatLoader> >::resize<false>(long) */
   undefined8 CowData<Ref<ResourceFormatLoader>>::resize<false>(CowData<Ref<ResourceFormatLoader>> *this, long param_1) {
      long *plVar1;
      Object *pOVar2;
      code *pcVar3;
      char cVar4;
      undefined8 uVar5;
      undefined8 *puVar6;
      long lVar7;
      long lVar8;
      ulong uVar9;
      undefined8 *puVar10;
      long lVar11;
      if (param_1 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         return 0x1f;
      }

      if (*(long*)this == 0) {
         if (param_1 == 0) {
            return 0;
         }

         _copy_on_write(this);
         lVar7 = 0;
         lVar8 = 0;
      }
 else {
         lVar7 = *(long*)( *(long*)this + -8 );
         if (param_1 == lVar7) {
            return 0;
         }

         if (param_1 == 0) {
            _unref(this);
            return 0;
         }

         _copy_on_write(this);
         lVar8 = lVar7 * 8;
         if (lVar8 != 0) {
            uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
         }

      }

      if (param_1 * 8 == 0) {
         LAB_0011fe70:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
         return 6;
      }

      uVar9 = param_1 * 8 - 1;
      uVar9 = uVar9 >> 1 | uVar9;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      uVar9 = uVar9 | uVar9 >> 0x20;
      lVar11 = uVar9 + 1;
      if (lVar11 == 0) goto LAB_0011fe70;
      if (param_1 <= lVar7) {
         lVar7 = *(long*)this;
         uVar9 = param_1;
         while (lVar7 != 0) {
            if (*(ulong*)( lVar7 + -8 ) <= uVar9) {
               LAB_0011fd1a:if (lVar11 != lVar8) {
                  uVar5 = _realloc(this, lVar11);
                  if ((int)uVar5 != 0) {
                     return uVar5;
                  }

                  lVar7 = *(long*)this;
                  if (lVar7 == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

               }

               *(long*)( lVar7 + -8 ) = param_1;
               return 0;
            }

            while (plVar1 = (long*)( lVar7 + uVar9 * 8 ),*plVar1 == 0) {
               uVar9 = uVar9 + 1;
               if (*(ulong*)( lVar7 + -8 ) <= uVar9) goto LAB_0011fd1a;
            }
;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar2 = (Object*)*plVar1;
               cVar4 = predelete_handler(pOVar2);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            uVar9 = uVar9 + 1;
            lVar7 = *(long*)this;
         }
;
         goto LAB_0011fce0;
      }

      if (lVar11 == lVar8) {
         LAB_0011fdeb:puVar10 = *(undefined8**)this;
         if (puVar10 == (undefined8*)0x0) {
            LAB_0011fce0:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar7 = puVar10[-1];
         if (param_1 <= lVar7) goto LAB_0011fdcb;
      }
 else {
         if (lVar7 != 0) {
            uVar5 = _realloc(this, lVar11);
            if ((int)uVar5 != 0) {
               return uVar5;
            }

            goto LAB_0011fdeb;
         }

         puVar6 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
         if (puVar6 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar10 = puVar6 + 2;
         *puVar6 = 1;
         puVar6[1] = 0;
         *(undefined8**)this = puVar10;
         lVar7 = 0;
      }

      memset(puVar10 + lVar7, 0, ( param_1 - lVar7 ) * 8);
      LAB_0011fdcb:puVar10[-1] = param_1;
      return 0;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* ResourceLoader::loader */
   void ResourceLoader::_GLOBAL__sub_I_loader(void) {
      undefined8 uVar1;
      __cxa_atexit(__tcf_0, 0, &__dso_handle);
      thread_load_mutex._0_16_ = (undefined1[16])0x0;
      thread_load_mutex._16_16_ = (undefined1[16])0x0;
      thread_load_mutex._32_8_ = 0;
      __cxa_atexit(SafeBinaryMutex<1>::~SafeBinaryMutex, thread_load_mutex, &__dso_handle);
      uVar1 = _LC3;
      thread_load_tasks._8_16_ = (undefined1[16])0x0;
      thread_load_tasks._40_8_ = _LC3;
      thread_load_tasks._24_16_ = (undefined1[16])0x0;
      __cxa_atexit(HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>> > ::~HashMap, thread_load_tasks, &__dso_handle);
      user_load_tokens._40_8_ = uVar1;
      user_load_tokens._8_16_ = (undefined1[16])0x0;
      user_load_tokens._24_16_ = (undefined1[16])0x0;
      __cxa_atexit(HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>> > ::~HashMap, user_load_tokens, &__dso_handle);
      _remapped_list = (undefined1[16])0x0;
      __cxa_atexit(SelfList<Resource>::List::~List, &remapped_list, &__dso_handle);
      translation_remaps._40_8_ = uVar1;
      translation_remaps._8_16_ = (undefined1[16])0x0;
      translation_remaps._24_16_ = (undefined1[16])0x0;
      __cxa_atexit(HashMap<String,Vector < String>, HashMapHasherDefault, HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,Vector<String>>> > ::~HashMap, translation_remaps, &__dso_handle);
      path_remaps._40_8_ = uVar1;
      path_remaps._8_16_ = (undefined1[16])0x0;
      path_remaps._24_16_ = (undefined1[16])0x0;
      __cxa_atexit(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault < String>, DefaultTypedAllocator<HashMapElement<String,String>> > ::~HashMap, path_remaps, &__dso_handle);
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */
   void PropertyInfo::PropertyInfo(void) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* PropertyInfo::~PropertyInfo() */
   void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::~HashMap() */
   void HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>::~HashMap(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, ResourceLoader::LoadToken*, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::LoadToken*> > >::~HashMap() */
   void HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>>::~HashMap(HashMap<String,ResourceLoader::LoadToken*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::LoadToken*>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<int, HashMap<String, Ref<Resource>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > >
   >, HashMapHasherDefault, HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   HashMap<String, Ref<Resource>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Resource> > > > > > >::~HashMap() */
   void HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>>>>::~HashMap(HashMap<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,HashMap<String,Ref<Resource>,HashMapHasherDefault,HashMapComparatorDefault < String>,DefaultTypedAllocator<HashMapElement<String,Ref<Resource>>>>>> > *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* SafeBinaryMutex<1>::TLSData::~TLSData() */
   void SafeBinaryMutex<1>::TLSData::~TLSData(TLSData *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* core_bind::Semaphore::~Semaphore() */
   void core_bind::Semaphore::~Semaphore(Semaphore *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* ResourceFormatLoader::~ResourceFormatLoader() */
   void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* SelfList<Resource>::List::~List() */
   void SelfList<Resource>::List::~List(List *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* SafeBinaryMutex<1>::~SafeBinaryMutex() */
   void SafeBinaryMutex<1>::~SafeBinaryMutex(SafeBinaryMutex<1> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Resource, void, Callable const&, unsigned
   int>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Resource,void,Callable_const&,unsigned_int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<core_bind::Semaphore, void, int>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<core_bind::Semaphore,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<core_bind::Semaphore,void,int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* Vector<String>::~Vector() */
   void Vector<String>::~Vector(Vector<String> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::~HashMap() */
   void HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>::~HashMap(HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */
   void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HashMap<String, ResourceLoader::ThreadLoadTask, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   ResourceLoader::ThreadLoadTask> > >::~HashMap() */
   void HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>>::~HashMap(HashMap<String,ResourceLoader::ThreadLoadTask,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,ResourceLoader::ThreadLoadTask>>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* ResourceLoader::ThreadLoadTask::~ThreadLoadTask() */
   void ResourceLoader::ThreadLoadTask::~ThreadLoadTask(ThreadLoadTask *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<Variant, DefaultAllocator>::~List() */
   void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<StringName, DefaultAllocator>::~List() */
   void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* ResourceLoader::ThreadLoadTask::ThreadLoadTask(ResourceLoader::ThreadLoadTask const&) */
   void ResourceLoader::ThreadLoadTask::ThreadLoadTask(ThreadLoadTask *this, ThreadLoadTask *param_1) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

