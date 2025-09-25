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
/* ResourceSaver::set_uid(String const&, long) */ulong ResourceSaver::set_uid(String *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   if (*(long*)param_1 == 0) {
      LAB_00100500:_err_print_error("set_uid", "core/io/resource_saver.cpp", 0x9f, "Condition \"path.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER", "Can\'t update UID to empty path. Provide non-empty path.", 0, 0);
      uVar3 = 0x1f;
      joined_r0x0010053e:if (local_38 == 0) goto LAB_001004e0;
   }
 else {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00100483;
         LOCK();
         lVar2 = *plVar1;
         bVar5 = lVar4 == lVar2;
         if (bVar5) {
            *plVar1 = lVar4 + 1;
            lVar2 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar2 != -1) {
         local_38 = *(long*)param_1;
      }

      LAB_00100483:if (( local_38 == 0 ) || ( *(uint*)( local_38 + -8 ) < 2 )) goto LAB_00100500;
      lVar4 = 0;
      uVar3 = 0xf;
      if (0 < saver_count) {
         do {
            uVar3 = ( **(code**)( *(long*)( &saver )[lVar4] + 0x158 ) )((long*)( &saver )[lVar4], &local_38, param_2);
            if ((int)uVar3 == 0) break;
            lVar4 = lVar4 + 1;
         }
 while ( (int)lVar4 < saver_count );
         goto joined_r0x0010053e;
      }

   }

   lVar4 = local_38;
   LOCK();
   plVar1 = (long*)( local_38 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void*)( lVar4 + -0x10 ), false);
      uVar3 = uVar3 & 0xffffffff;
   }

   LAB_001004e0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceSaver::set_save_callback(void (*)(Ref<Resource>, String const&)) */void ResourceSaver::set_save_callback(_func_void_Ref_String_ptr *param_1) {
   save_callback = param_1;
   return;
}
/* ResourceSaver::get_recognized_extensions(Ref<Resource> const&, List<String, DefaultAllocator>*)
    */undefined1[16];ResourceSaver::get_recognized_extensions(Ref *param_1, List *param_2) {
   undefined8 *puVar1;
   undefined1 auVar2[16];
   undefined8 in_RAX;
   undefined8 in_RDX;
   long lVar3;
   undefined1 auVar4[16];
   ulong uStack_30;
   auVar4._8_8_ = in_RDX;
   auVar4._0_8_ = in_RAX;
   if (*(long*)param_1 != 0) {
      lVar3 = 0;
      if (0 < saver_count) {
         do {
            puVar1 = &saver + lVar3;
            lVar3 = lVar3 + 1;
            auVar4 = ( **(code**)( *(long*)*puVar1 + 0x168 ) )((long*)*puVar1, param_1, param_2);
         }
 while ( (int)lVar3 < saver_count );
      }

      return auVar4;
   }

   _err_print_error("get_recognized_extensions", "core/io/resource_saver.cpp", 0xb2, "Condition \"p_resource.is_null()\" is true.", "It\'s not a reference to a valid Resource object.", 0);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uStack_30;
   return auVar2 << 0x40;
}
/* ResourceSaver::add_resource_format_saver(Ref<ResourceFormatSaver>, bool) */ulong ResourceSaver::add_resource_format_saver(long *param_1, char param_2) {
   Object *pOVar1;
   char cVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   long *plVar6;
   Object *pOVar7;
   bool bVar8;
   pOVar1 = (Object*)*param_1;
   if (pOVar1 == (Object*)0x0) {
      _err_print_error("add_resource_format_saver", "core/io/resource_saver.cpp", 0xb9, "Condition \"p_format_saver.is_null()\" is true.", "It\'s not a reference to a valid ResourceFormatSaver object.", 0);
      return 0;
   }

   uVar4 = (ulong)saver_count;
   if (0x3f < (int)saver_count) {
      uVar4 = _err_print_error("add_resource_format_saver", "core/io/resource_saver.cpp", 0xba, "Condition \"saver_count >= MAX_SAVERS\" is true.", 0, 0);
      return uVar4;
   }

   if (param_2 == '\0') {
      lVar5 = (long)(int)saver_count;
      saver_count = saver_count + 1;
      pOVar7 = ( &saver )[lVar5];
      if (pOVar1 == pOVar7) {
         return uVar4;
      }

      ( &saver )[lVar5] = pOVar1;
      uVar4 = RefCounted::reference();
      if ((char)uVar4 == '\0') {
         ( &saver )[lVar5] = (Object*)0x0;
      }

      if (pOVar7 == (Object*)0x0) {
         return uVar4;
      }

      uVar4 = RefCounted::unreference();
      if ((char)uVar4 == '\0') {
         return uVar4;
      }

      uVar4 = predelete_handler(pOVar7);
      if ((char)uVar4 == '\0') {
         return uVar4;
      }

      if (*(code**)( *(long*)pOVar7 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
         bVar8 = StringName::configured != '\0';
         *(undefined***)pOVar7 = &PTR__initialize_classv_0010e450;
         if (( ( ( ( bVar8 ) && ( ( *(long*)( pOVar7 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar7 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( pOVar7 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar7 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) ) ) && ( *(long*)( pOVar7 + 0x180 ) != 0 )) {
            StringName::unref();
         }

         *(undefined***)pOVar7 = &PTR__initialize_classv_0010e2f0;
         Object::~Object(pOVar7);
      }
 else {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      }

      uVar4 = Memory::free_static(pOVar7, false);
      return uVar4;
   }

   if ((int)saver_count < 1) {
      pOVar7 = saver;
      if (pOVar1 == saver) goto LAB_0010080b;
      LAB_00100977:saver = pOVar1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         saver = (Object*)0x0;
      }

   }
 else {
      lVar5 = (long)(int)saver_count;
      uVar3 = saver_count - 1;
      plVar6 = (long*)( &saver + lVar5 );
      do {
         while (true) {
            pOVar1 = (Object*)plVar6[-1];
            pOVar7 = (Object*)*plVar6;
            if (pOVar1 != pOVar7) break;
            LAB_00100690:plVar6 = plVar6 + -1;
            if (plVar6 == (long*)( &DAT_00109738 + ( lVar5 - (ulong)uVar3 ) * 8 )) goto LAB_001007d0;
         }
;
         *plVar6 = (long)pOVar1;
         if (( pOVar1 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
            *plVar6 = 0;
         }

         if (( ( pOVar7 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00100690;
         if (*(code**)( *(long*)pOVar7 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
            bVar8 = StringName::configured != '\0';
            *(undefined***)pOVar7 = &PTR__initialize_classv_0010e450;
            if (( ( ( bVar8 ) && ( ( *(long*)( pOVar7 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar7 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( pOVar7 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar7 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( pOVar7 + 0x180 ) != 0 ) ) )) {
               StringName::unref();
            }

            *(undefined***)pOVar7 = &PTR__initialize_classv_0010e2f0;
            Object::~Object(pOVar7);
         }
 else {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         }

         plVar6 = plVar6 + -1;
         Memory::free_static(pOVar7, false);
      }
 while ( plVar6 != (long*)( &DAT_00109738 + ( lVar5 - (ulong)uVar3 ) * 8 ) );
      LAB_001007d0:pOVar1 = (Object*)*param_1;
      if (pOVar1 == saver) goto LAB_0010080b;
      pOVar7 = saver;
      saver = pOVar1;
      if (pOVar1 != (Object*)0x0) goto LAB_00100977;
   }

   if (( ( pOVar7 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
      if (*(code**)( *(long*)pOVar7 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
         bVar8 = StringName::configured != '\0';
         *(undefined***)pOVar7 = &PTR__initialize_classv_0010e450;
         if (( ( ( bVar8 ) && ( ( *(long*)( pOVar7 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar7 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( pOVar7 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( ( *(long*)( pOVar7 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( pOVar7 + 0x180 ) != 0 ) ) ) ) )) {
            StringName::unref();
         }

         *(undefined***)pOVar7 = &PTR__initialize_classv_0010e2f0;
         Object::~Object(pOVar7);
      }
 else {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      }

      Memory::free_static(pOVar7, false);
   }

   LAB_0010080b:saver_count = saver_count + 1;
   return (ulong)saver_count;
}
/* ResourceSaver::remove_resource_format_saver(Ref<ResourceFormatSaver>) */ulong ResourceSaver::remove_resource_format_saver(long *param_1) {
   Object *this;
   Object *pOVar1;
   uint uVar2;
   char cVar3;
   ulong uVar4;
   int iVar5;
   long *plVar6;
   uint uVar7;
   bool bVar8;
   if (*param_1 == 0) {
      _err_print_error("remove_resource_format_saver", "core/io/resource_saver.cpp", 200, "Condition \"p_format_saver.is_null()\" is true.", "It\'s not a reference to a valid ResourceFormatSaver object.", 0);
      return 0;
   }

   uVar4 = (ulong)saver_count;
   uVar7 = 0;
   plVar6 = &saver;
   if (0 < (int)saver_count) {
      do {
         if (*plVar6 == *param_1) {
            if ((int)uVar7 < (int)saver_count) {
               iVar5 = saver_count - 1;
               plVar6 = &saver + (int)uVar7;
               if ((int)uVar7 < iVar5) goto LAB_00100b9f;
               goto LAB_00100d00;
            }

            break;
         }

         uVar7 = uVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( uVar7 != saver_count );
   }

   uVar4 = _err_print_error("remove_resource_format_saver", "core/io/resource_saver.cpp", 0xd2, "Condition \"i >= saver_count\" is true.", 0, 0);
   return uVar4;
   LAB_00100b9f:pOVar1 = (Object*)plVar6[1];
   this(Object * ) * plVar6;
   uVar7 = uVar7 + 1;
   if (pOVar1 == this) {
      LAB_00100b90:uVar2 = (uint)uVar4;
   }
 else {
      *plVar6 = (long)pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *plVar6 = 0;
      }

      uVar4 = (ulong)saver_count;
      if (this == (Object*)0x0) goto LAB_00100b90;
      cVar3 = RefCounted::unreference();
      uVar4 = (ulong)saver_count;
      if (cVar3 == '\0') goto LAB_00100b90;
      cVar3 = predelete_handler(this);
      if (cVar3 != '\0') {
         if (*(code**)( *(long*)this + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
            bVar8 = StringName::configured != '\0';
            *(undefined***)this = &PTR__initialize_classv_0010e450;
            if (( ( ( bVar8 ) && ( ( *(long*)( this + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( this + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( this + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( this + 0x180 ) != 0 ) ) )) {
               StringName::unref();
            }

            *(undefined***)this = &PTR__initialize_classv_0010e2f0;
            Object::~Object(this);
         }
 else {
            ( **(code**)( *(long*)this + 0x140 ) )(this);
         }

         Memory::free_static(this, false);
      }

      uVar4 = (ulong)saver_count;
      uVar2 = saver_count;
   }

   iVar5 = uVar2 - 1;
   plVar6 = plVar6 + 1;
   if (iVar5 <= (int)uVar7) {
      LAB_00100d00:if (( ( &saver )[iVar5] != 0 ) && ( uVar4 = RefCounted::unreference() ),(char)uVar4 != '\0') {
         pOVar1 = (Object*)( &saver )[iVar5];
         uVar4 = predelete_handler(pOVar1);
         if ((char)uVar4 != '\0') {
            if (*(code**)( *(long*)pOVar1 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
               bVar8 = StringName::configured != '\0';
               *(undefined***)pOVar1 = &PTR__initialize_classv_0010e450;
               if (( ( ( bVar8 ) && ( ( *(long*)( pOVar1 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar1 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( pOVar1 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar1 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( pOVar1 + 0x180 ) != 0 ) ) )) {
                  StringName::unref();
               }

               *(undefined***)pOVar1 = &PTR__initialize_classv_0010e2f0;
               Object::~Object(pOVar1);
            }
 else {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            }

            uVar4 = Memory::free_static(pOVar1, false);
         }

      }

      ( &saver )[iVar5] = 0;
      saver_count = saver_count - 1;
      return uVar4;
   }

   goto LAB_00100b9f;
}
/* ResourceSaver::_find_custom_resource_format_saver(String const&) */ResourceSaver * __thiscall
ResourceSaver::_find_custom_resource_format_saver(ResourceSaver *this,String *param_1){
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
   if (0 < saver_count) {
      lVar6 = 0;
      do {
         plVar1 = *(long**)( ( &saver )[lVar6] + 0x98 );
         if (plVar1 != (long*)0x0) {
            if (*(code**)( *plVar1 + 0x90 ) == PlaceHolderScriptInstance::get_script) {
               local_50 = (Object*)plVar1[0x10];
               if (( local_50 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
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
            if (( &saver )[(int)lVar6] == 0) goto LAB_00100fe4;
            *(undefined8*)this = ( &saver )[(int)lVar6];
            cVar4 = RefCounted::reference();
            if (cVar4 != '\0') goto LAB_00100fe4;
            break;
         }

      }
 while ( (int)lVar6 < saver_count );
   }

   *(undefined8*)this = 0;
   LAB_00100fe4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceSaver::get_resource_id_for_path(String const&, bool) */undefined8 ResourceSaver::get_resource_id_for_path(String *param_1, bool param_2) {
   undefined8 uVar1;
   if (save_get_id_for_path != (code*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001010b4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( *save_get_id_for_path )(param_1, param_2);
      return uVar1;
   }

   return 0xffffffffffffffff;
}
/* ResourceSaver::set_get_resource_id_for_path(long (*)(String const&, bool)) */void ResourceSaver::set_get_resource_id_for_path(_func_long_String_ptr_bool *param_1) {
   save_get_id_for_path = param_1;
   return;
}
/* ResourceSaver::save(Ref<Resource> const&, String const&, unsigned int) */int ResourceSaver::save(Ref *param_1, String *param_2, uint param_3) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   bool bVar11;
   Object *local_78;
   long local_70;
   long local_68;
   long local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = *(long*)param_2;
   if (*(long*)param_1 == 0) {
      local_60 = 0;
      plVar1 = (long*)( lVar8 + -0x10 );
      if (lVar8 != 0) {
         do {
            lVar8 = *plVar1;
            if (lVar8 == 0) goto LAB_001014ea;
            LOCK();
            lVar7 = *plVar1;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
               *plVar1 = lVar8 + 1;
               lVar7 = lVar8;
            }

            UNLOCK();
         }
 while ( !bVar11 );
         if (lVar7 != -1) {
            local_60 = *(long*)param_2;
         }

      }

      LAB_001014ea:local_68 = 0;
      local_50 = 0x27;
      local_58 = (Object*)0x10ba00;
      String::parse_latin1((StrRange*)&local_68);
      vformat<String>(&local_58, (StrRange*)&local_68, &local_60);
      _err_print_error(&_LC35, "core/io/resource_saver.cpp", 0x65, "Condition \"p_resource.is_null()\" is true. Returning: ERR_INVALID_PARAMETER", &local_58, 0, 0);
      pOVar2 = local_58;
      if (local_58 != (Object*)0x0) {
         LOCK();
         pOVar3 = local_58 + -0x10;
         *(long*)pOVar3 = *(long*)pOVar3 + -1;
         UNLOCK();
         if (*(long*)pOVar3 == 0) {
            local_58 = (Object*)0x0;
            Memory::free_static(pOVar2 + -0x10, false);
         }

      }

      lVar8 = local_68;
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

      lVar8 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      iVar6 = 0x1f;
      goto LAB_0010122c;
   }

   local_78 = (Object*)0x0;
   if (lVar8 == 0) {
      LAB_00101158:Resource::get_path();
      pOVar3 = local_58;
      pOVar2 = local_78;
      if (local_78 == local_58) {
         if (local_58 != (Object*)0x0) {
            LOCK();
            pOVar2 = local_58 + -0x10;
            *(long*)pOVar2 = *(long*)pOVar2 + -1;
            UNLOCK();
            if (*(long*)pOVar2 == 0) {
               local_58 = (Object*)0x0;
               Memory::free_static(pOVar3 + -0x10, false);
            }

            goto LAB_001011bb;
         }

      }
 else {
         if (local_78 != (Object*)0x0) {
            LOCK();
            local_78 = local_78 + -0x10;
            *(long*)local_78 = *(long*)local_78 + -1;
            UNLOCK();
            if (*(long*)local_78 == 0) {
               local_78 = (Object*)0x0;
               Memory::free_static(pOVar2 + -0x10, false);
            }

         }

         local_78 = local_58;
         LAB_001011bb:if (( local_78 != (Object*)0x0 ) && ( 1 < *(uint*)( local_78 + -8 ) )) goto LAB_00101268;
      }

      iVar6 = 0x1f;
      _err_print_error(&_LC35, "core/io/resource_saver.cpp", 0x6a, "Condition \"path.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER", "Can\'t save resource to empty path. Provide non-empty path or a Resource with non-empty resource_path.", 0);
   }
 else {
      plVar1 = (long*)( lVar8 + -0x10 );
      do {
         lVar8 = *plVar1;
         if (lVar8 == 0) goto LAB_00101145;
         LOCK();
         lVar7 = *plVar1;
         bVar11 = lVar8 == lVar7;
         if (bVar11) {
            *plVar1 = lVar8 + 1;
            lVar7 = lVar8;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar7 != -1) {
         local_78 = *(Object**)param_2;
      }

      LAB_00101145:if (( local_78 == (Object*)0x0 ) || ( *(uint*)( local_78 + -8 ) < 2 )) goto LAB_00101158;
      LAB_00101268:iVar9 = 0;
      iVar6 = 0xf;
      puVar10 = &saver;
      String::get_extension();
      if (0 < saver_count) {
         do {
            cVar5 = ( **(code**)( *(long*)*puVar10 + 0x160 ) )();
            if (( cVar5 != '\0' ) && ( cVar5 = ( **(code**)( *(long*)*puVar10 + 0x170 ) )((long*)*puVar10, param_1, (String*)&local_78) ),cVar5 != '\0') {
               Resource::get_path();
               ProjectSettings::get_singleton();
               ProjectSettings::localize_path((String*)&local_60);
               if (( param_3 & 4 ) != 0) {
                  ( **(code**)( **(long**)param_1 + 0x188 ) )(*(long**)param_1, (String*)&local_60, 0);
               }

               iVar6 = ( **(code**)( *(long*)*puVar10 + 0x150 ) )((long*)*puVar10, param_1, (String*)&local_78, param_3);
               lVar8 = local_60;
               if (iVar6 == 0) {
                  Object::set_edited(SUB81(*(undefined8*)param_1, 0));
                  if (timestamp_on_save != '\0') {
                     lVar8 = FileAccess::get_modified_time((String*)&local_78);
                     pcVar4 = *(code**)( **(long**)param_1 + 0x1b0 );
                     if (pcVar4 == Resource::set_last_modified_time) {
                        ( *(long**)param_1 )[0x33] = lVar8;
                     }
 else {
                        ( *pcVar4 )();
                     }

                  }

                  if (( param_3 & 4 ) != 0) {
                     ( **(code**)( **(long**)param_1 + 0x188 ) )(*(long**)param_1, &local_68, 0);
                  }

                  if (( save_callback != (code*)0x0 ) && ( cVar5 = String::begins_with((char*)&local_78) ),pcVar4 = save_callback,cVar5 != '\0') {
                     local_58 = (Object*)0x0;
                     if (( *(Object**)param_1 != (Object*)0x0 ) && ( local_58 = *(Object**)param_1 ),cVar5 = RefCounted::reference(),cVar5 == '\0') {
                        local_58 = (Object*)0x0;
                     }

                     ( *pcVar4 )(&local_58);
                     if (( ( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar2 = local_58,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

               lVar8 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               lVar8 = local_68;
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

               break;
            }

            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            lVar8 = local_68;
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

         }
 while ( iVar9 < saver_count );
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

   pOVar2 = local_78;
   if (local_78 != (Object*)0x0) {
      LOCK();
      pOVar3 = local_78 + -0x10;
      *(long*)pOVar3 = *(long*)pOVar3 + -1;
      UNLOCK();
      if (*(long*)pOVar3 == 0) {
         local_78 = (Object*)0x0;
         Memory::free_static(pOVar2 + -0x10, false);
      }

   }

   LAB_0010122c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar6;
}
/* ResourceSaver::add_custom_resource_format_saver(String const&) [clone .part.0] */uint ResourceSaver::add_custom_resource_format_saver(String *param_1) {
   long *plVar1;
   ResourceFormatSaver *pRVar2;
   code *pcVar3;
   char cVar4;
   uint uVar5;
   Object *pOVar6;
   long lVar7;
   ResourceFormatSaver *pRVar8;
   long lVar9;
   long in_FS_OFFSET;
   bool bVar10;
   Object *local_88;
   long local_80;
   long local_78;
   long local_70;
   ResourceFormatSaver *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_60 = 0;
   local_68 = (ResourceFormatSaver*)&_LC7;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::load(&local_88, param_1, (StrRange*)&local_70, 1, 0);
   lVar7 = local_70;
   if (local_70 == 0) {
      LAB_00101742:if (local_88 != (Object*)0x0) goto LAB_00101750;
      LAB_0010199f:_err_print_error("add_custom_resource_format_saver", "core/io/resource_saver.cpp", 0xeb, "Condition \"res.is_null()\" is true. Returning: false", 0, 0);
   }
 else {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00101742;
      local_70 = 0;
      Memory::free_static((void*)( lVar7 + -0x10 ), false);
      if (local_88 == (Object*)0x0) goto LAB_0010199f;
      LAB_00101750:pOVar6 = local_88;
      pcVar3 = *(code**)( *(long*)local_88 + 0x58 );
      local_70 = 0;
      local_68 = (ResourceFormatSaver*)0x109ccb;
      local_60 = 6;
      String::parse_latin1((StrRange*)&local_70);
      cVar4 = ( *pcVar3 )(pOVar6);
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

      if (cVar4 != '\0') {
         if (( local_88 == (Object*)0x0 ) || ( pOVar6 = (Object*)__dynamic_cast(local_88, &Object::typeinfo, &Script::typeinfo, 0) ),pOVar6 == (Object*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            pOVar6 = (Object*)0x0;
         }

         ( **(code**)( *(long*)pOVar6 + 0x1f0 ) )((StringName*)&local_80, pOVar6);
         StringName::StringName((StringName*)&local_68, "ResourceFormatSaver", false);
         uVar5 = ClassDB::is_parent_class((StringName*)&local_80, (StringName*)&local_68);
         if (( StringName::configured != 0 ) && ( local_68 != (ResourceFormatSaver*)0x0 )) {
            StringName::unref();
         }

         if ((char)uVar5 == '\0') {
            local_70 = 0;
            plVar1 = (long*)( *(long*)param_1 + -0x10 );
            if (*(long*)param_1 != 0) {
               do {
                  lVar7 = *plVar1;
                  if (lVar7 == 0) goto LAB_00101b06;
                  LOCK();
                  lVar9 = *plVar1;
                  bVar10 = lVar7 == lVar9;
                  if (bVar10) {
                     *plVar1 = lVar7 + 1;
                     lVar9 = lVar7;
                  }

                  UNLOCK();
               }
 while ( !bVar10 );
               if (lVar9 != -1) {
                  local_70 = *(long*)param_1;
               }

            }

            LAB_00101b06:local_78 = 0;
            local_68 = (ResourceFormatSaver*)0x10bb80;
            local_60 = 0x5a;
            String::parse_latin1((StrRange*)&local_78);
            vformat<String>((StringName*)&local_68, (StrRange*)&local_78, (StrRange*)&local_70);
            _err_print_error("add_custom_resource_format_saver", "core/io/resource_saver.cpp", 0xf1, "Condition \"!valid_type\" is true. Returning: false", (StringName*)&local_68, 0, 0);
            pRVar8 = local_68;
            if (local_68 != (ResourceFormatSaver*)0x0) {
               LOCK();
               pRVar2 = local_68 + -0x10;
               *(long*)pRVar2 = *(long*)pRVar2 + -1;
               UNLOCK();
               if (*(long*)pRVar2 == 0) {
                  local_68 = (ResourceFormatSaver*)0x0;
                  Memory::free_static(pRVar8 + -0x10, false);
               }

            }

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

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

            LAB_00101911:if (StringName::configured != 0) {
               LAB_00101915:if (local_80 != 0) {
                  StringName::unref();
               }

            }

         }
 else {
            lVar7 = ClassDB::instantiate((StringName*)&local_80);
            if (lVar7 != 0) {
               pRVar8 = (ResourceFormatSaver*)__dynamic_cast(lVar7, &Object::typeinfo, &ResourceFormatSaver::typeinfo, 0);
               if (pRVar8 == (ResourceFormatSaver*)0x0) {
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               cVar4 = RefCounted::init_ref();
               if (cVar4 == '\0') {
                  pRVar8 = (ResourceFormatSaver*)0x0;
               }

               pcVar3 = *(code**)( *(long*)pRVar8 + 0x90 );
               Variant::Variant((Variant*)local_58, pOVar6);
               ( *pcVar3 )(pRVar8);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               local_68 = pRVar8;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_68 = (ResourceFormatSaver*)0x0;
                  add_resource_format_saver((StringName*)&local_68);
                  cVar4 = RefCounted::unreference();
               }
 else {
                  add_resource_format_saver((StringName*)&local_68);
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     memdelete<ResourceFormatSaver>(pRVar8);
                  }

                  cVar4 = RefCounted::unreference();
               }

               if (cVar4 != '\0') {
                  memdelete<ResourceFormatSaver>(pRVar8);
               }

               goto LAB_00101911;
            }

            StringName::StringName((StringName*)&local_70, (StringName*)&local_80);
            local_68 = (ResourceFormatSaver*)0x10bc18;
            local_78 = 0;
            local_60 = 0x3f;
            String::parse_latin1((StrRange*)&local_78);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_78, (StrRange*)&local_70);
            _err_print_error("add_custom_resource_format_saver", "core/io/resource_saver.cpp", 0xf4, "Parameter \"obj\" is null.", (StringName*)&local_68, 0, 0);
            pRVar8 = local_68;
            if (local_68 != (ResourceFormatSaver*)0x0) {
               LOCK();
               pRVar2 = local_68 + -0x10;
               *(long*)pRVar2 = *(long*)pRVar2 + -1;
               UNLOCK();
               if (*(long*)pRVar2 == 0) {
                  local_68 = (ResourceFormatSaver*)0x0;
                  Memory::free_static(pRVar8 + -0x10, false);
               }

            }

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            uVar5 = (uint)StringName::configured;
            if (StringName::configured != 0) {
               uVar5 = 0;
               if (local_70 != 0) {
                  uVar5 = 0;
                  StringName::unref();
                  goto LAB_00101911;
               }

               goto LAB_00101915;
            }

         }

         cVar4 = RefCounted::unreference();
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

         goto LAB_00101935;
      }

      _err_print_error("add_custom_resource_format_saver", "core/io/resource_saver.cpp", 0xec, "Condition \"!res->is_class(\"Script\")\" is true. Returning: false", 0, 0);
   }

   uVar5 = 0;
   LAB_00101935:if (( ( local_88 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_88 + 0x140 ))(local_88);
   Memory::free_static(local_88, false);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar5;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ResourceSaver::add_custom_resource_format_saver(String const&) */undefined8 ResourceSaver::add_custom_resource_format_saver(String *param_1) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   bool bVar3;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   _find_custom_resource_format_saver((ResourceSaver*)&local_28, param_1);
   if (local_28 == (Object*)0x0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar2 = add_custom_resource_format_saver(param_1);
         return uVar2;
      }

      goto LAB_00101ec7;
   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
         if (*(code**)( *(long*)local_28 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
            bVar3 = StringName::configured != '\0';
            *(undefined***)local_28 = &PTR__initialize_classv_0010e450;
            if (bVar3) {
               if (*(long*)( local_28 + 0x1e0 ) != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') goto LAB_00101e99;
               }

               if (*(long*)( local_28 + 0x1c8 ) != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') goto LAB_00101e99;
               }

               if (*(long*)( local_28 + 0x1b0 ) != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') goto LAB_00101e99;
               }

               if (*(long*)( local_28 + 0x198 ) != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') goto LAB_00101e99;
               }

               if (*(long*)( local_28 + 0x180 ) != 0) {
                  StringName::unref();
               }

            }

            LAB_00101e99:*(undefined***)local_28 = &PTR__initialize_classv_0010e2f0;
            Object::~Object(local_28);
         }
 else {
            ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
         }

         Memory::free_static(local_28, false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   LAB_00101ec7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ResourceSaver::add_custom_savers() */void ResourceSaver::add_custom_savers(void) {
   long *plVar1;
   Object *pOVar2;
   long lVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   long *plVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_80;
   long *local_78;
   long local_70;
   long local_68;
   long local_60;
   Object *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = 0;
   local_58 = (Object*)0x109dd4;
   local_50 = 0x13;
   String::parse_latin1((StrRange*)&local_80);
   local_78 = (long*)0x0;
   ScriptServer::get_global_class_list((List*)&local_78);
   if (( local_78 != (long*)0x0 ) && ( plVar7 = (long*)*local_78 ),plVar7 != (long*)0x0) {
      do {
         lVar3 = *plVar7;
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pOVar2 = *(Object**)( lVar3 + 8 );
            local_60 = 0;
            if (pOVar2 == (Object*)0x0) {
               plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
               if (*(long*)( lVar3 + 0x10 ) != 0) {
                  do {
                     lVar4 = *plVar1;
                     if (lVar4 == 0) goto LAB_00101fab;
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
               local_50 = strlen((char*)pOVar2);
               local_58 = pOVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_00101fab:ScriptServer::get_global_class_native_base((String*)&local_70);
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

         cVar5 = StringName::operator ==((StringName*)&local_70, (String*)&local_80);
         if (cVar5 != '\0') {
            lVar3 = *plVar7;
            if (lVar3 == 0) {
               local_60 = 0;
            }
 else {
               pOVar2 = *(Object**)( lVar3 + 8 );
               local_60 = 0;
               if (pOVar2 == (Object*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar3 + 0x10 ) != 0) {
                     do {
                        lVar4 = *plVar1;
                        if (lVar4 == 0) goto LAB_00102034;
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
                  local_50 = strlen((char*)pOVar2);
                  local_58 = pOVar2;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_00102034:ScriptServer::get_global_class_path((String*)&local_68);
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

            _find_custom_resource_format_saver((ResourceSaver*)&local_58, (String*)&local_68);
            pOVar2 = local_58;
            if (local_58 == (Object*)0x0) {
               add_custom_resource_format_saver((String*)&local_68);
            }
 else {
               cVar5 = RefCounted::unreference();
               if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                  if (*(code**)( *(long*)pOVar2 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
                     bVar8 = StringName::configured != '\0';
                     *(undefined***)pOVar2 = &PTR__initialize_classv_0010e450;
                     if (( ( ( bVar8 ) && ( ( *(long*)( pOVar2 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar2 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( pOVar2 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar2 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( pOVar2 + 0x180 ) != 0 ) ) )) {
                        StringName::unref();
                     }

                     *(undefined***)pOVar2 = &PTR__initialize_classv_0010e2f0;
                     Object::~Object(pOVar2);
                  }
 else {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  }

                  Memory::free_static(pOVar2, false);
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

         plVar7 = (long*)plVar7[1];
      }
 while ( plVar7 != (long*)0x0 );
   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
   lVar3 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar7 = (long*)( local_80 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] [clone .constprop.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
/* CowData<Ref<ResourceFormatSaver> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<ResourceFormatSaver>>::_copy_on_write(CowData<Ref<ResourceFormatSaver>> *this) {
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
/* ResourceFormatSaver::recognize_path(Ref<Resource> const&, String const&) const */ulong ResourceFormatSaver::recognize_path(ResourceFormatSaver *this, Ref *param_1, String *param_2) {
   Object *pOVar1;
   String *pSVar2;
   undefined1 auVar3[16];
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   undefined7 extraout_var;
   undefined4 *puVar7;
   undefined8 uVar8;
   long lVar9;
   long *plVar10;
   code *pcVar11;
   Object *pOVar12;
   ulong uVar13;
   GetTypeInfo<bool,void> *this_00;
   long in_FS_OFFSET;
   bool bVar14;
   long local_160;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   Object *local_148;
   long local_140;
   long local_138;
   undefined4 local_130;
   long local_128;
   undefined4 local_120;
   int local_118;
   undefined4 uStack_114;
   undefined4 uStack_110;
   undefined4 uStack_10c;
   undefined1 local_108[16];
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined1(*local_d8[2])[16];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   Object **local_78;
   int *piStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_2 != 0) {
      plVar10 = (long*)( *(long*)param_2 + -0x10 );
      do {
         lVar9 = *plVar10;
         if (lVar9 == 0) goto LAB_00102838;
         LOCK();
         lVar6 = *plVar10;
         bVar14 = lVar9 == lVar6;
         if (bVar14) {
            *plVar10 = lVar9 + 1;
            lVar6 = lVar9;
         }

         UNLOCK();
      }
 while ( !bVar14 );
      if (lVar6 != -1) {
         local_160 = *(long*)param_2;
      }

   }

   LAB_00102838:pOVar12 = *(Object**)param_1;
   if (( pOVar12 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
      pOVar12 = (Object*)0x0;
   }

   this_00 = *(GetTypeInfo<bool,void>**)( this + 0x98 );
   if (this_00 == (GetTypeInfo<bool,void>*)0x0) {
      LAB_00102930:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1e8] == (ResourceFormatSaver)0x0 )) {
         this_00 = (GetTypeInfo<bool,void>*)&local_148;
         local_118 = 0;
         uStack_114 = 0;
         local_108 = (undefined1[16])0x0;
         local_148 = (Object*)0x109d13;
         uStack_110 = 0;
         uStack_10c = 0;
         local_f8 = 0;
         local_f0 = 0;
         local_e8 = 6;
         local_e0 = 1;
         local_d8[0] = (undefined1(*) [16])0x0;
         local_c8 = 0;
         local_c0 = 0;
         local_b0 = 0;
         local_140 = 0xf;
         String::parse_latin1((StrRange*)&local_118);
         local_e0 = CONCAT44(local_e0._4_4_, 0xc);
         GetTypeInfo<bool,void>::get_class_info(this_00);
         uStack_110 = local_148._0_4_;
         uVar8 = local_108._0_8_;
         if (local_108._0_8_ != local_140) {
            if (local_108._0_8_ != 0) {
               LOCK();
               plVar10 = (long*)( local_108._0_8_ + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = local_108._8_8_;
                  local_108 = auVar3 << 0x40;
                  Memory::free_static((void*)( uVar8 + -0x10 ), false);
               }

            }

            local_108._0_8_ = local_140;
            local_140 = 0;
         }

         if (local_108._8_8_ != local_138) {
            StringName::unref();
            lVar9 = local_138;
            local_138 = 0;
            local_108._8_8_ = lVar9;
         }

         lVar6 = local_f0;
         lVar9 = local_128;
         local_f8 = CONCAT44(local_f8._4_4_, local_130);
         if (local_f0 == local_128) {
            local_e8 = CONCAT44(local_e8._4_4_, local_120);
            if (local_f0 != 0) {
               LOCK();
               plVar10 = (long*)( local_f0 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_128 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_f0 != 0) {
               LOCK();
               plVar10 = (long*)( local_f0 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  local_f0 = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }

            }

            local_f0 = local_128;
            local_e8 = CONCAT44(local_e8._4_4_, local_120);
         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar9 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar10 = (long*)( local_140 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         local_c0 = local_c0 & 0xffffffff00000000;
         GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)this_00);
         if (local_d8[0] == (undefined1(*) [16])0x0) {
            local_d8[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_d8[0][1] = 0;
            *local_d8[0] = (undefined1[16])0x0;
         }

         puVar7 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar7 + 8 ) = 0;
         *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
         *puVar7 = 0;
         puVar7[6] = 0;
         puVar7[10] = 6;
         *(undefined8*)( puVar7 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar7 + 0xc ) = (undefined1[16])0x0;
         *puVar7 = local_148._0_4_;
         if (local_140 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 2 ), (CowData*)&local_140);
         }

         StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_138);
         puVar7[6] = local_130;
         if (*(long*)( puVar7 + 8 ) != local_128) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_128);
         }

         lVar6 = local_128;
         puVar7[10] = local_120;
         lVar9 = *(long*)( *local_d8[0] + 8 );
         *(undefined8*)( puVar7 + 0xc ) = 0;
         *(undefined1(**) [16])( puVar7 + 0x10 ) = local_d8[0];
         *(long*)( puVar7 + 0xe ) = lVar9;
         if (lVar9 != 0) {
            *(undefined4**)( lVar9 + 0x30 ) = puVar7;
         }

         lVar9 = *(long*)*local_d8[0];
         *(undefined4**)( *local_d8[0] + 8 ) = puVar7;
         if (lVar9 == 0) {
            *(undefined4**)*local_d8[0] = puVar7;
         }

         *(int*)local_d8[0][1] = *(int*)local_d8[0][1] + 1;
         if (local_128 != 0) {
            LOCK();
            plVar10 = (long*)( local_128 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar9 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar10 = (long*)( local_140 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         Vector<int>::push_back(local_b8, 0);
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)this_00);
         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)this_00);
         lVar9 = local_128;
         if (local_128 != 0) {
            LOCK();
            plVar10 = (long*)( local_128 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
            StringName::unref();
         }

         lVar9 = local_140;
         if (local_140 != 0) {
            LOCK();
            plVar10 = (long*)( local_140 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_140 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         Vector<int>::push_back(local_b8, 0);
         uVar5 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x1f0 ) = 0;
         lVar9 = *(long*)( this + 8 );
         pcVar11 = *(code**)( lVar9 + 0xd8 );
         if (( ( pcVar11 == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 ) ) && ( pcVar11 = *(code**)( lVar9 + 0xd0 ) ),pcVar11 == (code*)0x0) {
            local_158 = 0;
            String::parse_latin1((String*)&local_158, "ResourceFormatSaver");
            StringName::StringName(&local_150, (String*)&local_158, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)this_00, &local_150);
            if (local_140 == 0) {
               this_00 = (GetTypeInfo<bool,void>*)0x0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') goto LAB_001032a8;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               LAB_001032c9:lVar9 = *(long*)( this + 8 );
               pcVar11 = *(code**)( lVar9 + 200 );
               if (( ( pcVar11 == (code*)0x0 ) || ( *(long*)( lVar9 + 0xe0 ) == 0 ) ) && ( pcVar11 = *(code**)( lVar9 + 0xc0 ) ),pcVar11 == (code*)0x0) goto LAB_0010318f;
               uVar8 = ( *pcVar11 )(*(undefined8*)( lVar9 + 0xa0 ));
               *(undefined8*)( this + 0x1f0 ) = uVar8;
            }
 else {
               this_00 = *(GetTypeInfo<bool,void>**)( local_140 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
               if (StringName::configured != '\0') {
                  LAB_001032a8:if (CONCAT71(uStack_14f, local_150) != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
               if (this_00 == (GetTypeInfo<bool,void>*)0x0) goto LAB_001032c9;
            }

            lVar9 = *(long*)( this + 8 );
         }
 else {
            uVar8 = ( *pcVar11 )(*(undefined8*)( lVar9 + 0xa0 ), this + 0x1e0, uVar5);
            *(undefined8*)( this + 0x1f0 ) = uVar8;
            lVar9 = *(long*)( this + 8 );
         }

         LAB_0010318f:if (*(char*)( lVar9 + 0x29 ) != '\0') {
            plVar10 = (long*)operator_new(0x18, "");
            *plVar10 = (long)( this + 0x1f0 );
            plVar10[1] = (long)( this + 0x1e8 );
            plVar10[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar10;
         }

         this[0x1e8] = (ResourceFormatSaver)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_118);
      }

      lVar9 = local_160;
      if (*(long*)( this + 0x1f0 ) != 0) {
         if (( pOVar12 == (Object*)0x0 ) || ( local_148 = pOVar12 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
            local_148 = (Object*)0x0;
         }

         local_118 = 0;
         uStack_114 = 0;
         plVar10 = (long*)( local_160 + -0x10 );
         if (local_160 != 0) {
            do {
               lVar9 = *plVar10;
               if (lVar9 == 0) goto LAB_00102af0;
               LOCK();
               lVar6 = *plVar10;
               bVar14 = lVar9 == lVar6;
               if (bVar14) {
                  *plVar10 = lVar9 + 1;
                  lVar6 = lVar9;
               }

               UNLOCK();
            }
 while ( !bVar14 );
            if (lVar6 != -1) {
               local_118 = (int)local_160;
               uStack_114 = ( undefined4 )((ulong)local_160 >> 0x20);
            }

         }

         LAB_00102af0:local_78 = &local_148;
         piStack_70 = &local_118;
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            ( **(code**)( this + 0x1f0 ) )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
         }
 else {
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1e0, *(code**)( this + 0x1f0 ), &local_78, &local_150);
         }

         uVar13 = CONCAT71(( int7 )((ulong)this_00 >> 8), local_150 != (StringName)0x0);
         if (CONCAT44(uStack_114, local_118) != 0) {
            LOCK();
            plVar10 = (long*)( CONCAT44(uStack_114, local_118) + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               lVar9 = CONCAT44(uStack_114, local_118);
               local_118 = 0;
               uStack_114 = 0;
               Memory::free_static((void*)( lVar9 + -0x10 ), false);
            }

         }

         if (( ( local_148 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar1 = local_148,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

      goto LAB_00102ba8;
   }

   if (pOVar12 != (Object*)0x0) {
      uVar13 = 0;
      bVar14 = false;
      goto LAB_00102954;
   }

   if (local_160 != 0) {
      LOCK();
      plVar10 = (long*)( local_160 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

}
else{local_118 = 0;uStack_114 = 0;uStack_110 = 0;Variant::Variant((Variant*)&local_78, pOVar12);Variant::Variant((Variant*)local_60, (String*)&local_160);local_a8 = (Variant*)&local_78;pVStack_a0 = (Variant*)local_60;( **(code**)( *(long*)this_00 + 0x60 ) )((Variant*)local_98, this_00, this + 0x1e0, &local_a8, 2, &local_118);if (local_118 != 0) {
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   goto LAB_00102930;
}
bVar14 = Variant::operator_cast_to_bool((Variant*)local_98);uVar13 = CONCAT71(extraout_var, bVar14) & 0xffffffff;if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[local_60[0]] != '\0') {
   Variant::_clear_internal();
}
if (Variant::needs_deinit[(int)local_78] != '\0') {
   Variant::_clear_internal();
}
LAB_00102ba8:lVar9 = local_160;bVar14 = true;if (pOVar12 == (Object*)0x0) {
   if (local_160 != 0) {
      LOCK();
      plVar10 = (long*)( local_160 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   goto LAB_0010297f;
}
LAB_00102954:cVar4 = RefCounted::unreference();if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
   ( **(code**)( *(long*)pOVar12 + 0x140 ) )(pOVar12);
   Memory::free_static(pOVar12, false);
}
lVar9 = local_160;if (local_160 != 0) {
   LOCK();
   plVar10 = (long*)( local_160 + -0x10 );
   *plVar10 = *plVar10 + -1;
   UNLOCK();
   if (*plVar10 == 0) {
      local_160 = 0;
      Memory::free_static((void*)( lVar9 + -0x10 ), false);
   }

}
if (bVar14) goto LAB_0010297f;}String::get_extension();local_118 = 0;uStack_114 = 0;( **(code**)( *(long*)this + 0x168 ) )(this, param_1, (List<String,DefaultAllocator>*)&local_118);if ((undefined8*)CONCAT44(uStack_114, local_118) != (undefined8*)0x0) {
   for (pSVar2 = *(String**)CONCAT44(uStack_114, local_118); pSVar2 != (String*)0x0; pSVar2 = *(String**)( pSVar2 + 8 )) {
      cVar4 = String::nocasecmp_to(pSVar2);
      if (cVar4 == '\0') {
         uVar13 = 1;
         goto LAB_00102a52;
      }

   }

}
uVar13 = 0;LAB_00102a52:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_118);pOVar12 = local_148;if (local_148 != (Object*)0x0) {
   LOCK();
   pOVar1 = local_148 + -0x10;
   *(long*)pOVar1 = *(long*)pOVar1 + -1;
   UNLOCK();
   if (*(long*)pOVar1 == 0) {
      local_148 = (Object*)0x0;
      Memory::free_static(pOVar12 + -0x10, false);
   }

}
LAB_0010297f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar13 & 0xffffffff;}/* ResourceFormatSaver::_bind_methods() */void ResourceFormatSaver::_bind_methods(void) {
   long *plVar1;
   StringName *this;
   long lVar2;
   code *pcVar3;
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
   char *pcVar21;
   undefined8 uVar22;
   int *piVar23;
   undefined4 *puVar24;
   long lVar25;
   int *piVar26;
   long in_FS_OFFSET;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   Vector<String> local_f8[8];
   undefined8 local_f0;
   char *local_e8;
   undefined1 local_e0[16];
   int local_d0;
   long local_c8;
   undefined4 local_c0;
   char *local_b8;
   undefined8 local_b0;
   long local_a8;
   ulong uStack_a0;
   undefined8 local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined1(*local_78[2])[16];
   int *local_68;
   ulong local_60;
   Vector<int> local_58[8];
   long local_50;
   long local_40;
   local_e0._8_8_ = local_e0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "resource";
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 == (char*)0x0) {
      Vector<String>::push_back(local_f8, (CowData<char32_t>*)&local_b8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
      pcVar21 = local_b8;
      Vector<String>::push_back(local_f8);
      if (pcVar21 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar21 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   local_108 = 0;
   local_b8 = "path";
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_108);
   local_b8 = (char*)0x0;
   if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_108);
   }

   Vector<String>::push_back(local_f8, (CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   local_b8 = "flags";
   local_b0 = 5;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   if (local_100 == 0) {
      Vector<String>::push_back(local_f8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
      pcVar21 = local_b8;
      Vector<String>::push_back(local_f8);
      if (pcVar21 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar21 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   lVar2 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = 0;
   uStack_a0 = 0;
   local_e8 = "_save";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8 != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_e0._0_8_;
      local_e0._0_8_ = 0;
   }

   if (uStack_a0 != local_e0._8_8_) {
      StringName::unref();
      uStack_a0 = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   this(StringName * )(local_e0 + 8);
   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar16._8_8_ = 0;
   auVar16._0_8_ = local_e0._8_8_;
   local_e0 = auVar16 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 == 0) {
      LAB_001043b3:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
      lVar2 = local_108;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_001043b3;
      StringName::StringName((StringName*)&local_100, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_100) {
         lVar2 = local_108;
         if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
            StringName::unref();
            lVar2 = local_108;
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_100;
         lVar2 = local_108;
      }

   }

   local_108 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_e0._8_8_;
         local_e0 = auVar15 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 7);
   local_e8 = "ResourceFormatSaver";
   local_100 = 0;
   local_e0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
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

   piVar23 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar25 = 0;
         local_68 = (int*)0x0;
         piVar26 = piVar23;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar23 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( uStack_a0 != 0 )) {
      StringName::unref();
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

   pcVar21 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

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

   Vector<String>::push_back(local_f8, (CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   local_b8 = "uid";
   local_b0 = 3;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   if (local_100 == 0) {
      Vector<String>::push_back(local_f8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
      pcVar21 = local_b8;
      Vector<String>::push_back(local_f8);
      if (pcVar21 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar21 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   pcVar21 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

   local_e8 = "_set_uid";
   local_a8 = 0;
   uStack_a0 = 0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_e8);
   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8 != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_e0._0_8_;
      local_e0._0_8_ = 0;
   }

   if (uStack_a0 != local_e0._8_8_) {
      StringName::unref();
      uStack_a0 = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e0._0_8_ = 0;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_110 = 0;
   local_108 = 0;
   local_e8 = "";
   auVar17._8_8_ = 0;
   auVar17._0_8_ = local_e0._8_8_;
   local_e0 = auVar17 << 0x40;
   String::parse_latin1((StrRange*)&local_108);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 2);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_108 == 0) {
      LAB_0010440b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_110);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_108);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010440b;
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
   if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_e0._8_8_;
         local_e0 = auVar12 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 4);
   local_e8 = "ResourceFormatSaver";
   local_100 = 0;
   local_e0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
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

   piVar23 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar25 = 0;
         local_68 = (int*)0x0;
         piVar26 = piVar23;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar23 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( uStack_a0 != 0 )) {
      StringName::unref();
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

   pcVar21 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "resource";
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back(local_f8, (CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = 0;
   uStack_a0 = 0;
   local_e8 = "_recognize";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_e8 = "";
   local_118 = 0;
   local_110 = 0;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = local_e0._8_8_;
   local_e0 = auVar18 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 1);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_110 == 0) {
      LAB_0010497b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_118);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010497b;
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

   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8 != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_e0._0_8_;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_e0._8_8_;
      local_e0 = auVar4 << 0x40;
   }

   if (uStack_a0 != local_e0._8_8_) {
      StringName::unref();
      uStack_a0 = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_e0._8_8_;
         local_e0 = auVar13 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_e0._8_8_;
         local_e0 = auVar9 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatSaver";
   local_100 = 0;
   local_e0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
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

   piVar23 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar25 = 0;
         local_68 = (int*)0x0;
         piVar26 = piVar23;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar23 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( uStack_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   pcVar21 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "resource";
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back(local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   pcVar21 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

   local_a8 = 0;
   uStack_a0 = 0;
   local_e8 = "_get_recognized_extensions";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x1a;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_118 = 0;
   local_110 = 0;
   local_e8 = "";
   auVar19._8_8_ = 0;
   auVar19._0_8_ = local_e0._8_8_;
   local_e0 = auVar19 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 0x22);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_110 == 0) {
      LAB_0010500b:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_118);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_0010500b;
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

   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8 != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_e0._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_e0._8_8_;
      local_e0 = auVar5 << 0x40;
   }

   if (uStack_a0 != local_e0._8_8_) {
      StringName::unref();
      uStack_a0 = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_e0._8_8_;
         local_e0 = auVar10 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_e0._8_8_;
         local_e0 = auVar14 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatSaver";
   local_100 = 0;
   local_e0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
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

   piVar23 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar25 = 0;
         local_68 = (int*)0x0;
         piVar26 = piVar23;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar23 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
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

   if (( StringName::configured != '\0' ) && ( uStack_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<String>::_unref((CowData<String>*)&local_f0);
   local_f0 = 0;
   local_e8 = (char*)0x0;
   local_b8 = "resource";
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   if (local_e8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_e8);
   }

   Vector<String>::push_back(local_f8, (CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   local_100 = 0;
   local_b8 = "path";
   local_b0 = 4;
   String::parse_latin1((StrRange*)&local_100);
   local_b8 = (char*)0x0;
   if (local_100 == 0) {
      Vector<String>::push_back(local_f8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
      pcVar21 = local_b8;
      Vector<String>::push_back(local_f8);
      if (pcVar21 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar21 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   lVar2 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   local_a8 = 0;
   uStack_a0 = 0;
   local_e8 = "_recognize_path";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 0xc);
   local_118 = 0;
   local_110 = 0;
   local_e8 = "";
   auVar20._8_8_ = 0;
   auVar20._0_8_ = local_e0._8_8_;
   local_e0 = auVar20 << 0x40;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 1);
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

         goto LAB_00105718;
      }

   }

   local_c0 = 6;
   StringName::operator =(this, (StringName*)&local_118);
   LAB_00105718:CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8 != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_e0._0_8_;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_e0._8_8_;
      local_e0 = auVar6 << 0x40;
   }

   if (uStack_a0 != local_e0._8_8_) {
      StringName::unref();
      uStack_a0 = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar2 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_e0._8_8_;
         local_e0 = auVar11 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_e0._8_8_;
         local_e0 = auVar8 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_e8);
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar24 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar24 + 8 ) = 0;
   *(undefined1(*) [16])( puVar24 + 2 ) = (undefined1[16])0x0;
   *puVar24 = 0;
   puVar24[6] = 0;
   puVar24[10] = 6;
   *(undefined8*)( puVar24 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar24 + 0xc ) = (undefined1[16])0x0;
   *puVar24 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar24 + 4 ), this);
   puVar24[6] = local_d0;
   if (*(long*)( puVar24 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar24 + 8 ), (CowData*)&local_c8);
   }

   lVar25 = local_c8;
   puVar24[10] = local_c0;
   lVar2 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar24 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar24 + 0x10 ) = local_78[0];
   *(long*)( puVar24 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar24;
   }

   lVar2 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar24;
   if (lVar2 == 0) {
      *(undefined4**)*local_78[0] = puVar24;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar22 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_e0._8_8_;
         local_e0 = auVar7 << 0x40;
         Memory::free_static((void*)( uVar22 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 0);
   local_e8 = "ResourceFormatSaver";
   local_100 = 0;
   local_e0._0_8_ = 0x13;
   String::parse_latin1((StrRange*)&local_100);
   StringName::StringName((StringName*)&local_e8, (String*)&local_100, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)local_f8, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
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

   piVar23 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         lVar25 = 0;
         local_68 = (int*)0x0;
         piVar26 = piVar23;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar26] != '\0') {
                  Variant::_clear_internal();
               }

               lVar25 = lVar25 + 1;
               piVar26 = piVar26 + 6;
            }
 while ( lVar2 != lVar25 );
         }

         Memory::free_static(piVar23 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( uStack_a0 != 0 )) {
      StringName::unref();
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

   pcVar21 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar21 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatSaver::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */void ResourceFormatSaver::get_recognized_extensions(ResourceFormatSaver *this, Ref *param_1, List *param_2) {
   long lVar1;
   undefined1 auVar2[16];
   Object *pOVar3;
   char cVar4;
   undefined4 uVar5;
   code *pcVar6;
   CowData<char32_t> *this_00;
   undefined1(*pauVar7)[16];
   int *piVar8;
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   Object *pOVar12;
   long lVar13;
   long in_FS_OFFSET;
   undefined8 local_148;
   Object *local_140[2];
   long local_130;
   int local_128[2];
   undefined4 uStack_120;
   undefined4 uStack_11c;
   long local_118;
   int local_110;
   long local_108;
   int local_100;
   undefined8 local_f8;
   long local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   long local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1(*local_b8)[16];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   Object **local_58[3];
   long local_40;
   pOVar12 = *(Object**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = 0;
   if (( pOVar12 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
      pOVar12 = (Object*)0x0;
   }

   plVar11 = *(long**)( this + 0x98 );
   if (plVar11 == (long*)0x0) {
      LAB_00106a3b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d0] == (ResourceFormatSaver)0x0 )) {
         local_f8 = 0;
         local_128[0] = 0x109d55;
         local_128[1] = 0;
         local_e8 = (undefined1[16])0x0;
         local_f0 = 0;
         local_d8 = 0;
         local_d0 = 0;
         local_c8 = 6;
         local_c0 = 1;
         local_b8 = (undefined1(*) [16])0x0;
         local_a8 = 0;
         local_a0 = 0;
         local_90 = 0;
         uStack_120 = 0x1a;
         uStack_11c = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_c0 = CONCAT44(local_c0._4_4_, 0xc);
         GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void>*)local_128);
         lVar10 = CONCAT44(uStack_11c, uStack_120);
         local_f0 = CONCAT44(local_f0._4_4_, local_128[0]);
         uVar9 = local_e8._0_8_;
         if (local_e8._0_8_ != lVar10) {
            if (local_e8._0_8_ != 0) {
               LOCK();
               plVar11 = (long*)( local_e8._0_8_ + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_e8._8_8_;
                  local_e8 = auVar2 << 0x40;
                  Memory::free_static((void*)( uVar9 + -0x10 ), false);
               }

               lVar10 = CONCAT44(uStack_11c, uStack_120);
            }

            local_e8._0_8_ = lVar10;
            uStack_120 = 0;
            uStack_11c = 0;
         }

         if (local_e8._8_8_ != local_118) {
            StringName::unref();
            lVar10 = local_118;
            local_118 = 0;
            local_e8._8_8_ = lVar10;
         }

         lVar13 = local_d0;
         lVar10 = local_108;
         local_d8 = CONCAT44(local_d8._4_4_, local_110);
         if (local_d0 == local_108) {
            local_c8 = CONCAT44(local_c8._4_4_, local_100);
            if (local_d0 != 0) {
               LOCK();
               plVar11 = (long*)( local_d0 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_108 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_d0 != 0) {
               LOCK();
               plVar11 = (long*)( local_d0 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            local_d0 = local_108;
            local_c8 = CONCAT44(local_c8._4_4_, local_100);
         }

         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         if (CONCAT44(uStack_11c, uStack_120) != 0) {
            LOCK();
            plVar11 = (long*)( CONCAT44(uStack_11c, uStack_120) + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               lVar10 = CONCAT44(uStack_11c, uStack_120);
               uStack_120 = 0;
               uStack_11c = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         local_a0 = local_a0 & 0xffffffff00000000;
         GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)local_128);
         if (local_b8 == (undefined1(*) [16])0x0) {
            local_b8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_b8[1] = 0;
            *local_b8 = (undefined1[16])0x0;
         }

         piVar8 = (int*)operator_new(0x48, DefaultAllocator::alloc);
         piVar8[8] = 0;
         piVar8[9] = 0;
         *(undefined1(*) [16])( piVar8 + 2 ) = (undefined1[16])0x0;
         *piVar8 = 0;
         piVar8[6] = 0;
         piVar8[10] = 6;
         piVar8[0x10] = 0;
         piVar8[0x11] = 0;
         *(undefined1(*) [16])( piVar8 + 0xc ) = (undefined1[16])0x0;
         *piVar8 = local_128[0];
         if (CONCAT44(uStack_11c, uStack_120) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar8 + 2 ), (CowData*)&uStack_120);
         }

         StringName::operator =((StringName*)( piVar8 + 4 ), (StringName*)&local_118);
         piVar8[6] = local_110;
         if (*(long*)( piVar8 + 8 ) != local_108) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( piVar8 + 8 ), (CowData*)&local_108);
         }

         lVar13 = local_108;
         piVar8[10] = local_100;
         lVar10 = *(long*)( *local_b8 + 8 );
         piVar8[0xc] = 0;
         piVar8[0xd] = 0;
         *(undefined1(**) [16])( piVar8 + 0x10 ) = local_b8;
         *(long*)( piVar8 + 0xe ) = lVar10;
         if (lVar10 != 0) {
            *(int**)( lVar10 + 0x30 ) = piVar8;
         }

         lVar10 = *(long*)*local_b8;
         *(int**)( *local_b8 + 8 ) = piVar8;
         if (lVar10 == 0) {
            *(int**)*local_b8 = piVar8;
         }

         *(int*)local_b8[1] = *(int*)local_b8[1] + 1;
         if (local_108 != 0) {
            LOCK();
            plVar11 = (long*)( local_108 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_108 = 0;
               Memory::free_static((void*)( lVar13 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
            StringName::unref();
         }

         if (CONCAT44(uStack_11c, uStack_120) != 0) {
            LOCK();
            plVar11 = (long*)( CONCAT44(uStack_11c, uStack_120) + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               lVar10 = CONCAT44(uStack_11c, uStack_120);
               uStack_120 = 0;
               uStack_11c = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         Vector<int>::push_back(local_98, 0);
         uVar5 = MethodInfo::get_compatibility_hash();
         *(undefined8*)( this + 0x1d8 ) = 0;
         lVar10 = *(long*)( this + 8 );
         pcVar6 = *(code**)( lVar10 + 0xd8 );
         if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar10 + 0xd0 ) ),pcVar6 == (code*)0x0) {
            local_148 = 0;
            String::parse_latin1((String*)&local_148, "ResourceFormatSaver");
            StringName::StringName((StringName*)local_140, (String*)&local_148, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_128, (StringName*)local_140);
            if (CONCAT44(uStack_11c, uStack_120) == 0) {
               lVar10 = 0;
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') goto LAB_00107282;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               LAB_001072a1:lVar10 = *(long*)( this + 8 );
               pcVar6 = *(code**)( lVar10 + 200 );
               if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar10 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00107196;
               uVar9 = ( *pcVar6 )(*(undefined8*)( lVar10 + 0xa0 ));
               *(undefined8*)( this + 0x1d8 ) = uVar9;
            }
 else {
               lVar10 = *(long*)( CONCAT44(uStack_11c, uStack_120) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&uStack_120);
               if (StringName::configured != '\0') {
                  LAB_00107282:if (local_140[0] != (Object*)0x0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
               if (lVar10 == 0) goto LAB_001072a1;
            }

            lVar10 = *(long*)( this + 8 );
         }
 else {
            uVar9 = ( *pcVar6 )(*(undefined8*)( lVar10 + 0xa0 ), this + 0x1c8, uVar5);
            *(undefined8*)( this + 0x1d8 ) = uVar9;
            lVar10 = *(long*)( this + 8 );
         }

         LAB_00107196:if (*(char*)( lVar10 + 0x29 ) != '\0') {
            plVar11 = (long*)operator_new(0x18, "");
            *plVar11 = (long)( this + 0x1d8 );
            plVar11[1] = (long)( this + 0x1d0 );
            plVar11[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar11;
         }

         this[0x1d0] = (ResourceFormatSaver)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
      }

      pcVar6 = *(code**)( this + 0x1d8 );
      if (pcVar6 == (code*)0x0) {
         if (( ( pOVar12 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);
         Memory::free_static(pOVar12, false);
      }

      goto LAB_00106a6c;
   }

   if (pOVar12 == (Object*)0x0) {
      local_140[0] = (Object*)0x0;
   }
 else {
      local_140[0] = pOVar12;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         local_140[0] = (Object*)0x0;
      }

      pcVar6 = *(code**)( this + 0x1d8 );
   }

   local_58[0] = local_140;
   uStack_120 = 0;
   uStack_11c = 0;
   if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), local_58, local_128);
      lVar10 = CONCAT44(uStack_11c, uStack_120);
      if (lVar10 != 0) goto LAB_00106b24;
      LAB_00106d76:local_f0 = 0;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c8, pcVar6, local_58, local_128);
      lVar10 = CONCAT44(uStack_11c, uStack_120);
      if (lVar10 == 0) goto LAB_00106d76;
      LAB_00106b24:local_f0 = 0;
      CowData<String>::_ref((CowData<String>*)&local_f0, (CowData*)&uStack_120);
      lVar10 = local_f0;
   }

   if (local_130 != lVar10) {
      CowData<String>::_unref((CowData<String>*)&local_130);
      local_f0 = 0;
      local_130 = lVar10;
   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   CowData<String>::_unref((CowData<String>*)&uStack_120);
   if (( ( local_140[0] != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_140[0],cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
}
  else{
   local_128[0] = 0;
   local_128[1] = 0;
   uStack_120 = 0;
   Variant::Variant((Variant*)local_78, pOVar12);
   local_80 = (Variant*)local_78;
   ( **(code**)( *plVar11 + 0x60 ) )(local_58, plVar11, this + 0x1c8, &local_80, 1, local_128);
   if (local_128[0] != 0) {
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_00106a3b;
   }

   Variant::operator_cast_to_Vector((Variant*)&local_f8);
   if (local_f0 != 0) {
      CowData<String>::_unref((CowData<String>*)&local_130);
      local_130 = local_f0;
      local_f0 = 0;
   }

   CowData<String>::_unref((CowData<String>*)&local_f0);
   if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

}
if (( ( pOVar12 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar12 + 0x140 ))(pOVar12);Memory::free_static(pOVar12, false);}lVar10 = local_130;if (( local_130 != 0 ) && ( lVar13 = 0 ),0 < *(long*)( local_130 + -8 )) {
   do {
      if (*(long*)param_2 == 0) {
         pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_2 = pauVar7;
         *(undefined4*)pauVar7[1] = 0;
         *pauVar7 = (undefined1[16])0x0;
      }

      this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
      *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
      if (*(long*)( lVar10 + lVar13 * 8 ) != 0) {
         CowData<char32_t>::_ref(this_00, (CowData*)( lVar10 + lVar13 * 8 ));
      }

      plVar11 = *(long**)param_2;
      lVar1 = plVar11[1];
      *(undefined8*)( this_00 + 8 ) = 0;
      *(long**)( this_00 + 0x18 ) = plVar11;
      *(long*)( this_00 + 0x10 ) = lVar1;
      if (lVar1 != 0) {
         *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
      }

      plVar11[1] = (long)this_00;
      if (*plVar11 == 0) {
         *plVar11 = (long)this_00;
      }

      *(int*)( plVar11 + 2 ) = (int)plVar11[2] + 1;
      lVar13 = lVar13 + 1;
   }
 while ( lVar13 < *(long*)( lVar10 + -8 ) );
}
LAB_00106a6c:CowData<String>::_unref((CowData<String>*)&local_130);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* ResourceFormatSaver::recognize(Ref<Resource> const&) const */ulong ResourceFormatSaver::recognize(ResourceFormatSaver *this, Ref *param_1) {
   Object *pOVar1;
   undefined1 auVar2[16];
   long lVar3;
   char cVar4;
   bool bVar5;
   undefined4 uVar6;
   code *pcVar7;
   undefined7 extraout_var;
   undefined4 *puVar8;
   undefined8 uVar9;
   long lVar10;
   long *plVar11;
   ulong uVar12;
   Object *pOVar13;
   long in_FS_OFFSET;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   undefined4 local_110;
   long local_108;
   undefined4 local_100;
   int local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   long local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1(*local_b8)[16];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   int *local_58[3];
   long local_40;
   pOVar13 = *(Object**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( pOVar13 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
      pOVar13 = (Object*)0x0;
   }

   plVar11 = *(long**)( this + 0x98 );
   if (plVar11 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, pOVar13);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar11 + 0x60 ) )((Variant*)local_58, plVar11, this + 0x1b0, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         bVar5 = Variant::operator_cast_to_bool((Variant*)local_58);
         uVar12 = CONCAT71(extraout_var, bVar5) & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001074d3;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b8] == (ResourceFormatSaver)0x0 )) {
      local_f8 = 0;
      uStack_f4 = 0;
      local_e8 = (undefined1[16])0x0;
      local_128 = "_recognize";
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8 = (undefined1(*) [16])0x0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_120 = 10;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_128);
      uStack_f0 = local_128._0_4_;
      uVar9 = local_e8._0_8_;
      if (local_e8._0_8_ != local_120) {
         if (local_e8._0_8_ != 0) {
            LOCK();
            plVar11 = (long*)( local_e8._0_8_ + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = local_e8._8_8_;
               local_e8 = auVar2 << 0x40;
               Memory::free_static((void*)( uVar9 + -0x10 ), false);
            }

         }

         local_e8._0_8_ = local_120;
         local_120 = 0;
      }

      if (local_e8._8_8_ != local_118) {
         StringName::unref();
         lVar10 = local_118;
         local_118 = 0;
         local_e8._8_8_ = lVar10;
      }

      lVar3 = local_d0;
      lVar10 = local_108;
      local_d8 = CONCAT44(local_d8._4_4_, local_110);
      if (local_d0 == local_108) {
         local_c8 = CONCAT44(local_c8._4_4_, local_100);
         if (local_d0 != 0) {
            LOCK();
            plVar11 = (long*)( local_d0 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_108 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_d0 != 0) {
            LOCK();
            plVar11 = (long*)( local_d0 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         local_d0 = local_108;
         local_c8 = CONCAT44(local_c8._4_4_, local_100);
      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar10 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar11 = (long*)( local_120 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_128);
      if (local_b8 == (undefined1(*) [16])0x0) {
         local_b8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_b8[1] = 0;
         *local_b8 = (undefined1[16])0x0;
      }

      puVar8 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar8 + 8 ) = 0;
      *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
      *puVar8 = 0;
      puVar8[6] = 0;
      puVar8[10] = 6;
      *(undefined8*)( puVar8 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar8 + 0xc ) = (undefined1[16])0x0;
      *puVar8 = local_128._0_4_;
      if (local_120 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 2 ), (CowData*)&local_120);
      }

      StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_118);
      puVar8[6] = local_110;
      if (*(long*)( puVar8 + 8 ) != local_108) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_108);
      }

      lVar3 = local_108;
      puVar8[10] = local_100;
      lVar10 = *(long*)( *local_b8 + 8 );
      *(undefined8*)( puVar8 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar8 + 0x10 ) = local_b8;
      *(long*)( puVar8 + 0xe ) = lVar10;
      if (lVar10 != 0) {
         *(undefined4**)( lVar10 + 0x30 ) = puVar8;
      }

      lVar10 = *(long*)*local_b8;
      *(undefined4**)( *local_b8 + 8 ) = puVar8;
      if (lVar10 == 0) {
         *(undefined4**)*local_b8 = puVar8;
      }

      *(int*)local_b8[1] = *(int*)local_b8[1] + 1;
      if (local_108 != 0) {
         LOCK();
         plVar11 = (long*)( local_108 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar10 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar11 = (long*)( local_120 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 0);
      uVar6 = MethodInfo::get_compatibility_hash();
      lVar10 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1c0 ) = 0;
      pcVar7 = *(code**)( lVar10 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar10 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ResourceFormatSaver");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar10 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_00107aeb;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00107b0a:lVar10 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar10 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar10 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar10 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00107a0b;
            uVar9 = ( *pcVar7 )(*(undefined8*)( lVar10 + 0xa0 ));
            *(undefined8*)( this + 0x1c0 ) = uVar9;
         }
 else {
            lVar10 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_00107aeb:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar10 == 0) goto LAB_00107b0a;
         }

         lVar10 = *(long*)( this + 8 );
      }
 else {
         uVar9 = ( *pcVar7 )(*(undefined8*)( lVar10 + 0xa0 ), this + 0x1b0, uVar6);
         *(undefined8*)( this + 0x1c0 ) = uVar9;
         lVar10 = *(long*)( this + 8 );
      }

      LAB_00107a0b:if (*(char*)( lVar10 + 0x29 ) != '\0') {
         plVar11 = (long*)operator_new(0x18, "");
         *plVar11 = (long)( this + 0x1c0 );
         plVar11[1] = (long)( this + 0x1b8 );
         plVar11[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar11;
      }

      this[0x1b8] = (ResourceFormatSaver)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar7 = *(code**)( this + 0x1c0 );
   uVar12 = 0;
   if (pcVar7 != (code*)0x0) {
      if (pOVar13 == (Object*)0x0) {
         local_f8 = 0;
         uStack_f4 = 0;
      }
 else {
         local_f8 = (int)pOVar13;
         uStack_f4 = ( undefined4 )((ulong)pOVar13 >> 0x20);
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            local_f8 = 0;
            uStack_f4 = 0;
         }

         pcVar7 = *(code**)( this + 0x1c0 );
      }

      local_58[0] = &local_f8;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar7 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b0, pcVar7, local_58, &local_128);
      }

      uVar12 = ( ulong )(local_128._0_1_ != (GetTypeInfo<bool,void>)0x0);
      if (( CONCAT44(uStack_f4, local_f8) != 0 ) && ( cVar4 = cVar4 != '\0' )) {
         pOVar1 = (Object*)CONCAT44(uStack_f4, local_f8);
         cVar4 = predelete_handler(pOVar1);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_001074d3:if (( ( pOVar13 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar13 + 0x140 ))(pOVar13);
   Memory::free_static(pOVar13, false);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar12;}/* ResourceFormatSaver::save(Ref<Resource> const&, String const&, unsigned int) */ulong ResourceFormatSaver::save(ResourceFormatSaver *this, Ref *param_1, String *param_2, uint param_3) {
   Variant *pVVar1;
   undefined1 auVar2[16];
   Object *pOVar3;
   char cVar4;
   undefined4 uVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   long *plVar9;
   code *pcVar10;
   Object *pOVar11;
   Variant *pVVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   bool bVar14;
   long local_180;
   Object *local_178;
   long local_170;
   char *local_168;
   long local_160;
   long local_158;
   undefined4 local_150;
   long local_148;
   undefined4 local_140;
   uint local_138;
   undefined4 uStack_134;
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined1 local_128[16];
   undefined8 local_118;
   long local_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 local_f8[2];
   undefined8 local_e8;
   ulong local_e0;
   Vector<int> local_d8[8];
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[8];
   Object **local_88;
   long *plStack_80;
   char **local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*(long*)param_2 != 0) {
      plVar9 = (long*)( *(long*)param_2 + -0x10 );
      do {
         lVar8 = *plVar9;
         if (lVar8 == 0) goto LAB_00107ca3;
         LOCK();
         lVar6 = *plVar9;
         bVar14 = lVar8 == lVar6;
         if (bVar14) {
            *plVar9 = lVar8 + 1;
            lVar6 = lVar8;
         }

         UNLOCK();
      }
 while ( !bVar14 );
      if (lVar6 != -1) {
         local_180 = *(long*)param_2;
      }

   }

   LAB_00107ca3:pOVar11 = *(Object**)param_1;
   if (( pOVar11 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
      pOVar11 = (Object*)0x0;
   }

   plVar9 = *(long**)( this + 0x98 );
   if (plVar9 != (long*)0x0) {
      local_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, pOVar11);
      Variant::Variant(local_70, (String*)&local_180);
      Variant::Variant(local_58, param_3);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar9 + 0x60 ) )((Variant*)local_a8, plVar9, this + 0x180, &local_c8, 3, &local_138);
      if (local_138 == 0) {
         uVar13 = Variant::operator_cast_to_long((Variant*)local_a8);
         uVar13 = uVar13 & 0xffffffff;
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar12 = (Variant*)local_40;
         do {
            pVVar1 = pVVar12 + -0x18;
            pVVar12 = pVVar12 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar12 != (Variant*)&local_88 );
         goto LAB_00107dcb;
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar12 = (Variant*)local_40;
      do {
         pVVar1 = pVVar12 + -0x18;
         pVVar12 = pVVar12 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar12 != (Variant*)&local_88 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (ResourceFormatSaver)0x0 )) {
      local_138 = 0;
      uStack_134 = 0;
      local_128 = (undefined1[16])0x0;
      local_168 = "_save";
      uStack_130 = 0;
      uStack_12c = 0;
      local_118 = 0;
      local_110 = 0;
      local_108 = 6;
      local_100 = 1;
      local_f8[0] = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d0 = 0;
      local_160 = 5;
      String::parse_latin1((StrRange*)&local_138);
      local_100 = CONCAT44(local_100._4_4_, 8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_168);
      uStack_130 = local_168._0_4_;
      uVar7 = local_128._0_8_;
      if (local_128._0_8_ != local_160) {
         if (local_128._0_8_ != 0) {
            LOCK();
            plVar9 = (long*)( local_128._0_8_ + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = local_128._8_8_;
               local_128 = auVar2 << 0x40;
               Memory::free_static((void*)( uVar7 + -0x10 ), false);
            }

         }

         local_128._0_8_ = local_160;
         local_160 = 0;
      }

      if (local_128._8_8_ != local_158) {
         StringName::unref();
         lVar8 = local_158;
         local_158 = 0;
         local_128._8_8_ = lVar8;
      }

      lVar6 = local_110;
      lVar8 = local_148;
      local_118 = CONCAT44(local_118._4_4_, local_150);
      if (local_110 == local_148) {
         local_108 = CONCAT44(local_108._4_4_, local_140);
         if (local_110 != 0) {
            LOCK();
            plVar9 = (long*)( local_110 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_148 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_110 != 0) {
            LOCK();
            plVar9 = (long*)( local_110 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_110 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         local_110 = local_148;
         local_108 = CONCAT44(local_108._4_4_, local_140);
      }

      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      lVar8 = local_160;
      if (local_160 != 0) {
         LOCK();
         plVar9 = (long*)( local_160 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_160 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<Ref<Resource>,void>::get_class_info((GetTypeInfo<Ref<Resource>,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      lVar8 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar9 = (long*)( local_148 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      lVar8 = local_160;
      if (local_160 != 0) {
         LOCK();
         plVar9 = (long*)( local_160 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_160 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      lVar8 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar9 = (long*)( local_148 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      lVar8 = local_160;
      if (local_160 != 0) {
         LOCK();
         plVar9 = (long*)( local_160 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_160 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      lVar8 = local_148;
      if (local_148 != 0) {
         LOCK();
         plVar9 = (long*)( local_148 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_148 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      lVar8 = local_160;
      if (local_160 != 0) {
         LOCK();
         plVar9 = (long*)( local_160 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_160 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_d8, 7);
      uVar5 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 400 ) = 0;
      lVar8 = *(long*)( this + 8 );
      pcVar10 = *(code**)( lVar8 + 0xd8 );
      if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xd0 ) ),pcVar10 == (code*)0x0) {
         local_178 = (Object*)0x0;
         String::parse_latin1((String*)&local_178, "ResourceFormatSaver");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
         if (local_160 == 0) {
            lVar8 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_160);
            if (StringName::configured != '\0') goto LAB_0010853a;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            LAB_00108559:lVar8 = *(long*)( this + 8 );
            pcVar10 = *(code**)( lVar8 + 200 );
            if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar8 + 0xc0 ) ),pcVar10 == (code*)0x0) goto LAB_00108462;
            uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ));
            *(undefined8*)( this + 400 ) = uVar7;
         }
 else {
            lVar8 = *(long*)( local_160 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_160);
            if (StringName::configured != '\0') {
               LAB_0010853a:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (lVar8 == 0) goto LAB_00108559;
         }

         lVar8 = *(long*)( this + 8 );
      }
 else {
         uVar7 = ( *pcVar10 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x180, uVar5);
         *(undefined8*)( this + 400 ) = uVar7;
         lVar8 = *(long*)( this + 8 );
      }

      LAB_00108462:if (*(char*)( lVar8 + 0x29 ) != '\0') {
         plVar9 = (long*)operator_new(0x18, "");
         *plVar9 = (long)( this + 400 );
         plVar9[1] = (long)( this + 0x188 );
         plVar9[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar9;
      }

      this[0x188] = (ResourceFormatSaver)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_138);
   }

   uVar13 = 0x25;
   if (*(long*)( this + 400 ) != 0) {
      if (( pOVar11 == (Object*)0x0 ) || ( local_178 = pOVar11 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
         local_178 = (Object*)0x0;
      }

      local_170 = 0;
      plVar9 = (long*)( local_180 + -0x10 );
      if (local_180 != 0) {
         do {
            lVar8 = *plVar9;
            if (lVar8 == 0) goto LAB_00107e98;
            LOCK();
            lVar6 = *plVar9;
            bVar14 = lVar8 == lVar6;
            if (bVar14) {
               *plVar9 = lVar8 + 1;
               lVar6 = lVar8;
            }

            UNLOCK();
         }
 while ( !bVar14 );
         if (lVar6 != -1) {
            local_170 = local_180;
         }

      }

      LAB_00107e98:local_168 = (char*)(ulong)param_3;
      local_88 = &local_178;
      plStack_80 = &local_170;
      local_78 = &local_168;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 400 ) )(*(undefined8*)( this + 0x10 ), &local_88, &local_138);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, *(code**)( this + 400 ), &local_88, &local_138);
      }

      lVar8 = local_170;
      uVar13 = (ulong)local_138;
      if (local_170 != 0) {
         LOCK();
         plVar9 = (long*)( local_170 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_170 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      if (( ( local_178 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_178,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
      Memory::free_static(pOVar3, false);
   }

}
LAB_00107dcb:if (( ( pOVar11 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}lVar8 = local_180;if (local_180 != 0) {
   LOCK();
   plVar9 = (long*)( local_180 + -0x10 );
   *plVar9 = *plVar9 + -1;
   UNLOCK();
   if (*plVar9 == 0) {
      local_180 = 0;
      Memory::free_static((void*)( lVar8 + -0x10 ), false);
   }

}
if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar13;}/* ResourceFormatSaver::set_uid(String const&, long) */ulong ResourceFormatSaver::set_uid(ResourceFormatSaver *this, String *param_1, long param_2) {
   undefined1 auVar1[16];
   undefined4 uVar2;
   long lVar3;
   code *pcVar4;
   undefined4 *puVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_160;
   undefined8 local_158;
   long local_150;
   char *local_148;
   long local_140;
   long local_138;
   undefined4 local_130;
   long local_128;
   undefined4 local_120;
   uint local_118[4];
   undefined1 local_108[16];
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined1(*local_d8)[16];
   undefined8 local_c8;
   ulong local_c0;
   Vector<int> local_b8[8];
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_98[8];
   long *local_78;
   char **ppcStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_160 = 0;
   if (*(long*)param_1 != 0) {
      plVar8 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar7 = *plVar8;
         if (lVar7 == 0) goto LAB_001086c4;
         LOCK();
         lVar3 = *plVar8;
         bVar10 = lVar7 == lVar3;
         if (bVar10) {
            *plVar8 = lVar7 + 1;
            lVar3 = lVar7;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar3 != -1) {
         local_160 = *(long*)param_1;
      }

   }

   LAB_001086c4:plVar8 = *(long**)( this + 0x98 );
   if (plVar8 != (long*)0x0) {
      for (int i = 0; i < 3; i++) {
         local_118[i] = 0;
      }

      Variant::Variant((Variant*)&local_78, (String*)&local_160);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar8 + 0x60 ) )((Variant*)local_98, plVar8, this + 0x198, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         uVar9 = Variant::operator_cast_to_long((Variant*)local_98);
         uVar9 = uVar9 & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001087bb;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1a0] == (ResourceFormatSaver)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
      local_148 = "_set_uid";
      local_108 = (undefined1[16])0x0;
      local_118[2] = 0;
      local_118[3] = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 6;
      local_e0 = 1;
      local_d8 = (undefined1(*) [16])0x0;
      local_c8 = 0;
      local_c0 = 0;
      local_b0 = 0;
      local_140 = 8;
      String::parse_latin1((StrRange*)local_118);
      local_e0 = CONCAT44(local_e0._4_4_, 8);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_148);
      local_118[2] = local_148._0_4_;
      uVar6 = local_108._0_8_;
      if (local_108._0_8_ != local_140) {
         if (local_108._0_8_ != 0) {
            LOCK();
            plVar8 = (long*)( local_108._0_8_ + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               auVar1._8_8_ = 0;
               auVar1._0_8_ = local_108._8_8_;
               local_108 = auVar1 << 0x40;
               Memory::free_static((void*)( uVar6 + -0x10 ), false);
            }

         }

         local_108._0_8_ = local_140;
         local_140 = 0;
      }

      if (local_108._8_8_ != local_138) {
         StringName::unref();
         lVar7 = local_138;
         local_138 = 0;
         local_108._8_8_ = lVar7;
      }

      lVar3 = local_f0;
      lVar7 = local_128;
      local_f8 = CONCAT44(local_f8._4_4_, local_130);
      if (local_f0 == local_128) {
         local_e8 = CONCAT44(local_e8._4_4_, local_120);
         if (local_f0 != 0) {
            LOCK();
            plVar8 = (long*)( local_f0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_f0 != 0) {
            LOCK();
            plVar8 = (long*)( local_f0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_f0 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         local_f0 = local_128;
         local_e8 = CONCAT44(local_e8._4_4_, local_120);
      }

      if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
         StringName::unref();
      }

      lVar7 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar8 = (long*)( local_140 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      if (local_d8 == (undefined1(*) [16])0x0) {
         local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_d8[1] = 0;
         *local_d8 = (undefined1[16])0x0;
      }

      puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[10] = 6;
      *(undefined8*)( puVar5 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
      *puVar5 = local_148._0_4_;
      if (local_140 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_140);
      }

      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_138);
      puVar5[6] = local_130;
      if (*(long*)( puVar5 + 8 ) != local_128) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_128);
      }

      lVar3 = local_128;
      puVar5[10] = local_120;
      lVar7 = *(long*)( *local_d8 + 8 );
      *(undefined8*)( puVar5 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar5 + 0x10 ) = local_d8;
      *(long*)( puVar5 + 0xe ) = lVar7;
      if (lVar7 != 0) {
         *(undefined4**)( lVar7 + 0x30 ) = puVar5;
      }

      lVar7 = *(long*)*local_d8;
      *(undefined4**)( *local_d8 + 8 ) = puVar5;
      if (lVar7 == 0) {
         *(undefined4**)*local_d8 = puVar5;
      }

      *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
      if (local_128 != 0) {
         LOCK();
         plVar8 = (long*)( local_128 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_128 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
         StringName::unref();
      }

      lVar7 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar8 = (long*)( local_140 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<long,void>::get_class_info((GetTypeInfo<long,void>*)&local_148);
      if (local_d8 == (undefined1(*) [16])0x0) {
         local_d8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_d8[1] = 0;
         *local_d8 = (undefined1[16])0x0;
      }

      puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[10] = 6;
      *(undefined8*)( puVar5 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
      *puVar5 = local_148._0_4_;
      if (local_140 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_140);
      }

      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_138);
      puVar5[6] = local_130;
      if (*(long*)( puVar5 + 8 ) != local_128) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_128);
      }

      lVar3 = local_128;
      puVar5[10] = local_120;
      lVar7 = *(long*)( *local_d8 + 8 );
      *(undefined8*)( puVar5 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar5 + 0x10 ) = local_d8;
      *(long*)( puVar5 + 0xe ) = lVar7;
      if (lVar7 != 0) {
         *(undefined4**)( lVar7 + 0x30 ) = puVar5;
      }

      lVar7 = *(long*)*local_d8;
      *(undefined4**)( *local_d8 + 8 ) = puVar5;
      if (lVar7 == 0) {
         *(undefined4**)*local_d8 = puVar5;
      }

      *(int*)local_d8[1] = *(int*)local_d8[1] + 1;
      if (local_128 != 0) {
         LOCK();
         plVar8 = (long*)( local_128 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_128 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
         StringName::unref();
      }

      lVar7 = local_140;
      if (local_140 != 0) {
         LOCK();
         plVar8 = (long*)( local_140 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_b8, 4);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x1a8 ) = 0;
      lVar7 = *(long*)( this + 8 );
      pcVar4 = *(code**)( lVar7 + 0xd8 );
      if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar7 + 0xd0 ) ),pcVar4 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "ResourceFormatSaver");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140 == 0) {
            lVar7 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') goto LAB_00108f70;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00108f8d:lVar7 = *(long*)( this + 8 );
            pcVar4 = *(code**)( lVar7 + 200 );
            if (( ( pcVar4 == (code*)0x0 ) || ( *(long*)( lVar7 + 0xe0 ) == 0 ) ) && ( pcVar4 = *(code**)( lVar7 + 0xc0 ) ),pcVar4 == (code*)0x0) goto LAB_00108e85;
            uVar6 = ( *pcVar4 )(*(undefined8*)( lVar7 + 0xa0 ));
            *(undefined8*)( this + 0x1a8 ) = uVar6;
         }
 else {
            lVar7 = *(long*)( local_140 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_140);
            if (StringName::configured != '\0') {
               LAB_00108f70:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar7 == 0) goto LAB_00108f8d;
         }

         lVar7 = *(long*)( this + 8 );
      }
 else {
         uVar6 = ( *pcVar4 )(*(undefined8*)( lVar7 + 0xa0 ), this + 0x198, uVar2);
         *(undefined8*)( this + 0x1a8 ) = uVar6;
         lVar7 = *(long*)( this + 8 );
      }

      LAB_00108e85:if (*(char*)( lVar7 + 0x29 ) != '\0') {
         plVar8 = (long*)operator_new(0x18, "");
         *plVar8 = (long)( this + 0x1a8 );
         plVar8[1] = (long)( this + 0x1a0 );
         plVar8[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar8;
      }

      this[0x1a0] = (ResourceFormatSaver)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   pcVar4 = *(code**)( this + 0x1a8 );
   uVar9 = 0xf;
   if (pcVar4 != (code*)0x0) {
      local_150 = 0;
      if (local_160 != 0) {
         plVar8 = (long*)( local_160 + -0x10 );
         do {
            lVar7 = *plVar8;
            if (lVar7 == 0) goto LAB_0010885a;
            LOCK();
            lVar3 = *plVar8;
            bVar10 = lVar7 == lVar3;
            if (bVar10) {
               *plVar8 = lVar7 + 1;
               lVar3 = lVar7;
            }

            UNLOCK();
         }
 while ( !bVar10 );
         if (lVar3 != -1) {
            local_150 = local_160;
         }

         LAB_0010885a:pcVar4 = *(code**)( this + 0x1a8 );
      }

      ppcStack_70 = &local_148;
      local_78 = &local_150;
      local_148 = (char*)param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar4 )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x198, pcVar4, &local_78, local_118);
      }

      lVar7 = local_150;
      uVar9 = (ulong)local_118[0];
      if (local_150 != 0) {
         LOCK();
         plVar8 = (long*)( local_150 + -0x10 );
         *plVar8 = *plVar8 + -1;
         UNLOCK();
         if (*plVar8 == 0) {
            local_150 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }

   LAB_001087bb:lVar7 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar8 = (long*)( local_160 + -0x10 );
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* ResourceSaver::remove_custom_savers() */void ResourceSaver::remove_custom_savers(void) {
   undefined8 *puVar1;
   Object *this;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   Object *local_60[2];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50[0] = 0;
   if (0 < saver_count) {
      lVar6 = 0;
      lVar5 = 0;
      do {
         pOVar4 = (Object*)( &saver )[lVar6];
         if (*(long*)( pOVar4 + 0x98 ) != 0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               pOVar4 = (Object*)0x0;
            }

            if (lVar5 == 0) {
               lVar5 = 1;
            }
 else {
               lVar5 = *(long*)( lVar5 + -8 ) + 1;
            }

            iVar3 = CowData<Ref<ResourceFormatSaver>>::resize<false>((CowData<Ref<ResourceFormatSaver>>*)local_50, lVar5);
            if (iVar3 == 0) {
               if (local_50[0] == 0) {
                  lVar7 = -1;
                  lVar5 = 0;
                  LAB_00109672:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar5, "p_index", "size()", "", false, false);
                  lVar5 = local_50[0];
                  goto joined_r0x001093f8;
               }

               lVar5 = *(long*)( local_50[0] + -8 );
               lVar7 = lVar5 + -1;
               if (lVar7 < 0) goto LAB_00109672;
               CowData<Ref<ResourceFormatSaver>>::_copy_on_write((CowData<Ref<ResourceFormatSaver>>*)local_50);
               lVar5 = local_50[0];
               puVar1 = (undefined8*)( local_50[0] + lVar7 * 8 );
               this(Object * ) * puVar1;
               if (this == pOVar4) goto joined_r0x001093f8;
               *puVar1 = pOVar4;
               if (pOVar4 == (Object*)0x0) {
                  if (( ( this == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00109213;
                  LAB_00109539:if (*(code**)( *(long*)this + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
                     bVar8 = StringName::configured != '\0';
                     *(undefined***)this = &PTR__initialize_classv_0010e450;
                     if (( ( ( bVar8 ) && ( ( *(long*)( this + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( this + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( this + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( this + 0x180 ) != 0 ) ) )) {
                        StringName::unref();
                     }

                     *(undefined***)this = &PTR__initialize_classv_0010e2f0;
                     Object::~Object(this);
                  }
 else {
                     ( **(code**)( *(long*)this + 0x140 ) )(this);
                  }

                  Memory::free_static(this, false);
                  lVar5 = local_50[0];
                  goto joined_r0x001093f8;
               }

               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *puVar1 = 0;
                  if (this != (Object*)0x0) {
                     cVar2 = RefCounted::unreference();
                     goto joined_r0x0010964a;
                  }

               }
 else if (this != (Object*)0x0) {
                  cVar2 = RefCounted::unreference();
                  joined_r0x0010964a:if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) goto LAB_00109539;
               }

               cVar2 = RefCounted::unreference();
               lVar5 = local_50[0];
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               lVar5 = local_50[0];
               joined_r0x001093f8:local_50[0] = lVar5;
               if (pOVar4 == (Object*)0x0) goto LAB_00109213;
               cVar2 = RefCounted::unreference();
               lVar5 = local_50[0];
            }

            local_50[0] = lVar5;
            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar4) ),lVar5 = local_50[0],cVar2 != '\0') {
               if (*(code**)( *(long*)pOVar4 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
                  bVar8 = StringName::configured != '\0';
                  *(undefined***)pOVar4 = &PTR__initialize_classv_0010e450;
                  if (( ( ( ( bVar8 ) && ( ( *(long*)( pOVar4 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar4 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( pOVar4 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar4 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) ) ) && ( *(long*)( pOVar4 + 0x180 ) != 0 )) {
                     StringName::unref();
                  }

                  *(undefined***)pOVar4 = &PTR__initialize_classv_0010e2f0;
                  Object::~Object(pOVar4);
               }
 else {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               }

               Memory::free_static(pOVar4, false);
            }

         }

         LAB_00109213:lVar6 = lVar6 + 1;
      }
 while ( (int)lVar6 < saver_count );
      if (( lVar5 != 0 ) && ( 0 < *(long*)( lVar5 + -8 ) )) {
         lVar6 = 0;
         do {
            while (( pOVar4 = *(Object**)( lVar5 + lVar6 * 8 ) ),pOVar4 == (Object*)0x0 || ( local_60[0] = pOVar4 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
               local_60[0] = (Object*)0x0;
               remove_resource_format_saver(local_60);
               LAB_00109261:lVar6 = lVar6 + 1;
               if (*(long*)( lVar5 + -8 ) <= lVar6) goto LAB_001093a0;
            }
;
            remove_resource_format_saver(local_60);
            cVar2 = RefCounted::unreference();
            if (( cVar2 == '\0' ) || ( cVar2 = cVar2 == '\0' )) goto LAB_00109261;
            if (*(code**)( *(long*)pOVar4 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
               bVar8 = StringName::configured != '\0';
               *(undefined***)pOVar4 = &PTR__initialize_classv_0010e450;
               if (( ( ( bVar8 ) && ( ( *(long*)( pOVar4 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( pOVar4 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( pOVar4 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( pOVar4 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( pOVar4 + 0x180 ) != 0 ) ) )) {
                  StringName::unref();
               }

               *(undefined***)pOVar4 = &PTR__initialize_classv_0010e2f0;
               Object::~Object(pOVar4);
            }
 else {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            }

            lVar6 = lVar6 + 1;
            Memory::free_static(pOVar4, false);
         }
 while ( lVar6 < *(long*)( lVar5 + -8 ) );
      }

   }

   LAB_001093a0:CowData<Ref<ResourceFormatSaver>>::_unref((CowData<Ref<ResourceFormatSaver>>*)local_50);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
   return (uint)CONCAT71(0x10e5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* ResourceFormatSaver::is_class_ptr(void*) const */uint ResourceFormatSaver::is_class_ptr(ResourceFormatSaver *this, void *param_1) {
   return (uint)CONCAT71(0x10e5, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10e5, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ResourceFormatSaver::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatSaver::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatSaver::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatSaver::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatSaver::_validate_propertyv(PropertyInfo&) const */void ResourceFormatSaver::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ResourceFormatSaver::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatSaver::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ResourceFormatSaver::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatSaver::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatSaver::_notificationv(int, bool) */void ResourceFormatSaver::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010e2f0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010e2f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* ResourceFormatSaver::~ResourceFormatSaver() */void ResourceFormatSaver::~ResourceFormatSaver(ResourceFormatSaver *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010e450;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109bf1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109bf1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109bf1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109bf1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00109bf1:*(undefined***)this = &PTR__initialize_classv_0010e2f0;
   Object::~Object((Object*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceSaver::add_custom_resource_format_saver(String const&) [clone .part.0] [clone .cold] */void ResourceSaver::add_custom_resource_format_saver(String *param_1) {
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
/* CowData<Ref<ResourceFormatSaver> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<ResourceFormatSaver>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceFormatSaver::_bind_methods() [clone .cold] */void ResourceFormatSaver::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceFormatSaver::_get_class_namev() const */undefined8 *ResourceFormatSaver::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109e23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109e23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
         goto LAB_00109e8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
   LAB_00109e8e:return &_get_class_namev();
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
         LAB_00109f03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109f03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00109f6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00109f6e:return &_get_class_namev();
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
/* ResourceFormatSaver::~ResourceFormatSaver() */void ResourceFormatSaver::~ResourceFormatSaver(ResourceFormatSaver *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0010e450;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a0a1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a0a1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a0a1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a0a1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a0a1:*(undefined***)this = &PTR__initialize_classv_0010e2f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1f8);
   return;
}
/* ResourceFormatSaver::get_class() const */void ResourceFormatSaver::get_class(void) {
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
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      LAB_0010a588:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a588;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010a5a6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010a5a6:if (lVar2 == 0) {
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
/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this, List *param_1, bool param_2) {
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
   local_78 = "ResourceFormatSaver";
   local_70 = 0x13;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourceFormatSaver";
   local_98 = 0;
   local_70 = 0x13;
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
      LAB_0010a988:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a988;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010a9a5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010a9a5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "ResourceFormatSaver", false);
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
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
                  if (lVar5 == 0) goto LAB_0010accf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
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

      LAB_0010accf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010ad83;
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
                     if (lVar5 == 0) goto LAB_0010ae33;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
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

         LAB_0010ae33:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010ad83;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010ad83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatSaver::is_class(String const&) const */undefined8 ResourceFormatSaver::is_class(ResourceFormatSaver *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010af5f;
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

      LAB_0010af5f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010b013;
   }

   cVar5 = String::operator ==(param_1, "ResourceFormatSaver");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010b013:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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

         goto joined_r0x0010b20c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b20c:local_58 = lVar2;
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
/* GetTypeInfo<unsigned int, void>::get_class_info() */GetTypeInfo<unsigned_int,void> * __thiscall
GetTypeInfo<unsigned_int,void>::get_class_info(GetTypeInfo<unsigned_int,void> *this){
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
   local_48 = &_LC7;
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

         goto joined_r0x0010b38c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b38c:local_58 = lVar2;
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
   local_48 = &_LC7;
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

         goto joined_r0x0010b50c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b50c:local_58 = lVar2;
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
/* GetTypeInfo<String, void>::get_class_info() */GetTypeInfo<String,void> * __thiscall
GetTypeInfo<String,void>::get_class_info(GetTypeInfo<String,void> *this){
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
   local_48 = &_LC7;
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

         goto joined_r0x0010b68c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b68c:local_58 = lVar2;
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
/* GetTypeInfo<Vector<String>, void>::get_class_info() */GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this){
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
   local_48 = &_LC7;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
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

         goto joined_r0x0010b80c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010b80c:local_58 = lVar2;
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
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
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
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

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
/* GetTypeInfo<Ref<Resource>, void>::get_class_info() */GetTypeInfo<Ref<Resource>,void> * __thiscall
GetTypeInfo<Ref<Resource>,void>::get_class_info(GetTypeInfo<Ref<Resource>,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Resource";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x18;
   *(undefined4*)( this + 0x18 ) = 0x11;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) != 0x11) {
         StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
         goto LAB_0010c200;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_0010c200:lVar2 = local_58;
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
/* WARNING: Removing unreachable block (ram,0x0010c598) *//* WARNING: Removing unreachable block (ram,0x0010c6c8) *//* WARNING: Removing unreachable block (ram,0x0010c890) *//* WARNING: Removing unreachable block (ram,0x0010c6d4) *//* WARNING: Removing unreachable block (ram,0x0010c6de) *//* WARNING: Removing unreachable block (ram,0x0010c870) *//* WARNING: Removing unreachable block (ram,0x0010c6ea) *//* WARNING: Removing unreachable block (ram,0x0010c6f4) *//* WARNING: Removing unreachable block (ram,0x0010c850) *//* WARNING: Removing unreachable block (ram,0x0010c700) *//* WARNING: Removing unreachable block (ram,0x0010c70a) *//* WARNING: Removing unreachable block (ram,0x0010c830) *//* WARNING: Removing unreachable block (ram,0x0010c716) *//* WARNING: Removing unreachable block (ram,0x0010c720) *//* WARNING: Removing unreachable block (ram,0x0010c810) *//* WARNING: Removing unreachable block (ram,0x0010c72c) *//* WARNING: Removing unreachable block (ram,0x0010c736) *//* WARNING: Removing unreachable block (ram,0x0010c7f0) *//* WARNING: Removing unreachable block (ram,0x0010c742) *//* WARNING: Removing unreachable block (ram,0x0010c74c) *//* WARNING: Removing unreachable block (ram,0x0010c7d0) *//* WARNING: Removing unreachable block (ram,0x0010c754) *//* WARNING: Removing unreachable block (ram,0x0010c76a) *//* WARNING: Removing unreachable block (ram,0x0010c776) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010c9d8) *//* WARNING: Removing unreachable block (ram,0x0010cb08) *//* WARNING: Removing unreachable block (ram,0x0010ccd0) *//* WARNING: Removing unreachable block (ram,0x0010cb14) *//* WARNING: Removing unreachable block (ram,0x0010cb1e) *//* WARNING: Removing unreachable block (ram,0x0010ccb0) *//* WARNING: Removing unreachable block (ram,0x0010cb2a) *//* WARNING: Removing unreachable block (ram,0x0010cb34) *//* WARNING: Removing unreachable block (ram,0x0010cc90) *//* WARNING: Removing unreachable block (ram,0x0010cb40) *//* WARNING: Removing unreachable block (ram,0x0010cb4a) *//* WARNING: Removing unreachable block (ram,0x0010cc70) *//* WARNING: Removing unreachable block (ram,0x0010cb56) *//* WARNING: Removing unreachable block (ram,0x0010cb60) *//* WARNING: Removing unreachable block (ram,0x0010cc50) *//* WARNING: Removing unreachable block (ram,0x0010cb6c) *//* WARNING: Removing unreachable block (ram,0x0010cb76) *//* WARNING: Removing unreachable block (ram,0x0010cc30) *//* WARNING: Removing unreachable block (ram,0x0010cb82) *//* WARNING: Removing unreachable block (ram,0x0010cb8c) *//* WARNING: Removing unreachable block (ram,0x0010cc10) *//* WARNING: Removing unreachable block (ram,0x0010cb94) *//* WARNING: Removing unreachable block (ram,0x0010cbaa) *//* WARNING: Removing unreachable block (ram,0x0010cbb6) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* void memdelete<ResourceFormatSaver>(ResourceFormatSaver*) */void memdelete<ResourceFormatSaver>(ResourceFormatSaver *param_1) {
   char cVar1;
   bool bVar2;
   cVar1 = predelete_handler((Object*)param_1);
   if (cVar1 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) != ResourceFormatSaver::~ResourceFormatSaver) {
      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   bVar2 = StringName::configured != '\0';
   *(undefined***)param_1 = &PTR__initialize_classv_0010e450;
   if (bVar2) {
      if (*(long*)( param_1 + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce18;
      }

      if (*(long*)( param_1 + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce18;
      }

      if (*(long*)( param_1 + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce18;
      }

      if (*(long*)( param_1 + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ce18;
      }

      if (*(long*)( param_1 + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010ce18:*(undefined***)param_1 = &PTR__initialize_classv_0010e2f0;
   Object::~Object((Object*)param_1);
   Memory::free_static(param_1, false);
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
/* GetTypeInfo<Error, void>::get_class_info() */GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this){
   long *plVar1;
   code *pcVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "Error";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x10cf00);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar4 = lVar5 + -2;
         if (-1 < lVar4) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar4 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            pcVar3 = local_48;
            lVar5 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
                  lVar5 = local_60;
               }

            }

            goto joined_r0x0010cff3;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_68);
   lVar5 = local_60;
   joined_r0x0010cff3:local_60 = lVar5;
   if (lVar5 != 0) {
      LOCK();
      plVar1 = (long*)( lVar5 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
   }

   lVar5 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   lVar5 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar1 = (long*)( local_70 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
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
      LAB_0010d5b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010d5b0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010d489:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010d489;
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
      goto LAB_0010d606;
   }

   if (lVar10 == lVar7) {
      LAB_0010d52f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010d606:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010d51a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010d52f;
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
   LAB_0010d51a:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* CowData<Ref<ResourceFormatSaver> >::_unref() */void CowData<Ref<ResourceFormatSaver>>::_unref(CowData<Ref<ResourceFormatSaver>> *this) {
   long *plVar1;
   long lVar2;
   Object *this_00;
   code *pcVar3;
   char cVar4;
   long *plVar5;
   long lVar6;
   bool bVar7;
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
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   lVar6 = 0;
   plVar5 = plVar1;
   if (lVar2 != 0) {
      do {
         while (( *plVar5 == 0 || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0' )) {
            LAB_0010d6b0:lVar6 = lVar6 + 1;
            plVar5 = plVar5 + 1;
            if (lVar2 == lVar6) goto LAB_0010d7ca;
         }
;
         this_00 = (Object*)*plVar5;
         cVar4 = predelete_handler(this_00);
         if (cVar4 == '\0') goto LAB_0010d6b0;
         if (*(code**)( *(long*)this_00 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
            bVar7 = StringName::configured != '\0';
            *(undefined***)this_00 = &PTR__initialize_classv_0010e450;
            if (( ( ( bVar7 ) && ( ( *(long*)( this_00 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this_00 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( this_00 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( this_00 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( this_00 + 0x180 ) != 0 ) ) )) {
               StringName::unref();
            }

            *(undefined***)this_00 = &PTR__initialize_classv_0010e2f0;
            Object::~Object(this_00);
         }
 else {
            ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         }

         lVar6 = lVar6 + 1;
         plVar5 = plVar5 + 1;
         Memory::free_static(this_00, false);
      }
 while ( lVar2 != lVar6 );
   }

   LAB_0010d7ca:Memory::free_static(plVar1 + -2, false);
   return;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      LAB_0010daa0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_0010daa0;
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
            goto LAB_0010d9b1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010d9b1:puVar7[-1] = param_1;
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
/* ResourceFormatSaver::_initialize_classv() */void ResourceFormatSaver::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_0010dc59;
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_0010dd6a:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_0010dd7a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010dd6a;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010dd7a;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_48 = "RefCounted";
   local_58 = 0;
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
   local_48 = "ResourceFormatSaver";
   local_60 = 0;
   local_40 = 0x13;
   String::parse_latin1((StrRange*)&local_60);
   StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
   ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
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

   _bind_methods();
   initialize_class()::initialized =
   '\x01';
   LAB_0010dc59:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Ref<ResourceFormatSaver> >::_realloc(long) */undefined8 CowData<Ref<ResourceFormatSaver>>::_realloc(CowData<Ref<ResourceFormatSaver>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Ref<ResourceFormatSaver> >::resize<false>(long) */undefined8 CowData<Ref<ResourceFormatSaver>>::resize<false>(CowData<Ref<ResourceFormatSaver>> *this, long param_1) {
   long *plVar1;
   Object *this_00;
   code *pcVar2;
   char cVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   bool bVar11;
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
      LAB_0010e1f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010e1f0;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010dfca:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (plVar1 = (long*)( lVar6 + uVar8 * 8 ),*plVar1 == 0) {
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010dfca;
         }
;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            this_00 = (Object*)*plVar1;
            cVar3 = predelete_handler(this_00);
            if (cVar3 != '\0') {
               if (*(code**)( *(long*)this_00 + 0x140 ) == ResourceFormatSaver::~ResourceFormatSaver) {
                  bVar11 = StringName::configured != '\0';
                  *(undefined***)this_00 = &PTR__initialize_classv_0010e450;
                  if (( ( ( bVar11 ) && ( ( *(long*)( this_00 + 0x1e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( this_00 + 0x1c8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( ( *(long*)( this_00 + 0x1b0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( ( *(long*)( this_00 + 0x198 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( this_00 + 0x180 ) != 0 ) ) )) {
                     StringName::unref();
                  }

                  *(undefined***)this_00 = &PTR__initialize_classv_0010e2f0;
                  Object::~Object(this_00);
               }
 else {
                  ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
               }

               Memory::free_static(this_00, false);
            }

         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_0010df90;
   }

   if (lVar10 == lVar7) {
      LAB_0010e16b:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010df90:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010e14b;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010e16b;
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
   LAB_0010e14b:puVar9[-1] = param_1;
   return 0;
}
/* ResourceSaver::saver */void ResourceSaver::_GLOBAL__sub_I_saver(void) {
   __cxa_atexit(__tcf_0, 0, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatSaver::~ResourceFormatSaver() */void ResourceFormatSaver::~ResourceFormatSaver(ResourceFormatSaver *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

