/* TCPServer::get_local_port() const */undefined2 TCPServer::get_local_port(TCPServer *this) {
   long in_FS_OFFSET;
   undefined2 local_12;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( **(long**)( this + 0x180 ) + 0x1b8 ) )(*(long**)( this + 0x180 ), 0, &local_12);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_12;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* TCPServer::stop() */void TCPServer::stop(TCPServer *this) {
   if (*(long**)( this + 0x180 ) != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100063. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( **(long**)( this + 0x180 ) + 0x158 ) )();
      return;
   }
   return;
}/* TCPServer::listen(unsigned short, IPAddress const&) */undefined8 TCPServer::listen(TCPServer *this, ushort param_1, IPAddress *param_2) {
   long lVar1;
   char cVar2;
   byte bVar3;
   undefined8 uVar4;
   int iVar5;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( this + 0x180 ) == (long*)0x0) {
      _err_print_error("listen", "core/io/tcp_server.cpp", 0x2b, "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE", 0, 0);
      uVar4 = 2;
      goto LAB_00100180;
   }
   cVar2 = ( **(code**)( **(long**)( this + 0x180 ) + 0x1a8 ) )();
   if (cVar2 == '\0') {
      if (param_2[0x10] == (IPAddress)0x0) {
         iVar5 = 3;
         if (param_2[0x11] == (IPAddress)0x0) {
            _err_print_error("listen", "core/io/tcp_server.cpp", 0x2d, "Condition \"!p_bind_address.is_valid() && !p_bind_address.is_wildcard()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
            uVar4 = 0x1f;
            goto LAB_00100180;
         }
      } else {
         local_24 = 3;
         bVar3 = IPAddress::is_ipv4();
         iVar5 = 2 - (uint)bVar3;
      }
      local_24 = iVar5;
      iVar5 = ( **(code**)( **(long**)( this + 0x180 ) + 0x150 ) )(*(long**)( this + 0x180 ), 1, &local_24);
      if (iVar5 != 0) {
         _err_print_error("listen", "core/io/tcp_server.cpp", 0x39, "Condition \"err != OK\" is true. Returning: ERR_CANT_CREATE", 0, 0);
         uVar4 = 0x14;
         goto LAB_00100180;
      }
      ( **(code**)( **(long**)( this + 0x180 ) + 0x1c8 ) )(*(long**)( this + 0x180 ), 0);
      ( **(code**)( **(long**)( this + 0x180 ) + 0x1e0 ) )(*(long**)( this + 0x180 ), 1);
      iVar5 = ( **(code**)( **(long**)( this + 0x180 ) + 0x160 ) )(*(long**)( this + 0x180 ), param_1);
      lVar1 = **(long**)( this + 0x180 );
      if (iVar5 == 0) {
         uVar4 = ( **(code**)( lVar1 + 0x168 ) )(*(long**)( this + 0x180 ), 8);
         if ((int)uVar4 != 0) {
            ( **(code**)( **(long**)( this + 0x180 ) + 0x158 ) )();
            uVar4 = 1;
         }
         goto LAB_00100180;
      }
      ( **(code**)( lVar1 + 0x158 ) )();
   } else {
      _err_print_error("listen", "core/io/tcp_server.cpp", 0x2c, "Condition \"_sock->is_open()\" is true. Returning: ERR_ALREADY_IN_USE", 0, 0);
   }
   uVar4 = 0x16;
   LAB_00100180:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* TCPServer::is_listening() const */undefined8 TCPServer::is_listening(TCPServer *this) {
   undefined8 uVar1;
   if (*(long**)( this + 0x180 ) != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x001002c3. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( **(long**)( this + 0x180 ) + 0x1a8 ) )();
      return uVar1;
   }
   _err_print_error("is_listening", "core/io/tcp_server.cpp", 0x55, "Condition \"_sock.is_null()\" is true. Returning: false", 0, 0);
   return 0;
}/* TCPServer::is_connection_available() const */bool TCPServer::is_connection_available(TCPServer *this) {
   char cVar1;
   int iVar2;
   if (*(long**)( this + 0x180 ) == (long*)0x0) {
      _err_print_error("is_connection_available", "core/io/tcp_server.cpp", 0x5b, "Condition \"_sock.is_null()\" is true. Returning: false", 0, 0);
   } else {
      cVar1 = ( **(code**)( **(long**)( this + 0x180 ) + 0x1a8 ) )();
      if (cVar1 != '\0') {
         iVar2 = ( **(code**)( **(long**)( this + 0x180 ) + 0x178 ) )(*(long**)( this + 0x180 ), 0, 0);
         return iVar2 == 0;
      }
   }
   return false;
}/* TCPServer::~TCPServer() */void TCPServer::~TCPServer(TCPServer *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00106bc0;
   if (*(long**)( this + 0x180 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x180 ) + 0x158 ) )();
      if (*(long*)( this + 0x180 ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + 0x180 );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }
         }
      }
   }
   *(undefined***)this = &PTR__initialize_classv_00106a60;
   Object::~Object((Object*)this);
   return;
}/* TCPServer::~TCPServer() */void TCPServer::~TCPServer(TCPServer *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00106bc0;
   if (*(long**)( this + 0x180 ) != (long*)0x0) {
      ( **(code**)( **(long**)( this + 0x180 ) + 0x158 ) )();
      if (*(long*)( this + 0x180 ) != 0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            pOVar1 = *(Object**)( this + 0x180 );
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }
         }
      }
   }
   *(undefined***)this = &PTR__initialize_classv_00106a60;
   Object::~Object((Object*)this);
   operator_delete(this, 0x188);
   return;
}/* TCPServer::take_connection() */void TCPServer::take_connection(void) {
   undefined2 uVar1;
   char cVar2;
   StreamPeerTCP *this;
   Object *pOVar3;
   TCPServer *in_RSI;
   undefined8 *in_RDI;
   Object *pOVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   undefined2 local_52;
   Object *local_50;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_RDI = 0;
   cVar2 = is_connection_available(in_RSI);
   if (cVar2 == '\0') goto LAB_001004d9;
   IPAddress::clear();
   local_52 = 0;
   ( **(code**)( **(long**)( in_RSI + 0x180 ) + 0x1a0 ) )(&local_50, *(long**)( in_RSI + 0x180 ), local_48, &local_52);
   pOVar3 = local_50;
   if (local_50 == (Object*)0x0) goto LAB_001004d9;
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      if (( local_50 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),pOVar4 = local_50,cVar2 == '\0') goto LAB_001004d9;
      pOVar3 = (Object*)0x0;
      cVar2 = predelete_handler(local_50);
      if (cVar2 == '\0') goto LAB_001004d9;
      LAB_0010057c:( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      if (pOVar3 == (Object*)0x0) goto LAB_001004d9;
   } else if (( ( local_50 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_50,cVar2 != '\0' )) goto LAB_0010057c;
   this(StreamPeerTCP * operator_new(0x1b0, ""));
   StreamPeerTCP::StreamPeerTCP(this);
   postinitialize_handler((Object*)this);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar4 = (Object*)*in_RDI;
      if (pOVar4 != (Object*)0x0) {
         *in_RDI = 0;
         cVar2 = RefCounted::unreference();
         if (( cVar2 == '\0' ) || ( cVar2 = predelete_handler(pOVar4) ),cVar2 == '\0') goto LAB_001005ef;
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
         pOVar4 = (Object*)*in_RDI;
      }
   } else {
      pOVar4 = (Object*)*in_RDI;
      pOVar5 = pOVar4;
      if (this != (StreamPeerTCP*)pOVar4) {
         *in_RDI = this;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *in_RDI = 0;
         }
         pOVar5 = (Object*)this;
         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
         Memory::free_static(pOVar4, false);
      }
   }
   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar5) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
   }
   LAB_001005ef:pOVar4 = (Object*)*in_RDI;
}uVar1 = local_52;local_50 = pOVar3;cVar2 = RefCounted::reference();if (cVar2 == '\0') {
   local_50 = (Object*)0x0;
}StreamPeerTCP::accept_socket(pOVar4, &local_50, uVar1);if (( ( local_50 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_50,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);Memory::free_static(pOVar4, false);}cVar2 = RefCounted::unreference();if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar3) ),cVar2 != '\0') {
   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
}LAB_001004d9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return;}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* TCPServer::TCPServer() */void TCPServer::TCPServer(TCPServer *this) {
   char cVar1;
   long lVar2;
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_00106bc0;
   lVar2 = NetSocket::create();
   if (lVar2 != 0) {
      *(long*)( this + 0x180 ) = lVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 != '\0') {
         return;
      }
   }
   *(undefined8*)( this + 0x180 ) = 0;
   return;
}/* TCPServer::_bind_methods() */void TCPServer::_bind_methods(void) {
   char cVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   MethodBind *pMVar5;
   long *plVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_b8[2];
   long *local_a8;
   Variant *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_98 = (Variant*)&_LC20;
   pcStack_90 = "bind_address";
   auStack_70._8_8_ = auStack_70._0_8_;
   auStack_70._0_8_ = &pcStack_90;
   local_78 = &local_98;
   D_METHODP((char*)local_b8, (char***)"listen", (uint)(Variant*)&local_78);
   Variant::Variant((Variant*)&local_78, "*");
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar5 = create_method_bind<TCPServer,Error,unsigned_short,IPAddress_const&>(listen);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   } else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)local_b8, (char***)"is_connection_available", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<TCPServer,bool>(is_connection_available);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)local_b8, (char***)"is_listening", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<TCPServer,bool>(is_listening);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)local_b8, (char***)"get_local_port", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<TCPServer,int>(get_local_port);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)local_b8, (char***)"take_connection", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<TCPServer,Ref<StreamPeerTCP>>(take_connection);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   D_METHODP((char*)local_b8, (char***)&_LC25, 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar5 = create_method_bind<TCPServer>(stop);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_b8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }
   plVar4 = local_a8;
   if (local_a8 != (long*)0x0) {
      LOCK();
      plVar6 = local_a8 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_a8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_a8[-1];
         local_a8 = (long*)0x0;
         if (lVar2 != 0) {
            lVar7 = 0;
            plVar6 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar2 != lVar7 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x106f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}/* TCPServer::is_class_ptr(void*) const */uint TCPServer::is_class_ptr(TCPServer *this, void *param_1) {
   return (uint)CONCAT71(0x106f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* TCPServer::_getv(StringName const&, Variant&) const */undefined8 TCPServer::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* TCPServer::_setv(StringName const&, Variant const&) */undefined8 TCPServer::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* TCPServer::_validate_propertyv(PropertyInfo&) const */void TCPServer::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* TCPServer::_property_can_revertv(StringName const&) const */undefined8 TCPServer::_property_can_revertv(StringName *param_1) {
   return 0;
}/* TCPServer::_property_get_revertv(StringName const&, Variant&) const */undefined8 TCPServer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* TCPServer::_notificationv(int, bool) */void TCPServer::_notificationv(int param_1, bool param_2) {
   return;
}/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Ref<StreamPeerTCP>>::_gen_argument_type(int) const */undefined8 MethodBindTR<Ref<StreamPeerTCP>>::_gen_argument_type(int param_1) {
   return 0x18;
}/* MethodBindTR<Ref<StreamPeerTCP>>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<StreamPeerTCP>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTR<Error, unsigned short, IPAddress const&>::_gen_argument_type(int) const */char MethodBindTR<Error,unsigned_short,IPAddress_const&>::_gen_argument_type(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this, int param_1) {
   return ( param_1 == 1 ) * '\x02' + '\x02';
}/* MethodBindTR<Error, unsigned short, IPAddress const&>::get_argument_meta(int) const */byte MethodBindTR<Error,unsigned_short,IPAddress_const&>::get_argument_meta(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this, int param_1) {
   return -(param_1 == 0) & 6;
}/* MethodBindTR<Error, unsigned short, IPAddress const&>::~MethodBindTR() */void MethodBindTR<Error,unsigned_short,IPAddress_const&>::~MethodBindTR(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106d20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, unsigned short, IPAddress const&>::~MethodBindTR() */void MethodBindTR<Error,unsigned_short,IPAddress_const&>::~MethodBindTR(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106d20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106d80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106d80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106de0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106de0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR() */void MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR(MethodBindTR<Ref<StreamPeerTCP>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106e40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR() */void MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR(MethodBindTR<Ref<StreamPeerTCP>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106e40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106ea0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00106ea0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106a60;
   Object::~Object((Object*)this);
   return;
}/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106a60;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101633:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101633;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010169e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010169e:return &_get_class_namev();
}/* TCPServer::_get_class_namev() const */undefined8 *TCPServer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101713:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101713;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TCPServer");
         goto LAB_0010177e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TCPServer");
   LAB_0010177e:return &_get_class_namev();
}/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* TCPServer::get_class() const */void TCPServer::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_001019df;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_001019df:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00101a93;
   }
   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00101b43;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00101b43:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00101a93;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00101a93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* TCPServer::is_class(String const&) const */undefined8 TCPServer::is_class(TCPServer *this, String *param_1) {
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
      } else {
         __s = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00101c6f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }
                  UNLOCK();
               } while ( !bVar8 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00101c6f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar5 != '\0') goto LAB_00101d23;
   }
   cVar5 = String::operator ==(param_1, "TCPServer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }
   } else {
      LAB_00101d23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC11;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x00101ebc;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00101ebc:local_58 = lVar2;
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
}/* MethodBindTR<Ref<StreamPeerTCP>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<StreamPeerTCP>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "StreamPeerTCP";
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x18;
   puVar3[6] = 0x11;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] != 0x11) {
         StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
         goto LAB_00101fc0;
      }
   }
   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(char**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      StringName::unref();
      *(char**)( puVar3 + 4 ) = local_48;
   }
   LAB_00101fc0:lVar2 = local_58;
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
}/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC11;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
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
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x001021dc;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001021dc:local_58 = lVar2;
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
}/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      initialize_class()::initialized = '\x01'
      ;;
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_00102528:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102528;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00102546;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar6;
   joined_r0x00102546:if (lVar2 == 0) {
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
}/* TCPServer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void TCPServer::_get_property_listv(TCPServer *this, List *param_1, bool param_2) {
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
   local_78 = "TCPServer";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "TCPServer";
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
      LAB_00102928:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00102928;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00102945;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x00102945:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "TCPServer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   undefined *puVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x102bf5);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC15;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar8 = 0;
         lVar7 = -2;
      } else {
         lVar8 = local_50[-1];
         lVar7 = lVar8 + -2;
         if (-1 < lVar7) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar7 ));
            String::operator +((String*)this, (String*)&local_48);
            puVar5 = local_48;
            lVar8 = local_60;
            if (local_48 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
                  lVar8 = local_60;
               }
            }
            goto joined_r0x00102cca;
         }
      }
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar8, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   local_60 = 0;
   local_48 = &_LC15;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   lVar8 = local_60;
   joined_r0x00102cca:local_60 = lVar8;
   if (lVar8 != 0) {
      LOCK();
      plVar1 = (long*)( lVar8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }
   }
   plVar1 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar6 = local_50 + -2;
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar8 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar8 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar3 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            } while ( lVar8 != lVar7 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return this;
}/* MethodBind* create_method_bind<TCPServer, Error, unsigned short, IPAddress const&>(Error
   (TCPServer::*)(unsigned short, IPAddress const&)) */MethodBind *create_method_bind<TCPServer,Error,unsigned_short,IPAddress_const&>(_func_Error_ushort_IPAddress_ptr *param_1) {
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
   *(_func_Error_ushort_IPAddress_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00106d20;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "TCPServer";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<TCPServer, bool>(bool (TCPServer::*)() const) */MethodBind *create_method_bind<TCPServer,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00106d80;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TCPServer";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<TCPServer, int>(int (TCPServer::*)() const) */MethodBind *create_method_bind<TCPServer,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00106de0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TCPServer";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<TCPServer, Ref<StreamPeerTCP>>(Ref<StreamPeerTCP>
   (TCPServer::*)()) */MethodBind *create_method_bind<TCPServer,Ref<StreamPeerTCP>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00106e40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TCPServer";
   local_30 = 9;
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
}/* MethodBind* create_method_bind<TCPServer>(void (TCPServer::*)()) */MethodBind *create_method_bind<TCPServer>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00106ea0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TCPServer";
   local_30 = 9;
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
}/* TCPServer::_bind_methods() [clone .cold] */void TCPServer::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* TCPServer::_initialize_classv() */void TCPServer::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00103629;
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
         LAB_0010373a:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_0010374a:RefCounted::_bind_methods();
         }
      } else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010373a;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010374a;
      }
      RefCounted::initialize_class() {
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
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00103948) */
   }
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
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      } else {
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
   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      plVar6 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar6 != (long*)0x0 ) && ( plVar6[1] != 0 ) ) && ( *(char*)( plVar6[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
         if (plVar6[1] == 0) {
            plVar5 = (long*)plVar6[0x23];
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *plVar6 + 0x40 ) )(plVar6);
            }
         } else {
            plVar5 = (long*)( plVar6[1] + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error(&_LC35, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            pcVar3 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar6 = (long*)( local_48 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar6 = (long*)( local_50 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00103de0;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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
            ( *(code*)pVVar4 )();
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00103de0:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         } else {
            pVVar4 = param_2[1] + 0x20;
         }
         if (local_38 == *(char**)pVVar4) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_30 = 0x35;
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
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
            goto LAB_0010426b;
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
         /* WARNING: Could not recover jumptable at 0x001040d2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }
      LAB_0010426b:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         } else {
            plVar3 = (long*)( (long)param_2[1] + 0x20 );
         }
         if (local_38 == (char*)*plVar3) {
            if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_30 = 0x35;
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_40);
            vformat<StringName>((StringName*)&local_38, (StrRange*)&local_40, &local_48);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
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
            goto LAB_0010446b;
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
         /* WARNING: Could not recover jumptable at 0x001042d2. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }
      LAB_0010446b:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      char *pcVar3;
      int iVar4;
      long *plVar6;
      undefined4 in_register_00000014;
      long *plVar7;
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
      Variant *pVVar5;
      plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar7[1] == 0) {
            plVar6 = (long*)plVar7[0x23];
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
            }
         } else {
            plVar6 = (long*)( plVar7[1] + 0x20 );
         }
         if (local_58 == (char*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC35, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar7 = (long*)( local_58 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar7 = (long*)( local_60 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_001045c0;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar5 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar5 & 1 ) != 0) {
               pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
            }
            iVar4 = ( *(code*)pVVar5 )();
            Variant::Variant((Variant*)local_48, iVar4);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_001045c0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      int iVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
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
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104824;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      iVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(long*)( param_3 + 8 ) = (long)iVar3;
      LAB_00104824:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      int iVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
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
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104a23;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      iVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(long*)param_3 = (long)iVar3;
      LAB_00104a23:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      char *pcVar3;
      bool bVar4;
      long *plVar6;
      undefined4 in_register_00000014;
      long *plVar7;
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
      Variant *pVVar5;
      plVar7 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar7 != (long*)0x0 ) && ( plVar7[1] != 0 ) ) && ( *(char*)( plVar7[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar7[1] == 0) {
            plVar6 = (long*)plVar7[0x23];
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( *plVar7 + 0x40 ) )(plVar7);
            }
         } else {
            plVar6 = (long*)( plVar7[1] + 0x20 );
         }
         if (local_58 == (char*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC35, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pcVar3 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar7 = (long*)( local_58 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar3 + -0x10, false);
               }
            }
            lVar2 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar7 = (long*)( local_60 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104ca0;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar5 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar5 & 1 ) != 0) {
               pVVar5 = *(Variant**)( pVVar5 + *(long*)( (long)plVar7 + (long)pVVar1 ) + -1 );
            }
            bVar4 = (bool)( *(code*)pVVar5 )();
            Variant::Variant((Variant*)local_48, bVar4);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00104ca0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      Variant VVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
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
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00104f02;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      VVar3 = ( Variant )(*pcVar4)(param_1 + *(long*)( this + 0x60 ));
      param_3[8] = VVar3;
      LAB_00104f02:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      undefined1 uVar3;
      long *plVar5;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      code *pcVar4;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (char*)*plVar5) {
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
            pcVar2 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar5 = (long*)( local_48 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105101;
         }
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar4 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar4 & 1 ) != 0) {
         pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }
      uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ));
      *(undefined1*)param_3 = uVar3;
      LAB_00105101:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, unsigned short, IPAddress const&>::validated_call(Object*, Variant const**,
   Variant*) const */
   void MethodBindTR<Error,unsigned_short,IPAddress_const&>::validated_call(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      char *pcVar2;
      uint uVar3;
      long *plVar4;
      code *pcVar5;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      IPAddress local_48[24];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0x35;
            local_60 = 0;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            pcVar2 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_58 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar4 = (long*)( local_60 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_0010531c;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      IPAddress::IPAddress(local_48, (String*)( param_2[1] + 8 ));
      uVar3 = ( *pcVar5 )(param_1 + lVar1, *(undefined2*)( *param_2 + 8 ), local_48);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar3;
      LAB_0010531c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, unsigned short, IPAddress const&>::ptrcall(Object*, void const**, void*)
   const */
   void MethodBindTR<Error,unsigned_short,IPAddress_const&>::ptrcall(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char *pcVar2;
      uint uVar3;
      long *plVar4;
      code *pcVar5;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      IPAddress local_48[24];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar4 = *(long**)( param_1 + 0x118 );
            if (plVar4 == (long*)0x0) {
               plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_58 == (char*)*plVar4) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_50 = 0x35;
            local_60 = 0;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            pcVar2 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar4 = (long*)( local_58 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar2 + -0x10, false);
               }
            }
            lVar1 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar4 = (long*)( local_60 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105536;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pcVar5 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar5 & 1 ) != 0) {
         pcVar5 = *(code**)( pcVar5 + *(long*)( param_1 + lVar1 ) + -1 );
      }
      IPAddress::IPAddress(local_48, (String*)param_2[1]);
      /* WARNING: Load size is inaccurate */
      uVar3 = ( *pcVar5 )(param_1 + lVar1, **param_2, local_48);
      *(ulong*)param_3 = (ulong)uVar3;
      LAB_00105536:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Ref<StreamPeerTCP>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */
   Object *MethodBindTR<Ref<StreamPeerTCP>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Object *pOVar1;
      Variant *pVVar2;
      long lVar3;
      Object *pOVar4;
      char cVar5;
      Variant *pVVar6;
      long *plVar7;
      undefined4 in_register_00000014;
      long *plVar8;
      int in_R8D;
      undefined4 *in_R9;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      Object *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar8 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar8 != (long*)0x0 ) && ( plVar8[1] != 0 ) ) && ( *(char*)( plVar8[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar8[1] == 0) {
            plVar7 = (long*)plVar8[0x23];
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *plVar8 + 0x40 ) )(plVar8);
            }
         } else {
            plVar7 = (long*)( plVar8[1] + 0x20 );
         }
         if (local_58 == (Object*)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_58 = (Object*)0x103c68;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC35, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            pOVar4 = local_58;
            if (local_58 != (Object*)0x0) {
               LOCK();
               pOVar1 = local_58 + -0x10;
               *(long*)pOVar1 = *(long*)pOVar1 + -1;
               UNLOCK();
               if (*(long*)pOVar1 == 0) {
                  local_58 = (Object*)0x0;
                  Memory::free_static(pOVar4 + -0x10, false);
               }
            }
            lVar3 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar8 = (long*)( local_60 + -0x10 );
               *plVar8 = *plVar8 + -1;
               UNLOCK();
               if (*plVar8 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105800;
         }
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar6 = param_2[0xb];
      pVVar2 = param_2[0xc];
      if (in_R8D == 0) {
         if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
            *in_R9 = 0;
            if (( (ulong)pVVar6 & 1 ) != 0) {
               pVVar6 = *(Variant**)( pVVar6 + *(long*)( (long)plVar8 + (long)pVVar2 ) + -1 );
            }
            ( *(code*)pVVar6 )(&local_58);
            Variant::Variant((Variant*)local_48, local_58);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)param_1 = local_48[0];
            *(undefined8*)( param_1 + 8 ) = local_40;
            *(undefined8*)( param_1 + 0x10 ) = uStack_38;
            if (local_58 != (Object*)0x0) {
               cVar5 = RefCounted::unreference();
               pOVar4 = local_58;
               if (cVar5 != '\0') {
                  cVar5 = predelete_handler(local_58);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }
               }
            }
         } else {
            *in_R9 = 4;
            in_R9[2] = 0;
         }
      } else {
         *in_R9 = 3;
         in_R9[2] = 0;
      }
      LAB_00105800:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Ref<StreamPeerTCP>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Ref<StreamPeerTCP>>::ptrcall(MethodBindTR<Ref<StreamPeerTCP>> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      char cVar2;
      code *pcVar3;
      Object *pOVar4;
      long *plVar5;
      Object *extraout_RDX;
      Object *pOVar6;
      long in_FS_OFFSET;
      long local_58;
      long local_50;
      Object *local_48;
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
         } else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (Object*)0x103c68;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            pOVar6 = local_48;
            if (local_48 != (Object*)0x0) {
               LOCK();
               pOVar4 = local_48 + -0x10;
               *(void**)pOVar4 = (void*)( (long)*(void**)pOVar4 + -1 );
               UNLOCK();
               if (*(void**)pOVar4 == (void*)0x0) {
                  local_48 = (Object*)0x0;
                  Memory::free_static(pOVar6 + -0x10, false);
               }
            }
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar5 = (long*)( local_50 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105ad6;
         }
         param_2 = (void**)local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
            param_2 = (void**)extraout_RDX;
         }
      }
      pcVar3 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar3 & 1 ) != 0) {
         param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar3 = *(code**)( (Object*)( (long)param_2 + -1 ) + (long)pcVar3 );
      }
      ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
      if (local_48 == (Object*)0x0) {
         /* WARNING: Load size is inaccurate */
         pOVar6 = *param_3;
         if (pOVar6 == (Object*)0x0) goto LAB_00105ad6;
         *(undefined8*)param_3 = 0;
         goto LAB_00105b19;
      }
      pOVar4 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar6 = *param_3;
      if (pOVar6 != pOVar4) {
         *(Object**)param_3 = pOVar4;
         if (pOVar4 == (Object*)0x0) {
            if (pOVar6 != (Object*)0x0) goto LAB_00105b19;
         } else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)param_3 = 0;
            }
            if (pOVar6 != (Object*)0x0) {
               LAB_00105b19:cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar6);
                  if (cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }
               }
            }
            if (local_48 == (Object*)0x0) goto LAB_00105ad6;
         }
      }
      cVar2 = RefCounted::unreference();
      pOVar6 = local_48;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_48);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }
      }
      LAB_00105ad6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Error, unsigned short, IPAddress const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Error,unsigned_short,IPAddress_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char *pcVar5;
      char cVar6;
      ushort uVar7;
      int iVar8;
      undefined4 uVar9;
      long *plVar10;
      long lVar11;
      Variant *pVVar12;
      undefined4 in_register_00000014;
      long *plVar13;
      Variant *this;
      int iVar14;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar15;
      long in_FS_OFFSET;
      long local_98;
      long local_90;
      char *local_88;
      undefined8 local_80;
      Variant local_78[32];
      undefined4 local_58[2];
      undefined8 local_50;
      undefined8 uStack_48;
      long local_40;
      plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
         if (plVar13[1] == 0) {
            plVar10 = (long*)plVar13[0x23];
            if (plVar10 == (long*)0x0) {
               plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
            }
         } else {
            plVar10 = (long*)( plVar13[1] + 0x20 );
         }
         if (local_88 == (char*)*plVar10) {
            if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_90 = 0;
            local_80 = 0x35;
            String::parse_latin1((StrRange*)&local_90);
            vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
            _err_print_error(&_LC35, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0);
            pcVar5 = local_88;
            if (local_88 != (char*)0x0) {
               LOCK();
               plVar13 = (long*)( local_88 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_88 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }
            }
            lVar2 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar13 = (long*)( local_90 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }
            goto LAB_00105e9a;
         }
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }
      }
      pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 3) {
         pVVar12 = param_2[5];
         iVar8 = 2 - in_R8D;
         if (pVVar12 == (Variant*)0x0) {
            if (iVar8 != 0) goto LAB_00105ed8;
            this * (Variant**)param_4;
            LAB_00105eed:pVVar12 = *(Variant**)( param_4 + 8 );
         } else {
            lVar2 = *(long*)( pVVar12 + -8 );
            iVar14 = (int)lVar2;
            if (iVar14 < iVar8) {
               LAB_00105ed8:uVar9 = 4;
               goto LAB_00105ec5;
            }
            if (in_R8D == 0) {
               lVar11 = (long)( iVar14 + -2 );
               if (lVar2 <= lVar11) goto LAB_00105fb0;
               this =
               pVVar12 + lVar11 * 0x18;
            } else {
               this * (Variant**)param_4;
               if (in_R8D == 2) goto LAB_00105eed;
            }
            lVar11 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar14 - iVar8 ) );
            if (lVar2 <= lVar11) {
               LAB_00105fb0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }
            pVVar12 = pVVar12 + lVar11 * 0x18;
         }
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }
         cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 4);
         uVar4 = _LC40;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_IPAddress(local_78);
         cVar6 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC41;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         uVar7 = Variant::operator_cast_to_unsigned_short(this);
         iVar8 = ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), uVar7, local_78);
         Variant::Variant((Variant*)local_58, iVar8);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      } else {
         uVar9 = 3;
         LAB_00105ec5:*in_R9 = uVar9;
         in_R9[2] = 2;
      }
      LAB_00105e9a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* MethodBindTR<Ref<StreamPeerTCP>>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Ref<StreamPeerTCP>>::validated_call(MethodBindTR<Ref<StreamPeerTCP>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      Variant **ppVVar1;
      Object *pOVar2;
      Object *pOVar3;
      Variant **ppVVar4;
      char cVar5;
      code *pcVar6;
      long *plVar7;
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
            plVar7 = *(long**)( param_1 + 0x118 );
            if (plVar7 == (long*)0x0) {
               plVar7 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }
         } else {
            plVar7 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }
         if (local_48 == (Variant**)*plVar7) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
               StringName::unref();
            }
            MethodBind::get_name();
            local_48 = (Variant**)0x103c68;
            local_50 = (Object*)0x0;
            local_40 = (Object*)0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            ppVVar4 = local_48;
            if (local_48 != (Variant**)0x0) {
               LOCK();
               ppVVar1 = local_48 + -2;
               *ppVVar1 = *ppVVar1 + -1;
               UNLOCK();
               if (*ppVVar1 == (Variant*)0x0) {
                  local_48 = (Variant**)0x0;
                  Memory::free_static(ppVVar4 + -2, false);
               }
            }
            pOVar3 = local_50;
            if (local_50 != (Object*)0x0) {
               LOCK();
               pOVar2 = local_50 + -0x10;
               *(long*)pOVar2 = *(long*)pOVar2 + -1;
               UNLOCK();
               if (*(long*)pOVar2 == 0) {
                  local_50 = (Object*)0x0;
                  Memory::free_static(pOVar3 + -0x10, false);
               }
            }
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }
            goto LAB_001061c6;
         }
         param_2 = local_48;
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
            param_2 = extraout_RDX;
         }
      }
      pcVar6 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
         pcVar6 = *(code**)( pcVar6 + (long)param_2 + -1 );
      }
      ( *pcVar6 )(&local_50, param_1 + *(long*)( this + 0x60 ), param_2);
      if (local_50 == (Object*)0x0) {
         Variant::ObjData::unref();
      } else {
         local_48 = *(Variant***)( local_50 + 0x60 );
         local_40 = local_50;
         Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
      }
      if (local_50 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         pOVar3 = local_50;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_50);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }
         }
      }
      LAB_001061c6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* void call_get_argument_type_info<unsigned short, IPAddress const&>(int, PropertyInfo&) */
   void call_get_argument_type_info<unsigned_short,IPAddress_const&>(int param_1, PropertyInfo *param_2) {
      long *plVar1;
      long lVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      undefined1 auVar6[16];
      undefined8 uVar7;
      long lVar8;
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
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_1 == 0) {
         local_68 = 0;
         local_58 = &_LC11;
         local_70 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_50._8_8_;
         local_50 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_70);
         local_58 = (undefined*)CONCAT44(local_58._4_4_, 2);
      } else {
         if (param_1 != 1) goto LAB_001063ec;
         local_68 = 0;
         local_58 = &_LC11;
         local_70 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_50._8_8_;
         local_50 = auVar5 << 0x40;
         String::parse_latin1((StrRange*)&local_70);
         local_58 = (undefined*)CONCAT44(local_58._4_4_, 4);
      }
      local_40 = 0;
      local_38 = 0;
      local_50 = (undefined1[16])0x0;
      if (local_70 == 0) {
         LAB_001064d8:local_30 = 6;
         StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_68);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_38, (CowData*)&local_70);
         local_30 = 6;
         if (local_40 != 0x11) goto LAB_001064d8;
         StringName::StringName((StringName*)&local_60, (String*)&local_38, false);
         if (local_50._8_8_ == local_60) {
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }
         } else {
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
      *(undefined4*)param_2 = local_58._0_4_;
      lVar2 = *(long*)( param_2 + 8 );
      if (lVar2 != local_50._0_8_) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_2 + 8 );
               *(undefined8*)( param_2 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(undefined8*)( param_2 + 8 ) = local_50._0_8_;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_50._8_8_;
         local_50 = auVar6 << 0x40;
      }
      if (*(long*)( param_2 + 0x10 ) != local_50._8_8_) {
         StringName::unref();
         uVar7 = local_50._8_8_;
         local_50._8_8_ = 0;
         *(undefined8*)( param_2 + 0x10 ) = uVar7;
      }
      lVar8 = local_38;
      *(int*)( param_2 + 0x18 ) = local_40;
      lVar2 = *(long*)( param_2 + 0x20 );
      if (lVar2 == local_38) {
         *(undefined4*)( param_2 + 0x28 ) = local_30;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar8 + -0x10 ), false);
            }
         }
      } else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( param_2 + 0x20 );
               *(undefined8*)( param_2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         *(long*)( param_2 + 0x20 ) = local_38;
         *(undefined4*)( param_2 + 0x28 ) = local_30;
      }
      if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
         StringName::unref();
      }
      uVar7 = local_50._0_8_;
      if (local_50._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_50._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_50._8_8_;
            local_50 = auVar4 << 0x40;
            Memory::free_static((void*)( uVar7 + -0x10 ), false);
         }
      }
      LAB_001063ec:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* MethodBindTR<Error, unsigned short, IPAddress const&>::_gen_argument_type_info(int) const */
   undefined4 *MethodBindTR<Error,unsigned_short,IPAddress_const&>::_gen_argument_type_info(int param_1) {
      long *plVar1;
      long lVar2;
      long lVar3;
      uint in_EDX;
      undefined4 in_register_0000003c;
      undefined4 *puVar4;
      long in_FS_OFFSET;
      long local_78;
      long local_70;
      char *local_68;
      undefined1 local_60[16];
      undefined8 local_50;
      undefined8 local_48;
      undefined4 local_40;
      long local_30;
      puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (in_EDX < 2) {
         local_68 = (char*)0x0;
         local_50 = 0;
         local_48 = 0;
         local_40 = 6;
         local_60 = (undefined1[16])0x0;
         call_get_argument_type_info<unsigned_short,IPAddress_const&>(in_EDX, (PropertyInfo*)&local_68);
         *puVar4 = local_68._0_4_;
         *(undefined8*)( puVar4 + 2 ) = local_60._0_8_;
         *(undefined8*)( puVar4 + 4 ) = local_60._8_8_;
         puVar4[6] = (undefined4)local_50;
         *(undefined8*)( puVar4 + 8 ) = local_48;
         puVar4[10] = local_40;
      } else {
         local_78 = 0;
         local_68 = "Error";
         local_60._8_8_ = local_60._0_8_;
         local_60._0_8_ = 5;
         String::parse_latin1((StrRange*)&local_78);
         godot::details::enum_qualified_name_to_class_info_name((details*)&local_70, (String*)&local_78);
         StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
         *puVar4 = 2;
         puVar4[6] = 0;
         *(undefined8*)( puVar4 + 8 ) = 0;
         puVar4[10] = 0x10006;
         *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
         lVar3 = local_70;
         lVar2 = local_78;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               lVar2 = local_78;
            }
         }
         local_78 = lVar2;
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
      }
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return puVar4;
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
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
   /* MethodBindT<>::~MethodBindT() */
   void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR() */
   void MethodBindTR<Ref<StreamPeerTCP>>::~MethodBindTR(MethodBindTR<Ref<StreamPeerTCP>> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<int>::~MethodBindTRC() */
   void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTRC<bool>::~MethodBindTRC() */
   void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* MethodBindTR<Error, unsigned short, IPAddress const&>::~MethodBindTR() */
   void MethodBindTR<Error,unsigned_short,IPAddress_const&>::~MethodBindTR(MethodBindTR<Error,unsigned_short,IPAddress_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}
