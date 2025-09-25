/* Texture2D::get_size() const */void Texture2D::get_size(Texture2D *this) {
   ( **(code**)( *(long*)this + 0x1d0 ) )();
   ( **(code**)( *(long*)this + 0x1c8 ) )(this);
   return;
}
/* Texture2D::get_rect_region(Rect2 const&, Rect2 const&, Rect2&, Rect2&) const */undefined8 Texture2D::get_rect_region(Texture2D *this, Rect2 *param_1, Rect2 *param_2, Rect2 *param_3, Rect2 *param_4) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( param_1 + 8 );
   *(undefined8*)param_3 = *(undefined8*)param_1;
   *(undefined8*)( param_3 + 8 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)param_4 = *(undefined8*)param_2;
   *(undefined8*)( param_4 + 8 ) = uVar1;
   return 1;
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
/* Texture3D::create_placeholder() const */void Texture3D::create_placeholder(void) {
   long lVar1;
   char cVar2;
   PlaceholderTexture3D *this;
   long lVar3;
   long *in_RSI;
   long *in_RDI;
   PlaceholderTexture3D *pPVar4;
   long in_FS_OFFSET;
   pPVar4 = (PlaceholderTexture3D*)0x0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this(PlaceholderTexture3D * operator_new(0x2e8, ""));
   PlaceholderTexture3D::PlaceholderTexture3D(this);
   postinitialize_handler((Object*)this);
   cVar2 = RefCounted::init_ref();
   if (cVar2 != '\0') {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
         pPVar4 = this;
      }

      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler((Object*)this);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)this + 0x140 ) )(this);
            Memory::free_static(this, false);
         }

      }

   }

   for (int i = 0; i < 3; i++) {
      ( **(code**)( *in_RSI + ( -8*i + 480 ) ) )();
   }

   PlaceholderTexture3D::set_size((Vector3i*)pPVar4);
   *in_RDI = 0;
   lVar3 = __dynamic_cast(pPVar4, &Object::typeinfo, &Resource::typeinfo, 0);
   if (lVar3 != 0) {
      *in_RDI = lVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *in_RDI = 0;
      }

   }

   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object*)pPVar4);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pPVar4 + 0x140 ) )(pPVar4);
         Memory::free_static(pPVar4, false);
      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture2D::create_placeholder() const */void Texture2D::create_placeholder(void) {
   code *pcVar1;
   char cVar2;
   PlaceholderTexture2D *this;
   long lVar3;
   long *in_RSI;
   long *in_RDI;
   PlaceholderTexture2D *pPVar4;
   pPVar4 = (PlaceholderTexture2D*)0x0;
   this(PlaceholderTexture2D * operator_new(0x2f8, ""));
   PlaceholderTexture2D::PlaceholderTexture2D(this);
   postinitialize_handler((Object*)this);
   cVar2 = RefCounted::init_ref();
   if (cVar2 != '\0') {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
         pPVar4 = this;
      }

      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler((Object*)this);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)this + 0x140 ) )(this);
            Memory::free_static(this, false);
         }

      }

   }

   pcVar1 = *(code**)( *in_RSI + 0x1d8 );
   if (pcVar1 == get_size) {
      ( **(code**)( *in_RSI + 0x1d0 ) )();
      ( **(code**)( *in_RSI + 0x1c8 ) )();
      PlaceholderTexture2D::set_size(pPVar4);
      *in_RDI = 0;
   }
 else {
      ( *pcVar1 )();
      PlaceholderTexture2D::set_size(pPVar4);
      *in_RDI = 0;
   }

   lVar3 = __dynamic_cast(pPVar4, &Object::typeinfo, &Resource::typeinfo, 0);
   if (lVar3 != 0) {
      *in_RDI = lVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *in_RDI = 0;
      }

   }

   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object*)pPVar4);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pPVar4 + 0x140 ) )(pPVar4);
         Memory::free_static(pPVar4, false);
         return;
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
/* PropertyInfo::TEMPNAMEPLACEHOLDERVALUE(PropertyInfo&&) [clone .isra.0] */void PropertyInfo::operator =(PropertyInfo *this, PropertyInfo *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( param_1 + 8 );
   *(undefined4*)this = *(undefined4*)param_1;
   lVar2 = *(long*)( this + 8 );
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( this + 8 );
            *(undefined8*)( this + 8 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar3 = *(long*)( param_1 + 8 );
         }
 else {
            *(undefined8*)( this + 8 ) = 0;
            lVar3 = *(long*)( param_1 + 8 );
         }

      }

      *(long*)( this + 8 ) = lVar3;
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
/* Texture2D::Texture2D() */void Texture2D::Texture2D(Texture2D *this) {
   Resource::Resource((Resource*)this);
   *(undefined***)this = &PTR__initialize_classv_0011cbe8;
   StringName::StringName((StringName*)( this + 0x240 ), "_get_width", false);
   this[0x248] = (Texture2D)0x0;
   *(undefined8*)( this + 0x250 ) = 0;
   StringName::StringName((StringName*)( this + 600 ), "_get_height", false);
   this[0x260] = (Texture2D)0x0;
   *(undefined8*)( this + 0x268 ) = 0;
   StringName::StringName((StringName*)( this + 0x270 ), "_is_pixel_opaque", false);
   this[0x278] = (Texture2D)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   StringName::StringName((StringName*)( this + 0x288 ), "_has_alpha", false);
   this[0x290] = (Texture2D)0x0;
   *(undefined8*)( this + 0x298 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a0 ), "_draw", false);
   this[0x2a8] = (Texture2D)0x0;
   *(undefined8*)( this + 0x2b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2b8 ), "_draw_rect", false);
   this[0x2c0] = (Texture2D)0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d0 ), "_draw_rect_region", false);
   this[0x2d8] = (Texture2D)0x0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   return;
}
/* Texture::initialize_class() [clone .part.0] */void Texture::initialize_class(void) {
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
   if (Resource::initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_68 = 0;
         local_50 = 6;
         local_58 = "Object";
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
         local_58 = "RefCounted";
         local_70 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00122008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
         Resource::_bind_methods();
      }

      Resource::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "Resource";
   local_68 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (StrRange*)&local_68, false);
   local_58 = "Texture";
   local_70 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
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

   initialize_class()::initialized =
   1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture3D::_bind_methods() */void Texture3D::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined8 uVar10;
   MethodBind *pMVar11;
   long *plVar12;
   long lVar13;
   long in_FS_OFFSET;
   long local_128;
   long local_120;
   undefined8 local_118;
   long local_110;
   undefined8 local_108;
   undefined8 local_100;
   char *local_f8;
   undefined1 local_f0[16];
   int local_e0;
   undefined8 local_d8;
   undefined4 local_d0;
   long local_c8;
   undefined8 local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   ulong local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_c8, (char***)"get_format", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Texture3D,Image::Format>((_func_Format*)0x1c9);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_b8._8_8_;
         local_b8 = auVar3 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_width", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1d1;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_108 = 0;
   local_f8 = "Texture3D";
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_108, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_b8._8_8_;
         local_b8 = auVar4 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_height", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1d9;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_108 = 0;
   local_f8 = "Texture3D";
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_108, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_b8._8_8_;
         local_b8 = auVar5 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_depth", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1e1;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_108 = 0;
   local_f8 = "Texture3D";
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_108, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_b8._8_8_;
         local_b8 = auVar6 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"has_mipmaps", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d2f8;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1e9;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_108 = 0;
   local_f8 = "Texture3D";
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_108);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_108, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_b8._8_8_;
         local_b8 = auVar7 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"get_data", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Texture3D,TypedArray<Image>>(_get_datai);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_b8._8_8_;
         local_b8 = auVar8 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_c8, (char***)"create_placeholder", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar11 = create_method_bind<Texture3D,Ref<Resource>>((_func_Ref*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_b8._0_8_;
   if ((long*)local_b8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_b8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_b8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_b8._0_8_ + -8 );
         lVar13 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_b8._8_8_;
         local_b8 = auVar9 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_format";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   GetTypeInfo<Image::Format,void>::get_class_info((GetTypeInfo<Image::Format,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_width";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = CONCAT44(local_70._4_4_, 3);
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_height";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = CONCAT44(local_70._4_4_, 3);
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_depth";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = CONCAT44(local_70._4_4_, 3);
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_has_mipmaps";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_f8);
   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   local_b8 = (undefined1[16])0x0;
   local_f8 = "_get_data";
   local_100 = 0;
   local_c8 = 0;
   local_c0 = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88 = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_c8);
   local_90 = CONCAT44(local_90._4_4_, 0x8c);
   local_f8 = "Image";
   local_128 = 0;
   local_120 = 0;
   local_f0._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_120);
   local_118 = 0;
   local_f8 = (char*)CONCAT44(local_f8._4_4_, 0x1c);
   local_e0 = 0x1f;
   local_d8 = 0;
   local_f0 = (undefined1[16])0x0;
   if (local_120 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_120);
      local_d0 = 6;
      if (local_e0 == 0x11) {
         StringName::StringName((StringName*)&local_110, (CowData<char32_t>*)&local_d8, false);
         if (local_f0._8_8_ == local_110) {
            if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_f0._8_8_ = local_110;
         }

         goto LAB_00101e77;
      }

   }

   local_d0 = 6;
   StringName::operator =((StringName*)( local_f0 + 8 ), (StringName*)&local_128);
   LAB_00101e77:CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_c0, (PropertyInfo*)&local_f8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
   local_f8 = "Texture3D";
   local_70 = local_70 & 0xffffffff00000000;
   local_110 = 0;
   local_f0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_110);
   StringName::StringName((StringName*)&local_f8, (StrRange*)&local_110, false);
   ClassDB::add_virtual_method((StringName*)&local_f8, (MethodInfo*)&local_c8, true, (Vector*)&local_108, false);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   MethodInfo::~MethodInfo((MethodInfo*)&local_c8);
   CowData<String>::_unref((CowData<String>*)&local_100);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* Texture2D::get_width() const */int Texture2D::get_width(Texture2D *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x240, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00102346;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (Texture2D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_width");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x250 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture2D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00102710;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00102725:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00102662;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240);
            *(undefined8*)( this + 0x250 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102710:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00102725;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240, uVar2);
         *(undefined8*)( this + 0x250 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00102662:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x250 );
         plVar5[1] = (long)( this + 0x248 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x248] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x250 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_width_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec77;
         local_c8[1] = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_width_call", "scene/resources/texture.h", 0x37, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_width_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00102346:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* Texture2D::get_height() const */int Texture2D::get_height(Texture2D *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 600, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001028b6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x260] == (Texture2D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_height");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x268 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture2D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00102c80;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00102c95:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00102bd2;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600);
            *(undefined8*)( this + 0x268 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00102c80:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00102c95;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600, uVar2);
         *(undefined8*)( this + 0x268 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00102bd2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x268 );
         plVar5[1] = (long)( this + 0x260 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x260] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x268 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_height_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec82;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_height_call", "scene/resources/texture.h", 0x38, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_height_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 600, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_001028b6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* Texture2D::has_alpha() const */bool Texture2D::has_alpha(Texture2D *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_108;
   long local_100;
   GetTypeInfo<bool,void> local_f8[8];
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x288, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00102e2e;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x290] == (Texture2D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_has_alpha");
      local_90 = CONCAT44(local_90._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info(local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x298 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture2D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00103068;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010307d:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00102fc0;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x288);
            *(undefined8*)( this + 0x298 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103068:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_0010307d;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x288, uVar1);
         *(undefined8*)( this + 0x298 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00102fc0:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x298 );
         plVar4[1] = (long)( this + 0x290 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x290] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x298 );
   bVar6 = true;
   if (pcVar5 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x288, pcVar5, 0, local_c8);
         bVar6 = local_c8[0]._0_1_ != (String)0x0;
      }

   }

   LAB_00102e2e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* Texture3D::get_format() const */ulong Texture3D::get_format(Texture3D *this) {
   undefined4 uVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   uint local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
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
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x240, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_00103216;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (Texture3D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_format");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<Image::Format,void>::get_class_info((GetTypeInfo<Image::Format,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x250 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture3D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001035d0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001035e5:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00103522;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240);
            *(undefined8*)( this + 0x250 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001035d0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_001035e5;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240, uVar1);
         *(undefined8*)( this + 0x250 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00103522:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x250 );
         plVar5[1] = (long)( this + 0x248 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x248] = (Texture3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x250 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_format_call(Image::Format & ::first_print != '\0') {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ed1f;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_format_call", "scene/resources/texture.h", 0x7e, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_format_call(Image::Format&)::first_print =
         '\0';
      }

      uVar2 = 0x27;
   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_00103216:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* Texture3D::get_width() const */int Texture3D::get_width(Texture3D *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 600, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103776;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x260] == (Texture3D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_width");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x268 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture3D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00103b40;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00103b55:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00103a92;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600);
            *(undefined8*)( this + 0x268 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00103b40:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00103b55;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600, uVar2);
         *(undefined8*)( this + 0x268 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00103a92:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x268 );
         plVar5[1] = (long)( this + 0x260 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x260] = (Texture3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x268 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_width_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec77;
         local_c8[1] = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_width_call", "scene/resources/texture.h", 0x7f, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_width_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 600, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00103776:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* Texture3D::get_height() const */int Texture3D::get_height(Texture3D *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x270, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103ce6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x278] == (Texture3D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_height");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x280 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture3D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001040b0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001040c5:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00104002;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x270);
            *(undefined8*)( this + 0x280 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001040b0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_001040c5;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x270, uVar2);
         *(undefined8*)( this + 0x280 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00104002:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x280 );
         plVar5[1] = (long)( this + 0x278 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x278] = (Texture3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x280 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_height_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec82;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_height_call", "scene/resources/texture.h", 0x80, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_height_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x270, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00103ce6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* Texture3D::get_depth() const */int Texture3D::get_depth(Texture3D *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x288, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00104256;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x290] == (Texture3D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_depth");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x298 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture3D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00104620;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00104635:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00104572;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x288);
            *(undefined8*)( this + 0x298 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00104620:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00104635;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x288, uVar2);
         *(undefined8*)( this + 0x298 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00104572:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x298 );
         plVar5[1] = (long)( this + 0x290 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x290] = (Texture3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x298 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_depth_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ed2b;
         local_c8[1] = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_depth_call", "scene/resources/texture.h", 0x81, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_depth_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x288, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00104256:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* Texture3D::has_mipmaps() const */bool Texture3D::has_mipmaps(Texture3D *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x2a0, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001047ca;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2a8] == (Texture3D)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_has_mipmaps");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2b0 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "Texture3D");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00104ba0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00104bb5:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00104af2;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2a0);
            *(undefined8*)( this + 0x2b0 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00104ba0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00104bb5;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2a0, uVar1);
         *(undefined8*)( this + 0x2b0 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00104af2:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x2b0 );
         plVar4[1] = (long)( this + 0x2a8 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x2a8] = (Texture3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x2b0 );
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__has_mipmaps_call(bool&), ::first_print == '\0') {
         bVar6 = false;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ed36;
         local_c8[1] = 0;
         uStack_c0 = 0xc;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__has_mipmaps_call", "scene/resources/texture.h", 0x82, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__has_mipmaps_call(bool&)::first_print =
         '\0';
         bVar6 = false;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2a0, pcVar5, 0, local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
   }

   LAB_001047ca:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* TextureLayered::get_format() const */ulong TextureLayered::get_format(TextureLayered *this) {
   undefined4 uVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   uint local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
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
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x240, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_00104d46;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_format");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<Image::Format,void>::get_class_info((GetTypeInfo<Image::Format,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x250 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00105100;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00105115:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00105052;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240);
            *(undefined8*)( this + 0x250 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00105100:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00105115;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x240, uVar1);
         *(undefined8*)( this + 0x250 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00105052:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x250 );
         plVar5[1] = (long)( this + 0x248 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x248] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x250 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_format_call(Image::Format & ::first_print != '\0') {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ed1f;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_format_call", "scene/resources/texture.h", 0x5b, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_format_call(Image::Format&)::first_print =
         '\0';
      }

      uVar2 = 0x27;
   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_00104d46:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* TextureLayered::get_layered_type() const */uint TextureLayered::get_layered_type(TextureLayered *this) {
   uint uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   uint local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 600, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar1 = Variant::operator_cast_to_unsigned_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001052a6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x260] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_layered_type");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<unsigned_int,void>::get_class_info((GetTypeInfo<unsigned_int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 7);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x268 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00105670;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00105685:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001055c2;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600);
            *(undefined8*)( this + 0x268 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00105670:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00105685;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600, uVar2);
         *(undefined8*)( this + 0x268 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_001055c2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x268 );
         plVar5[1] = (long)( this + 0x260 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x260] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x268 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_layered_type_call(unsigned_int & ::first_print == '\0') {
         uVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ee33;
         local_c8[1] = 0;
         uStack_c0 = 0x11;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_layered_type_call", "scene/resources/texture.h", 0x5c, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_layered_type_call(unsigned_int&)::first_print =
         '\0';
         uVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 600, pcVar6, 0, local_c8);
      uVar1 = local_c8[0];
   }

   LAB_001052a6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* TextureLayered::get_width() const */int TextureLayered::get_width(TextureLayered *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x270, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00105816;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x278] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_width");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x280 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00105be0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00105bf5:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00105b32;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x270);
            *(undefined8*)( this + 0x280 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00105be0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00105bf5;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x270, uVar2);
         *(undefined8*)( this + 0x280 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00105b32:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x280 );
         plVar5[1] = (long)( this + 0x278 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x278] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x280 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_width_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec77;
         local_c8[1] = 0;
         uStack_c0 = 10;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_width_call", "scene/resources/texture.h", 0x5d, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_width_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x270, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00105816:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* TextureLayered::get_height() const */int TextureLayered::get_height(TextureLayered *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x288, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00105d86;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x290] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_height");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x298 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00106150;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00106165:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_001060a2;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x288);
            *(undefined8*)( this + 0x298 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00106150:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00106165;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x288, uVar2);
         *(undefined8*)( this + 0x298 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_001060a2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x298 );
         plVar5[1] = (long)( this + 0x290 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x290] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x298 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_height_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ec82;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_height_call", "scene/resources/texture.h", 0x5e, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_height_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x288, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_00105d86:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* TextureLayered::get_layers() const */int TextureLayered::get_layers(TextureLayered *this) {
   int iVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar5 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x2a0, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         iVar1 = Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001062f6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2a8] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_get_layers");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = CONCAT44(local_70._4_4_, 3);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2b0 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001066c0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_001066d5:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00106612;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x2a0);
            *(undefined8*)( this + 0x2b0 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001066c0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_001066d5;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x2a0, uVar2);
         *(undefined8*)( this + 0x2b0 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00106612:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x2b0 );
         plVar5[1] = (long)( this + 0x2a8 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x2a8] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x2b0 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_layers_call(int&), ::first_print == '\0') {
         iVar1 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ee45;
         local_c8[1] = 0;
         uStack_c0 = 0xb;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__get_layers_call", "scene/resources/texture.h", 0x5f, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_layers_call(int&)::first_print =
         '\0';
         iVar1 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      iVar1 = local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2a0, pcVar6, 0, local_c8);
      iVar1 = local_c8[0];
   }

   LAB_001062f6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar1;
}
/* TextureLayered::has_mipmaps() const */bool TextureLayered::has_mipmaps(TextureLayered *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_128[8];
   CowData<char32_t> local_120[8];
   undefined8 local_118;
   String local_110[8];
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   long local_f0[5];
   int local_c8[2];
   undefined4 uStack_c0;
   undefined4 uStack_bc;
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      uStack_c0 = 0;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_58, plVar4, this + 0x2b8, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010686a;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2c0] == (TextureLayered)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((String*)local_c8, "_has_mipmaps");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x2c8 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "TextureLayered");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_100 != 0 )) goto LAB_00106c40;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00106c55:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_00106b92;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2b8);
            *(undefined8*)( this + 0x2c8 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00106c40:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar3 == 0) goto LAB_00106c55;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x2b8, uVar1);
         *(undefined8*)( this + 0x2c8 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_00106b92:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x2c8 );
         plVar4[1] = (long)( this + 0x2c0 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x2c0] = (TextureLayered)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x2c8 );
   if (pcVar5 == (code*)0x0) {
      if (_gdvirtual__has_mipmaps_call(bool&), ::first_print == '\0') {
         bVar6 = false;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x1158e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x10ed36;
         local_c8[1] = 0;
         uStack_c0 = 0xc;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x114898;
         local_c8[1] = 0;
         local_118 = 0;
         uStack_c0 = 2;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_118);
         ( **(code**)( *(long*)this + 0x48 ) )(local_128, this);
         operator+((char *)
         local_120,(String*)"Required virtual method ";
         String::operator +(local_110, (String*)local_120);
         String::operator +((String*)&local_100, local_110);
         String::operator +((String*)local_c8, (String*)&local_100);
         _err_print_error("_gdvirtual__has_mipmaps_call", "scene/resources/texture.h", 0x60, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__has_mipmaps_call(bool&)::first_print =
         '\0';
         bVar6 = false;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2b8, pcVar5, 0, local_c8);
      bVar6 = local_c8[0]._0_1_ != (String)0x0;
   }

   LAB_0010686a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
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
/* TextureLayered::_bind_methods() */void TextureLayered::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined8 uVar10;
   MethodBind *pMVar11;
   long *plVar12;
   long lVar13;
   long in_FS_OFFSET;
   CowData<char32_t> *local_140;
   long local_138;
   long local_130;
   undefined8 local_128;
   long local_120;
   long local_118;
   undefined8 local_110;
   char *local_108;
   undefined1 local_100[16];
   int local_f0;
   undefined8 local_e8;
   undefined4 local_e0;
   char *local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98[2];
   undefined8 local_88;
   ulong local_80;
   Vector<int> local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   char **local_58;
   undefined1 local_50[16];
   long local_40;
   local_100._8_8_ = local_100._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_d8, (char***)"get_format", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d538;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1c9;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_118 = 0;
   local_108 = "TextureLayered";
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_118, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_d8);
   D_METHODP((char*)&local_d8, (char***)"get_layered_type", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = create_method_bind<TextureLayered,TextureLayered::LayeredType>((_func_LayeredType*)0x1d1);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_d8);
   D_METHODP((char*)&local_d8, (char***)"get_width", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1d9;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_118 = 0;
   local_108 = "TextureLayered";
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_118, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar13 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_c8._8_8_;
         local_c8 = auVar3 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"get_height", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1e1;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_118 = 0;
   local_108 = "TextureLayered";
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_118, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar13 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_c8._8_8_;
         local_c8 = auVar4 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"get_layers", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1e9;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_118 = 0;
   local_108 = "TextureLayered";
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_118, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   uVar10 = local_c8._0_8_;
   if ((long*)local_c8._0_8_ != (long*)0x0) {
      LOCK();
      plVar12 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
         if ((long*)local_c8._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( local_c8._0_8_ + -8 );
         lVar13 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_c8._8_8_;
         local_c8 = auVar5 << 0x40;
         plVar12 = (long*)uVar10;
         if (lVar1 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar12 != 0 )) {
                  StringName::unref();
               }

               lVar13 = lVar13 + 1;
               plVar12 = plVar12 + 1;
            }
 while ( lVar1 != lVar13 );
         }

         Memory::free_static((long*)( uVar10 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_d8, (char***)"has_mipmaps", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar11);
   *(undefined***)pMVar11 = &PTR__gen_argument_type_0011d2f8;
   *(undefined8*)( pMVar11 + 0x58 ) = 0x1f1;
   *(undefined8*)( pMVar11 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar11, 0));
   MethodBind::_set_const(SUB81(pMVar11, 0));
   MethodBind::_generate_argument_types((int)pMVar11);
   *(undefined4*)( pMVar11 + 0x34 ) = 0;
   local_118 = 0;
   local_108 = "TextureLayered";
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_118, false);
   StringName::operator =((StringName*)( pMVar11 + 0x18 ), (StringName*)&local_108);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_d8);
   local_60 = 0;
   local_68 = "layer";
   local_58 = &local_68;
   D_METHODP((char*)&local_d8, (char***)"get_layer_data", ( uint ) & local_58);
   local_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar11 = create_method_bind<TextureLayered,Ref<Image>,int>((_func_Ref_int*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar11, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_d8);
   StringName::StringName((StringName*)&local_108, "LAYERED_TYPE_2D_ARRAY", false);
   local_d8 = "LAYERED_TYPE_2D_ARRAY";
   local_120 = 0;
   local_d0 = 0x15;
   String::parse_latin1((StrRange*)&local_120);
   GetTypeInfo<TextureLayered::LayeredType,void>::get_class_info((GetTypeInfo<TextureLayered::LayeredType,void>*)&local_d8);
   local_118 = local_c8._0_8_;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_c8._8_8_;
   local_c8 = auVar6 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
   local_128 = 0;
   local_d8 = "TextureLayered";
   local_d0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_d8, (StrRange*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_d8, (StringName*)&local_118, (StringName*)&local_108, 0, false);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "LAYERED_TYPE_CUBEMAP", false);
   local_d8 = "LAYERED_TYPE_CUBEMAP";
   local_120 = 0;
   local_d0 = 0x14;
   String::parse_latin1((StrRange*)&local_120);
   GetTypeInfo<TextureLayered::LayeredType,void>::get_class_info((GetTypeInfo<TextureLayered::LayeredType,void>*)&local_d8);
   local_118 = local_c8._0_8_;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = local_c8._8_8_;
   local_c8 = auVar7 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
   local_128 = 0;
   local_d8 = "TextureLayered";
   local_d0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_d8, (StrRange*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_d8, (StringName*)&local_118, (StringName*)&local_108, 1, false);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "LAYERED_TYPE_CUBEMAP_ARRAY", false);
   local_d8 = "LAYERED_TYPE_CUBEMAP_ARRAY";
   local_120 = 0;
   local_d0 = 0x1a;
   String::parse_latin1((StrRange*)&local_120);
   GetTypeInfo<TextureLayered::LayeredType,void>::get_class_info((GetTypeInfo<TextureLayered::LayeredType,void>*)&local_d8);
   local_118 = local_c8._0_8_;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = local_c8._8_8_;
   local_c8 = auVar8 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
   local_128 = 0;
   local_d8 = "TextureLayered";
   local_d0 = 0xe;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_d8, (StrRange*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_d8, (StringName*)&local_118, (StringName*)&local_108, 2, false);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_format";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<Image::Format,void>::get_class_info((GetTypeInfo<Image::Format,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_layered_type";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   local_108 = "";
   local_138 = 0;
   local_130 = 0;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = local_100._8_8_;
   local_100 = auVar9 << 0x40;
   String::parse_latin1((StrRange*)&local_130);
   local_128 = 0;
   local_108 = (char*)CONCAT44(local_108._4_4_, 2);
   local_f0 = 0;
   local_e8 = 0;
   local_100 = (undefined1[16])0x0;
   if (local_130 == 0) {
      LAB_00107d22:local_e0 = 6;
      StringName::operator =((StringName*)( local_100 + 8 ), (StringName*)&local_138);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_130);
      local_e0 = 6;
      if (local_f0 != 0x11) goto LAB_00107d22;
      StringName::StringName((StringName*)&local_120, (CowData<char32_t>*)&local_e8, false);
      if (local_100._8_8_ == local_120) {
         if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_100._8_8_ = local_120;
      }

   }

   local_140 = (CowData<char32_t>*)&local_e8;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = CONCAT44(local_80._4_4_, 7);
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_width";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = CONCAT44(local_80._4_4_, 3);
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_height";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = CONCAT44(local_80._4_4_, 3);
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_layers";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = CONCAT44(local_80._4_4_, 3);
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_has_mipmaps";
   local_110 = 0;
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0xc;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_108);
   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_108 = "TextureLayered";
   local_80 = local_80 & 0xffffffff00000000;
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   local_110 = 0;
   local_108 = (char*)0x0;
   local_d8 = "layer_index";
   local_d0 = 0xb;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)0x0;
   if (local_108 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
   }

   Vector<String>::push_back((Vector<String>*)&local_118, (MethodDefinition*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   local_c8 = (undefined1[16])0x0;
   local_108 = "_get_layer_data";
   local_d8 = (char*)0x0;
   local_d0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = 6;
   local_a0 = 1;
   local_98[0] = 0;
   local_88 = 0;
   local_80 = 0;
   local_70 = 0;
   local_100._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   local_a0 = CONCAT44(local_a0._4_4_, 0x8c);
   local_138 = 0;
   local_130 = 0;
   local_108 = "Image";
   local_100._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_130);
   local_128 = 0;
   local_108 = (char*)CONCAT44(local_108._4_4_, 0x18);
   local_f0 = 0x11;
   local_e8 = 0;
   local_100 = (undefined1[16])0x0;
   if (local_130 != 0) {
      CowData<char32_t>::_ref(local_140, (CowData*)&local_130);
      local_e0 = 6;
      if (local_f0 != 0x11) {
         StringName::operator =((StringName*)( local_100 + 8 ), (StringName*)&local_138);
         goto LAB_0010850e;
      }

   }

   local_e0 = 6;
   StringName::StringName((StringName*)&local_120, local_140, false);
   if (local_100._8_8_ == local_120) {
      if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      local_100._8_8_ = local_120;
   }

   LAB_0010850e:CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =((PropertyInfo*)&local_d0, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   local_80 = local_80 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_108);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)&local_108);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_108);
   Vector<int>::push_back(local_78, 3);
   local_108 = "TextureLayered";
   local_120 = 0;
   local_100._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_108, (StrRange*)&local_120, false);
   ClassDB::add_virtual_method((StringName*)&local_108, (MethodInfo*)&local_d8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   MethodInfo::~MethodInfo((MethodInfo*)&local_d8);
   CowData<String>::_unref((CowData<String>*)&local_110);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Texture2D::_bind_methods() */void Texture2D::_bind_methods(void) {
   Variant *pVVar1;
   Color *pCVar2;
   undefined1 auVar3[16];
   undefined *puVar4;
   undefined *puVar5;
   undefined *puVar6;
   undefined *puVar7;
   undefined *puVar8;
   undefined *puVar9;
   MethodBind *pMVar10;
   uint uVar11;
   Variant *pVVar12;
   Color *pCVar13;
   long in_FS_OFFSET;
   StrRange *local_418;
   long local_2f0;
   long local_2e8;
   long local_2e0;
   long local_2d8;
   long local_2d0;
   undefined8 local_2c8;
   undefined8 local_2c0;
   char *local_2b8;
   undefined1 local_2b0[16];
   int local_2a0;
   undefined8 local_298;
   undefined4 local_290;
   char *local_288;
   undefined8 local_280;
   undefined1 local_278[16];
   undefined8 local_268;
   undefined8 local_260;
   undefined8 local_258;
   undefined8 local_250;
   undefined8 local_248[2];
   undefined8 local_238;
   ulong local_230;
   Vector<int> local_228[8];
   undefined8 local_220;
   char *local_218;
   char *pcStack_210;
   undefined *local_208;
   undefined *puStack_200;
   undefined8 local_1f8;
   Variant *local_1e8;
   undefined1 auStack_1e0[16];
   undefined **ppuStack_1d0;
   char *local_1b8;
   char *pcStack_1b0;
   undefined *local_1a8;
   undefined *puStack_1a0;
   char *local_198;
   undefined8 local_190;
   char *local_188;
   undefined *puStack_180;
   undefined *local_178;
   undefined *puStack_170;
   undefined *local_168;
   undefined *puStack_160;
   undefined8 local_158;
   undefined8 local_148;
   char *pcStack_140;
   Variant local_130[24];
   undefined8 local_118;
   undefined1 local_110[16];
   Color local_100[8];
   Color *local_f8;
   Variant *pVStack_f0;
   Variant *local_e8;
   undefined **ppuStack_e0;
   char **local_d8;
   undefined **ppuStack_d0;
   undefined8 local_c8;
   undefined1 local_c0[16];
   Variant local_b0[8];
   int local_a8[2];
   undefined1 local_a0[16];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   puVar9 = PTR__LC82_0011d7a8;
   puVar8 = PTR__LC81_0011d7a0;
   puVar7 = PTR__LC80_0011d798;
   puVar6 = PTR__LC78_0011d790;
   puVar5 = PTR__LC79_0011d788;
   puVar4 = PTR__LC77_0011d780;
   local_2b0._8_8_ = local_2b0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)&local_288, (char***)"get_width", 0);
   auStack_1e0 = (undefined1[16])0x0;
   local_1e8 = (Variant*)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar10 + 0x58 ) = 0x1c9;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_2c8 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2c8);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2c8, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_2b8);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_1e8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   D_METHODP((char*)&local_288, (char***)"get_height", 0);
   auStack_1e0 = (undefined1[16])0x0;
   local_1e8 = (Variant*)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_0011d238;
   *(undefined8*)( pMVar10 + 0x58 ) = 0x1d1;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_2c8 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2c8);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2c8, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_2b8);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_1e8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   D_METHODP((char*)&local_288, (char***)"get_size", 0);
   auStack_1e0 = (undefined1[16])0x0;
   local_1e8 = (Variant*)0x0;
   pMVar10 = create_method_bind<Texture2D,Vector2>((_func_Vector2*)0x1d9);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_1e8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   D_METHODP((char*)&local_288, (char***)"has_alpha", 0);
   auStack_1e0 = (undefined1[16])0x0;
   local_1e8 = (Variant*)0x0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_0011d2f8;
   *(undefined8*)( pMVar10 + 0x58 ) = 0x1e9;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_2c8 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2c8);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2c8, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_2b8);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_1e8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   local_208 = puVar6;
   puStack_200 = puVar7;
   local_218 = "canvas_item";
   pcStack_210 = "position";
   local_1f8 = 0;
   local_1e8 = (Variant*)&local_218;
   ppuStack_1d0 = &puStack_200;
   auStack_1e0._0_8_ = &pcStack_210;
   auStack_1e0._8_8_ = &local_208;
   D_METHODP((char*)&local_288, (char***)&_LC86, ( uint ) & local_1e8);
   local_218 = (char*)__LC87;
   pcStack_210 = _UNK_0011d778;
   Variant::Variant((Variant*)&local_f8, (Color*)&local_218);
   Variant::Variant((Variant*)&ppuStack_e0, false);
   local_c0 = (undefined1[16])0x0;
   local_c8 = 0;
   auStack_1e0._0_8_ = (Variant*)&ppuStack_e0;
   local_1e8 = (Variant*)&local_f8;
   pMVar10 = create_method_bind<Texture2D,RID,Vector2_const&,Color_const&,bool>((_func_void_RID_Vector2_ptr_Color_ptr_bool*)0x1f1);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, &local_1e8, 2);
   pVVar12 = local_b0;
   do {
      pVVar1 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)&local_f8 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   local_198 = "transpose";
   local_d8 = &local_198;
   local_1b8 = "canvas_item";
   pcStack_1b0 = puVar4;
   local_1a8 = puVar9;
   puStack_1a0 = puVar6;
   local_190 = 0;
   uVar11 = (uint)(Variant*)&local_f8;
   local_f8 = (Color*)&local_1b8;
   pVStack_f0 = (Variant*)&pcStack_1b0;
   local_e8 = (Variant*)&local_1a8;
   ppuStack_e0 = &puStack_1a0;
   D_METHODP((char*)&local_288, (char***)"draw_rect", uVar11);
   local_1b8 = (char*)__LC87;
   pcStack_1b0 = _UNK_0011d778;
   Variant::Variant((Variant*)&local_148, (Color*)&local_1b8);
   Variant::Variant(local_130, false);
   local_110 = (undefined1[16])0x0;
   local_118 = 0;
   local_f8 = (Color*)&local_148;
   pVStack_f0 = local_130;
   pMVar10 = create_method_bind<Texture2D,RID,Rect2_const&,bool,Color_const&,bool>((_func_void_RID_Rect2_ptr_bool_Color_ptr_bool*)0x1f9);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)&local_f8, 2);
   pCVar13 = local_100;
   do {
      pCVar2 = pCVar13 + -0x18;
      pCVar13 = pCVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pCVar2] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pCVar13 != (Color*)&local_148 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   local_168 = puVar7;
   puStack_160 = puVar8;
   local_178 = puVar5;
   puStack_170 = puVar6;
   local_188 = "canvas_item";
   puStack_180 = puVar4;
   local_158 = 0;
   local_f8 = (Color*)&local_188;
   pVStack_f0 = (Variant*)&puStack_180;
   local_e8 = (Variant*)&local_178;
   ppuStack_e0 = &puStack_170;
   local_d8 = &local_168;
   ppuStack_d0 = &puStack_160;
   D_METHODP((char*)&local_288, (char***)"draw_rect_region", uVar11);
   local_148 = __LC87;
   pcStack_140 = _UNK_0011d778;
   Variant::Variant((Variant*)local_a8, pCVar13);
   Variant::Variant(local_90, false);
   Variant::Variant(local_78, true);
   pVVar12 = local_48;
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_f8 = (Color*)local_a8;
   pVStack_f0 = local_90;
   local_e8 = local_78;
   pMVar10 = create_method_bind<Texture2D,RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>((_func_void_RID_Rect2_ptr_Rect2_ptr_Color_ptr_bool_bool*)0x201);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)&local_f8, 3);
   do {
      pVVar1 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)local_a8 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   D_METHODP((char*)&local_288, (char***)"get_image", 0);
   local_a0 = (undefined1[16])0x0;
   local_a8[0] = 0;
   local_a8[1] = 0;
   pMVar10 = create_method_bind<Texture2D,Ref<Image>>((_func_Ref*)0x211);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   D_METHODP((char*)&local_288, (char***)"create_placeholder", 0);
   local_a0 = (undefined1[16])0x0;
   local_a8[0] = 0;
   local_a8[1] = 0;
   pMVar10 = (MethodBind*)operator_new(0x68, "");
   MethodBind::MethodBind(pMVar10);
   *(undefined***)pMVar10 = &PTR__gen_argument_type_0011d4d8;
   *(undefined8*)( pMVar10 + 0x58 ) = 0x219;
   *(undefined8*)( pMVar10 + 0x60 ) = 0;
   MethodBind::_set_returns(SUB81(pMVar10, 0));
   MethodBind::_set_const(SUB81(pMVar10, 0));
   MethodBind::_generate_argument_types((int)pMVar10);
   *(undefined4*)( pMVar10 + 0x34 ) = 0;
   local_2c8 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2c8);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2c8, false);
   StringName::operator =((StringName*)( pMVar10 + 0x18 ), (StringName*)&local_2b8);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_288, (Variant**)0x0, 0);
   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_288);
   local_288 = "";
   local_2b8 = (char*)0x0;
   local_280 = 0;
   String::parse_latin1((StrRange*)&local_2b8);
   local_2c8 = 0;
   local_288 = "";
   local_280 = 0;
   String::parse_latin1((StrRange*)&local_2c8);
   local_2d0 = 0;
   local_288 = "Texture2D";
   local_280 = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_288, (StrRange*)&local_2d0, false);
   ClassDB::add_property_group((StringName*)&local_288, (String*)&local_2c8, (String*)&local_2b8, 0);
   if (( StringName::configured != '\0' ) && ( local_288 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_get_width";
   local_2c0 = 0;
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_2b8);
   PropertyInfo::operator =((PropertyInfo*)&local_280, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   local_230 = CONCAT44(local_230._4_4_, 3);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_get_height";
   local_2c0 = 0;
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0x8c);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_2b8);
   PropertyInfo::operator =((PropertyInfo*)&local_280, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   local_230 = CONCAT44(local_230._4_4_, 3);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_2c0 = 0;
   local_2b8 = (char*)0x0;
   local_288 = "x";
   local_280 = 1;
   String::parse_latin1((StrRange*)&local_2b8);
   local_288 = (char*)0x0;
   if (local_2b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d0 = 0;
   local_288 = "y";
   local_280 = 1;
   String::parse_latin1((StrRange*)&local_2d0);
   local_288 = (char*)0x0;
   if (local_2d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_is_pixel_opaque";
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   PropertyInfo::operator =((PropertyInfo*)&local_280, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   local_230 = local_230 & 0xffffffff00000000;
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 3);
   GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 3);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_has_alpha";
   local_2c0 = 0;
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0xc);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   PropertyInfo::operator =((PropertyInfo*)&local_280, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   local_230 = local_230 & 0xffffffff00000000;
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_2c0 = 0;
   local_2b8 = (char*)0x0;
   local_288 = "to_canvas_item";
   local_280 = 0xe;
   String::parse_latin1((StrRange*)&local_2b8);
   local_288 = (char*)0x0;
   if (local_2b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2e0 = 0;
   local_288 = "pos";
   local_280 = 3;
   String::parse_latin1((StrRange*)&local_2e0);
   local_288 = (char*)0x0;
   if (local_2e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2e0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d0 = 0;
   local_288 = "modulate";
   local_280 = 8;
   String::parse_latin1((StrRange*)&local_2d0);
   local_288 = (char*)0x0;
   if (local_2d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d8 = 0;
   local_288 = "transpose";
   local_280 = 9;
   String::parse_latin1((StrRange*)&local_2d8);
   local_288 = (char*)0x0;
   if (local_2d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_draw";
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 5;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0xc);
   GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   local_2e8 = 0;
   local_2e0 = 0;
   local_2b8 = "";
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_2b0._8_8_;
   local_2b0 = auVar3 << 0x40;
   String::parse_latin1((StrRange*)&local_2e0);
   local_2d8 = 0;
   local_2b8 = (char*)CONCAT44(local_2b8._4_4_, 5);
   local_2a0 = 0;
   local_298 = 0;
   local_2b0 = (undefined1[16])0x0;
   if (local_2e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_298, (CowData*)&local_2e0);
      local_290 = 6;
      if (local_2a0 == 0x11) {
         StringName::StringName((StringName*)&local_2d0, (CowData<char32_t>*)&local_298, false);
         if (local_2b0._8_8_ == local_2d0) {
            if (( StringName::configured != '\0' ) && ( local_2d0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_2b0._8_8_ = local_2d0;
         }

         goto LAB_00109ef8;
      }

   }

   local_290 = 6;
   StringName::operator =((StringName*)( local_2b0 + 8 ), (StringName*)&local_2e8);
   LAB_00109ef8:local_418 = (StrRange*)&local_2e8;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e0);
   if (( StringName::configured != '\0' ) && ( local_2e8 != 0 )) {
      StringName::unref();
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_2c0 = 0;
   local_2b8 = (char*)0x0;
   local_288 = "to_canvas_item";
   local_280 = 0xe;
   String::parse_latin1((StrRange*)&local_2b8);
   local_288 = (char*)0x0;
   if (local_2b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2e8 = 0;
   local_288 = "rect";
   local_280 = 4;
   String::parse_latin1(local_418);
   local_288 = (char*)0x0;
   if (local_2e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)local_418);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d0 = 0;
   local_288 = "tile";
   local_280 = 4;
   String::parse_latin1((StrRange*)&local_2d0);
   local_288 = (char*)0x0;
   if (local_2d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2e0 = 0;
   local_288 = "modulate";
   local_280 = 8;
   String::parse_latin1((StrRange*)&local_2e0);
   local_288 = (char*)0x0;
   if (local_2e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2e0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d8 = 0;
   local_288 = "transpose";
   local_280 = 9;
   String::parse_latin1((StrRange*)&local_2d8);
   local_288 = (char*)0x0;
   if (local_2d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_418);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_draw_rect";
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0xc);
   GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   local_2c0 = 0;
   local_2b8 = (char*)0x0;
   local_288 = "to_canvas_item";
   local_280 = 0xe;
   String::parse_latin1((StrRange*)&local_2b8);
   local_288 = (char*)0x0;
   if (local_2b8 != (char*)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2b8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2f0 = 0;
   local_288 = "rect";
   local_280 = 4;
   String::parse_latin1((StrRange*)&local_2f0);
   local_288 = (char*)0x0;
   if (local_2f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2f0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d0 = 0;
   local_288 = "src_rect";
   local_280 = 8;
   String::parse_latin1((StrRange*)&local_2d0);
   local_288 = (char*)0x0;
   if (local_2d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2e8 = 0;
   local_288 = "modulate";
   local_280 = 8;
   String::parse_latin1(local_418);
   local_288 = (char*)0x0;
   if (local_2e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)local_418);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2d8 = 0;
   local_288 = "transpose";
   local_280 = 9;
   String::parse_latin1((StrRange*)&local_2d8);
   local_288 = (char*)0x0;
   if (local_2d8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2d8);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   local_2e0 = 0;
   local_288 = "clip_uv";
   local_280 = 7;
   String::parse_latin1((StrRange*)&local_2e0);
   local_288 = (char*)0x0;
   if (local_2e0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_288, (CowData*)&local_2e0);
   }

   Vector<String>::push_back((Vector<String>*)&local_2c8, (MethodDefinition*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_288);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_418);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   local_278 = (undefined1[16])0x0;
   local_2b8 = "_draw_rect_region";
   local_288 = (char*)0x0;
   local_280 = 0;
   local_268 = 0;
   local_260 = 0;
   local_258 = 6;
   local_250 = 1;
   local_248[0] = 0;
   local_238 = 0;
   local_230 = 0;
   local_220 = 0;
   local_2b0._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_288);
   local_250 = CONCAT44(local_250._4_4_, 0xc);
   GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_2b8);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_248, (PropertyInfo*)&local_2b8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_2b8);
   Vector<int>::push_back(local_228, 0);
   local_2d0 = 0;
   local_2b8 = "Texture2D";
   local_2b0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_2d0);
   StringName::StringName((StringName*)&local_2b8, (StrRange*)&local_2d0, false);
   ClassDB::add_virtual_method((StringName*)&local_2b8, (MethodInfo*)&local_288, true, (Vector*)&local_2c8, false);
   if (( StringName::configured != '\0' ) && ( local_2b8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_288);
   CowData<String>::_unref((CowData<String>*)&local_2c0);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture2D::draw_rect_region(RID, Rect2 const&, Rect2 const&, Color const&, bool, bool) const */void Texture2D::draw_rect_region(Texture2D *this, undefined8 param_2, undefined8 *param_3, undefined8 *param_4, undefined8 *param_5, StringName param_6, GetTypeInfo<RID,void> param_7) {
   Variant *pVVar1;
   undefined4 uVar2;
   long *plVar3;
   undefined8 uVar4;
   long lVar5;
   code *pcVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   undefined8 local_220;
   undefined8 local_218;
   StringName local_210;
   undefined7 uStack_20f;
   GetTypeInfo<RID,void> local_208[8];
   long local_200[5];
   int local_1d8;
   undefined4 uStack_1d4;
   undefined4 uStack_1d0;
   undefined4 uStack_1cc;
   undefined1 local_1c8[16];
   undefined8 local_1b8;
   undefined8 local_1b0;
   undefined8 local_1a8;
   undefined8 local_1a0;
   undefined8 local_198[2];
   undefined8 local_188;
   undefined8 local_180;
   Vector<int> local_178[8];
   undefined8 local_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined8 local_158;
   undefined8 uStack_150;
   Variant *local_148;
   Variant *pVStack_140;
   undefined8 local_138;
   undefined8 uStack_130;
   undefined8 local_128;
   undefined8 uStack_120;
   Variant *local_108;
   Variant *pVStack_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_e8;
   Variant *pVStack_e0;
   int *local_d8;
   undefined8 *puStack_d0;
   undefined8 *local_c8;
   Variant **ppVStack_c0;
   StringName *local_b8;
   GetTypeInfo<RID,void> *pGStack_b0;
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_168 = *param_3;
   uStack_160 = param_3[1];
   local_158 = *param_4;
   uStack_150 = param_4[1];
   local_148 = (Variant*)*param_5;
   pVStack_140 = (Variant*)param_5[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar3 = *(long**)( this + 0x98 );
   local_220 = param_2;
   if (plVar3 != (long*)0x0) {
      local_1d8 = 0;
      uStack_1d4 = 0;
      uStack_1d0 = 0;
      Variant::Variant((Variant*)&local_d8, (RID*)&local_220);
      Variant::Variant((Variant*)&ppVStack_c0, (Rect2*)&local_168);
      Variant::Variant(local_a8, (Rect2*)&local_158);
      Variant::Variant(local_90, (Color*)&local_148);
      Variant::Variant(local_78, (bool)param_6);
      Variant::Variant(local_60, (bool)param_7);
      local_108 = (Variant*)&local_d8;
      pVStack_100 = (Variant*)&ppVStack_c0;
      local_f8 = local_a8;
      pVStack_f0 = local_90;
      local_e8 = local_78;
      pVStack_e0 = local_60;
      ( **(code**)( *plVar3 + 0x60 ) )(&local_128, plVar3, this + 0x2d0, &local_108, 6, &local_1d8);
      if (Variant::needs_deinit[(int)local_128] != '\0') {
         Variant::_clear_internal();
      }

      if (local_1d8 == 0) {
         pVVar7 = local_48;
         do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar7 != (Variant*)&local_d8 );
         goto LAB_0010ad86;
      }

      pVVar7 = local_48;
      do {
         pVVar1 = pVVar7 + -0x18;
         pVVar7 = pVVar7 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar7 != (Variant*)&local_d8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2d8] == (Texture2D)0x0 )) {
      local_1d8 = 0;
      uStack_1d4 = 0;
      local_1c8 = (undefined1[16])0x0;
      uStack_1d0 = 0;
      uStack_1cc = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 6;
      local_1a0 = 1;
      local_198[0] = 0;
      local_188 = 0;
      local_180 = 0;
      local_170 = 0;
      String::parse_latin1((String*)&local_1d8, "_draw_rect_region");
      local_1a0 = CONCAT44(local_1a0._4_4_, 0xc);
      GetTypeInfo<RID,void>::get_class_info(local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_208);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_198, (PropertyInfo*)local_208);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_208);
      Vector<int>::push_back(local_178, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2e0 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar6 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar5 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_218 = 0;
         String::parse_latin1((String*)&local_218, "Texture2D");
         StringName::StringName(&local_210, (String*)&local_218, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_208, &local_210);
         if (local_200[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_200);
            if (StringName::configured != '\0') goto LAB_0010b155;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
            LAB_0010b176:lVar5 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar5 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar5 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010b0ad;
            uVar4 = ( *pcVar6 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2d0);
            *(undefined8*)( this + 0x2e0 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_200[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_200);
            if (StringName::configured != '\0') {
               LAB_0010b155:if (CONCAT71(uStack_20f, local_210) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_218);
            if (lVar5 == 0) goto LAB_0010b176;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar6 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2d0, uVar2);
         *(undefined8*)( this + 0x2e0 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010b0ad:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar3 = (long*)operator_new(0x18, "");
         *plVar3 = (long)( this + 0x2e0 );
         plVar3[1] = (long)( this + 0x2d8 );
         plVar3[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar3;
      }

      this[0x2d8] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_1d8);
   }

   pcVar6 = *(code**)( this + 0x2e0 );
   if (pcVar6 == (code*)0x0) {
      plVar3 = (long*)RenderingServer::get_singleton();
      pcVar6 = *(code**)( *plVar3 + 0xf28 );
      uVar4 = ( **(code**)( *(long*)this + 0x1c0 ) )(this);
      ( *pcVar6 )(plVar3, param_2, param_3, uVar4, param_4, param_5, param_6);
   }
 else {
      local_d8 = &local_1d8;
      local_b8 = &local_210;
      local_c8 = &local_128;
      local_1d8 = (int)local_220;
      uStack_1d4 = ( undefined4 )((ulong)local_220 >> 0x20);
      puStack_d0 = &local_138;
      ppVStack_c0 = &local_108;
      local_138 = local_168;
      uStack_130 = uStack_160;
      pGStack_b0 = local_208;
      local_128 = local_158;
      uStack_120 = uStack_150;
      local_108 = local_148;
      pVStack_100 = pVStack_140;
      local_210 = param_6;
      local_208[0] = param_7;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), &local_d8, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2d0, pcVar6, &local_d8, 0);
      }

   }

   LAB_0010ad86:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture2D::draw_rect(RID, Rect2 const&, bool, Color const&, bool) const */void Texture2D::draw_rect(Texture2D *this, undefined8 param_2, undefined8 *param_3, StringName param_4, undefined8 *param_5, GetTypeInfo<RID,void> param_6) {
   Variant *pVVar1;
   undefined4 uVar2;
   long *plVar3;
   undefined8 uVar4;
   long lVar5;
   code *pcVar6;
   Variant *pVVar7;
   long in_FS_OFFSET;
   undefined8 local_1e0;
   undefined8 local_1d8;
   StringName local_1d0;
   undefined7 uStack_1cf;
   GetTypeInfo<RID,void> local_1c8[8];
   long local_1c0[5];
   int local_198;
   undefined4 uStack_194;
   undefined4 uStack_190;
   undefined4 uStack_18c;
   undefined1 local_188[16];
   undefined8 local_178;
   undefined8 local_170;
   undefined8 local_168;
   undefined8 local_160;
   undefined8 local_158[2];
   undefined8 local_148;
   undefined8 local_140;
   Vector<int> local_138[8];
   undefined8 local_130;
   undefined8 local_128;
   undefined8 uStack_120;
   Variant *local_118;
   Variant *pVStack_110;
   undefined8 local_108;
   undefined8 uStack_100;
   Variant *local_e8;
   Variant *pVStack_e0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant *local_c8;
   int *local_b8;
   undefined8 *puStack_b0;
   StringName *local_a8;
   Variant **ppVStack_a0;
   GetTypeInfo<RID,void> *local_98;
   Variant local_88[24];
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_128 = *param_3;
   uStack_120 = param_3[1];
   plVar3 = *(long**)( this + 0x98 );
   local_118 = (Variant*)*param_5;
   pVStack_110 = (Variant*)param_5[1];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_1e0 = param_2;
   if (plVar3 != (long*)0x0) {
      local_198 = 0;
      uStack_194 = 0;
      uStack_190 = 0;
      Variant::Variant((Variant*)&local_b8, (RID*)&local_1e0);
      Variant::Variant((Variant*)&ppVStack_a0, (Rect2*)&local_128);
      Variant::Variant(local_88, (bool)param_4);
      Variant::Variant(local_70, (Color*)&local_118);
      Variant::Variant(local_58, (bool)param_6);
      local_e8 = (Variant*)&local_b8;
      pVStack_e0 = (Variant*)&ppVStack_a0;
      local_d8 = local_88;
      pVStack_d0 = local_70;
      local_c8 = local_58;
      ( **(code**)( *plVar3 + 0x60 ) )(&local_108, plVar3, this + 0x2b8, &local_e8, 5, &local_198);
      if (Variant::needs_deinit[(int)local_108] != '\0') {
         Variant::_clear_internal();
      }

      if (local_198 == 0) {
         pVVar7 = (Variant*)local_40;
         do {
            pVVar1 = pVVar7 + -0x18;
            pVVar7 = pVVar7 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar7 != (Variant*)&local_b8 );
         goto LAB_0010b4ce;
      }

      pVVar7 = (Variant*)local_40;
      do {
         pVVar1 = pVVar7 + -0x18;
         pVVar7 = pVVar7 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar7 != (Variant*)&local_b8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2c0] == (Texture2D)0x0 )) {
      local_198 = 0;
      uStack_194 = 0;
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
      String::parse_latin1((String*)&local_198, "_draw_rect");
      local_160 = CONCAT44(local_160._4_4_, 0xc);
      GetTypeInfo<RID,void>::get_class_info(local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1c8);
      Vector<int>::push_back(local_138, 0);
      GetTypeInfo<Rect2,void>::get_class_info((GetTypeInfo<Rect2,void>*)local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1c8);
      Vector<int>::push_back(local_138, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1c8);
      Vector<int>::push_back(local_138, 0);
      GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1c8);
      Vector<int>::push_back(local_138, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_1c8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_158, (PropertyInfo*)local_1c8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1c8);
      Vector<int>::push_back(local_138, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2c8 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar6 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar5 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_1d8 = 0;
         String::parse_latin1((String*)&local_1d8, "Texture2D");
         StringName::StringName(&local_1d0, (String*)&local_1d8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_1c8, &local_1d0);
         if (local_1c0[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1c0);
            if (StringName::configured != '\0') goto LAB_0010b892;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
            LAB_0010b8b3:lVar5 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar5 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar5 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010b7e9;
            uVar4 = ( *pcVar6 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2b8);
            *(undefined8*)( this + 0x2c8 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_1c0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1c0);
            if (StringName::configured != '\0') {
               LAB_0010b892:if (CONCAT71(uStack_1cf, local_1d0) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
            if (lVar5 == 0) goto LAB_0010b8b3;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar6 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x2b8, uVar2);
         *(undefined8*)( this + 0x2c8 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_0010b7e9:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar3 = (long*)operator_new(0x18, "");
         *plVar3 = (long)( this + 0x2c8 );
         plVar3[1] = (long)( this + 0x2c0 );
         plVar3[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar3;
      }

      this[0x2c0] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_198);
   }

   pcVar6 = *(code**)( this + 0x2c8 );
   if (pcVar6 == (code*)0x0) {
      plVar3 = (long*)RenderingServer::get_singleton();
      pcVar6 = *(code**)( *plVar3 + 0xf20 );
      uVar4 = ( **(code**)( *(long*)this + 0x1c0 ) )(this);
      ( *pcVar6 )(plVar3, param_2, param_3, uVar4, param_4, param_5, param_6);
   }
 else {
      local_b8 = &local_198;
      local_198 = (int)local_1e0;
      uStack_194 = ( undefined4 )((ulong)local_1e0 >> 0x20);
      puStack_b0 = &local_108;
      local_a8 = &local_1d0;
      ppVStack_a0 = &local_e8;
      local_108 = local_128;
      uStack_100 = uStack_120;
      local_98 = local_1c8;
      local_e8 = local_118;
      pVStack_e0 = pVStack_110;
      local_1d0 = param_4;
      local_1c8[0] = param_6;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar6 )(*(undefined8*)( this + 0x10 ), &local_b8, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2b8, pcVar6, &local_b8, 0);
      }

   }

   LAB_0010b4ce:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture2D::draw(RID, Vector2 const&, Color const&, bool) const */void Texture2D::draw(Texture2D *this, undefined8 param_2, long *param_3, undefined8 *param_4, GetTypeInfo<RID,void> param_5) {
   Variant *pVVar1;
   code *pcVar2;
   int iVar3;
   int iVar4;
   undefined4 uVar5;
   long *plVar6;
   undefined8 uVar7;
   long lVar8;
   code *pcVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   undefined8 local_1c0;
   undefined8 local_1b8;
   long local_1b0;
   GetTypeInfo<RID,void> local_1a8[8];
   long local_1a0[5];
   int local_178;
   undefined4 uStack_174;
   undefined4 uStack_170;
   undefined4 uStack_16c;
   undefined1 local_168[16];
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138[2];
   undefined8 local_128;
   undefined8 local_120;
   Vector<int> local_118[8];
   undefined8 local_110;
   long local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   long local_e8[4];
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   int *local_a8;
   long *plStack_a0;
   Variant **local_98;
   GetTypeInfo<RID,void> *apGStack_90[3];
   Variant local_78[24];
   Variant local_60[24];
   Variant local_48[8];
   long local_40;
   local_f8 = (Variant*)*param_4;
   pVStack_f0 = (Variant*)param_4[1];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = *param_3;
   plVar6 = *(long**)( this + 0x98 );
   local_1c0 = param_2;
   if (plVar6 != (long*)0x0) {
      local_178 = 0;
      uStack_174 = 0;
      uStack_170 = 0;
      Variant::Variant((Variant*)&local_a8, (RID*)&local_1c0);
      Variant::Variant((Variant*)apGStack_90, (Vector2*)&local_100);
      Variant::Variant(local_78, (Color*)&local_f8);
      Variant::Variant(local_60, (bool)param_5);
      local_c8 = (Variant*)&local_a8;
      pVStack_c0 = (Variant*)apGStack_90;
      local_b8 = local_78;
      pVStack_b0 = local_60;
      ( **(code**)( *plVar6 + 0x60 ) )(local_e8, plVar6, this + 0x2a0, &local_c8, 4, &local_178);
      if (Variant::needs_deinit[(int)local_e8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_178 == 0) {
         pVVar10 = local_48;
         do {
            pVVar1 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar10 != (Variant*)&local_a8 );
         goto LAB_0010bbbd;
      }

      pVVar10 = local_48;
      do {
         pVVar1 = pVVar10 + -0x18;
         pVVar10 = pVVar10 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar10 != (Variant*)&local_a8 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x2a8] == (Texture2D)0x0 )) {
      local_178 = 0;
      uStack_174 = 0;
      local_168 = (undefined1[16])0x0;
      uStack_170 = 0;
      uStack_16c = 0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 6;
      local_140 = 1;
      local_138[0] = 0;
      local_128 = 0;
      local_120 = 0;
      local_110 = 0;
      String::parse_latin1((String*)&local_178, "_draw");
      local_140 = CONCAT44(local_140._4_4_, 0xc);
      GetTypeInfo<RID,void>::get_class_info(local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
      Vector<int>::push_back(local_118, 0);
      GetTypeInfo<Vector2,void>::get_class_info((GetTypeInfo<Vector2,void>*)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
      Vector<int>::push_back(local_118, 0);
      GetTypeInfo<Color,void>::get_class_info((GetTypeInfo<Color,void>*)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
      Vector<int>::push_back(local_118, 0);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_1a8);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)local_1a8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_1a8);
      Vector<int>::push_back(local_118, 0);
      uVar5 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x2b0 ) = 0;
      lVar8 = *(long*)( this + 8 );
      pcVar9 = *(code**)( lVar8 + 0xd8 );
      if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar8 + 0xd0 ) ),pcVar9 == (code*)0x0) {
         local_1b8 = 0;
         String::parse_latin1((String*)&local_1b8, "Texture2D");
         StringName::StringName((StringName*)&local_1b0, (String*)&local_1b8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)local_1a8, (StringName*)&local_1b0);
         if (local_1a0[0] == 0) {
            lVar8 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
            if (StringName::configured != '\0') goto LAB_0010bfac;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
            LAB_0010bfcd:lVar8 = *(long*)( this + 8 );
            pcVar9 = *(code**)( lVar8 + 200 );
            if (( ( pcVar9 == (code*)0x0 ) || ( *(long*)( lVar8 + 0xe0 ) == 0 ) ) && ( pcVar9 = *(code**)( lVar8 + 0xc0 ) ),pcVar9 == (code*)0x0) goto LAB_0010bed3;
            uVar7 = ( *pcVar9 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x2a0);
            *(undefined8*)( this + 0x2b0 ) = uVar7;
         }
 else {
            lVar8 = *(long*)( local_1a0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_1a0);
            if (StringName::configured != '\0') {
               LAB_0010bfac:if (local_1b0 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
            if (lVar8 == 0) goto LAB_0010bfcd;
         }

         lVar8 = *(long*)( this + 8 );
      }
 else {
         uVar7 = ( *pcVar9 )(*(undefined8*)( lVar8 + 0xa0 ), this + 0x2a0, uVar5);
         *(undefined8*)( this + 0x2b0 ) = uVar7;
         lVar8 = *(long*)( this + 8 );
      }

      LAB_0010bed3:if (*(char*)( lVar8 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x2b0 );
         plVar6[1] = (long)( this + 0x2a8 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x2a8] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_178);
   }

   pcVar9 = *(code**)( this + 0x2b0 );
   if (pcVar9 == (code*)0x0) {
      plVar6 = (long*)RenderingServer::get_singleton();
      pcVar9 = *(code**)( *plVar6 + 0xf20 );
      uVar7 = ( **(code**)( *(long*)this + 0x1c0 ) )(this);
      pcVar2 = *(code**)( *(long*)this + 0x1d8 );
      if (pcVar2 == get_size) {
         iVar3 = ( **(code**)( *(long*)this + 0x1d0 ) )(this);
         iVar4 = ( **(code**)( *(long*)this + 0x1c8 ) )(this);
         plStack_a0 = (long*)CONCAT44((float)iVar3, (float)iVar4);
      }
 else {
         plStack_a0 = (long*)( *pcVar2 )(this);
      }

      local_a8 = (int*)*param_3;
      ( *pcVar9 )(plVar6, param_2, &local_a8, uVar7, 0, param_4, param_5);
   }
 else {
      local_a8 = &local_178;
      local_98 = &local_c8;
      local_178 = (int)local_1c0;
      uStack_174 = ( undefined4 )((ulong)local_1c0 >> 0x20);
      local_c8 = local_f8;
      pVStack_c0 = pVStack_f0;
      local_e8[0] = local_100;
      plStack_a0 = local_e8;
      apGStack_90[0] = local_1a8;
      local_1a8[0] = param_5;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar9 )(*(undefined8*)( this + 0x10 ), &local_a8, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x2a0, pcVar9, &local_a8, 0);
      }

   }

   LAB_0010bbbd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture2D::is_pixel_opaque(int, int) const */bool Texture2D::is_pixel_opaque(Texture2D *this, int param_1, int param_2) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined8 local_158;
   StringName local_150;
   undefined7 uStack_14f;
   long local_148;
   long local_140[5];
   int local_118;
   int iStack_114;
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
   long *local_78;
   int *piStack_70;
   int local_60[8];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      local_118 = 0;
      iStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, param_1);
      Variant::Variant((Variant*)local_60, param_2);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar4 + 0x60 ) )((Variant*)local_98, plVar4, this + 0x270, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_98);
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c215;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x278] == (Texture2D)0x0 )) {
      local_118 = 0;
      iStack_114 = 0;
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
      String::parse_latin1((String*)&local_118, "_is_pixel_opaque");
      local_e0 = CONCAT44(local_e0._4_4_, 0xc);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 3);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 3);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x280 ) = 0;
      lVar3 = *(long*)( this + 8 );
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "Texture2D");
         StringName::StringName(&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, &local_150);
         if (local_140[0] == 0) {
            lVar3 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0010c54d;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0010c56c:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_0010c446;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x270);
            *(undefined8*)( this + 0x280 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0010c54d:if (CONCAT71(uStack_14f, local_150) != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar3 == 0) goto LAB_0010c56c;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x270, uVar1);
         *(undefined8*)( this + 0x280 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_0010c446:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x280 );
         plVar4[1] = (long)( this + 0x278 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x278] = (Texture2D)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   pcVar5 = *(code**)( this + 0x280 );
   bVar6 = true;
   if (pcVar5 != (code*)0x0) {
      local_78 = &local_148;
      local_148 = (long)param_1;
      iStack_114 = param_2 >> 0x1f;
      piStack_70 = &local_118;
      local_118 = param_2;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), &local_78, &local_150);
         bVar6 = local_150 != (StringName)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x270, pcVar5, &local_78, &local_150);
         bVar6 = local_150 != (StringName)0x0;
      }

   }

   LAB_0010c215:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar6;
}
/* TextureLayered::get_layer_data(int) const */long *TextureLayered::get_layer_data(int param_1) {
   Image *pIVar1;
   char cVar2;
   undefined4 uVar3;
   Image *pIVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   int in_EDX;
   long *in_RSI;
   undefined4 in_register_0000003c;
   long *plVar8;
   long in_FS_OFFSET;
   CowData<char32_t> local_158[8];
   CowData<char32_t> local_150[8];
   undefined8 local_148;
   String local_140[8];
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
   long *local_58[3];
   long local_40;
   plVar8 = (long*)CONCAT44(in_register_0000003c, param_1);
   plVar6 = (long*)in_RSI[0x13];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *plVar8 = 0;
   if (plVar6 != (long*)0x0) {
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, in_EDX);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar6 + 0x60 ) )(local_58, plVar6, in_RSI + 0x5a, &local_80, 1, &local_f8);
      if (local_f8 == 0) {
         lVar5 = Variant::get_validated_object();
         if (( ( lVar5 == 0 ) || ( pIVar4 = (Image*)__dynamic_cast(lVar5, &Object::typeinfo, &Image::typeinfo, 0) ),pIVar4 == (Image*)0x0 )) {
            pIVar4 = (Image*)*plVar8;
            if (pIVar4 != (Image*)0x0) {
               *plVar8 = 0;
               cVar2 = RefCounted::unreference();
               goto joined_r0x0010c961;
            }

         }
 else {
            pIVar1 = (Image*)*plVar8;
            if (pIVar4 != pIVar1) {
               *plVar8 = (long)pIVar4;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *plVar8 = 0;
               }

               if (( pIVar1 != (Image*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
                  memdelete<Image>(pIVar1);
               }

            }

            cVar2 = RefCounted::unreference();
            joined_r0x0010c961:if (cVar2 != '\0') {
               memdelete<Image>(pIVar4);
            }

         }

         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010c815;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x5b] == '\0' )) {
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
      String::parse_latin1((String*)&local_f8, "_get_layer_data");
      local_c0 = CONCAT44(local_c0._4_4_, 0x8c);
      GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 3);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar5 = in_RSI[1];
      in_RSI[0x5c] = 0;
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "TextureLayered");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_0010cd9f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_0010cdbe:lVar5 = in_RSI[1];
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_0010cc98;
            lVar5 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), in_RSI + 0x5a);
            in_RSI[0x5c] = lVar5;
         }
 else {
            lVar5 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_0010cd9f:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar5 == 0) goto LAB_0010cdbe;
         }

         lVar5 = in_RSI[1];
      }
 else {
         lVar5 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), in_RSI + 0x5a, uVar3);
         in_RSI[0x5c] = lVar5;
         lVar5 = in_RSI[1];
      }

      LAB_0010cc98:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( in_RSI + 0x5c );
         plVar6[1] = (long)( in_RSI + 0x5b );
         plVar6[2] = in_RSI[0x2d];
         in_RSI[0x2d] = (long)plVar6;
      }

      *(undefined1*)( in_RSI + 0x5b ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar7 = (code*)in_RSI[0x5c];
   if (pcVar7 == (code*)0x0) {
      if (_gdvirtual__get_layer_data_call(int,Ref<Image> & ::first_print != '\0') {
         local_128 = 0;
         local_f8 = 0x1158e0;
         uStack_f4 = 0;
         uStack_f0 = 0x23;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_128);
         local_138 = 0;
         local_f8 = 0x10eef0;
         uStack_f4 = 0;
         uStack_f0 = 0xf;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_138);
         local_148 = 0;
         local_f8 = 0x114898;
         uStack_f4 = 0;
         uStack_f0 = 2;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_148);
         ( **(code**)( *in_RSI + 0x48 ) )(local_158);
         operator+((char *)
         local_150,(String*)"Required virtual method ";
         String::operator +(local_140, (String*)local_150);
         String::operator +((String*)&local_130, local_140);
         String::operator +((String*)&local_f8, (String*)&local_130);
         _err_print_error("_gdvirtual__get_layer_data_call", "scene/resources/texture.h", 0x61, (String*)&local_f8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
         CowData<char32_t>::_unref(local_150);
         CowData<char32_t>::_unref(local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         _gdvirtual__get_layer_data_call(int,Ref<Image>&)::first_print =
         '\0';
      }

      goto LAB_0010c815;
   }

   local_58[0] = &local_128;
   local_128 = (long)in_EDX;
   local_f8 = 0;
   uStack_f4 = 0;
   if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
      ( *pcVar7 )(in_RSI[2], local_58, &local_f8);
      pIVar4 = (Image*)CONCAT44(uStack_f4, local_f8);
      if (pIVar4 == (Image*)0x0) goto LAB_0010c98b;
      LAB_0010c789:cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
         pIVar1 = (Image*)*plVar8;
         if (pIVar4 != pIVar1) {
            *plVar8 = (long)pIVar4;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *plVar8 = 0;
            }

            if (( pIVar1 != (Image*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
               memdelete<Image>(pIVar1);
            }

         }

         cVar2 = RefCounted::unreference();
         goto joined_r0x0010c861;
      }

      pIVar4 = (Image*)*plVar8;
      if (pIVar4 != (Image*)0x0) goto LAB_0010c850;
   }
 else {
      ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x5a, pcVar7, local_58, &local_f8);
      pIVar4 = (Image*)CONCAT44(uStack_f4, local_f8);
      if (pIVar4 != (Image*)0x0) goto LAB_0010c789;
      LAB_0010c98b:pIVar4 = (Image*)*plVar8;
      if (pIVar4 == (Image*)0x0) goto LAB_0010c815;
      LAB_0010c850:*plVar8 = 0;
      cVar2 = RefCounted::unreference();
      joined_r0x0010c861:if (cVar2 != '\0') {
         memdelete<Image>(pIVar4);
      }

   }

   if (( CONCAT44(uStack_f4, local_f8) != 0 ) && ( cVar2 = cVar2 != '\0' )) {
      memdelete<Image>((Image*)CONCAT44(uStack_f4, local_f8));
   }

   LAB_0010c815:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture3D::_get_datai() const */void Texture3D::_get_datai(void) {
   long *plVar1;
   Variant *pVVar2;
   long lVar3;
   long *in_RSI;
   uint uVar4;
   Array *in_RDI;
   long in_FS_OFFSET;
   long local_70;
   undefined1 local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x1f0 ) )(local_68);
   Array::Array(in_RDI);
   local_40 = (undefined1[16])0x0;
   local_58 = "Image";
   local_48 = 0;
   local_70 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_58, (StrRange*)&local_70, false);
   uVar4 = (uint)in_RDI;
   Array::set_typed(uVar4, (StringName*)0x18, (Variant*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
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

   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = 0;
   Array::resize(uVar4);
   do {
      while (true) {
         if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) <= lVar3 )) {
            CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_60);
            if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         Variant::Variant((Variant*)&local_48, *(Object**)( local_60 + lVar3 * 8 ));
         pVVar2 = (Variant*)Array::operator [](uVar4);
         if (pVVar2 == (Variant*)&local_48) break;
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = (int)local_48;
         *(undefined8*)( pVVar2 + 8 ) = local_40._0_8_;
         *(undefined8*)( pVVar2 + 0x10 ) = local_40._8_8_;
         LAB_0010cfac:lVar3 = lVar3 + 1;
      }
;
      if (Variant::needs_deinit[(int)local_48] == '\0') goto LAB_0010cfac;
      lVar3 = lVar3 + 1;
      Variant::_clear_internal();
   }
 while ( true );
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this) {
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
/* Texture3D::get_data() const */void Texture3D::get_data(void) {
   CowData<Ref<Image>> *this;
   Image *pIVar1;
   char cVar2;
   int iVar3;
   undefined4 uVar4;
   ulong uVar5;
   Image *pIVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long *plVar9;
   code *pcVar10;
   long *in_RSI;
   uint uVar11;
   long in_RDI;
   ulong uVar12;
   ulong uVar13;
   long lVar14;
   long lVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   long local_160;
   Array local_150[8];
   CowData<char32_t> local_148[8];
   String local_140[8];
   undefined8 local_138;
   undefined8 local_130;
   undefined8 local_128;
   long local_120;
   int local_118;
   undefined4 uStack_114;
   undefined4 local_110;
   undefined4 uStack_10c;
   char *local_e8;
   undefined8 local_e0;
   undefined1 local_d8[16];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_98;
   ulong local_90;
   undefined8 local_80;
   int local_78[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(local_150);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_118 = 0;
   uStack_114 = 0;
   local_e8 = "Image";
   local_e0 = 5;
   String::parse_latin1((StrRange*)&local_118);
   StringName::StringName((StringName*)&local_e8, (StrRange*)&local_118, false);
   uVar11 = (uint)local_150;
   Array::set_typed(uVar11, (StringName*)0x18, (Variant*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar9 = (long*)in_RSI[0x13];
   if (plVar9 == (long*)0x0) {
      LAB_0010d31f:if (( in_RSI[1] != 0 ) && ( (char)in_RSI[0x58] == '\0' )) {
         local_e8 = (char*)0x0;
         local_d8 = (undefined1[16])0x0;
         local_e0 = 0;
         local_c8 = 0;
         local_c0 = 0;
         local_b8 = 6;
         local_b0 = 1;
         local_a8 = 0;
         local_98 = 0;
         local_90 = 0;
         local_80 = 0;
         String::parse_latin1((String*)&local_e8, "_get_data");
         local_b0 = CONCAT44(local_b0._4_4_, 0x8c);
         GetTypeInfo<TypedArray<Image>,void>::get_class_info((GetTypeInfo<TypedArray<Image>,void>*)&local_118);
         PropertyInfo::operator =((PropertyInfo*)&local_e0, (PropertyInfo*)&local_118);
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
         local_90 = local_90 & 0xffffffff00000000;
         uVar4 = MethodInfo::get_compatibility_hash();
         in_RSI[0x59] = 0;
         lVar14 = in_RSI[1];
         pcVar10 = *(code**)( lVar14 + 0xd8 );
         if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar14 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar14 + 0xd0 ) ),pcVar10 == (code*)0x0) {
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "Texture3D");
            StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_118, (StringName*)&local_120);
            if (CONCAT44(uStack_10c, local_110) == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_110);
               local_160 = 0;
               if (StringName::configured != '\0') goto LAB_0010de39;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               LAB_0010de5d:lVar14 = in_RSI[1];
               pcVar10 = *(code**)( lVar14 + 200 );
               if (( ( pcVar10 == (code*)0x0 ) || ( *(long*)( lVar14 + 0xe0 ) == 0 ) ) && ( pcVar10 = *(code**)( lVar14 + 0xc0 ) ),pcVar10 == (code*)0x0) goto LAB_0010dcf8;
               lVar14 = ( *pcVar10 )(*(undefined8*)( lVar14 + 0xa0 ), in_RSI + 0x57);
               in_RSI[0x59] = lVar14;
            }
 else {
               local_160 = *(long*)( CONCAT44(uStack_10c, local_110) + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_110);
               if (StringName::configured != '\0') {
                  LAB_0010de39:if (local_120 != 0) {
                     StringName::unref();
                  }

               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (local_160 == 0) goto LAB_0010de5d;
            }

            lVar14 = in_RSI[1];
         }
 else {
            lVar14 = ( *pcVar10 )(*(undefined8*)( lVar14 + 0xa0 ), in_RSI + 0x57, uVar4);
            in_RSI[0x59] = lVar14;
            lVar14 = in_RSI[1];
         }

         LAB_0010dcf8:if (*(char*)( lVar14 + 0x29 ) != '\0') {
            plVar9 = (long*)operator_new(0x18, "");
            *plVar9 = (long)( in_RSI + 0x59 );
            plVar9[1] = (long)( in_RSI + 0x58 );
            plVar9[2] = in_RSI[0x2d];
            in_RSI[0x2d] = (long)plVar9;
         }

         *(undefined1*)( in_RSI + 0x58 ) = 1;
         MethodInfo::~MethodInfo((MethodInfo*)&local_e8);
      }

      if (in_RSI[0x59] == 0) {
         if (_gdvirtual__get_data_call(TypedArray<Image> & ::first_print != '\0') {
            local_118 = 0;
            uStack_114 = 0;
            local_e8 = " must be overridden before calling.";
            local_e0 = 0x23;
            String::parse_latin1((StrRange*)&local_118);
            local_128 = 0;
            local_e8 = "_get_data";
            local_e0 = 9;
            String::parse_latin1((StrRange*)&local_128);
            local_e8 = "::";
            local_138 = 0;
            local_e0 = 2;
            String::parse_latin1((StrRange*)&local_138);
            ( **(code**)( *in_RSI + 0x48 ) )(local_148);
            operator+((char *)
            local_140,(String*)"Required virtual method ";
            String::operator +((String*)&local_130, local_140);
            String::operator +((String*)&local_120, (String*)&local_130);
            String::operator +((String*)&local_e8, (String*)&local_120);
            _err_print_error("_gdvirtual__get_data_call", "scene/resources/texture.h", 0x83, (StringName*)&local_e8, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
            CowData<char32_t>::_unref(local_148);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
            _gdvirtual__get_data_call(TypedArray<Image>&)::first_print =
            '\0';
         }

      }
 else {
         Array::Array((Array*)&local_128);
         if (*(code**)( in_RSI[1] + 0xe0 ) == (code*)0x0) {
            ( *(code*)in_RSI[0x59] )(in_RSI[2], 0, (Array*)&local_128);
         }
 else {
            ( **(code**)( in_RSI[1] + 0xe0 ) )(in_RSI[2], in_RSI + 0x57, in_RSI[0x59], 0);
         }

         Array::Array((Array*)&local_118);
         local_e8 = "Image";
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         local_120 = 0;
         local_e0 = 5;
         String::parse_latin1((StrRange*)&local_120);
         StringName::StringName((StringName*)&local_e8, (StrRange*)&local_120, false);
         Array::set_typed((uint)(StrRange*)&local_118, (StringName*)0x18, (Variant*)&local_e8);
         if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
         }

         cVar2 = Array::is_same_typed((Array*)&local_118);
         if (cVar2 == '\0') {
            Array::assign((Array*)&local_118);
         }
 else {
            Array::_ref((Array*)&local_118);
         }

         Array::operator =(local_150, (Array*)&local_118);
         Array::~Array((Array*)&local_118);
         Array::~Array((Array*)&local_128);
      }

   }
 else {
      local_118 = 0;
      uStack_114 = 0;
      local_110 = 0;
      ( **(code**)( *plVar9 + 0x60 ) )(local_78, plVar9, in_RSI + 0x57, 0, 0, (StrRange*)&local_118);
      if (local_118 != 0) {
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_0010d31f;
      }

      Variant::operator_cast_to_Array((Variant*)&local_128);
      Array::Array((Array*)&local_120);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      local_130 = 0;
      local_e8 = "Image";
      local_e0 = 5;
      String::parse_latin1((StrRange*)&local_130);
      StringName::StringName((StringName*)&local_e8, (StrRange*)&local_130, false);
      Array::set_typed((uint)(Array*)&local_120, (StringName*)0x18, (Variant*)&local_e8);
      if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      cVar2 = Array::is_same_typed((Array*)&local_120);
      if (cVar2 == '\0') {
         Array::assign((Array*)&local_120);
      }
 else {
         Array::_ref((Array*)&local_120);
      }

      Array::~Array((Array*)&local_128);
      Array::operator =(local_150, (Array*)&local_120);
      Array::~Array((Array*)&local_120);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   *(undefined8*)( in_RDI + 8 ) = 0;
   this(CowData<Ref<Image>> * )(in_RDI + 8);
   iVar3 = Array::size();
   uVar12 = (ulong)iVar3;
   if ((long)uVar12 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      LAB_0010da15:puVar7 = *(undefined8**)( in_RDI + 8 );
      LAB_0010d5f9:if (puVar7 == (undefined8*)0x0) goto LAB_0010d570;
   }
 else {
      puVar7 = *(undefined8**)( in_RDI + 8 );
      if (puVar7 == (undefined8*)0x0) {
         if (uVar12 == 0) goto LAB_0010d570;
         uVar16 = 0;
         CowData<Ref<Image>>::_copy_on_write(this);
         LAB_0010d994:uVar5 = uVar12 * 8 - 1;
         uVar5 = uVar5 >> 1 | uVar5;
         uVar5 = uVar5 >> 2 | uVar5;
         uVar5 = uVar5 >> 4 | uVar5;
         uVar5 = uVar5 >> 8 | uVar5;
         uVar5 = uVar5 >> 0x10 | uVar5;
         lVar14 = ( uVar5 >> 0x20 | uVar5 ) + 1;
         if ((long)uVar16 < (long)uVar12) {
            LAB_0010db58:if (uVar16 == 0) {
               puVar8 = (undefined8*)Memory::alloc_static(lVar14 + 0x10, false);
               if (puVar8 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  puVar7 = *(undefined8**)( in_RDI + 8 );
                  goto LAB_0010d5f9;
               }

               puVar7 = puVar8 + 2;
               *puVar8 = 1;
               puVar8[1] = 0;
               *(undefined8**)( in_RDI + 8 ) = puVar7;
               lVar14 = 0;
            }
 else {
               iVar3 = CowData<Ref<Image>>::_realloc(this, lVar14);
               if (iVar3 != 0) goto LAB_0010da15;
               LAB_0010d436:puVar7 = *(undefined8**)( in_RDI + 8 );
               if (puVar7 == (undefined8*)0x0) goto LAB_0010f04a;
               lVar14 = puVar7[-1];
            }

            if (lVar14 < (long)uVar12) {
               memset(puVar7 + lVar14, 0, ( uVar12 - lVar14 ) * 8);
            }

         }
 else {
            lVar15 = 0;
            LAB_0010d8e4:puVar7 = *(undefined8**)( in_RDI + 8 );
            uVar16 = uVar12;
            if (puVar7 == (undefined8*)0x0) {
               LAB_0010f04a:/* WARNING: Does not return */pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            for (; uVar16 < (ulong)puVar7[-1]; uVar16 = uVar16 + 1) {
               while (puVar7[uVar16] != 0) {
                  cVar2 = RefCounted::unreference();
                  if (cVar2 != '\0') {
                     memdelete<Image>((Image*)puVar7[uVar16]);
                  }

                  puVar7 = *(undefined8**)( in_RDI + 8 );
                  uVar16 = uVar16 + 1;
                  if (puVar7 == (undefined8*)0x0) goto LAB_0010f04a;
                  if ((ulong)puVar7[-1] <= uVar16) goto LAB_0010d92f;
               }
;
            }

            LAB_0010d92f:if (lVar15 != lVar14) {
               iVar3 = CowData<Ref<Image>>::_realloc(this, lVar14);
               if (iVar3 != 0) goto LAB_0010da15;
               puVar7 = *(undefined8**)( in_RDI + 8 );
               if (puVar7 == (undefined8*)0x0) {
                  get_data();
                  return;
               }

            }

         }

         puVar7[-1] = uVar12;
      }
 else {
         uVar16 = puVar7[-1];
         if (uVar12 != uVar16) {
            if (uVar12 != 0) {
               CowData<Ref<Image>>::_copy_on_write(this);
               uVar5 = uVar12 * 8 - 1;
               uVar5 = uVar5 >> 1 | uVar5;
               uVar5 = uVar5 >> 2 | uVar5;
               uVar5 = uVar5 >> 4 | uVar5;
               uVar5 = uVar5 >> 8 | uVar5;
               uVar5 = uVar5 >> 0x10 | uVar5;
               uVar5 = uVar5 | uVar5 >> 0x20;
               lVar14 = uVar5 + 1;
               if (uVar16 * 8 == 0) goto LAB_0010d994;
               uVar13 = uVar16 * 8 - 1;
               uVar13 = uVar13 | uVar13 >> 1;
               uVar13 = uVar13 | uVar13 >> 2;
               uVar13 = uVar13 | uVar13 >> 4;
               uVar13 = uVar13 | uVar13 >> 8;
               uVar13 = uVar13 | uVar13 >> 0x10;
               uVar13 = uVar13 | uVar13 >> 0x20;
               if ((long)uVar16 < (long)uVar12) {
                  if (uVar13 != uVar5) goto LAB_0010db58;
                  goto LAB_0010d436;
               }

               lVar15 = uVar13 + 1;
               goto LAB_0010d8e4;
            }

            CowData<Ref<Image>>::_unref(this);
            puVar7 = *(undefined8**)( in_RDI + 8 );
            goto LAB_0010d5f9;
         }

      }

   }

   lVar14 = 0;
   LAB_0010d4d1:do {
      if ((long)puVar7[-1] <= lVar14) break;
      Array::operator [](uVar11);
      if (*(long*)( in_RDI + 8 ) == 0) {
         lVar15 = 0;
         LAB_0010d5ab:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar14, lVar15, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar10 = (code*)invalidInstructionException();
         ( *pcVar10 )();
      }

      lVar15 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
      if (lVar15 <= lVar14) goto LAB_0010d5ab;
      CowData<Ref<Image>>::_copy_on_write(this);
      puVar7 = (undefined8*)( *(long*)( in_RDI + 8 ) + lVar14 * 8 );
      pIVar6 = (Image*)Variant::get_validated_object();
      pIVar1 = (Image*)*puVar7;
      if (pIVar6 != pIVar1) {
         if (pIVar6 == (Image*)0x0) {
            if (pIVar1 != (Image*)0x0) {
               *puVar7 = 0;
               cVar2 = RefCounted::unreference();
               joined_r0x0010d4ba:if (cVar2 != '\0') {
                  lVar14 = lVar14 + 1;
                  memdelete<Image>(pIVar1);
                  puVar7 = *(undefined8**)( in_RDI + 8 );
                  if (puVar7 == (undefined8*)0x0) break;
                  goto LAB_0010d4d1;
               }

            }

         }
 else {
            pIVar6 = (Image*)__dynamic_cast(pIVar6, &Object::typeinfo, &Image::typeinfo, 0);
            if (pIVar1 != pIVar6) {
               *puVar7 = pIVar6;
               if (( pIVar6 != (Image*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
                  *puVar7 = 0;
               }

               if (pIVar1 != (Image*)0x0) {
                  cVar2 = RefCounted::unreference();
                  goto joined_r0x0010d4ba;
               }

            }

         }

      }

      puVar7 = *(undefined8**)( in_RDI + 8 );
      lVar14 = lVar14 + 1;
   }
 while ( puVar7 != (undefined8*)0x0 );
   LAB_0010d570:Array::~Array(local_150);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* Texture::is_class_ptr(void*) const */uint Texture::is_class_ptr(Texture *this, void *param_1) {
   return (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Texture::_getv(StringName const&, Variant&) const */undefined8 Texture::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture::_setv(StringName const&, Variant const&) */undefined8 Texture::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture::_validate_propertyv(PropertyInfo&) const */void Texture::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Texture::_property_can_revertv(StringName const&) const */undefined8 Texture::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Texture::_property_get_revertv(StringName const&, Variant&) const */undefined8 Texture::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture::_notificationv(int, bool) */void Texture::_notificationv(int param_1, bool param_2) {
   return;
}
/* Texture2D::is_class_ptr(void*) const */uint Texture2D::is_class_ptr(Texture2D *this, void *param_1) {
   return (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Texture::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d6, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Texture2D::_getv(StringName const&, Variant&) const */undefined8 Texture2D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture2D::_setv(StringName const&, Variant const&) */undefined8 Texture2D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture2D::_validate_propertyv(PropertyInfo&) const */void Texture2D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Texture2D::_property_can_revertv(StringName const&) const */undefined8 Texture2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Texture2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 Texture2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture2D::_notificationv(int, bool) */void Texture2D::_notificationv(int param_1, bool param_2) {
   return;
}
/* Texture2D::get_image() const */Texture2D * __thiscall Texture2D::get_image(Texture2D *this){
   *(undefined8*)this = 0;
   return this;
}
/* TextureLayered::is_class_ptr(void*) const */uint TextureLayered::is_class_ptr(TextureLayered *this, void *param_1) {
   return (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Texture::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d6, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* TextureLayered::_getv(StringName const&, Variant&) const */undefined8 TextureLayered::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TextureLayered::_setv(StringName const&, Variant const&) */undefined8 TextureLayered::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TextureLayered::_validate_propertyv(PropertyInfo&) const */void TextureLayered::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* TextureLayered::_property_can_revertv(StringName const&) const */undefined8 TextureLayered::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* TextureLayered::_property_get_revertv(StringName const&, Variant&) const */undefined8 TextureLayered::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TextureLayered::_notificationv(int, bool) */void TextureLayered::_notificationv(int param_1, bool param_2) {
   return;
}
/* Texture3D::is_class_ptr(void*) const */uint Texture3D::is_class_ptr(Texture3D *this, void *param_1) {
   return (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Texture::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d6, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d7, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Texture3D::_getv(StringName const&, Variant&) const */undefined8 Texture3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture3D::_setv(StringName const&, Variant const&) */undefined8 Texture3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture3D::_validate_propertyv(PropertyInfo&) const */void Texture3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Texture3D::_property_can_revertv(StringName const&) const */undefined8 Texture3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Texture3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 Texture3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Texture3D::_notificationv(int, bool) */void Texture3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<Ref<Image>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Image>,int>::_gen_argument_type(MethodBindTRC<Ref<Image>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<Image>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<Image>,int>::get_argument_meta(MethodBindTRC<Ref<Image>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<TextureLayered::LayeredType>::_gen_argument_type(int) const */undefined8 MethodBindTRC<TextureLayered::LayeredType>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<TextureLayered::LayeredType>::get_argument_meta(int) const */undefined8 MethodBindTRC<TextureLayered::LayeredType>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<TypedArray<Image>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<TypedArray<Image>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTRC<TypedArray<Image>>::get_argument_meta(int) const */undefined8 MethodBindTRC<TypedArray<Image>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Image::Format>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Image::Format>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<Image::Format>::get_argument_meta(int) const */undefined8 MethodBindTRC<Image::Format>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Resource>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Resource>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Resource>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Resource>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Image>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Image>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Image>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Image>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::get_argument_meta(int)
   const */undefined8 MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::get_argument_meta(int) const */undefined8 MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::get_argument_meta(int) const */undefined8 MethodBindTC<RID,Vector2_const&,Color_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector2>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector2>::_gen_argument_type(int param_1) {
   return 5;
}
/* MethodBindTRC<Vector2>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector2>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::_gen_argument_type(int)
   const */undefined8 MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::_gen_argument_type(MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 6 ) && ( uVar1 = 0x17 ),param_1 != 0 )) {
      uVar1 = 0x14;
      if (param_1 != 3) {
         uVar1 = 1;
      }

      return uVar1;
   }

   return uVar1;
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::_gen_argument_type(int) const */undefined8 MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::_gen_argument_type(MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( ( (uint)param_1 < 5 ) && ( uVar1 = 0x17 ),param_1 != 0 ) ) && ( uVar1 = param_1 != 1 )) {
      uVar1 = 1;
      if (param_1 == 3) {
         uVar1 = 0x14;
      }

      return uVar1;
   }

   return uVar1;
}
/* Texture::~Texture() */void Texture::~Texture(Texture *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   return;
}
/* Texture::~Texture() */void Texture::~Texture(Texture *this) {
   *(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x240);
   return;
}
/* Texture3D::~Texture3D() */void Texture3D::~Texture3D(Texture3D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011ce18;
   if (bVar1) {
      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a4;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a4;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a4;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a4;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e5a4;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010e5a4:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   return;
}
/* Texture2D::~Texture2D() */void Texture2D::~Texture2D(Texture2D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011cbe8;
   if (bVar1) {
      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e6b7;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010e6b7:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   return;
}
/* TextureLayered::~TextureLayered() */void TextureLayered::~TextureLayered(TextureLayered *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011d028;
   if (bVar1) {
      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010e7c7;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010e7c7:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d238;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d238;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d298;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d298;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d2f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d2f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Vector2_const&,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Vector2_const&,Color_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d358;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Vector2_const&,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Vector2_const&,Color_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d358;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d3b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d3b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d418;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d418;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d478;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d478;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d4d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d4d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Image::Format>::~MethodBindTRC() */void MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d538;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Image::Format>::~MethodBindTRC() */void MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d538;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d598;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d598;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC() */void MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC(MethodBindTRC<TextureLayered::LayeredType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d5f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC() */void MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC(MethodBindTRC<TextureLayered::LayeredType> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d5f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Image>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d658;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Image>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011d658;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = memcpy;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::_gen_argument_type(int) const */undefined8 MethodBindTC<RID,Vector2_const&,Color_const&,bool>::_gen_argument_type(MethodBindTC<RID,Vector2_const&,Color_const&,bool> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( ( (uint)param_1 < 4 ) && ( uVar1 = 0x17 ),param_1 != 0 ) ) && ( uVar1 = param_1 != 1 )) {
      uVar1 = 0x14;
   }

   return uVar1;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Texture3D::_bind_methods() [clone .cold] */void Texture3D::_bind_methods(void) {
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
/* TextureLayered::_bind_methods() [clone .cold] */void TextureLayered::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<Image>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Texture3D::get_data() const [clone .cold] */void Texture3D::get_data(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Texture2D::get_save_class() const */Texture2D * __thiscall Texture2D::get_save_class(Texture2D *this){
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
/* Texture3D::~Texture3D() */void Texture3D::~Texture3D(Texture3D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011ce18;
   if (bVar1) {
      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f204;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f204;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f204;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f204;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f204;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010f204:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2d0);
   return;
}
/* Texture2D::~Texture2D() */void Texture2D::~Texture2D(Texture2D *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011cbe8;
   if (bVar1) {
      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f327;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010f327:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2e8);
   return;
}
/* TextureLayered::~TextureLayered() */void TextureLayered::~TextureLayered(TextureLayered *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_0011d028;
   if (bVar1) {
      if (*(long*)( this + 0x2d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 0x2b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 0x2a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 0x288 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010f447;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010f447:*(undefined***)this = &PTR__initialize_classv_0011ca10;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2e8);
   return;
}
/* Texture2D::_get_class_namev() const */undefined8 *Texture2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f4a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f4a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture2D");
         goto LAB_0010f50e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture2D");
   LAB_0010f50e:return &_get_class_namev();
}
/* Texture::_get_class_namev() const */undefined8 *Texture::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f583:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f583;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture");
         goto LAB_0010f5ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture");
   LAB_0010f5ee:return &_get_class_namev();
}
/* TextureLayered::_get_class_namev() const */undefined8 *TextureLayered::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f673:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f673;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TextureLayered");
         goto LAB_0010f6de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TextureLayered");
   LAB_0010f6de:return &_get_class_namev();
}
/* Texture3D::_get_class_namev() const */undefined8 *Texture3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010f753:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010f753;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3D");
         goto LAB_0010f7be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3D");
   LAB_0010f7be:return &_get_class_namev();
}
/* TextureLayered::get_class() const */void TextureLayered::get_class(void) {
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
/* Texture2D::get_class() const */void Texture2D::get_class(void) {
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
/* Texture3D::get_class() const */void Texture3D::get_class(void) {
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
/* Texture::get_class() const */void Texture::get_class(void) {
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
/* MethodBindTRC<TypedArray<Image>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<TypedArray<Image>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Image";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1c;
   puVar3[6] = 0x1f;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
         if (*(char**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(char**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x0010fc7c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010fc7c:local_58 = lVar2;
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
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
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

         goto joined_r0x0010fdfc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010fdfc:local_58 = lVar2;
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
/* MethodBindTRC<Ref<Resource>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Resource>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Resource";
   local_40 = 8;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_0010ff00;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010ff00:lVar2 = local_58;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
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

         goto joined_r0x0011011c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011011c:local_58 = lVar2;
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
/* MethodBindTRC<Vector2>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector2>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 5;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
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

         goto joined_r0x0011029c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011029c:local_58 = lVar2;
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
/* MethodBindTRC<Ref<Image>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Image>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "Image";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00110390;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }

   LAB_00110390:lVar2 = local_58;
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
      return puVar3;
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
   local_48 = &_LC4;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x0011068c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011068c:local_58 = lVar2;
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
   local_48 = &_LC4;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x0011080c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011080c:local_58 = lVar2;
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
/* GetTypeInfo<int, void>::get_class_info() */GetTypeInfo<int,void> * __thiscall
GetTypeInfo<int,void>::get_class_info(GetTypeInfo<int,void> *this){
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
   local_48 = &_LC4;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x0011098c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0011098c:local_58 = lVar2;
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
/* GetTypeInfo<Vector2, void>::get_class_info() */GetTypeInfo<Vector2,void> * __thiscall
GetTypeInfo<Vector2,void>::get_class_info(GetTypeInfo<Vector2,void> *this){
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 5;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x00110b0c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00110b0c:local_58 = lVar2;
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
/* GetTypeInfo<Rect2, void>::get_class_info() */GetTypeInfo<Rect2,void> * __thiscall
GetTypeInfo<Rect2,void>::get_class_info(GetTypeInfo<Rect2,void> *this){
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 7;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x00110c8c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00110c8c:local_58 = lVar2;
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
/* GetTypeInfo<Color, void>::get_class_info() */GetTypeInfo<Color,void> * __thiscall
GetTypeInfo<Color,void>::get_class_info(GetTypeInfo<Color,void> *this){
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x14;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x00110e0c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00110e0c:local_58 = lVar2;
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
/* GetTypeInfo<RID, void>::get_class_info() */GetTypeInfo<RID,void> * __thiscall
GetTypeInfo<RID,void>::get_class_info(GetTypeInfo<RID,void> *this){
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
   local_48 = &_LC4;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x17;
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
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
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

         goto joined_r0x00110f8c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00110f8c:local_58 = lVar2;
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
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0011104f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0011104f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00111103;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00111103;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==((String*)param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_00111103:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture::is_class(String const&) const */undefined8 Texture::is_class(Texture *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
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
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_001112af;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_001112af:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_00111363;
   }

   cVar6 = String::operator ==((String*)param_1, "Texture");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
         lVar5 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar1 = (long*)( local_60 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         if (cVar6 != '\0') goto LAB_00111363;
      }

      cVar6 = String::operator ==((String*)param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar8;
         }

         goto LAB_001114a8;
      }

   }

   LAB_00111363:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001114a8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* TextureLayered::is_class(String const&) const */undefined8 TextureLayered::is_class(TextureLayered *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0011151f;
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

      LAB_0011151f:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001115d3;
   }

   cVar5 = String::operator ==((String*)param_1, "TextureLayered");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Texture::is_class((Texture*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001115d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture3D::is_class(String const&) const */undefined8 Texture3D::is_class(Texture3D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0011169f;
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

      LAB_0011169f:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00111753;
   }

   cVar5 = String::operator ==((String*)param_1, "Texture3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Texture::is_class((Texture*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00111753:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture2D::is_class(String const&) const */undefined8 Texture2D::is_class(Texture2D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0011181f;
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

      LAB_0011181f:cVar5 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001118d3;
   }

   cVar5 = String::operator ==((String*)param_1, "Texture2D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Texture::is_class((Texture*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001118d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = memcpy;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x10 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = plVar1[-1];
         *(undefined8*)( this + 0x10 ) = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }

   return;
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
/* GetTypeInfo<Ref<Image>, void>::get_class_info() */GetTypeInfo<Ref<Image>,void> * __thiscall
GetTypeInfo<Ref<Image>,void>::get_class_info(GetTypeInfo<Ref<Image>,void> *this){
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
   local_48 = "Image";
   local_40 = 5;
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
         goto LAB_00111e90;
      }

   }

   StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
   if (*(char**)( this + 0x10 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( this + 0x10 ) = local_48;
   }

   LAB_00111e90:lVar2 = local_58;
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
/* GetTypeInfo<TypedArray<Image>, void>::get_class_info() */GetTypeInfo<TypedArray<Image>,void> * __thiscall
GetTypeInfo<TypedArray<Image>,void>::get_class_info(GetTypeInfo<TypedArray<Image>,void> *this){
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
   local_48 = "Image";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 0x1c;
   *(undefined4*)( this + 0x18 ) = 0x1f;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (CowData<char32_t>*)( this + 0x20 ), false);
         if (*(char**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(char**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x001120ac;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001120ac:local_58 = lVar2;
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
/* Texture::_initialize_classv() */void Texture::_initialize_classv(void) {
   if (initialize_class() == '\0') {
      initialize_class();
      return;
   }

   return;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
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
   if (local_90 == 0) {
      LAB_001122c5:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001122c5;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x001122e2;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x001122e2:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)pLVar5;
   lVar2 = plVar1[1];
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
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
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a0;
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
      LAB_001126bd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001126bd;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001126df;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001126df:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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
/* Texture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Texture::_get_property_listv(Texture *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
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
   local_78 = "Texture";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Texture";
   local_98 = 0;
   local_70 = 7;
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
      LAB_00112ad8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00112ad8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00112afa;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00112afa:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
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

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Texture", false);
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
/* Texture3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Texture3D::_get_property_listv(Texture3D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   long in_FS_OFFSET;
   StringName *local_a0;
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
      Texture::_get_property_listv((Texture*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Texture3D";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Texture3D";
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
   if (local_90 == 0) {
      LAB_00112ef0:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00112ef0;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00112f12;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00112f12:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
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

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a0);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
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

   StringName::StringName((StringName*)&local_78, "Texture3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Texture::_get_property_listv((Texture*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Texture2D::_get_property_listv(Texture2D *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a0;
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
      Texture::_get_property_listv((Texture*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Texture2D";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Texture2D";
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
   if (local_90 == 0) {
      LAB_00113305:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00113305;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00113327;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00113327:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a0 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a0);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   StringName::StringName((StringName*)&local_78, "Texture2D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Texture::_get_property_listv((Texture*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TextureLayered::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void TextureLayered::_get_property_listv(TextureLayered *this, List *param_1, bool param_2) {
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
      Texture::_get_property_listv((Texture*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "TextureLayered";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "TextureLayered";
   local_98 = 0;
   local_70 = 0xe;
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
      LAB_00113730:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00113730;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011374d;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0011374d:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
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

   StringName::StringName((StringName*)&local_78, "TextureLayered", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Texture::_get_property_listv((Texture*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Image>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_a8;
   long local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   char *local_68;
   undefined8 local_60;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_98 = 0;
      local_90 = (undefined1[16])0x0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_68);
      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar2 = local_90._0_8_;
      uVar3 = local_90._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(undefined8*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_00113a94;
   }

   local_a8 = 0;
   local_a0 = 0;
   local_68 = "Image";
   local_60 = 5;
   String::parse_latin1((StrRange*)&local_a0);
   local_98 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00113b97:StringName::StringName((StringName*)&local_68, (CowData<char32_t>*)( puVar4 + 8 ), false);
      if (*(char**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar4 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_00113b97;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_a8);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   LAB_00113a94:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<Texture2D, Vector2>(Vector2 (Texture2D::*)() const) */MethodBind *create_method_bind<Texture2D,Vector2>(_func_Vector2 *param_1) {
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
   *(_func_Vector2**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d298;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Texture2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture2D, RID, Vector2 const&, Color const&, bool>(void
   (Texture2D::*)(RID, Vector2 const&, Color const&, bool) const) */MethodBind *create_method_bind<Texture2D,RID,Vector2_const&,Color_const&,bool>(_func_void_RID_Vector2_ptr_Color_ptr_bool *param_1) {
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
   *(_func_void_RID_Vector2_ptr_Color_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d358;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "Texture2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture2D, RID, Rect2 const&, bool, Color const&, bool>(void
   (Texture2D::*)(RID, Rect2 const&, bool, Color const&, bool) const) */MethodBind *create_method_bind<Texture2D,RID,Rect2_const&,bool,Color_const&,bool>(_func_void_RID_Rect2_ptr_bool_Color_ptr_bool *param_1) {
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
   *(_func_void_RID_Rect2_ptr_bool_Color_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d3b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "Texture2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture2D, RID, Rect2 const&, Rect2 const&, Color const&, bool,
   bool>(void (Texture2D::*)(RID, Rect2 const&, Rect2 const&, Color const&, bool, bool) const) */MethodBind *create_method_bind<Texture2D,RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>(_func_void_RID_Rect2_ptr_Rect2_ptr_Color_ptr_bool_bool *param_1) {
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
   *(_func_void_RID_Rect2_ptr_Rect2_ptr_Color_ptr_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d418;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "Texture2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture2D, Ref<Image>>(Ref<Image> (Texture2D::*)() const) */MethodBind *create_method_bind<Texture2D,Ref<Image>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d478;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Texture2D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture3D, Image::Format>(Image::Format (Texture3D::*)() const) */MethodBind *create_method_bind<Texture3D,Image::Format>(_func_Format *param_1) {
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
   *(_func_Format**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d538;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Texture3D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture3D, TypedArray<Image>>(TypedArray<Image> (Texture3D::*)()
   const) */MethodBind *create_method_bind<Texture3D,TypedArray<Image>>(_func_TypedArray *param_1) {
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
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d598;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Texture3D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<Texture3D, Ref<Resource>>(Ref<Resource> (Texture3D::*)() const) */MethodBind *create_method_bind<Texture3D,Ref<Resource>>(_func_Ref *param_1) {
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
   *(_func_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d4d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "Texture3D";
   local_30 = 9;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<TextureLayered,
   TextureLayered::LayeredType>(TextureLayered::LayeredType (TextureLayered::*)() const) */MethodBind *create_method_bind<TextureLayered,TextureLayered::LayeredType>(_func_LayeredType *param_1) {
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
   *(_func_LayeredType**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d5f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TextureLayered";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* MethodBind* create_method_bind<TextureLayered, Ref<Image>, int>(Ref<Image>
   (TextureLayered::*)(int) const) */MethodBind *create_method_bind<TextureLayered,Ref<Image>,int>(_func_Ref_int *param_1) {
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
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011d658;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TextureLayered";
   local_30 = 0xe;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (StrRange*)&local_40, false);
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
/* GetTypeInfo<Image::Format, void>::get_class_info() */GetTypeInfo<Image::Format,void> * __thiscall
GetTypeInfo<Image::Format,void>::get_class_info(GetTypeInfo<Image::Format,void> *this){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "Image::Format";
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x114898);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00114983;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00114983:CowData<String>::_unref((CowData<String>*)&local_50);
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

   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture3D::_initialize_classv() */void Texture3D::_initialize_classv(void) {
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
      if (Texture::initialize_class() == '\0') {
         Texture::initialize_class();
      }

      local_48 = 0;
      local_38 = "Texture";
      local_30 = 7;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "Texture3D";
      local_50 = 0;
      local_30 = 9;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
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

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TextureLayered::LayeredType>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<TextureLayered::LayeredType>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "TextureLayered::LayeredType";
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x114898);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar3 = lVar5 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00114db3;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar5, "p_index", "size()", "", false, true);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00114db3:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_68, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<TextureLayered::LayeredType, void>::get_class_info() */GetTypeInfo<TextureLayered::LayeredType,void> * __thiscall
GetTypeInfo<TextureLayered::LayeredType,void>::get_class_info
          (GetTypeInfo<TextureLayered::LayeredType,void> *this){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_48 = "TextureLayered::LayeredType";
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_70);
   String::split(local_58, SUB81((StrRange*)&local_70, 0), 0x114898);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_68, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00115053;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00115053:CowData<String>::_unref((CowData<String>*)&local_50);
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

   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Image::Format>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Image::Format>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_48 = "Image::Format";
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_68);
   String::split(local_58, SUB81((StrRange*)&local_68, 0), 0x114898);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_40 = 1;
      local_48 = ".";
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = -2;
         lVar5 = 0;
      }
 else {
         lVar5 = *(long*)( local_50 + -8 );
         lVar3 = lVar5 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)&local_70, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_001152f3;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar5, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = ".";
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_001152f3:CowData<String>::_unref((CowData<String>*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_70, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
      StringName::unref();
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      LAB_00115850:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00115850;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00115729:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00115729;
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
      goto LAB_001158a6;
   }

   if (lVar10 == lVar7) {
      LAB_001157cf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001158a6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001157ba;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001157cf;
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
   LAB_001157ba:puVar9[-1] = param_1;
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
      LAB_00115c40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00115c40;
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
            goto LAB_00115b51;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00115b51:puVar7[-1] = param_1;
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
/* TextureLayered::_initialize_classv() */void TextureLayered::_initialize_classv(void) {
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
      if (Texture::initialize_class() == '\0') {
         Texture::initialize_class();
      }

      local_48 = 0;
      local_38 = "Texture";
      local_30 = 7;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "TextureLayered";
      local_50 = 0;
      local_30 = 0xe;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
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

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture2D::_initialize_classv() */void Texture2D::_initialize_classv(void) {
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
      if (Texture::initialize_class() == '\0') {
         Texture::initialize_class();
      }

      local_48 = 0;
      local_38 = "Texture";
      local_30 = 7;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "Texture2D";
      local_50 = 0;
      local_30 = 9;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
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

      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = memcpy;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* CowData<Ref<Image> >::_unref() */void CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this) {
   long *plVar1;
   long lVar2;
   Image *pIVar3;
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
      LAB_00116095:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pIVar3 = (Image*)*plVar6;
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
               memdelete<Image>(pIVar3);
               if (lVar2 == lVar7) break;
               goto LAB_00116095;
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
/* CowData<Ref<Image> >::_realloc(long) */undefined8 CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this, long param_1) {
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
/* WARNING: Removing unreachable block (ram,0x001162e8) *//* WARNING: Removing unreachable block (ram,0x0011647d) *//* WARNING: Removing unreachable block (ram,0x00116489) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<TextureLayered::LayeredType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<TextureLayered::LayeredType>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116680;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00116680:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TextureLayered::LayeredType>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<TextureLayered::LayeredType>::validated_call(MethodBindTRC<TextureLayered::LayeredType> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116924;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00116924:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TextureLayered::LayeredType>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<TextureLayered::LayeredType>::ptrcall(MethodBindTRC<TextureLayered::LayeredType> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116ae3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_00116ae3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<TypedArray<Image>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116d20;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )((Array*)&local_58);
         Variant::Variant((Variant*)local_48, (Array*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Array::~Array((Array*)&local_58);
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

   LAB_00116d20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Image::Format>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Image::Format>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116fb0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00116fb0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Image::Format>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Image::Format>::validated_call(MethodBindTRC<Image::Format> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001171c4;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_001171c4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Image::Format>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Image::Format>::ptrcall(MethodBindTRC<Image::Format> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117373;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_00117373:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Image>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   char cVar2;
   Variant *pVVar3;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1164d8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001175d0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar3 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               memdelete<Image>((Image*)local_58);
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

   LAB_001175d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar2 = param_2[0x23];
         if (pVVar2 == (Variant*)0x0) {
            pVVar2 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar2 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011781c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ) + -1 );
   }

   ( *pcVar1 )((long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8, *(long*)( param_3 + 0x10 ) + 8, *(long*)( param_3 + 0x18 ) + 8, *(undefined1*)( *(long*)( param_3 + 0x20 ) + 8 ), *(undefined1*)( *(long*)( param_3 + 0x28 ) + 8 ));
   LAB_0011781c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::ptrcall(Object*, void
   const**, void*) const */void MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar2 = (long*)param_2[0x23];
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar2 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x1bf, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117a0b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( param_1 + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((long*)( *(long*)( param_1 + 0x60 ) + (long)param_2 ), **param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ), *(undefined8*)( (long)param_3 + 0x18 ), **(char**)( (long)param_3 + 0x20 ) != '\0', **(char**)( (long)param_3 + 0x28 ) != '\0');
   LAB_00117a0b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00117d63;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00117c04. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8, *(undefined1*)( *(long*)( param_3 + 0x10 ) + 8 ), *(long*)( param_3 + 0x18 ) + 8, *(undefined1*)( *(long*)( param_3 + 0x20 ) + 8 ));
      return;
   }

   LAB_00117d63:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x1bf, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00117f69;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x00117df2. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ), **(char**)( (long)param_3 + 0x10 ) != '\0', *(undefined8*)( (long)param_3 + 0x18 ), **(char**)( (long)param_3 + 0x20 ) != '\0');
      return;
   }

   LAB_00117f69:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTC<RID,Vector2_const&,Color_const&,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   Variant *pVVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_48 == *(char**)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x1b4, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0011813f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00117fec. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ), *(long*)( param_3 + 8 ) + 8, *(long*)( param_3 + 0x10 ) + 8, *(undefined1*)( *(long*)( param_3 + 0x18 ) + 8 ));
      return;
   }

   LAB_0011813f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTC<RID,Vector2_const&,Color_const&,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar1) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x1bf, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00118341;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x001181c6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, *(undefined8*)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ), **(char**)( (long)param_3 + 0x18 ) != '\0');
      return;
   }

   LAB_00118341:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   bool bVar2;
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118410;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00118410:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118622;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_00118622:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001187d1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined1*)param_3 = uVar1;
   LAB_001187d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector2>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118a10;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         local_50 = ( *(code*)pVVar2 )();
         Variant::Variant((Variant*)local_48, (Vector2*)&local_50);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00118a10:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector2>::validated_call(MethodBindTRC<Vector2> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118c24;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_00118c24:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector2>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector2>::ptrcall(MethodBindTRC<Vector2> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118dd3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar3;
   LAB_00118dd3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119000;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00119000:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119214;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00119214:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001193c3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_001193c3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Image>>::ptrcall(MethodBindTRC<Ref<Image>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Image *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Image *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Image*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Image*)0x1164d8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001195e6;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Image*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Image*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_001195e6;
      *(undefined8*)param_3 = 0;
      goto LAB_00119629;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00119629;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00119629:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Image*)0x0) goto LAB_001195e6;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      memdelete<Image>(local_48);
   }

   LAB_001195e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Image>,int>::ptrcall(MethodBindTRC<Ref<Image>,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Image *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Image*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Image*)0x1164d8;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119889;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Image*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   if (local_48 == (Image*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00119889;
      *(undefined8*)param_3 = 0;
      goto LAB_001198d1;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_001198d1;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_001198d1:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Image*)0x0) goto LAB_00119889;
      }

   }

   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      memdelete<Image>(local_48);
   }

   LAB_00119889:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<TypedArray<Image>>::validated_call(MethodBindTRC<TypedArray<Image>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x1164d8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119ae9;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_00119ae9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<TypedArray<Image>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<TypedArray<Image>>::ptrcall(MethodBindTRC<TypedArray<Image>> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar2 = *(long**)( param_1 + 0x118 );
         if (plVar2 == (long*)0x0) {
            plVar2 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x1164d8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119cba;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_00119cba:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Resource>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   char cVar3;
   Variant *pVVar4;
   long *plVar5;
   undefined4 in_register_00000014;
   long *plVar6;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
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

      if (local_58 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1164d8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119f40;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
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

         ( *(code*)pVVar4 )(&local_58);
         Variant::Variant((Variant*)local_48, local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         if (local_58 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            pOVar2 = local_58;
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(local_58);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

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

   LAB_00119f40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Resource>>::ptrcall(MethodBindTRC<Ref<Resource>> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *extraout_RDX;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x1164d8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a1c6;
      }

      param_2 = (void**)local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
         param_2 = (void**)extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar2 );
   }

   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0011a1c6;
      *(undefined8*)param_3 = 0;
      goto LAB_0011a209;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011a209;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011a209:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011a1c6;
      }

   }

   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   LAB_0011a1c6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<Ref<Image>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (Object*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x1164d8;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a520;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011a560;
         LAB_0011a550:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011a560:uVar7 = 4;
            goto LAB_0011a515;
         }

         if (in_R8D == 1) goto LAB_0011a550;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )(&local_58, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (local_58 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            memdelete<Image>((Image*)local_58);
         }

      }

   }
 else {
      uVar7 = 3;
      LAB_0011a515:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011a520:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   char cVar4;
   bool bVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
   uint uVar11;
   int iVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   undefined8 local_78[2];
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar10 = (long*)plVar13[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
         }

      }
 else {
         plVar10 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011aa22;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar15 = 0;
      }
 else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar15;
      }

      if ((int)( 5 - in_R8D ) <= iVar12) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar11 = iVar12 + -5 + (int)lVar8;
               if (lVar15 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
            }

            local_68[lVar8] = pVVar14;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 5 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[4], 1);
         uVar9 = _LC124;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         bVar5 = Variant::operator_cast_to_bool(local_68[4]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[3], 0x14);
         uVar9 = _LC125;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         local_88[0] = Variant::operator_cast_to_Color(local_68[3]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[2], 1);
         uVar9 = _LC126;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         bVar6 = Variant::operator_cast_to_bool(local_68[2]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[1], 7);
         uVar9 = _LC127;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         local_78[0] = Variant::operator_cast_to_Rect2(local_68[1]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x17);
         uVar9 = _LC128;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         uVar9 = Variant::operator_cast_to_RID(local_68[0]);
         ( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), uVar9, local_78, bVar6, local_88, bVar5);
         goto LAB_0011aa22;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 5;
   LAB_0011aa22:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   char cVar4;
   bool bVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
   int iVar11;
   uint uVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   long lVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_c8;
   undefined8 local_c0;
   char *local_b8;
   undefined8 local_b0;
   undefined8 local_a8[2];
   undefined8 local_98[2];
   undefined8 local_88[2];
   Variant *local_78[7];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_b8, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar10 = (long*)plVar13[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
         }

      }
 else {
         plVar10 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_b8 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_b8 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_c0 = 0;
         local_b0 = 0x35;
         String::parse_latin1((StrRange*)&local_c0);
         vformat<StringName>((StringName*)&local_b8, (StrRange*)&local_c0, &local_c8);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_b8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011aeaa;
      }

      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 7) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar11 = 0;
         lVar14 = 0;
      }
 else {
         lVar14 = *(long*)( pVVar2 + -8 );
         iVar11 = (int)lVar14;
      }

      if ((int)( 6 - in_R8D ) <= iVar11) {
         lVar8 = 0;
         do {
            while ((int)in_R8D <= (int)lVar8) {
               uVar12 = iVar11 + -6 + (int)lVar8;
               if (lVar14 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar14, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               local_78[lVar8] = pVVar2 + (ulong)uVar12 * 0x18;
               lVar8 = lVar8 + 1;
               if (lVar8 == 6) goto LAB_0011acf0;
            }
;
            local_78[lVar8] = *(Variant**)( param_4 + lVar8 * 8 );
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 6 );
         LAB_0011acf0:*in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[5], 1);
         uVar9 = _LC129;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         bVar5 = Variant::operator_cast_to_bool(local_78[5]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[4], 1);
         uVar9 = _LC124;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         bVar6 = Variant::operator_cast_to_bool(local_78[4]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[3], 0x14);
         uVar9 = _LC125;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         local_a8[0] = Variant::operator_cast_to_Color(local_78[3]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[2], 7);
         uVar9 = _LC130;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         local_98[0] = Variant::operator_cast_to_Rect2(local_78[2]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[1], 7);
         uVar9 = _LC127;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         local_88[0] = Variant::operator_cast_to_Rect2(local_78[1]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_78[0], 0x17);
         uVar9 = _LC128;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar9;
         }

         uVar9 = Variant::operator_cast_to_RID(local_78[0]);
         ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), uVar9, local_88, local_98, local_a8, bVar6, bVar5);
         goto LAB_0011aeaa;
      }

      uVar7 = 4;
   }
 else {
      uVar7 = 3;
   }

   *in_R9 = uVar7;
   in_R9[2] = 6;
   LAB_0011aeaa:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTC<RID,Vector2_const&,Color_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   char cVar4;
   bool bVar5;
   undefined4 uVar6;
   long lVar7;
   undefined8 uVar8;
   long *plVar9;
   uint uVar10;
   int iVar11;
   undefined4 in_register_00000014;
   long *plVar12;
   Variant *pVVar13;
   long lVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   undefined8 local_80;
   undefined8 local_78[2];
   Variant *local_68[5];
   long local_40;
   plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar12[1] == 0) {
         plVar9 = (long*)plVar12[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
         }

      }
 else {
         plVar9 = (long*)( plVar12[1] + 0x20 );
      }

      if (local_98 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC118, "./core/object/method_bind.h", 0x1a8, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b292;
      }

      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar11 = 0;
         lVar14 = 0;
      }
 else {
         lVar14 = *(long*)( pVVar2 + -8 );
         iVar11 = (int)lVar14;
      }

      if ((int)( 4 - in_R8D ) <= iVar11) {
         lVar7 = 0;
         do {
            if ((int)lVar7 < (int)in_R8D) {
               pVVar13 = *(Variant**)( param_4 + lVar7 * 8 );
            }
 else {
               uVar10 = iVar11 + -4 + (int)lVar7;
               if (lVar14 <= (int)uVar10) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar14, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar13 = pVVar2 + (ulong)uVar10 * 0x18;
            }

            local_68[lVar7] = pVVar13;
            lVar7 = lVar7 + 1;
         }
 while ( lVar7 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar8 = _LC131;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         bVar5 = Variant::operator_cast_to_bool(local_68[3]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[2], 0x14);
         uVar8 = _LC132;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         local_78[0] = Variant::operator_cast_to_Color(local_68[2]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[1], 5);
         uVar8 = _LC133;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         local_80 = Variant::operator_cast_to_Vector2(local_68[1]);
         cVar4 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x17);
         uVar8 = _LC128;
         if (cVar4 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar8;
         }

         uVar8 = Variant::operator_cast_to_RID(local_68[0]);
         ( *(code*)pVVar15 )((Variant*)( (long)plVar12 + (long)pVVar1 ), uVar8, &local_80, local_78, bVar5);
         goto LAB_0011b292;
      }

      uVar6 = 4;
   }
 else {
      uVar6 = 3;
   }

   *in_R9 = uVar6;
   in_R9[2] = 4;
   LAB_0011b292:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Image>>::validated_call(MethodBindTRC<Ref<Image>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   code *pcVar2;
   long *plVar3;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Image *local_50;
   Variant **local_48;
   Image *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x1164d8;
         local_50 = (Image*)0x0;
         local_40 = (Image*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b516;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar2 = *(code**)( pcVar2 + (long)param_2 + -1 );
   }

   ( *pcVar2 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Image*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Image*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(local_50);
      }

   }

   LAB_0011b516:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Image>, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Image>,int>::validated_call(MethodBindTRC<Ref<Image>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   code *pcVar2;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   Image *local_50;
   char *local_48;
   Image *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Image*)0x0;
         local_40 = (Image*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b72c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar2 )(&local_50, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (local_50 == (Image*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Image*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(local_50);
      }

   }

   LAB_0011b72c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Resource>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Resource>>::validated_call(MethodBindTRC<Ref<Resource>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   Variant **local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x1164d8;
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b956;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(Variant***)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0011b956:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Rect2 const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Rect2_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   CowData<char32_t> local_70[8];
   ulong uStack_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 != param_1) goto LAB_0011bb39;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC4;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = uStack_68;
   _local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 7);
   local_60 = 0;
   local_58 = 0;
   _local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0011bc3d:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011bc3d;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (uStack_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         uStack_68 = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =(param_3, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( uStack_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_70);
   iVar2 = *param_2;
   LAB_0011bb39:*param_2 = iVar2 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info_helper<Color const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Color_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   CowData<char32_t> local_70[8];
   ulong uStack_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 != param_1) goto LAB_0011bd19;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC4;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = uStack_68;
   _local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x14);
   local_60 = 0;
   local_58 = 0;
   _local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0011be1d:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011be1d;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (uStack_68 == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         uStack_68 = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::operator =(param_3, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( uStack_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_70);
   iVar2 = *param_2;
   LAB_0011bd19:*param_2 = iVar2 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::_gen_argument_type_info(int param_1) {
   int iVar1;
   long lVar2;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *this;
   long in_FS_OFFSET;
   int local_7c;
   undefined4 local_78[2];
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   this(PropertyInfo * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)this = 0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 6;
   local_7c = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)local_78);
      PropertyInfo::operator =(this, (PropertyInfo*)local_78);
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_78);
   }

   local_7c = 1;
   call_get_argument_type_info_helper<Rect2_const&>(in_EDX, &local_7c, this);
   iVar1 = local_7c;
   if (in_EDX == local_7c) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_78);
      *(undefined4*)this = local_78[0];
      if (*(long*)( this + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( this + 8 ) = lVar2;
      }

      if (*(long*)( this + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( this + 0x10 ) = lVar2;
      }

      *(undefined4*)( this + 0x18 ) = local_60;
      if (*(long*)( this + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( this + 0x20 ) = lVar2;
      }

      *(undefined4*)( this + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_78);
   }

   local_7c = iVar1 + 1;
   call_get_argument_type_info_helper<Color_const&>(in_EDX, &local_7c, this);
   if (in_EDX == local_7c) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_78);
      *(undefined4*)this = local_78[0];
      if (*(long*)( this + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
         lVar2 = local_70;
         local_70 = 0;
         *(long*)( this + 8 ) = lVar2;
      }

      if (*(long*)( this + 0x10 ) != local_68) {
         StringName::unref();
         lVar2 = local_68;
         local_68 = 0;
         *(long*)( this + 0x10 ) = lVar2;
      }

      *(undefined4*)( this + 0x18 ) = local_60;
      if (*(long*)( this + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
         lVar2 = local_58;
         local_58 = 0;
         *(long*)( this + 0x20 ) = lVar2;
      }

      *(undefined4*)( this + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool,
   bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *this;
   long in_FS_OFFSET;
   int local_6c;
   undefined4 local_68[2];
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   this(PropertyInfo * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)this = 0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 6;
   local_6c = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)local_68);
      *(undefined4*)this = local_68[0];
      if (*(long*)( this + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( this + 8 ) = lVar1;
      }

      if (*(long*)( this + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( this + 0x10 ) = lVar1;
      }

      *(undefined4*)( this + 0x18 ) = local_50;
      if (*(long*)( this + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( this + 0x20 ) = lVar1;
      }

      *(undefined4*)( this + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_68);
   }

   local_6c = 1;
   call_get_argument_type_info_helper<Rect2_const&>(in_EDX, &local_6c, this);
   call_get_argument_type_info_helper<Rect2_const&>(in_EDX, &local_6c, this);
   call_get_argument_type_info_helper<Color_const&>(in_EDX, &local_6c, this);
   if (in_EDX == local_6c) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_68);
      *(undefined4*)this = local_68[0];
      if (*(long*)( this + 8 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( this + 8 ) = lVar1;
      }

      if (*(long*)( this + 0x10 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( this + 0x10 ) = lVar1;
      }

      *(undefined4*)( this + 0x18 ) = local_50;
      if (*(long*)( this + 0x20 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( this + 0x20 ) = lVar1;
      }

      *(undefined4*)( this + 0x28 ) = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_68);
   }
 else {
      local_6c = local_6c + 1;
      if (in_EDX == local_6c) {
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)local_68);
         PropertyInfo::operator =(this, (PropertyInfo*)local_68);
         PropertyInfo::~PropertyInfo((PropertyInfo*)local_68);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<RID, Vector2 const&, Color const&, bool>(int, PropertyInfo&) */void call_get_argument_type_info<RID,Vector2_const&,Color_const&,bool>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   long in_FS_OFFSET;
   int local_9c;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      GetTypeInfo<RID,void>::get_class_info((GetTypeInfo<RID,void>*)&local_78);
   }
 else {
      local_9c = 1;
      if (param_1 != 1) goto LAB_0011c39c;
      local_88 = 0;
      local_90 = 0;
      local_78 = &_LC4;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_70._8_8_;
      local_70 = auVar1 << 0x40;
      String::parse_latin1((StrRange*)&local_90);
      local_98 = 0;
      local_78 = (undefined*)CONCAT44(local_78._4_4_, 5);
      local_60 = 0;
      local_58 = 0;
      local_70 = (undefined1[16])0x0;
      if (local_90 == 0) {
         LAB_0011c500:local_50 = 6;
         StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 6;
         if (local_60 != 0x11) goto LAB_0011c500;
         StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
         if (local_70._8_8_ == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_70._8_8_ = local_80;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }

   }

   PropertyInfo::operator =(param_2, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011c39c:local_9c = 2;
   call_get_argument_type_info_helper<Color_const&>(param_1, &local_9c, param_2);
   if (param_1 == local_9c) {
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_78);
      PropertyInfo::operator =(param_2, (PropertyInfo*)&local_78);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTC<RID, Vector2 const&, Color const&, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindTC<RID,Vector2_const&,Color_const&,bool>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<RID,Vector2_const&,Color_const&,bool>(in_EDX, pPVar1);
   return pPVar1;
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Image>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>,int>::~MethodBindTRC(MethodBindTRC<Ref<Image>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC() */void MethodBindTRC<TextureLayered::LayeredType>::~MethodBindTRC(MethodBindTRC<TextureLayered::LayeredType> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<TypedArray<Image>>::~MethodBindTRC() */void MethodBindTRC<TypedArray<Image>>::~MethodBindTRC(MethodBindTRC<TypedArray<Image>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Image::Format>::~MethodBindTRC() */void MethodBindTRC<Image::Format>::~MethodBindTRC(MethodBindTRC<Image::Format> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Resource>>::~MethodBindTRC() */void MethodBindTRC<Ref<Resource>>::~MethodBindTRC(MethodBindTRC<Ref<Resource>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Image>>::~MethodBindTRC() */void MethodBindTRC<Ref<Image>>::~MethodBindTRC(MethodBindTRC<Ref<Image>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<RID, Rect2 const&, Rect2 const&, Color const&, bool, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,Rect2_const&,Color_const&,bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<RID, Rect2 const&, bool, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Rect2_const&,bool,Color_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTC<RID, Vector2 const&, Color const&, bool>::~MethodBindTC() */void MethodBindTC<RID,Vector2_const&,Color_const&,bool>::~MethodBindTC(MethodBindTC<RID,Vector2_const&,Color_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector2>::~MethodBindTRC() */void MethodBindTRC<Vector2>::~MethodBindTRC(MethodBindTRC<Vector2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* TextureLayered::~TextureLayered() */void TextureLayered::~TextureLayered(TextureLayered *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Texture2D::~Texture2D() */void Texture2D::~Texture2D(Texture2D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Texture3D::~Texture3D() */void Texture3D::~Texture3D(Texture3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Texture::~Texture() */void Texture::~Texture(Texture *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

