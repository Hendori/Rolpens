/* ENetConnection::get_local_port() const */undefined2 ENetConnection::get_local_port(ENetConnection *this) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined1 auStack_28[16];
   undefined2 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( this + 0x180 ) == (long*)0x0) {
      _err_print_error("get_local_port", "modules/enet/enet_connection.cpp", 0xfe, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
      local_18 = 0;
   }
 else {
      lVar1 = **(long**)( this + 0x180 );
      if (lVar1 == 0) {
         _err_print_error("get_local_port", "modules/enet/enet_connection.cpp", 0xff, "Condition \"!(host->socket)\" is true. Returning: 0", "The ENetConnection instance isn\'t currently bound.", 0, 0);
         local_18 = 0;
      }
 else {
         iVar2 = enet_socket_get_address(lVar1, auStack_28);
         if (iVar2 != 0) {
            _err_print_error("get_local_port", "modules/enet/enet_connection.cpp", 0x101, "Condition \"enet_socket_get_address(host->socket, &address)\" is true. Returning: 0", "Unable to get socket address", 0, 0);
            local_18 = 0;
         }

      }

   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_18;
}
/* ENetConnection::dtls_server_setup(Ref<TLSOptions> const&) */bool ENetConnection::dtls_server_setup(ENetConnection *this, Ref *param_1) {
   int iVar1;
   if (*(long*)( this + 0x180 ) == 0) {
      _err_print_error("dtls_server_setup", "modules/enet/enet_connection.cpp", 0x116, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
      return (bool)3;
   }

   if (( *(long*)param_1 != 0 ) && ( *(int*)( *(long*)param_1 + 0x17c ) == 2 )) {
      iVar1 = enet_host_dtls_server_setup();
      return iVar1 != 0;
   }

   _err_print_error("dtls_server_setup", "modules/enet/enet_connection.cpp", 0x117, "Condition \"p_options.is_null() || !p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   return (bool)0x1f;
}
/* ENetConnection::socket_send(String const&, int, Vector<unsigned char> const&) */void ENetConnection::socket_send(ENetConnection *this, String *param_1, int param_2, Vector *param_3) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   long local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined2 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined2 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( this + 0x180 ) == (long*)0x0) {
      _err_print_error("socket_send", "modules/enet/enet_connection.cpp", 0x15a, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   }
 else if (**(long**)( this + 0x180 ) == 0) {
      _err_print_error("socket_send", "modules/enet/enet_connection.cpp", 0x15b, "Condition \"!(host->socket)\" is true.", "The ENetConnection instance isn\'t currently bound.", 0, 0);
   }
 else if (param_2 - 1U < 0xffff) {
      IPAddress::clear();
      cVar1 = String::is_valid_ip_address();
      if (cVar1 == '\0') {
         uVar2 = IP::get_singleton();
         IP::resolve_hostname(&local_58, uVar2, param_1, 3);
         local_78 = local_58;
         uStack_70 = uStack_50;
         local_68 = local_48;
         if ((char)local_48 == '\0') {
            _err_print_error("socket_send", "modules/enet/enet_connection.cpp", 0x167, "Condition \"!ip.is_valid()\" is true.", "Couldn\'t resolve the server IP address or domain name.", 0, 0);
            goto LAB_001002cb;
         }

      }
 else {
         IPAddress::IPAddress((IPAddress*)&local_58, param_1);
         local_78 = local_58;
         uStack_70 = uStack_50;
         local_68 = local_48;
      }

      uVar2 = IPAddress::get_ipv6();
      enet_address_set_ip(&local_58, uVar2, 0x10);
      local_88 = *(long*)( param_3 + 8 );
      local_48 = (undefined2)param_2;
      if (local_88 == 0) {
         local_80 = 0;
      }
 else {
         local_80 = *(undefined8*)( local_88 + -8 );
      }

      enet_socket_send(**(undefined8**)( this + 0x180 ), &local_58, &local_88, 1);
   }
 else {
      _err_print_error("socket_send", "modules/enet/enet_connection.cpp", 0x15c, "Condition \"p_port < 1 || p_port > 65535\" is true.", "The remote port number must be between 1 and 65535 (inclusive).", 0, 0);
   }

   LAB_001002cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::Compressor::enet_decompress(void*, unsigned char const*, unsigned long, unsigned
   char*, unsigned long) */long ENetConnection::Compressor::enet_decompress(void *param_1, uchar *param_2, ulong param_3, uchar *param_4, ulong param_5) {
   int iVar1;
   /* WARNING: Load size is inaccurate */
   iVar1 = *param_1;
   if (iVar1 == 3) {
      iVar1 = Compression::decompress(param_4, param_5, param_2, param_3 & 0xffffffff, 1);
   }
 else if (iVar1 == 4) {
      iVar1 = Compression::decompress(param_4, param_5, param_2, param_3 & 0xffffffff, 2);
   }
 else {
      if (iVar1 != 2) {
         return 0;
      }

      iVar1 = Compression::decompress(param_4, param_5, param_2, param_3 & 0xffffffff, 0);
   }

   if (iVar1 < 0) {
      return 0;
   }

   return (long)iVar1;
}
/* ENetConnection::get_max_channels() const */undefined4 ENetConnection::get_max_channels(ENetConnection *this) {
   if (*(long*)( this + 0x180 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x180 ) + 0x48 );
   }

   _err_print_error("get_max_channels", "modules/enet/enet_connection.cpp", 0xf9, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return 0;
}
/* ENetConnection::flush() */void ENetConnection::flush(ENetConnection *this) {
   if (*(long*)( this + 0x180 ) != 0) {
      enet_host_flush();
      return;
   }

   _err_print_error("flush", "modules/enet/enet_connection.cpp", 0xc9, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::bandwidth_limit(int, int) */void ENetConnection::bandwidth_limit(int param_1, int param_2) {
   long lVar1;
   undefined4 in_register_00000034;
   undefined4 in_register_0000003c;
   lVar1 = *(long*)( CONCAT44(in_register_0000003c, param_1) + 0x180 );
   if (lVar1 != 0) {
      enet_host_bandwidth_limit(lVar1, CONCAT44(in_register_00000034, param_2));
      return;
   }

   _err_print_error("bandwidth_limit", "modules/enet/enet_connection.cpp", 0xce, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::channel_limit(int) */void ENetConnection::channel_limit(ENetConnection *this, int param_1) {
   if (*(long*)( this + 0x180 ) != 0) {
      enet_host_channel_limit(*(long*)( this + 0x180 ), (long)param_1);
      return;
   }

   _err_print_error("channel_limit", "modules/enet/enet_connection.cpp", 0xd3, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::refuse_new_connections(bool) */void ENetConnection::refuse_new_connections(ENetConnection *this, bool param_1) {
   if (*(long*)( this + 0x180 ) != 0) {
      enet_host_refuse_new_connections(*(long*)( this + 0x180 ), param_1);
      return;
   }

   _err_print_error("refuse_new_connections", "modules/enet/enet_connection.cpp", 0x120, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::dtls_client_setup(String const&, Ref<TLSOptions> const&) */undefined1 ENetConnection::dtls_client_setup(ENetConnection *this, String *param_1, Ref *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   int iVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 uVar6;
   long local_28;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x180 ) == 0) {
      uVar6 = 3;
      _err_print_error("dtls_client_setup", "modules/enet/enet_connection.cpp", 0x129, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   }
 else {
      lVar3 = *(long*)param_2;
      if (( lVar3 == 0 ) || ( *(int*)( lVar3 + 0x17c ) == 2 )) {
         uVar6 = 0x1f;
         _err_print_error("dtls_client_setup", "modules/enet/enet_connection.cpp", 0x12a, "Condition \"p_options.is_null() || p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }
 else {
         String::utf8();
         uVar5 = CharString::get_data();
         iVar4 = enet_host_dtls_client_setup(*(undefined8*)( this + 0x180 ), uVar5, lVar3);
         uVar6 = iVar4 != 0;
         if (local_28 != 0) {
            LOCK();
            plVar1 = (long*)( local_28 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_28 + -0x10 ), false);
            }

         }

      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
/* ENetConnection::destroy() */void ENetConnection::destroy(ENetConnection *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   if (*(long*)( this + 0x180 ) == 0) {
      _err_print_error("destroy", "modules/enet/enet_connection.cpp", 0x4a, "Parameter \"host\" is null.", "Host already destroyed.", 0, 0);
      return;
   }

   plVar6 = *(long**)( this + 0x188 );
   if (plVar6 != (long*)0x0) {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
         do {
            ENetPacketPeer::_on_disconnect();
            lVar5 = *(long*)( lVar5 + 8 );
         }
 while ( lVar5 != 0 );
         plVar6 = *(long**)( this + 0x188 );
      }

      if (plVar6 != (long*)0x0) {
         do {
            plVar1 = (long*)*plVar6;
            if (plVar1 == (long*)0x0) goto LAB_00100985;
            if ((long*)plVar1[3] == plVar6) {
               lVar5 = plVar1[1];
               lVar2 = plVar1[2];
               *plVar6 = lVar5;
               if (plVar1 == (long*)plVar6[1]) {
                  plVar6[1] = lVar2;
               }

               if (lVar2 != 0) {
                  *(long*)( lVar2 + 8 ) = lVar5;
                  lVar5 = plVar1[1];
               }

               if (lVar5 != 0) {
                  *(long*)( lVar5 + 0x10 ) = lVar2;
               }

               if (( *plVar1 != 0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0') {
                  pOVar3 = (Object*)*plVar1;
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

               Memory::free_static(plVar1, false);
               *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar6 = *(long**)( this + 0x188 );
         }
 while ( (int)plVar6[2] != 0 );
         Memory::free_static(plVar6, false);
         *(undefined8*)( this + 0x188 ) = 0;
      }

   }

   LAB_00100985:enet_host_destroy(*(undefined8*)( this + 0x180 ));
   *(undefined8*)( this + 0x180 ) = 0;
   return;
}
/* ENetConnection::~ENetConnection() */void ENetConnection::~ENetConnection(ENetConnection *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   *(undefined***)this = &PTR__initialize_classv_001157f0;
   if (*(long*)( this + 0x180 ) != 0) {
      destroy(this);
   }

   plVar6 = *(long**)( this + 0x188 );
   if (plVar6 != (long*)0x0) {
      do {
         plVar1 = (long*)*plVar6;
         if (plVar1 == (long*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00100b15;
            }

            break;
         }

         if ((long*)plVar1[3] == plVar6) {
            lVar5 = plVar1[1];
            lVar2 = plVar1[2];
            *plVar6 = lVar5;
            if (plVar1 == (long*)plVar6[1]) {
               plVar6[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar5;
               lVar5 = plVar1[1];
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar2;
            }

            if (*plVar1 != 0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  pOVar3 = (Object*)*plVar1;
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x188 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_00100b15:*(undefined***)this = &PTR__initialize_classv_00115690;
   Object::~Object((Object*)this);
   return;
}
/* ENetConnection::~ENetConnection() */void ENetConnection::~ENetConnection(ENetConnection *this) {
   ~ENetConnection(this)
   ;;
   operator_delete(this, 400);
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
/* ENetConnection::bandwidth_throttle() */void ENetConnection::bandwidth_throttle(ENetConnection *this) {
   if (*(long*)( this + 0x180 ) != 0) {
      enet_host_bandwidth_throttle();
      return;
   }

   _err_print_error("bandwidth_throttle", "modules/enet/enet_connection.cpp", 0xd8, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::get_peers(List<Ref<ENetPacketPeer>, DefaultAllocator>&) */void ENetConnection::get_peers(ENetConnection *this, List *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   undefined1(*pauVar4)[16];
   long *plVar5;
   if (*(long**)( this + 0x188 ) == (long*)0x0) {
      return;
   }

   plVar5 = (long*)**(long**)( this + 0x188 );
   if (plVar5 != (long*)0x0) {
      if (*(long*)param_1 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            pauVar4 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
            *pauVar4 = (undefined1[16])0x0;
            pauVar4[1] = (undefined1[16])0x0;
            if (*plVar5 != 0) {
               *(long*)*pauVar4 = *plVar5;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)*pauVar4 = 0;
               }

            }

            plVar1 = *(long**)param_1;
            lVar2 = plVar1[1];
            *(undefined8*)( *pauVar4 + 8 ) = 0;
            *(long**)( pauVar4[1] + 8 ) = plVar1;
            *(long*)pauVar4[1] = lVar2;
            if (lVar2 != 0) {
               *(undefined1(**) [16])( lVar2 + 8 ) = pauVar4;
            }

            plVar1[1] = (long)pauVar4;
            if (*plVar1 == 0) break;
            plVar5 = (long*)plVar5[1];
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (plVar5 == (long*)0x0) {
               return;
            }

         }
;
         plVar5 = (long*)plVar5[1];
         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         *plVar1 = (long)pauVar4;
      }
 while ( plVar5 != (long*)0x0 );
   }

   return;
}
/* ENetConnection::_create(_ENetAddress*, int, int, int, int) */undefined8 ENetConnection::_create(ENetConnection *this, _ENetAddress *param_1, int param_2, int param_3, int param_4, int param_5) {
   long lVar1;
   if (*(long*)( this + 0x180 ) != 0) {
      _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x132, "Condition \"host != nullptr\" is true. Returning: ERR_ALREADY_IN_USE", "The ENetConnection instance is already active.", 0, 0);
      return 0x16;
   }

   if (param_2 - 1U < 0xfff) {
      if ((uint)param_3 < 0x100) {
         if (param_4 < 0) {
            _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x135, "Condition \"p_in_bandwidth < 0\" is true. Returning: ERR_INVALID_PARAMETER", "The incoming bandwidth limit must be greater than or equal to 0 (0 disables the limit).", 0, 0);
         }
 else {
            if (-1 < param_5) {
               lVar1 = enet_host_create(param_1, (long)param_2, (long)param_3, param_4, param_5);
               *(long*)( this + 0x180 ) = lVar1;
               if (lVar1 != 0) {
                  return 0;
               }

               _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x13e, "Parameter \"host\" is null.", "Couldn\'t create an ENet host.", 0, 0);
               return 0x14;
            }

            _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x136, "Condition \"p_out_bandwidth < 0\" is true. Returning: ERR_INVALID_PARAMETER", "The outgoing bandwidth limit must be greater than or equal to 0 (0 disables the limit).", 0, 0);
         }

      }
 else {
         _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x134, "Condition \"p_max_channels < 0 || p_max_channels > ENET_PROTOCOL_MAXIMUM_CHANNEL_COUNT\" is true. Returning: ERR_INVALID_PARAMETER", "Invalid channel count. Must be between 0 and 255 (0 means maximum, i.e. 255)", 0, 0);
      }

   }
 else {
      _err_print_error("_create", "modules/enet/enet_connection.cpp", 0x133, "Condition \"p_max_peers < 1 || p_max_peers > 4095\" is true. Returning: ERR_INVALID_PARAMETER", "The number of clients must be set between 1 and 4095 (inclusive).", 0, 0);
   }

   return 0x1f;
}
/* ENetConnection::create_host_bound(IPAddress const&, int, int, int, int, int) */undefined8 ENetConnection::create_host_bound(ENetConnection *this, IPAddress *param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   _ENetAddress local_48[16];
   undefined4 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x10] == (IPAddress)0x0) {
      if (param_1[0x11] != (IPAddress)0x0) {
         if ((uint)param_2 < 0x10000) goto LAB_00101010;
         goto LAB_001010b0;
      }

      _err_print_error("create_host_bound", "modules/enet/enet_connection.cpp", 0x2e, "Condition \"!p_bind_address.is_valid() && !p_bind_address.is_wildcard()\" is true. Returning: ERR_INVALID_PARAMETER", "Invalid bind IP.", 0, 0);
   }
 else {
      if ((uint)param_2 < 0x10000) {
         for (int i = 0; i < 16; i++) {
            local_48[i] = (_ENetAddress)0;
         }

         local_38 = param_2 & 0xffff;
         if (param_1[0x11] == (IPAddress)0x0) {
            uVar1 = IPAddress::get_ipv6();
            enet_address_set_ip(local_48, uVar1, 0x10);
         }
 else {
            LAB_00101010:local_48[0] = (_ENetAddress)0x0;
            for (int i = 0; i < 15; i++) {
               local_48[( i + 1 )] = (_ENetAddress)0;
            }

            local_38 = (uint)CONCAT12(1, (short)param_2);
         }

         uVar1 = _create(this, local_48, param_3, param_4, param_5, param_6);
         goto LAB_0010102a;
      }

      LAB_001010b0:_err_print_error("create_host_bound", "modules/enet/enet_connection.cpp", 0x2f, "Condition \"p_port < 0 || p_port > 65535\" is true. Returning: ERR_INVALID_PARAMETER", "The local port number must be between 0 and 65535 (inclusive).", 0, 0);
   }

   uVar1 = 0x1f;
   LAB_0010102a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* ENetConnection::create_host(int, int, int, int) */void ENetConnection::create_host(ENetConnection *this, int param_1, int param_2, int param_3, int param_4) {
   _create(this, (_ENetAddress*)0x0, param_1, param_2, param_3, param_4);
   return;
}
/* ENetConnection::Compressor::setup(_ENetHost*, ENetConnection::CompressionMode) */void ENetConnection::Compressor::setup(long param_1, uint param_2) {
   uint *puVar1;
   if (param_1 == 0) {
      _err_print_error("setup", "modules/enet/enet_connection.cpp", 500, "Parameter \"p_host\" is null.", 0, 0);
      return;
   }

   if (param_2 == 1) {
      enet_host_compress_with_range_coder();
      return;
   }

   if (param_2 < 2) {
      enet_host_compress(param_1, 0);
      return;
   }

   if (param_2 - 2 < 3) {
      puVar1 = (uint*)operator_new(0x48, "");
      *puVar1 = param_2;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(uint**)( puVar1 + 10 ) = puVar1;
      *(code**)( puVar1 + 0x10 ) = enet_compressor_destroy;
      *(code**)( puVar1 + 0xc ) = enet_compress;
      *(code**)( puVar1 + 0xe ) = enet_decompress;
      enet_host_compress(param_1, puVar1 + 10);
      return;
   }

   return;
}
/* ENetConnection::compress(ENetConnection::CompressionMode) */void ENetConnection::compress(long param_1) {
   if (*(long*)( param_1 + 0x180 ) != 0) {
      Compressor::setup();
      return;
   }

   _err_print_error("compress", "modules/enet/enet_connection.cpp", 0xdd, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   return;
}
/* ENetConnection::Compressor::Compressor(ENetConnection::CompressionMode) */void ENetConnection::Compressor::Compressor(Compressor *this, undefined4 param_2) {
   *(undefined4*)this = param_2;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(Compressor**)( this + 0x28 ) = this;
   *(code**)( this + 0x40 ) = enet_compressor_destroy;
   *(code**)( this + 0x30 ) = enet_compress;
   *(code**)( this + 0x38 ) = enet_decompress;
   return;
}
/* ENetConnection::pop_statistic(ENetConnection::HostStatistic) */double ENetConnection::pop_statistic(ENetConnection *this, uint param_2) {
   uint uVar1;
   long lVar2;
   uint *puVar3;
   long in_FS_OFFSET;
   double dVar4;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = *(long*)( this + 0x180 );
   if (lVar2 == 0) {
      _err_print_error("pop_statistic", "modules/enet/enet_connection.cpp", 0xe2, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
      LAB_0010141f:dVar4 = 0.0;
   }
 else {
      if (param_2 == 2) {
         puVar3 = (uint*)( lVar2 + 11000 );
      }
 else if (param_2 < 3) {
         puVar3 = (uint*)( lVar2 + 0x2af0 );
         if (param_2 != 0) {
            puVar3 = (uint*)( lVar2 + 0x2af4 );
         }

      }
 else {
         puVar3 = (uint*)( lVar2 + 0x2afc );
         if (param_2 != 3) {
            local_50 = 0;
            local_48 = &_LC62;
            local_40 = 1;
            String::parse_latin1((StrRange*)&local_50);
            itos((long)local_60);
            operator+((char *)
            local_58,(String*)"Invalid statistic: ";
            String::operator +((String*)&local_48, (String*)local_58);
            _err_print_error("pop_statistic", "modules/enet/enet_connection.cpp", 0xf2, "Parameter \"ptr\" is null.", (String*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref(local_58);
            CowData<char32_t>::_unref(local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            goto LAB_0010141f;
         }

      }

      uVar1 = *puVar3;
      *puVar3 = 0;
      dVar4 = (double)uVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return dVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::broadcast(unsigned char, _ENetPacket*) */void ENetConnection::broadcast(uchar param_1, _ENetPacket *param_2) {
   long lVar1;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   lVar1 = *(long*)( CONCAT71(in_register_00000039, param_1) + 0x180 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      _err_print_error("broadcast", "modules/enet/enet_connection.cpp", 0x28, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   }
 else {
      if (( (ulong)param_2 & 0xff ) < *(ulong*)( lVar1 + 0x48 )) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            enet_host_broadcast(lVar1, (ulong)param_2 & 0xff);
            return;
         }

         goto LAB_001015b4;
      }

      local_50 = 0;
      local_40 = 0x35;
      local_48 = "Unable to send packet on channel %d, max channels: %d";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_char,int>((String*)&local_48, (uchar)(StrRange*)&local_50, (int)( (ulong)param_2 & 0xff ));
      _err_print_error("broadcast", "modules/enet/enet_connection.cpp", 0x29, "Condition \"p_channel >= host->channelLimit\" is true.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001015b4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ENetConnection::_broadcast(int, Vector<unsigned char>, int) */undefined8 ENetConnection::_broadcast(ENetConnection *this, uint param_1, long param_3, uint param_4) {
   long lVar1;
   undefined8 uVar2;
   if (*(long*)( this + 0x180 ) == 0) {
      uVar2 = _err_print_error("_broadcast", "modules/enet/enet_connection.cpp", 0x152, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
      return uVar2;
   }

   if (( (int)param_1 < 0 ) || ( *(int*)( *(long*)( this + 0x180 ) + 0x48 ) < (int)param_1 )) {
      uVar2 = _err_print_error("_broadcast", "modules/enet/enet_connection.cpp", 0x153, "Condition \"p_channel < 0 || p_channel > (int)host->channelLimit\" is true.", "Invalid channel", 0, 0);
   }
 else {
      if (( param_4 & 0xfffffff4 ) == 0) {
         lVar1 = *(long*)( param_3 + 8 );
         if (lVar1 == 0) {
            uVar2 = 0;
         }
 else {
            uVar2 = *(undefined8*)( lVar1 + -8 );
         }

         enet_packet_create(lVar1, uVar2);
         uVar2 = broadcast((uchar)this, (_ENetPacket*)( ulong )(param_1 & 0xff));
         return uVar2;
      }

      uVar2 = 0;
      _err_print_error("_broadcast", "modules/enet/enet_connection.cpp", 0x154, "Condition \"p_flags & ~ENetPacketPeer::FLAG_ALLOWED\" is true.", "Invalid flags", 0);
   }

   return uVar2;
}
/* ENetConnection::_get_peers() */void ENetConnection::_get_peers(void) {
   long *plVar1;
   undefined8 *puVar2;
   long lVar3;
   char cVar4;
   long in_RSI;
   Array *in_RDI;
   long in_FS_OFFSET;
   Array local_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x180 ) == 0) {
      _err_print_error("_get_peers", "modules/enet/enet_connection.cpp", 0x10c, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
      Array::Array(local_68);
      Array::Array(in_RDI);
      local_40 = (undefined1[16])0x0;
      local_58 = "ENetPacketPeer";
      local_48 = 0;
      local_60 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      Array::set_typed((uint)in_RDI, (StringName*)0x18, (Variant*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
         Variant::_clear_internal();
      }

      cVar4 = Array::is_same_typed(in_RDI);
      if (cVar4 == '\0') {
         Array::assign(in_RDI);
      }
 else {
         Array::_ref(in_RDI);
      }

      Array::~Array(local_68);
   }
 else {
      Array::Array(local_68);
      local_40 = (undefined1[16])0x0;
      local_58 = "ENetPacketPeer";
      local_48 = 0;
      local_60 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      Array::set_typed((uint)local_68, (StringName*)0x18, (Variant*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

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

      if (Variant::needs_deinit[(int)local_48] != '\0') {
         Variant::_clear_internal();
      }

      if (*(undefined8**)( in_RSI + 0x188 ) != (undefined8*)0x0) {
         for (puVar2 = (undefined8*)**(undefined8**)( in_RSI + 0x188 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)puVar2[1]) {
            Variant::Variant((Variant*)&local_48, (Object*)*puVar2);
            Array::push_back((Variant*)local_68);
            if (Variant::needs_deinit[(int)local_48] != '\0') {
               Variant::_clear_internal();
            }

         }

      }

      Array::Array(in_RDI, local_68);
      Array::~Array(local_68);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ENetConnection::_parse_event(_ENetEvent const&, ENetConnection::Event&) */undefined8 ENetConnection::_parse_event(ENetConnection *this, _ENetEvent *param_1, Event *param_2) {
   int iVar1;
   Object *pOVar2;
   Ref<ENetPacketPeer> *this_00;
   long lVar3;
   long *plVar4;
   char cVar5;
   ENetPacketPeer *this_01;
   undefined1(*pauVar6)[16];
   undefined8 uVar7;
   long lVar8;
   Object *pOVar9;
   Object *pOVar10;
   long in_FS_OFFSET;
   ENetPacketPeer *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)param_1;
   if (iVar1 == 2) {
      pOVar9 = *(Object**)( *(long*)( param_1 + 8 ) + 0x38 );
      if (pOVar9 != (Object*)0x0) {
         cVar5 = RefCounted::init_ref();
         if (cVar5 == '\0') {
            pOVar9 = (Object*)0x0;
         }

         ENetPacketPeer::_on_disconnect();
         plVar4 = *(long**)( this + 0x188 );
         if (plVar4 != (long*)0x0) {
            for (this_00 = (Ref<ENetPacketPeer>*)*plVar4; this_00 != (Ref<ENetPacketPeer>*)0x0; this_00 = *(Ref<ENetPacketPeer>**)( this_00 + 8 )) {
               if (*(Object**)this_00 == pOVar9) {
                  if (plVar4 == *(long**)( this_00 + 0x18 )) {
                     lVar8 = *(long*)( this_00 + 8 );
                     if ((Ref<ENetPacketPeer>*)*plVar4 == this_00) {
                        *plVar4 = lVar8;
                     }

                     lVar3 = *(long*)( this_00 + 0x10 );
                     if ((Ref<ENetPacketPeer>*)plVar4[1] == this_00) {
                        plVar4[1] = lVar3;
                     }

                     if (lVar3 != 0) {
                        *(long*)( lVar3 + 8 ) = lVar8;
                        lVar8 = *(long*)( this_00 + 8 );
                     }

                     if (lVar8 != 0) {
                        *(long*)( lVar8 + 0x10 ) = lVar3;
                     }

                     Ref<ENetPacketPeer>::unref(this_00);
                     Memory::free_static(this_00, false);
                     *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  if (*(int*)( (long)*(void**)( this + 0x188 ) + 0x10 ) == 0) {
                     Memory::free_static(*(void**)( this + 0x188 ), false);
                     *(undefined8*)( this + 0x188 ) = 0;
                  }

                  break;
               }

            }

         }

         pOVar10 = *(Object**)param_2;
         if (pOVar10 != pOVar9) {
            *(Object**)param_2 = pOVar9;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *(undefined8*)param_2 = 0;
            }

            if (( ( pOVar10 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);
            Memory::free_static(pOVar10, false);
         }

      }

      *(undefined4*)( param_2 + 0xc ) = *(undefined4*)( param_1 + 0x14 );
      cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar9) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

      uVar7 = 2;
      goto LAB_00101a5f;
   }

   LAB_00101f60:uVar7 = 0xffffffff;
   goto LAB_00101a5f;
}
if (iVar1 == 3) {
   pOVar9 = *(Object**)( *(long*)( param_1 + 8 ) + 0x38 );
   if (pOVar9 == (Object*)0x0) goto LAB_00101f60;
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      pOVar9 = (Object*)0x0;
   }

   pOVar10 = *(Object**)( *(long*)( param_1 + 8 ) + 0x38 );
   if (( pOVar10 == (Object*)0x0 ) || ( cVar5 = RefCounted::init_ref() ),cVar5 == '\0') {
      pOVar10 = *(Object**)param_2;
      if (pOVar10 != (Object*)0x0) {
         *(undefined8*)param_2 = 0;
         cVar5 = RefCounted::unreference();
         goto joined_r0x00101d17;
      }

   }
 else {
      pOVar2 = *(Object**)param_2;
      if (pOVar10 != pOVar2) {
         *(Object**)param_2 = pOVar10;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)param_2 = 0;
         }

         if (( ( pOVar2 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   cVar5 = RefCounted::unreference();
   joined_r0x00101d17:if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar10) ),cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
      Memory::free_static(pOVar10, false);
   }

}
param_2[8] = *(Event*)( param_1 + 0x10 );*(undefined8*)( param_2 + 0x10 ) = *(undefined8*)( param_1 + 0x18 );if (( ( pOVar9 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}uVar7 = 3;goto LAB_00101a5f;}uVar7 = 0;if (iVar1 != 1) goto LAB_00101a5f;pOVar9 = *(Object**)( *(long*)( param_1 + 8 ) + 0x38 );if (pOVar9 == (Object*)0x0) {
   this_01 = (ENetPacketPeer*)operator_new(0x1b0, "");
   ENetPacketPeer::ENetPacketPeer(this_01, *(_ENetPeer**)( param_1 + 8 ));
   postinitialize_handler((Object*)this_01);
   local_48 = this_01;
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      this_01 = *(ENetPacketPeer**)( this + 0x188 );
      local_48 = (ENetPacketPeer*)0x0;
      if (this_01 == (ENetPacketPeer*)0x0) {
         LAB_00101fb2:pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x188 ) = pauVar6;
         *(undefined4*)pauVar6[1] = 0;
         *pauVar6 = (undefined1[16])0x0;
         pauVar6 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
         *pauVar6 = (undefined1[16])0x0;
         pauVar6[1] = (undefined1[16])0x0;
         if (this_01 != (ENetPacketPeer*)0x0) goto LAB_00101f93;
      }
 else {
         pauVar6 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
         *pauVar6 = (undefined1[16])0x0;
         pauVar6[1] = (undefined1[16])0x0;
      }

   }
 else {
      if (*(long*)( this + 0x188 ) == 0) goto LAB_00101fb2;
      pauVar6 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar6 = (undefined1[16])0x0;
      pauVar6[1] = (undefined1[16])0x0;
      LAB_00101f93:*(ENetPacketPeer**)*pauVar6 = this_01;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         *(undefined8*)*pauVar6 = 0;
      }

   }

   plVar4 = *(long**)( this + 0x188 );
   lVar8 = plVar4[1];
   *(undefined8*)( *pauVar6 + 8 ) = 0;
   *(long**)( pauVar6[1] + 8 ) = plVar4;
   *(long*)pauVar6[1] = lVar8;
   if (lVar8 != 0) {
      *(undefined1(**) [16])( lVar8 + 8 ) = pauVar6;
   }

   plVar4[1] = (long)pauVar6;
   if (*plVar4 == 0) {
      *plVar4 = (long)pauVar6;
   }

   *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
   Ref<ENetPacketPeer>::unref((Ref<ENetPacketPeer>*)&local_48);
   pOVar9 = *(Object**)( *(long*)( param_1 + 8 ) + 0x38 );
   if (pOVar9 != (Object*)0x0) goto LAB_00101a21;
   pOVar10 = *(Object**)param_2;
   if (pOVar10 != (Object*)0x0) {
      *(undefined8*)param_2 = 0;
      cVar5 = RefCounted::unreference();
      if (( cVar5 == '\0' ) || ( cVar5 = predelete_handler(pOVar10) ),cVar5 == '\0') goto LAB_00101a52;
      LAB_00101dcb:( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
      Memory::free_static(pOVar10, false);
      if (pOVar9 != (Object*)0x0) goto LAB_00101cb6;
   }

}
 else {
   LAB_00101a21:cVar5 = RefCounted::init_ref();
   pOVar10 = *(Object**)param_2;
   if (cVar5 == '\0') {
      if (pOVar10 != (Object*)0x0) {
         *(undefined8*)param_2 = 0;
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            pOVar9 = (Object*)0x0;
            cVar5 = predelete_handler(pOVar10);
            if (cVar5 != '\0') goto LAB_00101dcb;
         }

      }

   }
 else {
      if (pOVar10 != pOVar9) {
         *(Object**)param_2 = pOVar9;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)param_2 = 0;
         }

         if (( ( pOVar10 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) goto LAB_00101dcb;
      }

      LAB_00101cb6:cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar9) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

}
LAB_00101a52:uVar7 = 1;*(undefined4*)( param_2 + 0xc ) = *(undefined4*)( param_1 + 0x14 );LAB_00101a5f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ENetConnection::check_events(ENetConnection::EventType&, ENetConnection::Event&) */int ENetConnection::check_events(ENetConnection *this, EventType *param_1, Event *param_2) {
   int iVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   _ENetEvent a_Stack_58[40];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x180 ) == 0) {
      iVar1 = -1;
      _err_print_error("check_events", "modules/enet/enet_connection.cpp", 0xbd, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   }
 else {
      iVar1 = enet_host_check_events(*(long*)( this + 0x180 ), a_Stack_58);
      if (iVar1 < 0) {
         *(undefined4*)param_1 = 0xffffffff;
      }
 else {
         uVar2 = _parse_event(this, a_Stack_58, param_2);
         *(undefined4*)param_1 = uVar2;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::service(int, ENetConnection::Event&) */undefined8 ENetConnection::service(ENetConnection *this, int param_1, Event *param_2) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   Object *pOVar5;
   char cVar6;
   long lVar7;
   undefined8 uVar8;
   long *plVar9;
   long in_FS_OFFSET;
   _ENetEvent local_68[40];
   long local_40;
   lVar7 = *(long*)( this + 0x180 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar7 == 0) {
      _err_print_error("service", "modules/enet/enet_connection.cpp", 0xa3, "Parameter \"host\" is null.", "The ENetConnection instance isn\'t currently active.", 0, 0);
   }
 else if (*(long*)param_2 == 0) {
      if (( *(long**)( this + 0x188 ) != (long*)0x0 ) && ( plVar9 = (long*)**(long**)( this + 0x188 ) ),plVar9 != (long*)0x0) {
         do {
            cVar6 = ENetPacketPeer::is_active();
            if (cVar6 == '\0') {
               plVar1 = *(long**)( this + 0x188 );
               if (plVar1 != (long*)0x0) {
                  for (plVar2 = (long*)*plVar1; plVar2 != (long*)0x0; plVar2 = (long*)plVar2[1]) {
                     if (*plVar9 == *plVar2) {
                        if (plVar1 == (long*)plVar2[3]) {
                           lVar7 = plVar2[1];
                           if ((long*)*plVar1 == plVar2) {
                              *plVar1 = lVar7;
                              lVar3 = plVar2[2];
                              plVar4 = (long*)plVar1[1];
                           }
 else {
                              lVar3 = plVar2[2];
                              plVar4 = (long*)plVar1[1];
                           }

                           if (plVar4 == plVar2) {
                              plVar1[1] = lVar3;
                           }

                           if (lVar3 != 0) {
                              *(long*)( lVar3 + 8 ) = lVar7;
                              lVar7 = plVar2[1];
                           }

                           if (lVar7 != 0) {
                              *(long*)( lVar7 + 0x10 ) = lVar3;
                           }

                           if (( *plVar2 != 0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
                              pOVar5 = (Object*)*plVar2;
                              cVar6 = predelete_handler(pOVar5);
                              if (cVar6 != '\0') {
                                 ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                                 Memory::free_static(pOVar5, false);
                              }

                           }

                           Memory::free_static(plVar2, false);
                           *(int*)( plVar1 + 2 ) = (int)plVar1[2] + -1;
                        }
 else {
                           _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                        }

                        if (*(int*)( (long)*(void**)( this + 0x188 ) + 0x10 ) == 0) {
                           Memory::free_static(*(void**)( this + 0x188 ), false);
                           plVar9 = (long*)plVar9[1];
                           *(undefined8*)( this + 0x188 ) = 0;
                           goto joined_r0x0010226a;
                        }

                        break;
                     }

                  }

               }

            }

            plVar9 = (long*)plVar9[1];
            joined_r0x0010226a:;
         }
 while ( plVar9 != (long*)0x0 );
         lVar7 = *(long*)( this + 0x180 );
      }

      uVar8 = enet_host_service(lVar7, local_68, param_1);
      if (-1 < (int)uVar8) {
         if ((int)uVar8 != 0) {
            uVar8 = _parse_event(this, local_68, param_2);
         }

         goto LAB_00102292;
      }

   }
 else {
      _err_print_error("service", "modules/enet/enet_connection.cpp", 0xa4, "Condition \"r_event.peer.is_valid()\" is true. Returning: EVENT_ERROR", 0, 0);
   }

   uVar8 = 0xffffffff;
   LAB_00102292:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::_service(int) */Array *ENetConnection::_service(int param_1) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   int in_EDX;
   ENetConnection *in_RSI;
   undefined4 in_register_0000003c;
   Array *this;
   long in_FS_OFFSET;
   Object *local_68;
   uchar local_60;
   uint local_5c;
   long local_58;
   int local_48[6];
   long local_30;
   this(Array * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(this);
   local_68 = (Object*)0x0;
   local_60 = '\0';
   local_5c = 0;
   local_58 = 0;
   iVar3 = service(in_RSI, in_EDX, (Event*)&local_68);
   Variant::Variant((Variant*)local_48, iVar3);
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   pOVar1 = local_68;
   Variant::Variant((Variant*)local_48, local_68);
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, local_5c);
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, local_60);
   Array::push_back((Variant*)this);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_58 == 0) {
      if (pOVar1 == (Object*)0x0) goto LAB_001024d5;
      cVar2 = RefCounted::unreference();
   }
 else {
      if (pOVar1 == (Object*)0x0) goto LAB_001024d5;
      ENetPacketPeer::_queue_packet((_ENetPacket*)pOVar1);
      cVar2 = RefCounted::unreference();
   }

   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

   LAB_001024d5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* ENetConnection::connect_to_host(String const&, int, int, int) */String *ENetConnection::connect_to_host(String *param_1, int param_2, int param_3, int param_4) {
   long *plVar1;
   char cVar2;
   undefined8 uVar3;
   _ENetPeer *p_Var4;
   ENetPacketPeer *this;
   undefined1(*pauVar5)[16];
   char *pcVar6;
   undefined4 in_register_00000014;
   undefined4 in_register_00000034;
   long lVar7;
   int in_R8D;
   char *pcVar8;
   undefined4 in_R9D;
   ENetPacketPeer *pEVar9;
   long in_FS_OFFSET;
   IPAddress local_58[16];
   undefined2 local_48;
   long local_40;
   lVar7 = CONCAT44(in_register_00000034, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar7 + 0x180 ) == 0) {
      pcVar8 = "The ENetConnection instance isn\'t currently active.";
      uVar3 = 0x55;
      pcVar6 = "Parameter \"host\" is null.";
   }
 else if (( *(long*)( lVar7 + 0x188 ) == 0 ) || ( *(int*)( *(long*)( lVar7 + 0x188 ) + 0x10 ) == 0 )) {
      if (param_4 - 1U < 0xffff) {
         IPAddress::clear();
         cVar2 = String::is_valid_ip_address();
         if (cVar2 == '\0') {
            uVar3 = IP::get_singleton();
            IP::resolve_hostname(local_58, uVar3, (String*)CONCAT44(in_register_00000014, param_3), 3);
            if ((char)local_48 == '\0') {
               pcVar8 = "Couldn\'t resolve the server IP address or domain name.";
               uVar3 = 0x62;
               pcVar6 = "Condition \"!ip.is_valid()\" is true. Returning: out";
               goto LAB_001028dc;
            }

         }
 else {
            IPAddress::IPAddress(local_58, (String*)CONCAT44(in_register_00000014, param_3));
         }

         uVar3 = IPAddress::get_ipv6();
         enet_address_set_ip(local_58, uVar3, 0x10);
         if (in_R8D < 1) {
            in_R8D = 0xff;
         }

         local_48 = (undefined2)param_4;
         p_Var4 = (_ENetPeer*)enet_host_connect(*(undefined8*)( lVar7 + 0x180 ), local_58, (long)in_R8D, in_R9D);
         if (p_Var4 != (_ENetPeer*)0x0) {
            this(ENetPacketPeer * operator_new(0x1b0, ""));
            ENetPacketPeer::ENetPacketPeer(this, p_Var4);
            postinitialize_handler((Object*)this);
            cVar2 = RefCounted::init_ref();
            if (cVar2 == '\0') {
               pEVar9 = *(ENetPacketPeer**)( lVar7 + 0x188 );
               if (pEVar9 == (ENetPacketPeer*)0x0) {
                  LAB_001026e0:pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( lVar7 + 0x188 ) = pauVar5;
                  *(undefined4*)pauVar5[1] = 0;
                  *pauVar5 = (undefined1[16])0x0;
                  goto LAB_00102776;
               }

               pEVar9 = (ENetPacketPeer*)0x0;
               pauVar5 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
               *pauVar5 = (undefined1[16])0x0;
               pauVar5[1] = (undefined1[16])0x0;
            }
 else {
               cVar2 = RefCounted::reference();
               pEVar9 = (ENetPacketPeer*)0x0;
               if (cVar2 != '\0') {
                  pEVar9 = this;
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)this + 0x140 ) )(this);
                  Memory::free_static(this, false);
               }

               if (*(long*)( lVar7 + 0x188 ) == 0) goto LAB_001026e0;
               LAB_00102776:pauVar5 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
               *pauVar5 = (undefined1[16])0x0;
               pauVar5[1] = (undefined1[16])0x0;
               if (pEVar9 != (ENetPacketPeer*)0x0) {
                  *(ENetPacketPeer**)*pauVar5 = pEVar9;
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *(undefined8*)*pauVar5 = 0;
                  }

               }

            }

            plVar1 = *(long**)( lVar7 + 0x188 );
            lVar7 = plVar1[1];
            *(undefined8*)( *pauVar5 + 8 ) = 0;
            *(long**)( pauVar5[1] + 8 ) = plVar1;
            *(long*)pauVar5[1] = lVar7;
            if (lVar7 != 0) {
               *(undefined1(**) [16])( lVar7 + 8 ) = pauVar5;
            }

            plVar1[1] = (long)pauVar5;
            if (*plVar1 == 0) {
               *plVar1 = (long)pauVar5;
            }

            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            if (pEVar9 != (ENetPacketPeer*)0x0) {
               *(ENetPacketPeer**)param_1 = pEVar9;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *(undefined8*)param_1 = 0;
                  cVar2 = RefCounted::unreference();
               }
 else {
                  cVar2 = RefCounted::unreference();
               }

               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pEVar9) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)pEVar9 + 0x140 ) )(pEVar9);
                  Memory::free_static(pEVar9, false);
               }

               goto LAB_001027fd;
            }

         }

         *(undefined8*)param_1 = 0;
         goto LAB_001027fd;
      }

      pcVar8 = "The remote port number must be between 1 and 65535 (inclusive).";
      uVar3 = 0x57;
      pcVar6 = "Condition \"p_port < 1 || p_port > 65535\" is true. Returning: out";
   }
 else {
      pcVar8 = "The ENetConnection is already connected to a peer.";
      uVar3 = 0x56;
      pcVar6 = "Condition \"peers.size()\" is true. Returning: out";
   }

   LAB_001028dc:_err_print_error("connect_to_host", "modules/enet/enet_connection.cpp", uVar3, pcVar6, pcVar8, 0, 0);
   *(undefined8*)param_1 = 0;
   LAB_001027fd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::_bind_methods() */void ENetConnection::_bind_methods(void) {
   Variant *pVVar1;
   StringName *this;
   long lVar2;
   code *pcVar3;
   undefined *puVar4;
   undefined8 uVar5;
   MethodBind *pMVar6;
   uint uVar7;
   Variant *pVVar8;
   long lVar9;
   long *plVar10;
   long in_FS_OFFSET;
   undefined8 local_3a0;
   long local_398;
   undefined8 local_390;
   undefined8 local_388;
   undefined8 local_380;
   long local_378;
   long local_370;
   char *local_368;
   undefined1 local_360[16];
   undefined8 local_350;
   undefined8 local_348;
   undefined4 local_340;
   char *local_338;
   char *pcStack_330;
   undefined8 local_328;
   char *local_318;
   char *pcStack_310;
   undefined8 local_308;
   char *local_2f8;
   char *pcStack_2f0;
   char *local_2e8;
   undefined8 local_2e0;
   char *local_2d8;
   undefined *puStack_2d0;
   char *local_2c8;
   undefined8 local_2c0;
   char *local_2b8;
   undefined *puStack_2b0;
   char *local_2a8;
   undefined *puStack_2a0;
   undefined8 local_298;
   char *local_288;
   char *pcStack_280;
   char *local_278;
   char *pcStack_270;
   undefined8 local_268;
   char *local_258;
   char *pcStack_250;
   char *local_248;
   char *pcStack_240;
   char *local_238;
   char *pcStack_230;
   undefined8 local_228;
   Variant *local_218;
   Variant *pVStack_210;
   Variant *local_208;
   Variant *pVStack_200;
   char **local_1f8;
   char **ppcStack_1f0;
   Variant local_1d8[24];
   Variant local_1c0[24];
   undefined8 local_1a8;
   undefined1 local_1a0[16];
   Variant local_190[8];
   Variant local_188[24];
   Variant local_170[24];
   undefined8 local_158;
   undefined1 local_150[16];
   Variant local_140[8];
   Variant *local_138;
   undefined8 local_130;
   Variant local_120[24];
   Variant local_108[24];
   Variant local_f0[24];
   undefined8 local_d8;
   undefined1 local_d0[16];
   Variant local_c0[8];
   Variant *local_b8;
   undefined1 auStack_b0[16];
   Variant *pVStack_a0;
   undefined1 local_98[16];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   puVar4 = PTR__LC99_00115fa8;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_238 = "in_bandwidth";
   pcStack_230 = "out_bandwidth";
   local_218 = (Variant*)&local_258;
   pVStack_210 = (Variant*)&pcStack_250;
   local_258 = "bind_address";
   pcStack_250 = "bind_port";
   pVStack_200 = (Variant*)&pcStack_240;
   local_208 = (Variant*)&local_248;
   ppcStack_1f0 = &pcStack_230;
   local_1f8 = &local_238;
   local_248 = "max_peers";
   pcStack_240 = "max_channels";
   local_228 = 0;
   D_METHODP((char*)&local_368, (char***)"create_host_bound", ( uint ) & local_218);
   Variant::Variant((Variant*)&local_b8, 0x20);
   Variant::Variant((Variant*)&pVStack_a0, 0);
   Variant::Variant(local_88, 0);
   Variant::Variant(local_70, 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_218 = (Variant*)&local_b8;
   pVStack_210 = (Variant*)&pVStack_a0;
   local_208 = local_88;
   pVStack_200 = local_70;
   pMVar6 = create_method_bind<ENetConnection,Error,IPAddress_const&,int,int,int,int,int>(create_host_bound);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_218, 4);
   pVVar8 = (Variant*)local_40;
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)&local_b8 );
   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_268 = 0;
   local_278 = "in_bandwidth";
   pcStack_270 = "out_bandwidth";
   local_288 = "max_peers";
   pcStack_280 = "max_channels";
   uVar7 = (uint)(Variant*)&local_b8;
   local_b8 = (Variant*)&local_288;
   pVStack_a0 = (Variant*)&pcStack_270;
   auStack_b0._0_8_ = &pcStack_280;
   auStack_b0._8_8_ = &local_278;
   D_METHODP((char*)&local_368, (char***)"create_host", uVar7);
   Variant::Variant((Variant*)&local_138, 0x20);
   Variant::Variant(local_120, 0);
   Variant::Variant(local_108, 0);
   Variant::Variant(local_f0, 0);
   local_d0 = (undefined1[16])0x0;
   local_d8 = 0;
   auStack_b0._8_8_ = local_108;
   auStack_b0._0_8_ = local_120;
   local_b8 = (Variant*)&local_138;
   pVStack_a0 = local_f0;
   pMVar6 = create_method_bind<ENetConnection,Error,int,int,int,int>(create_host);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_b8, 4);
   pVVar8 = local_c0;
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)&local_138 );
   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_368, (char***)"destroy", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection>(destroy);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   local_2b8 = "address";
   puStack_2b0 = &_LC103;
   local_2a8 = "channels";
   puStack_2a0 = &_LC105;
   local_298 = 0;
   local_b8 = (Variant*)&local_2b8;
   pVStack_a0 = (Variant*)&puStack_2a0;
   auStack_b0._0_8_ = &puStack_2b0;
   auStack_b0._8_8_ = &local_2a8;
   D_METHODP((char*)&local_368, (char***)"connect_to_host", uVar7);
   Variant::Variant(local_188, 0);
   Variant::Variant(local_170, 0);
   local_150 = (undefined1[16])0x0;
   local_158 = 0;
   auStack_b0._0_8_ = local_170;
   local_b8 = local_188;
   pMVar6 = create_method_bind<ENetConnection,Ref<ENetPacketPeer>,String_const&,int,int,int>(connect_to_host);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_b8, 2);
   pVVar8 = local_140;
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != local_188 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   local_130 = 0;
   local_138 = (Variant*)0x106d5d;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"service", uVar7);
   Variant::Variant((Variant*)&local_b8, 0);
   local_98 = (undefined1[16])0x0;
   pVStack_a0 = (Variant*)0x0;
   local_138 = (Variant*)&local_b8;
   pMVar6 = create_method_bind<ENetConnection,Array,int>(_service);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_138, 1);
   if (Variant::needs_deinit[(int)pVStack_a0] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   D_METHODP((char*)&local_368, (char***)"flush", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection>(flush);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_308 = 0;
   pVVar8 = local_190;
   local_318 = "in_bandwidth";
   pcStack_310 = "out_bandwidth";
   local_b8 = (Variant*)&local_318;
   auStack_b0._0_8_ = &pcStack_310;
   D_METHODP((char*)&local_368, (char***)"bandwidth_limit", uVar7);
   Variant::Variant(local_1d8, 0);
   Variant::Variant(local_1c0, 0);
   local_1a0 = (undefined1[16])0x0;
   auStack_b0._0_8_ = local_1c0;
   local_1a8 = 0;
   local_b8 = local_1d8;
   pMVar6 = create_method_bind<ENetConnection,int,int>(bandwidth_limit);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_b8, 2);
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != local_1d8 );
   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_138 = (Variant*)0x106d65;
   local_130 = 0;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"channel_limit", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,int>(channel_limit);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_2c0 = 0;
   local_2c8 = "flags";
   local_2d8 = "channel";
   puStack_2d0 = puVar4;
   auStack_b0._8_8_ = &local_2c8;
   auStack_b0._0_8_ = &puStack_2d0;
   local_b8 = (Variant*)&local_2d8;
   D_METHODP((char*)&local_368, (char***)"broadcast", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,int,Vector<unsigned_char>,int>(_broadcast);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   local_130 = 0;
   local_138 = (Variant*)&_LC114;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"compress", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,ENetConnection::CompressionMode>(compress);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   local_130 = 0;
   local_138 = (Variant*)0x106d76;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"dtls_server_setup", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,Error,Ref<TLSOptions>const&>(dtls_server_setup);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_328 = 0;
   auStack_b0._0_8_ = &pcStack_330;
   local_338 = "hostname";
   pcStack_330 = "client_options";
   local_b8 = (Variant*)&local_338;
   D_METHODP((char*)&local_368, (char***)"dtls_client_setup", uVar7);
   Variant::Variant((Variant*)&local_b8, (Object*)0x0);
   local_98 = (undefined1[16])0x0;
   pVStack_a0 = (Variant*)0x0;
   local_138 = (Variant*)&local_b8;
   pMVar6 = create_method_bind<ENetConnection,Error,String_const&,Ref<TLSOptions>const&>(dtls_client_setup);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, &local_138, 1);
   if (Variant::needs_deinit[(int)pVStack_a0] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   local_130 = 0;
   local_138 = (Variant*)0x106d85;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"refuse_new_connections", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,bool>(refuse_new_connections);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_138 = (Variant*)0x106d8c;
   local_130 = 0;
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_368, (char***)"pop_statistic", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,double,ENetConnection::HostStatistic>(pop_statistic);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_368, (char***)"get_max_channels", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,int>(get_max_channels);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_368, (char***)"get_local_port", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,int>(get_local_port);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   D_METHODP((char*)&local_368, (char***)"get_peers", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,TypedArray<ENetPacketPeer>>(_get_peers);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   uVar5 = local_360._8_8_;
   if ((long*)local_360._8_8_ != (long*)0x0) {
      LOCK();
      plVar10 = (long*)( local_360._8_8_ + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if ((long*)local_360._8_8_ == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_360._8_8_ + -8 );
         local_360._8_8_ = 0;
         if (lVar2 != 0) {
            lVar9 = 0;
            plVar10 = (long*)uVar5;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }

               lVar9 = lVar9 + 1;
               plVar10 = plVar10 + 1;
            }
 while ( lVar2 != lVar9 );
         }

         Memory::free_static((long*)( uVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   local_2e8 = "packet";
   auStack_b0._8_8_ = &local_2e8;
   auStack_b0._0_8_ = &pcStack_2f0;
   local_2f8 = "destination_address";
   pcStack_2f0 = "destination_port";
   local_2e0 = 0;
   local_b8 = (Variant*)&local_2f8;
   D_METHODP((char*)&local_368, (char***)"socket_send", uVar7);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar6 = create_method_bind<ENetConnection,String_const&,int,Vector<unsigned_char>const&>(socket_send);
   ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)&local_368, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_368);
   StringName::StringName((StringName*)&local_370, "COMPRESS_NONE", false);
   local_368 = "COMPRESS_NONE";
   local_380 = 0;
   local_360._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info((GetTypeInfo<ENetConnection::CompressionMode,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 0, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "COMPRESS_RANGE_CODER", false);
   local_368 = "COMPRESS_RANGE_CODER";
   local_380 = 0;
   local_360._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info((GetTypeInfo<ENetConnection::CompressionMode,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 1, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "COMPRESS_FASTLZ", false);
   local_368 = "COMPRESS_FASTLZ";
   local_380 = 0;
   local_360._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info((GetTypeInfo<ENetConnection::CompressionMode,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 2, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "COMPRESS_ZLIB", false);
   local_368 = "COMPRESS_ZLIB";
   local_380 = 0;
   local_360._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info((GetTypeInfo<ENetConnection::CompressionMode,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 3, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "COMPRESS_ZSTD", false);
   local_368 = "COMPRESS_ZSTD";
   local_380 = 0;
   local_360._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info((GetTypeInfo<ENetConnection::CompressionMode,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 4, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_398, "EVENT_ERROR", false);
   local_3a0 = 0;
   local_368 = "EVENT_ERROR";
   local_360._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_3a0);
   local_368 = "ENetConnection::EventType";
   local_380 = 0;
   local_360._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_380);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_378, (String*)&local_380);
   StringName::StringName((StringName*)&local_370, (String*)&local_378, false);
   this(StringName * )(local_360 + 8);
   local_360 = (undefined1[16])0x0;
   local_388 = 0;
   local_390 = 0;
   local_368 = (char*)0x2;
   local_350 = 0;
   local_348 = 0;
   local_340 = 0x10006;
   StringName::operator =(this, (StringName*)&local_370);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_390);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   local_370 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_378 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_378);
   StringName::StringName((StringName*)&local_368, (String*)&local_378, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_370, (StringName*)&local_398, -1, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3a0);
   if (( StringName::configured != '\0' ) && ( local_398 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_398, "EVENT_NONE", false);
   local_368 = "EVENT_NONE";
   local_3a0 = 0;
   local_360._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_3a0);
   local_368 = "ENetConnection::EventType";
   local_380 = 0;
   local_360._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_380);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_378, (String*)&local_380);
   StringName::StringName((StringName*)&local_370, (String*)&local_378, false);
   local_360 = (undefined1[16])0x0;
   local_388 = 0;
   local_390 = 0;
   local_368 = (char*)0x2;
   local_350 = 0;
   local_348 = 0;
   local_340 = 0x10006;
   StringName::operator =(this, (StringName*)&local_370);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_390);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   local_370 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_378 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_378);
   StringName::StringName((StringName*)&local_368, (String*)&local_378, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_370, (StringName*)&local_398, 0, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3a0);
   if (( StringName::configured != '\0' ) && ( local_398 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_398, "EVENT_CONNECT", false);
   local_368 = "EVENT_CONNECT";
   local_3a0 = 0;
   local_360._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_3a0);
   local_368 = "ENetConnection::EventType";
   local_380 = 0;
   local_360._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_380);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_378, (String*)&local_380);
   StringName::StringName((StringName*)&local_370, (String*)&local_378, false);
   local_360 = (undefined1[16])0x0;
   local_388 = 0;
   local_390 = 0;
   local_368 = (char*)0x2;
   local_350 = 0;
   local_348 = 0;
   local_340 = 0x10006;
   StringName::operator =(this, (StringName*)&local_370);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_390);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   local_370 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_378 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_378);
   StringName::StringName((StringName*)&local_368, (String*)&local_378, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_370, (StringName*)&local_398, 1, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3a0);
   if (( StringName::configured != '\0' ) && ( local_398 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_398, "EVENT_DISCONNECT", false);
   local_368 = "EVENT_DISCONNECT";
   local_3a0 = 0;
   local_360._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_3a0);
   local_368 = "ENetConnection::EventType";
   local_380 = 0;
   local_360._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_380);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_378, (String*)&local_380);
   StringName::StringName((StringName*)&local_370, (String*)&local_378, false);
   local_360 = (undefined1[16])0x0;
   local_388 = 0;
   local_390 = 0;
   local_368 = (char*)0x2;
   local_350 = 0;
   local_348 = 0;
   local_340 = 0x10006;
   StringName::operator =(this, (StringName*)&local_370);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_390);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   local_370 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_378 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_378);
   StringName::StringName((StringName*)&local_368, (String*)&local_378, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_370, (StringName*)&local_398, 2, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3a0);
   if (( StringName::configured != '\0' ) && ( local_398 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_398, "EVENT_RECEIVE", false);
   local_368 = "EVENT_RECEIVE";
   local_3a0 = 0;
   local_360._0_8_ = 0xd;
   String::parse_latin1((StrRange*)&local_3a0);
   local_368 = "ENetConnection::EventType";
   local_380 = 0;
   local_360._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_380);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_378, (String*)&local_380);
   StringName::StringName((StringName*)&local_370, (String*)&local_378, false);
   local_360 = (undefined1[16])0x0;
   local_388 = 0;
   local_390 = 0;
   local_368 = (char*)0x2;
   local_350 = 0;
   local_348 = 0;
   local_340 = 0x10006;
   StringName::operator =(this, (StringName*)&local_370);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_390);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   local_370 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_378 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_378);
   StringName::StringName((StringName*)&local_368, (String*)&local_378, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_370, (StringName*)&local_398, 3, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_378);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3a0);
   if (( StringName::configured != '\0' ) && ( local_398 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "HOST_TOTAL_SENT_DATA", false);
   local_368 = "HOST_TOTAL_SENT_DATA";
   local_380 = 0;
   local_360._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info((GetTypeInfo<ENetConnection::HostStatistic,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 0, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "HOST_TOTAL_SENT_PACKETS", false);
   local_368 = "HOST_TOTAL_SENT_PACKETS";
   local_380 = 0;
   local_360._0_8_ = 0x17;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info((GetTypeInfo<ENetConnection::HostStatistic,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 1, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "HOST_TOTAL_RECEIVED_DATA", false);
   local_368 = "HOST_TOTAL_RECEIVED_DATA";
   local_380 = 0;
   local_360._0_8_ = 0x18;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info((GetTypeInfo<ENetConnection::HostStatistic,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 2, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_370, "HOST_TOTAL_RECEIVED_PACKETS", false);
   local_368 = "HOST_TOTAL_RECEIVED_PACKETS";
   local_380 = 0;
   local_360._0_8_ = 0x1b;
   String::parse_latin1((StrRange*)&local_380);
   GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info((GetTypeInfo<ENetConnection::HostStatistic,void>*)&local_368);
   local_378 = local_360._8_8_;
   local_360._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_368);
   local_388 = 0;
   local_368 = "ENetConnection";
   local_360._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_388);
   StringName::StringName((StringName*)&local_368, (String*)&local_388, false);
   ClassDB::bind_integer_constant((StringName*)&local_368, (StringName*)&local_378, (StringName*)&local_370, 3, false);
   if (( StringName::configured != '\0' ) && ( local_368 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_388);
   if (( StringName::configured != '\0' ) && ( local_378 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_380);
   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00105816:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00105816;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00107506();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_0010576c;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_0010576c:puVar8[-1] = param_1;
   return;
}
/* ENetConnection::Compressor::enet_compress(void*, ENetBuffer const*, unsigned long, unsigned long,
   unsigned char*, unsigned long) */size_t ENetConnection::Compressor::enet_compress(void *param_1, ENetBuffer *param_2, ulong param_3, ulong param_4, uchar *param_5, ulong param_6) {
   ENetBuffer *pEVar1;
   undefined8 uVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   ulong uVar6;
   size_t __n;
   long lVar7;
   ulong uVar8;
   long lVar9;
   uint uVar10;
   ulong uVar11;
   int iVar12;
   long in_FS_OFFSET;
   void *local_a8;
   int local_78;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( (long)param_1 + 0x10 ) == 0) {
      if (param_4 != 0) goto LAB_001059e8;
      LAB_00105a15:iVar12 = 0;
   }
 else {
      if (*(ulong*)( *(long*)( (long)param_1 + 0x10 ) + -8 ) < param_4) {
         LAB_001059e8:CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( (long)param_1 + 0x10 ), param_4);
      }

      uVar11 = param_4 & 0xffffffff;
      if ((int)param_4 == 0) goto LAB_00105a15;
      if (param_3 == 0) {
         do {
            /* WARNING: Do nothing block with infinite loop */
         }
 while ( true );
      }

      iVar12 = 0;
      do {
         lVar9 = (long)iVar12;
         local_a8 = *(void**)param_2;
         uVar6 = ( ulong ) * (uint*)( param_2 + 8 );
         if ((int)uVar11 <= (int)*(uint*)( param_2 + 8 )) {
            uVar6 = uVar11;
         }

         uVar5 = (uint)uVar6;
         if (lVar9 < 0) {
            LAB_0010598b:lVar7 = *(long*)( (long)param_1 + 0x10 );
            if (lVar7 == 0) {
               LAB_001059e0:lVar7 = 0;
            }
 else {
               LAB_00105994:lVar7 = *(long*)( lVar7 + -8 );
            }

            _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar9, lVar7, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         uVar8 = 0;
         pEVar1 = param_2;
         while (true) {
            lVar7 = *(long*)( (long)param_1 + 0x10 );
            if (lVar7 == 0) goto LAB_001059e0;
            if (*(long*)( lVar7 + -8 ) <= lVar9) goto LAB_00105994;
            iVar12 = iVar12 + (int)uVar6;
            uVar10 = (int)uVar11 - (int)uVar6;
            uVar11 = (ulong)uVar10;
            uVar8 = uVar8 + 1;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( (long)param_1 + 0x10 ));
            memcpy((void*)( *(long*)( (long)param_1 + 0x10 ) + lVar9 ), local_a8, (long)(int)uVar5);
            if (param_3 == uVar8) break;
            local_a8 = *(void**)( pEVar1 + 0x10 );
            lVar9 = (long)iVar12;
            uVar5 = *(uint*)( pEVar1 + 0x18 );
            if ((int)uVar10 <= (int)*(uint*)( pEVar1 + 0x18 )) {
               uVar5 = uVar10;
            }

            uVar6 = (ulong)uVar5;
            pEVar1 = pEVar1 + 0x10;
            if (lVar9 < 0) goto LAB_0010598b;
         }
;
      }
 while ( uVar10 != 0 );
   }

   /* WARNING: Load size is inaccurate */
   iVar4 = *param_1;
   uVar5 = iVar4 - 2;
   if (uVar5 < 3) {
      iVar4 = Compression::get_max_compressed_buffer_size(iVar12, uVar5);
      if (*(long*)( (long)param_1 + 0x20 ) == 0) {
         lVar9 = 0;
      }
 else {
         lVar9 = *(long*)( *(long*)( (long)param_1 + 0x20 ) + -8 );
      }

      if (lVar9 < iVar4) {
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( (long)param_1 + 0x20 ), (long)iVar4);
      }

      uVar2 = *(undefined8*)( (long)param_1 + 0x10 );
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( (long)param_1 + 0x20 ));
      iVar12 = Compression::compress(*(undefined8*)( (long)param_1 + 0x20 ), uVar2, iVar12, uVar5);
      if (( -1 < iVar12 ) && ( local_78 = iVar12 <= local_78 )) {
         __n = (size_t)iVar12;
         memcpy(param_5, *(void**)( (long)param_1 + 0x20 ), __n);
         goto LAB_00105a7d;
      }

   }
 else {
      local_60 = 0;
      local_50 = 0x21;
      local_58 = "Invalid ENet compression mode: %d";
      String::parse_latin1((StrRange*)&local_60);
      vformat<ENetConnection::CompressionMode>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, iVar4);
      _err_print_error("enet_compress", "modules/enet/enet_connection.cpp", 0x1c5, "Method/function failed. Returning: 0", (CowData<char32_t>*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   __n = 0;
   LAB_00105a7d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return __n;
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
   return (uint)CONCAT71(0x115f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* ENetConnection::is_class_ptr(void*) const */uint ENetConnection::is_class_ptr(ENetConnection *this, void *param_1) {
   return (uint)CONCAT71(0x115f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ENetConnection::_getv(StringName const&, Variant&) const */undefined8 ENetConnection::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ENetConnection::_setv(StringName const&, Variant const&) */undefined8 ENetConnection::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ENetConnection::_validate_propertyv(PropertyInfo&) const */void ENetConnection::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ENetConnection::_property_can_revertv(StringName const&) const */undefined8 ENetConnection::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ENetConnection::_property_get_revertv(StringName const&, Variant&) const */undefined8 ENetConnection::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ENetConnection::_notificationv(int, bool) */void ENetConnection::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindT<String const&, int, Vector<unsigned char> const&>::get_argument_meta(int) const */char MethodBindT<String_const&,int,Vector<unsigned_char>const&>::get_argument_meta(MethodBindT<String_const&,int,Vector<unsigned_char>const&> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}
/* MethodBindTR<TypedArray<ENetPacketPeer>>::_gen_argument_type(int) const */undefined8 MethodBindTR<TypedArray<ENetPacketPeer>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTR<TypedArray<ENetPacketPeer>>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<ENetPacketPeer>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTR<double, ENetConnection::HostStatistic>::_gen_argument_type(int) const */int MethodBindTR<double,ENetConnection::HostStatistic>::_gen_argument_type(MethodBindTR<double,ENetConnection::HostStatistic> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTR<double, ENetConnection::HostStatistic>::get_argument_meta(int) const */uint MethodBindTR<double,ENetConnection::HostStatistic>::get_argument_meta(MethodBindTR<double,ENetConnection::HostStatistic> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}
/* MethodBindT<bool>::_gen_argument_type(int) const */bool MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this, int param_1) {
   return param_1 == 0;
}
/* MethodBindT<bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::_gen_argument_type(int) const */int MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::_gen_argument_type(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 2;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
   }

   return iVar1;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Error, Ref<TLSOptions> const&>::_gen_argument_type(int) const */char MethodBindTR<Error,Ref<TLSOptions>const&>::_gen_argument_type(MethodBindTR<Error,Ref<TLSOptions>const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x16U ) + 2;
}
/* MethodBindTR<Error, Ref<TLSOptions> const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,Ref<TLSOptions>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<ENetConnection::CompressionMode>::_gen_argument_type(int) const */char MethodBindT<ENetConnection::CompressionMode>::_gen_argument_type(MethodBindT<ENetConnection::CompressionMode> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<ENetConnection::CompressionMode>::get_argument_meta(int) const */undefined8 MethodBindT<ENetConnection::CompressionMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<int, Vector<unsigned char>, int>::get_argument_meta(int) const */byte MethodBindT<int,Vector<unsigned_char>,int>::get_argument_meta(MethodBindT<int,Vector<unsigned_char>,int> *this, int param_1) {
   return -((param_1 & 0xfffffffdU) == 0) & 3;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, int>::_gen_argument_type(int) const */char MethodBindT<int,int>::_gen_argument_type(MethodBindT<int,int> *this, int param_1) {
   return ( (uint)param_1 < 2 ) * '\x02';
}
/* MethodBindT<int, int>::get_argument_meta(int) const */byte MethodBindT<int,int>::get_argument_meta(MethodBindT<int,int> *this, int param_1) {
   return -((uint)param_1 < 2) & 3;
}
/* MethodBindTR<Array, int>::_gen_argument_type(int) const */int MethodBindTR<Array,int>::_gen_argument_type(MethodBindTR<Array,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe6 ) + 0x1c;
}
/* MethodBindTR<Array, int>::get_argument_meta(int) const */byte MethodBindTR<Array,int>::get_argument_meta(MethodBindTR<Array,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::_gen_argument_type(int) const */char MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::_gen_argument_type(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 4) {
      cVar1 = ( -(param_1 == 0) & 2U ) + 2;
   }

   return cVar1;
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::get_argument_meta(int) const */byte MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::get_argument_meta(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -(param_1 - 1U < 3) & 3;
   }

   return bVar1;
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
/* MethodBindTR<Error, int, int, int, int>::_gen_argument_type(int) const */undefined8 MethodBindTR<Error,int,int,int,int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTR<Error, int, int, int, int>::get_argument_meta(int) const */byte MethodBindTR<Error,int,int,int,int>::get_argument_meta(MethodBindTR<Error,int,int,int,int> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -((uint)param_1 < 4) & 3;
   }

   return bVar1;
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::_gen_argument_type(int) const */char MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::_gen_argument_type(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::get_argument_meta(int) const */byte MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::get_argument_meta(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this, int param_1) {
   byte bVar1;
   bVar1 = 0;
   if (-1 < param_1) {
      bVar1 = -(param_1 - 1U < 5) & 3;
   }

   return bVar1;
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115950;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115950;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001159b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,int,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001159b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::~MethodBindTR() */void MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::~MethodBindTR(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::~MethodBindTR() */void MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::~MethodBindTR(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Array, int>::~MethodBindTR() */void MethodBindTR<Array,int>::~MethodBindTR(MethodBindTR<Array,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ad0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Array, int>::~MethodBindTR() */void MethodBindTR<Array,int>::~MethodBindTR(MethodBindTR<Array,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ad0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Vector<unsigned char>, int>::~MethodBindT() */void MethodBindT<int,Vector<unsigned_char>,int>::~MethodBindT(MethodBindT<int,Vector<unsigned_char>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115bf0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Vector<unsigned char>, int>::~MethodBindT() */void MethodBindT<int,Vector<unsigned_char>,int>::~MethodBindT(MethodBindT<int,Vector<unsigned_char>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115bf0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<ENetConnection::CompressionMode>::~MethodBindT() */void MethodBindT<ENetConnection::CompressionMode>::~MethodBindT(MethodBindT<ENetConnection::CompressionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<ENetConnection::CompressionMode>::~MethodBindT() */void MethodBindT<ENetConnection::CompressionMode>::~MethodBindT(MethodBindT<ENetConnection::CompressionMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,Ref<TLSOptions>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115cb0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,Ref<TLSOptions>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115cb0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d10;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d10;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d70;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d70;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<double, ENetConnection::HostStatistic>::~MethodBindTR() */void MethodBindTR<double,ENetConnection::HostStatistic>::~MethodBindTR(MethodBindTR<double,ENetConnection::HostStatistic> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115dd0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<double, ENetConnection::HostStatistic>::~MethodBindTR() */void MethodBindTR<double,ENetConnection::HostStatistic>::~MethodBindTR(MethodBindTR<double,ENetConnection::HostStatistic> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115dd0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e30;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e30;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR() */void MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR(MethodBindTR<TypedArray<ENetPacketPeer>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e90;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR() */void MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR(MethodBindTR<TypedArray<ENetPacketPeer>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115e90;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&, int, Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<String_const&,int,Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<String_const&,int,Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ef0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&, int, Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<String_const&,int,Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<String_const&,int,Vector<unsigned_char>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115ef0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115690;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115690;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindT<String const&, int, Vector<unsigned char> const&>::_gen_argument_type(int) const */undefined8 MethodBindT<String_const&,int,Vector<unsigned_char>const&>::_gen_argument_type(MethodBindT<String_const&,int,Vector<unsigned_char>const&> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( (uint)param_1 < 3 ) && ( uVar1 = 4 ),param_1 != 0 )) {
      uVar1 = 2;
   }

   return uVar1;
}
/* MethodBindT<int, Vector<unsigned char>, int>::_gen_argument_type(int) const */undefined8 MethodBindT<int,Vector<unsigned_char>,int>::_gen_argument_type(MethodBindT<int,Vector<unsigned_char>,int> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( (uint)param_1 < 3 ) && ( uVar1 = param_1 == 1 )) {
      uVar1 = 0x1d;
   }

   return uVar1;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ENetConnection::_bind_methods() [clone .cold] */void ENetConnection::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00107506(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
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
         LAB_00107553:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107553;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001075be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001075be:return &_get_class_namev();
}
/* ENetConnection::_get_class_namev() const */undefined8 *ENetConnection::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00107643:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00107643;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ENetConnection");
         goto LAB_001076ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ENetConnection");
   LAB_001076ae:return &_get_class_namev();
}
/* ENetConnection::Compressor::enet_compressor_destroy(void*) */void ENetConnection::Compressor::enet_compressor_destroy(void *param_1) {
   long *plVar1;
   long lVar2;
   if (*(long*)( (long)param_1 + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( (long)param_1 + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( (long)param_1 + 0x20 );
         *(undefined8*)( (long)param_1 + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( (long)param_1 + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( (long)param_1 + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( (long)param_1 + 0x10 );
         *(undefined8*)( (long)param_1 + 0x10 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Memory::free_static(param_1, false);
         return;
      }

   }

   Memory::free_static(param_1, false);
   return;
}
/* ENetConnection::get_class() const */void ENetConnection::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010798f;
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

      LAB_0010798f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00107a43;
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
                     if (lVar5 == 0) goto LAB_00107af3;
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

         LAB_00107af3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00107a43;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00107a43:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetConnection::is_class(String const&) const */undefined8 ENetConnection::is_class(ENetConnection *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00107c1f;
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

      LAB_00107c1f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00107cd3;
   }

   cVar5 = String::operator ==(param_1, "ENetConnection");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00107cd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
   local_48 = &_LC37;
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

         goto joined_r0x00107e6c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107e6c:local_58 = lVar2;
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
/* MethodBindTR<TypedArray<ENetPacketPeer>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<ENetPacketPeer>>::_gen_argument_type_info(int param_1) {
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
   local_48 = "ENetPacketPeer";
   local_40 = 0xe;
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
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
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

         goto joined_r0x00107ffc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107ffc:local_58 = lVar2;
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

      initialize_class()::initialized = '\x01'
      ;;
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
      LAB_00108348:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00108348;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00108366;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00108366:if (lVar2 == 0) {
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
/* ENetConnection::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ENetConnection::_get_property_listv(ENetConnection *this, List *param_1, bool param_2) {
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
   local_78 = "ENetConnection";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ENetConnection";
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
      LAB_00108748:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00108748;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00108765;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00108765:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "ENetConnection", false);
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
/* WARNING: Removing unreachable block (ram,0x00108d40) *//* WARNING: Removing unreachable block (ram,0x00108ed5) *//* WARNING: Removing unreachable block (ram,0x00108ee1) *//* String vformat<unsigned char, int>(String const&, unsigned char const, int const) */String *vformat<unsigned_char,int>(String *param_1, uchar param_2, int param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   int in_ECX;
   undefined7 in_register_00000031;
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
   Variant::Variant(local_88, (uchar)param_3);
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT71(in_register_00000031, param_2));
   *(undefined8*)param_1 = local_d0[0];
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
/* WARNING: Removing unreachable block (ram,0x00109038) *//* WARNING: Removing unreachable block (ram,0x001091cd) *//* WARNING: Removing unreachable block (ram,0x001091d9) *//* String vformat<ENetConnection::CompressionMode>(String const&, ENetConnection::CompressionMode
   const) */undefined8 *vformat<ENetConnection::CompressionMode>(undefined8 *param_1, bool *param_2, int param_3) {
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
   String::split(local_58, SUB81(param_1, 0), 0x109227);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC62;
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
            goto LAB_001092fd;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   local_60 = 0;
   local_48 = &_LC62;
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

   LAB_001092fd:plVar1 = local_50;
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
/* GetTypeInfo<ENetConnection::CompressionMode, void>::get_class_info() */GetTypeInfo<ENetConnection::CompressionMode,void> * __thiscall
GetTypeInfo<ENetConnection::CompressionMode,void>::get_class_info
          (GetTypeInfo<ENetConnection::CompressionMode,void> *this){
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
   local_48 = "ENetConnection::CompressionMode";
   local_40 = 0x1f;
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
/* GetTypeInfo<ENetConnection::HostStatistic, void>::get_class_info() */GetTypeInfo<ENetConnection::HostStatistic,void> * __thiscall
GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info
          (GetTypeInfo<ENetConnection::HostStatistic,void> *this){
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
   local_48 = "ENetConnection::HostStatistic";
   local_40 = 0x1d;
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
/* MethodBindTR<double, ENetConnection::HostStatistic>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<double,ENetConnection::HostStatistic>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
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
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_70 = 6;
      local_78 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      GetTypeInfo<ENetConnection::HostStatistic,void>::get_class_info((GetTypeInfo<ENetConnection::HostStatistic,void>*)&local_68);
      local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
      if (local_90._0_8_ != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         local_90._0_8_ = local_60;
         local_60 = 0;
      }

      if (local_90._8_8_ != local_58) {
         StringName::unref();
         local_90._8_8_ = local_58;
         local_58 = 0;
      }

      local_80 = CONCAT44(local_80._4_4_, local_50);
      if (local_78 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_48;
         local_48 = 0;
      }

      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_00109ab0;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC37;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00109a77:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00109a77;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00109ab0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_00109b49;
   local_78 = 0;
   local_68 = &_LC37;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109c45:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109c45;
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
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00109b49:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
}
/* MethodBindT<ENetConnection::CompressionMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<ENetConnection::CompressionMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_90;
   details local_88[8];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_68 = "ENetConnection::CompressionMode";
      local_60._0_8_ = 0x1f;
      String::parse_latin1((StrRange*)&local_80);
      godot::details::enum_qualified_name_to_class_info_name(local_88, (String*)&local_80);
      StringName::StringName((StringName*)&local_90, (String*)local_88, false);
      local_60 = (undefined1[16])0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = (char*)0x2;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0x10006;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      *puVar4 = local_68._0_4_;
      if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_60._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_60._8_8_;
         local_60 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
         StringName::unref();
         uVar2 = local_60._8_8_;
         local_60._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_50;
      if (*(long*)( puVar4 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_48;
         local_48 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<ENetPacketPeer>::unref() */void Ref<ENetPacketPeer>::unref(Ref<ENetPacketPeer> *this) {
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
/* MethodBind* create_method_bind<ENetConnection, Error, IPAddress const&, int, int, int, int,
   int>(Error (ENetConnection::*)(IPAddress const&, int, int, int, int, int)) */MethodBind *create_method_bind<ENetConnection,Error,IPAddress_const&,int,int,int,int,int>(_func_Error_IPAddress_ptr_int_int_int_int_int *param_1) {
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
   *(_func_Error_IPAddress_ptr_int_int_int_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115950;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 6;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, Error, int, int, int, int>(Error
   (ENetConnection::*)(int, int, int, int)) */MethodBind *create_method_bind<ENetConnection,Error,int,int,int,int>(_func_Error_int_int_int_int *param_1) {
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
   *(_func_Error_int_int_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001159b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection>(void (ENetConnection::*)()) */MethodBind *create_method_bind<ENetConnection>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115a10;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, Ref<ENetPacketPeer>, String const&, int, int,
   int>(Ref<ENetPacketPeer> (ENetConnection::*)(String const&, int, int, int)) */MethodBind *create_method_bind<ENetConnection,Ref<ENetPacketPeer>,String_const&,int,int,int>(_func_Ref_String_ptr_int_int_int *param_1) {
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
   *(_func_Ref_String_ptr_int_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115a70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, Array, int>(Array (ENetConnection::*)(int)) */MethodBind *create_method_bind<ENetConnection,Array,int>(_func_Array_int *param_1) {
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
   *(_func_Array_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115ad0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, int, int>(void (ENetConnection::*)(int, int)) */MethodBind *create_method_bind<ENetConnection,int,int>(_func_void_int_int *param_1) {
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
   *(_func_void_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115b30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, int>(void (ENetConnection::*)(int)) */MethodBind *create_method_bind<ENetConnection,int>(_func_void_int *param_1) {
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
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115b90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, int, Vector<unsigned char>, int>(void
   (ENetConnection::*)(int, Vector<unsigned char>, int)) */MethodBind *create_method_bind<ENetConnection,int,Vector<unsigned_char>,int>(_func_void_int_Vector_int *param_1) {
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
   *(_func_void_int_Vector_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115bf0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, ENetConnection::CompressionMode>(void
   (ENetConnection::*)(ENetConnection::CompressionMode)) */MethodBind *create_method_bind<ENetConnection,ENetConnection::CompressionMode>(_func_void_CompressionMode *param_1) {
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
   *(_func_void_CompressionMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115c50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, Error, Ref<TLSOptions> const&>(Error
   (ENetConnection::*)(Ref<TLSOptions> const&)) */MethodBind *create_method_bind<ENetConnection,Error,Ref<TLSOptions>const&>(_func_Error_Ref_ptr *param_1) {
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
   *(_func_Error_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115cb0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, Error, String const&, Ref<TLSOptions>
   const&>(Error (ENetConnection::*)(String const&, Ref<TLSOptions> const&)) */MethodBind *create_method_bind<ENetConnection,Error,String_const&,Ref<TLSOptions>const&>(_func_Error_String_ptr_Ref_ptr *param_1) {
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
   *(_func_Error_String_ptr_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115d10;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, bool>(void (ENetConnection::*)(bool)) */MethodBind *create_method_bind<ENetConnection,bool>(_func_void_bool *param_1) {
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
   *(_func_void_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115d70;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, double, ENetConnection::HostStatistic>(double
   (ENetConnection::*)(ENetConnection::HostStatistic)) */MethodBind *create_method_bind<ENetConnection,double,ENetConnection::HostStatistic>(_func_double_HostStatistic *param_1) {
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
   *(_func_double_HostStatistic**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115dd0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, int>(int (ENetConnection::*)() const) */MethodBind *create_method_bind<ENetConnection,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115e30;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection,
   TypedArray<ENetPacketPeer>>(TypedArray<ENetPacketPeer> (ENetConnection::*)()) */MethodBind *create_method_bind<ENetConnection,TypedArray<ENetPacketPeer>>(_func_TypedArray *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115e90;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<ENetConnection, String const&, int, Vector<unsigned char>
   const&>(void (ENetConnection::*)(String const&, int, Vector<unsigned char> const&)) */MethodBind *create_method_bind<ENetConnection,String_const&,int,Vector<unsigned_char>const&>(_func_void_String_ptr_int_Vector_ptr *param_1) {
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
   *(_func_void_String_ptr_int_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115ef0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "ENetConnection";
   local_30 = 0xe;
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
/* ENetConnection::_initialize_classv() */void ENetConnection::_initialize_classv(void) {
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
         initialize_class()::initialized = '\x01'
         ;;
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* CowData<unsigned char>::_realloc(long) */
   undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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

   /* WARNING: Removing unreachable block (ram,0x0010b698) */
   /* WARNING: Removing unreachable block (ram,0x0010b82d) */
   /* WARNING: Removing unreachable block (ram,0x0010b839) */
   /* String vformat<StringName>(String const&, StringName const) */
   undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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

   /* MethodBindT<String const&, int, Vector<unsigned char> const&>::validated_call(Object*, Variant
   const**, Variant*) const */
   void MethodBindT<String_const&,int,Vector<unsigned_char>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010bb59;
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
         /* WARNING: Could not recover jumptable at 0x0010b9e1. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ), *(long*)( *(long*)( param_3 + 0x10 ) + 8 ) + 0x10);
         return;
      }

      LAB_0010bb59:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<String const&, int, Vector<unsigned char> const&>::ptrcall(Object*, void const**,
   void*) const */
   void MethodBindT<String_const&,int,Vector<unsigned_char>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010bd51;
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
         /* WARNING: Could not recover jumptable at 0x0010bbd4. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, **(undefined4**)( (long)param_3 + 8 ), *(undefined8*)( (long)param_3 + 0x10 ));
         return;
      }

      LAB_0010bd51:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTR<TypedArray<ENetPacketPeer>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<TypedArray<ENetPacketPeer>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010bec0;
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

      LAB_0010bec0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c150;
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

      LAB_0010c150:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_0010c364;
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
      LAB_0010c364:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_0010c513;
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
      LAB_0010c513:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<double, ENetConnection::HostStatistic>::validated_call(Object*, Variant const**,
   Variant*) const */
   void MethodBindTR<double,ENetConnection::HostStatistic>::validated_call(MethodBindTR<double,ENetConnection::HostStatistic> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c6ca;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
      *(undefined8*)( param_3 + 8 ) = uVar3;
      LAB_0010c6ca:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<double, ENetConnection::HostStatistic>::ptrcall(Object*, void const**, void*) const
    */
   void MethodBindTR<double,ENetConnection::HostStatistic>::ptrcall(MethodBindTR<double,ENetConnection::HostStatistic> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010c8a9;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2);
      *(undefined8*)param_3 = uVar3;
      LAB_0010c8a9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010cc11;
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
         /* WARNING: Could not recover jumptable at 0x0010ca9d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010cc11:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010cdf9;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010cc82. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
         return;
      }

      LAB_0010cdf9:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<ENetConnection::CompressionMode>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<ENetConnection::CompressionMode>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010cfd1;
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
         /* WARNING: Could not recover jumptable at 0x0010ce5c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010cfd1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<ENetConnection::CompressionMode>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<ENetConnection::CompressionMode>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010d1b1;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010d03b. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_0010d1b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010d391;
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
         /* WARNING: Could not recover jumptable at 0x0010d21c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
         return;
      }

      LAB_0010d391:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010d571;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
      /* WARNING: Load size is inaccurate */
      if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
         UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010d3fb. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
         return;
      }

      LAB_0010d571:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<int, int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<int,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_50 = 0;
            local_40 = 0x35;
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

            goto LAB_0010d759;
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
         /* WARNING: Could not recover jumptable at 0x0010d5e3. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
         return;
      }

      LAB_0010d759:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<int, int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<int,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010d939;
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
         /* WARNING: Could not recover jumptable at 0x0010d7c1. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(undefined4**)( (long)param_3 + 8 ));
         return;
      }

      LAB_0010d939:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTR<Array, int>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindTR<Array,int>::validated_call(MethodBindTR<Array,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      code *pcVar1;
      long *plVar2;
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
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010d99f;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
      Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010d99f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Array, int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Array,int>::ptrcall(MethodBindTR<Array,int> *this, Object *param_1, void **param_2, void *param_3) {
      code *pcVar1;
      long *plVar2;
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
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010db8d;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar1 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar1 & 1 ) != 0) {
         pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
      Array::operator =((Array*)param_3, (Array*)&local_48);
      Array::~Array((Array*)&local_48);
      LAB_0010db8d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010de30;
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

      LAB_0010de30:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */
   void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

            goto LAB_0010e1af;
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
         /* WARNING: Could not recover jumptable at 0x0010e056. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0010e1af:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindT<>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

            goto LAB_0010e36f;
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
         /* WARNING: Could not recover jumptable at 0x0010e216. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
         return;
      }

      LAB_0010e36f:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* MethodBindTR<Error, int, int, int, int>::validated_call(Object*, Variant const**, Variant*) const
    */
   void MethodBindTR<Error,int,int,int,int>::validated_call(MethodBindTR<Error,int,int,int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      uint uVar1;
      code *pcVar2;
      long *plVar3;
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
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010e3e1;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ), *(undefined4*)( param_2[1] + 8 ), *(undefined4*)( param_2[2] + 8 ), *(undefined4*)( param_2[3] + 8 ));
      *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
      LAB_0010e3e1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, int, int, int, int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error,int,int,int,int>::ptrcall(MethodBindTR<Error,int,int,int,int> *this, Object *param_1, void **param_2, void *param_3) {
      uint uVar1;
      code *pcVar2;
      long *plVar3;
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
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010e5cc;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      for (int i = 0; i < 4; i++) {
         /* WARNING: Load size is inaccurate */
      }

      uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2, *param_2[1], *param_2[2], *param_2[3]);
      *(ulong*)param_3 = (ulong)uVar1;
      LAB_0010e5cc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */
   void MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::validated_call(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      undefined4 uVar1;
      undefined4 uVar2;
      long lVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      ulong uVar6;
      uint uVar7;
      long *plVar8;
      code *pcVar9;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      IPAddress local_58[24];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar8 = *(long**)( param_1 + 0x118 );
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar8 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010e815;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar9 = *(code**)( this + 0x58 );
      lVar3 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar9 & 1 ) != 0) {
         pcVar9 = *(code**)( pcVar9 + *(long*)( param_1 + lVar3 ) + -1 );
      }

      uVar4 = *(undefined8*)( param_2[5] + 8 );
      uVar5 = *(undefined8*)( param_2[4] + 8 );
      uVar6 = *(ulong*)( param_2[3] + 8 );
      uVar1 = *(undefined4*)( param_2[2] + 8 );
      uVar2 = *(undefined4*)( param_2[1] + 8 );
      IPAddress::IPAddress(local_58, (String*)( *param_2 + 8 ));
      uVar7 = ( *pcVar9 )(param_1 + lVar3, local_58, uVar2, uVar1, uVar6 & 0xffffffff, uVar5, uVar4);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar7;
      LAB_0010e815:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::ptrcall(Object*, void const**,
   void*) const */
   void MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::ptrcall(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this, Object *param_1, void **param_2, void *param_3) {
      undefined4 uVar1;
      undefined4 uVar2;
      long lVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      ulong uVar6;
      uint uVar7;
      long *plVar8;
      code *pcVar9;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      IPAddress local_58[24];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar8 = *(long**)( param_1 + 0x118 );
            if (plVar8 == (long*)0x0) {
               plVar8 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar8 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010ea5d;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar9 = *(code**)( this + 0x58 );
      lVar3 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar9 & 1 ) != 0) {
         pcVar9 = *(code**)( pcVar9 + *(long*)( param_1 + lVar3 ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      uVar4 = *param_2[5];
      /* WARNING: Load size is inaccurate */
      uVar5 = *param_2[4];
      /* WARNING: Load size is inaccurate */
      uVar6 = *param_2[3];
      /* WARNING: Load size is inaccurate */
      uVar1 = *param_2[2];
      /* WARNING: Load size is inaccurate */
      uVar2 = *param_2[1];
      IPAddress::IPAddress(local_58, (String*)*param_2);
      uVar7 = ( *pcVar9 )(param_1 + lVar3, local_58, uVar2, uVar1, uVar6 & 0xffffffff, uVar5, uVar4);
      *(ulong*)param_3 = (ulong)uVar7;
      LAB_0010ea5d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<TypedArray<ENetPacketPeer>>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTR<TypedArray<ENetPacketPeer>>::validated_call(MethodBindTR<TypedArray<ENetPacketPeer>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
            local_48 = (Variant**)0x10b888;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010ec49;
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
      LAB_0010ec49:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<TypedArray<ENetPacketPeer>>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<TypedArray<ENetPacketPeer>>::ptrcall(MethodBindTR<TypedArray<ENetPacketPeer>> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (void**)0x10b888;
            local_40 = 0x35;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010ee1a;
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
      LAB_0010ee1a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, Ref<TLSOptions> const&>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindTR<Error,Ref<TLSOptions>const&>::validated_call(MethodBindTR<Error,Ref<TLSOptions>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      uint uVar4;
      Object *pOVar5;
      long *plVar6;
      code *pcVar7;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      Object *local_68;
      undefined8 local_60;
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar6 = *(long**)( param_1 + 0x118 );
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_68 == (Object*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = (Object*)0x10b888;
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010f097;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar7 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar7 & 1 ) != 0) {
         pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
      }

      Variant::Variant((Variant*)local_58, *(Object**)( *param_2 + 0x10 ));
      local_68 = (Object*)0x0;
      pOVar5 = (Object*)Variant::get_validated_object();
      pOVar2 = local_68;
      if (pOVar5 != local_68) {
         if (pOVar5 == (Object*)0x0) {
            if (local_68 != (Object*)0x0) {
               local_68 = (Object*)0x0;
               LAB_0010f04f:cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

         }
 else {
            pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &TLSOptions::typeinfo, 0);
            if (pOVar2 != pOVar5) {
               local_68 = pOVar5;
               if (pOVar5 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_68 = (Object*)0x0;
                  }

               }

               if (pOVar2 != (Object*)0x0) goto LAB_0010f04f;
            }

         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      uVar4 = ( *pcVar7 )(param_1 + lVar1);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar4;
      if (local_68 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         pOVar2 = local_68;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_68);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      LAB_0010f097:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::validated_call(Object*, Variant
   const**, Variant*) const */
   void MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::validated_call(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      uint uVar4;
      Object *pOVar5;
      long *plVar6;
      code *pcVar7;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      Object *local_68;
      undefined8 local_60;
      int local_58[6];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar6 = *(long**)( param_1 + 0x118 );
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar6 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_68 == (Object*)*plVar6) {
            if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = (Object*)0x10b888;
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010f3ec;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar7 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar7 & 1 ) != 0) {
         pcVar7 = *(code**)( pcVar7 + *(long*)( param_1 + lVar1 ) + -1 );
      }

      Variant::Variant((Variant*)local_58, *(Object**)( param_2[1] + 0x10 ));
      local_68 = (Object*)0x0;
      pOVar5 = (Object*)Variant::get_validated_object();
      pOVar2 = local_68;
      if (pOVar5 != local_68) {
         if (pOVar5 == (Object*)0x0) {
            if (local_68 != (Object*)0x0) {
               local_68 = (Object*)0x0;
               LAB_0010f39b:cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

         }
 else {
            pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &TLSOptions::typeinfo, 0);
            if (pOVar2 != pOVar5) {
               local_68 = pOVar5;
               if (pOVar5 != (Object*)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_68 = (Object*)0x0;
                  }

               }

               if (pOVar2 != (Object*)0x0) goto LAB_0010f39b;
            }

         }

      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      uVar4 = ( *pcVar7 )(param_1 + lVar1, *param_2 + 8, (StringName*)&local_68);
      *(ulong*)( param_3 + 8 ) = (ulong)uVar4;
      if (local_68 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         pOVar2 = local_68;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_68);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      LAB_0010f3ec:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, Ref<TLSOptions> const&>::ptrcall(Object*, void const**, void*) const */
   void MethodBindTR<Error,Ref<TLSOptions>const&>::ptrcall(MethodBindTR<Error,Ref<TLSOptions>const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      uint uVar4;
      long *plVar5;
      code *pcVar6;
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
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_48 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_48 = (Object*)0x10b888;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010f695;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar6 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      if (( (long*)*param_2 == (long*)0x0 ) || ( local_48 = **param_2 ),local_48 == (Object*)0x0) {
         LAB_0010f66b:local_48 = (Object*)0x0;
      }
 else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_0010f66b;
      }

      uVar4 = ( *pcVar6 )(param_1 + lVar1);
      *(ulong*)param_3 = (ulong)uVar4;
      if (local_48 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         pOVar2 = local_48;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_48);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      LAB_0010f695:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::ptrcall(Object*, void const**, void*)
   const */
   void MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::ptrcall(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this, Object *param_1, void **param_2, void *param_3) {
      long lVar1;
      Object *pOVar2;
      char cVar3;
      uint uVar4;
      long *plVar5;
      code *pcVar6;
      long in_FS_OFFSET;
      long local_68;
      undefined8 local_60;
      Object *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
         if (*(long*)( param_1 + 8 ) == 0) {
            plVar5 = *(long**)( param_1 + 0x118 );
            if (plVar5 == (long*)0x0) {
               plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
            }

         }
 else {
            plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
         }

         if (local_58 == (Object*)*plVar5) {
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = (Object*)0x10b888;
            local_50 = 0x35;
            local_60 = 0;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010f8f1;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar6 = *(code**)( this + 0x58 );
      lVar1 = *(long*)( this + 0x60 );
      if (( (ulong)pcVar6 & 1 ) != 0) {
         pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
      }

      /* WARNING: Load size is inaccurate */
      if (( (long*)param_2[1] == (long*)0x0 ) || ( local_58 = *param_2[1] ),local_58 == (Object*)0x0) {
         LAB_0010f8c2:local_58 = (Object*)0x0;
      }
 else {
         cVar3 = RefCounted::init_ref();
         if (cVar3 == '\0') goto LAB_0010f8c2;
      }

      uVar4 = ( *pcVar6 )(param_1 + lVar1, *param_2, (StringName*)&local_58);
      *(ulong*)param_3 = (ulong)uVar4;
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

      LAB_0010f8f1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<int, Vector<unsigned char>, int>::ptrcall(Object*, void const**, void*) const */
   void MethodBindT<int,Vector<unsigned_char>,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
      undefined4 uVar1;
      long lVar2;
      long lVar3;
      long lVar4;
      long lVar5;
      long *plVar6;
      code *pcVar7;
      long in_FS_OFFSET;
      bool bVar8;
      long local_58;
      undefined8 local_50;
      char *local_48;
      long local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (void*)0x0) {
            plVar6 = (long*)param_2[0x23];
            if (plVar6 == (long*)0x0) {
               plVar6 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            plVar6 = (long*)( (long)param_2[1] + 0x20 );
         }

         if (local_48 == (char*)*plVar6) {
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

            goto LAB_0010fb58;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)( param_1 + 0x60 );
      pcVar7 = *(code**)( param_1 + 0x58 );
      if (( (ulong)pcVar7 & 1 ) != 0) {
         pcVar7 = *(code**)( pcVar7 + *(long*)( lVar2 + (long)param_2 ) + -1 );
      }

      lVar3 = *(long*)( (long)param_3 + 8 );
      uVar1 = **(undefined4**)( (long)param_3 + 0x10 );
      local_40 = 0;
      lVar4 = *(long*)( lVar3 + 8 );
      plVar6 = (long*)( lVar4 + -0x10 );
      if (lVar4 != 0) {
         do {
            lVar4 = *plVar6;
            if (lVar4 == 0) goto LAB_0010fb20;
            LOCK();
            lVar5 = *plVar6;
            bVar8 = lVar4 == lVar5;
            if (bVar8) {
               *plVar6 = lVar4 + 1;
               lVar5 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar5 != -1) {
            local_40 = *(long*)( lVar3 + 8 );
         }

      }

      LAB_0010fb20:/* WARNING: Load size is inaccurate */( *pcVar7 )((long*)( lVar2 + (long)param_2 ), **param_3, (StringName*)&local_48, uVar1);
      lVar2 = local_40;
      if (local_40 != 0) {
         LOCK();
         plVar6 = (long*)( local_40 + -0x10 );
         *plVar6 = *plVar6 + -1;
         UNLOCK();
         if (*plVar6 == 0) {
            local_40 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      LAB_0010fb58:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindT<int, Vector<unsigned char>, int>::validated_call(Object*, Variant const**, Variant*)
   const */
   void MethodBindT<int,Vector<unsigned_char>,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
      long *plVar1;
      undefined4 uVar2;
      long lVar3;
      long lVar4;
      long lVar5;
      long lVar6;
      Variant *pVVar7;
      code *pcVar8;
      long in_FS_OFFSET;
      bool bVar9;
      long local_58;
      undefined8 local_50;
      char *local_48;
      long local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
         StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
         if (param_2[1] == (Variant*)0x0) {
            pVVar7 = param_2[0x23];
            if (pVVar7 == (Variant*)0x0) {
               pVVar7 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
            }

         }
 else {
            pVVar7 = param_2[1] + 0x20;
         }

         if (local_48 == *(char**)pVVar7) {
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

            goto LAB_0010fd8e;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      lVar3 = *(long*)( param_1 + 0x60 );
      pcVar8 = *(code**)( param_1 + 0x58 );
      if (( (ulong)pcVar8 & 1 ) != 0) {
         pcVar8 = *(code**)( pcVar8 + *(long*)( lVar3 + (long)param_2 ) + -1 );
      }

      uVar2 = *(undefined4*)( *(long*)( param_3 + 0x10 ) + 8 );
      lVar4 = *(long*)( *(long*)( param_3 + 8 ) + 8 );
      local_40 = 0;
      lVar5 = *(long*)( lVar4 + 0x18 );
      plVar1 = (long*)( lVar5 + -0x10 );
      if (lVar5 != 0) {
         do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010fd55;
            LOCK();
            lVar6 = *plVar1;
            bVar9 = lVar5 == lVar6;
            if (bVar9) {
               *plVar1 = lVar5 + 1;
               lVar6 = lVar5;
            }

            UNLOCK();
         }
 while ( !bVar9 );
         if (lVar6 != -1) {
            local_40 = *(long*)( lVar4 + 0x18 );
         }

      }

      LAB_0010fd55:( *pcVar8 )((long*)( lVar3 + (long)param_2 ), *(undefined4*)( *(long*)param_3 + 8 ), (StringName*)&local_48, uVar2);
      lVar3 = local_40;
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

      LAB_0010fd8e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::ptrcall(Object*, void const**,
   void*) const */
   void MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::ptrcall(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this, Object *param_1, void **param_2, void *param_3) {
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
            local_48 = (Object*)0x10b888;
            local_50 = 0;
            local_40 = 0x35;
            String::parse_latin1((StrRange*)&local_50);
            vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
            _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            goto LAB_0010ffbd;
         }

         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pcVar2 = *(code**)( this + 0x58 );
      if (( (ulong)pcVar2 & 1 ) != 0) {
         pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
      }

      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }

      ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1], *param_2[2], *param_2[3]);
      if (local_48 == (Object*)0x0) {
         /* WARNING: Load size is inaccurate */
         pOVar5 = *param_3;
         if (pOVar5 == (Object*)0x0) goto LAB_0010ffbd;
         *(undefined8*)param_3 = 0;
         goto LAB_00110001;
      }

      pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_00110001;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_00110001:cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(pOVar5);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_48 == (Object*)0x0) goto LAB_0010ffbd;
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

      LAB_0010ffbd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Error, int, int, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Error,int,int,int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      int iVar6;
      int iVar7;
      int iVar8;
      int iVar9;
      undefined4 uVar10;
      long lVar11;
      long *plVar12;
      uint uVar13;
      undefined4 in_register_00000014;
      long *plVar14;
      Variant *pVVar15;
      long lVar16;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar17;
      long in_FS_OFFSET;
      long local_a8;
      undefined8 local_a0;
      char *local_98;
      undefined8 local_90;
      undefined4 local_88[2];
      undefined8 local_80;
      undefined8 uStack_78;
      Variant *local_68[5];
      long local_40;
      plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
         if (plVar14[1] == 0) {
            plVar12 = (long*)plVar14[0x23];
            if (plVar12 == (long*)0x0) {
               plVar12 = (long*)( **(code**)( *plVar14 + 0x40 ) )(plVar14);
            }

         }
 else {
            plVar12 = (long*)( plVar14[1] + 0x20 );
         }

         if (local_98 == (char*)*plVar12) {
            if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_a0 = 0;
            local_90 = 0x35;
            String::parse_latin1((StrRange*)&local_a0);
            vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            goto LAB_001103f0;
         }

         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar17 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 5) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar6 = 0;
            lVar16 = 0;
         }
 else {
            lVar16 = *(long*)( pVVar2 + -8 );
            iVar6 = (int)lVar16;
         }

         if ((int)( 4 - in_R8D ) <= iVar6) {
            lVar11 = 0;
            do {
               if ((int)lVar11 < (int)in_R8D) {
                  pVVar15 = *(Variant**)( param_4 + lVar11 * 8 );
               }
 else {
                  uVar13 = iVar6 + -4 + (int)lVar11;
                  if (lVar16 <= (int)uVar13) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar13, lVar16, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
               }

               local_68[lVar11] = pVVar15;
               lVar11 = lVar11 + 1;
            }
 while ( lVar11 != 4 );
            *in_R9 = 0;
            if (( (ulong)pVVar17 & 1 ) != 0) {
               pVVar17 = *(Variant**)( pVVar17 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 2);
            uVar4 = _LC154;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(local_68[3]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
            uVar4 = _LC155;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar7 = Variant::operator_cast_to_int(local_68[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
            uVar4 = _LC156;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar8 = Variant::operator_cast_to_int(local_68[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 2);
            uVar4 = _LC157;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar9 = Variant::operator_cast_to_int(local_68[0]);
            iVar6 = ( *(code*)pVVar17 )((Variant*)( (long)plVar14 + (long)pVVar1 ), iVar9, iVar8, iVar7, iVar6);
            Variant::Variant((Variant*)local_88, iVar6);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_88[0];
            *(undefined8*)( param_1 + 8 ) = local_80;
            *(undefined8*)( param_1 + 0x10 ) = uStack_78;
            goto LAB_001103f0;
         }

         uVar10 = 4;
      }
 else {
         uVar10 = 3;
      }

      *in_R9 = uVar10;
      in_R9[2] = 4;
      LAB_001103f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */
   Object *MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      Object *pOVar5;
      char *pcVar6;
      char cVar7;
      int iVar8;
      int iVar9;
      int iVar10;
      undefined4 uVar11;
      long lVar12;
      long *plVar13;
      uint uVar14;
      undefined4 in_register_00000014;
      long *plVar15;
      Variant *pVVar16;
      long lVar17;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar18;
      long in_FS_OFFSET;
      long local_a8;
      Object *local_a0;
      char *local_98;
      undefined8 local_90;
      undefined4 local_88[2];
      undefined8 local_80;
      undefined8 uStack_78;
      Variant *local_68[5];
      long local_40;
      plVar15 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar15 != (long*)0x0 ) && ( plVar15[1] != 0 ) ) && ( *(char*)( plVar15[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
         if (plVar15[1] == 0) {
            plVar13 = (long*)plVar15[0x23];
            if (plVar13 == (long*)0x0) {
               plVar13 = (long*)( **(code**)( *plVar15 + 0x40 ) )(plVar15);
            }

         }
 else {
            plVar13 = (long*)( plVar15[1] + 0x20 );
         }

         if (local_98 == (char*)*plVar13) {
            if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_a0 = (Object*)0x0;
            local_90 = 0x35;
            String::parse_latin1((StrRange*)&local_a0);
            vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            goto LAB_00110870;
         }

         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar18 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 5) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar8 = 0;
            lVar17 = 0;
         }
 else {
            lVar17 = *(long*)( pVVar2 + -8 );
            iVar8 = (int)lVar17;
         }

         if ((int)( 4 - in_R8D ) <= iVar8) {
            lVar12 = 0;
            do {
               if ((int)lVar12 < (int)in_R8D) {
                  pVVar16 = *(Variant**)( param_4 + lVar12 * 8 );
               }
 else {
                  uVar14 = iVar8 + -4 + (int)lVar12;
                  if (lVar17 <= (int)uVar14) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar14, lVar17, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  pVVar16 = pVVar2 + (ulong)uVar14 * 0x18;
               }

               local_68[lVar12] = pVVar16;
               lVar12 = lVar12 + 1;
            }
 while ( lVar12 != 4 );
            *in_R9 = 0;
            if (( (ulong)pVVar18 & 1 ) != 0) {
               pVVar18 = *(Variant**)( pVVar18 + *(long*)( (long)plVar15 + (long)pVVar1 ) + -1 );
            }

            cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[3], 2);
            uVar4 = _LC154;
            if (cVar7 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar8 = Variant::operator_cast_to_int(local_68[3]);
            cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
            uVar4 = _LC155;
            if (cVar7 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar9 = Variant::operator_cast_to_int(local_68[2]);
            cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
            uVar4 = _LC156;
            if (cVar7 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar10 = Variant::operator_cast_to_int(local_68[1]);
            cVar7 = Variant::can_convert_strict(*(undefined4*)local_68[0], 4);
            uVar4 = _LC159;
            if (cVar7 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_String((Variant*)&local_98);
            ( *(code*)pVVar18 )(&local_a0, (Variant*)( (long)plVar15 + (long)pVVar1 ), (Variant*)&local_98, iVar10, iVar9, iVar8);
            Variant::Variant((Variant*)local_88, local_a0);
            if (Variant::needs_deinit[*(int*)param_1] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_1 = local_88[0];
            *(undefined8*)( param_1 + 8 ) = local_80;
            *(undefined8*)( param_1 + 0x10 ) = uStack_78;
            if (local_a0 != (Object*)0x0) {
               cVar7 = RefCounted::unreference();
               pOVar5 = local_a0;
               if (cVar7 != '\0') {
                  cVar7 = predelete_handler(local_a0);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            pcVar6 = local_98;
            if (local_98 != (char*)0x0) {
               LOCK();
               plVar15 = (long*)( local_98 + -0x10 );
               *plVar15 = *plVar15 + -1;
               UNLOCK();
               if (*plVar15 == 0) {
                  local_98 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }

            }

            goto LAB_00110870;
         }

         uVar11 = 4;
      }
 else {
         uVar11 = 3;
      }

      *in_R9 = uVar11;
      in_R9[2] = 4;
      LAB_00110870:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<Array, int>::call(Object*, Variant const**, int, Callable::CallError&) const */
   Object *MethodBindTR<Array,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_00110c00;
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
            if (in_R8D != 1) goto LAB_00110c50;
            LAB_00110c40:pVVar11 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_00110c50:uVar7 = 4;
               goto LAB_00110bf5;
            }

            if (in_R8D == 1) goto LAB_00110c40;
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
         uVar4 = _LC157;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(pVVar11);
         ( *(code*)pVVar12 )((Array*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
         Variant::Variant((Variant*)local_58, (Array*)&local_68);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         Array::~Array((Array*)&local_68);
      }
 else {
         uVar7 = 3;
         LAB_00110bf5:*in_R9 = uVar7;
         in_R9[2] = 1;
      }

      LAB_00110c00:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindT<int, Vector<unsigned char>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindT<int,Vector<unsigned_char>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      int iVar7;
      int iVar8;
      long lVar9;
      long *plVar10;
      uint uVar11;
      Variant *pVVar12;
      undefined4 in_register_00000014;
      long *plVar13;
      long lVar14;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar15;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      long local_60;
      Variant *local_58[3];
      long local_40;
      plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar13[1] == 0) {
            plVar10 = (long*)plVar13[0x23];
            if (plVar10 == (long*)0x0) {
               plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )();
            }

         }
 else {
            plVar10 = (long*)( plVar13[1] + 0x20 );
         }

         if (local_68 == (char*)*plVar10) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111002;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar15 = param_2[0xb];
      pVVar1 = param_2[0xc];
      uVar6 = 3;
      if (in_R8D < 4) {
         pVVar2 = param_2[5];
         if (pVVar2 == (Variant*)0x0) {
            iVar7 = 0;
            lVar14 = 0;
         }
 else {
            lVar14 = *(long*)( pVVar2 + -8 );
            iVar7 = (int)lVar14;
         }

         if ((int)( 3 - in_R8D ) <= iVar7) {
            lVar9 = 0;
            do {
               if ((int)lVar9 < (int)in_R8D) {
                  pVVar12 = *(Variant**)( param_4 + lVar9 * 8 );
               }
 else {
                  uVar11 = iVar7 + -3 + (int)lVar9;
                  if (lVar14 <= (int)uVar11) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar14, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  pVVar12 = pVVar2 + (ulong)uVar11 * 0x18;
               }

               local_58[lVar9] = pVVar12;
               lVar9 = lVar9 + 1;
            }
 while ( lVar9 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar15 & 1 ) != 0) {
               pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[2], 2);
            uVar4 = _LC155;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar7 = Variant::operator_cast_to_int(local_58[2]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[1], 0x1d);
            uVar4 = _LC160;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_Vector((Variant*)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[0], 2);
            uVar4 = _LC157;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar8 = Variant::operator_cast_to_int(local_58[0]);
            ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), iVar8, (Variant*)&local_68, iVar7);
            lVar14 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar13 = (long*)( local_60 + -0x10 );
               *plVar13 = *plVar13 + -1;
               UNLOCK();
               if (*plVar13 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            goto LAB_00111002;
         }

         uVar6 = 4;
      }

      *in_R9 = uVar6;
      in_R9[2] = 3;
      LAB_00111002:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindT<String const&, int, Vector<unsigned char> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */
   Object *MethodBindT<String_const&,int,Vector<unsigned_char>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      Variant *pVVar11;
      undefined4 in_register_00000014;
      long *plVar12;
      long lVar13;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_78;
      undefined8 local_70;
      char *local_68;
      long local_60;
      Variant *local_58[3];
      long local_40;
      plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
         if (plVar12[1] == 0) {
            plVar9 = (long*)plVar12[0x23];
            if (plVar9 == (long*)0x0) {
               plVar9 = (long*)( **(code**)( *plVar12 + 0x40 ) )();
            }

         }
 else {
            plVar9 = (long*)( plVar12[1] + 0x20 );
         }

         if (local_68 == (char*)*plVar9) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_70 = 0;
            local_60 = 0x35;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
               StringName::unref();
            }

            goto LAB_001113f2;
         }

         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
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
                  pVVar11 = *(Variant**)( param_4 + lVar8 * 8 );
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

                  pVVar11 = pVVar2 + (ulong)uVar10 * 0x18;
               }

               local_58[lVar8] = pVVar11;
               lVar8 = lVar8 + 1;
            }
 while ( lVar8 != 3 );
            *in_R9 = 0;
            if (( (ulong)pVVar14 & 1 ) != 0) {
               pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[2], 0x1d);
            uVar4 = _LC161;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_Vector((Variant*)&local_68);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[1], 2);
            uVar4 = _LC156;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            iVar7 = Variant::operator_cast_to_int(local_58[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)local_58[0], 4);
            uVar4 = _LC159;
            if (cVar5 == '\0') {
               *in_R9 = 2;
               *(undefined8*)( in_R9 + 1 ) = uVar4;
            }

            Variant::operator_cast_to_String((Variant*)&local_70);
            ( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), (Variant*)&local_70, iVar7, (Variant*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            lVar13 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar12 = (long*)( local_60 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }

            }

            goto LAB_001113f2;
         }

         uVar6 = 4;
      }

      *in_R9 = uVar6;
      in_R9[2] = 3;
      LAB_001113f2:*(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* MethodBindTR<double, ENetConnection::HostStatistic>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<double,ENetConnection::HostStatistic>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      char cVar5;
      undefined4 uVar6;
      ulong uVar7;
      long *plVar8;
      long lVar9;
      undefined4 in_register_00000014;
      long *plVar10;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar11;
      Variant *pVVar12;
      long in_FS_OFFSET;
      double dVar13;
      long local_68;
      undefined8 local_60;
      char *local_58;
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

         if (local_58 == (char*)*plVar8) {
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111758;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar12 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (in_R8D < 2) {
         pVVar11 = param_2[5];
         if (pVVar11 == (Variant*)0x0) {
            if (in_R8D != 1) goto LAB_001117a0;
            LAB_00111790:pVVar11 = *(Variant**)param_4;
         }
 else {
            lVar2 = *(long*)( pVVar11 + -8 );
            if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
               LAB_001117a0:uVar6 = 4;
               goto LAB_0011174d;
            }

            if (in_R8D == 1) goto LAB_00111790;
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
         uVar4 = _LC157;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         uVar7 = Variant::operator_cast_to_long(pVVar11);
         dVar13 = (double)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), uVar7 & 0xffffffff);
         Variant::Variant((Variant*)local_48, dVar13);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      }
 else {
         uVar6 = 3;
         LAB_0011174d:*in_R9 = uVar6;
         in_R9[2] = 1;
      }

      LAB_00111758:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* MethodBindTR<Error, Ref<TLSOptions> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */
   Object *MethodBindTR<Error,Ref<TLSOptions>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
      Variant *pVVar1;
      long lVar2;
      code *pcVar3;
      undefined8 uVar4;
      Object *pOVar5;
      char cVar6;
      int iVar7;
      undefined4 uVar8;
      Object *pOVar9;
      long *plVar10;
      long lVar11;
      undefined4 in_register_00000014;
      long *plVar12;
      uint in_R8D;
      undefined4 *in_R9;
      Variant *pVVar13;
      Variant *pVVar14;
      long in_FS_OFFSET;
      long local_68;
      undefined8 local_60;
      Object *local_58;
      undefined8 local_50;
      undefined4 local_48[2];
      undefined8 local_40;
      undefined8 uStack_38;
      long local_30;
      plVar12 = (long*)CONCAT44(in_register_00000014, param_3);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      if (( ( plVar12 != (long*)0x0 ) && ( plVar12[1] != 0 ) ) && ( *(char*)( plVar12[1] + 0x2e ) != '\0' )) {
         StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
         if (plVar12[1] == 0) {
            plVar10 = (long*)plVar12[0x23];
            if (plVar10 == (long*)0x0) {
               plVar10 = (long*)( **(code**)( *plVar12 + 0x40 ) )(plVar12);
            }

         }
 else {
            plVar10 = (long*)( plVar12[1] + 0x20 );
         }

         if (local_58 == (Object*)*plVar10) {
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }

            MethodBind::get_name();
            local_58 = (Object*)0x10b888;
            local_60 = 0;
            local_50 = 0x35;
            String::parse_latin1((StrRange*)&local_60);
            vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
            _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            goto LAB_00111b78;
         }

         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      pVVar14 = param_2[0xb];
      pVVar1 = param_2[0xc];
      if (1 < in_R8D) {
         uVar8 = 3;
         LAB_00111b6d:*in_R9 = uVar8;
         in_R9[2] = 1;
         goto LAB_00111b78;
      }

      pVVar13 = param_2[5];
      if (pVVar13 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00111bc0;
         LAB_00111bb0:pVVar13 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar13 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111bc0:uVar8 = 4;
            goto LAB_00111b6d;
         }

         if (in_R8D == 1) goto LAB_00111bb0;
         lVar11 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar11) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar13 = pVVar13 + lVar11 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar12 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar13);
      uVar4 = _LC162;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      local_58 = (Object*)0x0;
      pOVar9 = (Object*)Variant::get_validated_object();
      pOVar5 = local_58;
      if (pOVar9 != local_58) {
         if (pOVar9 == (Object*)0x0) {
            if (local_58 != (Object*)0x0) {
               local_58 = (Object*)0x0;
               LAB_00111cdd:cVar6 = RefCounted::unreference();
               if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }
 else {
            pOVar9 = (Object*)__dynamic_cast(pOVar9, &Object::typeinfo, &TLSOptions::typeinfo, 0);
            if (pOVar5 != pOVar9) {
               local_58 = pOVar9;
               if (( pOVar9 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
                  local_58 = (Object*)0x0;
               }

               if (pOVar5 != (Object*)0x0) goto LAB_00111cdd;
            }

         }

      }

      iVar7 = ( *(code*)pVVar14 )((Variant*)( (long)plVar12 + (long)pVVar1 ), &local_58);
      Variant::Variant((Variant*)local_48, iVar7);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_58,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

   LAB_00111b78:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   undefined4 uVar9;
   Object *pOVar10;
   long *plVar11;
   long lVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   int iVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   Variant *pVVar17;
   long in_FS_OFFSET;
   long local_78;
   Object *local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar11 = (long*)plVar13[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }

      }
 else {
         plVar11 = (long*)( plVar13[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112070;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (2 < in_R8D) {
      uVar9 = 3;
      LAB_00112065:*in_R9 = uVar9;
      in_R9[2] = 2;
      goto LAB_00112070;
   }

   pVVar17 = param_2[5];
   iVar8 = 2 - in_R8D;
   if (pVVar17 == (Variant*)0x0) {
      if (iVar8 != 0) goto LAB_001120a0;
      pVVar14 = *(Variant**)param_4;
      LAB_001120bd:pVVar17 = *(Variant**)( param_4 + 8 );
   }
 else {
      lVar2 = *(long*)( pVVar17 + -8 );
      iVar15 = (int)lVar2;
      if (iVar15 < iVar8) {
         LAB_001120a0:uVar9 = 4;
         goto LAB_00112065;
      }

      if (in_R8D == 0) {
         lVar12 = (long)( iVar15 + -2 );
         if (lVar2 <= lVar12) goto LAB_001121e0;
         pVVar14 = pVVar17 + lVar12 * 0x18;
      }
 else {
         pVVar14 = *(Variant**)param_4;
         if (in_R8D == 2) goto LAB_001120bd;
      }

      lVar12 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar15 - iVar8 ) );
      if (lVar2 <= lVar12) {
         LAB_001121e0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar17 = pVVar17 + lVar12 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar16 & 1 ) != 0) {
      pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
   }

   cVar7 = Variant::can_convert_strict(*(undefined4*)pVVar17);
   uVar4 = _LC163;
   if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_70 = (Object*)0x0;
   pOVar10 = (Object*)Variant::get_validated_object();
   pOVar5 = local_70;
   if (pOVar10 != local_70) {
      if (pOVar10 == (Object*)0x0) {
         if (local_70 != (Object*)0x0) {
            local_70 = (Object*)0x0;
            LAB_00111f77:cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
               cVar7 = predelete_handler(pOVar5);
               if (cVar7 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &TLSOptions::typeinfo, 0);
         if (pOVar5 != pOVar10) {
            local_70 = pOVar10;
            if (pOVar10 != (Object*)0x0) {
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  local_70 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00111f77;
         }

      }

   }

   cVar7 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
   uVar4 = _LC159;
   if (cVar7 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   Variant::operator_cast_to_String((Variant*)&local_68);
   iVar8 = ( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_68, &local_70);
   Variant::Variant((Variant*)local_58, iVar8);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   pcVar6 = local_68;
   *(undefined4*)param_1 = local_58[0];
   *(undefined8*)( param_1 + 8 ) = local_50;
   *(undefined8*)( param_1 + 0x10 ) = uStack_48;
   if (local_68 != (char*)0x0) {
      LOCK();
      plVar13 = (long*)( local_68 + -0x10 );
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      if (*plVar13 == 0) {
         local_68 = (char*)0x0;
         Memory::free_static(pcVar6 + -0x10, false);
      }

   }

   if (local_70 != (Object*)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar5 = local_70;
      if (cVar7 != '\0') {
         cVar7 = predelete_handler(local_70);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00112070:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   undefined4 uVar11;
   long lVar12;
   long *plVar13;
   uint uVar14;
   undefined4 in_register_00000014;
   long *plVar15;
   Variant *pVVar16;
   long lVar17;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_d8;
   undefined8 local_d0;
   char *local_c8;
   undefined8 local_c0;
   Variant local_b8[32];
   undefined4 local_98[2];
   undefined8 local_90;
   undefined8 uStack_88;
   Variant *local_78[7];
   long local_40;
   plVar15 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar15 != (long*)0x0 ) && ( plVar15[1] != 0 ) ) && ( *(char*)( plVar15[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_c8, (StringName*)( param_2 + 3 ));
      if (plVar15[1] == 0) {
         plVar13 = (long*)plVar15[0x23];
         if (plVar13 == (long*)0x0) {
            plVar13 = (long*)( **(code**)( *plVar15 + 0x40 ) )();
         }

      }
 else {
         plVar13 = (long*)( plVar15[1] + 0x20 );
      }

      if (local_c8 == (char*)*plVar13) {
         if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_c8 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_d0 = 0;
         local_c0 = 0x35;
         String::parse_latin1((StrRange*)&local_d0);
         vformat<StringName>((StringName*)&local_c8, (StrRange*)&local_d0, &local_d8);
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
            StringName::unref();
         }

         goto LAB_001125d0;
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 7) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar6 = 0;
         lVar17 = 0;
      }
 else {
         lVar17 = *(long*)( pVVar2 + -8 );
         iVar6 = (int)lVar17;
      }

      if ((int)( 6 - in_R8D ) <= iVar6) {
         lVar12 = 0;
         do {
            while ((int)in_R8D <= (int)lVar12) {
               uVar14 = iVar6 + -6 + (int)lVar12;
               if (lVar17 <= (int)uVar14) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar14, lVar17, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               local_78[lVar12] = pVVar2 + (ulong)uVar14 * 0x18;
               lVar12 = lVar12 + 1;
               if (lVar12 == 6) goto LAB_00112401;
            }
;
            local_78[lVar12] = *(Variant**)( param_4 + lVar12 * 8 );
            lVar12 = lVar12 + 1;
         }
 while ( lVar12 != 6 );
         LAB_00112401:*in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar15 + (long)pVVar1 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[5], 2);
         uVar4 = _LC164;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(local_78[5]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[4], 2);
         uVar4 = _LC165;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar7 = Variant::operator_cast_to_int(local_78[4]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[3], 2);
         uVar4 = _LC154;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar8 = Variant::operator_cast_to_int(local_78[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[2], 2);
         uVar4 = _LC155;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar9 = Variant::operator_cast_to_int(local_78[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[1], 2);
         uVar4 = _LC156;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         iVar10 = Variant::operator_cast_to_int(local_78[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[0], 4);
         uVar4 = _LC159;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }

         Variant::operator_cast_to_IPAddress(local_b8);
         iVar6 = ( *(code*)pVVar16 )((Variant*)( (long)plVar15 + (long)pVVar1 ), local_b8, iVar10, iVar9, iVar8, iVar7, iVar6);
         Variant::Variant((Variant*)local_98, iVar6);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_98[0];
         *(undefined8*)( param_1 + 8 ) = local_90;
         *(undefined8*)( param_1 + 0x10 ) = uStack_88;
         goto LAB_001125d0;
      }

      uVar11 = 4;
   }
 else {
      uVar11 = 3;
   }

   *in_R9 = uVar11;
   in_R9[2] = 6;
   LAB_001125d0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::validated_call(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112874;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ), *(undefined4*)( param_2[2] + 8 ), *(undefined4*)( param_2[3] + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_48 = *(char**)( local_50 + 0x60 );
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

   LAB_00112874:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,bool>(__UnexistingClass *param_1, _func_void_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00112b3d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00112ba0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00112ba0:uVar6 = 4;
         LAB_00112b3d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00112abb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00112abb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC166;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x00112b17. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )(SUB81(param_1 + (long)param_3, 0));
   return;
}
/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00112c06;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var4, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00112c06:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass,
   ENetConnection::CompressionMode>(__UnexistingClass*, void
   (__UnexistingClass::*)(ENetConnection::CompressionMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,ENetConnection::CompressionMode>(__UnexistingClass *param_1, _func_void_CompressionMode *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_00112f0d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00112f70;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00112f70:uVar6 = 4;
         LAB_00112f0d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_00112e8b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00112e8b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_CompressionMode**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC157;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_long(this);
   /* WARNING: Could not recover jumptable at 0x00112ee6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((char)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<ENetConnection::CompressionMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<ENetConnection::CompressionMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00112fd6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,ENetConnection::CompressionMode>(p_Var4, (_func_void_CompressionMode*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00112fd6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,int>(__UnexistingClass *param_1, _func_void_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_001132dd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00113340;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00113340:uVar6 = 4;
         LAB_001132dd:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }

      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0011325b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011325b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC157;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x001132b6. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *param_2 )((int)( param_1 + (long)param_3 ));
   return;
}
/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001133a6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var4, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001133a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, int), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int,int>(__UnexistingClass *param_1, _func_void_int_int *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_001136dd;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0011370d:this_00 = (Variant*)plVar8[1];
         goto LAB_00113645;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_00113728;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011370d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00113728:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_00113645:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 2);
         uVar4 = _LC156;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_int(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC157;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         iVar6 = Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x001136cb. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), iVar6);
         return;
      }

   }

   uVar7 = 4;
   LAB_001136dd:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var4;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var4 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var4 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var4 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var4 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var4 + 8 ) == 0) {
         plVar3 = *(long**)( p_Var4 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)p_Var4 + 0x40 ) )(p_Var4);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( p_Var4 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC152, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar3 = (long*)( local_48 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar3 = (long*)( local_50 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001137c6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,int>(p_Var4, (_func_void_int_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001137c6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_00113a07;
   local_78 = 0;
   local_68 = &_LC37;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00113b05:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00113b05;
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_00113a07:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_00113c57;
   local_78 = 0;
   local_68 = &_LC37;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00113d55:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00113d55;
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

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_00113c57:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, int, int, int, int>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,int,int,int,int>::_gen_argument_type_info(int param_1) {
   uint in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   int local_6c;
   undefined8 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 4) {
      local_60 = (undefined1[16])0x0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_6c = 0;
      for (int i = 0; i < 4; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
      }

      *(undefined4*)this = (undefined4)local_68;
      *(undefined8*)( this + 8 ) = local_60._0_8_;
      *(undefined8*)( this + 0x10 ) = local_60._8_8_;
      *(undefined4*)( this + 0x18 ) = (undefined4)local_50;
      *(undefined8*)( this + 0x20 ) = local_48;
      *(undefined4*)( this + 0x28 ) = local_40;
   }
 else {
      GetTypeInfo<Error,void>::get_class_info(this);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
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
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 4) {
      local_60 = (undefined1[16])0x0;
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      for (int i = 0; i < 3; i++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      }

      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00114058;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = "ENetPacketPeer";
   local_60._8_8_ = local_60._0_8_;
   local_60._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar4[10] = 6;
      LAB_00114157:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) goto LAB_00114157;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00114058:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Array, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Array,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<int>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_00114258;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC37;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x1c;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011433f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011433f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_00114258:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_14;
   long local_10;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_14 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_14, pPVar1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   long in_FS_OFFSET;
   int local_24;
   long local_20;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   local_24 = 0;
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<int>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info<String const&, int, Vector<unsigned char> const&>(int,
   PropertyInfo&) */void call_get_argument_type_info<String_const&,int,Vector<unsigned_char>const&>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_8c;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0;
   call_get_argument_type_info_helper<String_const&>(param_1, &local_8c, param_2);
   call_get_argument_type_info_helper<int>(param_1, &local_8c, param_2);
   if (param_1 != local_8c) goto LAB_0011450e;
   local_78 = 0;
   local_68 = &_LC37;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1d);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00114605:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00114605;
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

   *(undefined4*)param_2 = local_68._0_4_;
   if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar3;
   }

   if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar3;
   }

   *(int*)( param_2 + 0x18 ) = local_50;
   if (*(long*)( param_2 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_2 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0011450e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<String const&, int, Vector<unsigned char> const&>::_gen_argument_type_info(int) const
    */PropertyInfo *MethodBindT<String_const&,int,Vector<unsigned_char>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<String_const&,int,Vector<unsigned_char>const&>(in_EDX, pPVar1);
   return pPVar1;
}
/* void call_get_argument_type_info<int, Vector<unsigned char>, int>(int, PropertyInfo&) */void call_get_argument_type_info<int,Vector<unsigned_char>,int>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   int local_9c;
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_9c = 0;
   call_get_argument_type_info_helper<int>(param_1, &local_9c, param_2);
   iVar3 = local_9c;
   if (param_1 != local_9c) goto LAB_001147bc;
   local_88 = 0;
   local_78 = &_LC37;
   local_90 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x1d);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_001148dd:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_001148dd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
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

   *(undefined4*)param_2 = local_78._0_4_;
   if (*(long*)( param_2 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar4 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar4;
   }

   if (*(long*)( param_2 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar4 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar4;
   }

   *(int*)( param_2 + 0x18 ) = local_60;
   if (*(long*)( param_2 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar5 = local_58;
      local_58 = 0;
      *(long*)( param_2 + 0x20 ) = lVar5;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_50;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   LAB_001147bc:local_9c = iVar3 + 1;
   call_get_argument_type_info_helper<int>(param_1, &local_9c, param_2);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<int, Vector<unsigned char>, int>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<int,Vector<unsigned_char>,int>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar1;
   pPVar1 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   *(undefined4*)pPVar1 = 0;
   *(undefined4*)( pPVar1 + 0x18 ) = 0;
   *(undefined8*)( pPVar1 + 0x20 ) = 0;
   *(undefined4*)( pPVar1 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar1 + 8 ) = (undefined1[16])0x0;
   call_get_argument_type_info<int,Vector<unsigned_char>,int>(in_EDX, pPVar1);
   return pPVar1;
}
/* void call_get_argument_type_info<IPAddress const&, int, int, int, int, int>(int, PropertyInfo&)
    */void call_get_argument_type_info<IPAddress_const&,int,int,int,int,int>(int param_1, PropertyInfo *param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_8c;
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
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_8c = 0;
   if (param_1 != 0) goto LAB_00114a72;
   local_78 = 0;
   local_68 = &_LC37;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00114bc5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00114bc5;
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

   *(undefined4*)param_2 = local_68._0_4_;
   if (*(long*)( param_2 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_2 + 8 ) = uVar3;
   }

   if (*(long*)( param_2 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_2 + 0x10 ) = uVar3;
   }

   *(int*)( param_2 + 0x18 ) = local_50;
   if (*(long*)( param_2 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_2 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_2 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_2 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00114a72:local_8c = 1;
   for (int i = 0; i < 5; i++) {
      call_get_argument_type_info_helper<int>(param_1, &local_8c, param_2);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::_gen_argument_type_info(int)
   const */GetTypeInfo<Error,void> *MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::_gen_argument_type_info(int param_1) {
   uint in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   undefined8 local_28;
   undefined4 local_20;
   long local_10;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 6) {
      local_48 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 6;
      local_40 = (undefined1[16])0x0;
      call_get_argument_type_info<IPAddress_const&,int,int,int,int,int>(in_EDX, (PropertyInfo*)&local_48);
      *(undefined4*)this = (undefined4)local_48;
      *(undefined8*)( this + 8 ) = local_40._0_8_;
      *(undefined8*)( this + 0x10 ) = local_40._8_8_;
      *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
      *(undefined8*)( this + 0x20 ) = local_28;
      *(undefined4*)( this + 0x28 ) = local_20;
   }
 else {
      GetTypeInfo<Error,void>::get_class_info(this);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Ref<TLSOptions> const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Ref<TLSOptions>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *param_2;
   if (iVar4 != param_1) goto LAB_00114dc7;
   local_78 = 0;
   local_68 = "TLSOptions";
   local_80 = 0;
   local_60._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00114f8d:local_40 = 6;
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
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_00114f8d;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar2;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar2;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar3;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar4 = *param_2;
   LAB_00114dc7:*param_2 = iVar4 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Error, Ref<TLSOptions> const&>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,Ref<TLSOptions>const&>::_gen_argument_type_info(int param_1) {
   int in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   int local_4c;
   undefined8 local_48;
   undefined1 local_40[16];
   undefined8 local_30;
   undefined8 local_28;
   undefined4 local_20;
   long local_10;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_48 = 0;
      local_30 = 0;
      local_28 = 0;
      local_20 = 6;
      local_4c = 0;
      local_40 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Ref<TLSOptions>const&>(0, &local_4c, (PropertyInfo*)&local_48);
      *(undefined4*)this = (undefined4)local_48;
      *(undefined8*)( this + 8 ) = local_40._0_8_;
      *(undefined8*)( this + 0x10 ) = local_40._8_8_;
      *(undefined4*)( this + 0x18 ) = (undefined4)local_30;
      *(undefined8*)( this + 0x20 ) = local_28;
      *(undefined4*)( this + 0x28 ) = local_20;
   }
 else {
      GetTypeInfo<Error,void>::get_class_info(this);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::_gen_argument_type_info(int) const */GetTypeInfo<Error,void> *MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::_gen_argument_type_info(int param_1) {
   uint in_EDX;
   undefined4 in_register_0000003c;
   GetTypeInfo<Error,void> *this;
   long in_FS_OFFSET;
   int local_6c;
   undefined8 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   this(GetTypeInfo<Error,void> * CONCAT44(in_register_0000003c, param_1));
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_6c = 0;
      call_get_argument_type_info_helper<String_const&>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<Ref<TLSOptions>const&>(in_EDX, &local_6c, (PropertyInfo*)&local_68);
      *(undefined4*)this = (undefined4)local_68;
      *(undefined8*)( this + 8 ) = local_60._0_8_;
      *(undefined8*)( this + 0x10 ) = local_60._8_8_;
      *(undefined4*)( this + 0x18 ) = (undefined4)local_50;
      *(undefined8*)( this + 0x20 ) = local_48;
      *(undefined4*)( this + 0x28 ) = local_40;
   }
 else {
      GetTypeInfo<Error,void>::get_class_info(this);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&, int, Vector<unsigned char> const&>::~MethodBindT() */void MethodBindT<String_const&,int,Vector<unsigned_char>const&>::~MethodBindT(MethodBindT<String_const&,int,Vector<unsigned_char>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR() */void MethodBindTR<TypedArray<ENetPacketPeer>>::~MethodBindTR(MethodBindTR<TypedArray<ENetPacketPeer>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<double, ENetConnection::HostStatistic>::~MethodBindTR() */void MethodBindTR<double,ENetConnection::HostStatistic>::~MethodBindTR(MethodBindTR<double,ENetConnection::HostStatistic> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, String const&, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,String_const&,Ref<TLSOptions>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, Ref<TLSOptions> const&>::~MethodBindTR() */void MethodBindTR<Error,Ref<TLSOptions>const&>::~MethodBindTR(MethodBindTR<Error,Ref<TLSOptions>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<ENetConnection::CompressionMode>::~MethodBindT() */void MethodBindT<ENetConnection::CompressionMode>::~MethodBindT(MethodBindT<ENetConnection::CompressionMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Vector<unsigned char>, int>::~MethodBindT() */void MethodBindT<int,Vector<unsigned_char>,int>::~MethodBindT(MethodBindT<int,Vector<unsigned_char>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, int>::~MethodBindT() */void MethodBindT<int,int>::~MethodBindT(MethodBindT<int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Array, int>::~MethodBindTR() */void MethodBindTR<Array,int>::~MethodBindTR(MethodBindTR<Array,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<ENetPacketPeer>, String const&, int, int, int>::~MethodBindTR() */void MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int>::~MethodBindTR(MethodBindTR<Ref<ENetPacketPeer>,String_const&,int,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,int,int,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, IPAddress const&, int, int, int, int, int>::~MethodBindTR() */void MethodBindTR<Error,IPAddress_const&,int,int,int,int,int>::~MethodBindTR(MethodBindTR<Error,IPAddress_const&,int,int,int,int,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

