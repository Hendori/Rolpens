/* ShaderInclude::_dependency_changed() */void ShaderInclude::_dependency_changed(void) {
   Resource::emit_changed();
   return;
}
/* ResourceFormatLoaderShaderInclude::handles_type(String const&) const */void ResourceFormatLoaderShaderInclude::handles_type(ResourceFormatLoaderShaderInclude *this, String *param_1) {
   String::operator ==(param_1, "ShaderInclude");
   return;
}
/* ResourceFormatSaverShaderInclude::recognize(Ref<Resource> const&) const */void ResourceFormatSaverShaderInclude::recognize(ResourceFormatSaverShaderInclude *this, Ref *param_1) {
   long *plVar1;
   StringName *pSVar2;
   plVar1 = *(long**)param_1;
   if (plVar1[1] == 0) {
      pSVar2 = (StringName*)plVar1[0x23];
      if (pSVar2 == (StringName*)0x0) {
         pSVar2 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
         StringName::operator ==(pSVar2, "ShaderInclude");
         return;
      }

   }
 else {
      pSVar2 = (StringName*)( plVar1[1] + 0x20 );
   }

   StringName::operator ==(pSVar2, "ShaderInclude");
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
/* ShaderInclude::get_code() const */void ShaderInclude::get_code(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x240 ));
   }

   return;
}
/* ResourceFormatLoaderShaderInclude::get_resource_type(String const&) const */String *ResourceFormatLoaderShaderInclude::get_resource_type(String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char cVar4;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::get_extension();
   String::to_lower();
   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
      }

   }

   cVar4 = String::operator ==((String*)&local_40, "gdshaderinc");
   *(undefined8*)param_1 = 0;
   if (cVar4 == '\0') {
      local_30 = 0;
      local_38 = "";
      String::parse_latin1((StrRange*)param_1);
   }
 else {
      local_30 = 0xd;
      local_38 = "ShaderInclude";
      String::parse_latin1((StrRange*)param_1);
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
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatLoaderShaderInclude::get_recognized_extensions(List<String, DefaultAllocator>*)
   const */void ResourceFormatLoaderShaderInclude::get_recognized_extensions(ResourceFormatLoaderShaderInclude *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = "gdshaderinc";
   local_30 = 0xb;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatSaverShaderInclude::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */void ResourceFormatSaverShaderInclude::get_recognized_extensions(ResourceFormatSaverShaderInclude *this, Ref *param_1, List *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_1 != 0 ) && ( lVar3 = __dynamic_cast(*(long*)param_1, &Object::typeinfo, &ShaderInclude::typeinfo, 0) ),lVar3 != 0) {
      local_40 = 0;
      local_38 = "gdshaderinc";
      local_30 = 0xb;
      String::parse_latin1((StrRange*)&local_40);
      if (*(long*)param_2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_2 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }

      this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
      *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
      *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
      if (local_40 != 0) {
         CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
      }

      lVar2 = local_40;
      plVar1 = *(long**)param_2;
      lVar3 = plVar1[1];
      *(undefined8*)( this_00 + 8 ) = 0;
      *(long**)( this_00 + 0x18 ) = plVar1;
      *(long*)( this_00 + 0x10 ) = lVar3;
      if (lVar3 != 0) {
         *(CowData<char32_t>**)( lVar3 + 8 ) = this_00;
      }

      plVar1[1] = (long)this_00;
      if (*plVar1 == 0) {
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         *plVar1 = (long)this_00;
      }
 else {
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatSaverShaderInclude::save(Ref<Resource> const&, String const&, unsigned int) */int ResourceFormatSaverShaderInclude::save(Ref *param_1, String *param_2, uint param_3) {
   long *plVar1;
   long lVar2;
   undefined *puVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   int local_6c;
   long local_68;
   Object *local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(long*)param_2 == 0 ) || ( pOVar6 = (Object*)__dynamic_cast(*(long*)param_2, &Object::typeinfo, &ShaderInclude::typeinfo, 0) ),pOVar6 == (Object*)0x0 )) {
      local_6c = 0x1f;
      _err_print_error(&_LC19, "scene/resources/shader_include.cpp", 0x86, "Condition \"shader_inc.is_null()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_001005ae;
   }

   local_68 = 0;
   plVar1 = (long*)( *(long*)( pOVar6 + 0x240 ) + -0x10 );
   if (*(long*)( pOVar6 + 0x240 ) != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00100616;
         LOCK();
         lVar7 = *plVar1;
         bVar8 = lVar2 == lVar7;
         if (bVar8) {
            *plVar1 = lVar2 + 1;
            lVar7 = lVar2;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar7 != -1) {
         local_68 = *(long*)( pOVar6 + 0x240 );
      }

   }

   LAB_00100616:FileAccess::open((String*)&local_60, param_3, (Error*)0x2);
   if (local_6c == 0) {
      ( **(code**)( *(long*)local_60 + 0x2a8 ) )();
      iVar5 = ( **(code**)( *(long*)local_60 + 0x250 ) )();
      if (( iVar5 != 0 ) && ( iVar5 = iVar5 != 0x12 )) {
         local_6c = 0x14;
      }

   }
 else {
      local_50 = 0;
      local_48 = &_LC20;
      local_40 = 2;
      String::parse_latin1((StrRange*)&local_50);
      operator+((char *)&
      local_58,(String*)"Cannot save shader include \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC19, "scene/resources/shader_include.cpp", 0x8d, "Condition \"error\" is true. Returning: error", (String*)&local_48, 0, 0);
      puVar3 = local_48;
      if (local_48 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (undefined*)0x0;
            Memory::free_static(puVar3 + -0x10, false);
         }

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

   }

   if (( ( local_60 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
   Memory::free_static(local_60, false);
}
if (local_68 == 0) {
   LAB_001006a0:cVar4 = RefCounted::unreference();
}
 else {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_001006a0;
   Memory::free_static((void*)( local_68 + -0x10 ), false);
   cVar4 = RefCounted::unreference();
}
if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
   ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
   Memory::free_static(pOVar6, false);
}
LAB_001005ae:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_6c;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ShaderInclude::set_include_path(String const&) */void ShaderInclude::set_include_path(ShaderInclude *this, String *param_1) {
   if (*(long*)( this + 0x248 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x248 ), (CowData*)param_1);
      return;
   }

   return;
}
/* ShaderInclude::set_code(String const&) */void ShaderInclude::set_code(ShaderInclude *this, String *param_1) {
   long *plVar1;
   Object *pOVar2;
   Callable *pCVar3;
   Callable *pCVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   void *pvVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
   ShaderPreprocessor local_88[32];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x240 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x240 ), (CowData*)param_1);
   }

   iVar6 = *(int*)( this + 0x274 );
   if (iVar6 != 0) {
      lVar7 = *(long*)( this + 0x250 );
      lVar9 = 0;
      while (true) {
         pCVar4 = *(Callable**)( lVar7 + lVar9 * 8 );
         create_custom_callable_function_pointer<ShaderInclude>((ShaderInclude*)local_68, (char*)this, (_func_void*)"&ShaderInclude::_dependency_changed");
         Resource::disconnect_changed(pCVar4);
         Callable::~Callable((Callable*)local_68);
         if (iVar6 <= (int)lVar9 + 1) break;
         lVar9 = lVar9 + 1;
      }
;
   }

   Resource::get_path();
   if (( ( local_98 == 0 ) || ( *(uint*)( local_98 + -8 ) < 2 ) ) && ( local_98 != *(long*)( this + 0x248 ) )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( this + 0x248 ));
   }

   local_90 = 0;
   local_68 = (undefined1[16])0x0;
   local_48 = 2;
   local_58 = (undefined1[16])0x0;
   ShaderPreprocessor::ShaderPreprocessor(local_88);
   iVar6 = ShaderPreprocessor::preprocess((String*)local_88, param_1, (String*)&local_98, (String*)&local_90, (List*)0x0, (List*)0x0, (HashSet*)0x0, (List*)local_68, (List*)0x0, (_func_void_List_ptr*)0x0);
   if (iVar6 == 0) {
      HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::operator =((HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)( this + 0x250 ), (HashSet*)local_68);
   }

   ShaderPreprocessor::~ShaderPreprocessor(local_88);
   pvVar8 = (void*)local_68._0_8_;
   if ((void*)local_68._0_8_ == (void*)0x0) goto LAB_00100a8b;
   if (local_48._4_4_ != 0) {
      if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
         memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
         if (local_48._4_4_ == 0) goto LAB_00100a5d;
      }

      lVar7 = 0;
      do {
         plVar1 = (long*)( (long)pvVar8 + lVar7 * 8 );
         if (*plVar1 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar2 = (Object*)*plVar1;
               cVar5 = predelete_handler(pOVar2);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            pvVar8 = (void*)local_68._0_8_;
         }

         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < local_48._4_4_ );
      local_48 = local_48 & 0xffffffff;
      if (pvVar8 == (void*)0x0) goto LAB_00100a8b;
   }

   LAB_00100a5d:Memory::free_static(pvVar8, false);
   Memory::free_static((void*)local_58._0_8_, false);
   Memory::free_static((void*)local_68._8_8_, false);
   Memory::free_static((void*)local_58._8_8_, false);
   LAB_00100a8b:lVar7 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   lVar7 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   iVar6 = *(int*)( this + 0x274 );
   if (iVar6 != 0) {
      lVar7 = *(long*)( this + 0x250 );
      lVar9 = 0;
      while (true) {
         pCVar3 = *(Callable**)( lVar7 + lVar9 * 8 );
         create_custom_callable_function_pointer<ShaderInclude>((ShaderInclude*)local_68, (char*)this, (_func_void*)"&ShaderInclude::_dependency_changed");
         Resource::connect_changed(pCVar3, (uint)(ShaderInclude*)local_68);
         Callable::~Callable((Callable*)local_68);
         if (iVar6 <= (int)lVar9 + 1) break;
         lVar9 = lVar9 + 1;
      }
;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   Resource::emit_changed();
   return;
}
/* WARNING: Removing unreachable block (ram,0x00100f48) *//* WARNING: Removing unreachable block (ram,0x00100f96) *//* WARNING: Removing unreachable block (ram,0x00100fb0) *//* WARNING: Removing unreachable block (ram,0x00100f9e) *//* ResourceFormatLoaderShaderInclude::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */long *ResourceFormatLoaderShaderInclude::load(long *param_1, undefined8 param_2, Error *param_3, undefined8 param_4, undefined4 *param_5) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   Resource *this;
   long lVar5;
   ShaderInclude *this_00;
   Resource *pRVar6;
   long in_FS_OFFSET;
   byte bVar7;
   long local_58;
   long local_50;
   String local_48[8];
   long local_40;
   long local_30;
   bVar7 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0xc;
   }

   FileAccess::get_file_as_bytes(local_48, param_3);
   local_58 = 0;
   if (( ( local_40 == 0 ) || ( *(long*)( local_40 + -8 ) < 1 ) ) || ( iVar4 = String::parse_utf8((char*)&local_58, (int)local_40, SUB81(*(long*)( local_40 + -8 ), 0)) ),iVar4 == 0) {
      this(Resource * operator_new(0x278, ""));
      pRVar6 = this;
      for (lVar5 = 0x4f; lVar5 != 0; lVar5 = lVar5 + -1) {
         *(undefined8*)pRVar6 = 0;
         pRVar6 = pRVar6 + (ulong)bVar7 * -0x10 + 8;
      }

      Resource::Resource(this);
      *(undefined***)this = &PTR__initialize_classv_00107d18;
      *(undefined8*)( this + 0x270 ) = 2;
      for (int i = 0; i < 3; i++) {
         *(undefined1(*) [16])( this + ( 16*i + 576 ) ) = (undefined1[16])0;
      }

      postinitialize_handler((Object*)this);
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      cVar3 = RefCounted::reference();
      this_00 = (ShaderInclude*)0x0;
      if (cVar3 != '\0') {
         this_00 = (ShaderInclude*)this;
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
      }

      if (*(long*)( this_00 + 0x248 ) != *(long*)param_3) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this_00 + 0x248 ), (CowData*)param_3);
      }

      ShaderInclude::set_code(this_00, (String*)&local_58);
      if (param_5 == (undefined4*)0x0) {
         *param_1 = 0;
      }
 else {
         *param_5 = 0;
         *param_1 = 0;
      }

      lVar5 = __dynamic_cast(this_00, &Object::typeinfo, &Resource::typeinfo, 0);
      if (lVar5 != 0) {
         *param_1 = lVar5;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *param_1 = 0;
         }

      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }
 else {
      operator+((char *)&
      local_50,(String*)"Cannot parse shader include: ";
      _err_print_error(&_LC28, "scene/resources/shader_include.cpp", 0x62, "Condition \"error\" is true. Returning: nullptr", &local_50, 0);
      lVar5 = local_50;
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

      *param_1 = 0;
   }

   lVar5 = local_58;
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

   lVar5 = local_40;
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

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* ShaderInclude::_bind_methods() */void ShaderInclude::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_d8;
   long local_d0;
   long local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined *local_98;
   long local_90;
   long *local_88;
   int local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined8 local_60;
   undefined **local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = &local_68;
   local_60 = 0;
   local_68 = &_LC31;
   D_METHODP((char*)&local_98, (char***)"set_code", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar4 = create_method_bind<ShaderInclude,String_const&>(set_code);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar5 = local_88 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (undefined*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_98, (char***)"get_code", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (undefined**)0x0;
   pMVar4 = create_method_bind<ShaderInclude,String>(get_code);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)&local_98, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = local_88;
   if (local_88 != (long*)0x0) {
      LOCK();
      plVar5 = local_88 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_88 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_88[-1];
         lVar6 = 0;
         local_88 = (long*)0x0;
         plVar5 = plVar1;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_98 != (undefined*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_b0, true);
   _scs_create((char*)&local_b8, true);
   local_98 = &_LC5;
   local_c0 = 0;
   local_c8 = 0;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   local_98 = &_LC31;
   local_d0 = 0;
   local_90 = 4;
   String::parse_latin1((StrRange*)&local_d0);
   local_98 = (undefined*)CONCAT44(local_98._4_4_, 4);
   local_90 = 0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_d0);
   }

   local_88 = (long*)0x0;
   local_80 = 0;
   local_78 = 0;
   if (local_c8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)&local_c8);
      local_70 = 2;
      if (local_80 == 0x11) {
         StringName::StringName((StringName*)&local_a8, (String*)&local_78, false);
         if (local_88 == (long*)local_a8) {
            if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_88 = (long*)local_a8;
         }

         goto LAB_00101364;
      }

   }

   local_70 = 2;
   StringName::operator =((StringName*)&local_88, (StringName*)&local_c0);
   LAB_00101364:local_d8 = 0;
   local_a8 = "ShaderInclude";
   local_a0 = 0xd;
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_a8, (String*)&local_d8, false);
   ClassDB::add_property((StringName*)&local_a8, (PropertyInfo*)&local_98, (StringName*)&local_b8, (StringName*)&local_b0, -1);
   if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
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

   if (( StringName::configured != '\0' ) && ( local_88 != (long*)0x0 )) {
      StringName::unref();
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

   lVar2 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar1 = (long*)( local_d0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_c8;
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

   if (( ( ( StringName::configured != '\0' ) && ( ( local_c0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_b0 != 0 )) {
      StringName::unref();
   }

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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1084, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1083, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* ResourceFormatLoader::is_class_ptr(void*) const */uint ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x1083, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1083, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1084, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* ResourceFormatSaver::is_class_ptr(void*) const */uint ResourceFormatSaver::is_class_ptr(ResourceFormatSaver *this, void *param_1) {
   return (uint)CONCAT71(0x1083, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1083, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1084, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* ShaderInclude::is_class_ptr(void*) const */uint ShaderInclude::is_class_ptr(ShaderInclude *this, void *param_1) {
   return (uint)CONCAT71(0x1083, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1083, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1083, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1084, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ShaderInclude::_getv(StringName const&, Variant&) const */undefined8 ShaderInclude::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderInclude::_setv(StringName const&, Variant const&) */undefined8 ShaderInclude::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderInclude::_validate_propertyv(PropertyInfo&) const */void ShaderInclude::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ShaderInclude::_property_can_revertv(StringName const&) const */undefined8 ShaderInclude::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ShaderInclude::_property_get_revertv(StringName const&, Variant&) const */undefined8 ShaderInclude::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderInclude::_notificationv(int, bool) */void ShaderInclude::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<ShaderInclude, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderInclude,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderInclude,void> *this) {
   return;
}
/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<ShaderInclude, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderInclude,void>::get_argument_count(CallableCustomMethodPointer<ShaderInclude,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<ShaderInclude, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderInclude,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderInclude,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001082f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001082f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00108350;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00108350;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107bb8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107bb8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CallableCustomMethodPointer<ShaderInclude, void>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderInclude,void>::get_object(CallableCustomMethodPointer<ShaderInclude,void> *this) {
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
         goto LAB_00101c0d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00101c0d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00101c0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
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
/* ShaderInclude::get_save_class() const */ShaderInclude * __thiscall ShaderInclude::get_save_class(ShaderInclude *this){
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
/* ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude() */void ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude(ResourceFormatSaverShaderInclude *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101ed1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101ed1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101ed1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101ed1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101ed1:*(undefined***)this = &PTR__initialize_classv_00107bb8;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude() */void ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude(ResourceFormatSaverShaderInclude *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101fa1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101fa1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101fa1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101fa1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101fa1:*(undefined***)this = &PTR__initialize_classv_00107bb8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1f8);
   return;
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
         LAB_00102003:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102003;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010206e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010206e:return &_get_class_namev();
}
/* ShaderInclude::_get_class_namev() const */undefined8 *ShaderInclude::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001020e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001020e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderInclude");
         goto LAB_0010214e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderInclude");
   LAB_0010214e:return &_get_class_namev();
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
         LAB_001021d3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001021d3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
         goto LAB_0010223e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
   LAB_0010223e:return &_get_class_namev();
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
         LAB_001022c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001022c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_0010232e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_0010232e:return &_get_class_namev();
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
/* ShaderInclude::get_class() const */void ShaderInclude::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010272f;
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

      LAB_0010272f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001027e3;
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
                     if (lVar5 == 0) goto LAB_00102893;
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

         LAB_00102893:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001027e3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001027e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
                  if (lVar4 == 0) goto LAB_001029bf;
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

      LAB_001029bf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00102a73;
   }

   cVar5 = String::operator ==(param_1, "ResourceFormatSaver");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00102a73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatLoader::is_class(String const&) const */undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00102b3f;
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

      LAB_00102b3f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00102bf3;
   }

   cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00102bf3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderInclude::is_class(String const&) const */undefined8 ShaderInclude::is_class(ShaderInclude *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00102ccf;
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

      LAB_00102ccf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00102d83;
   }

   cVar6 = String::operator ==(param_1, "ShaderInclude");
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
                     if (lVar5 == 0) goto LAB_00102e43;
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

         LAB_00102e43:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00102d83;
      }

      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00102eec;
      }

   }

   LAB_00102d83:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00102eec:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 4;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010303c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010303c:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderInclude::~ShaderInclude() */void ShaderInclude::~ShaderInclude(ShaderInclude *this) {
   long *plVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x250 );
   *(undefined***)this = &PTR__initialize_classv_00107d18;
   if (pvVar5 == (void*)0x0) goto LAB_0010318b;
   if (*(int*)( this + 0x274 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x268 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 ) << 2);
         if (*(int*)( this + 0x274 ) == 0) goto LAB_00103157;
      }

      lVar4 = 0;
      do {
         plVar1 = (long*)( (long)pvVar5 + lVar4 * 8 );
         if (*plVar1 != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = (Object*)*plVar1;
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            pvVar5 = *(void**)( this + 0x250 );
         }

         lVar4 = lVar4 + 1;
      }
 while ( (uint)lVar4 < *(uint*)( this + 0x274 ) );
      *(undefined4*)( this + 0x274 ) = 0;
      if (pvVar5 == (void*)0x0) goto LAB_0010318b;
   }

   LAB_00103157:Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x260 ), false);
   Memory::free_static(*(void**)( this + 600 ), false);
   Memory::free_static(*(void**)( this + 0x268 ), false);
   LAB_0010318b:if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x248 );
         *(undefined8*)( this + 0x248 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* ShaderInclude::~ShaderInclude() */void ShaderInclude::~ShaderInclude(ShaderInclude *this) {
   long *plVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x250 );
   *(undefined***)this = &PTR__initialize_classv_00107d18;
   if (pvVar5 == (void*)0x0) goto LAB_0010331b;
   if (*(int*)( this + 0x274 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x268 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x270 ) * 4 ) << 2);
         if (*(int*)( this + 0x274 ) == 0) goto LAB_001032e7;
      }

      lVar4 = 0;
      do {
         plVar1 = (long*)( (long)pvVar5 + lVar4 * 8 );
         if (*plVar1 != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = (Object*)*plVar1;
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            pvVar5 = *(void**)( this + 0x250 );
         }

         lVar4 = lVar4 + 1;
      }
 while ( (uint)lVar4 < *(uint*)( this + 0x274 ) );
      *(undefined4*)( this + 0x274 ) = 0;
      if (pvVar5 == (void*)0x0) goto LAB_0010331b;
   }

   LAB_001032e7:Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x260 ), false);
   Memory::free_static(*(void**)( this + 600 ), false);
   Memory::free_static(*(void**)( this + 0x268 ), false);
   LAB_0010331b:if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x248 );
         *(undefined8*)( this + 0x248 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x278);
   return;
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
      LAB_001036b8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001036b8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001036d6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001036d6:if (lVar2 == 0) {
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
/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this, List *param_1, bool param_2) {
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
   if (local_90 == 0) {
      LAB_00103ab8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103ab8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103ad5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00103ad5:if (lVar2 == 0) {
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
      LAB_00103f08:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103f08;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103f25;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00103f25:if (lVar2 == 0) {
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
/* ResourceFormatSaver::_initialize_classv() */void ResourceFormatSaver::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_0010434b;
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
      if (local_68 == 0) {
         LAB_0010445a:if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) {
            LAB_0010446a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010445a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) goto LAB_0010446a;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "ResourceFormatSaver";
   local_70 = 0;
   local_50 = 0x13;
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

   if ((code*)PTR__bind_methods_0010b008 != RefCounted::_bind_methods) {
      ResourceFormatSaver::_bind_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_0010434b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatLoader::_initialize_classv() */void ResourceFormatLoader::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_0010464b;
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
      if (local_68 == 0) {
         LAB_0010475a:if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) {
            LAB_0010476a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010475a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) goto LAB_0010476a;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "ResourceFormatLoader";
   local_70 = 0;
   local_50 = 0x14;
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

   if ((code*)PTR__bind_methods_0010b018 != RefCounted::_bind_methods) {
      ResourceFormatLoader::_bind_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_0010464b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<ShaderInclude, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderInclude,void>::call(CallableCustomMethodPointer<ShaderInclude,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar7 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      uVar7 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar7 != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001049cf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_001049cf;
      lVar2 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar3 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001049a8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), uVar7, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00104b35;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001049cf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos(( ulong ) & local_60);
      operator+((char *)&
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC16, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      pcVar4 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

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

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104b35:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined1 local_50[16];
   int local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar8 = 0;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   puVar8[10] = 6;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00104b87;
   local_68 = 0;
   local_58 = &_LC5;
   local_70 = 0;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_50._8_8_;
   local_50 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = (undefined*)CONCAT44(local_58._4_4_, 4);
   local_40 = 0;
   local_38 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_70 == 0) {
      LAB_00104c78:local_30 = 6;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_00104c78;
      StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
      if (local_50._8_8_ == local_60) {
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_50._8_8_ = local_60;
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

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   *puVar8 = local_58._0_4_;
   lVar2 = *(long*)( puVar8 + 2 );
   if (lVar2 != local_50._0_8_) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( puVar8 + 2 );
            *(undefined8*)( puVar8 + 2 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined8*)( puVar8 + 2 ) = local_50._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_50._8_8_;
      local_50 = auVar5 << 0x40;
   }

   if (*(long*)( puVar8 + 4 ) != local_50._8_8_) {
      StringName::unref();
      uVar6 = local_50._8_8_;
      local_50._8_8_ = 0;
      *(undefined8*)( puVar8 + 4 ) = uVar6;
   }

   lVar7 = local_38;
   puVar8[6] = local_40;
   lVar2 = *(long*)( puVar8 + 8 );
   if (lVar2 == local_38) {
      puVar8[10] = local_30;
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
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
            lVar2 = *(long*)( puVar8 + 8 );
            *(undefined8*)( puVar8 + 8 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(long*)( puVar8 + 8 ) = local_38;
      puVar8[10] = local_30;
   }

   if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_50._0_8_;
   if (local_50._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_50._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   LAB_00104b87:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
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
      LAB_001050d8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001050d8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001050f5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001050f5:if (lVar2 == 0) {
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
/* ShaderInclude::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ShaderInclude::_get_property_listv(ShaderInclude *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ShaderInclude";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ShaderInclude";
   local_98 = 0;
   local_70 = 0xd;
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
      LAB_00105528:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105528;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105545;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105545:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "ShaderInclude", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
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
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = CallableCustom::CallableCustom;
   if (bVar1) {
      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105983;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105983:*(undefined***)this = &PTR__initialize_classv_00107bb8;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude() */void ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude(ResourceFormatLoaderShaderInclude *this) {
   *(undefined***)this = &PTR__initialize_classv_00107ef0;
   ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
   return;
}
/* ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude() */void ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude(ResourceFormatLoaderShaderInclude *this) {
   *(undefined***)this = &PTR__initialize_classv_00107ef0;
   ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
   operator_delete(this, 0x288);
   return;
}
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   ~ResourceFormatLoader(this)
   ;;
   operator_delete(this, 0x288);
   return;
}
/* Callable create_custom_callable_function_pointer<ShaderInclude>(ShaderInclude*, char const*, void
   (ShaderInclude::*)()) */ShaderInclude *create_custom_callable_function_pointer<ShaderInclude>(ShaderInclude *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC5;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00108260;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* HashSet<Ref<ShaderInclude>, HashMapHasherDefault, HashMapComparatorDefault<Ref<ShaderInclude> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<Ref<ShaderInclude>, HashMapHasherDefault,
   HashMapComparatorDefault<Ref<ShaderInclude> > > const&) */void HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::operator =(HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   Object *pOVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   char cVar7;
   undefined8 uVar8;
   ulong uVar9;
   long lVar10;
   void *pvVar11;
   long *plVar12;
   if (this == (HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)param_1) {
      return;
   }

   pvVar11 = *(void**)this;
   if (pvVar11 != (void*)0x0) {
      if (( *(int*)( this + 0x24 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
         lVar10 = 0;
         do {
            plVar12 = (long*)( (long)pvVar11 + lVar10 * 8 );
            if (*plVar12 != 0) {
               cVar7 = RefCounted::unreference();
               if (cVar7 != '\0') {
                  pOVar3 = (Object*)*plVar12;
                  cVar7 = predelete_handler(pOVar3);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

               pvVar11 = *(void**)this;
            }

            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
         *(undefined4*)( this + 0x24 ) = 0;
         if (pvVar11 == (void*)0x0) goto LAB_00105bca;
      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   LAB_00105bca:uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1, false);
      lVar10 = 0;
      *(undefined8*)( this + 0x18 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 8 ) = uVar8;
      if (*(int*)( this + 0x24 ) != 0) {
         do {
            plVar12 = (long*)( *(long*)this + lVar10 * 8 );
            lVar4 = *(long*)param_1;
            *plVar12 = 0;
            lVar4 = *(long*)( lVar10 * 8 + lVar4 );
            if (lVar4 != 0) {
               *plVar12 = lVar4;
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  *plVar12 = 0;
               }

            }

            *(undefined4*)( *(long*)( this + 0x10 ) + lVar10 * 4 ) = *(undefined4*)( *(long*)( param_1 + 0x10 ) + lVar10 * 4 );
            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
      }

      if (uVar2 != 0) {
         lVar10 = *(long*)( param_1 + 0x18 );
         lVar4 = *(long*)( this + 0x18 );
         uVar9 = 0;
         lVar5 = *(long*)( param_1 + 8 );
         lVar6 = *(long*)( this + 8 );
         do {
            *(undefined4*)( lVar4 + uVar9 ) = *(undefined4*)( lVar10 + uVar9 );
            *(undefined4*)( lVar6 + uVar9 ) = *(undefined4*)( lVar5 + uVar9 );
            uVar9 = uVar9 + 4;
         }
 while ( uVar9 != uVar1 );
         return;
      }

   }

   return;
}
/* ResourceFormatLoaderShaderInclude::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) [clone .cold] */void ResourceFormatLoaderShaderInclude::load(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ShaderInclude::_bind_methods() [clone .cold] */void ShaderInclude::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MethodBind* create_method_bind<ShaderInclude, String const&>(void (ShaderInclude::*)(String
   const&)) */MethodBind *create_method_bind<ShaderInclude,String_const&>(_func_void_String_ptr *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001082f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ShaderInclude";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<ShaderInclude, String>(String (ShaderInclude::*)() const) */MethodBind *create_method_bind<ShaderInclude,String>(_func_String *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00108350;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ShaderInclude";
   local_30 = 0xd;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
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
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderInclude::_initialize_classv() */void ShaderInclude::_initialize_classv(void) {
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

            if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
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

         if ((code*)PTR__bind_methods_0010b020 != RefCounted::_bind_methods) {
            Resource::_bind_methods();
         }

         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "ShaderInclude";
      local_70 = 0;
      local_50 = 0xd;
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

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00106528) *//* WARNING: Removing unreachable block (ram,0x00106658) *//* WARNING: Removing unreachable block (ram,0x00106820) *//* WARNING: Removing unreachable block (ram,0x00106664) *//* WARNING: Removing unreachable block (ram,0x0010666e) *//* WARNING: Removing unreachable block (ram,0x00106800) *//* WARNING: Removing unreachable block (ram,0x0010667a) *//* WARNING: Removing unreachable block (ram,0x00106684) *//* WARNING: Removing unreachable block (ram,0x001067e0) *//* WARNING: Removing unreachable block (ram,0x00106690) *//* WARNING: Removing unreachable block (ram,0x0010669a) *//* WARNING: Removing unreachable block (ram,0x001067c0) *//* WARNING: Removing unreachable block (ram,0x001066a6) *//* WARNING: Removing unreachable block (ram,0x001066b0) *//* WARNING: Removing unreachable block (ram,0x001067a0) *//* WARNING: Removing unreachable block (ram,0x001066bc) *//* WARNING: Removing unreachable block (ram,0x001066c6) *//* WARNING: Removing unreachable block (ram,0x00106780) *//* WARNING: Removing unreachable block (ram,0x001066d2) *//* WARNING: Removing unreachable block (ram,0x001066dc) *//* WARNING: Removing unreachable block (ram,0x00106760) *//* WARNING: Removing unreachable block (ram,0x001066e4) *//* WARNING: Removing unreachable block (ram,0x001066fa) *//* WARNING: Removing unreachable block (ram,0x00106706) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar6[1] == 0) {
         plVar5 = (long*)plVar6[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
         }

      }
 else {
         plVar5 = (long*)( plVar6[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC16, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_58 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar6 = (long*)( local_60 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00106a30;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar4 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar4 & 1 ) != 0) {
            pVVar4 = *(Variant**)( pVVar4 + *(long*)( (long)plVar6 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar4 )((String*)&local_58);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         pcVar3 = local_58;
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar6 = (long*)( local_58 + -0x10 );
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

      }
 else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }

   }
 else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }

   LAB_00106a30:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant **ppVVar1;
   long lVar2;
   Variant **ppVVar3;
   code *pcVar4;
   long *plVar5;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x106848;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         ppVVar3 = local_48;
         if (local_48 != (Variant**)0x0) {
            LOCK();
            ppVVar1 = local_48 + -2;
            *ppVVar1 = *ppVVar1 + -1;
            UNLOCK();
            if (*ppVVar1 == (Variant*)0x0) {
               local_48 = (Variant**)0x0;
               Memory::free_static(ppVVar3 + -2, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00106d71;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
   }

   ( *pcVar4 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   ppVVar3 = local_48;
   if (local_48 != (Variant**)0x0) {
      LOCK();
      ppVVar1 = local_48 + -2;
      *ppVVar1 = *ppVVar1 + -1;
      UNLOCK();
      if (*ppVVar1 == (Variant*)0x0) {
         local_48 = (Variant**)0x0;
         Memory::free_static(ppVVar3 + -2, false);
      }

   }

   LAB_00106d71:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
   void **ppvVar1;
   long lVar2;
   void **ppvVar3;
   code *pcVar4;
   long *plVar5;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x106848;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         ppvVar3 = local_48;
         if (local_48 != (void**)0x0) {
            LOCK();
            ppvVar1 = local_48 + -2;
            *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
            UNLOCK();
            if (*ppvVar1 == (void*)0x0) {
               local_48 = (void**)0x0;
               Memory::free_static(ppvVar3 + -2, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00106fae;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar4 = *(code**)( pcVar4 + (long)param_2 + -1 );
   }

   ( *pcVar4 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   ppvVar3 = local_48;
   if (local_48 != (void**)0x0) {
      LOCK();
      ppvVar1 = local_48 + -2;
      *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
      UNLOCK();
      if (*ppvVar1 == (void*)0x0) {
         local_48 = (void**)0x0;
         Memory::free_static(ppvVar3 + -2, false);
      }

   }

   LAB_00106fae:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar4 = param_2[0x23];
         if (pVVar4 == (Variant*)0x0) {
            pVVar4 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar4 = param_2[1] + 0x20;
      }

      if (local_38 == *(char**)pVVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
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

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107365;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001071a9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00107365:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar3;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar3 = (long*)param_2[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar3 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0;
         local_30 = 0x35;
         String::parse_latin1((StrRange*)&local_40);
         vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0);
         pcVar2 = local_38;
         if (local_38 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_38 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_38 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_40;
         if (local_40 != 0) {
            LOCK();
            plVar3 = (long*)( local_40 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_40 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107585;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001073c5. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00107585:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC16, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
         pcVar5 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar10 = (long*)( local_48 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar10 = (long*)( local_50 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107770;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001077c0;
         LAB_001077b0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001077c0:uVar7 = 4;
            goto LAB_00107765;
         }

         if (in_R8D == 1) goto LAB_001077b0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC52;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ));
      pcVar5 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_48 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
         }

      }

   }
 else {
      uVar7 = 3;
      LAB_00107765:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00107770:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude() */void ResourceFormatLoaderShaderInclude::~ResourceFormatLoaderShaderInclude(ResourceFormatLoaderShaderInclude *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderInclude::~ShaderInclude() */void ShaderInclude::~ShaderInclude(ShaderInclude *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude() */void ResourceFormatSaverShaderInclude::~ResourceFormatSaverShaderInclude(ResourceFormatSaverShaderInclude *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderInclude, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderInclude,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderInclude,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

