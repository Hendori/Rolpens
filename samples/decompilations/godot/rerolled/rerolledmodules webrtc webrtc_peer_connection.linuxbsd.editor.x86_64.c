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
/* WebRTCPeerConnection::create(bool) */RefCounted *WebRTCPeerConnection::create(bool param_1) {
   RefCounted *pRVar1;
   if (default_extension == 0) {
      if (create(bool)::first_print !='\0') {
         _err_print_error("create", "modules/webrtc/webrtc_peer_connection.cpp", 0x33, "No default WebRTC extension configured.", 0, 1);
         create(bool)::first_print =
         '\0';
      }

      pRVar1 = (RefCounted*)operator_new(0x288, "");
      RefCounted::RefCounted(pRVar1);
      *(undefined***)pRVar1 = &PTR__initialize_classv_00113b08;
      StringName::StringName((StringName*)( pRVar1 + 0x180 ), "_get_connection_state", false);
      pRVar1[0x188] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 400 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x198 ), "_get_gathering_state", false);
      pRVar1[0x1a0] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x1a8 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x1b0 ), "_get_signaling_state", false);
      pRVar1[0x1b8] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x1c0 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x1c8 ), "_initialize", false);
      pRVar1[0x1d0] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x1d8 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x1e0 ), "_create_data_channel", false);
      pRVar1[0x1e8] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x1f0 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x1f8 ), "_create_offer", false);
      pRVar1[0x200] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x208 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x210 ), "_set_remote_description", false);
      pRVar1[0x218] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x220 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x228 ), "_set_local_description", false);
      pRVar1[0x230] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x238 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x240 ), "_add_ice_candidate", false);
      pRVar1[0x248] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x250 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 600 ), "_poll", false);
      pRVar1[0x260] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x268 ) = 0;
      StringName::StringName((StringName*)( pRVar1 + 0x270 ), "_close", false);
      pRVar1[0x278] = (RefCounted)0x0;
      *(undefined8*)( pRVar1 + 0x280 ) = 0;
      Object::_initialize();
      if (param_1) {
         Object::_postinitialize();
      }

   }
 else {
      if (param_1) {
         pRVar1 = (RefCounted*)ClassDB::instantiate((StringName*)&default_extension);
      }
 else {
         pRVar1 = (RefCounted*)ClassDB::instantiate_without_postinitialization((StringName*)&default_extension);
      }

      if (pRVar1 != (RefCounted*)0x0) {
         pRVar1 = (RefCounted*)__dynamic_cast(pRVar1, &Object::typeinfo, &WebRTCPeerConnectionExtension::typeinfo, 0);
         return pRVar1;
      }

   }

   return pRVar1;
}
/* WebRTCPeerConnection::WebRTCPeerConnection() */void WebRTCPeerConnection::WebRTCPeerConnection(WebRTCPeerConnection *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_00113cc0;
   return;
}
/* WebRTCPeerConnection::~WebRTCPeerConnection() */void WebRTCPeerConnection::~WebRTCPeerConnection(WebRTCPeerConnection *this) {
   *(undefined***)this = &PTR__initialize_classv_001139a8;
   Object::~Object((Object*)this);
   return;
}
/* WebRTCPeerConnection::~WebRTCPeerConnection() */void WebRTCPeerConnection::~WebRTCPeerConnection(WebRTCPeerConnection *this) {
   *(undefined***)this = &PTR__initialize_classv_001139a8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* WebRTCPeerConnection::set_default_extension(StringName const&) */void WebRTCPeerConnection::set_default_extension(StringName *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   char cVar3;
   long in_FS_OFFSET;
   undefined8 local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_48 = "WebRTCPeerConnectionExtension";
   local_40 = 0x1d;
   String::parse_latin1((StrRange*)&local_50);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   cVar3 = ClassDB::is_parent_class(param_1, (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (cVar3 == '\0') {
      StringName::StringName((StringName*)&local_50, param_1);
      local_40 = 0x62;
      local_48 = "Can\'t make %s the default WebRTC extension since it does not extend WebRTCPeerConnectionExtension.";
      local_58 = 0;
      String::parse_latin1((StrRange*)&local_58);
      vformat<StringName>((StringName*)&local_48, &local_58, (StrRange*)&local_50);
      _err_print_error("set_default_extension", "modules/webrtc/webrtc_peer_connection.cpp", 0x2a, "Condition \"!ClassDB::is_parent_class(p_extension, WebRTCPeerConnectionExtension::get_class_static())\" is true.", (StringName*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

   }
 else {
      lVar2 = *(long*)param_1;
      if (lVar2 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      StringName::StringName((StringName*)&local_48, (String*)&local_50, true);
      if (default_extension == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         default_extension = local_48;
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

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebRTCPeerConnection::_bind_methods() */void WebRTCPeerConnection::_bind_methods(void) {
   char cVar1;
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
   undefined *puVar31;
   undefined *puVar32;
   undefined *puVar33;
   undefined *puVar34;
   undefined8 uVar35;
   MethodBind *pMVar36;
   uint uVar37;
   long *plVar38;
   long lVar39;
   long in_FS_OFFSET;
   PropertyInfo *local_378;
   StringName *local_358;
   StringName *local_308;
   StringName *local_300;
   StringName *local_2f8;
   long local_2e8;
   long local_2e0;
   long local_2d8;
   long local_2d0;
   long local_2c8;
   long local_2c0;
   long local_2b8;
   long local_2b0;
   long local_2a8;
   long local_2a0;
   long local_298;
   undefined8 local_290;
   char *local_288;
   int local_280;
   undefined8 local_278;
   undefined4 local_270;
   long local_268;
   long local_260;
   char *local_258;
   int local_250;
   long local_248;
   undefined4 local_240;
   long local_238;
   long local_230;
   undefined *local_228;
   int local_220;
   long local_218;
   undefined4 local_210;
   long local_208;
   undefined8 local_200;
   undefined *local_1f8;
   int local_1f0;
   undefined8 local_1e8;
   undefined4 local_1e0;
   char *local_1d8;
   long local_1d0;
   undefined *local_1c8;
   int local_1c0;
   long local_1b8;
   undefined4 local_1b0;
   char *local_1a8;
   undefined8 local_1a0;
   char *local_198;
   int local_190;
   undefined8 local_188;
   undefined4 local_180;
   char *local_178;
   undefined8 local_170;
   undefined1 local_168[16];
   undefined8 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138[2];
   undefined8 local_128;
   undefined8 local_120;
   undefined8 local_110;
   Variant *local_108;
   undefined8 local_100;
   undefined *local_f8;
   undefined *puStack_f0;
   undefined8 local_e8;
   undefined *local_d8;
   undefined *puStack_d0;
   undefined8 local_c8;
   Variant *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   undefined *local_98;
   undefined *puStack_90;
   undefined *local_88;
   undefined8 local_80;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   puVar34 = PTR__LC65_001142f8;
   puVar33 = PTR__LC64_001142f0;
   puVar32 = PTR__LC63_001142e8;
   puVar31 = PTR__LC62_001142e0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_100 = 0;
   local_108 = (Variant*)0x104c49;
   uVar37 = (uint)(Variant*)&local_78;
   local_78 = &local_108;
   D_METHODP((char*)&local_178, (char***)"set_default_extension", uVar37);
   local_1d8 = (char*)0x0;
   local_1a8 = "WebRTCPeerConnection";
   local_1a0 = 0x14;
   String::parse_latin1((StrRange*)&local_1d8);
   StringName::StringName((StringName*)&local_1a8, (String*)&local_1d8, false);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = (MethodBind*)operator_new(0x60, "");
   MethodBind::MethodBind(pMVar36);
   *(undefined***)pMVar36 = &PTR__gen_argument_type_00113e78;
   *(code**)( pMVar36 + 0x58 ) = set_default_extension;
   MethodBind::_generate_argument_types((int)pMVar36);
   *(undefined4*)( pMVar36 + 0x34 ) = 1;
   MethodBind::_set_static(SUB81(pMVar36, 0));
   StringName::operator =((StringName*)( pMVar36 + 0x18 ), (StringName*)&local_1a8);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_168._8_8_;
         local_168 = auVar4 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   Dictionary::Dictionary((Dictionary*)&local_1a8);
   local_100 = 0;
   local_108 = (Variant*)0x104c59;
   local_78 = &local_108;
   D_METHODP((char*)&local_178, (char***)"initialize", uVar37);
   Variant::Variant((Variant*)&local_78, (Dictionary*)&local_1a8);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_108 = (Variant*)&local_78;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error,Dictionary>((_func_Error_Dictionary*)0x169);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, &local_108, 1);
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

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_168._8_8_;
         local_168 = auVar5 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   Dictionary::~Dictionary((Dictionary*)&local_1a8);
   Dictionary::Dictionary((Dictionary*)&local_1a8);
   local_a8 = 0;
   auStack_70._0_8_ = &pcStack_b0;
   local_b8 = (Variant*)0x104c3b;
   pcStack_b0 = "options";
   local_78 = &local_b8;
   D_METHODP((char*)&local_178, (char***)"create_data_channel", uVar37);
   Variant::Variant((Variant*)&local_78, (Dictionary*)&local_1a8);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_b8 = (Variant*)&local_78;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Ref<WebRTCDataChannel>,String,Dictionary>((_func_Ref_String_Dictionary*)0x171);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, &local_b8, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_168._8_8_;
         local_168 = auVar6 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   Dictionary::~Dictionary((Dictionary*)&local_1a8);
   D_METHODP((char*)&local_178, (char***)"create_offer", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error>((_func_Error*)0x179);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_168._8_8_;
         local_168 = auVar7 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   local_c8 = 0;
   local_d8 = puVar33;
   puStack_d0 = puVar34;
   auStack_70._0_8_ = &puStack_d0;
   local_78 = (Variant**)&local_d8;
   D_METHODP((char*)&local_178, (char***)"set_local_description", uVar37);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error,String,String>((_func_Error_String_String*)0x189);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = local_168._8_8_;
         local_168 = auVar8 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   local_e8 = 0;
   local_f8 = puVar33;
   puStack_f0 = puVar34;
   auStack_70._0_8_ = &puStack_f0;
   local_78 = (Variant**)&local_f8;
   D_METHODP((char*)&local_178, (char***)"set_remote_description", uVar37);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error,String,String>((_func_Error_String_String*)0x181);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_168._8_8_;
         local_168 = auVar9 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   local_80 = 0;
   local_88 = &_LC75;
   local_98 = puVar31;
   puStack_90 = puVar32;
   auStack_70._8_8_ = &local_88;
   auStack_70._0_8_ = &puStack_90;
   local_78 = (Variant**)&local_98;
   D_METHODP((char*)&local_178, (char***)"add_ice_candidate", uVar37);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error,String,int,String>((_func_Error_String_int_String*)0x191);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_168._8_8_;
         local_168 = auVar10 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_178, (char***)&_LC77, 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,Error>((_func_Error*)0x199);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_168._8_8_;
         local_168 = auVar11 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_178, (char***)"close", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection>((_func_void*)0x1a1);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_168._8_8_;
         local_168 = auVar12 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_178, (char***)"get_connection_state", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::ConnectionState>((_func_ConnectionState*)0x151);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_168._8_8_;
         local_168 = auVar13 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_178, (char***)"get_gathering_state", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::GatheringState>((_func_GatheringState*)0x159);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = local_168._8_8_;
         local_168 = auVar14 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_178, (char***)"get_signaling_state", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar36 = create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::SignalingState>((_func_SignalingState*)0x161);
   ClassDB::bind_methodfi(1, pMVar36, false, (MethodDefinition*)&local_178, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   uVar35 = local_168._0_8_;
   if ((long*)local_168._0_8_ != (long*)0x0) {
      LOCK();
      plVar38 = (long*)( local_168._0_8_ + -0x10 );
      *plVar38 = *plVar38 + -1;
      UNLOCK();
      if (*plVar38 == 0) {
         if ((long*)local_168._0_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_168._0_8_ + -8 );
         lVar39 = 0;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = local_168._8_8_;
         local_168 = auVar15 << 0x40;
         plVar38 = (long*)uVar35;
         if (lVar2 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar38 != 0 )) {
                  StringName::unref();
               }

               lVar39 = lVar39 + 1;
               plVar38 = plVar38 + 1;
            }
 while ( lVar2 != lVar39 );
         }

         Memory::free_static((long*)( uVar35 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   local_268 = 0;
   local_178 = "";
   local_298 = 0;
   local_170 = 0;
   String::parse_latin1((StrRange*)&local_298);
   local_2a0 = 0;
   local_178 = "sdp";
   local_170 = 3;
   String::parse_latin1((StrRange*)&local_2a0);
   local_1d8 = (char*)CONCAT44(local_1d8._4_4_, 4);
   local_1d0 = 0;
   if (local_2a0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1d0, (CowData*)&local_2a0);
   }

   local_1c8 = (undefined*)0x0;
   local_1c0 = 0;
   local_1b8 = 0;
   if (local_298 == 0) {
      LAB_00101b4b:local_1b0 = 6;
      StringName::operator =((StringName*)&local_1c8, (StringName*)&local_268);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)&local_298);
      local_1b0 = 6;
      if (local_1c0 != 0x11) goto LAB_00101b4b;
      StringName::StringName((StringName*)&local_178, (String*)&local_1b8, false);
      if (local_1c8 == local_178) {
         if (( StringName::configured != '\0' ) && ( local_178 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_1c8 = local_178;
      }

   }

   local_358 = (StringName*)&local_1c8;
   local_378 = (PropertyInfo*)&local_268;
   local_2a8 = 0;
   local_178 = "";
   local_2b0 = 0;
   local_170 = 0;
   String::parse_latin1((StrRange*)&local_2b0);
   local_2b8 = 0;
   local_178 = "type";
   local_170 = 4;
   String::parse_latin1((StrRange*)&local_2b8);
   local_208 = CONCAT44(local_208._4_4_, 4);
   local_200 = 0;
   if (local_2b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_200, (CowData*)&local_2b8);
   }

   local_1f8 = (undefined*)0x0;
   local_1f0 = 0;
   local_1e8 = 0;
   if (local_2b0 == 0) {
      LAB_00101ce3:local_1e0 = 6;
      StringName::operator =((StringName*)&local_1f8, (StringName*)&local_2a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)&local_2b0);
      local_1e0 = 6;
      if (local_1f0 != 0x11) goto LAB_00101ce3;
      StringName::StringName((StringName*)&local_178, (String*)&local_1e8, false);
      if (local_1f8 == local_178) {
         if (( StringName::configured != '\0' ) && ( local_178 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_1f8 = local_178;
      }

   }

   local_2f8 = (StringName*)&local_1f8;
   local_238 = 0;
   local_178 = "session_description_created";
   local_170 = 0x1b;
   String::parse_latin1((StrRange*)&local_238);
   local_178 = (char*)0x0;
   local_170 = 0;
   local_158 = 0;
   local_150 = 0;
   local_148 = 6;
   local_140 = 1;
   local_138[0] = 0;
   local_128 = 0;
   local_120 = 0;
   local_110 = 0;
   local_168 = (undefined1[16])0x0;
   if (local_238 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)&local_238);
   }

   local_1a0 = 0;
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, local_1d8._0_4_);
   if (local_1d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1d0);
   }

   StringName::StringName((StringName*)&local_198, local_358);
   local_188 = 0;
   local_190 = local_1c0;
   if (local_1b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1b8);
   }

   local_180 = local_1b0;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_208);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   local_2c0 = 0;
   local_1a8 = "WebRTCPeerConnection";
   local_1a0 = 0x14;
   String::parse_latin1((StrRange*)&local_2c0);
   StringName::StringName((StringName*)&local_1a8, (String*)&local_2c0, false);
   ClassDB::add_signal((StringName*)&local_1a8, (MethodInfo*)&local_178);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b0);
   if (( StringName::configured != '\0' ) && ( local_2a8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
   if (( StringName::configured != '\0' ) && ( local_268 != 0 )) {
      StringName::unref();
   }

   local_2a8 = 0;
   local_178 = "";
   local_2b0 = 0;
   local_170 = 0;
   String::parse_latin1((StrRange*)&local_2b0);
   local_2b8 = 0;
   local_178 = "name";
   local_170 = 4;
   String::parse_latin1((StrRange*)&local_2b8);
   local_238 = CONCAT44(local_238._4_4_, 4);
   local_230 = 0;
   if (local_2b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_230, (CowData*)&local_2b8);
   }

   local_228 = (undefined*)0x0;
   local_220 = 0;
   local_218 = 0;
   if (local_2b0 == 0) {
      LAB_0010211b:local_210 = 6;
      StringName::operator =((StringName*)&local_228, (StringName*)&local_2a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_218, (CowData*)&local_2b0);
      local_210 = 6;
      if (local_220 != 0x11) goto LAB_0010211b;
      StringName::StringName((StringName*)&local_178, (String*)&local_218, false);
      if (local_228 == local_178) {
         if (( StringName::configured != '\0' ) && ( local_178 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_228 = local_178;
      }

   }

   local_300 = (StringName*)&local_228;
   local_2c0 = 0;
   local_178 = "";
   local_2c8 = 0;
   local_170 = 0;
   String::parse_latin1((StrRange*)&local_2c8);
   local_2d0 = 0;
   local_178 = "index";
   local_170 = 5;
   String::parse_latin1((StrRange*)&local_2d0);
   local_268 = CONCAT44(local_268._4_4_, 2);
   local_260 = 0;
   if (local_2d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_260, (CowData*)&local_2d0);
   }

   local_258 = (char*)0x0;
   local_250 = 0;
   local_248 = 0;
   if (local_2c8 == 0) {
      LAB_001022bb:local_240 = 6;
      StringName::operator =((StringName*)&local_258, (StringName*)&local_2c0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_248, (CowData*)&local_2c8);
      local_240 = 6;
      if (local_250 != 0x11) goto LAB_001022bb;
      StringName::StringName((StringName*)&local_178, (String*)&local_248, false);
      if (local_258 == local_178) {
         if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_258 = local_178;
      }

   }

   local_308 = (StringName*)&local_258;
   local_2d8 = 0;
   local_178 = "";
   local_2e0 = 0;
   local_170 = 0;
   String::parse_latin1((StrRange*)&local_2e0);
   local_2e8 = 0;
   local_178 = "media";
   local_170 = 5;
   String::parse_latin1((StrRange*)&local_2e8);
   local_298 = CONCAT44(local_298._4_4_, 4);
   local_290 = 0;
   if (local_2e8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_290, (CowData*)&local_2e8);
   }

   local_288 = (char*)0x0;
   local_280 = 0;
   local_278 = 0;
   if (local_2e0 == 0) {
      LAB_0010245b:local_270 = 6;
      StringName::operator =((StringName*)&local_288, (StringName*)&local_2d8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_278, (CowData*)&local_2e0);
      local_270 = 6;
      if (local_280 != 0x11) goto LAB_0010245b;
      StringName::StringName((StringName*)&local_178, (String*)&local_278, false);
      if (local_288 == local_178) {
         if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_288 = local_178;
      }

   }

   local_2a0 = 0;
   local_178 = "ice_candidate_created";
   local_170 = 0x15;
   String::parse_latin1((StrRange*)&local_2a0);
   local_178 = (char*)0x0;
   local_170 = 0;
   local_158 = 0;
   local_150 = 0;
   local_148 = 6;
   local_140 = 1;
   local_138[0] = 0;
   local_128 = 0;
   local_120 = 0;
   local_110 = 0;
   local_168 = (undefined1[16])0x0;
   if (local_2a0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)&local_2a0);
   }

   local_1d0 = 0;
   local_1d8 = (char*)CONCAT44(local_1d8._4_4_, (undefined4)local_238);
   if (local_230 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1d0, (CowData*)&local_230);
   }

   StringName::StringName(local_358, local_300);
   local_1b8 = 0;
   local_1c0 = local_220;
   if (local_218 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1b8, (CowData*)&local_218);
   }

   local_200 = 0;
   local_1b0 = local_210;
   local_208 = CONCAT44(local_208._4_4_, (undefined4)local_268);
   if (local_260 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_200, (CowData*)&local_260);
   }

   StringName::StringName(local_2f8, local_308);
   local_1e8 = 0;
   local_1f0 = local_250;
   if (local_248 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)&local_248);
   }

   local_1e0 = local_240;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_298);
   local_1a0 = 0;
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, local_1d8._0_4_);
   if (local_1d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_1d0);
   }

   StringName::StringName((StringName*)&local_198, local_358);
   local_188 = 0;
   local_190 = local_1c0;
   if (local_1b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)&local_1b8);
   }

   local_180 = local_1b0;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_208);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_208);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1d8);
   local_1a8 = "WebRTCPeerConnection";
   local_1d8 = (char*)0x0;
   local_1a0 = 0x14;
   String::parse_latin1((StrRange*)&local_1d8);
   StringName::StringName((StringName*)&local_1a8, (String*)&local_1d8, false);
   ClassDB::add_signal((StringName*)&local_1a8, (MethodInfo*)&local_178);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d8);
   MethodInfo::~MethodInfo((MethodInfo*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_298);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2e0);
   if (( StringName::configured != '\0' ) && ( local_2d8 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo(local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   if (( StringName::configured != '\0' ) && ( local_2c0 != 0 )) {
      StringName::unref();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2b0);
   if (( StringName::configured != '\0' ) && ( local_2a8 != 0 )) {
      StringName::unref();
   }

   local_238 = 0;
   local_178 = "WebRTCDataChannel";
   local_268 = 0;
   local_170 = 0x11;
   String::parse_latin1((StrRange*)local_378);
   local_298 = 0;
   local_178 = "channel";
   local_170 = 7;
   String::parse_latin1((StrRange*)&local_298);
   local_1a8 = (char*)CONCAT44(local_1a8._4_4_, 0x18);
   local_1a0 = 0;
   if (local_298 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)&local_298);
   }

   local_198 = (char*)0x0;
   local_190 = 0x11;
   local_188 = 0;
   if (local_268 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, (CowData*)local_378);
      local_180 = 6;
      if (local_190 != 0x11) {
         StringName::operator =((StringName*)&local_198, (StringName*)&local_238);
         goto LAB_00102991;
      }

   }

   local_180 = 6;
   StringName::StringName((StringName*)&local_178, (String*)&local_188, false);
   if (local_198 == local_178) {
      if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      local_198 = local_178;
   }

   LAB_00102991:local_208 = 0;
   local_178 = "data_channel_received";
   local_170 = 0x15;
   String::parse_latin1((StrRange*)&local_208);
   local_178 = (char*)0x0;
   local_170 = 0;
   local_158 = 0;
   local_150 = 0;
   local_148 = 6;
   local_140 = 1;
   local_138[0] = 0;
   local_128 = 0;
   local_120 = 0;
   local_110 = 0;
   local_168 = (undefined1[16])0x0;
   if (local_208 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)&local_208);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_138, (PropertyInfo*)&local_1a8);
   local_1d8 = "WebRTCPeerConnection";
   local_2a0 = 0;
   local_1d0 = 0x14;
   String::parse_latin1((StrRange*)&local_2a0);
   StringName::StringName((StringName*)&local_1d8, (String*)&local_2a0, false);
   ClassDB::add_signal((StringName*)&local_1d8, (MethodInfo*)&local_178);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2a0);
   MethodInfo::~MethodInfo((MethodInfo*)&local_178);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_298);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_378);
   if (( StringName::configured != '\0' ) && ( local_238 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_NEW", false);
   local_208 = 0;
   local_178 = "STATE_NEW";
   local_170 = 9;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = local_168._8_8_;
   local_168 = auVar16 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_CONNECTING", false);
   local_208 = 0;
   local_178 = "STATE_CONNECTING";
   local_170 = 0x10;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = local_168._8_8_;
   local_168 = auVar17 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_CONNECTED", false);
   local_208 = 0;
   local_178 = "STATE_CONNECTED";
   local_170 = 0xf;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = local_168._8_8_;
   local_168 = auVar18 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_DISCONNECTED", false);
   local_208 = 0;
   local_178 = "STATE_DISCONNECTED";
   local_170 = 0x12;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = local_168._8_8_;
   local_168 = auVar19 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_FAILED", false);
   local_208 = 0;
   local_178 = "STATE_FAILED";
   local_170 = 0xc;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = local_168._8_8_;
   local_168 = auVar20 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 4, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "STATE_CLOSED", false);
   local_208 = 0;
   local_178 = "STATE_CLOSED";
   local_170 = 0xc;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = local_168._8_8_;
   local_168 = auVar21 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 5, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "GATHERING_STATE_NEW", false);
   local_208 = 0;
   local_178 = "GATHERING_STATE_NEW";
   local_170 = 0x13;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::GatheringState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::GatheringState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = local_168._8_8_;
   local_168 = auVar22 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "GATHERING_STATE_GATHERING", false);
   local_208 = 0;
   local_178 = "GATHERING_STATE_GATHERING";
   local_170 = 0x19;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::GatheringState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::GatheringState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = local_168._8_8_;
   local_168 = auVar23 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "GATHERING_STATE_COMPLETE", false);
   local_208 = 0;
   local_178 = "GATHERING_STATE_COMPLETE";
   local_170 = 0x18;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::GatheringState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::GatheringState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = local_168._8_8_;
   local_168 = auVar24 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_STABLE", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_STABLE";
   local_170 = 0x16;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = local_168._8_8_;
   local_168 = auVar25 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_HAVE_LOCAL_OFFER", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_HAVE_LOCAL_OFFER";
   local_170 = 0x20;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = local_168._8_8_;
   local_168 = auVar26 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_HAVE_REMOTE_OFFER", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_HAVE_REMOTE_OFFER";
   local_170 = 0x21;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = local_168._8_8_;
   local_168 = auVar27 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_HAVE_LOCAL_PRANSWER", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_HAVE_LOCAL_PRANSWER";
   local_170 = 0x23;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = local_168._8_8_;
   local_168 = auVar28 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 3, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_HAVE_REMOTE_PRANSWER", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_HAVE_REMOTE_PRANSWER";
   local_170 = 0x24;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = local_168._8_8_;
   local_168 = auVar29 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 4, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "SIGNALING_STATE_CLOSED", false);
   local_208 = 0;
   local_178 = "SIGNALING_STATE_CLOSED";
   local_170 = 0x16;
   String::parse_latin1((StrRange*)&local_208);
   GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_178);
   local_1d8 = (char*)local_168._0_8_;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = local_168._8_8_;
   local_168 = auVar30 << 0x40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_178);
   local_178 = "WebRTCPeerConnection";
   local_238 = 0;
   local_170 = 0x14;
   String::parse_latin1((StrRange*)&local_238);
   StringName::StringName((StringName*)&local_178, (String*)&local_238, false);
   ClassDB::bind_integer_constant((StringName*)&local_178, (StringName*)&local_1d8, (StringName*)&local_1a8, 5, false);
   if (( StringName::configured != '\0' ) && ( local_178 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_238);
   if (( StringName::configured != '\0' ) && ( local_1d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   if (( StringName::configured != '\0' ) && ( local_1a8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   return (uint)CONCAT71(0x1142, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* WebRTCPeerConnection::is_class_ptr(void*) const */uint WebRTCPeerConnection::is_class_ptr(WebRTCPeerConnection *this, void *param_1) {
   return (uint)CONCAT71(0x1142, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* WebRTCPeerConnection::_getv(StringName const&, Variant&) const */undefined8 WebRTCPeerConnection::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnection::_setv(StringName const&, Variant const&) */undefined8 WebRTCPeerConnection::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnection::_validate_propertyv(PropertyInfo&) const */void WebRTCPeerConnection::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* WebRTCPeerConnection::_property_can_revertv(StringName const&) const */undefined8 WebRTCPeerConnection::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* WebRTCPeerConnection::_property_get_revertv(StringName const&, Variant&) const */undefined8 WebRTCPeerConnection::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnection::_notificationv(int, bool) */void WebRTCPeerConnection::_notificationv(int param_1, bool param_2) {
   return;
}
/* WebRTCPeerConnectionExtension::is_class_ptr(void*) const */uint WebRTCPeerConnectionExtension::is_class_ptr(WebRTCPeerConnectionExtension *this, void *param_1) {
   return (uint)CONCAT71(0x1142, (undefined4*)param_1 == &WebRTCPeerConnection::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1142, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* WebRTCPeerConnectionExtension::_getv(StringName const&, Variant&) const */undefined8 WebRTCPeerConnectionExtension::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnectionExtension::_setv(StringName const&, Variant const&) */undefined8 WebRTCPeerConnectionExtension::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnectionExtension::_validate_propertyv(PropertyInfo&) const */void WebRTCPeerConnectionExtension::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* WebRTCPeerConnectionExtension::_property_can_revertv(StringName const&) const */undefined8 WebRTCPeerConnectionExtension::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* WebRTCPeerConnectionExtension::_property_get_revertv(StringName const&, Variant&) const */undefined8 WebRTCPeerConnectionExtension::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebRTCPeerConnectionExtension::_notificationv(int, bool) */void WebRTCPeerConnectionExtension::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::_gen_argument_type(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::SignalingState>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::get_argument_meta(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::SignalingState>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::_gen_argument_type(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::GatheringState>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::get_argument_meta(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::GatheringState>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::_gen_argument_type(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::ConnectionState>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::get_argument_meta(int) const */undefined8 MethodBindTRC<WebRTCPeerConnection::ConnectionState>::get_argument_meta(int param_1) {
   return 0;
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
/* MethodBindTR<Error, String, int, String>::_gen_argument_type(int) const */char MethodBindTR<Error,String,int,String>::_gen_argument_type(MethodBindTR<Error,String,int,String> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if ((uint)param_1 < 3) {
      cVar1 = ( param_1 != 1 ) * '\x02' + '\x02';
   }

   return cVar1;
}
/* MethodBindTR<Error, String, int, String>::get_argument_meta(int) const */char MethodBindTR<Error,String,int,String>::get_argument_meta(MethodBindTR<Error,String,int,String> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}
/* MethodBindTR<Error, String, String>::_gen_argument_type(int) const */char MethodBindTR<Error,String,String>::_gen_argument_type(MethodBindTR<Error,String,String> *this, int param_1) {
   return ( -((uint)param_1 < 2) & 2U ) + 2;
}
/* MethodBindTR<Error, String, String>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String,String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Error>::_gen_argument_type(int) const */undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTR<Error>::get_argument_meta(int) const */undefined8 MethodBindTR<Error>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::_gen_argument_type(int) const */int MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::_gen_argument_type(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this, int param_1) {
   int iVar1;
   iVar1 = 0x18;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x1b;
   }

   return iVar1;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Error, Dictionary>::_gen_argument_type(int) const */char MethodBindTR<Error,Dictionary>::_gen_argument_type(MethodBindTR<Error,Dictionary> *this, int param_1) {
   return ( -(param_1 == 0) & 0x19U ) + 2;
}
/* MethodBindTR<Error, Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTS<StringName const&>::_gen_argument_type(int) const */byte MethodBindTS<StringName_const&>::_gen_argument_type(MethodBindTS<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}
/* MethodBindTS<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTS<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTS<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTS<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   /* WARNING: Could not recover jumptable at 0x0010441e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x58 ) )(*(long*)param_3 + 8);
   return;
}
/* MethodBindTS<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTS<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   /* WARNING: Load size is inaccurate */
   /* WARNING: Could not recover jumptable at 0x0010443a. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( param_1 + 0x58 ) )(*param_3);
   return;
}
/* MethodBindTS<StringName const&>::~MethodBindTS() */void MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113e78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTS<StringName const&>::~MethodBindTS() */void MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113e78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTR<Error, Dictionary>::~MethodBindTR() */void MethodBindTR<Error,Dictionary>::~MethodBindTR(MethodBindTR<Error,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ed8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, Dictionary>::~MethodBindTR() */void MethodBindTR<Error,Dictionary>::~MethodBindTR(MethodBindTR<Error,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ed8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::~MethodBindTR() */void MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::~MethodBindTR(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113f38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::~MethodBindTR() */void MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::~MethodBindTR(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113f38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, String, String>::~MethodBindTR() */void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ff8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String, String>::~MethodBindTR() */void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113ff8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, String, int, String>::~MethodBindTR() */void MethodBindTR<Error,String,int,String>::~MethodBindTR(MethodBindTR<Error,String,int,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114058;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String, int, String>::~MethodBindTR() */void MethodBindTR<Error,String,int,String>::~MethodBindTR(MethodBindTR<Error,String,int,String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114058;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error>::~MethodBindTR() */void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113f98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error>::~MethodBindTR() */void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113f98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001140b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001140b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::ConnectionState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114118;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::ConnectionState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114118;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::GatheringState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114178;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::GatheringState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00114178;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::SignalingState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001141d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::SignalingState> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001141d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001139a8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001139a8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */void WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00113b08;
   if (bVar1) {
      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104933;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00104933:*(undefined***)this = &PTR__initialize_classv_001139a8;
   Object::~Object((Object*)this);
   return;
}
/* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */void WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this) {
   ~WebRTCPeerConnectionExtension(this)
   ;;
   operator_delete(this, 0x288);
   return;
}
/* MethodBindTS<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTS<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar8;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   pVVar1 = param_2[0xb];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_R8D < 2) {
      pVVar8 = param_2[5];
      if (pVVar8 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00104b10;
         LAB_00104a80:pVVar8 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar8 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00104b10:uVar6 = 4;
            goto LAB_00104a8d;
         }

         if (in_R8D == 1) goto LAB_00104a80;
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar8 = pVVar8 + lVar7 * 0x18;
      }

      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar8, 0x15);
      uVar4 = _LC5;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_38);
      ( *(code*)pVVar1 )(&local_38);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_00104a8d:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WebRTCPeerConnection::_bind_methods() [clone .cold] */void WebRTCPeerConnection::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
         LAB_00104f33:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104f33;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00104f9e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00104f9e:return &_get_class_namev();
}
/* WebRTCPeerConnection::_get_class_namev() const */undefined8 *WebRTCPeerConnection::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105023:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105023;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebRTCPeerConnection");
         goto LAB_0010508e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebRTCPeerConnection");
   LAB_0010508e:return &_get_class_namev();
}
/* WebRTCPeerConnectionExtension::_get_class_namev() const */undefined8 *WebRTCPeerConnectionExtension::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105123:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105123;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebRTCPeerConnectionExtension");
         goto LAB_0010518e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebRTCPeerConnectionExtension");
   LAB_0010518e:return &_get_class_namev();
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
/* WebRTCPeerConnectionExtension::get_class() const */void WebRTCPeerConnectionExtension::get_class(void) {
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
/* WebRTCPeerConnection::get_class() const */void WebRTCPeerConnection::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010565f;
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

      LAB_0010565f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00105713;
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
                     if (lVar5 == 0) goto LAB_001057c3;
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

         LAB_001057c3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105713;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105713:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebRTCPeerConnection::is_class(String const&) const */undefined8 WebRTCPeerConnection::is_class(WebRTCPeerConnection *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001058ef;
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

      LAB_001058ef:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001059a3;
   }

   cVar5 = String::operator ==(param_1, "WebRTCPeerConnection");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001059a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebRTCPeerConnectionExtension::is_class(String const&) const */undefined8 WebRTCPeerConnectionExtension::is_class(WebRTCPeerConnectionExtension *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_00105a6f;
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

      LAB_00105a6f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00105b23;
   }

   cVar6 = String::operator ==(param_1, "WebRTCPeerConnectionExtension");
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

         cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105b23;
      }

      cVar6 = String::operator ==(param_1, "WebRTCPeerConnection");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar8;
         }

         goto LAB_00105c68;
      }

   }

   LAB_00105b23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105c68:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_48 = &_LC3;
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

         goto joined_r0x00105e8c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105e8c:local_58 = lVar2;
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
   local_48 = &_LC3;
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

         goto joined_r0x0010600c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010600c:local_58 = lVar2;
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
/* GetTypeInfo<Dictionary, void>::get_class_info() */GetTypeInfo<Dictionary,void> * __thiscall
GetTypeInfo<Dictionary,void>::get_class_info(GetTypeInfo<Dictionary,void> *this){
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
   local_48 = &_LC3;
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

         goto joined_r0x0010618c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010618c:local_58 = lVar2;
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
/* GetTypeInfo<Ref<WebRTCDataChannel>, void>::get_class_info() */GetTypeInfo<Ref<WebRTCDataChannel>,void> * __thiscall
GetTypeInfo<Ref<WebRTCDataChannel>,void>::get_class_info
          (GetTypeInfo<Ref<WebRTCDataChannel>,void> *this){
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
   local_48 = "WebRTCDataChannel";
   local_40 = 0x11;
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
         goto LAB_00106850;
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

   LAB_00106850:lVar2 = local_58;
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
/* WARNING: Removing unreachable block (ram,0x00106b08) *//* WARNING: Removing unreachable block (ram,0x00106c9d) *//* WARNING: Removing unreachable block (ram,0x00106ca9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x106cf7);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC34;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      }
 else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00106dbd;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC34;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   LAB_00106dbd:plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar1;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar5 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar7 != lVar6 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<Error, void>::get_class_info() */GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "Error";
   local_40 = 5;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error>::_gen_argument_type_info(int) const */undefined8 MethodBindTR<Error>::_gen_argument_type_info(int param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)CONCAT44(in_register_0000003c, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(in_register_0000003c, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<WebRTCPeerConnection::SignalingState, void>::get_class_info() */GetTypeInfo<WebRTCPeerConnection::SignalingState,void> * __thiscall
GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info
          (GetTypeInfo<WebRTCPeerConnection::SignalingState,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "WebRTCPeerConnection::SignalingState";
   local_40 = 0x24;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<WebRTCPeerConnection::GatheringState, void>::get_class_info() */GetTypeInfo<WebRTCPeerConnection::GatheringState,void> * __thiscall
GetTypeInfo<WebRTCPeerConnection::GatheringState,void>::get_class_info
          (GetTypeInfo<WebRTCPeerConnection::GatheringState,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "WebRTCPeerConnection::GatheringState";
   local_40 = 0x24;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<WebRTCPeerConnection::ConnectionState, void>::get_class_info() */GetTypeInfo<WebRTCPeerConnection::ConnectionState,void> * __thiscall
GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info
          (GetTypeInfo<WebRTCPeerConnection::ConnectionState,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "WebRTCPeerConnection::ConnectionState";
   local_40 = 0x25;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<WebRTCPeerConnection::SignalingState>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x24;
   local_38 = "WebRTCPeerConnection::SignalingState";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<WebRTCPeerConnection::ConnectionState>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x25;
   local_38 = "WebRTCPeerConnection::ConnectionState";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<WebRTCPeerConnection::GatheringState>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x24;
   local_38 = "WebRTCPeerConnection::GatheringState";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<WebRTCPeerConnection::SignalingState>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00107a70;
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

   LAB_00107a70:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<WebRTCPeerConnection::SignalingState>::validated_call(MethodBindTRC<WebRTCPeerConnection::SignalingState> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00107d14;
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
   LAB_00107d14:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::SignalingState>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<WebRTCPeerConnection::SignalingState>::ptrcall(MethodBindTRC<WebRTCPeerConnection::SignalingState> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00107ed3;
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
   LAB_00107ed3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<WebRTCPeerConnection::GatheringState>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108100;
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

   LAB_00108100:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<WebRTCPeerConnection::GatheringState>::validated_call(MethodBindTRC<WebRTCPeerConnection::GatheringState> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108314;
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
   LAB_00108314:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::GatheringState>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<WebRTCPeerConnection::GatheringState>::ptrcall(MethodBindTRC<WebRTCPeerConnection::GatheringState> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_001084c3;
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
   LAB_001084c3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<WebRTCPeerConnection::ConnectionState>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001086f0;
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

   LAB_001086f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<WebRTCPeerConnection::ConnectionState>::validated_call(MethodBindTRC<WebRTCPeerConnection::ConnectionState> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00108904;
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
   LAB_00108904:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<WebRTCPeerConnection::ConnectionState>::ptrcall(MethodBindTRC<WebRTCPeerConnection::ConnectionState> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00108ab3;
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
   LAB_00108ab3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00108d40;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )();
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

   LAB_00108d40:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001090bf;
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
      /* WARNING: Could not recover jumptable at 0x00108f66. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_001090bf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010927f;
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
      /* WARNING: Could not recover jumptable at 0x00109126. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010927f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Error>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109350;
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

   LAB_00109350:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error>::validated_call(MethodBindTR<Error> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109564;
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
   LAB_00109564:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109713;
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
   LAB_00109713:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Dictionary>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,Dictionary>::validated_call(MethodBindTR<Error,Dictionary> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   uint uVar2;
   long *plVar3;
   code *pcVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001098e7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Dictionary::Dictionary((Dictionary*)&local_48, *param_2 + 8);
   uVar2 = ( *pcVar4 )(param_1 + lVar1, (Dictionary*)&local_48);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar2;
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001098e7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Dictionary>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,Dictionary>::ptrcall(MethodBindTR<Error,Dictionary> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   uint uVar2;
   long *plVar3;
   code *pcVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109ae2;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Dictionary::Dictionary((Dictionary*)&local_48, (Dictionary*)*param_2);
   uVar2 = ( *pcVar4 )(param_1 + lVar1, (Dictionary*)&local_48);
   *(ulong*)param_3 = (ulong)uVar2;
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00109ae2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTR<Error,Dictionary>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109db0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00109e00;
         LAB_00109df0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00109e00:uVar7 = 4;
            goto LAB_00109da5;
         }

         if (in_R8D == 1) goto LAB_00109df0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x1b);
      uVar4 = _LC56;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Dictionary::~Dictionary((Dictionary*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_00109da5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00109db0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::ptrcall(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   long *plVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   Object *pOVar6;
   long *plVar7;
   Object *pOVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   Object *local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         goto LAB_0010a130;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar9 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar9 & 1 ) != 0) {
      pcVar9 = *(code**)( pcVar9 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Dictionary::Dictionary((Dictionary*)&local_60, (Dictionary*)param_2[1]);
   plVar2 = (long*)*param_2;
   local_58 = (char*)0x0;
   lVar3 = *plVar2;
   plVar7 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar7;
         if (lVar3 == 0) goto LAB_0010a0ac;
         LOCK();
         lVar5 = *plVar7;
         bVar10 = lVar3 == lVar5;
         if (bVar10) {
            *plVar7 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar5 != -1) {
         local_58 = (char*)*plVar2;
      }

   }

   LAB_0010a0ac:( *pcVar9 )(&local_68, param_1 + lVar1, (CowData<char32_t>*)&local_58, (Dictionary*)&local_60);
   if (local_68 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar8 = *param_3;
      if (pOVar8 != (Object*)0x0) {
         *(undefined8*)param_3 = 0;
         goto LAB_0010a169;
      }

   }
 else {
      pOVar6 = (Object*)__dynamic_cast(local_68, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar8 = *param_3;
      if (pOVar8 != pOVar6) {
         *(Object**)param_3 = pOVar6;
         if (pOVar6 == (Object*)0x0) {
            if (pOVar8 != (Object*)0x0) goto LAB_0010a169;
         }
 else {
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar8 != (Object*)0x0) {
               LAB_0010a169:cVar4 = RefCounted::unreference();
               if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }

            }

            if (local_68 == (Object*)0x0) goto LAB_0010a120;
         }

      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
         ( **(code**)( *(long*)local_68 + 0x140 ) )(local_68);
         Memory::free_static(local_68, false);
      }

   }

   LAB_0010a120:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Dictionary::~Dictionary((Dictionary*)&local_60);
   LAB_0010a130:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::validated_call(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Variant *pVVar2;
   long lVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   Object *local_60;
   long local_58;
   undefined8 local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a41a;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Dictionary::Dictionary((Dictionary*)&local_58, param_2[1] + 8);
   pVVar2 = *param_2;
   local_50 = 0;
   lVar3 = *(long*)( pVVar2 + 8 );
   plVar6 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar6;
         if (lVar3 == 0) goto LAB_0010a3ce;
         LOCK();
         lVar5 = *plVar6;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar6 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_50 = *(undefined8*)( pVVar2 + 8 );
      }

   }

   LAB_0010a3ce:( *pcVar7 )(&local_60, param_1 + lVar1, (CowData<char32_t>*)&local_50, (Dictionary*)&local_58);
   if (local_60 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_60 + 0x60 );
      local_40 = local_60;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (( ( local_60 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
   Memory::free_static(local_60, false);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);Dictionary::~Dictionary((Dictionary*)&local_58);LAB_0010a41a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   Object *local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != (Object*)0x0 )) {
            StringName::unref();
         }

         goto LAB_0010a786;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_0010a7c8;
         pVVar11 = *(Variant**)param_4;
         LAB_0010a7dd:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_0010a7c8:uVar7 = 4;
            goto LAB_0010a7b5;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010a8f0;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010a7dd;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010a8f0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 0x1b);
      uVar4 = _LC57;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC58;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      ( *(code*)pVVar13 )(&local_78, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      Variant::Variant((Variant*)local_58, local_78);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (local_78 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_78);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
               Memory::free_static(local_78, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      Dictionary::~Dictionary((Dictionary*)&local_70);
   }
 else {
      uVar7 = 3;
      LAB_0010a7b5:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_0010a786:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String, String>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,String,String>::ptrcall(MethodBindTR<Error,String,String> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   long *plVar2;
   long lVar3;
   uint uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ab35;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   local_50 = 0;
   plVar2 = (long*)param_2[1];
   lVar3 = *plVar2;
   plVar6 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar6;
         if (lVar3 == 0) goto LAB_0010aad9;
         LOCK();
         lVar5 = *plVar6;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar6 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_50 = *plVar2;
      }

   }

   LAB_0010aad9:local_48 = (char*)0x0;
   plVar2 = (long*)*param_2;
   lVar3 = *plVar2;
   plVar6 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar6;
         if (lVar3 == 0) goto LAB_0010ab12;
         LOCK();
         lVar5 = *plVar6;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar6 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_48 = (char*)*plVar2;
      }

   }

   LAB_0010ab12:uVar4 = ( *pcVar7 )(param_1 + lVar1, (CowData<char32_t>*)&local_48, (CowData<char32_t>*)&local_50);
   *(ulong*)param_3 = (ulong)uVar4;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010ab35:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, String, String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,String,String>::validated_call(MethodBindTR<Error,String,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Variant *pVVar2;
   long lVar3;
   uint uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar6 = *(long**)( param_1 + 0x118 );
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ada9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   local_50 = 0;
   pVVar2 = param_2[1];
   lVar3 = *(long*)( pVVar2 + 8 );
   plVar6 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar6;
         if (lVar3 == 0) goto LAB_0010ad4b;
         LOCK();
         lVar5 = *plVar6;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar6 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_50 = *(undefined8*)( pVVar2 + 8 );
      }

   }

   LAB_0010ad4b:local_48 = (char*)0x0;
   pVVar2 = *param_2;
   lVar3 = *(long*)( pVVar2 + 8 );
   plVar6 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar6;
         if (lVar3 == 0) goto LAB_0010ad86;
         LOCK();
         lVar5 = *plVar6;
         bVar8 = lVar3 == lVar5;
         if (bVar8) {
            *plVar6 = lVar3 + 1;
            lVar5 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_48 = *(char**)( pVVar2 + 8 );
      }

   }

   LAB_0010ad86:uVar4 = ( *pcVar7 )(param_1 + lVar1, (CowData<char32_t>*)&local_48, (CowData<char32_t>*)&local_50);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar4;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010ada9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, String, String>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Error,String,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b0c7;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_0010b108;
         pVVar11 = *(Variant**)param_4;
         LAB_0010b11d:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_0010b108:uVar7 = 4;
            goto LAB_0010b0f5;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_0010b1f0;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0010b11d;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0010b1f0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
      uVar4 = _LC59;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC58;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar13 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }
 else {
      uVar7 = 3;
      LAB_0010b0f5:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_0010b0c7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String, int, String>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,String,int,String>::ptrcall(MethodBindTR<Error,String,int,String> *this, Object *param_1, void **param_2, void *param_3) {
   undefined4 uVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b442;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)( this + 0x60 );
   pcVar8 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar2 ) + -1 );
   }

   local_50 = 0;
   plVar3 = (long*)param_2[2];
   lVar4 = *plVar3;
   plVar7 = (long*)( lVar4 + -0x10 );
   if (lVar4 != 0) {
      do {
         lVar4 = *plVar7;
         if (lVar4 == 0) goto LAB_0010b3dd;
         LOCK();
         lVar6 = *plVar7;
         bVar9 = lVar4 == lVar6;
         if (bVar9) {
            *plVar7 = lVar4 + 1;
            lVar6 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar6 != -1) {
         local_50 = *plVar3;
      }

   }

   LAB_0010b3dd:plVar3 = (long*)*param_2;
   /* WARNING: Load size is inaccurate */
   uVar1 = *param_2[1];
   local_48 = (char*)0x0;
   lVar4 = *plVar3;
   plVar7 = (long*)( lVar4 + -0x10 );
   if (lVar4 != 0) {
      do {
         lVar4 = *plVar7;
         if (lVar4 == 0) goto LAB_0010b41c;
         LOCK();
         lVar6 = *plVar7;
         bVar9 = lVar4 == lVar6;
         if (bVar9) {
            *plVar7 = lVar4 + 1;
            lVar6 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar6 != -1) {
         local_48 = (char*)*plVar3;
      }

   }

   LAB_0010b41c:uVar5 = ( *pcVar8 )(param_1 + lVar2, (CowData<char32_t>*)&local_48, uVar1, (CowData<char32_t>*)&local_50);
   *(ulong*)param_3 = (ulong)uVar5;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010b442:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, String, int, String>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Error,String,int,String>::validated_call(MethodBindTR<Error,String,int,String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   undefined4 uVar1;
   long lVar2;
   Variant *pVVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar7 = *(long**)( param_1 + 0x118 );
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b6a7;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)( this + 0x60 );
   pcVar8 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( param_1 + lVar2 ) + -1 );
   }

   local_50 = 0;
   pVVar3 = param_2[2];
   lVar4 = *(long*)( pVVar3 + 8 );
   plVar7 = (long*)( lVar4 + -0x10 );
   if (lVar4 != 0) {
      do {
         lVar4 = *plVar7;
         if (lVar4 == 0) goto LAB_0010b63f;
         LOCK();
         lVar6 = *plVar7;
         bVar9 = lVar4 == lVar6;
         if (bVar9) {
            *plVar7 = lVar4 + 1;
            lVar6 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar6 != -1) {
         local_50 = *(undefined8*)( pVVar3 + 8 );
      }

   }

   LAB_0010b63f:pVVar3 = *param_2;
   uVar1 = *(undefined4*)( param_2[1] + 8 );
   local_48 = (char*)0x0;
   lVar4 = *(long*)( pVVar3 + 8 );
   plVar7 = (long*)( lVar4 + -0x10 );
   if (lVar4 != 0) {
      do {
         lVar4 = *plVar7;
         if (lVar4 == 0) goto LAB_0010b681;
         LOCK();
         lVar6 = *plVar7;
         bVar9 = lVar4 == lVar6;
         if (bVar9) {
            *plVar7 = lVar4 + 1;
            lVar6 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar9 );
      if (lVar6 != -1) {
         local_48 = *(char**)( pVVar3 + 8 );
      }

   }

   LAB_0010b681:uVar5 = ( *pcVar8 )(param_1 + lVar2, (CowData<char32_t>*)&local_48, uVar1, (CowData<char32_t>*)&local_50);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar5;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010b6a7:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, String, int, String>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Error,String,int,String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   int iVar7;
   long lVar8;
   long *plVar9;
   uint uVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   long lVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_88 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC51, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b9f0;
      }

      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar6 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar13 = 0;
      }
 else {
         lVar13 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar13;
      }

      if ((int)( 3 - in_R8D ) <= iVar7) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar12 = *(Variant**)( param_4 + lVar8 * 8 );
            }
 else {
               uVar10 = iVar7 + -3 + (int)lVar8;
               if (lVar13 <= (int)uVar10) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar10, lVar13, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               pVVar12 = pVVar2 + (ulong)uVar10 * 0x18;
            }

            local_78[lVar8] = pVVar12;
            lVar8 = lVar8 + 1;
         }
 while ( lVar8 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar14 & 1 ) != 0) {
            pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[2], 4);
         uVar4 = _LC60;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_90);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar4 = _LC61;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(local_78[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
         uVar4 = _LC58;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_String((Variant*)&local_88);
         iVar7 = ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_88, iVar7, (Variant*)&local_90);
         Variant::Variant((Variant*)local_58, iVar7);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         goto LAB_0010b9f0;
      }

      uVar6 = 4;
   }

   *in_R9 = uVar6;
   in_R9[2] = 3;
   LAB_0010b9f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
      LAB_0010bda8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010bda8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010bdc5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010bdc5:if (lVar2 == 0) {
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
/* WebRTCPeerConnection::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void WebRTCPeerConnection::_get_property_listv(WebRTCPeerConnection *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_78 = "WebRTCPeerConnection";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "WebRTCPeerConnection";
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
      LAB_0010c16d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010c16d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010c18f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010c18f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
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

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "WebRTCPeerConnection", false);
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
/* WebRTCPeerConnectionExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void WebRTCPeerConnectionExtension::_get_property_listv(WebRTCPeerConnectionExtension *this, List *param_1, bool param_2) {
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
      WebRTCPeerConnection::_get_property_listv((WebRTCPeerConnection*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "WebRTCPeerConnectionExtension";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "WebRTCPeerConnectionExtension";
   local_98 = 0;
   local_70 = 0x1d;
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
      LAB_0010c558:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010c558;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010c57a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010c57a:if (lVar2 == 0) {
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "WebRTCPeerConnectionExtension", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         WebRTCPeerConnection::_get_property_listv((WebRTCPeerConnection*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTS<StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTS<StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010c7fb;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC3;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010c8f0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010c8f0;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0010c7fb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_90 = (undefined1[16])0x0;
      if (in_EDX == 0) {
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_68);
      }
 else {
         local_b8 = 0;
         local_b0 = 0;
         local_68 = "";
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         String::parse_latin1((StrRange*)&local_b0);
         local_a8 = 0;
         local_68 = (char*)CONCAT44(local_68._4_4_, 0x1b);
         local_50 = 0;
         local_48 = 0;
         local_60 = (undefined1[16])0x0;
         if (local_b0 == 0) {
            LAB_0010cbe1:local_40 = 6;
            StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_b8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
            local_40 = 6;
            if (local_50 != 0x11) goto LAB_0010cbe1;
            StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
            if (local_60._8_8_ == local_a0) {
               if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_60._8_8_ = local_a0;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }

      }

      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._0_8_;
      uVar4 = local_90._8_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_90._8_8_;
      local_90 = auVar2 << 0x40;
      *puVar5 = (undefined4)local_98;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_80;
      *(undefined8*)( puVar5 + 8 ) = local_78;
      puVar5[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_0010caeb;
   }

   local_a8 = 0;
   local_a0 = 0;
   local_68 = "WebRTCDataChannel";
   local_60._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_a0);
   local_98 = 0;
   *puVar5 = 0x18;
   puVar5[6] = 0x11;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar5[10] = 6;
      LAB_0010cc77:StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(char**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(char**)( puVar5 + 4 ) = local_68;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_a0);
      puVar5[10] = 6;
      if (puVar5[6] == 0x11) goto LAB_0010cc77;
      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_a8);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   LAB_0010caeb:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindTR<Error, Dictionary>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,Dictionary>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX != 0) {
      GetTypeInfo<Error,void>::get_class_info(this);
      goto LAB_0010ce95;
   }

   local_98 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 6;
   local_b8 = 0;
   local_b0 = 0;
   local_68 = &_LC3;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_a8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1b);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010cec8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_b8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010cec8;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
   }

   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }

   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }

   local_70 = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   uVar5 = local_90._8_8_;
   uVar4 = local_90._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_90._8_8_;
   local_90 = auVar3 << 0x40;
   *(undefined4*)this = (undefined4)local_98;
   *(undefined8*)( this + 8 ) = uVar4;
   *(undefined8*)( this + 0x10 ) = uVar5;
   *(undefined4*)( this + 0x18 ) = (undefined4)local_80;
   *(long*)( this + 0x20 ) = local_78;
   *(undefined4*)( this + 0x28 ) = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010ce95:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* MethodBindTR<Error, String, String>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,String,String>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   undefined1 local_80[16];
   undefined8 local_70;
   long local_68;
   undefined4 local_60;
   undefined4 local_58[2];
   long local_50;
   ulong local_48;
   undefined4 local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = 6;
      local_70 = 0;
      local_68 = 0;
      local_80._0_8_ = 0;
      local_80._8_8_ = 0;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)local_58);
      if (local_80._0_8_ != local_50) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         local_80._0_8_ = local_50;
         local_50 = 0;
      }

      if (local_80._8_8_ != local_48) {
         StringName::unref();
         local_80._8_8_ = local_48;
         local_48 = 0;
      }

      local_70 = CONCAT44(local_70._4_4_, local_40);
      if (local_68 != local_38) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         local_68 = local_38;
         local_38 = 0;
      }

      local_60 = local_30;
      PropertyInfo::~PropertyInfo((PropertyInfo*)local_58);
      uVar3 = local_80._8_8_;
      uVar2 = local_80._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_80._8_8_;
      local_80 = auVar1 << 0x40;
      *(undefined4*)this = local_58[0];
      *(undefined8*)( this + 8 ) = uVar2;
      *(undefined8*)( this + 0x10 ) = uVar3;
      *(undefined4*)( this + 0x18 ) = (undefined4)local_70;
      *(long*)( this + 0x20 ) = local_68;
      *(undefined4*)( this + 0x28 ) = local_60;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   }
 else {
      GetTypeInfo<Error,void>::get_class_info(this);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String, int, String>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,String,int,String>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   uint in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   long local_b8;
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (2 < in_EDX) {
      GetTypeInfo<Error,void>::get_class_info(this);
      goto LAB_0010d2d2;
   }

   local_98 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 6;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   if (in_EDX == 0) {
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_68);
      PropertyInfo::operator =((PropertyInfo*)&local_98, (PropertyInfo*)&local_68);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }
 else {
      if (in_EDX == 1) {
         local_b8 = 0;
         local_b0 = 0;
         local_68 = &_LC3;
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_60._8_8_;
         local_60 = auVar2 << 0x40;
         String::parse_latin1((StrRange*)&local_b0);
         local_a8 = 0;
         local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
         local_50 = 0;
         local_48 = 0;
         local_60 = (undefined1[16])0x0;
         if (local_b0 == 0) {
            LAB_0010d410:local_40 = 6;
            StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_b8);
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
            local_40 = 6;
            if (local_50 != 0x11) goto LAB_0010d410;
            StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
            if (local_60._8_8_ == local_a0) {
               if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
                  StringName::unref();
               }

            }
 else {
               StringName::unref();
               local_60._8_8_ = local_a0;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }

      }
 else {
         GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_68);
      }

      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
      }

      if (local_90._8_8_ != local_60._8_8_) {
         StringName::unref();
         local_90._8_8_ = local_60._8_8_;
         local_60._8_8_ = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   uVar5 = local_90._8_8_;
   uVar4 = local_90._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_90._8_8_;
   local_90 = auVar3 << 0x40;
   *(undefined4*)this = (undefined4)local_98;
   *(undefined8*)( this + 8 ) = uVar4;
   *(undefined8*)( this + 0x10 ) = uVar5;
   *(undefined4*)( this + 0x18 ) = (undefined4)local_80;
   *(long*)( this + 0x20 ) = local_78;
   *(undefined4*)( this + 0x28 ) = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010d2d2:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* MethodBind* create_method_bind<WebRTCPeerConnection, Error, Dictionary>(Error
   (WebRTCPeerConnection::*)(Dictionary)) */MethodBind *create_method_bind<WebRTCPeerConnection,Error,Dictionary>(_func_Error_Dictionary *param_1) {
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
   *(_func_Error_Dictionary**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113ed8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection, Ref<WebRTCDataChannel>, String,
   Dictionary>(Ref<WebRTCDataChannel> (WebRTCPeerConnection::*)(String, Dictionary)) */MethodBind *create_method_bind<WebRTCPeerConnection,Ref<WebRTCDataChannel>,String,Dictionary>(_func_Ref_String_Dictionary *param_1) {
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
   *(_func_Ref_String_Dictionary**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113f38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection, Error>(Error (WebRTCPeerConnection::*)()) */MethodBind *create_method_bind<WebRTCPeerConnection,Error>(_func_Error *param_1) {
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
   *(_func_Error**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113f98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection, Error, String, String>(Error
   (WebRTCPeerConnection::*)(String, String)) */MethodBind *create_method_bind<WebRTCPeerConnection,Error,String,String>(_func_Error_String_String *param_1) {
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
   *(_func_Error_String_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113ff8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection, Error, String, int, String>(Error
   (WebRTCPeerConnection::*)(String, int, String)) */MethodBind *create_method_bind<WebRTCPeerConnection,Error,String,int,String>(_func_Error_String_int_String *param_1) {
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
   *(_func_Error_String_int_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114058;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection>(void (WebRTCPeerConnection::*)()) */MethodBind *create_method_bind<WebRTCPeerConnection>(_func_void *param_1) {
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
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_001140b8;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection,
   WebRTCPeerConnection::ConnectionState>(WebRTCPeerConnection::ConnectionState
   (WebRTCPeerConnection::*)() const) */MethodBind *create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::ConnectionState>(_func_ConnectionState *param_1) {
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
   *(_func_ConnectionState**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114118;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection,
   WebRTCPeerConnection::GatheringState>(WebRTCPeerConnection::GatheringState
   (WebRTCPeerConnection::*)() const) */MethodBind *create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::GatheringState>(_func_GatheringState *param_1) {
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
   *(_func_GatheringState**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00114178;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<WebRTCPeerConnection,
   WebRTCPeerConnection::SignalingState>(WebRTCPeerConnection::SignalingState
   (WebRTCPeerConnection::*)() const) */MethodBind *create_method_bind<WebRTCPeerConnection,WebRTCPeerConnection::SignalingState>(_func_SignalingState *param_1) {
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
   *(_func_SignalingState**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001141d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebRTCPeerConnection";
   local_30 = 0x14;
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
/* WebRTCPeerConnectionExtension::_initialize_classv() */void WebRTCPeerConnectionExtension::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (WebRTCPeerConnection::initialize_class() == '\0') {
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
            if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_48 = "RefCounted";
         local_58 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
         local_48 = "WebRTCPeerConnection";
         local_60 = 0;
         local_40 = 0x14;
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
         WebRTCPeerConnection::_bind_methods();
         WebRTCPeerConnection::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "WebRTCPeerConnection";
      local_58 = 0;
      local_40 = 0x14;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "WebRTCPeerConnectionExtension";
      local_60 = 0;
      local_40 = 0x1d;
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
      WebRTCPeerConnectionExtension::_bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WebRTCPeerConnection::_initialize_classv() */void WebRTCPeerConnection::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
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
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "WebRTCPeerConnection";
      local_60 = 0;
      local_40 = 0x14;
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

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      _bind_methods();
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* WebRTCPeerConnectionExtension::close() */void WebRTCPeerConnectionExtension::close(WebRTCPeerConnectionExtension *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   CowData<char32_t> local_108[8];
   CowData<char32_t> local_100[8];
   undefined8 local_f8;
   String local_f0[8];
   undefined8 local_e8;
   long local_e0;
   undefined8 local_d8;
   long local_d0;
   int local_c8[4];
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
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010e5fb:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x278] == (WebRTCPeerConnectionExtension)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)local_c8, "_close");
         local_90 = CONCAT44(local_90._4_4_, 0x88);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x280 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "WebRTCPeerConnectionExtension");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_0010e9da;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_0010e9ef:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010e92c;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x270);
               *(undefined8*)( this + 0x280 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_0010e9da:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_0010e9ef;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x270, uVar1);
            *(undefined8*)( this + 0x280 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010e92c:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x280 );
            plVar4[1] = (long)( this + 0x278 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x278] = (WebRTCPeerConnectionExtension)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x280 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010e83c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010e661. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x270, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010ea62;
      }

      if (_gdvirtual__close_call() != '\0') {
         local_d8 = 0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         local_c8[2] = 0x23;
         local_c8[3] = 0;
         String::parse_latin1((StrRange*)&local_d8);
         local_e8 = 0;
         local_c8[0] = 0x104c09;
         local_c8[1] = 0;
         local_c8[2] = 6;
         local_c8[3] = 0;
         String::parse_latin1((StrRange*)&local_e8);
         local_c8[0] = 0x106cf7;
         local_c8[1] = 0;
         local_f8 = 0;
         local_c8[2] = 2;
         local_c8[3] = 0;
         String::parse_latin1((StrRange*)&local_f8);
         ( **(code**)( *(long*)this + 0x48 ) )(local_108, this);
         operator+((char *)
         local_100,(String*)"Required virtual method ";
         String::operator +(local_f0, (String*)local_100);
         String::operator +((String*)&local_e0, local_f0);
         String::operator +((String*)local_c8, (String*)&local_e0);
         _err_print_error("_gdvirtual__close_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x39, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
         CowData<char32_t>::_unref(local_100);
         CowData<char32_t>::_unref(local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         _gdvirtual__close_call()::first_print =
         '\0';
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x270, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010e5fb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ea62:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WebRTCPeerConnectionExtension::poll() */ulong WebRTCPeerConnectionExtension::poll(WebRTCPeerConnectionExtension *this) {
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
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 600, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_0010eb96;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x260] == (WebRTCPeerConnectionExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_poll");
      local_90 = CONCAT44(local_90._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x268 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_0010ef60;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010ef75:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010eeb2;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600);
            *(undefined8*)( this + 0x268 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_0010ef60:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_0010ef75;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 600, uVar1);
         *(undefined8*)( this + 0x268 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010eeb2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x268 );
         plVar5[1] = (long)( this + 0x260 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x260] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x268 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__poll_call(Error & ::first_print == '\0') {
         uVar2 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x104c03;
         local_c8[1] = 0;
         uStack_c0 = 5;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x106cf7;
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
         _err_print_error("_gdvirtual__poll_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x38, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__poll_call(Error&)::first_print =
         '\0';
         uVar2 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 600, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_0010eb96:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WebRTCPeerConnectionExtension::create_offer() */ulong WebRTCPeerConnectionExtension::create_offer(WebRTCPeerConnectionExtension *this) {
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
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1f8, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_0010f126;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x200] == (WebRTCPeerConnectionExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_create_offer");
      local_90 = CONCAT44(local_90._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x208 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_0010f4f0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010f505:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010f442;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1f8);
            *(undefined8*)( this + 0x208 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_0010f4f0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_0010f505;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1f8, uVar1);
         *(undefined8*)( this + 0x208 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f442:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x208 );
         plVar5[1] = (long)( this + 0x200 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x200] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x208 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__create_offer_call(Error & ::first_print == '\0') {
         uVar2 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x104bb3;
         local_c8[1] = 0;
         uStack_c0 = 0xd;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x106cf7;
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
         _err_print_error("_gdvirtual__create_offer_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x34, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__create_offer_call(Error&)::first_print =
         '\0';
         uVar2 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1f8, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_0010f126:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WebRTCPeerConnectionExtension::get_signaling_state() const */ulong WebRTCPeerConnectionExtension::get_signaling_state(WebRTCPeerConnectionExtension *this) {
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
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1b0, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_0010f6c6;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b8] == (WebRTCPeerConnectionExtension)0x0 )) {
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
      String::parse_latin1((String*)local_c8, "_get_signaling_state");
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<WebRTCPeerConnection::SignalingState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::SignalingState,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1c0 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_0010fa90;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_0010faa5:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010f9e2;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1b0);
            *(undefined8*)( this + 0x1c0 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_0010fa90:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_0010faa5;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1b0, uVar1);
         *(undefined8*)( this + 0x1c0 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010f9e2:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x1c0 );
         plVar5[1] = (long)( this + 0x1b8 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x1b8] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x1c0 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_signaling_state_call(WebRTCPeerConnection::SignalingState & ::first_print == '\0') {
         uVar2 = 0;
      }
 else {
         local_f8 = 0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x104b7d;
         local_c8[1] = 0;
         uStack_c0 = 0x14;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x106cf7;
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
         _err_print_error("_gdvirtual__get_signaling_state_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x31, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_signaling_state_call(WebRTCPeerConnection::SignalingState&)::first_print =
         '\0';
         uVar2 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1b0, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_0010f6c6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WebRTCPeerConnectionExtension::get_gathering_state() const */ulong WebRTCPeerConnectionExtension::get_gathering_state(WebRTCPeerConnectionExtension *this) {
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
   char *local_f8;
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
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x198, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_0010fc66;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1a0] == (WebRTCPeerConnectionExtension)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_get_gathering_state";
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
      local_f0[0] = 0x14;
      String::parse_latin1((StrRange*)local_c8);
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<WebRTCPeerConnection::GatheringState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::GatheringState,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1a8 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_00110040;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00110055:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0010ff93;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x198);
            *(undefined8*)( this + 0x1a8 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_00110040:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00110055;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x198, uVar1);
         *(undefined8*)( this + 0x1a8 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_0010ff93:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x1a8 );
         plVar5[1] = (long)( this + 0x1a0 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x1a0] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 0x1a8 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_gathering_state_call(WebRTCPeerConnection::GatheringState & ::first_print == '\0') {
         uVar2 = 0;
      }
 else {
         local_f8 = (char*)0x0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x104b68;
         local_c8[1] = 0;
         uStack_c0 = 0x14;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x106cf7;
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
         _err_print_error("_gdvirtual__get_gathering_state_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x30, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_gathering_state_call(WebRTCPeerConnection::GatheringState&)::first_print =
         '\0';
         uVar2 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x198, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_0010fc66:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WebRTCPeerConnectionExtension::get_connection_state() const */ulong WebRTCPeerConnectionExtension::get_connection_state(WebRTCPeerConnectionExtension *this) {
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
   char *local_f8;
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
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x180, 0, 0, local_c8);
      if (local_c8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            uVar2 = uVar2 & 0xffffffff;
         }

         goto LAB_00110216;
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (WebRTCPeerConnectionExtension)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      local_f8 = "_get_connection_state";
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
      local_f0[0] = 0x15;
      String::parse_latin1((StrRange*)local_c8);
      local_90 = CONCAT44(local_90._4_4_, 0x8c);
      GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>::get_class_info((GetTypeInfo<WebRTCPeerConnection::ConnectionState,void>*)&local_f8);
      PropertyInfo::operator =((PropertyInfo*)&uStack_c0, (PropertyInfo*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_f8);
      local_70 = local_70 & 0xffffffff00000000;
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 400 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_108 = 0;
         String::parse_latin1((String*)&local_108, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_100, (String*)&local_108, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_f8, (StringName*)&local_100);
         if (local_f0[0] == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( lVar4 = local_100 != 0 )) goto LAB_001105f0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            LAB_00110605:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00110543;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180);
            *(undefined8*)( this + 400 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_f0[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_f0);
            if (( StringName::configured != '\0' ) && ( local_100 != 0 )) {
               LAB_001105f0:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
            if (lVar4 == 0) goto LAB_00110605;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x180, uVar1);
         *(undefined8*)( this + 400 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00110543:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 400 );
         plVar5[1] = (long)( this + 0x188 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x188] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar6 = *(code**)( this + 400 );
   if (pcVar6 == (code*)0x0) {
      if (_gdvirtual__get_connection_state_call(WebRTCPeerConnection::ConnectionState & ::first_print == '\0') {
         uVar2 = 0;
      }
 else {
         local_f8 = (char*)0x0;
         local_c8[0] = 0x10e4e0;
         local_c8[1] = 0;
         uStack_c0 = 0x23;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_f8);
         local_108 = 0;
         local_c8[0] = 0x104b52;
         local_c8[1] = 0;
         uStack_c0 = 0x15;
         uStack_bc = 0;
         String::parse_latin1((StrRange*)&local_108);
         local_c8[0] = 0x106cf7;
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
         _err_print_error("_gdvirtual__get_connection_state_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x2f, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_110);
         CowData<char32_t>::_unref(local_120);
         CowData<char32_t>::_unref(local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         _gdvirtual__get_connection_state_call(WebRTCPeerConnection::ConnectionState&)::first_print =
         '\0';
         uVar2 = 0;
      }

   }
 else if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
      ( *pcVar6 )(*(undefined8*)( this + 0x10 ), 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }
 else {
      ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, pcVar6, 0, local_c8);
      uVar2 = (ulong)local_c8[0];
   }

   LAB_00110216:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
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
      LAB_00110a00:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00110a00;
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
            goto LAB_00110911;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00110911:puVar7[-1] = param_1;
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
/* WebRTCPeerConnectionExtension::initialize(Dictionary) */ulong WebRTCPeerConnectionExtension::initialize(WebRTCPeerConnectionExtension *this, Dictionary *param_2) {
   undefined4 uVar1;
   ulong uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   Dictionary local_160[8];
   CowData<char32_t> local_158[8];
   CowData<char32_t> local_150[8];
   undefined8 local_148;
   String local_140[8];
   undefined8 local_138;
   long local_130;
   undefined8 local_128;
   long local_120[5];
   uint local_f8[2];
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
   Dictionary *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_160, param_2);
   plVar5 = *(long**)( this + 0x98 );
   if (plVar5 != (long*)0x0) {
      local_f8[0] = 0;
      local_f8[1] = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, local_160);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar5 + 0x60 ) )((Variant*)local_58, plVar5, this + 0x1c8, &local_80, 1, local_f8);
      if (local_f8[0] == 0) {
         uVar2 = Variant::operator_cast_to_long((Variant*)local_58);
         uVar2 = uVar2 & 0xffffffff;
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00110b8d;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1d0] == (WebRTCPeerConnectionExtension)0x0 )) {
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
      String::parse_latin1((String*)local_f8, "_initialize");
      local_c0 = CONCAT44(local_c0._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_128);
      PropertyInfo::operator =((PropertyInfo*)&uStack_f0, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_128);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_b8, (PropertyInfo*)&local_128);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_128);
      Vector<int>::push_back(local_98, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar4 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1d8 ) = 0;
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') goto LAB_00111057;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            LAB_00111076:lVar4 = *(long*)( this + 8 );
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_00110f8d;
            uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1c8);
            *(undefined8*)( this + 0x1d8 ) = uVar3;
         }
 else {
            lVar4 = *(long*)( local_120[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_120);
            if (StringName::configured != '\0') {
               LAB_00111057:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar4 == 0) goto LAB_00111076;
         }

         lVar4 = *(long*)( this + 8 );
      }
 else {
         uVar3 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), this + 0x1c8, uVar1);
         *(undefined8*)( this + 0x1d8 ) = uVar3;
         lVar4 = *(long*)( this + 8 );
      }

      LAB_00110f8d:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( this + 0x1d8 );
         plVar5[1] = (long)( this + 0x1d0 );
         plVar5[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar5;
      }

      this[0x1d0] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_f8);
   }

   if (*(long*)( this + 0x1d8 ) == 0) {
      if (_gdvirtual__initialize_call(Dictionary, Error & ::first_print != '\0') {
         local_128 = 0;
         local_f8[0] = 0x10e4e0;
         local_f8[1] = 0;
         uStack_f0 = 0x23;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_128);
         local_138 = 0;
         local_f8[0] = 0x104b92;
         local_f8[1] = 0;
         uStack_f0 = 0xb;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_138);
         local_148 = 0;
         local_f8[0] = 0x106cf7;
         local_f8[1] = 0;
         uStack_f0 = 2;
         uStack_ec = 0;
         String::parse_latin1((StrRange*)&local_148);
         ( **(code**)( *(long*)this + 0x48 ) )(local_158, this);
         operator+((char *)
         local_150,(String*)"Required virtual method ";
         String::operator +(local_140, (String*)local_150);
         String::operator +((String*)&local_130, local_140);
         String::operator +((String*)local_f8, (String*)&local_130);
         _err_print_error("_gdvirtual__initialize_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x32, (String*)local_f8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_140);
         CowData<char32_t>::_unref(local_150);
         CowData<char32_t>::_unref(local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         _gdvirtual__initialize_call(Dictionary,Error&)::first_print =
         '\0';
      }

      uVar2 = 0;
   }
 else {
      Dictionary::Dictionary((Dictionary*)&local_128, local_160);
      local_58[0] = (Dictionary*)&local_128;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x1d8 ) )(*(undefined8*)( this + 0x10 ), local_58, local_f8);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c8, *(undefined8*)( this + 0x1d8 ), local_58, local_f8);
      }

      uVar2 = (ulong)local_f8[0];
      Dictionary::~Dictionary((Dictionary*)&local_128);
   }

   LAB_00110b8d:Dictionary::~Dictionary(local_160);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* WebRTCPeerConnectionExtension::create_data_channel(String, Dictionary) */long *WebRTCPeerConnectionExtension::create_data_channel(long *param_1, long *param_2, CowData *param_3, Dictionary *param_4) {
   char cVar1;
   undefined4 uVar2;
   Object *pOVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   long local_188;
   Dictionary local_180[8];
   CowData<char32_t> local_178[8];
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   long local_150;
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
   Dictionary *pDStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_1 = 0;
   Dictionary::Dictionary(local_180, param_4);
   local_188 = 0;
   if (*(long*)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_188, param_3);
   }

   plVar5 = (long*)param_2[0x13];
   if (plVar5 != (long*)0x0) {
      local_118 = 0;
      uStack_114 = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_188);
      Variant::Variant((Variant*)local_60, local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar5 + 0x60 ) )(local_98, plVar5, param_2 + 0x3c, &local_a8, 2, &local_118);
      if (local_118 == 0) {
         lVar4 = Variant::get_validated_object();
         if (lVar4 == 0) {
            pOVar7 = (Object*)*param_1;
            if (pOVar7 != (Object*)0x0) {
               *param_1 = 0;
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar7);
                  pOVar3 = (Object*)0x0;
                  if (cVar1 == '\0') goto LAB_00111790;
                  LAB_00111733:( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
                  if (pOVar3 != (Object*)0x0) goto LAB_00111758;
               }

            }

         }
 else {
            pOVar3 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &WebRTCDataChannel::typeinfo, 0);
            if (pOVar3 == (Object*)0x0) {
               pOVar7 = (Object*)*param_1;
               LAB_001116f4:if (pOVar7 != (Object*)0x0) {
                  *param_1 = 0;
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     pOVar3 = (Object*)0x0;
                     cVar1 = predelete_handler(pOVar7);
                     if (cVar1 != '\0') goto LAB_00111733;
                  }

               }

            }
 else {
               cVar1 = RefCounted::reference();
               pOVar7 = (Object*)*param_1;
               if (cVar1 == '\0') goto LAB_001116f4;
               if (pOVar3 != pOVar7) {
                  *param_1 = (long)pOVar3;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     *param_1 = 0;
                  }

                  if (( ( pOVar7 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) goto LAB_00111733;
               }

               LAB_00111758:cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         LAB_00111790:if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001112c2;
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

   if (( param_2[1] != 0 ) && ( (char)param_2[0x3d] == '\0' )) {
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
      String::parse_latin1((String*)&local_118, "_create_data_channel");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Ref<WebRTCDataChannel>,void>::get_class_info((GetTypeInfo<Ref<WebRTCDataChannel>,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<Dictionary,void>::get_class_info((GetTypeInfo<Dictionary,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      param_2[0x3e] = 0;
      lVar4 = param_2[1];
      pcVar6 = *(code**)( lVar4 + 0xd8 );
      if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xd0 ) ),pcVar6 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar4 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_00111bb3;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00111bd2:lVar4 = param_2[1];
            pcVar6 = *(code**)( lVar4 + 200 );
            if (( ( pcVar6 == (code*)0x0 ) || ( *(long*)( lVar4 + 0xe0 ) == 0 ) ) && ( pcVar6 = *(code**)( lVar4 + 0xc0 ) ),pcVar6 == (code*)0x0) goto LAB_0011197d;
            lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), param_2 + 0x3c);
            param_2[0x3e] = lVar4;
         }
 else {
            lVar4 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_00111bb3:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar4 == 0) goto LAB_00111bd2;
         }

         lVar4 = param_2[1];
      }
 else {
         lVar4 = ( *pcVar6 )(*(undefined8*)( lVar4 + 0xa0 ), param_2 + 0x3c, uVar2);
         param_2[0x3e] = lVar4;
         lVar4 = param_2[1];
      }

      LAB_0011197d:if (*(char*)( lVar4 + 0x29 ) != '\0') {
         plVar5 = (long*)operator_new(0x18, "");
         *plVar5 = (long)( param_2 + 0x3e );
         plVar5[1] = (long)( param_2 + 0x3d );
         plVar5[2] = param_2[0x2d];
         param_2[0x2d] = (long)plVar5;
      }

      *(undefined1*)( param_2 + 0x3d ) = 1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_118);
   }

   if (param_2[0x3e] == 0) {
      if (_gdvirtual__create_data_channel_call(String, Dictionary, Ref<WebRTCDataChannel> & ::first_print != '\0') {
         local_148 = 0;
         local_118 = 0x10e4e0;
         uStack_114 = 0;
         uStack_110 = 0x23;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_148);
         local_158 = 0;
         local_118 = 0x104b9e;
         uStack_114 = 0;
         uStack_110 = 0x14;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_158);
         local_168 = 0;
         local_118 = 0x106cf7;
         uStack_114 = 0;
         uStack_110 = 2;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_168);
         ( **(code**)( *param_2 + 0x48 ) )(local_178, param_2);
         operator+((char *)
         local_170,(String*)"Required virtual method ";
         String::operator +(local_160, (String*)local_170);
         String::operator +((String*)&local_150, local_160);
         String::operator +((String*)&local_118, (String*)&local_150);
         _err_print_error("_gdvirtual__create_data_channel_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x33, (String*)&local_118, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
         CowData<char32_t>::_unref(local_170);
         CowData<char32_t>::_unref(local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         _gdvirtual__create_data_channel_call(String,Dictionary,Ref<WebRTCDataChannel>&)::first_print =
         '\0';
      }

      goto LAB_001112c2;
   }

   local_150 = 0;
   if (local_188 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)&local_188);
   }

   Dictionary::Dictionary((Dictionary*)&local_148, local_180);
   local_118 = 0;
   uStack_114 = 0;
   local_78 = (CowData<char32_t>*)&local_150;
   pDStack_70 = (Dictionary*)&local_148;
   if (*(code**)( param_2[1] + 0xe0 ) == (code*)0x0) {
      ( *(code*)param_2[0x3e] )(param_2[2], &local_78, &local_118);
      pOVar7 = (Object*)CONCAT44(uStack_114, local_118);
      if (pOVar7 != (Object*)0x0) goto LAB_0011139c;
      LAB_001116db:pOVar7 = (Object*)*param_1;
      if (pOVar7 != (Object*)0x0) {
         LAB_001115dd:*param_1 = 0;
         LAB_001113ec:cVar1 = RefCounted::unreference();
         if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         goto LAB_001113fc;
      }

   }
 else {
      ( **(code**)( param_2[1] + 0xe0 ) )(param_2[2], param_2 + 0x3c, param_2[0x3e], &local_78, &local_118);
      pOVar7 = (Object*)CONCAT44(uStack_114, local_118);
      if (pOVar7 == (Object*)0x0) goto LAB_001116db;
      LAB_0011139c:cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
         pOVar3 = (Object*)*param_1;
         if (pOVar3 != pOVar7) {
            *param_1 = (long)pOVar7;
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *param_1 = 0;
            }

            if (( ( pOVar3 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

      goto LAB_001113ec;
   }

   pOVar7 = (Object*)*param_1;
   if (pOVar7 != (Object*)0x0) goto LAB_001115dd;
   LAB_001113fc:if (( CONCAT44(uStack_114, local_118) != 0 ) && ( cVar1 = cVar1 != '\0' )) {
      pOVar7 = (Object*)CONCAT44(uStack_114, local_118);
      cVar1 = predelete_handler(pOVar7);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }

   }

}
Dictionary::~Dictionary((Dictionary*)&local_148);CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);LAB_001112c2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);Dictionary::~Dictionary(local_180);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* WebRTCPeerConnectionExtension::set_remote_description(String, String) */ulong WebRTCPeerConnectionExtension::set_remote_description(WebRTCPeerConnectionExtension *this, long *param_2, long *param_3) {
   undefined4 uVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_188;
   long local_180;
   CowData<char32_t> local_178[8];
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   long local_150;
   undefined8 local_148;
   long local_140[5];
   uint local_118[2];
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
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*param_3 != 0) {
      plVar6 = (long*)( *param_3 + -0x10 );
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00111d14;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_180 = *param_3;
      }

   }

   LAB_00111d14:local_188 = 0;
   plVar6 = (long*)( *param_2 + -0x10 );
   if (*param_2 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00111d4a;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_188 = *param_2;
      }

   }

   LAB_00111d4a:plVar6 = *(long**)( this + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_188);
      Variant::Variant((Variant*)local_60, (String*)&local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x210, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         uVar3 = Variant::operator_cast_to_long((Variant*)local_98);
         uVar3 = uVar3 & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00111e58;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x218] == (WebRTCPeerConnectionExtension)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String*)local_118, "_set_remote_description");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x220 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_0011241f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_0011243e:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00112305;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x210);
            *(undefined8*)( this + 0x220 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_0011241f:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_0011243e;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x210, uVar1);
         *(undefined8*)( this + 0x220 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00112305:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x220 );
         plVar6[1] = (long)( this + 0x218 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x218] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   if (*(long*)( this + 0x220 ) == 0) {
      if (_gdvirtual__set_remote_description_call(String, String, Error & ::first_print != '\0') {
         local_148 = 0;
         local_118[0] = 0x10e4e0;
         local_118[1] = 0;
         uStack_110 = 0x23;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_148);
         local_158 = 0;
         local_118[0] = 0x104bc1;
         local_118[1] = 0;
         uStack_110 = 0x17;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_158);
         local_168 = 0;
         local_118[0] = 0x106cf7;
         local_118[1] = 0;
         uStack_110 = 2;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_168);
         ( **(code**)( *(long*)this + 0x48 ) )(local_178, this);
         operator+((char *)
         local_170,(String*)"Required virtual method ";
         String::operator +(local_160, (String*)local_170);
         String::operator +((String*)&local_150, local_160);
         String::operator +((String*)local_118, (String*)&local_150);
         _err_print_error("_gdvirtual__set_remote_description_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x35, (String*)local_118, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
         CowData<char32_t>::_unref(local_170);
         CowData<char32_t>::_unref(local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         _gdvirtual__set_remote_description_call(String,String,Error&)::first_print =
         '\0';
      }

      uVar3 = 0;
   }
 else {
      local_150 = 0;
      if (local_188 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)&local_188);
      }

      local_148 = 0;
      if (local_180 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_180);
      }

      local_78 = (CowData<char32_t>*)&local_150;
      pCStack_70 = (CowData<char32_t>*)&local_148;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x220 ) )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x210, *(code**)( this + 0x220 ), &local_78, local_118);
      }

      uVar3 = (ulong)local_118[0];
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   }

   LAB_00111e58:CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WebRTCPeerConnectionExtension::set_local_description(String, String) */ulong WebRTCPeerConnectionExtension::set_local_description(WebRTCPeerConnectionExtension *this, long *param_2, long *param_3) {
   undefined4 uVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   long *plVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_188;
   long local_180;
   CowData<char32_t> local_178[8];
   CowData<char32_t> local_170[8];
   undefined8 local_168;
   String local_160[8];
   undefined8 local_158;
   long local_150;
   undefined8 local_148;
   long local_140[5];
   uint local_118[2];
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
   CowData<char32_t> *pCStack_70;
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = 0;
   if (*param_3 != 0) {
      plVar6 = (long*)( *param_3 + -0x10 );
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_00112584;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_180 = *param_3;
      }

   }

   LAB_00112584:local_188 = 0;
   plVar6 = (long*)( *param_2 + -0x10 );
   if (*param_2 != 0) {
      do {
         lVar5 = *plVar6;
         if (lVar5 == 0) goto LAB_001125ba;
         LOCK();
         lVar2 = *plVar6;
         bVar8 = lVar5 == lVar2;
         if (bVar8) {
            *plVar6 = lVar5 + 1;
            lVar2 = lVar5;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar2 != -1) {
         local_188 = *param_2;
      }

   }

   LAB_001125ba:plVar6 = *(long**)( this + 0x98 );
   if (plVar6 != (long*)0x0) {
      local_118[0] = 0;
      local_118[1] = 0;
      uStack_110 = 0;
      Variant::Variant((Variant*)&local_78, (String*)&local_188);
      Variant::Variant((Variant*)local_60, (String*)&local_180);
      local_a8 = (Variant*)&local_78;
      pVStack_a0 = (Variant*)local_60;
      ( **(code**)( *plVar6 + 0x60 ) )((Variant*)local_98, plVar6, this + 0x228, &local_a8, 2, local_118);
      if (local_118[0] == 0) {
         uVar3 = Variant::operator_cast_to_long((Variant*)local_98);
         uVar3 = uVar3 & 0xffffffff;
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001126c8;
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

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x230] == (WebRTCPeerConnectionExtension)0x0 )) {
      local_118[0] = 0;
      local_118[1] = 0;
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
      String::parse_latin1((String*)local_118, "_set_local_description");
      local_e0 = CONCAT44(local_e0._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_148);
      PropertyInfo::operator =((PropertyInfo*)&uStack_110, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      local_c0 = local_c0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_148);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_d8, (PropertyInfo*)&local_148);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
      Vector<int>::push_back(local_b8, 0);
      uVar1 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x238 ) = 0;
      lVar5 = *(long*)( this + 8 );
      pcVar7 = *(code**)( lVar5 + 0xd8 );
      if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xd0 ) ),pcVar7 == (code*)0x0) {
         local_158 = 0;
         String::parse_latin1((String*)&local_158, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_150, (String*)&local_158, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_148, (StringName*)&local_150);
         if (local_140[0] == 0) {
            lVar5 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') goto LAB_00112c8f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            LAB_00112cae:lVar5 = *(long*)( this + 8 );
            pcVar7 = *(code**)( lVar5 + 200 );
            if (( ( pcVar7 == (code*)0x0 ) || ( *(long*)( lVar5 + 0xe0 ) == 0 ) ) && ( pcVar7 = *(code**)( lVar5 + 0xc0 ) ),pcVar7 == (code*)0x0) goto LAB_00112b75;
            uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x228);
            *(undefined8*)( this + 0x238 ) = uVar4;
         }
 else {
            lVar5 = *(long*)( local_140[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_140);
            if (StringName::configured != '\0') {
               LAB_00112c8f:if (local_150 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
            if (lVar5 == 0) goto LAB_00112cae;
         }

         lVar5 = *(long*)( this + 8 );
      }
 else {
         uVar4 = ( *pcVar7 )(*(undefined8*)( lVar5 + 0xa0 ), this + 0x228, uVar1);
         *(undefined8*)( this + 0x238 ) = uVar4;
         lVar5 = *(long*)( this + 8 );
      }

      LAB_00112b75:if (*(char*)( lVar5 + 0x29 ) != '\0') {
         plVar6 = (long*)operator_new(0x18, "");
         *plVar6 = (long)( this + 0x238 );
         plVar6[1] = (long)( this + 0x230 );
         plVar6[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar6;
      }

      this[0x230] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_118);
   }

   if (*(long*)( this + 0x238 ) == 0) {
      if (_gdvirtual__set_local_description_call(String, String, Error & ::first_print != '\0') {
         local_148 = 0;
         local_118[0] = 0x10e4e0;
         local_118[1] = 0;
         uStack_110 = 0x23;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_148);
         local_158 = 0;
         local_118[0] = 0x104bd9;
         local_118[1] = 0;
         uStack_110 = 0x16;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_158);
         local_168 = 0;
         local_118[0] = 0x106cf7;
         local_118[1] = 0;
         uStack_110 = 2;
         uStack_10c = 0;
         String::parse_latin1((StrRange*)&local_168);
         ( **(code**)( *(long*)this + 0x48 ) )(local_178, this);
         operator+((char *)
         local_170,(String*)"Required virtual method ";
         String::operator +(local_160, (String*)local_170);
         String::operator +((String*)&local_150, local_160);
         String::operator +((String*)local_118, (String*)&local_150);
         _err_print_error("_gdvirtual__set_local_description_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x36, (String*)local_118, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_160);
         CowData<char32_t>::_unref(local_170);
         CowData<char32_t>::_unref(local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         _gdvirtual__set_local_description_call(String,String,Error&)::first_print =
         '\0';
      }

      uVar3 = 0;
   }
 else {
      local_150 = 0;
      if (local_188 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_150, (CowData*)&local_188);
      }

      local_148 = 0;
      if (local_180 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_148, (CowData*)&local_180);
      }

      local_78 = (CowData<char32_t>*)&local_150;
      pCStack_70 = (CowData<char32_t>*)&local_148;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x238 ) )(*(undefined8*)( this + 0x10 ), &local_78, local_118);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x228, *(code**)( this + 0x238 ), &local_78, local_118);
      }

      uVar3 = (ulong)local_118[0];
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   }

   LAB_001126c8:CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* WebRTCPeerConnectionExtension::add_ice_candidate(String, int, String) */ulong WebRTCPeerConnectionExtension::add_ice_candidate(WebRTCPeerConnectionExtension *this, long *param_2, int param_3, CowData *param_4) {
   Variant *pVVar1;
   undefined4 uVar2;
   long lVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_1a8;
   long local_1a0;
   CowData<char32_t> local_198[8];
   CowData<char32_t> local_190[8];
   undefined8 local_188;
   String local_180[8];
   undefined8 local_178;
   long local_170;
   undefined8 local_168;
   long local_160[5];
   uint local_138[2];
   undefined4 uStack_130;
   undefined4 uStack_12c;
   undefined1 local_128[16];
   undefined8 local_118;
   undefined8 local_110;
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
   CowData<char32_t> *local_88;
   long *plStack_80;
   CowData<char32_t> *local_78;
   Variant local_70[24];
   Variant local_58[24];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_1a0 = 0;
   if (*(long*)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, param_4);
   }

   local_1a8 = 0;
   plVar7 = (long*)( *param_2 + -0x10 );
   if (*param_2 != 0) {
      do {
         lVar6 = *plVar7;
         if (lVar6 == 0) goto LAB_00112e1d;
         LOCK();
         lVar3 = *plVar7;
         bVar10 = lVar6 == lVar3;
         if (bVar10) {
            *plVar7 = lVar6 + 1;
            lVar3 = lVar6;
         }

         UNLOCK();
      }
 while ( !bVar10 );
      if (lVar3 != -1) {
         local_1a8 = *param_2;
      }

   }

   LAB_00112e1d:plVar7 = *(long**)( this + 0x98 );
   if (plVar7 != (long*)0x0) {
      local_138[0] = 0;
      local_138[1] = 0;
      uStack_130 = 0;
      Variant::Variant((Variant*)&local_88, (String*)&local_1a8);
      Variant::Variant(local_70, param_3);
      Variant::Variant(local_58, (String*)&local_1a0);
      local_c8 = (Variant*)&local_88;
      pVStack_c0 = local_70;
      local_b8 = local_58;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_a8, plVar7, this + 0x240, &local_c8, 3, local_138);
      if (local_138[0] == 0) {
         uVar4 = Variant::operator_cast_to_long((Variant*)local_a8);
         uVar4 = uVar4 & 0xffffffff;
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         pVVar9 = (Variant*)local_40;
         do {
            pVVar1 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar9 != (Variant*)&local_88 );
         goto LAB_00112f47;
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      pVVar9 = (Variant*)local_40;
      do {
         pVVar1 = pVVar9 + -0x18;
         pVVar9 = pVVar9 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar9 != (Variant*)&local_88 );
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x248] == (WebRTCPeerConnectionExtension)0x0 )) {
      local_138[0] = 0;
      local_138[1] = 0;
      local_128 = (undefined1[16])0x0;
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
      String::parse_latin1((String*)local_138, "_add_ice_candidate");
      local_100 = CONCAT44(local_100._4_4_, 0x88);
      GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void>*)&local_168);
      PropertyInfo::operator =((PropertyInfo*)&uStack_130, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      local_e0 = local_e0 & 0xffffffff00000000;
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      GetTypeInfo<int,void>::get_class_info((GetTypeInfo<int,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 3);
      GetTypeInfo<String,void>::get_class_info((GetTypeInfo<String,void>*)&local_168);
      List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_f8, (PropertyInfo*)&local_168);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_168);
      Vector<int>::push_back(local_d8, 0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8*)( this + 0x250 ) = 0;
      lVar6 = *(long*)( this + 8 );
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_178 = 0;
         String::parse_latin1((String*)&local_178, "WebRTCPeerConnectionExtension");
         StringName::StringName((StringName*)&local_170, (String*)&local_178, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_168, (StringName*)&local_170);
         if (local_160[0] == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') goto LAB_001134e4;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            LAB_00113501:lVar6 = *(long*)( this + 8 );
            pcVar8 = *(code**)( lVar6 + 200 );
            if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 == (code*)0x0) goto LAB_00113416;
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x240);
            *(undefined8*)( this + 0x250 ) = uVar5;
         }
 else {
            lVar6 = *(long*)( local_160[0] + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)local_160);
            if (StringName::configured != '\0') {
               LAB_001134e4:if (local_170 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
            if (lVar6 == 0) goto LAB_00113501;
         }

         lVar6 = *(long*)( this + 8 );
      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x240, uVar2);
         *(undefined8*)( this + 0x250 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00113416:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x250 );
         plVar7[1] = (long)( this + 0x248 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x248] = (WebRTCPeerConnectionExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_138);
   }

   if (*(long*)( this + 0x250 ) == 0) {
      if (_gdvirtual__add_ice_candidate_call(String, ,int, String, Error & ::first_print != '\0') {
         local_168 = 0;
         local_138[0] = 0x10e4e0;
         local_138[1] = 0;
         uStack_130 = 0x23;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_168);
         local_178 = 0;
         local_138[0] = 0x104bf0;
         local_138[1] = 0;
         uStack_130 = 0x12;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_178);
         local_138[0] = 0x106cf7;
         local_138[1] = 0;
         local_188 = 0;
         uStack_130 = 2;
         uStack_12c = 0;
         String::parse_latin1((StrRange*)&local_188);
         ( **(code**)( *(long*)this + 0x48 ) )(local_198, this);
         operator+((char *)
         local_190,(String*)"Required virtual method ";
         String::operator +(local_180, (String*)local_190);
         String::operator +((String*)&local_170, local_180);
         String::operator +((String*)local_138, (String*)&local_170);
         _err_print_error("_gdvirtual__add_ice_candidate_call", "modules/webrtc/webrtc_peer_connection_extension.h", 0x37, (String*)local_138, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_170);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_180);
         CowData<char32_t>::_unref(local_190);
         CowData<char32_t>::_unref(local_198);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         _gdvirtual__add_ice_candidate_call(String,int,String,Error&)::first_print =
         '\0';
      }

      uVar4 = 0;
   }
 else {
      local_178 = 0;
      if (local_1a8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_178, (CowData*)&local_1a8);
      }

      local_168 = 0;
      local_170 = (long)param_3;
      if (local_1a0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_168, (CowData*)&local_1a0);
      }

      plStack_80 = &local_170;
      local_88 = (CowData<char32_t>*)&local_178;
      local_78 = (CowData<char32_t>*)&local_168;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( **(code**)( this + 0x250 ) )(*(undefined8*)( this + 0x10 ), &local_88, local_138);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x240, *(code**)( this + 0x250 ), &local_88, local_138);
      }

      uVar4 = (ulong)local_138[0];
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   }

   LAB_00112f47:CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* WebRTCPeerConnection::default_extension */void WebRTCPeerConnection::_GLOBAL__sub_I_default_extension(void) {
   default_extension = 0;
   __cxa_atexit(StringName::~StringName, &default_extension, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension() */void WebRTCPeerConnectionExtension::~WebRTCPeerConnectionExtension(WebRTCPeerConnectionExtension *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::SignalingState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::SignalingState> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::GatheringState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::GatheringState> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC() */void MethodBindTRC<WebRTCPeerConnection::ConnectionState>::~MethodBindTRC(MethodBindTRC<WebRTCPeerConnection::ConnectionState> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error>::~MethodBindTR() */void MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, String, int, String>::~MethodBindTR() */void MethodBindTR<Error,String,int,String>::~MethodBindTR(MethodBindTR<Error,String,int,String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, String, String>::~MethodBindTR() */void MethodBindTR<Error,String,String>::~MethodBindTR(MethodBindTR<Error,String,String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<WebRTCDataChannel>, String, Dictionary>::~MethodBindTR() */void MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary>::~MethodBindTR(MethodBindTR<Ref<WebRTCDataChannel>,String,Dictionary> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, Dictionary>::~MethodBindTR() */void MethodBindTR<Error,Dictionary>::~MethodBindTR(MethodBindTR<Error,Dictionary> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTS<StringName const&>::~MethodBindTS() */void MethodBindTS<StringName_const&>::~MethodBindTS(MethodBindTS<StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

