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
undefined8 enet_initialize(void) {
   return 0;
}
void enet_deinitialize(void) {
   return;
}
long enet_host_random_seed(void) {
   long *plVar1;
   double dVar2;
   plVar1 = (long*)OS::get_singleton();
   dVar2 = (double)( **(code**)( *plVar1 + 0x1f0 ) )(plVar1);
   return (long)dVar2;
}
int enet_time_get(void) {
   int iVar1;
   OS::get_singleton();
   iVar1 = OS::get_ticks_msec();
   return iVar1 - timeBase;
}
void enet_time_set(int param_1) {
   int iVar1;
   OS::get_singleton();
   iVar1 = OS::get_ticks_msec();
   timeBase = iVar1 - param_1;
   return;
}
undefined8 enet_address_set_host(undefined1 (*param_1)[16], char *param_2) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   size_t local_50;
   undefined1 local_48[16];
   char local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = IP::get_singleton();
   local_60 = 0;
   local_50 = 0;
   if (param_2 != (char*)0x0) {
      local_50 = strlen(param_2);
   }

   local_58 = param_2;
   String::parse_latin1((StrRange*)&local_60);
   IP::resolve_hostname(local_48, uVar4, (StrRange*)&local_60, 3);
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

   if (local_38 == '\0') {
      _err_print_error("enet_address_set_host", "thirdparty/enet/enet_godot.cpp", 0x1a5, "Condition \"!ip.is_valid()\" is true. Returning: -1", 0, 0);
      uVar4 = 0xffffffff;
   }
 else {
      puVar5 = (undefined8*)IPAddress::get_ipv6();
      *param_1 = (undefined1[16])0x0;
      uVar2 = puVar5[1];
      uVar4 = 0;
      *(undefined8*)*param_1 = *puVar5;
      *(undefined8*)( *param_1 + 8 ) = uVar2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void enet_address_set_ip(undefined1 (*param_1)[16], undefined8 *param_2, ulong param_3) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   *param_1 = (undefined1[16])0x0;
   if (0x10 < param_3) {
      param_3 = 0x10;
   }

   uVar4 = (uint)param_3;
   if (uVar4 < 8) {
      if (( param_3 & 4 ) != 0) {
         *(undefined4*)*param_1 = *(undefined4*)param_2;
         *(undefined4*)( param_1[-1] + ( param_3 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 4 ) );
         return;
      }

      if (( uVar4 != 0 ) && ( ( *param_1 )[0] = *(undefined1*)param_2(param_3 & 2) != 0 )) {
         *(undefined2*)( param_1[-1] + ( param_3 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 2 ) );
         return;
      }

   }
 else {
      *(undefined8*)*param_1 = *param_2;
      *(undefined8*)( param_1[-1] + ( param_3 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)param_2 + ( ( param_3 & 0xffffffff ) - 8 ) );
      uVar3 = ( ulong )(*param_1 + 8) & 0xfffffffffffffff8;
      lVar2 = (long)param_1 - uVar3;
      uVar4 = uVar4 + (int)lVar2 & 0xfffffff8;
      if (7 < uVar4) {
         uVar1 = 0;
         do {
            uVar5 = (ulong)uVar1;
            uVar1 = uVar1 + 8;
            *(undefined8*)( uVar3 + uVar5 ) = *(undefined8*)( (long)param_2 + ( uVar5 - lVar2 ) );
         }
 while ( uVar1 < uVar4 );
         return;
      }

   }

   return;
}
undefined8 enet_address_get_host_ip(void) {
   return 0xffffffff;
}
undefined8 enet_address_get_host(void) {
   return 0xffffffff;
}
undefined8 *enet_socket_create(void) {
   char cVar1;
   undefined8 *puVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   undefined4 local_34;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar2 = (undefined8*)operator_new(0x28, "");
   *puVar2 = &PTR_bind_00104740;
   puVar2[1] = 0;
   IPAddress::clear();
   *(undefined1*)( (long)puVar2 + 0x24 ) = 0;
   pOVar3 = (Object*)NetSocket::create();
   if (( pOVar3 == (Object*)0x0 ) || ( cVar1 = cVar1 == '\0' )) {
      pOVar6 = (Object*)puVar2[1];
      plVar4 = (long*)0x0;
      if (pOVar6 == (Object*)0x0) goto LAB_001003c3;
      puVar2[1] = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         pOVar3 = (Object*)0x0;
         cVar1 = predelete_handler(pOVar6);
         if (cVar1 != '\0') {
            LAB_00100496:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
            pOVar5 = pOVar3;
            if (pOVar3 != (Object*)0x0) goto LAB_001003af;
         }

      }

   }
 else {
      pOVar6 = (Object*)puVar2[1];
      pOVar5 = pOVar6;
      if (pOVar3 != pOVar6) {
         puVar2[1] = pOVar3;
         cVar1 = RefCounted::reference();
         pOVar5 = pOVar3;
         if (cVar1 == '\0') {
            puVar2[1] = 0;
            if (pOVar6 != (Object*)0x0) {
               cVar1 = RefCounted::unreference();
               joined_r0x00100443:if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) goto LAB_00100496;
            }

         }
 else if (pOVar6 != (Object*)0x0) {
            cVar1 = RefCounted::unreference();
            goto joined_r0x00100443;
         }

      }

      LAB_001003af:cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   plVar4 = (long*)puVar2[1];
   LAB_001003c3:local_34 = 3;
   ( **(code**)( *plVar4 + 0x150 ) )(plVar4, 2, &local_34);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 enet_host_dtls_server_setup(undefined8 *param_1, Object *param_2) {
   long *plVar1;
   char cVar2;
   ENetDTLSServer *pEVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = DTLSServer::is_available();
   if (cVar2 == '\0') {
      _err_print_error("enet_host_dtls_server_setup", "thirdparty/enet/enet_godot.cpp", 0x1c0, "Condition \"!DTLSServer::is_available()\" is true. Returning: -1", "DTLS server is not available in this build.", 0, 0);
   }
 else {
      plVar1 = (long*)*param_1;
      cVar2 = ( **(code**)( *plVar1 + 0x38 ) )(plVar1);
      if (cVar2 != '\0') {
         pEVar3 = (ENetDTLSServer*)operator_new(0x60, "");
         if (param_2 == (Object*)0x0) {
            LAB_00100530:local_38 = (Object*)0x0;
            ENetDTLSServer::ENetDTLSServer(pEVar3, plVar1, &local_38);
            *param_1 = pEVar3;
         }
 else {
            local_38 = param_2;
            cVar2 = RefCounted::init_ref();
            if (cVar2 == '\0') goto LAB_00100530;
            ENetDTLSServer::ENetDTLSServer(pEVar3, plVar1, &local_38);
            *param_1 = pEVar3;
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(param_2);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)param_2 + 0x140 ) )(param_2);
                  Memory::free_static(param_2, false);
               }

            }

         }

         ( **(code**)( *plVar1 + 0x40 ) )(plVar1);
         Memory::free_static(plVar1, false);
         uVar4 = 0;
         goto LAB_00100560;
      }

   }

   uVar4 = 0xffffffff;
   LAB_00100560:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 enet_host_dtls_client_setup(undefined8 *param_1, int param_2, Object *param_3) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   char cVar4;
   undefined8 *puVar5;
   PacketPeerUDP *this;
   Object *pOVar6;
   undefined8 uVar7;
   Object *pOVar8;
   long in_FS_OFFSET;
   ushort local_62;
   long local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = PacketPeerDTLS::is_available();
   if (cVar4 == '\0') {
      _err_print_error("enet_host_dtls_client_setup", "thirdparty/enet/enet_godot.cpp", 0x1cb, "Condition \"!PacketPeerDTLS::is_available()\" is true. Returning: -1", "DTLS is not available in this build.", 0, 0);
   }
 else {
      plVar2 = (long*)*param_1;
      cVar4 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
      if (cVar4 != '\0') {
         puVar5 = (undefined8*)operator_new(0x48, "");
         if (( param_3 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
            param_3 = (Object*)0x0;
         }

         String::utf8((char*)&local_60, param_2);
         *(undefined1*)( puVar5 + 1 ) = 0;
         *puVar5 = &PTR_bind_001047a0;
         *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar5 + 4 ) = (undefined1[16])0x0;
         IPAddress::clear();
         if (puVar5[5] != local_60) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 5 ), (CowData*)&local_60);
         }

         pOVar6 = (Object*)puVar5[4];
         if (pOVar6 != param_3) {
            puVar5[4] = param_3;
            if (( param_3 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
               puVar5[4] = 0;
            }

            if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

      this(PacketPeerUDP * operator_new(0x20200, ""));
      PacketPeerUDP::PacketPeerUDP(this);
      postinitialize_handler((Object*)this);
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') {
         pOVar6 = (Object*)puVar5[2];
         if (pOVar6 != (Object*)0x0) {
            puVar5[2] = 0;
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               this(PacketPeerUDP * 0x0);
               cVar4 = predelete_handler(pOVar6);
               if (cVar4 != '\0') goto LAB_00100ab2;
            }

         }

      }
 else {
         pOVar6 = (Object*)puVar5[2];
         pOVar8 = pOVar6;
         if (this != (PacketPeerUDP*)pOVar6) {
            puVar5[2] = this;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               puVar5[2] = 0;
            }

            pOVar8 = (Object*)this;
            if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) {
               LAB_00100ab2:( **(code**)( *(long*)pOVar6 + 0x140 ) )();
               Memory::free_static(pOVar6, false);
               pOVar8 = (Object*)this;
               if (this == (PacketPeerUDP*)0x0) goto LAB_00100777;
            }

         }

         cVar4 = RefCounted::unreference();
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

      }

      LAB_00100777:pOVar6 = (Object*)PacketPeerDTLS::create(true);
      if (( pOVar6 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
         pOVar6 = (Object*)puVar5[3];
         if (pOVar6 != (Object*)0x0) {
            puVar5[3] = 0;
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010098f;
         }

      }
 else {
         pOVar8 = (Object*)puVar5[3];
         if (pOVar6 != pOVar8) {
            puVar5[3] = pOVar6;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               puVar5[3] = 0;
            }

            if (( ( pOVar8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
            Memory::free_static(pOVar8, false);
         }

      }

      cVar4 = RefCounted::unreference();
      joined_r0x0010098f:if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

   if (*(char*)( (long)plVar2 + 0x24 ) != '\0') {
      if (*(code**)( *plVar2 + 8 ) == ENetUDP::get_socket_address) {
         ( **(code**)( *(long*)plVar2[1] + 0x1b8 ) )((long*)plVar2[1], puVar5 + 6, &local_62);
         if (*(char*)( (long)plVar2 + 0x24 ) != '\0') {
            lVar3 = plVar2[3];
            puVar5[6] = plVar2[2];
            puVar5[7] = lVar3;
            *(short*)( puVar5 + 8 ) = (short)plVar2[4];
         }

      }
 else {
         ( **(code**)( *plVar2 + 8 ) )(plVar2, puVar5 + 6, &local_62);
      }

      if (*(code**)( *plVar2 + 0x28 ) == ENetUDP::close) {
         ( **(code**)( *(long*)plVar2[1] + 0x158 ) )();
         IPAddress::clear();
      }
 else {
         ( **(code**)( *plVar2 + 0x28 ) )(plVar2);
      }

      local_48 = *(undefined4*)( puVar5 + 8 );
      local_58 = puVar5[6];
      uStack_50 = puVar5[7];
      *(short*)( puVar5 + 8 ) = (short)local_48;
      PacketPeerUDP::bind((int)puVar5[2], (IPAddress*)(ulong)local_62, (int)&local_58);
   }

   lVar3 = local_60;
   *param_1 = puVar5;
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

   if (( ( param_3 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)param_3 + 0x140 ))(param_3);
   Memory::free_static(param_3, false);
}
( **(code**)( *plVar2 + 0x40 ) )(plVar2);Memory::free_static(plVar2, false);uVar7 = 0;goto LAB_001008dc;}
  }uVar7 = 0xffffffff;LAB_001008dc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}void enet_host_refuse_new_connections(long *param_1, int param_2) {
   param_1 = (long*)*param_1;
   if (param_1 != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100b89. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *param_1 + 0x30 ) )(param_1, param_2 != 0);
      return;
   }

   _err_print_error("enet_host_refuse_new_connections", "thirdparty/enet/enet_godot.cpp", 0x1d6, "Parameter \"host->socket\" is null.", 0, 0);
   return;
}
int enet_socket_bind(undefined8 *param_1, long param_2) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined2 local_48;
   undefined2 uStack_46;
   undefined8 local_38;
   undefined8 uStack_30;
   undefined2 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   IPAddress::clear();
   if (*(char*)( param_2 + 0x12 ) == '\0') {
      IPAddress::set_ipv6((uchar*)&local_58);
   }
 else {
      local_70 = 0;
      local_68 = &_LC17;
      local_60 = 1;
      String::parse_latin1((StrRange*)&local_70);
      IPAddress::IPAddress((IPAddress*)&local_38, (String*)&local_70);
      lVar2 = local_70;
      _local_48 = CONCAT22(uStack_46, local_28);
      local_58 = local_38;
      uStack_50 = uStack_30;
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

   }

   iVar3 = ( **(code**)*param_1 )(param_1, *(undefined2*)( param_2 + 0x10 ));
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return -(uint)(iVar3 != 0);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void enet_socket_destroy(long *param_1) {
   ( **(code**)( *param_1 + 0x28 ) )();
   ( **(code**)( *param_1 + 0x40 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
undefined4 enet_socket_receive(long *param_1, undefined1 (*param_2)[16], undefined8 *param_3, long param_4) {
   undefined8 uVar1;
   int iVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   long in_FS_OFFSET;
   undefined4 local_4c;
   undefined1 local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == 1) {
      IPAddress::clear();
      iVar2 = ( **(code**)( *param_1 + 0x18 ) )(param_1, *param_3, *(undefined4*)( param_3 + 1 ), &local_4c, local_48, param_2 + 1);
      uVar4 = 0;
      if (iVar2 == 0x2c) goto LAB_00100d93;
      if (iVar2 == 6) {
         uVar4 = 0xfffffffe;
         goto LAB_00100d93;
      }

      if (iVar2 == 0) {
         puVar3 = (undefined8*)IPAddress::get_ipv6();
         *param_2 = (undefined1[16])0x0;
         uVar1 = puVar3[1];
         *(undefined8*)*param_2 = *puVar3;
         *(undefined8*)( *param_2 + 8 ) = uVar1;
         uVar4 = local_4c;
         goto LAB_00100d93;
      }

   }
 else {
      _err_print_error("enet_socket_receive", "thirdparty/enet/enet_godot.cpp", 0x218, "Condition \"bufferCount != 1\" is true. Returning: -1", 0, 0);
   }

   uVar4 = 0xffffffff;
   LAB_00100d93:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 enet_socket_get_address(long *param_1, undefined1 (*param_2)[16]) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined2 local_3a;
   undefined1 local_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   IPAddress::clear();
   iVar1 = ( **(code**)( *param_1 + 8 ) )(param_1, local_38, &local_3a);
   if (iVar1 == 0) {
      puVar2 = (undefined8*)IPAddress::get_ipv6();
      *param_2 = (undefined1[16])0x0;
      uVar3 = puVar2[1];
      *(undefined8*)*param_2 = *puVar2;
      *(undefined8*)( *param_2 + 8 ) = uVar3;
      *(undefined2*)param_2[1] = local_3a;
      uVar3 = 0;
   }
 else {
      uVar3 = 0xffffffff;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 enet_socket_wait(void) {
   return 0;
}
undefined8 enet_socketset_select(void) {
   return 0xffffffff;
}
undefined8 enet_socket_listen(void) {
   return 0xffffffff;
}
void enet_socket_set_option(long *param_1) {
   /* WARNING: Could not recover jumptable at 0x00100eb7. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *param_1 + 0x20 ) )();
   return;
}
undefined8 enet_socket_get_option(void) {
   return 0xffffffff;
}
undefined8 enet_socket_connect(void) {
   return 0xffffffff;
}
undefined8 enet_socket_accept(void) {
   return 0;
}
undefined8 enet_socket_shutdown(void) {
   return 0xffffffff;
}
undefined4 enet_socket_send(long *param_1, long param_2, undefined8 *param_3, long param_4) {
   ulong *__dest;
   size_t __n;
   ulong *puVar1;
   undefined8 *puVar2;
   undefined4 uVar3;
   undefined8 *puVar4;
   ulong uVar5;
   int iVar6;
   ulong uVar7;
   ulong *puVar8;
   int iVar9;
   long in_FS_OFFSET;
   undefined4 local_5c;
   uchar local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      uVar3 = 0xffffffff;
      _err_print_error("enet_socket_send", "thirdparty/enet/enet_godot.cpp", 0x1f0, "Parameter \"address\" is null.", 0, 0);
      goto LAB_001010ac;
   }

   IPAddress::clear();
   IPAddress::set_ipv6(local_58);
   if (param_4 == 0) {
      iVar9 = 0;
      puVar8 = (ulong*)0x0;
   }
 else {
      iVar9 = 0;
      puVar2 = param_3;
      do {
         iVar9 = iVar9 + *(int*)( puVar2 + 1 );
         puVar2 = puVar2 + 2;
      }
 while ( param_3 + param_4 * 2 != puVar2 );
      uVar7 = (ulong)iVar9;
      if ((long)uVar7 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         LAB_00101025:puVar8 = (ulong*)0x0;
      }
 else {
         if (uVar7 == 0) goto LAB_00101025;
         uVar5 = uVar7 - 1 | uVar7 - 1 >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         puVar1 = (ulong*)Memory::alloc_static(( uVar5 | uVar5 >> 0x10 ) + 0x11, false);
         if (puVar1 == (ulong*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            goto LAB_00101025;
         }

         puVar8 = puVar1 + 2;
         *puVar1 = 1;
         puVar1[1] = uVar7;
         if (1 < *puVar1) {
            __n = puVar1[1];
            uVar7 = 0x10;
            if (__n != 0) {
               uVar7 = __n - 1 | __n - 1 >> 1;
               uVar7 = uVar7 | uVar7 >> 2;
               uVar7 = uVar7 | uVar7 >> 4;
               uVar7 = uVar7 | uVar7 >> 8;
               uVar7 = uVar7 | uVar7 >> 0x10;
               uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
            }

            puVar2 = (undefined8*)Memory::alloc_static(uVar7, false);
            if (puVar2 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = puVar2 + 2;
               *puVar2 = 1;
               puVar2[1] = __n;
               memcpy(__dest, puVar8, __n);
               LOCK();
               *puVar1 = *puVar1 - 1;
               UNLOCK();
               puVar8 = __dest;
               if (*puVar1 == 0) {
                  Memory::free_static(puVar1, false);
               }

            }

         }

      }

      iVar6 = 0;
      puVar2 = param_3;
      do {
         puVar4 = puVar2 + 2;
         memcpy((void*)( (long)iVar6 + (long)puVar8 ), (void*)*puVar2, puVar2[1]);
         iVar6 = iVar6 + *(int*)( puVar2 + 1 );
         puVar2 = puVar4;
      }
 while ( param_3 + param_4 * 2 != puVar4 );
   }

   local_5c = 0;
   iVar9 = ( **(code**)( *param_1 + 0x10 ) )(param_1, puVar8, iVar9, &local_5c, *(undefined2*)( param_2 + 0x10 ));
   uVar3 = local_5c;
   if (( iVar9 != 0 ) && ( uVar3 = iVar9 != 0x2c )) {
      _err_print_error("enet_socket_send", "thirdparty/enet/enet_godot.cpp", 0x210, "Sending failed!", 0, 1);
      uVar3 = 0xffffffff;
   }

   if (puVar8 != (ulong*)0x0) {
      puVar8 = puVar8 + -2;
      LOCK();
      *puVar8 = *puVar8 - 1;
      UNLOCK();
      if (*puVar8 == 0) {
         Memory::free_static(puVar8, false);
      }

   }

   LAB_001010ac:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* ENetGodotSocket::set_refuse_new_connections(bool) */void ENetGodotSocket::set_refuse_new_connections(bool param_1) {
   return;
}
/* ENetGodotSocket::can_upgrade() */undefined8 ENetGodotSocket::can_upgrade(void) {
   return 0;
}
/* ENetUDP::can_upgrade() */undefined8 ENetUDP::can_upgrade(void) {
   return 1;
}
/* ENetUDP::bind(IPAddress, unsigned short) */void ENetUDP::bind(long param_1, undefined2 param_2) {
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined2 in_stack_00000018;
   *(undefined1*)( param_1 + 0x24 ) = 1;
   *(undefined2*)( param_1 + 0x20 ) = in_stack_00000018;
   *(undefined8*)( param_1 + 0x10 ) = in_stack_00000008;
   *(undefined8*)( param_1 + 0x18 ) = in_stack_00000010;
   ( **(code**)( **(long**)( param_1 + 8 ) + 0x160 ) )(*(long**)( param_1 + 8 ), param_2);
   return;
}
/* ENetUDP::get_socket_address(IPAddress*, unsigned short*) */void ENetUDP::get_socket_address(IPAddress *param_1, ushort *param_2) {
   undefined8 uVar1;
   ( **(code**)( **(long**)( param_1 + 8 ) + 0x1b8 ) )();
   if (param_1[0x24] != '\0') {
      uVar1 = *(undefined8*)( param_1 + 0x18 );
      *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( param_2 + 4 ) = uVar1;
      param_2[8] = *(ushort*)( param_1 + 0x20 );
   }

   return;
}
/* ENetUDP::sendto(unsigned char const*, int, int&, IPAddress, unsigned short) */void ENetUDP::sendto(long param_1) {
   ( **(code**)( **(long**)( param_1 + 8 ) + 0x198 ) )();
   return;
}
/* ENetUDP::set_option(_ENetSocketOption, int) */undefined8 ENetUDP::set_option(ENetUDP *this, uint param_2, int param_3) {
   if (param_2 == 5) {
      ( **(code**)( **(long**)( this + 8 ) + 0x1e0 ) )(*(long**)( this + 8 ), param_3 != 0);
   }
 else if (param_2 < 6) {
      if (param_2 == 1) {
         ( **(code**)( **(long**)( this + 8 ) + 0x1c8 ) )(*(long**)( this + 8 ), param_3 == 0);
      }
 else {
         if (param_2 != 2) {
            return 0xffffffff;
         }

         ( **(code**)( **(long**)( this + 8 ) + 0x1c0 ) )(*(long**)( this + 8 ), param_3 != 0);
      }

   }
 else {
      if (param_2 != 9) {
         return 0xffffffff;
      }

      ( **(code**)( **(long**)( this + 8 ) + 0x1d8 ) )(*(long**)( this + 8 ), param_3 != 0);
   }

   return 0;
}
/* ENetDTLSClient::set_option(_ENetSocketOption, int) */undefined8 ENetDTLSClient::set_option(void) {
   return 0xffffffff;
}
/* ENetDTLSServer::set_option(_ENetSocketOption, int) */undefined8 ENetDTLSServer::set_option(void) {
   return 0xffffffff;
}
/* ENetUDP::close() */void ENetUDP::close(ENetUDP *this) {
   ( **(code**)( **(long**)( this + 8 ) + 0x158 ) )();
   IPAddress::clear();
   return;
}
/* ENetDTLSServer::set_refuse_new_connections(bool) */void ENetDTLSServer::set_refuse_new_connections(bool param_1) {
   undefined7 in_register_00000039;
   UDPServer::set_max_pending_connections((int)*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x10 ));
   return;
}
/* ENetDTLSClient::recvfrom(unsigned char*, int, int&, IPAddress&, unsigned short&) */int ENetDTLSClient::recvfrom(ENetDTLSClient *this, uchar *param_1, int param_2, int *param_3, IPAddress *param_4, ushort *param_5) {
   ushort uVar1;
   int iVar2;
   long in_FS_OFFSET;
   void *local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined2 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( **(long**)( this + 0x18 ) + 400 ) )();
   iVar2 = ( **(code**)( **(long**)( this + 0x18 ) + 0x1a8 ) )();
   if (iVar2 == 1) {
      LAB_00101630:iVar2 = 0x2c;
   }
 else {
      iVar2 = ( **(code**)( **(long**)( this + 0x18 ) + 0x1a8 ) )();
      if (iVar2 == 2) {
         iVar2 = ( **(code**)( **(long**)( this + 0x18 ) + 0x150 ) )();
         if (iVar2 == 0) goto LAB_00101630;
         if (-1 < iVar2) {
            iVar2 = ( **(code**)( **(long**)( this + 0x18 ) + 0x158 ) )(*(long**)( this + 0x18 ), &local_60, param_3);
            if (iVar2 == 0) {
               if (param_2 < *param_3) {
                  _err_print_error("recvfrom", "thirdparty/enet/enet_godot.cpp", 0xef, "Condition \"p_len < r_read\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
                  iVar2 = 6;
               }
 else {
                  memcpy(param_1, local_60, (long)*param_3);
                  PacketPeerUDP::get_packet_address();
                  *(undefined2*)( param_4 + 0x10 ) = local_48;
                  *(undefined8*)param_4 = local_58;
                  *(undefined8*)( param_4 + 8 ) = uStack_50;
                  uVar1 = PacketPeerUDP::get_packet_port();
                  *param_5 = uVar1;
               }

            }
 else {
               _err_print_error("recvfrom", "thirdparty/enet/enet_godot.cpp", 0xee, "Condition \"err != OK\" is true. Returning: err", 0, 0);
            }

            goto LAB_00101606;
         }

      }

      iVar2 = 1;
   }

   LAB_00101606:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetDTLSServer::bind(IPAddress, unsigned short) */void ENetDTLSServer::bind(long param_1, ushort param_2) {
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined2 in_stack_00000018;
   *(undefined2*)( param_1 + 0x5c ) = in_stack_00000018;
   *(undefined8*)( param_1 + 0x4c ) = in_stack_00000008;
   *(undefined8*)( param_1 + 0x54 ) = in_stack_00000010;
   UDPServer::listen(( ushort ) * (undefined8*)( param_1 + 0x10 ), (IPAddress*)(ulong)param_2);
   return;
}
/* ENetDTLSClient::bind(IPAddress, unsigned short) */void ENetDTLSClient::bind(long param_1, ushort param_2) {
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined2 in_stack_00000018;
   *(undefined2*)( param_1 + 0x40 ) = in_stack_00000018;
   *(undefined8*)( param_1 + 0x30 ) = in_stack_00000008;
   *(undefined8*)( param_1 + 0x38 ) = in_stack_00000010;
   PacketPeerUDP::bind((int)*(undefined8*)( param_1 + 0x10 ), (IPAddress*)(ulong)param_2, (int)&stack0x00000008);
   return;
}
/* ENetDTLSClient::close() */void ENetDTLSClient::close(ENetDTLSClient *this) {
   ( **(code**)( **(long**)( this + 0x18 ) + 0x1a0 ) )();
   PacketPeerUDP::close();
   return;
}
/* ENetUDP::recvfrom(unsigned char*, int, int&, IPAddress&, unsigned short&) */void ENetUDP::recvfrom(ENetUDP *this, uchar *param_1, int param_2, int *param_3, IPAddress *param_4, ushort *param_5) {
   int iVar1;
   iVar1 = ( **(code**)( **(long**)( this + 8 ) + 0x178 ) )(*(long**)( this + 8 ), 0, 0);
   if (iVar1 == 0) {
      ( **(code**)( **(long**)( this + 8 ) + 0x188 ) )(*(long**)( this + 8 ), param_1, param_2, param_3, param_4, param_5, 0);
   }

   return;
}
/* ENetDTLSClient::get_socket_address(IPAddress*, unsigned short*) */undefined8 ENetDTLSClient::get_socket_address(ENetDTLSClient *this, IPAddress *param_1, ushort *param_2) {
   char cVar1;
   ushort uVar2;
   undefined8 uVar3;
   cVar1 = PacketPeerUDP::is_bound();
   uVar3 = 3;
   if (cVar1 != '\0') {
      uVar3 = *(undefined8*)( this + 0x38 );
      *(undefined8*)param_1 = *(undefined8*)( this + 0x30 );
      *(undefined8*)( param_1 + 8 ) = uVar3;
      *(undefined2*)( param_1 + 0x10 ) = *(undefined2*)( this + 0x40 );
      uVar2 = PacketPeerUDP::get_local_port();
      *param_2 = uVar2;
      uVar3 = 0;
   }

   return uVar3;
}
/* ENetDTLSServer::get_socket_address(IPAddress*, unsigned short*) */undefined8 ENetDTLSServer::get_socket_address(ENetDTLSServer *this, IPAddress *param_1, ushort *param_2) {
   char cVar1;
   ushort uVar2;
   undefined8 uVar3;
   cVar1 = UDPServer::is_listening();
   uVar3 = 3;
   if (cVar1 != '\0') {
      uVar3 = *(undefined8*)( this + 0x54 );
      *(undefined8*)param_1 = *(undefined8*)( this + 0x4c );
      *(undefined8*)( param_1 + 8 ) = uVar3;
      *(undefined2*)( param_1 + 0x10 ) = *(undefined2*)( this + 0x5c );
      uVar2 = UDPServer::get_local_port();
      *param_2 = uVar2;
      uVar3 = 0;
   }

   return uVar3;
}
/* ENetUDP::~ENetUDP() */void ENetUDP::~ENetUDP(ENetUDP *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR_bind_00104740;
   ( **(code**)( **(long**)( this + 8 ) + 0x158 ) )();
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            return;
         }

      }

   }

   return;
}
/* ENetUDP::~ENetUDP() */void ENetUDP::~ENetUDP(ENetUDP *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR_bind_00104740;
   ( **(code**)( **(long**)( this + 8 ) + 0x158 ) )();
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   operator_delete(this, 0x28);
   return;
}
/* ENetDTLSClient::sendto(unsigned char const*, int, int&, IPAddress, unsigned short) */undefined8 ENetDTLSClient::sendto(long param_1, undefined8 param_2, undefined4 param_3, undefined4 *param_4) {
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   char cVar4;
   int iVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   Object *local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( param_1 + 8 ) == '\0') {
      PacketPeerUDP::connect_to_host(*(IPAddress**)( param_1 + 0x10 ), (int)&stack0x00000008);
      plVar1 = *(long**)( param_1 + 0x18 );
      local_48 = (Object*)0x0;
      pcVar2 = *(code**)( *plVar1 + 0x198 );
      if (*(Object**)( param_1 + 0x20 ) != (Object*)0x0) {
         local_48 = *(Object**)( param_1 + 0x20 );
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            local_48 = (Object*)0x0;
         }

      }

      local_50 = (Object*)0x0;
      if (*(Object**)( param_1 + 0x10 ) != (Object*)0x0) {
         local_50 = *(Object**)( param_1 + 0x10 );
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            local_50 = (Object*)0x0;
         }

      }

      iVar5 = ( *pcVar2 )(plVar1, &local_50, param_1 + 0x28, &local_48);
      if (local_50 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         pOVar3 = local_50;
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_50);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      if (local_48 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         pOVar3 = local_48;
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_48);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      if (iVar5 == 0) {
         *(undefined1*)( param_1 + 8 ) = 1;
         goto LAB_00101973;
      }

   }
 else {
      LAB_00101973:( **(code**)( **(long**)( param_1 + 0x18 ) + 400 ) )();
      iVar5 = ( **(code**)( **(long**)( param_1 + 0x18 ) + 0x1a8 ) )();
      if (iVar5 == 1) {
         uVar6 = 0x2c;
         goto LAB_001019ad;
      }

      iVar5 = ( **(code**)( **(long**)( param_1 + 0x18 ) + 0x1a8 ) )();
      if (iVar5 == 2) {
         plVar1 = *(long**)( param_1 + 0x18 );
         *param_4 = param_3;
         uVar6 = ( **(code**)( *plVar1 + 0x160 ) )(plVar1, param_2, param_3);
         goto LAB_001019ad;
      }

   }

   uVar6 = 1;
   LAB_001019ad:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ENetDTLSServer::close() */void ENetDTLSServer::close(ENetDTLSServer *this) {
   long *plVar1;
   uint uVar2;
   undefined8 *puVar3;
   void *pvVar4;
   long lVar5;
   Object *pOVar6;
   char cVar7;
   long lVar8;
   for (puVar3 = *(undefined8**)( this + 0x30 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
      ( **(code**)( *(long*)puVar3[3] + 0x1a0 ) )();
   }

   if (( *(long*)( this + 0x20 ) != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
      if (uVar2 != 0) {
         lVar8 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x28 ) + lVar8 ) != 0) {
               *(int*)( *(long*)( this + 0x28 ) + lVar8 ) = 0;
               pvVar4 = *(void**)( *(long*)( this + 0x20 ) + lVar8 * 2 );
               if (( *(long*)( (long)pvVar4 + 0x18 ) != 0 ) && ( cVar7 = cVar7 != '\0' )) {
                  pOVar6 = *(Object**)( (long)pvVar4 + 0x18 );
                  cVar7 = predelete_handler(pOVar6);
                  if (cVar7 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }

               if (*(long*)( (long)pvVar4 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar4 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar5 = *(long*)( (long)pvVar4 + 0x10 );
                     *(undefined8*)( (long)pvVar4 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar4, false);
               *(undefined8*)( *(long*)( this + 0x20 ) + lVar8 * 2 ) = 0;
            }

            lVar8 = lVar8 + 4;
         }
 while ( (ulong)uVar2 << 2 != lVar8 );
      }

      *(undefined4*)( this + 0x44 ) = 0;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   }

   UDPServer::stop();
   ( **(code**)( **(long**)( this + 8 ) + 0x158 ) )();
   IPAddress::clear();
   return;
}
/* ENetDTLSServer::~ENetDTLSServer() */void ENetDTLSServer::~ENetDTLSServer(ENetDTLSServer *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   void *pvVar7;
   *(undefined***)this = &PTR_bind_00104800;
   close(this);
   pvVar7 = *(void**)( this + 0x20 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x44 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x28 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x28 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        pOVar4 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar5 = predelete_handler(pOVar4);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x20 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00101d90;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   LAB_00101d90:if (*(long*)( this + 0x10 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 0x10 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (*(long*)( this + 8 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 8 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
            return;
         }

      }

   }

   return;
}
/* ENetDTLSServer::~ENetDTLSServer() */void ENetDTLSServer::~ENetDTLSServer(ENetDTLSServer *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   void *pvVar7;
   *(undefined***)this = &PTR_bind_00104800;
   close(this);
   pvVar7 = *(void**)( this + 0x20 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x44 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x28 ) + lVar6 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar6 * 2 );
                  *(int*)( *(long*)( this + 0x28 ) + lVar6 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        pOVar4 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar5 = predelete_handler(pOVar4);
                        if (cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                     }

                  }

                  if (*(long*)( (long)pvVar7 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar7 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar7 + 0x10 );
                        *(undefined8*)( (long)pvVar7 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x20 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x44 ) = 0;
            *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00101f90;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   LAB_00101f90:if (*(long*)( this + 0x10 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 0x10 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (*(long*)( this + 8 ) != 0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         pOVar4 = *(Object**)( this + 8 );
         cVar5 = predelete_handler(pOVar4);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   operator_delete(this, 0x60);
   return;
}
/* ENetDTLSClient::~ENetDTLSClient() */void ENetDTLSClient::~ENetDTLSClient(ENetDTLSClient *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR_bind_001047a0;
   ( **(code**)( **(long**)( this + 0x18 ) + 0x1a0 ) )();
   PacketPeerUDP::close();
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x20 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x20 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x18 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x10 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x10 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
            return;
         }

      }

   }

   return;
}
/* ENetDTLSClient::~ENetDTLSClient() */void ENetDTLSClient::~ENetDTLSClient(ENetDTLSClient *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR_bind_001047a0;
   ( **(code**)( **(long**)( this + 0x18 ) + 0x1a0 ) )();
   PacketPeerUDP::close();
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 32 ) ) != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( this + ( -8*i + 32 ) );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 320 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

   }

   operator_delete(this, 0x48);
   return;
}
/* ENetDTLSServer::ENetDTLSServer(ENetUDP*, Ref<TLSOptions>) */void ENetDTLSServer::ENetDTLSServer(ENetDTLSServer *this, long *param_1, long *param_3) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   UDPServer *this_00;
   Object *pOVar5;
   long *plVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   Object *local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x40 ) = 2;
   *(undefined4*)( this + 0x48 ) = 0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR_bind_00104800;
   IPAddress::clear();
   this_00 = (UDPServer*)operator_new(0x101a0, "");
   UDPServer::UDPServer(this_00);
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      pOVar5 = *(Object**)( this + 0x10 );
      if (pOVar5 != (Object*)0x0) {
         *(undefined8*)( this + 0x10 ) = 0;
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            this_00 = (UDPServer*)0x0;
            cVar4 = predelete_handler(pOVar5);
            if (cVar4 != '\0') goto LAB_00102682;
         }

      }

   }
 else {
      pOVar5 = *(Object**)( this + 0x10 );
      pOVar7 = pOVar5;
      if (this_00 != (UDPServer*)pOVar5) {
         *(UDPServer**)( this + 0x10 ) = this_00;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x10 ) = 0;
         }

         pOVar7 = (Object*)this_00;
         if (( ( pOVar5 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) {
            LAB_00102682:( **(code**)( *(long*)pOVar5 + 0x140 ) )();
            Memory::free_static(pOVar5, false);
            pOVar7 = (Object*)this_00;
            if (this_00 == (UDPServer*)0x0) goto LAB_001023f6;
         }

      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
         ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
         Memory::free_static(pOVar7, false);
      }

   }

   LAB_001023f6:if (*(char*)( (long)param_1 + 0x24 ) != '\0') {
      if (*(code**)( *param_1 + 8 ) == ENetUDP::get_socket_address) {
         ( **(code**)( *(long*)param_1[1] + 0x1b8 ) )((long*)param_1[1], this + 0x4c, &local_60);
         if (*(char*)( (long)param_1 + 0x24 ) != '\0') {
            lVar2 = param_1[2];
            lVar3 = param_1[3];
            *(short*)( this + 0x5c ) = (short)param_1[4];
            *(long*)( this + 0x4c ) = lVar2;
            *(long*)( this + 0x54 ) = lVar3;
         }

      }
 else {
         ( **(code**)( *param_1 + 8 ) )(param_1, this + 0x4c, &local_60);
      }

      if (*(code**)( *param_1 + 0x28 ) == ENetUDP::close) {
         ( **(code**)( *(long*)param_1[1] + 0x158 ) )();
         IPAddress::clear();
      }
 else {
         ( **(code**)( *param_1 + 0x28 ) )(param_1);
      }

      local_48 = *(undefined4*)( this + 0x5c );
      local_58 = *(undefined8*)( this + 0x4c );
      uStack_50 = *(undefined8*)( this + 0x54 );
      *(short*)( this + 0x5c ) = (short)local_48;
      UDPServer::listen(( ushort ) * (undefined8*)( this + 0x10 ), (IPAddress*)( (ulong)local_60 & 0xffff ));
   }

   pOVar5 = (Object*)DTLSServer::create(true);
   if (( pOVar5 == (Object*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
      pOVar5 = *(Object**)( this + 8 );
      if (pOVar5 == (Object*)0x0) {
         plVar6 = (long*)0x0;
         goto LAB_00102541;
      }

      *(undefined8*)( this + 8 ) = 0;
   }
 else {
      pOVar7 = *(Object**)( this + 8 );
      if (pOVar5 != pOVar7) {
         *(Object**)( this + 8 ) = pOVar5;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 8 ) = 0;
         }

         if (( ( pOVar7 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
         Memory::free_static(pOVar7, false);
      }

   }

}
cVar4 = RefCounted::unreference();if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
}
plVar6 = *(long**)( this + 8 );LAB_00102541:pcVar1 = *(code**)( *plVar6 + 0x150 );local_60 = (Object*)0x0;if (( (Object*)*param_3 != (Object*)0x0 ) && ( local_60 = (Object*)*param_3 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
   local_60 = (Object*)0x0;
}
( *pcVar1 )(plVar6);if (( ( local_60 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar5 = local_60,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);Memory::free_static(pOVar5, false);}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Ref<PacketPeerDTLS>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<PacketPeerDTLS> > > >::operator[](String const&)
    */undefined1 * __thiscallHashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>>::operator [](HashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__slong lVar3Object *pOVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]char cVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined1(*pauVar42)[16];undefined8 *puVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint *puVar51uint uVar52uint uVar53long lVar54uint uVar55uint uVar56undefined1(*pauVar57)[16];undefined1(*pauVar58)[16];long in_FS_OFFSETlong local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00103350:uVar40 = (ulong)uVar56;
   uVar45 = uVar40 * 4;
   uVar49 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = pvVar44;
   if (uVar56 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar44 + uVar49 ) ) && ( pvVar44 < (void*)( (long)pvVar2 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_001031d2;
      }

      memset(pvVar2, 0, uVar45);
      memset(pvVar44, 0, uVar49);
      iVar46 = *(int*)( this + 0x2c );
      LAB_001031d6:if (iVar46 != 0) {
         LAB_001031de:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar53 = String::hash();
         uVar40 = CONCAT44(0, uVar38);
         lVar54 = *(long*)( this + 0x10 );
         uVar39 = 1;
         if (uVar53 != 0) {
            uVar39 = uVar53;
         }

         uVar55 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar3;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar40;
         lVar47 = SUB168(auVar17 * auVar33, 8);
         uVar53 = *(uint*)( lVar54 + lVar47 * 4 );
         uVar52 = SUB164(auVar17 * auVar33, 8);
         if (uVar53 != 0) {
            do {
               if (uVar53 == uVar39) {
                  cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
                  if (cVar37 != '\0') {
                     pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     pOVar4 = *(Object**)( pauVar42[1] + 8 );
                     if (pOVar4 != (Object*)0x0) {
                        *(undefined8*)( pauVar42[1] + 8 ) = 0;
                        cVar37 = RefCounted::unreference();
                        if (( cVar37 != '\0' ) && ( cVar37 = cVar37 != '\0' )) {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                        pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     }

                     goto LAB_0010305b;
                  }

                  lVar54 = *(long*)( this + 0x10 );
               }

               uVar55 = uVar55 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar40;
               lVar47 = SUB168(auVar18 * auVar34, 8);
               uVar53 = *(uint*)( lVar54 + lVar47 * 4 );
               uVar52 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar53 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar53 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar52 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar55 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      uVar40 = (ulong)uVar56;
      goto LAB_00102c94;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00102c94;
   if (iVar46 != 0) goto LAB_001031de;
   LAB_00102cba:uVar56 = *(uint*)( this + 0x28 );
   if (uVar56 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010305b;
   }

   uVar40 = ( ulong )(uVar56 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar56 * 4 );
   if (uVar56 + 1 < 2) {
      uVar40 = 2;
   }

   uVar56 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar49 = (ulong)uVar56;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar49 * 4;
   uVar45 = uVar49 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar56 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar49 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar38 != 0) {
      uVar40 = 0;
      do {
         uVar56 = *(uint*)( (long)pvVar2 + uVar40 * 4 );
         if (uVar56 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar52 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar39);
            lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar56 * lVar54;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar45;
            lVar47 = SUB168(auVar5 * auVar21, 8);
            puVar51 = (uint*)( lVar3 + lVar47 * 4 );
            iVar46 = SUB164(auVar5 * auVar21, 8);
            uVar53 = *puVar51;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar53 * lVar54;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar45;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar6 * auVar22, 8)) * lVar54;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar45;
               uVar55 = SUB164(auVar7 * auVar23, 8);
               uVar50 = uVar41;
               if (uVar55 < uVar52) {
                  *puVar51 = uVar56;
                  puVar43 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar50 = *puVar43;
                  *puVar43 = uVar41;
                  uVar56 = uVar53;
                  uVar52 = uVar55;
               }

               uVar52 = uVar52 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar45;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar51 = (uint*)( lVar3 + lVar47 * 4 );
               iVar46 = SUB164(auVar8 * auVar24, 8);
               uVar41 = uVar50;
               uVar53 = *puVar51;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar51 = uVar56;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar38 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   uVar40 = CONCAT44(0, uVar56);
   if (iVar46 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = String::hash();
      lVar54 = *(long*)( this + 0x10 );
      uVar38 = 1;
      if (uVar39 != 0) {
         uVar38 = uVar39;
      }

      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29, 8);
      uVar39 = *(uint*)( lVar54 + lVar47 * 4 );
      uVar53 = SUB164(auVar13 * auVar29, 8);
      if (uVar39 != 0) {
         do {
            if (uVar39 == uVar38) {
               cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
               if (cVar37 != '\0') {
                  pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  goto LAB_0010305b;
               }

               lVar54 = *(long*)( this + 0x10 );
            }

            uVar52 = uVar52 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar40;
            lVar47 = SUB168(auVar14 * auVar30, 8);
            uVar39 = *(uint*)( lVar54 + lVar47 * 4 );
            uVar53 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar53 + uVar56 ) - SUB164(auVar15 * auVar31, 8)) * lVar3,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar52 <= SUB164(auVar16 * auVar32, 8) );
      }

      uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_00103350;
      LAB_001031d2:iVar46 = *(int*)( this + 0x2c );
      goto LAB_001031d6;
   }

   LAB_00102c94:if ((float)uVar40 * __LC25 < (float)( iVar46 + 1 )) goto LAB_00102cba;
}
local_58[0] = 0;if (*(long*)param_1 == 0) {
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *pauVar42 = (undefined1[16])0x0;
   LAB_001032fb:*(undefined8*)( pauVar42[1] + 8 ) = 0;
   LAB_00102f43:puVar43 = *(undefined8**)( this + 0x20 );
   if (puVar43 != (undefined8*)0x0) goto LAB_00102f50;
   LAB_0010318d:*(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar3 = local_58[0];
   local_58[1] = 0;
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *(undefined8*)*pauVar42 = 0;
   *(undefined8*)( *pauVar42 + 8 ) = 0;
   if (lVar3 == 0) goto LAB_001032fb;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar42 + 1 ), (CowData*)local_58);
   *(undefined8*)( pauVar42[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_00102f43;
   Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   puVar43 = *(undefined8**)( this + 0x20 );
   if (puVar43 == (undefined8*)0x0) goto LAB_0010318d;
   LAB_00102f50:*puVar43 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar43;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar56 = 1;if (uVar38 != 0) {
   uVar56 = uVar38;
}
uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar56 * lVar54;auVar25._8_8_ = 0;auVar25._0_8_ = uVar40;lVar48 = SUB168(auVar9 * auVar25, 8);lVar47 = *(long*)( this + 8 );puVar51 = (uint*)( lVar3 + lVar48 * 4 );iVar46 = SUB164(auVar9 * auVar25, 8);uVar39 = *puVar51;pauVar58 = pauVar42;if (uVar39 != 0) {
   uVar53 = 0;
   pauVar57 = pauVar42;
   do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar46 + uVar38 ) - SUB164(auVar10 * auVar26, 8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27, 8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
         *puVar51 = uVar56;
         puVar43 = (undefined8*)( lVar47 + lVar48 * 8 );
         pauVar58 = (undefined1(*) [16])*puVar43;
         *puVar43 = pauVar57;
         uVar53 = uVar52;
         uVar56 = uVar39;
      }

      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28, 8);
      puVar51 = (uint*)( lVar3 + lVar48 * 4 );
      iVar46 = SUB164(auVar12 * auVar28, 8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
   }
 while ( uVar39 != 0 );
}
*(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar58;*puVar51 = uVar56;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010305b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar42[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ENetDTLSServer::sendto(unsigned char const*, int, int&, IPAddress, unsigned short) */undefined4 ENetDTLSServer::sendto(long param_1, undefined8 param_2, undefined4 param_3, undefined4 *param_4) {
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
   code *pcVar11;
   ulong uVar12;
   undefined *puVar13;
   char cVar14;
   uint uVar15;
   int iVar16;
   long *plVar17;
   uint uVar18;
   long lVar19;
   Object *pOVar20;
   undefined4 uVar21;
   long lVar22;
   uint uVar23;
   long in_FS_OFFSET;
   undefined4 local_a4;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   itos((long)&local_60);
   local_58 = &_LC30;
   local_68 = 0;
   local_50 = 1;
   String::parse_latin1((StrRange*)&local_68);
   IPAddress::operator_cast_to_String((IPAddress*)&local_70);
   String::operator +((String*)&local_58, (String*)&local_70);
   String::operator +((String*)&local_78, (String*)&local_58);
   puVar13 = local_58;
   if (local_58 != (undefined*)0x0) {
      LOCK();
      plVar17 = (long*)( local_58 + -0x10 );
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
         local_58 = (undefined*)0x0;
         Memory::free_static(puVar13 + -0x10, false);
      }

   }

   lVar2 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar17 = (long*)( local_70 + -0x10 );
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar17 = (long*)( local_68 + -0x10 );
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar17 = (long*)( local_60 + -0x10 );
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( *(long*)( param_1 + 0x20 ) != 0 ) && ( *(int*)( param_1 + 0x44 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x40 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x40 ) * 8 );
      uVar15 = String::hash();
      uVar12 = CONCAT44(0, uVar1);
      lVar22 = *(long*)( param_1 + 0x28 );
      uVar18 = 1;
      if (uVar15 != 0) {
         uVar18 = uVar15;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar18 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      lVar19 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( lVar22 + lVar19 * 4 );
      iVar16 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar23 = 0;
         do {
            if (uVar18 == uVar15) {
               cVar14 = String::operator ==((String*)( *(long*)( *(long*)( param_1 + 0x20 ) + lVar19 * 8 ) + 0x10 ), (String*)&local_78);
               if (cVar14 != '\0') {
                  plVar17 = (long*)HashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>>::operator []((HashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>>*)( param_1 + 0x18 ), (String*)&local_78);
                  pOVar20 = (Object*)*plVar17;
                  if (pOVar20 == (Object*)0x0) {
                     /* WARNING: Does not return */
                     pcVar11 = (code*)invalidInstructionException();
                     ( *pcVar11 )();
                  }

                  cVar14 = RefCounted::reference();
                  if (cVar14 == '\0') {
                     pOVar20 = (Object*)0x0;
                  }

                  iVar16 = ( **(code**)( *(long*)pOVar20 + 0x160 ) )(pOVar20, param_2, param_3);
                  if (iVar16 == 0x2c) {
                     local_a4 = 0;
                     uVar21 = 0x2c;
                  }
 else {
                     uVar21 = 0;
                     local_a4 = param_3;
                  }

                  *param_4 = local_a4;
                  cVar14 = RefCounted::unreference();
                  if (cVar14 != '\0') {
                     cVar14 = predelete_handler(pOVar20);
                     if (cVar14 != '\0') {
                        ( **(code**)( *(long*)pOVar20 + 0x140 ) )(pOVar20);
                        Memory::free_static(pOVar20, false);
                     }

                  }

                  goto LAB_001035cd;
               }

               lVar22 = *(long*)( param_1 + 0x28 );
            }

            uVar23 = uVar23 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar16 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar12;
            lVar19 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( lVar22 + lVar19 * 4 );
            iVar16 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar12,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,uVar23 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   uVar21 = 0;
   *param_4 = param_3;
   LAB_001035cd:lVar2 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar17 = (long*)( local_78 + -0x10 );
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar21;
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
/* ENetDTLSServer::recvfrom(unsigned char*, int, int&, IPAddress&, unsigned short&) */undefined4 ENetDTLSServer::recvfrom(ENetDTLSServer *this, uchar *param_1, int param_2, int *param_3, IPAddress *param_4, ushort *param_5) {
   Object *pOVar1;
   uint *puVar2;
   uint *puVar3;
   undefined8 *puVar4;
   uint uVar5;
   undefined8 uVar6;
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
   code *pcVar27;
   undefined1(*pauVar28)[16];
   void *pvVar29;
   char cVar30;
   ushort uVar31;
   int iVar32;
   uint uVar33;
   CowData<char32_t> *pCVar34;
   undefined8 *puVar35;
   long lVar36;
   uint uVar37;
   uint uVar38;
   long lVar39;
   long lVar40;
   ulong uVar41;
   long *plVar42;
   long *plVar43;
   long lVar44;
   String *pSVar45;
   Object *pOVar46;
   undefined4 uVar47;
   uint uVar48;
   long in_FS_OFFSET;
   Object *local_98;
   Object *local_90;
   long local_88;
   long local_80;
   undefined1(*local_78)[16];
   void *local_70;
   Object *local_68;
   String *local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined2 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   UDPServer::poll();
   cVar30 = UDPServer::is_connection_available();
   if (cVar30 != '\0') {
      UDPServer::take_connection();
      PacketPeerUDP::get_packet_address();
      PacketPeerUDP::get_packet_port();
      plVar42 = *(long**)( this + 8 );
      pcVar27 = *(code**)( *plVar42 + 0x160 );
      local_68 = (Object*)0x0;
      if (local_98 != (Object*)0x0) {
         local_68 = local_98;
         cVar30 = RefCounted::reference();
         if (cVar30 == '\0') {
            local_68 = (Object*)0x0;
         }

      }

      ( *pcVar27 )(&local_90, plVar42, (String*)&local_68);
      if (( ( local_68 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),pOVar46 = local_68,cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)pOVar46 + 0x140 ))(pOVar46);
      Memory::free_static(pOVar46, false);
   }

   iVar32 = ( **(code**)( *(long*)local_90 + 0x1a8 ) )();
   if (iVar32 - 1U < 2) {
      itos((long)&local_70);
      local_68 = (Object*)&_LC30;
      local_78 = (undefined1(*) [16])0x0;
      local_60 = (String*)0x1;
      String::parse_latin1((StrRange*)&local_78);
      IPAddress::operator_cast_to_String((IPAddress*)&local_80);
      String::operator +((String*)&local_68, (String*)&local_80);
      String::operator +((String*)&local_88, (String*)&local_68);
      pOVar46 = local_68;
      if (local_68 != (Object*)0x0) {
         LOCK();
         pOVar1 = local_68 + -0x10;
         *(long*)pOVar1 = *(long*)pOVar1 + -1;
         UNLOCK();
         if (*(long*)pOVar1 == 0) {
            local_68 = (Object*)0x0;
            Memory::free_static(pOVar46 + -0x10, false);
         }

      }

      lVar44 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar42 = (long*)( local_80 + -0x10 );
         *plVar42 = *plVar42 + -1;
         UNLOCK();
         if (*plVar42 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar44 + -0x10 ), false);
         }

      }

      pauVar28 = local_78;
      if (local_78 != (undefined1(*) [16])0x0) {
         LOCK();
         plVar42 = (long*)( (long)local_78 + -0x10 );
         *plVar42 = *plVar42 + -1;
         UNLOCK();
         if (*plVar42 == 0) {
            local_78 = (undefined1(*) [16])0x0;
            Memory::free_static((void*)( (long)pauVar28 + -0x10 ), false);
         }

      }

      pvVar29 = local_70;
      if (local_70 != (void*)0x0) {
         LOCK();
         plVar42 = (long*)( (long)local_70 + -0x10 );
         *plVar42 = *plVar42 + -1;
         UNLOCK();
         if (*plVar42 == 0) {
            local_70 = (void*)0x0;
            Memory::free_static((void*)( (long)pvVar29 + -0x10 ), false);
         }

      }

      puVar35 = (undefined8*)HashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>>::operator []((HashMap<String,Ref<PacketPeerDTLS>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<PacketPeerDTLS>>>>*)( this + 0x18 ), (String*)&local_88);
      pOVar46 = (Object*)*puVar35;
      if (local_90 != pOVar46) {
         *puVar35 = local_90;
         if (( local_90 != (Object*)0x0 ) && ( cVar30 = cVar30 == '\0' )) {
            *puVar35 = 0;
         }

         if (( ( pOVar46 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)pOVar46 + 0x140 ))(pOVar46);
         Memory::free_static(pOVar46, false);
      }

   }

   lVar44 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar42 = (long*)( local_88 + -0x10 );
      *plVar42 = *plVar42 + -1;
      UNLOCK();
      if (*plVar42 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar44 + -0x10 ), false);
      }

   }

}
if (( ( local_90 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)local_90 + 0x140 ))(local_90);Memory::free_static(local_90, false);}if (( ( local_98 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)local_98 + 0x140 ))(local_98);Memory::free_static(local_98, false);}
  }plVar42 = *(long**)( this + 0x30 );uVar47 = 0x2c;local_78 = (undefined1(*) [16])0x0;if (plVar42 != (long*)0x0) {
   do {
      pOVar46 = (Object*)plVar42[3];
      if (pOVar46 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar27 = (code*)invalidInstructionException();
         ( *pcVar27 )();
      }

      cVar30 = RefCounted::reference();
      if (cVar30 == '\0') {
         pOVar46 = (Object*)0x0;
      }

      ( **(code**)( *(long*)pOVar46 + 400 ) )(pOVar46);
      iVar32 = ( **(code**)( *(long*)pOVar46 + 0x1a8 ) )(pOVar46);
      if (iVar32 == 1) {
         LAB_00103f4b:cVar30 = RefCounted::unreference();
      }
 else {
         iVar32 = ( **(code**)( *(long*)pOVar46 + 0x1a8 ) )(pOVar46);
         if (iVar32 != 2) {
            if (local_78 == (undefined1(*) [16])0x0) {
               local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_78[1] = 0;
               *local_78 = (undefined1[16])0x0;
            }

            pauVar28 = local_78;
            pCVar34 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
            *(undefined1(*) [16])pCVar34 = (undefined1[16])0x0;
            *(undefined1(*) [16])( pCVar34 + 0x10 ) = (undefined1[16])0x0;
            if (plVar42[2] != 0) {
               CowData<char32_t>::_ref(pCVar34, (CowData*)( plVar42 + 2 ));
            }

            lVar44 = *(long*)( *pauVar28 + 8 );
            *(undefined8*)( pCVar34 + 8 ) = 0;
            *(undefined1(**) [16])( pCVar34 + 0x18 ) = pauVar28;
            *(long*)( pCVar34 + 0x10 ) = lVar44;
            if (lVar44 != 0) {
               *(CowData<char32_t>**)( lVar44 + 8 ) = pCVar34;
            }

            lVar44 = *(long*)*pauVar28;
            *(CowData<char32_t>**)( *pauVar28 + 8 ) = pCVar34;
            if (lVar44 == 0) {
               *(CowData<char32_t>**)*pauVar28 = pCVar34;
            }

            *(int*)pauVar28[1] = *(int*)pauVar28[1] + 1;
            goto LAB_00103f4b;
         }

         iVar32 = ( **(code**)( *(long*)pOVar46 + 0x150 ) )(pOVar46);
         if (iVar32 < 1) goto LAB_00103f4b;
         iVar32 = ( **(code**)( *(long*)pOVar46 + 0x158 ) )(pOVar46, &local_70, param_3);
         if (( iVar32 == 0 ) && ( *param_3 <= param_2 )) {
            String::rsplit((char*)&local_68, (bool)( (char)plVar42 + '\x10' ), 0x103496);
            pSVar45 = local_60;
            uVar47 = 0;
            if (( local_60 == (String*)0x0 ) || ( *(long*)( local_60 + -8 ) != 2 )) {
               _err_print_error("recvfrom", "thirdparty/enet/enet_godot.cpp", 0x16e, "Condition \"s.size() != 2\" is true. Continuing.", 0, 0);
               CowData<String>::_unref((CowData<String>*)&local_60);
               goto LAB_00103f4b;
            }

            memcpy(param_1, local_70, (long)*param_3);
            lVar44 = *(long*)( pSVar45 + -8 );
            if (lVar44 < 1) {
               lVar36 = 0;
            }
 else {
               IPAddress::IPAddress((IPAddress*)&local_58, pSVar45);
               *(undefined8*)param_4 = local_58;
               *(undefined8*)( param_4 + 8 ) = uStack_50;
               *(undefined2*)( param_4 + 0x10 ) = local_48;
               if (local_60 == (String*)0x0) {
                  lVar44 = 0;
               }
 else {
                  lVar44 = *(long*)( local_60 + -8 );
                  if (1 < lVar44) {
                     uVar31 = String::to_int();
                     *param_5 = uVar31;
                     CowData<String>::_unref((CowData<String>*)&local_60);
                     cVar30 = RefCounted::unreference();
                     if (( cVar30 != '\0' ) && ( cVar30 = cVar30 != '\0' )) {
                        ( **(code**)( *(long*)pOVar46 + 0x140 ) )(pOVar46);
                        Memory::free_static(pOVar46, false);
                     }

                     break;
                  }

               }

               lVar36 = 1;
            }

            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar36, lVar44, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar27 = (code*)invalidInstructionException();
            ( *pcVar27 )();
         }

         if (local_78 == (undefined1(*) [16])0x0) {
            local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_78[1] = 0;
            *local_78 = (undefined1[16])0x0;
         }

         pauVar28 = local_78;
         pCVar34 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])pCVar34 = (undefined1[16])0x0;
         *(undefined1(*) [16])( pCVar34 + 0x10 ) = (undefined1[16])0x0;
         if (plVar42[2] != 0) {
            CowData<char32_t>::_ref(pCVar34, (CowData*)( plVar42 + 2 ));
         }

         lVar44 = *(long*)( *pauVar28 + 8 );
         *(undefined8*)( pCVar34 + 8 ) = 0;
         *(undefined1(**) [16])( pCVar34 + 0x18 ) = pauVar28;
         *(long*)( pCVar34 + 0x10 ) = lVar44;
         if (lVar44 != 0) {
            *(CowData<char32_t>**)( lVar44 + 8 ) = pCVar34;
         }

         lVar44 = *(long*)*pauVar28;
         *(CowData<char32_t>**)( *pauVar28 + 8 ) = pCVar34;
         if (lVar44 == 0) {
            *(CowData<char32_t>**)*pauVar28 = pCVar34;
         }

         *(int*)pauVar28[1] = *(int*)pauVar28[1] + 1;
         uVar47 = 0x2c;
         *param_3 = 0;
         cVar30 = RefCounted::unreference();
      }

      if (( cVar30 != '\0' ) && ( cVar30 = cVar30 != '\0' )) {
         ( **(code**)( *(long*)pOVar46 + 0x140 ) )(pOVar46);
         Memory::free_static(pOVar46, false);
      }

      plVar42 = (long*)*plVar42;
   }
 while ( plVar42 != (long*)0x0 );
   if (local_78 != (undefined1(*) [16])0x0) {
      pSVar45 = *(String**)*local_78;
      joined_r0x00103bb3:if (pSVar45 != (String*)0x0) {
         LAB_00103bc8:if (( *(long*)( this + 0x20 ) != 0 ) && ( *(int*)( this + 0x44 ) != 0 )) {
            uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );
            lVar44 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );
            uVar33 = String::hash();
            uVar41 = CONCAT44(0, uVar5);
            lVar36 = *(long*)( this + 0x28 );
            uVar37 = 1;
            if (uVar33 != 0) {
               uVar37 = uVar33;
            }

            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar37 * lVar44;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            lVar39 = SUB168(auVar7 * auVar17, 8);
            uVar33 = *(uint*)( lVar36 + lVar39 * 4 );
            uVar38 = SUB164(auVar7 * auVar17, 8);
            if (uVar33 != 0) {
               uVar48 = 0;
               do {
                  if (uVar37 == uVar33) {
                     cVar30 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x20 ) + lVar39 * 8 ) + 0x10 ), pSVar45);
                     if (cVar30 != '\0') goto LAB_00103cc6;
                     lVar36 = *(long*)( this + 0x28 );
                  }

                  uVar48 = uVar48 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(uVar38 + 1) * lVar44;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar41;
                  lVar39 = SUB168(auVar8 * auVar18, 8);
                  uVar33 = *(uint*)( lVar36 + lVar39 * 4 );
                  uVar38 = SUB164(auVar8 * auVar18, 8);
                  if (( uVar33 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar33 * lVar44,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar5 + uVar38 ) - SUB164(auVar9 * auVar19, 8)) * lVar44,auVar20._8_8_ = 0,auVar20._0_8_ = uVar41,SUB164(auVar10 * auVar20, 8) < uVar48) {
                     pSVar45 = *(String**)( pSVar45 + 8 );
                     goto joined_r0x00103bb3;
                  }

               }
 while ( true );
            }

         }

         goto LAB_00103e65;
      }

   }

}
LAB_00103e78:List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_78);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar47;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_00103cc6:lVar44 = *(long*)( this + 0x28 );lVar36 = *(long*)( this + 0x20 );uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x40 ) * 4 );uVar41 = CONCAT44(0, uVar5);lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x40 ) * 8 );auVar11._8_8_ = 0;auVar11._0_8_ = ( ulong )(uVar38 + 1) * lVar39;auVar21._8_8_ = 0;auVar21._0_8_ = uVar41;lVar40 = SUB168(auVar11 * auVar21, 8);puVar2 = (uint*)( lVar44 + lVar40 * 4 );uVar33 = SUB164(auVar11 * auVar21, 8);uVar37 = *puVar2;if (uVar37 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar37 * lVar39;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar41;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar5 + uVar33 ) - SUB164(auVar12 * auVar22, 8)) * lVar39;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar41;
   iVar32 = SUB164(auVar13 * auVar23, 8);
   while (uVar48 = uVar33,iVar32 != 0) {
      puVar3 = (uint*)( lVar44 + (ulong)uVar38 * 4 );
      *puVar2 = *puVar3;
      puVar35 = (undefined8*)( lVar36 + lVar40 * 8 );
      *puVar3 = uVar37;
      puVar4 = (undefined8*)( lVar36 + (ulong)uVar38 * 8 );
      uVar6 = *puVar35;
      *puVar35 = *puVar4;
      *puVar4 = uVar6;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(uVar48 + 1) * lVar39;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar41;
      lVar40 = SUB168(auVar16 * auVar26, 8);
      puVar2 = (uint*)( lVar44 + lVar40 * 4 );
      uVar33 = SUB164(auVar16 * auVar26, 8);
      uVar37 = *puVar2;
      uVar38 = uVar48;
      if (uVar37 == 0) break;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar37 * lVar39;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar41;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar33 + uVar5 ) - SUB164(auVar14 * auVar24, 8)) * lVar39;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar41;
      iVar32 = SUB164(auVar15 * auVar25, 8);
   }
;
}
uVar41 = (ulong)uVar38;plVar42 = (long*)( lVar36 + uVar41 * 8 );*(undefined4*)( lVar44 + uVar41 * 4 ) = 0;plVar43 = (long*)*plVar42;if (*(long**)( this + 0x30 ) == plVar43) {
   *(long*)( this + 0x30 ) = *plVar43;
   plVar43 = (long*)*plVar42;
   if (plVar43 != *(long**)( this + 0x38 )) goto LAB_00103de5;
}
 else if (plVar43 != *(long**)( this + 0x38 )) goto LAB_00103de5;*(long*)( this + 0x38 ) = plVar43[1];plVar43 = (long*)*plVar42;LAB_00103de5:if ((long*)plVar43[1] != (long*)0x0) {
   *(long*)plVar43[1] = *plVar43;
   plVar43 = (long*)*plVar42;
}
if (*plVar43 != 0) {
   *(long*)( *plVar43 + 8 ) = plVar43[1];
   plVar43 = (long*)*plVar42;
}
if (( plVar43[3] != 0 ) && ( cVar30 = cVar30 != '\0' )) {
   pOVar46 = (Object*)plVar43[3];
   cVar30 = predelete_handler(pOVar46);
   if (cVar30 != '\0') {
      ( **(code**)( *(long*)pOVar46 + 0x140 ) )(pOVar46);
      Memory::free_static(pOVar46, false);
   }

}
if (plVar43[2] != 0) {
   LOCK();
   plVar42 = (long*)( plVar43[2] + -0x10 );
   *plVar42 = *plVar42 + -1;
   UNLOCK();
   if (*plVar42 == 0) {
      lVar44 = plVar43[2];
      plVar43[2] = 0;
      Memory::free_static((void*)( lVar44 + -0x10 ), false);
   }

}
Memory::free_static(plVar43, false);*(undefined8*)( *(long*)( this + 0x20 ) + uVar41 * 8 ) = 0;*(int*)( this + 0x44 ) = *(int*)( this + 0x44 ) + -1;LAB_00103e65:pSVar45 = *(String**)( pSVar45 + 8 );if (pSVar45 == (String*)0x0) goto LAB_00103e78;goto LAB_00103bc8;}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ENetDTLSServer::ENetDTLSServer(ENetUDP*, Ref<TLSOptions>) */void ENetDTLSServer::ENetDTLSServer(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ENetDTLSClient::~ENetDTLSClient() */void ENetDTLSClient::~ENetDTLSClient(ENetDTLSClient *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ENetDTLSServer::~ENetDTLSServer() */void ENetDTLSServer::~ENetDTLSServer(ENetDTLSServer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ENetUDP::~ENetUDP() */void ENetUDP::~ENetUDP(ENetUDP *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

