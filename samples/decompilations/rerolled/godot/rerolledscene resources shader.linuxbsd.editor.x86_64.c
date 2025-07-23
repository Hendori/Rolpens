/* Shader::get_mode() const */undefined4 Shader::get_mode(Shader *this) {
   return *(undefined4*)( this + 0x278 );
}
/* Shader::is_text_shader() const */undefined8 Shader::is_text_shader(void) {
   return 1;
}
/* Shader::_update_shader() const */void Shader::_update_shader(void) {
   return;
}
/* ResourceFormatLoaderShader::handles_type(String const&) const */void ResourceFormatLoaderShader::handles_type(ResourceFormatLoaderShader *this, String *param_1) {
   String::operator ==(param_1, "Shader");
   return;
}
/* ResourceFormatSaverShader::recognize(Ref<Resource> const&) const */void ResourceFormatSaverShader::recognize(ResourceFormatSaverShader *this, Ref *param_1) {
   long *plVar1;
   StringName *pSVar2;
   plVar1 = *(long**)param_1;
   if (plVar1[1] == 0) {
      pSVar2 = (StringName*)plVar1[0x23];
      if (pSVar2 == (StringName*)0x0) {
         pSVar2 = (StringName*)( **(code**)( *plVar1 + 0x40 ) )(plVar1);
         StringName::operator ==(pSVar2, "Shader");
         return;
      }

   }
 else {
      pSVar2 = (StringName*)( plVar1[1] + 0x20 );
   }

   StringName::operator ==(pSVar2, "Shader");
   return;
}
/* Shader::set_path(String const&, bool) */void Shader::set_path(String *param_1, bool param_2) {
   long *plVar1;
   undefined7 in_register_00000031;
   Resource::set_path(param_1, param_2);
   if (*(long*)( param_1 + 0x240 ) == 0) {
      return;
   }

   plVar1 = (long*)RenderingServer::get_singleton();
   /* WARNING: Could not recover jumptable at 0x001000f2. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 600 ) )(plVar1, *(undefined8*)( param_1 + 0x240 ), CONCAT71(in_register_00000031, param_2));
   return;
}
/* HashMap<int, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >::_lookup_pos(int const&, unsigned
   int&) const [clone .isra.0] */undefined8 HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_lookup_pos(HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>> *this, int *param_1, uint *param_2) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 8 ) == 0 ) || ( *(int*)( this + 0x2c ) == 0 )) {
      return 0;
   }

   uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar10 = ( ( uint )((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1 ) * -0x7a143595;
   uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
   uVar14 = uVar10 ^ uVar10 >> 0x10;
   if (uVar10 == uVar10 >> 0x10) {
      uVar14 = 1;
      uVar12 = uVar1;
   }
 else {
      uVar12 = uVar14 * uVar1;
   }

   uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar15;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar12;
   lVar13 = SUB168(auVar2 * auVar6, 8);
   uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
   uVar11 = SUB164(auVar2 * auVar6, 8);
   if (uVar10 != 0) {
      uVar16 = 0;
      do {
         if (( uVar14 == uVar10 ) && ( *(uint*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == (uint)param_1 )) {
            *param_2 = uVar11;
            return 1;
         }

         uVar16 = uVar16 + 1;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( uVar11 + 1 ) * uVar1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar11 = SUB164(auVar3 * auVar7, 8);
      }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
   }

   return 0;
}
/* Shader::get_default_texture_parameter_list(List<StringName, DefaultAllocator>*) const */void Shader::get_default_texture_parameter_list(Shader *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   StringName *this_00;
   undefined8 *puVar4;
   StringName *pSVar5;
   puVar4 = *(undefined8**)( this + 0x2d0 );
   if (puVar4 != (undefined8*)0x0) {
      pSVar5 = (StringName*)( puVar4 + 2 );
      if (*(long*)param_1 == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }

      while (true) {
         this_00 = (StringName*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         StringName::operator =(this_00, pSVar5);
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar1;
         *(long*)( this_00 + 0x10 ) = lVar2;
         if (lVar2 != 0) {
            *(StringName**)( lVar2 + 8 ) = this_00;
         }

         plVar1[1] = (long)this_00;
         if (*plVar1 == 0) {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this_00;
         }
 else {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }

         if (puVar4 == (undefined8*)0x0) break;
         pSVar5 = (StringName*)( puVar4 + 2 );
      }
;
   }

   return;
}
/* Shader::Shader() */void Shader::Shader(Shader *this) {
   undefined8 uVar1;
   Resource::Resource((Resource*)this);
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00113350;
   uVar1 = _LC9;
   *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined4*)( this + 0x260 ) = 1;
   *(undefined4*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x2a0 ) = uVar1;
   *(undefined8*)( this + 0x2e0 ) = uVar1;
   *(undefined1(*) [16])( this + 0x280 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x290 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2d0 ) = (undefined1[16])0x0;
   return;
}
/* ResourceFormatLoaderShader::get_resource_type(String const&) const */String *ResourceFormatLoaderShader::get_resource_type(String *param_1) {
   char cVar1;
   long in_FS_OFFSET;
   String local_40[8];
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::get_extension();
   String::to_lower();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   cVar1 = String::operator ==(local_40, "gdshader");
   *(undefined8*)param_1 = 0;
   if (cVar1 == '\0') {
      local_30 = 0;
      local_38 = "";
      String::parse_latin1((StrRange*)param_1);
   }
 else {
      local_30 = 6;
      local_38 = "Shader";
      String::parse_latin1((StrRange*)param_1);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* ResourceFormatSaverShader::get_recognized_extensions(Ref<Resource> const&, List<String,
   DefaultAllocator>*) const */void ResourceFormatSaverShader::get_recognized_extensions(ResourceFormatSaverShader *this, Ref *param_1, List *param_2) {
   long lVar1;
   char cVar2;
   long *plVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(long*)param_1 != 0 ) && ( plVar3 = (long*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &Shader::typeinfo, 0) ),plVar3 != (long*)0x0 )) {
      local_40 = 0;
      local_38 = "gdshader";
      local_30 = 8;
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
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
      plVar3 = *(long**)param_2;
      lVar1 = plVar3[1];
      *(undefined8*)( this_00 + 8 ) = 0;
      *(long**)( this_00 + 0x18 ) = plVar3;
      *(long*)( this_00 + 0x10 ) = lVar1;
      if (lVar1 != 0) {
         *(CowData<char32_t>**)( lVar1 + 8 ) = this_00;
      }

      plVar3[1] = (long)this_00;
      if (*plVar3 == 0) {
         *plVar3 = (long)this_00;
      }

      *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatSaverShader::save(Ref<Resource> const&, String const&, unsigned int) */int ResourceFormatSaverShader::save(Ref *param_1, String *param_2, uint param_3) {
   char cVar1;
   int iVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   int local_5c;
   undefined8 local_58;
   Object *local_50;
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_2 != 0) {
      pOVar3 = (Object*)__dynamic_cast(*(long*)param_2, &Object::typeinfo, &Shader::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar1 = RefCounted::reference();
         if (cVar1 != '\0') {
            if (*(code**)( *(long*)pOVar3 + 0x1c8 ) != Shader::_update_shader) {
               ( **(code**)( *(long*)pOVar3 + 0x1c8 ) )(pOVar3);
            }

            local_58 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( pOVar3 + 0x2a8 ));
            FileAccess::open((String*)&local_50, param_3, (Error*)0x2);
            if (local_5c == 0) {
               ( **(code**)( *(long*)local_50 + 0x2a8 ) )();
               iVar2 = ( **(code**)( *(long*)local_50 + 0x250 ) )();
               if (iVar2 != 0) {
                  iVar2 = ( **(code**)( *(long*)local_50 + 0x250 ) )();
                  if (iVar2 != 0x12) {
                     local_5c = 0x14;
                  }

               }

            }
 else {
               local_40 = 0;
               String::parse_latin1((String*)&local_40, "\'.");
               operator+((char *)
               local_48,(String*)"Cannot save shader \'";
               String::operator +(local_38, (String*)local_48);
               _err_print_error(&_LC22, "scene/resources/shader.cpp", 0x165, "Condition \"err\" is true. Returning: err", local_38, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               CowData<char32_t>::_unref(local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
            }

            if (local_50 != (Object*)0x0) {
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(local_50);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)local_50 + 0x140 ) )(local_50);
                     Memory::free_static(local_50, false);
                  }

               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

            goto LAB_001006ae;
         }

      }

   }

   local_5c = 0x1f;
   _err_print_error(&_LC22, "scene/resources/shader.cpp", 0x15e, "Condition \"shader.is_null()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   LAB_001006ae:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_5c;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shader::set_include_path(String const&) */void Shader::set_include_path(Shader *this, String *param_1) {
   if (*(long*)( this + 0x2b0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2b0 ), (CowData*)param_1);
      return;
   }

   return;
}
/* Shader::get_code() const */void Shader::get_code(void) {
   long *in_RSI;
   CowData<char32_t> *in_RDI;
   if (*(code**)( *in_RSI + 0x1c8 ) != _update_shader) {
      ( **(code**)( *in_RSI + 0x1c8 ) )();
   }

   *(undefined8*)in_RDI = 0;
   if (in_RSI[0x55] != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x55 ));
   }

   return;
}
/* ResourceFormatLoaderShader::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ResourceFormatLoaderShader::get_recognized_extensions(ResourceFormatLoaderShader *this, List *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = "gdshader";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Shader::~Shader() */void Shader::~Shader(Shader *this) {
   uint uVar1;
   uint uVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   int *piVar7;
   void *pvVar8;
   void *pvVar9;
   long lVar10;
   *(undefined***)this = &PTR__initialize_classv_00113350;
   if (*(long*)( this + 0x240 ) != 0) {
      lVar5 = RenderingServer::get_singleton();
      if (lVar5 == 0) {
         _err_print_error("~Shader", "scene/resources/shader.cpp", 0x129, "Parameter \"RenderingServer::get_singleton()\" is null.", 0, 0);
         HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::~HashMap(( HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> * )(this + 0x2b8));
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2b0 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2a8 ));
         HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::~HashSet((HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)( this + 0x280 ));
         goto LAB_00100e5b;
      }

      plVar6 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar6 + 0x11b0 ) )(plVar6);
   }

   pvVar9 = *(void**)( this + 0x2c0 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x2e4 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2e0 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x2e4 ) = 0;
            *(undefined1(*) [16])( this + 0x2d0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2c8 ) + lVar5 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x2c8 ) + lVar5 ) = 0;
                  pvVar8 = *(void**)( (long)pvVar9 + 0x20 );
                  if (pvVar8 != (void*)0x0) {
                     if (*(int*)( (long)pvVar9 + 0x44 ) != 0) {
                        uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar9 + 0x40 ) * 4 );
                        if (uVar2 == 0) {
                           *(undefined4*)( (long)pvVar9 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar9 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar10 = 0;
                           do {
                              piVar7 = (int*)( *(long*)( (long)pvVar9 + 0x28 ) + lVar10 );
                              if (*piVar7 != 0) {
                                 pvVar8 = *(void**)( (long)pvVar8 + lVar10 * 2 );
                                 *piVar7 = 0;
                                 if (*(long*)( (long)pvVar8 + 0x18 ) != 0) {
                                    cVar4 = RefCounted::unreference();
                                    if (cVar4 != '\0') {
                                       pOVar3 = *(Object**)( (long)pvVar8 + 0x18 );
                                       cVar4 = predelete_handler(pOVar3);
                                       if (cVar4 != '\0') {
                                          ( **(code**)( *(long*)pOVar3 + 0x140 ) )();
                                          Memory::free_static(pOVar3, false);
                                       }

                                    }

                                 }

                                 Memory::free_static(pvVar8, false);
                                 pvVar8 = *(void**)( (long)pvVar9 + 0x20 );
                                 *(undefined8*)( (long)pvVar8 + lVar10 * 2 ) = 0;
                              }

                              lVar10 = lVar10 + 4;
                           }
 while ( (ulong)uVar2 << 2 != lVar10 );
                           *(undefined4*)( (long)pvVar9 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar9 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar8 == (void*)0x0) goto LAB_00100cec;
                        }

                     }

                     Memory::free_static(pvVar8, false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x28 ), false);
                  }

                  LAB_00100cec:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x2c0 );
                  *(undefined8*)( (long)pvVar9 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 * 4 != lVar5 );
            *(undefined4*)( this + 0x2e4 ) = 0;
            *(undefined1(*) [16])( this + 0x2d0 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00100d50;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x2c8 ), false);
   }

   LAB_00100d50:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2b0 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2a8 ));
   pvVar9 = *(void**)( this + 0x280 );
   if (pvVar9 == (void*)0x0) goto LAB_00100e5b;
   if (*(int*)( this + 0x2a4 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a0 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x298 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a0 ) * 4 ) * 4);
         if (*(int*)( this + 0x2a4 ) == 0) goto LAB_00100e27;
      }

      lVar5 = 0;
      do {
         plVar6 = (long*)( (long)pvVar9 + lVar5 * 8 );
         if (*plVar6 != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

            pvVar9 = *(void**)( this + 0x280 );
         }

         lVar5 = lVar5 + 1;
      }
 while ( (uint)lVar5 < *(uint*)( this + 0x2a4 ) );
      *(undefined4*)( this + 0x2a4 ) = 0;
      if (pvVar9 == (void*)0x0) goto LAB_00100e5b;
   }

   LAB_00100e27:Memory::free_static(pvVar9, false);
   Memory::free_static(*(void**)( this + 0x290 ), false);
   Memory::free_static(*(void**)( this + 0x288 ), false);
   Memory::free_static(*(void**)( this + 0x298 ), false);
   LAB_00100e5b:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x248 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* Shader::~Shader() */void Shader::~Shader(Shader *this) {
   ~Shader(this)
   ;;
   operator_delete(this, 0x2e8);
   return;
}
/* Shader::set_code(String const&) */void Shader::set_code(Shader *this, String *param_1) {
   CowData<char32_t> *this_00;
   Object *pOVar1;
   Callable *pCVar2;
   Callable *pCVar3;
   undefined1 auVar4[16];
   char cVar5;
   byte bVar6;
   int iVar7;
   long *plVar8;
   long lVar9;
   void *pvVar10;
   long lVar11;
   long in_FS_OFFSET;
   long local_90;
   ShaderPreprocessor local_88[32];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = *(int*)( this + 0x2a4 );
   if (iVar7 != 0) {
      lVar9 = *(long*)( this + 0x280 );
      lVar11 = 0;
      while (true) {
         pCVar3 = *(Callable**)( lVar9 + lVar11 * 8 );
         create_custom_callable_function_pointer<Shader>((Shader*)local_68, (char*)this, (_func_void*)"&Shader::_dependency_changed");
         Resource::disconnect_changed(pCVar3);
         Callable::~Callable((Callable*)local_68);
         if (iVar7 <= (int)lVar11 + 1) break;
         lVar11 = lVar11 + 1;
      }
;
   }

   lVar9 = *(long*)param_1;
   if (*(long*)( this + 0x2a8 ) != lVar9) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2a8 ), (CowData*)param_1);
      lVar9 = *(long*)param_1;
   }

   this_00 = (CowData<char32_t>*)( this + 0x248 );
   if (*(long*)( this + 0x248 ) != lVar9) {
      CowData<char32_t>::_ref(this_00, (CowData*)param_1);
   }

   Resource::get_path();
   if (( ( local_90 == 0 ) || ( *(uint*)( local_90 + -8 ) < 2 ) ) && ( local_90 != *(long*)( this + 0x2b0 ) )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( this + 0x2b0 ));
   }

   local_48 = 2;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   ShaderPreprocessor::ShaderPreprocessor(local_88);
   iVar7 = ShaderPreprocessor::preprocess((String*)local_88, param_1, (String*)&local_90, (String*)this_00, (List*)0x0, (List*)0x0, (HashSet*)0x0, (List*)local_68, (List*)0x0, (_func_void_List_ptr*)0x0);
   if (iVar7 == 0) {
      HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::operator =((HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>*)( this + 0x280 ), (HashSet*)local_68);
   }

   ShaderPreprocessor::~ShaderPreprocessor(local_88);
   pvVar10 = (void*)local_68._0_8_;
   if ((void*)local_68._0_8_ == (void*)0x0) goto LAB_001011de;
   if (local_48._4_4_ != 0) {
      if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
         memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
         if (local_48._4_4_ == 0) goto LAB_001011b0;
      }

      lVar9 = 0;
      do {
         plVar8 = (long*)( (long)pvVar10 + lVar9 * 8 );
         if (*plVar8 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar1 = (Object*)*plVar8;
               cVar5 = predelete_handler(pOVar1);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                  Memory::free_static(pOVar1, false);
               }

            }

            pvVar10 = (void*)local_68._0_8_;
         }

         lVar9 = lVar9 + 1;
      }
 while ( (uint)lVar9 < local_48._4_4_ );
      local_48 = local_48 & 0xffffffff;
      if (pvVar10 == (void*)0x0) goto LAB_001011de;
   }

   LAB_001011b0:Memory::free_static(pvVar10, false);
   Memory::free_static((void*)local_58._0_8_, false);
   Memory::free_static((void*)local_68._8_8_, false);
   Memory::free_static((void*)local_58._8_8_, false);
   LAB_001011de:CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   ShaderLanguage::get_shader_type((String*)local_88);
   cVar5 = String::operator ==((String*)local_88, "canvas_item");
   iVar7 = 1;
   if (cVar5 == '\0') {
      cVar5 = String::operator ==((String*)local_88, "particles");
      iVar7 = 2;
      if (cVar5 == '\0') {
         cVar5 = String::operator ==((String*)local_88, "sky");
         iVar7 = 3;
         if (cVar5 == '\0') {
            bVar6 = String::operator ==((String*)local_88, "fog");
            iVar7 = (uint)bVar6 << 2;
         }

      }

   }

   *(int*)( this + 0x278 ) = iVar7;
   iVar7 = *(int*)( this + 0x2a4 );
   if (iVar7 != 0) {
      lVar9 = *(long*)( this + 0x280 );
      lVar11 = 0;
      while (true) {
         pCVar2 = *(Callable**)( lVar9 + lVar11 * 8 );
         create_custom_callable_function_pointer<Shader>((Shader*)local_68, (char*)this, (_func_void*)"&Shader::_dependency_changed");
         Resource::connect_changed(pCVar2, (uint)(Shader*)local_68);
         Callable::~Callable((Callable*)local_68);
         if (iVar7 <= (int)lVar11 + 1) break;
         lVar11 = lVar11 + 1;
      }
;
   }

   if (*(long*)( this + 0x240 ) != 0) {
      plVar8 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar8 + 0x250 ) )(plVar8, *(undefined8*)( this + 0x240 ), this_00);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_68._8_8_;
      local_68 = auVar4 << 0x40;
      if (*(long*)( this + 0x248 ) != 0) {
         CowData<char32_t>::_unref(this_00);
         *(undefined8*)( this + 0x248 ) = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   }

   Resource::emit_changed();
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Shader::_recompile() */void Shader::_recompile(Shader *this) {
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x1c8 ) != _update_shader) {
      ( **(code**)( *(long*)this + 0x1c8 ) )();
   }

   local_28 = 0;
   if (*(long*)( this + 0x2a8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_28, (CowData*)( this + 0x2a8 ));
   }

   set_code(this, (String*)&local_28);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001017f8) *//* ResourceFormatLoaderShader::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */long *ResourceFormatLoaderShader::load(long *param_1, undefined8 param_2, Error *param_3, undefined8 param_4, undefined4 *param_5) {
   long *plVar1;
   undefined8 uVar2;
   char cVar3;
   int iVar4;
   Resource *this;
   long lVar5;
   Resource *this_00;
   long in_FS_OFFSET;
   undefined8 local_68;
   CowData<char32_t> local_60[8];
   String local_58[8];
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0xc;
   }

   FileAccess::get_file_as_bytes(local_58, param_3);
   local_68 = 0;
   if (local_50 != 0) {
      if (( 0 < *(long*)( local_50 + -8 ) ) && ( iVar4 = String::parse_utf8((char*)&local_68, (int)local_50, SUB81(*(long*)( local_50 + -8 ), 0)) ),iVar4 != 0) {
         operator+((char *)
         local_60,(String*)"Cannot parse shader: ";
         _err_print_error(&_LC35, "scene/resources/shader.cpp", 0x13c, "Condition \"error\" is true. Returning: nullptr", local_60, 0, 0);
         CowData<char32_t>::_unref(local_60);
         *param_1 = 0;
         goto LAB_0010167e;
      }

   }

   this_00 = (Resource*)0x0;
   this(Resource * operator_new(0x2e8, ""));
   Resource::Resource(this);
   *(undefined***)this = &PTR__initialize_classv_00113350;
   uVar2 = _LC9;
   *(undefined1(*) [16])( this + 0x260 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x2a0 ) = uVar2;
   *(undefined8*)( this + 0x2e0 ) = uVar2;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined8*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined4*)( this + 0x260 ) = 1;
   *(undefined4*)( this + 0x278 ) = 0;
   *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x280 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x290 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2d0 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this);
   cVar3 = RefCounted::init_ref();
   if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
         this_00 = this;
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this + 0x140 ) )(this);
         Memory::free_static(this, false);
      }

   }

   CowData<char32_t>::_ref((CowData<char32_t>*)( (Shader*)this_00 + 0x2b0 ), (CowData*)param_3);
   Shader::set_code((Shader*)this_00, (String*)&local_68);
   if (param_5 == (undefined4*)0x0) {
      *param_1 = 0;
   }
 else {
      *param_5 = 0;
      *param_1 = 0;
   }

   lVar5 = __dynamic_cast(this_00, &Object::typeinfo, &Resource::typeinfo, 0);
   if (lVar5 == 0) {
      LAB_0010166e:cVar3 = RefCounted::unreference();
   }
 else {
      *param_1 = lVar5;
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') goto LAB_0010166e;
      *param_1 = 0;
      cVar3 = RefCounted::unreference();
   }

   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }

   LAB_0010167e:CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Shader::_check_shader_rid() const */ulong Shader::_check_shader_rid(Shader *this) {
   code *pcVar1;
   uint uVar2;
   long *plVar3;
   undefined8 uVar4;
   Shader *this_00;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x250 ));
   if (uVar2 != 0) {
      this_00 = (Shader*)(ulong)uVar2;
      std::__throw_system_error(uVar2);
      if (*(code**)( *(long*)this_00 + 0x1c8 ) != _update_shader) {
         ( **(code**)( *(long*)this_00 + 0x1c8 ) )();
      }

      _check_shader_rid(this_00);
      return *(ulong*)( this_00 + 0x240 );
   }

   if (( ( *(long*)( this + 0x240 ) == 0 ) && ( *(long*)( this + 0x248 ) != 0 ) ) && ( 1 < *(uint*)( *(long*)( this + 0x248 ) + -8 ) )) {
      plVar3 = (long*)RenderingServer::get_singleton();
      pcVar1 = *(code**)( *plVar3 + 0x248 );
      Resource::get_path();
      uVar4 = ( *pcVar1 )(plVar3, (CowData<char32_t>*)( this + 0x248 ), &local_48);
      *(undefined8*)( this + 0x240 ) = uVar4;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      local_48 = 0;
      if (*(long*)( this + 0x248 ) != 0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x248 ));
         *(undefined8*)( this + 0x248 ) = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar2 = pthread_mutex_unlock((pthread_mutex_t*)( this + 0x250 ));
      return (ulong)uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shader::get_rid() const */undefined8 Shader::get_rid(Shader *this) {
   if (*(code**)( *(long*)this + 0x1c8 ) != _update_shader) {
      ( **(code**)( *(long*)this + 0x1c8 ) )();
   }

   _check_shader_rid(this);
   return *(undefined8*)( this + 0x240 );
}
/* Shader::inspect_native_shader_code() */void Shader::inspect_native_shader_code(Shader *this) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_90;
   long local_88;
   long local_80;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   lVar2 = SceneTree::singleton;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *(long*)this + 0x1c0 );
   if (pcVar1 == get_rid) {
      pcVar1 = *(code**)( *(long*)this + 0x1c8 );
      if (pcVar1 != _update_shader) {
         ( *pcVar1 )();
      }

      _check_shader_rid(this);
      lVar3 = *(long*)( this + 0x240 );
   }
 else {
      lVar3 = ( *pcVar1 )();
   }

   if (( lVar2 != 0 ) && ( lVar3 != 0 )) {
      StringName::StringName((StringName*)&local_88, "_inspect_shader", false);
      StringName::StringName((StringName*)&local_90, "_native_shader_source_visualizer", false);
      local_80 = lVar3;
      Variant::Variant((Variant*)local_68, (RID*)&local_80);
      local_50 = 0;
      local_48 = (undefined1[16])0x0;
      local_78[0] = (Variant*)local_68;
      SceneTree::call_group_flagsp((uint)lVar2, (StringName*)0x2, (StringName*)&local_90, (Variant**)&local_88, (int)local_78);
      if (Variant::needs_deinit[(int)local_50] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_68[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (StringName::configured != '\0') {
         if (local_90 != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00101a22;
         }

         if (local_88 != 0) {
            StringName::unref();
         }

      }

   }

   LAB_00101a22:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shader::_dependency_changed() */void Shader::_dependency_changed(Shader *this) {
   long in_FS_OFFSET;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x1c8 ) != _update_shader) {
      ( **(code**)( *(long*)this + 0x1c8 ) )();
   }

   local_28 = 0;
   if (*(long*)( this + 0x2a8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_28, (CowData*)( this + 0x2a8 ));
   }

   set_code(this, (String*)&local_28);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shader::_bind_compatibility_methods() */void Shader::_bind_compatibility_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   uint uVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_d8[2];
   long *local_c8;
   undefined *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   char **ppcStack_70;
   char **local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = 0;
   local_88 = "index";
   ppcStack_70 = &pcStack_90;
   local_98 = (Variant*)&_LC51;
   pcStack_90 = "texture";
   local_68 = &local_88;
   uVar5 = (uint)(Variant*)&local_78;
   local_78 = &local_98;
   D_METHODP((char*)local_d8, (char***)"set_default_texture_parameter", uVar5);
   Variant::Variant((Variant*)&local_78, 0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar4 = create_method_bind<Shader,StringName_const&,Ref<Texture2D>const&,int>(_set_default_texture_parameter_bind_compat_95126);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_d8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         local_c8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar6 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8[0] != 0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   local_b8 = &_LC51;
   pcStack_b0 = "index";
   local_78 = (Variant**)&local_b8;
   ppcStack_70 = &pcStack_b0;
   D_METHODP((char*)local_d8, (char***)"get_default_texture_parameter", uVar5);
   Variant::Variant((Variant*)&local_78, 0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar4 = create_method_bind<Shader,Ref<Texture2D>,StringName_const&,int>(_get_default_texture_parameter_bind_compat_95126);
   ClassDB::bind_methodfi(1, pMVar4, true, (MethodDefinition*)local_d8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_c8;
   if (local_c8 != (long*)0x0) {
      LOCK();
      plVar6 = local_c8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_c8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_c8[-1];
         local_c8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar6 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Shader::get_default_texture_parameter(StringName const&, int) const */StringName *Shader::get_default_texture_parameter(StringName *param_1, int param_2) {
   HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> *this;
   code *pcVar1;
   char cVar2;
   uint in_ECX;
   StringName *in_RDX;
   undefined4 in_register_00000034;
   long lVar3;
   long in_FS_OFFSET;
   uint local_4c;
   uint local_48;
   uint local_44;
   long local_40;
   lVar3 = CONCAT44(in_register_00000034, param_2);
   this(HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>, HashMapHasherDefault, HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> *)(lVar3 + 0x2b8);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar2 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(this, in_RDX, &local_44);
   if (cVar2 != '\0') {
      local_4c = 0;
      cVar2 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(this, in_RDX, &local_4c);
      if (cVar2 == '\0') goto LAB_001020f8;
      cVar2 = HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_lookup_pos((HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)( *(long*)( *(long*)( lVar3 + 0x2c0 ) + (ulong)local_4c * 8 ) + 0x18 ), (int*)(ulong)in_ECX, &local_44);
      if (cVar2 != '\0') {
         local_44 = 0;
         cVar2 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(this, in_RDX, &local_44);
         if (cVar2 == '\0') {
            LAB_001020f8:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         local_48 = 0;
         lVar3 = *(long*)( *(long*)( lVar3 + 0x2c0 ) + (ulong)local_44 * 8 );
         cVar2 = HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_lookup_pos((HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)( lVar3 + 0x18 ), (int*)(ulong)in_ECX, &local_48);
         if (cVar2 == '\0') goto LAB_001020f8;
         lVar3 = *(long*)( *(long*)( lVar3 + 0x20 ) + (ulong)local_48 * 8 );
         *(undefined8*)param_1 = 0;
         lVar3 = *(long*)( lVar3 + 0x18 );
         if (lVar3 == 0) goto LAB_0010204e;
         *(long*)param_1 = lVar3;
         cVar2 = RefCounted::reference();
         if (cVar2 != '\0') goto LAB_0010204e;
      }

   }

   *(undefined8*)param_1 = 0;
   LAB_0010204e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Shader::_get_default_texture_parameter_bind_compat_95126(StringName const&, int) const */StringName *Shader::_get_default_texture_parameter_bind_compat_95126(StringName *param_1, int param_2) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   get_default_texture_parameter((StringName*)&local_28, param_2);
   *(undefined8*)param_1 = 0;
   if (local_28 == (Object*)0x0) goto LAB_0010219d;
   lVar2 = __dynamic_cast(local_28, &Object::typeinfo, &Texture2D::typeinfo, 0);
   if (lVar2 == 0) {
      LAB_00102191:cVar1 = RefCounted::unreference();
   }
 else {
      *(long*)param_1 = lVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') goto LAB_00102191;
      *(undefined8*)param_1 = 0;
      cVar1 = RefCounted::unreference();
   }

   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(local_28) ),cVar1 != '\0') {
      ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
      Memory::free_static(local_28, false);
   }

   LAB_0010219d:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Shader::_bind_methods() */void Shader::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   long *plVar5;
   MethodBind *pMVar6;
   uint uVar7;
   long lVar8;
   long *plVar9;
   long in_FS_OFFSET;
   undefined8 local_130;
   long local_128;
   undefined8 local_120;
   long local_118;
   long local_110;
   long local_108;
   long *local_100;
   char *local_f8;
   undefined8 local_f0;
   long *local_e8;
   undefined *local_c8;
   undefined8 local_c0;
   undefined *local_b8;
   undefined *puStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   char *pcStack_90;
   char *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar4 = PTR__LC52_00114150;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_f8, (char***)"get_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<Shader,Shader::Mode>((_func_Mode*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_c0 = 0;
   local_c8 = &_LC61;
   local_78 = (Variant**)&local_c8;
   uVar7 = (uint)(Variant*)&local_78;
   D_METHODP((char*)&local_f8, (char***)"set_code", uVar7);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<Shader,String_const&>(set_code);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_f8, (char***)"get_code", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<Shader,String>(get_code);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_80 = 0;
   local_88 = "index";
   local_98 = (Variant*)&_LC51;
   pcStack_90 = "texture";
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &pcStack_90;
   local_78 = &local_98;
   D_METHODP((char*)&local_f8, (char***)"set_default_texture_parameter", uVar7);
   Variant::Variant((Variant*)&local_78, 0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar6 = create_method_bind<Shader,StringName_const&,Ref<Texture>const&,int>(set_default_texture_parameter);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_a8 = 0;
   auStack_70._0_8_ = &puStack_b0;
   local_b8 = &_LC51;
   puStack_b0 = puVar4;
   local_78 = (Variant**)&local_b8;
   D_METHODP((char*)&local_f8, (char***)"get_default_texture_parameter", uVar7);
   Variant::Variant((Variant*)&local_78, 0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar6 = create_method_bind<Shader,Ref<Texture>,StringName_const&,int>(get_default_texture_parameter);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_98 = (Variant*)0x10579b;
   pcStack_90 = (char*)0x0;
   local_78 = &local_98;
   D_METHODP((char*)&local_f8, (char***)"get_shader_uniform_list", uVar7);
   Variant::Variant((Variant*)&local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar6 = create_method_bind<Shader,Array,bool>(_get_shader_uniform_list);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_f8, (char***)"inspect_native_shader_code", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar6 = create_method_bind<Shader>(inspect_native_shader_code);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_f8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   plVar5 = local_e8;
   if (local_e8 != (long*)0x0) {
      LOCK();
      plVar9 = local_e8 + -2;
      *plVar9 = *plVar9 + -1;
      UNLOCK();
      if (*plVar9 == 0) {
         if (local_e8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = local_e8[-1];
         lVar8 = 0;
         local_e8 = (long*)0x0;
         plVar9 = plVar5;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar9 != 0 )) {
                  StringName::unref();
               }

               lVar8 = lVar8 + 1;
               plVar9 = plVar9 + 1;
            }
 while ( lVar2 != lVar8 );
         }

         Memory::free_static(plVar5 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_100, true);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::set_method_flags((StringName*)&local_f8, (StringName*)&local_100, 3);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_108, true);
   _scs_create((char*)&local_110, true);
   local_118 = 0;
   local_120 = 0;
   String::parse_latin1((String*)&local_120, "");
   local_128 = 0;
   String::parse_latin1((String*)&local_128, "code");
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 4, (String*)&local_128, 0, (String*)&local_120, 2, (CowData<char32_t>*)&local_118);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "Shader");
   StringName::StringName((StringName*)&local_100, (String*)&local_130, false);
   ClassDB::add_property((StringName*)&local_100, (PropertyInfo*)&local_f8, (StringName*)&local_110, (StringName*)&local_108, -1);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_108 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "MODE_SPATIAL", false);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "MODE_SPATIAL");
   local_f8 = "Shader::Mode";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_108, (String*)&local_110);
   StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
   local_118 = 0;
   local_120 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_120, 0, (CowData<char32_t>*)&local_118, 0x10006, (StringName*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_100 = local_e8;
   local_e8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_100, (StringName*)&local_128, 0, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "MODE_CANVAS_ITEM", false);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "MODE_CANVAS_ITEM");
   local_f8 = "Shader::Mode";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_108, (String*)&local_110);
   StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
   local_118 = 0;
   local_120 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_120, 0, (CowData<char32_t>*)&local_118, 0x10006, (StringName*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_100 = local_e8;
   local_e8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_100, (StringName*)&local_128, 1, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "MODE_PARTICLES", false);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "MODE_PARTICLES");
   local_f8 = "Shader::Mode";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_108, (String*)&local_110);
   StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
   local_118 = 0;
   local_120 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_120, 0, (CowData<char32_t>*)&local_118, 0x10006, (StringName*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_100 = local_e8;
   local_e8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_100, (StringName*)&local_128, 2, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "MODE_SKY", false);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "MODE_SKY");
   local_f8 = "Shader::Mode";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_108, (String*)&local_110);
   StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
   local_118 = 0;
   local_120 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_120, 0, (CowData<char32_t>*)&local_118, 0x10006, (StringName*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_100 = local_e8;
   local_e8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_100, (StringName*)&local_128, 3, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_128, "MODE_FOG", false);
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "MODE_FOG");
   local_f8 = "Shader::Mode";
   local_110 = 0;
   local_f0 = 0xc;
   String::parse_latin1((StrRange*)&local_110);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_108, (String*)&local_110);
   StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
   local_118 = 0;
   local_120 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_f8, 2, (String*)&local_120, 0, (CowData<char32_t>*)&local_118, 0x10006, (StringName*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_100 = local_e8;
   local_e8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_108 = 0;
   String::parse_latin1((String*)&local_108, "Shader");
   StringName::StringName((StringName*)&local_f8, (String*)&local_108, false);
   ClassDB::bind_integer_constant((StringName*)&local_f8, (StringName*)&local_100, (StringName*)&local_128, 4, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_100 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] */void CowData<DocData::PropertyDoc>::_copy_on_write(CowData<DocData::PropertyDoc> *this) {
   CowData<char32_t> *this_00;
   CowData<char32_t> CVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   CowData<char32_t> *this_01;
   CowData *pCVar5;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 0x78 != 0) {
      uVar6 = lVar2 * 0x78 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar7 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_01 = (CowData<char32_t>*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            pCVar5 = (CowData*)( this_01 + *(long*)this + ( -0x10 - (long)puVar4 ) );
            lVar7 = lVar7 + 1;
            *(undefined8*)this_01 = 0;
            CowData<char32_t>::_ref(this_01, pCVar5);
            *(undefined8*)( this_01 + 8 ) = 0;
            CowData<char32_t>::_ref(this_01 + 8, pCVar5 + 8);
            *(undefined8*)( this_01 + 0x10 ) = 0;
            CowData<char32_t>::_ref(this_01 + 0x10, pCVar5 + 0x10);
            CVar1 = *(CowData<char32_t>*)( pCVar5 + 0x18 );
            *(undefined8*)( this_01 + 0x20 ) = 0;
            this_01[0x18] = CVar1;
            CowData<char32_t>::_ref(this_01 + 0x20, pCVar5 + 0x20);
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( this_01 + ( 8*i + 40 ) ) = 0;
               CowData<char32_t>::_ref(this_01 + ( 8*i + 40 ), pCVar5 + ( 8*i + 40 ));
            }

            for (int i = 0; i < 3; i++) {
               CVar1 = *(CowData<char32_t>*)( pCVar5 + ( 16*i + 64 ) );
               *(undefined8*)( this_01 + ( 16*i + 72 ) ) = 0;
               this_01[( 16*i + 64 )] = CVar1;
               CowData<char32_t>::_ref(this_01 + ( 16*i + 72 ), pCVar5 + ( 16*i + 72 ));
            }

            this_00 = this_01 + 0x70;
            *(undefined8*)( this_01 + 0x70 ) = 0;
            this_01 = this_01 + 0x78;
            CowData<char32_t>::_ref(this_00, pCVar5 + 0x70);
         }
 while ( lVar2 != lVar7 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Shader::set_default_texture_parameter(StringName const&, Ref<Texture> const&, int) */void Shader::set_default_texture_parameter(Shader *this, StringName *param_1, Ref *param_2, int param_3) {
   HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> *pHVar1;
   uint *puVar2;
   uint *puVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   Object *pOVar6;
   Object *pOVar7;
   code *pcVar8;
   long lVar9;
   long lVar10;
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
   uint uVar35;
   uint uVar36;
   char cVar37;
   uint uVar38;
   HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>> *pHVar39;
   long *plVar40;
   undefined8 uVar41;
   uint uVar43;
   uint uVar44;
   int iVar45;
   long lVar46;
   long lVar47;
   void *pvVar48;
   long *plVar49;
   long in_FS_OFFSET;
   uint local_4c[2];
   uint local_44;
   long local_40;
   ulong uVar42;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c[0] = param_3;
   _check_shader_rid(this);
   uVar36 = local_4c[0];
   if (*(long*)param_2 == 0) {
      pHVar1 = ( HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> * )(this + 0x2b8);
      local_44 = 0;
      cVar37 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(pHVar1, param_1, &local_44);
      if (cVar37 != '\0') {
         pHVar39 = (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::operator [](pHVar1, param_1);
         cVar37 = HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_lookup_pos(pHVar39, (int*)(ulong)uVar36, &local_44);
         if (cVar37 != '\0') {
            pHVar39 = (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::operator [](pHVar1, param_1);
            local_44 = 0;
            cVar37 = HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_lookup_pos(pHVar39, (int*)(ulong)uVar36, &local_44);
            if (cVar37 != '\0') {
               lVar47 = *(long*)( pHVar39 + 0x10 );
               uVar43 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pHVar39 + 0x28 ) * 4 );
               lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pHVar39 + 0x28 ) * 8 );
               uVar42 = CONCAT44(0, uVar43);
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar42;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = ( ulong )(local_44 + 1) * lVar9;
               lVar46 = SUB168(auVar11 * auVar23, 8);
               puVar2 = (uint*)( lVar47 + lVar46 * 4 );
               uVar44 = SUB164(auVar11 * auVar23, 8);
               lVar10 = *(long*)( pHVar39 + 8 );
               uVar38 = *puVar2;
               if (uVar38 != 0) {
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = uVar42;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = (ulong)uVar38 * lVar9;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = uVar42;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = ( ulong )(( uVar43 + uVar44 ) - SUB164(auVar12 * auVar24, 8)) * lVar9;
                  iVar45 = SUB164(auVar13 * auVar25, 8);
                  while (uVar35 = uVar44,iVar45 != 0) {
                     puVar3 = (uint*)( lVar47 + (ulong)local_44 * 4 );
                     *puVar2 = *puVar3;
                     puVar4 = (undefined8*)( lVar10 + lVar46 * 8 );
                     *puVar3 = uVar38;
                     puVar5 = (undefined8*)( lVar10 + (ulong)local_44 * 8 );
                     uVar41 = *puVar4;
                     *puVar4 = *puVar5;
                     *puVar5 = uVar41;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = ( ulong )(uVar35 + 1) * lVar9;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar42;
                     lVar46 = SUB168(auVar16 * auVar28, 8);
                     puVar2 = (uint*)( lVar47 + lVar46 * 4 );
                     uVar44 = SUB164(auVar16 * auVar28, 8);
                     uVar38 = *puVar2;
                     local_44 = uVar35;
                     if (uVar38 == 0) break;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = (ulong)uVar38 * lVar9;
                     auVar26._8_8_ = 0;
                     auVar26._0_8_ = uVar42;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = ( ulong )(( uVar44 + uVar43 ) - SUB164(auVar14 * auVar26, 8)) * lVar9;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar42;
                     iVar45 = SUB164(auVar15 * auVar27, 8);
                  }
;
               }

               uVar42 = (ulong)local_44;
               *(undefined4*)( lVar47 + uVar42 * 4 ) = 0;
               plVar40 = (long*)( lVar10 + uVar42 * 8 );
               plVar49 = (long*)*plVar40;
               if (*(long**)( pHVar39 + 0x18 ) == plVar49) {
                  *(long*)( pHVar39 + 0x18 ) = *plVar49;
                  plVar49 = (long*)*plVar40;
               }

               if (*(long**)( pHVar39 + 0x20 ) == plVar49) {
                  *(long*)( pHVar39 + 0x20 ) = plVar49[1];
                  plVar49 = (long*)*plVar40;
               }

               if ((long*)plVar49[1] != (long*)0x0) {
                  *(long*)plVar49[1] = *plVar49;
                  plVar49 = (long*)*plVar40;
               }

               if (*plVar49 != 0) {
                  *(long*)( *plVar49 + 8 ) = plVar49[1];
                  plVar49 = (long*)*plVar40;
               }

               if (( plVar49[3] != 0 ) && ( cVar37 = RefCounted::unreference() ),cVar37 != '\0') {
                  pOVar6 = (Object*)plVar49[3];
                  cVar37 = predelete_handler(pOVar6);
                  if (cVar37 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )();
                     Memory::free_static(pOVar6, false);
                  }

               }

               Memory::free_static(plVar49, false);
               *(undefined8*)( *(long*)( pHVar39 + 8 ) + uVar42 * 8 ) = 0;
               *(int*)( pHVar39 + 0x2c ) = *(int*)( pHVar39 + 0x2c ) + -1;
            }

            lVar47 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::operator [](pHVar1, param_1);
            if (*(int*)( lVar47 + 0x2c ) == 0) {
               local_44 = 0;
               cVar37 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(pHVar1, param_1, &local_44);
               if (cVar37 != '\0') {
                  uVar43 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2e0 ) * 4 );
                  uVar42 = CONCAT44(0, uVar43);
                  lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x2e0 ) * 8 );
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( ulong )(local_44 + 1) * lVar47;
                  auVar29._8_8_ = 0;
                  auVar29._0_8_ = uVar42;
                  lVar46 = SUB168(auVar17 * auVar29, 8);
                  lVar9 = *(long*)( this + 0x2c8 );
                  puVar2 = (uint*)( lVar9 + lVar46 * 4 );
                  lVar10 = *(long*)( this + 0x2c0 );
                  uVar44 = SUB164(auVar17 * auVar29, 8);
                  uVar38 = *puVar2;
                  if (uVar38 != 0) {
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = (ulong)uVar38 * lVar47;
                     auVar30._8_8_ = 0;
                     auVar30._0_8_ = uVar42;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )(( uVar43 + uVar44 ) - SUB164(auVar18 * auVar30, 8)) * lVar47;
                     auVar31._8_8_ = 0;
                     auVar31._0_8_ = uVar42;
                     iVar45 = SUB164(auVar19 * auVar31, 8);
                     while (uVar35 = uVar44,iVar45 != 0) {
                        puVar3 = (uint*)( lVar9 + (ulong)local_44 * 4 );
                        *puVar2 = *puVar3;
                        puVar4 = (undefined8*)( lVar10 + lVar46 * 8 );
                        *puVar3 = uVar38;
                        puVar5 = (undefined8*)( lVar10 + (ulong)local_44 * 8 );
                        uVar41 = *puVar4;
                        *puVar4 = *puVar5;
                        *puVar5 = uVar41;
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ = ( ulong )(uVar35 + 1) * lVar47;
                        auVar34._8_8_ = 0;
                        auVar34._0_8_ = uVar42;
                        lVar46 = SUB168(auVar22 * auVar34, 8);
                        puVar2 = (uint*)( lVar9 + lVar46 * 4 );
                        uVar44 = SUB164(auVar22 * auVar34, 8);
                        uVar38 = *puVar2;
                        local_44 = uVar35;
                        if (uVar38 == 0) break;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = (ulong)uVar38 * lVar47;
                        auVar32._8_8_ = 0;
                        auVar32._0_8_ = uVar42;
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ = ( ulong )(( uVar44 + uVar43 ) - SUB164(auVar20 * auVar32, 8)) * lVar47;
                        auVar33._8_8_ = 0;
                        auVar33._0_8_ = uVar42;
                        iVar45 = SUB164(auVar21 * auVar33, 8);
                     }
;
                  }

                  uVar42 = (ulong)local_44;
                  *(undefined4*)( lVar9 + uVar42 * 4 ) = 0;
                  plVar40 = (long*)( lVar10 + uVar42 * 8 );
                  plVar49 = (long*)*plVar40;
                  if (*(long**)( this + 0x2d0 ) == plVar49) {
                     *(long*)( this + 0x2d0 ) = *plVar49;
                     plVar49 = (long*)*plVar40;
                  }

                  if (*(long**)( this + 0x2d8 ) == plVar49) {
                     *(long*)( this + 0x2d8 ) = plVar49[1];
                     plVar49 = (long*)*plVar40;
                  }

                  if ((long*)plVar49[1] != (long*)0x0) {
                     *(long*)plVar49[1] = *plVar49;
                     plVar49 = (long*)*plVar40;
                  }

                  if (*plVar49 != 0) {
                     *(long*)( *plVar49 + 8 ) = plVar49[1];
                     plVar49 = (long*)*plVar40;
                  }

                  pvVar48 = (void*)plVar49[4];
                  if (pvVar48 != (void*)0x0) {
                     if (*(int*)( (long)plVar49 + 0x44 ) != 0) {
                        uVar43 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar49 + 8 ) * 4 );
                        if (uVar43 == 0) {
                           *(undefined4*)( (long)plVar49 + 0x44 ) = 0;
                           *(undefined1(*) [16])( plVar49 + 6 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar47 = 0;
                           do {
                              if (*(int*)( plVar49[5] + lVar47 ) != 0) {
                                 pvVar48 = *(void**)( (long)pvVar48 + lVar47 * 2 );
                                 *(int*)( plVar49[5] + lVar47 ) = 0;
                                 if (( *(long*)( (long)pvVar48 + 0x18 ) != 0 ) && ( cVar37 = RefCounted::unreference() ),cVar37 != '\0') {
                                    pOVar6 = *(Object**)( (long)pvVar48 + 0x18 );
                                    cVar37 = predelete_handler(pOVar6);
                                    if (cVar37 != '\0') {
                                       ( **(code**)( *(long*)pOVar6 + 0x140 ) )();
                                       Memory::free_static(pOVar6, false);
                                    }

                                 }

                                 Memory::free_static(pvVar48, false);
                                 pvVar48 = (void*)plVar49[4];
                                 *(undefined8*)( (long)pvVar48 + lVar47 * 2 ) = 0;
                              }

                              lVar47 = lVar47 + 4;
                           }
 while ( lVar47 != (ulong)uVar43 * 4 );
                           *(undefined4*)( (long)plVar49 + 0x44 ) = 0;
                           *(undefined1(*) [16])( plVar49 + 6 ) = (undefined1[16])0x0;
                           if (pvVar48 == (void*)0x0) goto LAB_001040b7;
                        }

                     }

                     Memory::free_static(pvVar48, false);
                     Memory::free_static((void*)plVar49[5], false);
                  }

                  LAB_001040b7:if (( StringName::configured != '\0' ) && ( plVar49[2] != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(plVar49, false);
                  *(undefined8*)( *(long*)( this + 0x2c0 ) + uVar42 * 8 ) = 0;
                  *(int*)( this + 0x2e4 ) = *(int*)( this + 0x2e4 ) + -1;
               }

            }

         }

      }

      plVar40 = (long*)RenderingServer::get_singleton();
      ( **(code**)( *plVar40 + 0x278 ) )(plVar40, *(undefined8*)( this + 0x240 ), param_1, 0, uVar36);
      goto LAB_001039f8;
   }

   pHVar1 = ( HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> * )(this + 0x2b8);
   local_44 = 0;
   cVar37 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(pHVar1, param_1, &local_44);
   if (cVar37 == '\0') {
      pHVar39 = (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::operator [](pHVar1, param_1);
      uVar43 = *(uint*)( pHVar39 + 0x28 );
      uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar43 * 4 );
      if (( *(int*)( pHVar39 + 0x2c ) == 0 ) || ( *(long*)( pHVar39 + 8 ) == 0 )) {
         LAB_00103a56:if (0x16 < uVar38) goto LAB_0010396e;
      }
 else {
         lVar47 = 0;
         if (uVar38 != 0) {
            do {
               if (*(int*)( *(long*)( pHVar39 + 0x10 ) + lVar47 ) != 0) {
                  *(int*)( *(long*)( pHVar39 + 0x10 ) + lVar47 ) = 0;
                  pvVar48 = *(void**)( *(long*)( pHVar39 + 8 ) + lVar47 * 2 );
                  Ref<Texture>::unref((Ref<Texture>*)( (long)pvVar48 + 0x18 ));
                  Memory::free_static(pvVar48, false);
                  *(undefined8*)( *(long*)( pHVar39 + 8 ) + lVar47 * 2 ) = 0;
               }

               lVar47 = lVar47 + 4;
            }
 while ( lVar47 != (ulong)uVar38 << 2 );
            uVar43 = *(uint*)( pHVar39 + 0x28 );
            *(undefined4*)( pHVar39 + 0x2c ) = 0;
            *(undefined1(*) [16])( pHVar39 + 0x18 ) = (undefined1[16])0x0;
            uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar43 * 4 );
            goto LAB_00103a56;
         }

         *(undefined4*)( pHVar39 + 0x2c ) = 0;
         *(undefined1(*) [16])( pHVar39 + 0x18 ) = (undefined1[16])0x0;
      }

      if (uVar43 != 0x1c) {
         uVar42 = (ulong)uVar43;
         do {
            uVar38 = (int)uVar42 + 1;
            uVar42 = (ulong)uVar38;
            if (0x16 < *(uint*)( hash_table_size_primes + uVar42 * 4 )) {
               if (uVar38 != uVar43) {
                  if (*(long*)( pHVar39 + 8 ) == 0) {
                     *(uint*)( pHVar39 + 0x28 ) = uVar38;
                  }
 else {
                     HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::_resize_and_rehash(pHVar39, uVar38);
                  }

               }

               goto LAB_0010396e;
            }

         }
 while ( uVar38 != 0x1c );
      }

      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0010396e:pHVar39 = (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>*)HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::operator [](pHVar1, param_1);
   plVar40 = (long*)HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>::operator [](pHVar39, (int*)local_4c);
   pOVar6 = *(Object**)param_2;
   pOVar7 = (Object*)*plVar40;
   if (pOVar6 != pOVar7) {
      *plVar40 = (long)pOVar6;
      if (( pOVar6 != (Object*)0x0 ) && ( cVar37 = RefCounted::reference() ),cVar37 == '\0') {
         *plVar40 = 0;
      }

      if (( ( pOVar7 != (Object*)0x0 ) && ( cVar37 = RefCounted::unreference() ),cVar37 != '\0' )) &&( cVar37 = cVar37 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
      Memory::free_static(pOVar7, false);
   }

}
plVar40 = (long*)RenderingServer::get_singleton();pcVar8 = *(code**)( *plVar40 + 0x278 );uVar41 = ( **(code**)( **(long**)param_2 + 0x1c0 ) )();( *pcVar8 )(plVar40, *(undefined8*)( this + 0x240 ), param_1, uVar41, uVar36);LAB_001039f8:Resource::emit_changed();if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Shader::_set_default_texture_parameter_bind_compat_95126(StringName const&, Ref<Texture2D>
   const&, int) */void Shader::_set_default_texture_parameter_bind_compat_95126(Shader *this, StringName *param_1, Ref *param_2, int param_3) {
   char cVar1;
   Object *pOVar2;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (Object*)0x0;
   if (*(long*)param_2 == 0) {
      LAB_001042ac:set_default_texture_parameter(this, param_1, (Ref*)&local_38, param_3);
   }
 else {
      pOVar2 = (Object*)__dynamic_cast(*(long*)param_2, &Object::typeinfo, &Texture::typeinfo, 0);
      if (pOVar2 == (Object*)0x0) goto LAB_001042ac;
      local_38 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         local_38 = (Object*)0x0;
         goto LAB_001042ac;
      }

      set_default_texture_parameter(this, param_1, (Ref*)&local_38, param_3);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(pOVar2);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar2, false);
               return;
            }

            goto LAB_00104339;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104339:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Shader::get_shader_uniform_list(List<PropertyInfo, DefaultAllocator>*, bool) const */void Shader::get_shader_uniform_list(Shader *this, List *param_1, bool param_2) {
   CowData<char32_t> *this_00;
   undefined1 auVar1[16];
   Object *pOVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   long *plVar6;
   long lVar7;
   ClassDoc *pCVar8;
   long lVar9;
   PropertyInfo *pPVar10;
   long in_FS_OFFSET;
   CowData *local_850;
   CowData *local_848;
   long *local_780;
   Object *local_778;
   Object *local_770;
   CowData<char32_t> local_768[8];
   undefined8 local_760;
   undefined1 local_758[8];
   CowData aCStack_750[8];
   undefined8 local_748;
   CowData<char32_t> local_740;
   undefined1 local_738[16];
   CowData local_728[16];
   CowData<char32_t> local_718;
   undefined8 local_710;
   CowData<char32_t> local_708;
   undefined8 local_700;
   CowData<char32_t> local_6f8;
   CowData local_6f0[24];
   char *local_6d8;
   long local_6d0;
   long local_6c8;
   CowData<char32_t> local_6c0;
   long local_6b8;
   long local_6b0;
   long local_6a8;
   long local_6a0;
   CowData<char32_t> local_698;
   long local_690;
   CowData<char32_t> local_688;
   long local_680;
   CowData<char32_t> local_678;
   long local_670;
   long local_668[2];
   undefined1 local_658[16];
   undefined1 local_648[16];
   undefined8 local_638;
   undefined8 local_628;
   undefined8 local_618;
   undefined8 local_608;
   undefined8 local_5f8;
   undefined8 local_5e8;
   undefined8 local_5d8;
   undefined1 local_5c8[16];
   undefined1 local_5b8[16];
   undefined8 local_5a8;
   long local_598[2];
   undefined8 local_588;
   undefined8 local_578;
   undefined1 local_570;
   undefined8 local_568;
   undefined1 local_560;
   undefined8 local_558;
   undefined1 local_550;
   undefined8 local_548;
   int local_538[8];
   RegEx local_518[416];
   RegEx local_378[416];
   int local_1d8[102];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x1c8 ) != _update_shader) {
      ( **(code**)( *(long*)this + 0x1c8 ) )();
   }

   _check_shader_rid(this);
   local_780 = (long*)0x0;
   plVar6 = (long*)RenderingServer::get_singleton();
   ( **(code**)( *plVar6 + 0x268 ) )(plVar6, *(undefined8*)( this + 0x240 ), (List<PropertyInfo,DefaultAllocator>*)&local_780);
   local_638 = 0;
   local_628 = 0;
   local_618 = 0;
   local_608 = 0;
   local_5f8 = 0;
   local_5e8 = 0;
   local_5d8 = 0;
   local_5a8 = 2;
   local_598[0] = 0;
   local_588 = 0;
   local_578 = 0;
   local_570 = 0;
   local_568 = 0;
   local_560 = 0;
   local_558 = 0;
   local_550 = 0;
   local_548 = 0;
   local_658 = (undefined1[16])0x0;
   local_648 = (undefined1[16])0x0;
   local_5c8 = (undefined1[16])0x0;
   local_5b8 = (undefined1[16])0x0;
   Resource::get_path();
   if ((char*)local_658._0_8_ != local_6d8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_658);
      pcVar3 = local_6d8;
      local_6d8 = (char*)0x0;
      local_658._0_8_ = pcVar3;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
   local_550 = 1;
   if (( local_780 != (long*)0x0 ) && ( pPVar10 = (PropertyInfo*)*local_780 ),pPVar10 != (PropertyInfo*)0x0) {
      do {
         while (*(int*)( pPVar10 + 0x28 ) == 0x40 || *(int*)( pPVar10 + 0x28 ) == 0x100) {
            if (param_2) goto LAB_00104557;
            LAB_00104588:pPVar10 = *(PropertyInfo**)( pPVar10 + 0x30 );
            if (pPVar10 == (PropertyInfo*)0x0) goto LAB_00104618;
         }
;
         StringName::StringName((StringName*)&local_6d8, (String*)( pPVar10 + 8 ), false);
         auVar1._12_4_ = 0;
         auVar1._0_12_ = stack0xfffffffffffff8ac;
         _local_758 = auVar1 << 0x20;
         cVar4 = HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> ::_lookup_pos(( HashMap<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>> >> * )(this + 0x2b8), (StringName*)&local_6d8, (uint*)local_758);
         if (( StringName::configured != '\0' ) && ( local_6d8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (cVar4 == '\0') {
            LAB_00104557:if (param_1 != (List*)0x0) {
               if (*(int*)pPVar10 == 0x17) {
                  *(undefined4*)pPVar10 = 0x18;
               }

               lVar7 = Engine::get_singleton();
               if (*(char*)( lVar7 + 0xc0 ) != '\0') {
                  local_748 = 0;
                  local_740 = (CowData<char32_t>)0x0;
                  local_718 = (CowData<char32_t>)0x0;
                  local_710 = 0;
                  local_708 = (CowData<char32_t>)0x0;
                  local_700 = 0;
                  local_6f8 = (CowData<char32_t>)0x0;
                  _local_758 = (undefined1[16])0x0;
                  local_738 = (undefined1[16])0x0;
                  for (int i = 0; i < 16; i++) {
                     local_728[i] = (CowData)0;
                  }

                  for (int i = 0; i < 16; i++) {
                     local_6f0[i] = (CowData)0;
                  }

                  operator+((char *)&
                  local_6d8,(String*)"shader_parameter/";
                  if (local_6d8 != (char*)0x0) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_758);
                     pcVar3 = local_6d8;
                     local_6d8 = (char*)0x0;
                     local_758 = (undefined1[8])pcVar3;
                  }

                  local_850 = (CowData*)local_758;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
                  local_6d8 = "(?=[\\s:;=])";
                  local_760 = 0;
                  local_6d0 = 0xb;
                  String::parse_latin1((StrRange*)&local_760);
                  operator+((char *)
                  local_768,(String*)"/\\*\\*\\s([^*]|[\\r\\n]|(\\*+([^*/]|[\\r\\n])))*\\*+/\\s*uniform\\s+\\w+\\s+";
                  String::operator +((String*)&local_6d8, (String*)local_768);
                  RegEx::RegEx(local_518, (String*)&local_6d8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
                  CowData<char32_t>::_unref(local_768);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_760);
                  RegEx::search((String*)&local_778, (int)local_518, (int)this + 0x2a8);
                  if (local_778 != (Object*)0x0) {
                     local_760 = 0;
                     local_6d8 = "\\/\\*\\*([\\s\\S]*?)\\*/";
                     local_6d0 = 0x13;
                     String::parse_latin1((StrRange*)&local_760);
                     RegEx::RegEx(local_378, (String*)&local_760);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_760);
                     Variant::Variant((Variant*)local_1d8, 0);
                     RegExMatch::get_string((Variant*)&local_6d8);
                     RegEx::search((String*)&local_770, (int)local_378, (int)(CowData<char32_t>*)&local_6d8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
                     if (Variant::needs_deinit[local_1d8[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     local_6d8 = "\\n\\s*\\*\\s*";
                     local_760 = 0;
                     local_6d0 = 10;
                     String::parse_latin1((StrRange*)&local_760);
                     RegEx::RegEx((RegEx*)local_1d8, (String*)&local_760);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_760);
                     local_6d8 = "\n";
                     local_760 = 0;
                     local_6d0 = 1;
                     String::parse_latin1((StrRange*)&local_760);
                     Variant::Variant((Variant*)local_538, 1);
                     RegExMatch::get_string((Variant*)local_768);
                     RegEx::sub((String*)&local_6d8, (String*)local_1d8, SUB81(local_768, 0), (int)(StrRange*)&local_760, 1);
                     if ((char*)local_738._0_8_ != local_6d8) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_738);
                        pcVar3 = local_6d8;
                        local_6d8 = (undefined*)0x0;
                        local_738._0_8_ = pcVar3;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
                     CowData<char32_t>::_unref(local_768);
                     if (Variant::needs_deinit[local_538[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_760);
                     RegEx::~RegEx((RegEx*)local_1d8);
                     if (( ( local_770 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar2 = local_770,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

                  RegEx::~RegEx(local_378);
               }

               local_848 = (CowData*)local_738;
               local_6d8 = (char*)0x0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6d8, local_850);
               local_6d0 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6d0, aCStack_750);
               local_6c8 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6c8, (CowData*)&local_748);
               local_6b8 = 0;
               local_6c0 = local_740;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6b8, local_848);
               local_6b0 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6b0, (CowData*)( local_738 + 8 ));
               local_6a8 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6a8, local_728);
               local_6a0 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_6a0, local_728 + 8);
               local_690 = 0;
               local_698 = local_718;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_690, (CowData*)&local_710);
               local_680 = 0;
               local_688 = local_708;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_680, (CowData*)&local_700);
               local_670 = 0;
               local_678 = local_6f8;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_670, local_6f0);
               local_668[0] = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)local_668, local_6f0 + 8);
               if (local_598[0] == 0) {
                  lVar7 = 1;
               }
 else {
                  lVar7 = *(long*)( local_598[0] + -8 ) + 1;
               }

               iVar5 = CowData<DocData::PropertyDoc>::resize<false>((CowData<DocData::PropertyDoc>*)local_598, lVar7);
               if (iVar5 == 0) {
                  if (local_598[0] == 0) {
                     lVar9 = -1;
                     lVar7 = 0;
                  }
 else {
                     lVar7 = *(long*)( local_598[0] + -8 );
                     lVar9 = lVar7 + -1;
                     if (-1 < lVar9) {
                        CowData<DocData::PropertyDoc>::_copy_on_write((CowData<DocData::PropertyDoc>*)local_598);
                        this_00 = (CowData<char32_t>*)( local_598[0] + lVar9 * 0x78 );
                        if ((char*)*(long*)this_00 != local_6d8) {
                           CowData<char32_t>::_ref(this_00, (CowData*)&local_6d8);
                        }

                        if (*(long*)( this_00 + 8 ) != local_6d0) {
                           CowData<char32_t>::_ref(this_00 + 8, (CowData*)&local_6d0);
                        }

                        if (*(long*)( this_00 + 0x10 ) != local_6c8) {
                           CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)&local_6c8);
                        }

                        this_00[0x18] = local_6c0;
                        if (*(long*)( this_00 + 0x20 ) != local_6b8) {
                           CowData<char32_t>::_ref(this_00 + 0x20, (CowData*)&local_6b8);
                        }

                        if (*(long*)( this_00 + 0x28 ) != local_6b0) {
                           CowData<char32_t>::_ref(this_00 + 0x28, (CowData*)&local_6b0);
                        }

                        if (*(long*)( this_00 + 0x30 ) != local_6a8) {
                           CowData<char32_t>::_ref(this_00 + 0x30, (CowData*)&local_6a8);
                        }

                        if (*(long*)( this_00 + 0x38 ) != local_6a0) {
                           CowData<char32_t>::_ref(this_00 + 0x38, (CowData*)&local_6a0);
                        }

                        this_00[0x40] = local_698;
                        if (*(long*)( this_00 + 0x48 ) != local_690) {
                           CowData<char32_t>::_ref(this_00 + 0x48, (CowData*)&local_690);
                        }

                        this_00[0x50] = local_688;
                        if (*(long*)( this_00 + 0x58 ) != local_680) {
                           CowData<char32_t>::_ref(this_00 + 0x58, (CowData*)&local_680);
                        }

                        this_00[0x60] = local_678;
                        if (*(long*)( this_00 + 0x68 ) != local_670) {
                           CowData<char32_t>::_ref(this_00 + 0x68, (CowData*)&local_670);
                        }

                        if (*(long*)( this_00 + 0x70 ) != local_668[0]) {
                           CowData<char32_t>::_ref(this_00 + 0x70, (CowData*)local_668);
                        }

                        goto LAB_00104e6e;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar7, "p_index", "size()", "", false, false);
               }
 else {
                  _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }

               LAB_00104e6e:CowData<char32_t>::_unref((CowData<char32_t>*)local_668);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_670);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_680);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_690);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6a8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6b0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6b8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6c8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_6d8);
               if (( ( local_778 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar2 = local_778,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
               Memory::free_static(pOVar2, false);
            }

            RegEx::~RegEx(local_518);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_6f0 + 8 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)local_6f0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_700);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_710);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_728 + 8 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)local_728);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_738 + 8 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)local_848);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_748);
            CowData<char32_t>::_unref((CowData<char32_t>*)aCStack_750);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_850);
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, pPVar10);
      }
 while ( pPVar10 != (PropertyInfo*)0x0 );
   }

   LAB_00104618:lVar7 = EditorHelp::get_doc_data();
   if (( ( lVar7 != 0 ) && ( lVar7 = Engine::get_singleton() * (char*)( lVar7 + 0xc0 ) != '\0' ) ) && ( ( local_658._0_8_ != 0 && ( ( 1 < *(uint*)( local_658._0_8_ + -8 ) && ( param_1 != (List*)0x0 ) ) ) ) )) {
      pCVar8 = (ClassDoc*)EditorHelp::get_doc_data();
      DocTools::add_doc(pCVar8);
   }

   DocData::ClassDoc::~ClassDoc((ClassDoc*)local_658);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_780);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Shader::_get_shader_uniform_list(bool) */Array *Shader::_get_shader_uniform_list(bool param_1) {
   bool in_DL;
   long lVar1;
   Shader *in_RSI;
   undefined7 in_register_00000039;
   Array *this;
   long in_FS_OFFSET;
   long *local_68;
   PropertyInfo local_60[8];
   int local_58[6];
   long local_40;
   this(Array * CONCAT71(in_register_00000039, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (long*)0x0;
   get_shader_uniform_list(in_RSI, (List*)&local_68, in_DL);
   Array::Array(this);
   if (( local_68 != (long*)0x0 ) && ( lVar1 = lVar1 != 0 )) {
      do {
         PropertyInfo::operator_cast_to_Dictionary(local_60);
         Variant::Variant((Variant*)local_58, local_60);
         Array::push_back((Variant*)this);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)local_60);
         lVar1 = *(long*)( lVar1 + 0x30 );
      }
 while ( lVar1 != 0 );
   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x113f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
   return (uint)CONCAT71(0x113f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
   return (uint)CONCAT71(0x113f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* Shader::is_class_ptr(void*) const */uint Shader::is_class_ptr(Shader *this, void *param_1) {
   return (uint)CONCAT71(0x113f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Shader::_getv(StringName const&, Variant&) const */undefined8 Shader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shader::_setv(StringName const&, Variant const&) */undefined8 Shader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shader::_validate_propertyv(PropertyInfo&) const */void Shader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Shader::_property_can_revertv(StringName const&) const */undefined8 Shader::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Shader::_property_get_revertv(StringName const&, Variant&) const */undefined8 Shader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Shader::_notificationv(int, bool) */void Shader::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<Shader, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Shader,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Shader,void> *this) {
   return;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Array, bool>::_gen_argument_type(int) const */int MethodBindTR<Array,bool>::_gen_argument_type(MethodBindTR<Array,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe5 ) + 0x1c;
}
/* MethodBindTR<Array, bool>::get_argument_meta(int) const */undefined8 MethodBindTR<Array,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Texture>, StringName const&, int>::_gen_argument_type(int) const */char MethodBindTRC<Ref<Texture>,StringName_const&,int>::_gen_argument_type(MethodBindTRC<Ref<Texture>,StringName_const&,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x13U ) + 2;
   }

   return cVar1;
}
/* MethodBindTRC<Ref<Texture>, StringName const&, int>::get_argument_meta(int) const */char MethodBindTRC<Ref<Texture>,StringName_const&,int>::get_argument_meta(MethodBindTRC<Ref<Texture>,StringName_const&,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}
/* MethodBindT<StringName const&, Ref<Texture> const&, int>::get_argument_meta(int) const */char MethodBindT<StringName_const&,Ref<Texture>const&,int>::get_argument_meta(MethodBindT<StringName_const&,Ref<Texture>const&,int> *this, int param_1) {
   return ( param_1 == 2 ) * '\x03';
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
/* MethodBindTRC<Shader::Mode>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Shader::Mode>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<Shader::Mode>::get_argument_meta(int) const */undefined8 MethodBindTRC<Shader::Mode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::_gen_argument_type(int) const */char MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::_gen_argument_type(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x13U ) + 2;
   }

   return cVar1;
}
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::get_argument_meta(int) const */char MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::get_argument_meta(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}
/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::get_argument_meta(int) const */char MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::get_argument_meta(MethodBindT<StringName_const&,Ref<Texture2D>const&,int> *this, int param_1) {
   return ( param_1 == 2 ) * '\x03';
}
/* CallableCustomMethodPointer<Shader, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<Shader,void>::get_argument_count(CallableCustomMethodPointer<Shader,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<Shader, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Shader,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Shader,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture2D>const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113940;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture2D>const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113940;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001139a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001139a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Shader::Mode>::~MethodBindTRC() */void MethodBindTRC<Shader::Mode>::~MethodBindTRC(MethodBindTRC<Shader::Mode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113a00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Shader::Mode>::~MethodBindTRC() */void MethodBindTRC<Shader::Mode>::~MethodBindTRC(MethodBindTRC<Shader::Mode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113a00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113a60;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113a60;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ac0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ac0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<StringName const&, Ref<Texture> const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture>const&,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture>const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113b20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, Ref<Texture> const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture>const&,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture>const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113b20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Texture>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113b80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Texture>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113b80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Array, bool>::~MethodBindTR() */void MethodBindTR<Array,bool>::~MethodBindTR(MethodBindTR<Array,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113be0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Array, bool>::~MethodBindTR() */void MethodBindTR<Array,bool>::~MethodBindTR(MethodBindTR<Array,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113be0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113c40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113c40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001131f0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001131f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<StringName const&, Ref<Texture> const&, int>::_gen_argument_type(int) const */undefined8 MethodBindT<StringName_const&,Ref<Texture>const&,int>::_gen_argument_type(MethodBindT<StringName_const&,Ref<Texture>const&,int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 0x15 ),param_1 != 0 )) {
      uVar1 = 0x18;
   }

   return uVar1;
}
/* CallableCustomMethodPointer<Shader, void>::get_object() const */undefined8 CallableCustomMethodPointer<Shader,void>::get_object(CallableCustomMethodPointer<Shader,void> *this) {
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
         goto LAB_00105d1d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00105d1d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00105d1d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::_gen_argument_type(int) const */undefined8 MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::_gen_argument_type(MethodBindT<StringName_const&,Ref<Texture2D>const&,int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 0x15 ),param_1 != 0 )) {
      uVar1 = 0x18;
   }

   return uVar1;
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
/* Shader::get_save_class() const */Shader * __thiscall Shader::get_save_class(Shader *this){
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
/* ResourceFormatSaverShader::~ResourceFormatSaverShader() */void ResourceFormatSaverShader::~ResourceFormatSaverShader(ResourceFormatSaverShader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106011;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106011;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106011;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106011;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00106011:*(undefined***)this = &PTR__initialize_classv_001131f0;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatSaverShader::~ResourceFormatSaverShader() */void ResourceFormatSaverShader::~ResourceFormatSaverShader(ResourceFormatSaverShader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001060e1;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001060e1;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001060e1;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001060e1;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001060e1:*(undefined***)this = &PTR__initialize_classv_001131f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1f8);
   return;
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
         LAB_00106153:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106153;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_001061be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_001061be:return &_get_class_namev();
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
         LAB_00106233:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106233;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010629e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010629e:return &_get_class_namev();
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
         LAB_00106323:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106323;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
         goto LAB_0010638e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatSaver");
   LAB_0010638e:return &_get_class_namev();
}
/* Shader::_get_class_namev() const */undefined8 *Shader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106403:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106403;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Shader");
         goto LAB_0010646e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Shader");
   LAB_0010646e:return &_get_class_namev();
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
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = StringName::operator =;
   if (bVar1) {
      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106693;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00106693:*(undefined***)this = &PTR__initialize_classv_001131f0;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatLoaderShader::~ResourceFormatLoaderShader() */void ResourceFormatLoaderShader::~ResourceFormatLoaderShader(ResourceFormatLoaderShader *this) {
   *(undefined***)this = &PTR__initialize_classv_00113540;
   ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
   return;
}
/* ResourceFormatLoaderShader::~ResourceFormatLoaderShader() */void ResourceFormatLoaderShader::~ResourceFormatLoaderShader(ResourceFormatLoaderShader *this) {
   *(undefined***)this = &PTR__initialize_classv_00113540;
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
/* Callable create_custom_callable_function_pointer<Shader>(Shader*, char const*, void
   (Shader::*)()) */Shader *create_custom_callable_function_pointer<Shader>(Shader *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001138b0;
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
   >::~HashSet() */void HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::~HashSet(HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>> *this) {
   long *plVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)this;
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (( *(int*)( this + 0x24 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2),*(int*)( this + 0x24 ) != 0 ) ) )) {
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

            pvVar5 = *(void**)this;
         }

         lVar4 = lVar4 + 1;
      }
 while ( (uint)lVar4 < *(uint*)( this + 0x24 ) );
      *(undefined4*)( this + 0x24 ) = 0;
      if (pvVar5 == (void*)0x0) {
         return;
      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   Memory::free_static(*(void**)( this + 8 ), false);
   Memory::free_static(*(void**)( this + 0x18 ), false);
   return;
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
         if (pvVar11 == (void*)0x0) goto LAB_001069ca;
      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   LAB_001069ca:uVar1 = *(ulong*)( param_1 + 0x20 );
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
/* HashMap<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > > > >
   >::~HashMap() */void HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>::~HashMap(HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref < Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>> > *this) {
   uint uVar1;
   uint uVar2;
   Object *pOVar3;
   char cVar4;
   int *piVar5;
   long lVar6;
   void *pvVar7;
   void *pvVar8;
   long lVar9;
   pvVar8 = *(void**)( this + 8 );
   if (pvVar8 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar6 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar6 ) != 0) {
               pvVar8 = *(void**)( (long)pvVar8 + lVar6 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar6 ) = 0;
               pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
               if (pvVar7 != (void*)0x0) {
                  if (*(int*)( (long)pvVar8 + 0x44 ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar8 + 0x40 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar9 = 0;
                        do {
                           piVar5 = (int*)( *(long*)( (long)pvVar8 + 0x28 ) + lVar9 );
                           if (*piVar5 != 0) {
                              pvVar7 = *(void**)( (long)pvVar7 + lVar9 * 2 );
                              *piVar5 = 0;
                              if (( *(long*)( (long)pvVar7 + 0x18 ) != 0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0') {
                                 pOVar3 = *(Object**)( (long)pvVar7 + 0x18 );
                                 cVar4 = predelete_handler(pOVar3);
                                 if (cVar4 != '\0') {
                                    ( **(code**)( *(long*)pOVar3 + 0x140 ) )();
                                    Memory::free_static(pOVar3, false);
                                 }

                              }

                              Memory::free_static(pvVar7, false);
                              pvVar7 = *(void**)( (long)pvVar8 + 0x20 );
                              *(undefined8*)( (long)pvVar7 + lVar9 * 2 ) = 0;
                           }

                           lVar9 = lVar9 + 4;
                        }
 while ( lVar9 != (ulong)uVar2 << 2 );
                        *(undefined4*)( (long)pvVar8 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar8 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar7 == (void*)0x0) goto LAB_00106c34;
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  Memory::free_static(*(void**)( (long)pvVar8 + 0x28 ), false);
               }

               LAB_00106c34:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar8, false);
               pvVar8 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar8 + lVar6 * 2 ) = 0;
            }

            lVar6 = lVar6 + 4;
         }
 while ( lVar6 != (ulong)uVar1 * 4 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar8 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar8, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* ResourceFormatLoader::_initialize_classv() */void ResourceFormatLoader::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00119008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatLoader";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
      ResourceFormatLoader::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<DocData::MethodDoc>::_unref() [clone .part.0] */

void __thiscall CowData<DocData::MethodDoc>::_unref(CowData<DocData::MethodDoc> *this)

{
  long *plVar1;
  long *plVar2;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  CowData<char32_t> *this_00;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  pCVar3 = *(CowData<char32_t> **)this;
  if (pCVar3 != (CowData<char32_t> *)0x0) {
    lVar4 = *(long *)(pCVar3 + -8);
    *(undefined8 *)this = 0;
    if (lVar4 != 0) {
      lVar8 = 0;
      this_00 = pCVar3;
      do {
        CowData<char32_t>::_unref(this_00 + 0x70);
        if (*(long *)(this_00 + 0x68) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x68) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 0x68);
            *(undefined8 *)(this_00 + 0x68) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*(long *)(this_00 + 0x58) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x58) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            plVar1 = *(long **)(this_00 + 0x58);
            if (plVar1 == (long *)0x0) goto LAB_001072aa;
            lVar5 = plVar1[-1];
            *(undefined8 *)(this_00 + 0x58) = 0;
            if (lVar5 != 0) {
              lVar10 = 0;
              plVar9 = plVar1;
              do {
                if (plVar9[4] != 0) {
                  LOCK();
                  plVar2 = (long *)(plVar9[4] + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    lVar6 = plVar9[4];
                    plVar9[4] = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                if (plVar9[2] != 0) {
                  LOCK();
                  plVar2 = (long *)(plVar9[2] + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    lVar6 = plVar9[2];
                    plVar9[2] = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                if (plVar9[1] != 0) {
                  LOCK();
                  plVar2 = (long *)(plVar9[1] + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    lVar6 = plVar9[1];
                    plVar9[1] = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                if (*plVar9 != 0) {
                  LOCK();
                  plVar2 = (long *)(*plVar9 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    lVar6 = *plVar9;
                    *plVar9 = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                lVar10 = lVar10 + 1;
                plVar9 = plVar9 + 5;
              } while (lVar5 != lVar10);
            }
            Memory::free_static(plVar1 + -2,false);
          }
        }
        CowData<char32_t>::_unref(this_00 + 0x48);
        if (*(long *)(this_00 + 0x38) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x38) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 0x38);
            *(undefined8 *)(this_00 + 0x38) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*(long *)(this_00 + 0x28) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x28) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 0x28);
            *(undefined8 *)(this_00 + 0x28) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*(long *)(this_00 + 0x20) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x20) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 0x20);
            *(undefined8 *)(this_00 + 0x20) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*(long *)(this_00 + 0x10) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 0x10) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 0x10);
            *(undefined8 *)(this_00 + 0x10) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (*(long *)(this_00 + 8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(this_00 + 8) + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar5 = *(long *)(this_00 + 8);
            *(undefined8 *)(this_00 + 8) = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        lVar8 = lVar8 + 1;
        CowData<char32_t>::_unref(this_00);
        this_00 = this_00 + 0x78;
      } while (lVar4 != lVar8);
    }
    Memory::free_static(pCVar3 + -0x10,false);
    return;
  }
LAB_001072aa:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  code *pcVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  CowData<char32_t> *pCVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  CowData<char32_t> *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x1072b4);
  if ((local_50 != (CowData<char32_t> *)0x0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_48 = &_LC15;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (CowData<char32_t> *)0x0) {
      lVar5 = 0;
      lVar3 = -2;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar3 = lVar5 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar3 * 8));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010738a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_60 = 0;
  local_48 = &_LC15;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010738a:
  pCVar2 = local_50;
  if (local_50 != (CowData<char32_t> *)0x0) {
    LOCK();
    pCVar4 = local_50 + -0x10;
    *(long *)pCVar4 = *(long *)pCVar4 + -1;
    UNLOCK();
    if (*(long *)pCVar4 == 0) {
      if (local_50 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar5 = *(long *)(local_50 + -8);
      local_50 = (CowData<char32_t> *)0x0;
      if (lVar5 != 0) {
        lVar3 = 0;
        pCVar4 = pCVar2;
        do {
          lVar3 = lVar3 + 1;
          CowData<char32_t>::_unref(pCVar4);
          pCVar4 = pCVar4 + 8;
        } while (lVar5 != lVar3);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* ResourceFormatSaver::get_class() const */

void ResourceFormatSaver::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::get_class() const */

void ResourceFormatLoader::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shader::get_class() const */

void Shader::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar1 = 4;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00107c15;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00107c15:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Shader, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Shader,void>::call
          (CallableCustomMethodPointer<Shader,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107e6f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107e6f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107f20;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107e6f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC41,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107f20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_0010802b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010802b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010802b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010822b;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010822b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shader::is_class(String const&) const */

undefined8 __thiscall Shader::is_class(Shader *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010837b;
  }
  cVar4 = String::operator==(param_1,"Shader");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Resource::is_class((Resource *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010837b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::is_class(String const&) const */

undefined8 __thiscall ResourceFormatSaver::is_class(ResourceFormatSaver *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_001084cb;
  }
  cVar4 = String::operator==(param_1,"ResourceFormatSaver");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001084cb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::is_class(String const&) const */

undefined8 __thiscall ResourceFormatLoader::is_class(ResourceFormatLoader *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar4 != '\0') goto LAB_0010861b;
  }
  cVar4 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010861b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00119010 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_initialize_classv() */

void ResourceFormatSaver::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00119008 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ResourceFormatSaver";
    local_70 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((code *)PTR__bind_methods_00119018 != RefCounted::_bind_methods) {
      ResourceFormatSaver::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Shader::Mode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Shader::Mode>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Shader::Mode";
  local_40 = 0xc;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC4;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,4,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00108dcf;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108dcf:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00108f8c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108f8c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001091f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001091f1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Resource",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Shader::_get_property_listv(Shader *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Shader";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Shader";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_001094a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001094a1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Shader",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatLoader";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatLoader";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00109751;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109751:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatLoader",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatSaver::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ResourceFormatSaver::_get_property_listv(ResourceFormatSaver *this,List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ResourceFormatSaver";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ResourceFormatSaver";
  local_98 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00109a01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109a01:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ResourceFormatSaver",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* MethodBindTR<Array, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindTR<Array,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    local_78 = 0;
    local_70 = 6;
    local_a0 = 0;
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_b0,0,(String *)&local_a8,6,
               &local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    uVar3 = local_90._8_8_;
    uVar2 = local_90._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90._8_8_;
    local_90 = auVar1 << 0x40;
    *(undefined4 *)pPVar4 = (undefined4)local_98;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
    *(undefined8 *)(pPVar4 + 0x10) = uVar3;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_80;
    *(long *)(pPVar4 + 0x20) = local_78;
    *(undefined4 *)(pPVar4 + 0x28) = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  }
  else {
    local_a0 = 0;
    local_60 = 0;
    local_68 = &_LC4;
    String::parse_latin1((StrRange *)&local_a0);
    local_68 = (undefined *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar4,0x1c,(CowData<char32_t> *)&local_68,0,(StrRange *)&local_a0,6,&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture>::unref() */

void __thiscall Ref<Texture>::unref(Ref<Texture> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBind* create_method_bind<Shader, StringName const&, Ref<Texture2D> const&, int>(void
   (Shader::*)(StringName const&, Ref<Texture2D> const&, int)) */

MethodBind *
create_method_bind<Shader,StringName_const&,Ref<Texture2D>const&,int>
          (_func_void_StringName_ptr_Ref_ptr_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_StringName_ptr_Ref_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113940;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, Ref<Texture2D>, StringName const&, int>(Ref<Texture2D>
   (Shader::*)(StringName const&, int) const) */

MethodBind *
create_method_bind<Shader,Ref<Texture2D>,StringName_const&,int>
          (_func_Ref_StringName_ptr_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_StringName_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001139a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shader::_bind_compatibility_methods() [clone .cold] */

void Shader::_bind_compatibility_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Shader::_bind_methods() [clone .cold] */

void Shader::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<DocData::PropertyDoc>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<DocData::PropertyDoc>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* HashMap<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > > > >
   >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
::_lookup_pos(HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* MethodBind* create_method_bind<Shader, Shader::Mode>(Shader::Mode (Shader::*)() const) */

MethodBind * create_method_bind<Shader,Shader::Mode>(_func_Mode *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Mode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113a00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, String const&>(void (Shader::*)(String const&)) */

MethodBind * create_method_bind<Shader,String_const&>(_func_void_String_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113a60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, String>(String (Shader::*)() const) */

MethodBind * create_method_bind<Shader,String>(_func_String *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113ac0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, StringName const&, Ref<Texture> const&, int>(void
   (Shader::*)(StringName const&, Ref<Texture> const&, int)) */

MethodBind *
create_method_bind<Shader,StringName_const&,Ref<Texture>const&,int>
          (_func_void_StringName_ptr_Ref_ptr_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_StringName_ptr_Ref_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113b20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, Ref<Texture>, StringName const&, int>(Ref<Texture>
   (Shader::*)(StringName const&, int) const) */

MethodBind *
create_method_bind<Shader,Ref<Texture>,StringName_const&,int>(_func_Ref_StringName_ptr_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_StringName_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113b80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader, Array, bool>(Array (Shader::*)(bool)) */

MethodBind * create_method_bind<Shader,Array,bool>(_func_Array_bool *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Array_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00113be0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<Shader>(void (Shader::*)()) */

MethodBind * create_method_bind<Shader>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00113c40;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "Shader";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Shader::_initialize_classv() */

void Shader::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00119008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00119020 != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Shader";
    local_70 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    _bind_compatibility_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<DocData::PropertyDoc>::_unref() */

void __thiscall CowData<DocData::PropertyDoc>::_unref(CowData<DocData::PropertyDoc> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 0xe));
          if (plVar6[0xd] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[0xd] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[0xd];
              plVar6[0xd] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 0xb));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 9));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 7));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 6));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 5));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 4));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 2));
          if (plVar6[1] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[1] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[1];
              plVar6[1] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 0xf;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* DocData::ClassDoc::~ClassDoc() */

void __thiscall DocData::ClassDoc::~ClassDoc(ClassDoc *this)

{
  long *plVar1;
  uint uVar2;
  CowData<char32_t> *pCVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *pCVar6;
  void *pvVar7;
  long lVar8;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x110));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x100));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xf0));
  if (*(long *)(this + 0xe0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xe0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar3 = *(CowData<char32_t> **)(this + 0xe0);
      if (pCVar3 == (CowData<char32_t> *)0x0) goto LAB_0010b302;
      lVar5 = *(long *)(pCVar3 + -8);
      lVar8 = 0;
      *(undefined8 *)(this + 0xe0) = 0;
      pCVar6 = pCVar3;
      if (lVar5 != 0) {
        do {
          lVar8 = lVar8 + 1;
          CowData<char32_t>::_unref(pCVar6 + 0x48);
          CowData<char32_t>::_unref(pCVar6 + 0x40);
          CowData<char32_t>::_unref(pCVar6 + 0x38);
          CowData<char32_t>::_unref(pCVar6 + 0x28);
          CowData<char32_t>::_unref(pCVar6 + 0x18);
          CowData<char32_t>::_unref(pCVar6 + 0x10);
          CowData<char32_t>::_unref(pCVar6 + 8);
          CowData<char32_t>::_unref(pCVar6);
          pCVar6 = pCVar6 + 0x50;
        } while (lVar5 != lVar8);
      }
      Memory::free_static(pCVar3 + -0x10,false);
    }
  }
  if (*(long *)(this + 0xd0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xd0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0xd0));
    }
  }
  CowData<DocData::PropertyDoc>::_unref((CowData<DocData::PropertyDoc> *)(this + 0xc0));
  pvVar7 = *(void **)(this + 0x90);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0xb4) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xb0) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x98) + lVar5) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x98) + lVar5) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x38));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x28));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar7 + 0x10));
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x90);
            *(undefined8 *)((long)pvVar7 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0xb4) = 0;
        *(undefined1 (*) [16])(this + 0xa0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_0010b122;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x98),false);
  }
LAB_0010b122:
  if (*(long *)(this + 0x80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar3 = *(CowData<char32_t> **)(this + 0x80);
      if (pCVar3 == (CowData<char32_t> *)0x0) goto LAB_0010b302;
      lVar5 = *(long *)(pCVar3 + -8);
      lVar8 = 0;
      *(undefined8 *)(this + 0x80) = 0;
      pCVar6 = pCVar3;
      if (lVar5 != 0) {
        do {
          lVar8 = lVar8 + 1;
          CowData<char32_t>::_unref(pCVar6 + 0x58);
          CowData<char32_t>::_unref(pCVar6 + 0x50);
          CowData<char32_t>::_unref(pCVar6 + 0x40);
          CowData<char32_t>::_unref(pCVar6 + 0x30);
          CowData<char32_t>::_unref(pCVar6 + 0x20);
          CowData<char32_t>::_unref(pCVar6 + 0x18);
          CowData<char32_t>::_unref(pCVar6 + 8);
          CowData<char32_t>::_unref(pCVar6);
          pCVar6 = pCVar6 + 0x60;
        } while (lVar5 != lVar8);
      }
      Memory::free_static(pCVar3 + -0x10,false);
    }
  }
  if (*(long *)(this + 0x70) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x70) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x70));
    }
  }
  if (*(long *)(this + 0x60) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x60) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x60));
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x50));
    }
  }
  if (*(long *)(this + 0x40) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x40) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      CowData<DocData::MethodDoc>::_unref((CowData<DocData::MethodDoc> *)(this + 0x40));
    }
  }
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar3 = *(CowData<char32_t> **)(this + 0x30);
      if (pCVar3 == (CowData<char32_t> *)0x0) {
LAB_0010b302:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar5 = *(long *)(pCVar3 + -8);
      lVar8 = 0;
      *(undefined8 *)(this + 0x30) = 0;
      pCVar6 = pCVar3;
      if (lVar5 != 0) {
        do {
          lVar8 = lVar8 + 1;
          CowData<char32_t>::_unref(pCVar6 + 8);
          CowData<char32_t>::_unref(pCVar6);
          pCVar6 = pCVar6 + 0x10;
        } while (lVar5 != lVar8);
      }
      Memory::free_static(pCVar3 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x18));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x10));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HashMap<int, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
::_resize_and_rehash
          (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
           *this,uint param_1)

{
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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >::insert(int const&, Ref<Texture>
   const&, bool) */

int * HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
      ::insert(int *param_1,Ref *param_2,bool param_3)

{
  uint uVar1;
  Object *pOVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 (*pauVar16) [16];
  char cVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  void *__s_00;
  long *in_RCX;
  int iVar22;
  undefined7 in_register_00000011;
  uint *puVar23;
  long lVar24;
  ulong uVar25;
  char in_R8B;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  undefined1 (*pauVar29) [16];
  long in_FS_OFFSET;
  uint local_78;
  uint local_44;
  long local_40;
  
  puVar23 = (uint *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar28 = (ulong)uVar18;
    uVar25 = uVar28 * 4;
    uVar21 = Memory::alloc_static(uVar25,false);
    *(undefined8 *)(param_2 + 0x10) = uVar21;
    uVar27 = uVar28 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar27,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar18 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar27 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar25))) {
        uVar25 = 0;
        do {
          *(undefined4 *)((long)__s + uVar25 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar25 * 8) = 0;
          uVar25 = uVar25 + 1;
        } while (uVar28 != uVar25);
      }
      else {
        memset(__s,0,uVar25);
        memset(__s_00,0,uVar27);
      }
    }
  }
  uVar19 = *puVar23;
  local_44 = 0;
  cVar17 = _lookup_pos((HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
                        *)param_2,(int *)(ulong)uVar19,&local_44);
  if (cVar17 == '\0') {
    if ((float)uVar18 * __LC77 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        pauVar20 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0010b818;
      }
      _resize_and_rehash((HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
      uVar19 = *puVar23;
    }
    pOVar2 = (Object *)*in_RCX;
    if ((pOVar2 == (Object *)0x0) || (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
      pauVar20 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar20[1] = uVar19;
      *(undefined8 *)(pauVar20[1] + 8) = 0;
      *pauVar20 = (undefined1  [16])0x0;
    }
    else {
      pauVar20 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar20[1] = uVar19;
      *(Object **)(pauVar20[1] + 8) = pOVar2;
      *pauVar20 = (undefined1  [16])0x0;
      cVar17 = RefCounted::reference();
      if (cVar17 == '\0') {
        *(undefined8 *)(pauVar20[1] + 8) = 0;
      }
      cVar17 = RefCounted::unreference();
      if ((cVar17 != '\0') && (cVar17 = predelete_handler(pOVar2), cVar17 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar20;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar20;
    }
    else if (in_R8B == '\0') {
      *puVar3 = pauVar20;
      *(undefined8 **)(*pauVar20 + 8) = puVar3;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar20;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar4 + 8) = pauVar20;
      *(long *)*pauVar20 = lVar4;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar20;
    }
    uVar18 = (*puVar23 >> 0x10 ^ *puVar23) * -0x7a143595;
    uVar19 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
    uVar18 = uVar19 ^ uVar19 >> 0x10;
    if (uVar19 == uVar19 >> 0x10) {
      uVar25 = 1;
      uVar18 = 1;
    }
    else {
      uVar25 = (ulong)uVar18;
    }
    lVar4 = *(long *)(param_2 + 0x10);
    uVar26 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar27 = CONCAT44(0,uVar19);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar25 * lVar5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar27;
    lVar24 = SUB168(auVar8 * auVar12,8);
    lVar6 = *(long *)(param_2 + 8);
    puVar23 = (uint *)(lVar4 + lVar24 * 4);
    iVar22 = SUB164(auVar8 * auVar12,8);
    uVar1 = *puVar23;
    pauVar16 = pauVar20;
    while (uVar1 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar1 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar27;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((iVar22 + uVar19) - SUB164(auVar9 * auVar13,8)) * lVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar27;
      local_78 = SUB164(auVar10 * auVar14,8);
      pauVar29 = pauVar16;
      if (local_78 < uVar26) {
        *puVar23 = uVar18;
        puVar3 = (undefined8 *)(lVar6 + lVar24 * 8);
        pauVar29 = (undefined1 (*) [16])*puVar3;
        *puVar3 = pauVar16;
        uVar18 = uVar1;
        uVar26 = local_78;
      }
      uVar26 = uVar26 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar22 + 1) * lVar5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar27;
      lVar24 = SUB168(auVar11 * auVar15,8);
      puVar23 = (uint *)(lVar4 + lVar24 * 4);
      iVar22 = SUB164(auVar11 * auVar15,8);
      pauVar16 = pauVar29;
      uVar1 = *puVar23;
    }
    *(undefined1 (**) [16])(lVar6 + lVar24 * 8) = pauVar16;
    *puVar23 = uVar18;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar25 = (ulong)local_44;
    pOVar2 = (Object *)*in_RCX;
    pauVar20 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + uVar25 * 8);
    pOVar7 = *(Object **)(pauVar20[1] + 8);
    if (pOVar2 != pOVar7) {
      *(Object **)(pauVar20[1] + 8) = pOVar2;
      if ((pOVar2 != (Object *)0x0) && (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
        *(undefined8 *)(pauVar20[1] + 8) = 0;
      }
      if (((pOVar7 != (Object *)0x0) && (cVar17 = RefCounted::unreference(), cVar17 != '\0')) &&
         (cVar17 = predelete_handler(pOVar7), cVar17 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      pauVar20 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + uVar25 * 8);
    }
  }
LAB_0010b818:
  *(undefined1 (**) [16])param_1 = pauVar20;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<int, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >
   const&) */

void __thiscall
HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
::operator=(HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_48 [2];
  long local_40;
  ulong uVar5;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
               *)param_1) {
    uVar6 = *(uint *)(this + 0x28);
    uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar6 * 4);
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar4 != 0) {
        lVar8 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar8) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar8) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar8 * 2);
            if (*(long *)((long)pvVar1 + 0x18) != 0) {
              cVar3 = RefCounted::unreference();
              if (cVar3 != '\0') {
                pOVar2 = *(Object **)((long)pvVar1 + 0x18);
                cVar3 = predelete_handler(pOVar2);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pOVar2 + 0x140))();
                  Memory::free_static(pOVar2,false);
                }
              }
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar8 * 2) = 0;
          }
          lVar8 = lVar8 + 4;
        } while ((ulong)uVar4 * 4 - lVar8 != 0);
        uVar6 = *(uint *)(this + 0x28);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar6 * 4);
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar4 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (uVar6 != 0x1c) {
        uVar5 = (ulong)uVar6;
        do {
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar4;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar5 * 4)) {
            if (uVar4 != uVar6) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar4;
              }
              else {
                _resize_and_rehash(this,uVar4);
              }
            }
            goto LAB_0010bb81;
          }
        } while (uVar4 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_0010bb81:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar7 = *(long **)(param_1 + 0x18), plVar7 != (long *)0x0)) {
      do {
        insert(local_48,(Ref *)this,(bool)((char)plVar7 + '\x10'));
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > > > >
   >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
::operator[](HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *__s;
  long lVar6;
  Object *pOVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 uVar28;
  void *__s_00;
  undefined8 *puVar29;
  long lVar30;
  void *pvVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long *plVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  long in_FS_OFFSET;
  undefined8 *local_f8;
  uint local_c8;
  uint local_c4;
  int local_c0 [2];
  HashMap local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_c8);
  if (cVar24 != '\0') {
    local_f8 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)local_c8 * 8) + 0x18);
    goto LAB_0010c366;
  }
  local_90 = 2;
  uVar26 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_b0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  if (*(long *)(this + 8) == 0) {
    uVar35 = (ulong)uVar26;
    uVar27 = uVar35 * 4;
    uVar41 = uVar35 * 8;
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    pvVar31 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = pvVar31;
    if (uVar26 != 0) {
      pvVar5 = *(void **)(this + 0x10);
      if ((pvVar5 < (void *)((long)pvVar31 + uVar41)) && (pvVar31 < (void *)((long)pvVar5 + uVar27))
         ) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)pvVar5 + uVar27 * 4) = 0;
          *(undefined8 *)((long)pvVar31 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar35 != uVar27);
      }
      else {
        memset(pvVar5,0,uVar27);
        memset(pvVar31,0,uVar41);
      }
    }
  }
  local_c4 = 0;
  cVar24 = _lookup_pos(this,param_1,&local_c4);
  if (cVar24 != '\0') {
    uVar27 = (ulong)local_c4;
    HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
    ::operator=((HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
                 *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18),local_b8);
    local_f8 = (undefined8 *)(*(long *)(*(long *)(this + 8) + uVar27 * 8) + 0x18);
    goto LAB_0010c366;
  }
  if ((float)uVar26 * __LC77 < (float)(*(int *)(this + 0x2c) + 1)) {
    uVar26 = *(uint *)(this + 0x28);
    if (uVar26 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_f8 = (undefined8 *)0x18;
      goto LAB_0010c366;
    }
    uVar27 = (ulong)(uVar26 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar26 * 4);
    if (uVar26 + 1 < 2) {
      uVar27 = 2;
    }
    uVar26 = *(uint *)(hash_table_size_primes + uVar27 * 4);
    uVar35 = (ulong)uVar26;
    *(int *)(this + 0x28) = (int)uVar27;
    pvVar31 = *(void **)(this + 8);
    uVar27 = uVar35 * 4;
    uVar41 = uVar35 * 8;
    pvVar5 = *(void **)(this + 0x10);
    uVar28 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar28;
    __s_00 = (void *)Memory::alloc_static(uVar41,false);
    *(void **)(this + 8) = __s_00;
    if (uVar26 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar41)) && (__s_00 < (void *)((long)__s + uVar27))) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)__s + uVar27 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar35 != uVar27);
      }
      else {
        memset(__s,0,uVar27);
        memset(__s_00,0,uVar41);
      }
    }
    if (uVar3 != 0) {
      uVar27 = 0;
      do {
        uVar26 = *(uint *)((long)pvVar5 + uVar27 * 4);
        if (uVar26 != 0) {
          lVar30 = *(long *)(this + 0x10);
          uVar39 = 0;
          uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar41 = CONCAT44(0,uVar4);
          lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar26 * lVar6;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar41;
          lVar33 = SUB168(auVar8 * auVar16,8);
          puVar1 = (uint *)(lVar30 + lVar33 * 4);
          iVar32 = SUB164(auVar8 * auVar16,8);
          uVar40 = *puVar1;
          uVar28 = *(undefined8 *)((long)pvVar31 + uVar27 * 8);
          while (uVar40 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar40 * lVar6;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar4 + iVar32) - SUB164(auVar9 * auVar17,8)) * lVar6;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            uVar25 = SUB164(auVar10 * auVar18,8);
            uVar38 = uVar28;
            if (uVar25 < uVar39) {
              *puVar1 = uVar26;
              puVar29 = (undefined8 *)((long)__s_00 + lVar33 * 8);
              uVar38 = *puVar29;
              *puVar29 = uVar28;
              uVar26 = uVar40;
              uVar39 = uVar25;
            }
            uVar39 = uVar39 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar32 + 1) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar41;
            lVar33 = SUB168(auVar11 * auVar19,8);
            puVar1 = (uint *)(lVar30 + lVar33 * 4);
            iVar32 = SUB164(auVar11 * auVar19,8);
            uVar28 = uVar38;
            uVar40 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar33 * 8) = uVar28;
          *puVar1 = uVar26;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar27 = uVar27 + 1;
      } while (uVar3 != uVar27);
      Memory::free_static(pvVar31,false);
      Memory::free_static(pvVar5,false);
    }
  }
  local_88 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)local_78,param_1);
  uVar27 = 1;
  local_48 = 0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    if (0x16 < *(uint *)(hash_table_size_primes + uVar27 * 4)) {
      local_48 = uVar27 & 0xffffffff;
      goto LAB_0010c05a;
    }
    uVar27 = uVar27 + 1;
  } while (uVar27 != 0x1d);
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_0010c05a:
  puVar29 = (undefined8 *)operator_new(0x48,"");
  *puVar29 = local_88._0_8_;
  puVar29[1] = local_88._8_8_;
  StringName::StringName((StringName *)(puVar29 + 2),(StringName *)local_78);
  puVar29[8] = 0;
  uVar26 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
  *(undefined1 (*) [16])(puVar29 + 4) = (undefined1  [16])0x0;
  lVar30 = 1;
  *(undefined1 (*) [16])(puVar29 + 6) = (undefined1  [16])0x0;
  if (5 < uVar26) {
    do {
      if (uVar26 <= *(uint *)(hash_table_size_primes + lVar30 * 4)) {
        *(int *)(puVar29 + 8) = (int)lVar30;
        goto LAB_0010c100;
      }
      lVar30 = lVar30 + 1;
    } while (lVar30 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_0010c100:
  pvVar31 = (void *)local_68._0_8_;
  if (local_48._4_4_ == 0) {
    if ((void *)local_68._0_8_ != (void *)0x0) goto LAB_0010c3aa;
  }
  else if ((long *)local_58._0_8_ == (long *)0x0) {
    if ((void *)local_68._0_8_ != (void *)0x0) {
      uVar26 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
      if (uVar26 != 0) goto LAB_0010c19b;
LAB_0010c5da:
      local_48 = local_48 & 0xffffffff;
      local_58 = (undefined1  [16])0x0;
      pvVar31 = (void *)local_68._0_8_;
      goto LAB_0010c3aa;
    }
  }
  else {
    plVar36 = (long *)local_58._0_8_;
    do {
      HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
      ::insert(local_c0,(Ref *)(puVar29 + 3),(bool)((char)plVar36 + '\x10'));
      plVar36 = (long *)*plVar36;
    } while (plVar36 != (long *)0x0);
    if ((void *)local_68._0_8_ != (void *)0x0) {
      pvVar31 = (void *)local_68._0_8_;
      if (local_48._4_4_ != 0) {
        uVar26 = *(uint *)(hash_table_size_primes + (local_48 & 0xffffffff) * 4);
        if (uVar26 == 0) goto LAB_0010c5da;
LAB_0010c19b:
        lVar30 = 0;
        do {
          if (*(int *)(local_68._8_8_ + lVar30) != 0) {
            pvVar31 = *(void **)((long)pvVar31 + lVar30 * 2);
            *(int *)(local_68._8_8_ + lVar30) = 0;
            if ((*(long *)((long)pvVar31 + 0x18) != 0) &&
               (cVar24 = RefCounted::unreference(), cVar24 != '\0')) {
              pOVar7 = *(Object **)((long)pvVar31 + 0x18);
              cVar24 = predelete_handler(pOVar7);
              if (cVar24 != '\0') {
                (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                Memory::free_static(pOVar7,false);
              }
            }
            Memory::free_static(pvVar31,false);
            *(undefined8 *)(local_68._0_8_ + lVar30 * 2) = 0;
            pvVar31 = (void *)local_68._0_8_;
          }
          lVar30 = lVar30 + 4;
        } while ((ulong)uVar26 * 4 - lVar30 != 0);
        local_48 = local_48 & 0xffffffff;
        local_58 = (undefined1  [16])0x0;
        if (pvVar31 == (void *)0x0) goto LAB_0010c246;
      }
LAB_0010c3aa:
      Memory::free_static(pvVar31,false);
      Memory::free_static((void *)local_68._8_8_,false);
    }
  }
LAB_0010c246:
  local_f8 = puVar29 + 3;
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  puVar37 = *(undefined8 **)(this + 0x20);
  if (puVar37 == (undefined8 *)0x0) {
    lVar30 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar29;
    *(undefined8 **)(this + 0x20) = puVar29;
    if (lVar30 != 0) goto LAB_0010c286;
LAB_0010c464:
    uVar26 = StringName::get_empty_hash();
  }
  else {
    *puVar37 = puVar29;
    puVar29[1] = puVar37;
    lVar30 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar29;
    if (lVar30 == 0) goto LAB_0010c464;
LAB_0010c286:
    uVar26 = *(uint *)(lVar30 + 0x20);
  }
  lVar30 = *(long *)(this + 0x10);
  if (uVar26 == 0) {
    uVar26 = 1;
  }
  uVar27 = (ulong)uVar26;
  uVar40 = 0;
  lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar3);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar27 * lVar6;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar41;
  lVar34 = SUB168(auVar12 * auVar20,8);
  lVar33 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar30 + lVar34 * 4);
  iVar32 = SUB164(auVar12 * auVar20,8);
  uVar4 = *puVar1;
  while (uVar4 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar4 * lVar6;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar41;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar3 + iVar32) - SUB164(auVar13 * auVar21,8)) * lVar6;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar41;
    uVar26 = SUB164(auVar14 * auVar22,8);
    puVar37 = puVar29;
    if (uVar26 < uVar40) {
      *puVar1 = (uint)uVar27;
      uVar27 = (ulong)uVar4;
      puVar2 = (undefined8 *)(lVar33 + lVar34 * 8);
      puVar37 = (undefined8 *)*puVar2;
      *puVar2 = puVar29;
      uVar40 = uVar26;
    }
    uVar26 = (uint)uVar27;
    uVar40 = uVar40 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar32 + 1) * lVar6;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar41;
    lVar34 = SUB168(auVar15 * auVar23,8);
    puVar1 = (uint *)(lVar30 + lVar34 * 4);
    iVar32 = SUB164(auVar15 * auVar23,8);
    puVar29 = puVar37;
    uVar4 = *puVar1;
  }
  *(undefined8 **)(lVar33 + lVar34 * 8) = puVar29;
  *puVar1 = uVar26;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010c366:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
::operator[](HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>
             *this,int *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 (*pauVar16) [16];
  char cVar17;
  uint uVar18;
  uint uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  void *__s_00;
  int iVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long in_FS_OFFSET;
  uint local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar18 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar17 = _lookup_pos(this,(int *)(ulong)uVar18,&local_48);
  if (cVar17 == '\0') {
    uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar28 = (ulong)uVar19;
      uVar24 = uVar28 * 4;
      uVar26 = uVar28 * 8;
      uVar21 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar21;
      __s_00 = (void *)Memory::alloc_static(uVar26,false);
      *(void **)(this + 8) = __s_00;
      if (uVar19 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar26)) && (__s_00 < (void *)((long)__s + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)__s + uVar24 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar28 != uVar24);
        }
        else {
          memset(__s,0,uVar24);
          memset(__s_00,0,uVar26);
        }
      }
      uVar18 = *param_1;
    }
    local_44 = 0;
    cVar17 = _lookup_pos(this,(int *)(ulong)uVar18,&local_44);
    if (cVar17 == '\0') {
      if ((float)uVar19 * __LC77 < (float)(*(int *)(this + 0x2c) + 1)) {
        if (*(int *)(this + 0x28) == 0x1c) {
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          pauVar20 = (undefined1 (*) [16])0x0;
          goto LAB_0010c812;
        }
        _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
        uVar18 = *param_1;
      }
      pauVar20 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar20[1] = uVar18;
      *(undefined8 *)(pauVar20[1] + 8) = 0;
      *pauVar20 = (undefined1  [16])0x0;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar20;
      }
      else {
        *puVar3 = pauVar20;
        *(undefined8 **)(*pauVar20 + 8) = puVar3;
      }
      uVar18 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar20;
      uVar18 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
      uVar19 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
      uVar18 = uVar19 ^ uVar19 >> 0x10;
      if (uVar19 == uVar19 >> 0x10) {
        uVar24 = 1;
        uVar18 = 1;
      }
      else {
        uVar24 = (ulong)uVar18;
      }
      uVar25 = 0;
      lVar4 = *(long *)(this + 0x10);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar19 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar26 = CONCAT44(0,uVar19);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar24 * lVar5;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar26;
      lVar23 = SUB168(auVar8 * auVar12,8);
      lVar6 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar4 + lVar23 * 4);
      iVar22 = SUB164(auVar8 * auVar12,8);
      uVar2 = *puVar1;
      pauVar16 = pauVar20;
      while (uVar2 != 0) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)uVar2 * lVar5;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar26;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)((iVar22 + uVar19) - SUB164(auVar9 * auVar13,8)) * lVar5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar26;
        local_68 = SUB164(auVar10 * auVar14,8);
        pauVar27 = pauVar16;
        if (local_68 < uVar25) {
          *puVar1 = uVar18;
          puVar3 = (undefined8 *)(lVar6 + lVar23 * 8);
          pauVar27 = (undefined1 (*) [16])*puVar3;
          *puVar3 = pauVar16;
          uVar18 = uVar2;
          uVar25 = local_68;
        }
        uVar25 = uVar25 + 1;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)(iVar22 + 1) * lVar5;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar26;
        lVar23 = SUB168(auVar11 * auVar15,8);
        puVar1 = (uint *)(lVar4 + lVar23 * 4);
        iVar22 = SUB164(auVar11 * auVar15,8);
        pauVar16 = pauVar27;
        uVar2 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar6 + lVar23 * 8) = pauVar16;
      *puVar1 = uVar18;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar24 = (ulong)local_44;
      pauVar20 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar24 * 8);
      pOVar7 = *(Object **)(pauVar20[1] + 8);
      if (pOVar7 != (Object *)0x0) {
        *(undefined8 *)(pauVar20[1] + 8) = 0;
        cVar17 = RefCounted::unreference();
        if ((cVar17 != '\0') && (cVar17 = predelete_handler(pOVar7), cVar17 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        pauVar20 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar24 * 8);
      }
    }
  }
  else {
    pauVar20 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_0010c812:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar20[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DocData::PropertyDoc>::_realloc(long) */

undefined8 __thiscall
CowData<DocData::PropertyDoc>::_realloc(CowData<DocData::PropertyDoc> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<DocData::PropertyDoc>::resize<false>(long) */

undefined8 __thiscall
CowData<DocData::PropertyDoc>::resize<false>(CowData<DocData::PropertyDoc> *this,long param_1)

{
  CowData<char32_t> *this_00;
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar6 * 0x78;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x78 == 0) {
LAB_0010ce20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x78 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010ce20;
  uVar10 = param_1;
  if (param_1 <= lVar6) {
    while (lVar6 = *(long *)this, lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar10) {
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar6 + uVar10 * 0x78);
      CowData<char32_t>::_unref(this_00 + 0x70);
      CowData<char32_t>::_unref(this_00 + 0x68);
      CowData<char32_t>::_unref(this_00 + 0x58);
      CowData<char32_t>::_unref(this_00 + 0x48);
      CowData<char32_t>::_unref(this_00 + 0x38);
      CowData<char32_t>::_unref(this_00 + 0x30);
      CowData<char32_t>::_unref(this_00 + 0x28);
      CowData<char32_t>::_unref(this_00 + 0x20);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar10 = uVar10 + 1;
    }
    goto LAB_0010ce76;
  }
  if (lVar11 == lVar8) {
LAB_0010cd93:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010ce76:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_0010cc91;
  }
  else {
    if (lVar6 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010cd93;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  pauVar4 = (undefined1 (*) [16])(puVar7 + lVar6 * 0xf);
  do {
    *(undefined8 *)pauVar4[1] = 0;
    pauVar2 = pauVar4 + 7;
    *pauVar4 = (undefined1  [16])0x0;
    pauVar4[1][8] = 0;
    pauVar4[2] = (undefined1  [16])0x0;
    pauVar4[3] = (undefined1  [16])0x0;
    pauVar4[4][0] = 0;
    *(undefined8 *)(pauVar4[4] + 8) = 0;
    pauVar4[5][0] = 0;
    *(undefined8 *)(pauVar4[5] + 8) = 0;
    pauVar4[6][0] = 0;
    *(undefined1 (*) [16])(pauVar4[6] + 8) = (undefined1  [16])0x0;
    pauVar4 = (undefined1 (*) [16])(*pauVar2 + 8);
  } while ((undefined1 (*) [16])(*pauVar2 + 8) != (undefined1 (*) [16])(puVar7 + param_1 * 0xf));
LAB_0010cc91:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010d028) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((CowData<char32_t> *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d310;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_0010d310:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d71f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d5c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d71f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d8df;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010d786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010d8df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Array, bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Array,bool>::validated_call
          (MethodBindTR<Array,bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d950;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),(*param_2)[8]);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010d950:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Array, bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Array,bool>::ptrcall
          (MethodBindTR<Array,bool> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db44;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),**param_2 != '\0');
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0010db44:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010de30;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
LAB_0010de30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10d1a8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e06c;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010e06c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10d1a8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(CowData<char32_t> *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e23d;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((CowData<char32_t> *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010e23d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e571;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e3fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0010e571:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010e751;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e5d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010e751:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Shader::Mode>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Shader::Mode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e820;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010e820:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Shader::Mode>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Shader::Mode>::validated_call
          (MethodBindTRC<Shader::Mode> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ea34;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010ea34:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Shader::Mode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Shader::Mode>::ptrcall
          (MethodBindTRC<Shader::Mode> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ebe3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010ebe3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>, StringName const&, int>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<Ref<Texture>,StringName_const&,int>::ptrcall
          (MethodBindTRC<Ref<Texture>,StringName_const&,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10d1a8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ee0f;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010ee0f;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010ee51;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010ee51;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010ee51:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010ee0f;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010ee0f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture> const&, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<StringName_const&,Ref<Texture>const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10d1a8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f148;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010f0fb:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0010f0fb;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),*(long *)param_3 + 8,(StringName *)&local_68,uVar1);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010f148:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture> const&, int>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<StringName_const&,Ref<Texture>const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10d1a8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f401;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = **(undefined4 **)((long)param_3 + 0x10);
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0010f3d5:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0010f3d5;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar6)((long *)((long)param_2 + lVar2),*param_3,(StringName *)&local_48,uVar1);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010f401:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::ptrcall
          (MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10d1a8;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f65f;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010f65f;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f6a1;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f6a1;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f6a1:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010f65f;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010f65f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10d1a8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f998;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x10) + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)(param_3 + 8) + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010f94b:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Texture2D::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_0010f94b;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar2),*(long *)param_3 + 8,(StringName *)&local_68,uVar1);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010f998:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10d1a8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc51;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar2) + -1);
  }
  uVar1 = **(undefined4 **)((long)param_3 + 0x10);
  if ((*(long **)((long)param_3 + 8) == (long *)0x0) ||
     (local_48 = (Object *)**(long **)((long)param_3 + 8), local_48 == (Object *)0x0)) {
LAB_0010fc25:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0010fc25;
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar6)((long *)((long)param_2 + lVar2),*param_3,(StringName *)&local_48,uVar1);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_0010fc51:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Array, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Array,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
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
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ff30;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ff80;
LAB_0010ff70:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ff80:
        uVar7 = 4;
        goto LAB_0010ff25;
      }
      if (in_R8D == 1) goto LAB_0010ff70;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,1);
    uVar4 = _LC99;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    bVar6 = Variant::operator_cast_to_bool(pVVar11);
    (*(code *)pVVar12)((Array *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),bVar6);
    Variant::Variant((Variant *)local_58,(Array *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Array::~Array((Array *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010ff25:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010ff30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_68 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110350;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar15 = param_2[5];
    iVar7 = 2 - in_R8D;
    if (pVVar15 == (Variant *)0x0) {
      if (iVar7 != 0) goto LAB_00110398;
      pVVar12 = *(Variant **)param_4;
LAB_001103ad:
      pVVar15 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar15 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar7) {
LAB_00110398:
        uVar8 = 4;
        goto LAB_00110385;
      }
      if (in_R8D == 0) {
        lVar10 = (long)(iVar13 + -2);
        if (lVar2 <= lVar10) goto LAB_001104c0;
        pVVar12 = pVVar15 + lVar10 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001103ad;
      }
      lVar10 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
      if (lVar2 <= lVar10) {
LAB_001104c0:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar15 = pVVar15 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar15,2);
    uVar4 = _LC101;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar15);
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x15);
    uVar4 = _LC102;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar14)(&local_70,(Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_68,
                       iVar7);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (local_70 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_70;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_70);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar8 = 3;
LAB_00110385:
    *in_R9 = uVar8;
    in_R9[2] = 2;
  }
LAB_00110350:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>, StringName const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<Texture>,StringName_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  Variant *pVVar11;
  int iVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001107d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar14 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar14 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00110818;
      pVVar11 = *(Variant **)param_4;
LAB_0011082d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00110818:
        uVar7 = 4;
        goto LAB_00110805;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00110900;
        pVVar11 = pVVar14 + lVar9 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0011082d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110900:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar14 = pVVar14 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar14,2);
    uVar4 = _LC101;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar14);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC102;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar13)((Ref<Texture> *)&local_70,(Variant *)((long)plVar10 + (long)pVVar1),
                       (Variant *)&local_68,iVar6);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<Texture>::unref((Ref<Texture> *)&local_70);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_00110805:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_001107d0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture> const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Ref<Texture>const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00110c92;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],2);
      uVar4 = _LC103;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1]);
      uVar4 = _LC104;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_70 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_70;
      if (pOVar10 != local_70) {
        if (pOVar10 == (Object *)0x0) {
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
LAB_00110bce:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Texture::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_70 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00110bce;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0],0x15);
      uVar4 = _LC102;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_68);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_68,&local_70,
                         iVar8);
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_70 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_70;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_70);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00110c92;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00110c92:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111020;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00111070;
LAB_00111060:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00111070:
        uVar6 = 4;
        goto LAB_00111015;
      }
      if (in_R8D == 1) goto LAB_00111060;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC105;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00111015:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00111020:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  long *plVar11;
  uint uVar12;
  undefined4 in_register_00000014;
  long *plVar13;
  Variant *pVVar14;
  long lVar15;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  Variant *local_58 [3];
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_68 == (char *)*plVar11) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC41,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00111472;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar16 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar7 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar8 = 0;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(pVVar2 + -8);
      iVar8 = (int)lVar15;
    }
    if ((int)(3 - in_R8D) <= iVar8) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar14 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar12 = iVar8 + -3 + (int)lVar9;
          if (lVar15 <= (int)uVar12) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar12,lVar15,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
        }
        local_58[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[2],2);
      uVar4 = _LC103;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_58[2]);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[1]);
      uVar4 = _LC104;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_70 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_70;
      if (pOVar10 != local_70) {
        if (pOVar10 == (Object *)0x0) {
          if (local_70 != (Object *)0x0) {
            local_70 = (Object *)0x0;
LAB_001113ae:
            cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
              cVar6 = predelete_handler(pOVar5);
              if (cVar6 != '\0') {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
        }
        else {
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_70 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_70 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_001113ae;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_58[0],0x15);
      uVar4 = _LC102;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant *)&local_68);
      (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),(Variant *)&local_68,&local_70,
                         iVar8);
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (local_70 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_70;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_70);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00111472;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00111472:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>, StringName const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture>,StringName_const&,int>::validated_call
          (MethodBindTRC<Ref<Texture>,StringName_const&,int> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00111774;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8))
  ;
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00111774:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::validated_call
          (MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001119d4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8))
  ;
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_001119d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC4;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x15,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88
               ,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC4;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture>, StringName const&, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Texture>,StringName_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00111fe3;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "Texture";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_001120af:
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_001120af;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00111fe3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<StringName const&, Ref<Texture> const&, int>(int, PropertyInfo&)
    */

void call_get_argument_type_info<StringName_const&,Ref<Texture>const&,int>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Texture";
    local_70 = 7;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = iVar1 + 1;
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture> const&, int>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,Ref<Texture>const&,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<StringName_const&,Ref<Texture>const&,int>(in_EDX,pPVar1);
  return pPVar1;
}



/* void call_get_argument_type_info<StringName const&, Ref<Texture2D> const&, int>(int,
   PropertyInfo&) */

void call_get_argument_type_info<StringName_const&,Ref<Texture2D>const&,int>
               (int param_1,PropertyInfo *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 0;
  call_get_argument_type_info_helper<StringName_const&>(param_1,&local_94,param_2);
  iVar1 = local_94;
  if (param_1 == local_94) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "Texture2D";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0x18,(CowData<char32_t> *)&local_90,0x11,
               (StrRange *)&local_88,6,&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar2 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar2;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar2 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar2 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar2;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  local_94 = iVar1 + 1;
  call_get_argument_type_info_helper<int>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<StringName_const&,Ref<Texture2D>const&,int>(in_EDX,pPVar1);
  return pPVar1;
}



/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar4 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)pPVar4 = local_68._0_4_;
    *(undefined8 *)(pPVar4 + 8) = uVar2;
    *(undefined8 *)(pPVar4 + 0x10) = uVar3;
    *(undefined4 *)(pPVar4 + 0x18) = (undefined4)local_50;
    *(undefined8 *)(pPVar4 + 0x20) = local_48;
    *(undefined4 *)(pPVar4 + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    local_70 = 0;
    local_68 = "Texture2D";
    local_60._8_8_ = local_60._0_8_;
    local_60._0_8_ = 9;
    local_78 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (char *)0x0;
    PropertyInfo::PropertyInfo
              (pPVar4,0x18,(CowData<char32_t> *)&local_68,0x11,&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(param_1 + 0x58);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar3 = plVar1[-1];
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (plVar6[4] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[4] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[4];
              plVar6[4] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 2));
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 5;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_001129c9;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_001129c9:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* Shader::_set_default_texture_parameter_bind_compat_95126(StringName const&, Ref<Texture2D>
   const&, int) */

void Shader::_GLOBAL__sub_I__set_default_texture_parameter_bind_compat_95126(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache != '\0') {
    return;
  }
  EditorHelpBit::doc_annotation_cache = 1;
  EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
  EditorHelpBit::doc_annotation_cache._40_8_ = 2;
  EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
               ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DocData::ClassDoc::~ClassDoc() */

void __thiscall DocData::ClassDoc::~ClassDoc(ClassDoc *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > >,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<int, Ref<Texture>, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, Ref<Texture> > > > > >
   >::~HashMap() */

void __thiscall
HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
::~HashMap(HashMap<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<int,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<Texture>>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<Ref<ShaderInclude>, HashMapHasherDefault, HashMapComparatorDefault<Ref<ShaderInclude> >
   >::~HashSet() */

void __thiscall
HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>::
~HashSet(HashSet<Ref<ShaderInclude>,HashMapHasherDefault,HashMapComparatorDefault<Ref<ShaderInclude>>>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoaderShader::~ResourceFormatLoaderShader() */

void __thiscall
ResourceFormatLoaderShader::~ResourceFormatLoaderShader(ResourceFormatLoaderShader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ResourceFormatSaverShader::~ResourceFormatSaverShader() */

void __thiscall
ResourceFormatSaverShader::~ResourceFormatSaverShader(ResourceFormatSaverShader *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Array, bool>::~MethodBindTR() */

void __thiscall MethodBindTR<Array,bool>::~MethodBindTR(MethodBindTR<Array,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture>, StringName const&, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture>,StringName_const&,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Texture>,StringName_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Ref<Texture> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Ref<Texture>const&,int>::~MethodBindT
          (MethodBindT<StringName_const&,Ref<Texture>const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Shader::Mode>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Shader::Mode>::~MethodBindTRC(MethodBindTRC<Shader::Mode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Ref<Texture2D> const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Ref<Texture2D>const&,int>::~MethodBindT
          (MethodBindT<StringName_const&,Ref<Texture2D>const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Shader, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Shader,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Shader,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
