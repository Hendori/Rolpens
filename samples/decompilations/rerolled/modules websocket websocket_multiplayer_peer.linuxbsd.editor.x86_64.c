/* WebSocketMultiplayerPeer::get_available_packet_count() const */undefined4 WebSocketMultiplayerPeer::get_available_packet_count(WebSocketMultiplayerPeer *this) {
   undefined4 uVar1;
   uVar1 = 0;
   if (*(long*)( this + 0x200 ) != 0) {
      uVar1 = *(undefined4*)( *(long*)( this + 0x200 ) + 0x10 );
   }

   return uVar1;
}
/* WebSocketMultiplayerPeer::set_target_peer(int) */void WebSocketMultiplayerPeer::set_target_peer(WebSocketMultiplayerPeer *this, int param_1) {
   *(int*)( this + 0x250 ) = param_1;
   return;
}
/* WebSocketMultiplayerPeer::get_unique_id() const */undefined4 WebSocketMultiplayerPeer::get_unique_id(WebSocketMultiplayerPeer *this) {
   return *(undefined4*)( this + 0x254 );
}
/* WebSocketMultiplayerPeer::is_server() const */bool WebSocketMultiplayerPeer::is_server(WebSocketMultiplayerPeer *this) {
   return *(long*)( this + 0x1e8 ) != 0;
}
/* WebSocketMultiplayerPeer::get_connection_status() const */undefined4 WebSocketMultiplayerPeer::get_connection_status(WebSocketMultiplayerPeer *this) {
   return *(undefined4*)( this + 0x1f8 );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WebSocketMultiplayerPeer::get_handshake_timeout() const */undefined8 WebSocketMultiplayerPeer::get_handshake_timeout(WebSocketMultiplayerPeer *this) {
   ulong uVar1;
   uVar1 = *(ulong*)( this + 0x1a8 );
   if (-1 < (long)uVar1) {
      return CONCAT44((int)( ( ulong )((double)(long)uVar1 / __LC0) >> 0x20 ), (float)( (double)(long)uVar1 / __LC0 ));
   }

   return CONCAT44((int)( ( ulong )((double)uVar1 / __LC0) >> 0x20 ), (float)( (double)uVar1 / __LC0 ));
}
/* WebSocketMultiplayerPeer::set_supported_protocols(Vector<String> const&) */void WebSocketMultiplayerPeer::set_supported_protocols(Vector *param_1) {
   WebSocketPeer::set_supported_protocols(*(Vector**)( param_1 + 0x1b0 ));
   return;
}
/* WebSocketMultiplayerPeer::set_handshake_headers(Vector<String> const&) */void WebSocketMultiplayerPeer::set_handshake_headers(Vector *param_1) {
   WebSocketPeer::set_handshake_headers(*(Vector**)( param_1 + 0x1b0 ));
   return;
}
/* WebSocketMultiplayerPeer::set_inbound_buffer_size(int) */void WebSocketMultiplayerPeer::set_inbound_buffer_size(int param_1) {
   undefined4 in_register_0000003c;
   WebSocketPeer::set_inbound_buffer_size((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x1b0 ));
   return;
}
/* WebSocketMultiplayerPeer::set_outbound_buffer_size(int) */void WebSocketMultiplayerPeer::set_outbound_buffer_size(int param_1) {
   undefined4 in_register_0000003c;
   WebSocketPeer::set_outbound_buffer_size((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x1b0 ));
   return;
}
/* WebSocketMultiplayerPeer::set_max_queued_packets(int) */void WebSocketMultiplayerPeer::set_max_queued_packets(int param_1) {
   undefined4 in_register_0000003c;
   WebSocketPeer::set_max_queued_packets((int)*(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x1b0 ));
   return;
}
/* WebSocketMultiplayerPeer::get_supported_protocols() const */WebSocketMultiplayerPeer * __thiscall
WebSocketMultiplayerPeer::get_supported_protocols(WebSocketMultiplayerPeer *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   WebSocketPeer::get_supported_protocols();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::get_handshake_headers() const */WebSocketMultiplayerPeer * __thiscall
WebSocketMultiplayerPeer::get_handshake_headers(WebSocketMultiplayerPeer *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   WebSocketPeer::get_handshake_headers();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::get_outbound_buffer_size() const */void WebSocketMultiplayerPeer::get_outbound_buffer_size(void) {
   WebSocketPeer::get_outbound_buffer_size();
   return;
}
/* WebSocketMultiplayerPeer::get_max_packet_size() const */int WebSocketMultiplayerPeer::get_max_packet_size(void) {
   int iVar1;
   iVar1 = WebSocketPeer::get_outbound_buffer_size();
   return iVar1 + -9;
}
/* WebSocketMultiplayerPeer::get_inbound_buffer_size() const */void WebSocketMultiplayerPeer::get_inbound_buffer_size(void) {
   WebSocketPeer::get_inbound_buffer_size();
   return;
}
/* WebSocketMultiplayerPeer::get_max_queued_packets() const */void WebSocketMultiplayerPeer::get_max_queued_packets(void) {
   WebSocketPeer::get_max_queued_packets();
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WebSocketMultiplayerPeer::set_handshake_timeout(float) */void WebSocketMultiplayerPeer::set_handshake_timeout(WebSocketMultiplayerPeer *this, float param_1) {
   float fVar1;
   if (param_1 <= 0.0) {
      _err_print_error("set_handshake_timeout", "modules/websocket/websocket_multiplayer_peer.cpp", 0x1d4, "Condition \"p_timeout <= 0.0\" is true.", 0, 0);
      return;
   }

   fVar1 = param_1 * __LC5;
   if (__LC6 <= fVar1) {
      *(long*)( this + 0x1a8 ) = (long)( fVar1 - __LC6 );
      *(ulong*)( this + 0x1a8 ) = *(ulong*)( this + 0x1a8 ) ^ 0x8000000000000000;
      return;
   }

   *(long*)( this + 0x1a8 ) = (long)fVar1;
   return;
}
/* WebSocketMultiplayerPeer::get_packet_peer() const */undefined4 WebSocketMultiplayerPeer::get_packet_peer(WebSocketMultiplayerPeer *this) {
   undefined8 *puVar1;
   puVar1 = *(undefined8**)( this + 0x200 );
   if (( puVar1 != (undefined8*)0x0 ) && ( *(int*)( puVar1 + 2 ) != 0 )) {
      return *(undefined4*)*puVar1;
   }

   _err_print_error("get_packet_peer", "modules/websocket/websocket_multiplayer_peer.cpp", 0xa8, "Condition \"incoming_packets.is_empty()\" is true. Returning: 1", 0, 0);
   return 1;
}
/* HashMap<int, WebSocketMultiplayerPeer::PendingPeer, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   WebSocketMultiplayerPeer::PendingPeer> > >::_lookup_pos(int const&, unsigned int&) const [clone
   .isra.0] */undefined8 HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>::_lookup_pos(HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>> *this, int *param_1, uint *param_2) {
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
/* HashMap<int, Ref<WebSocketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<WebSocketPeer> > > >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */undefined8 HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::_lookup_pos(HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>> *this, int *param_1, uint *param_2) {
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
/* Error Object::emit_signal<int>(StringName const&, int) [clone .isra.0] */void Object::emit_signal<int>(Object *this, StringName *param_1, int param_2) {
   char cVar1;
   long in_FS_OFFSET;
   Variant *local_68[2];
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_2);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   local_68[0] = (Variant*)local_58;
   ( **(code**)( *(long*)this + 0xd0 ) )(this, param_1, local_68, 1);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WebSocketMultiplayerPeer::get_packet(unsigned char const**, int&) */undefined4 WebSocketMultiplayerPeer::get_packet(WebSocketMultiplayerPeer *this, uchar **param_1, int *param_2) {
   void *pvVar1;
   long *plVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   if (*(code**)( *(long*)this + 0x210 ) == get_connection_status) {
      iVar6 = *(int*)( this + 0x1f8 );
   }
 else {
      iVar6 = ( **(code**)( *(long*)this + 0x210 ) )();
   }

   if (iVar6 != 2) {
      _err_print_error("get_packet", "modules/websocket/websocket_multiplayer_peer.cpp", 0x77, "Condition \"get_connection_status() != CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED", 0, 0);
      return 3;
   }

   pvVar1 = *(void**)( this + 0x240 );
   *param_2 = 0;
   if (pvVar1 != (void*)0x0) {
      Memory::free_static(pvVar1, false);
      *(undefined8*)( this + 0x240 ) = 0;
   }

   plVar2 = *(long**)( this + 0x200 );
   if (( plVar2 != (long*)0x0 ) && ( (int)plVar2[2] != 0 )) {
      puVar3 = (undefined8*)*plVar2;
      uVar5 = puVar3[1];
      *(undefined8*)( this + 0x238 ) = *puVar3;
      *(undefined8*)( this + 0x240 ) = uVar5;
      *(undefined4*)( this + 0x248 ) = *(undefined4*)( puVar3 + 2 );
      if (plVar2 == (long*)puVar3[5]) {
         lVar7 = puVar3[3];
         lVar4 = puVar3[4];
         *plVar2 = lVar7;
         if (puVar3 == (undefined8*)plVar2[1]) {
            plVar2[1] = lVar4;
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x18 ) = lVar7;
            lVar7 = puVar3[3];
         }

         if (lVar7 != 0) {
            *(long*)( lVar7 + 0x20 ) = lVar4;
         }

         Memory::free_static(puVar3, false);
         *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      if (*(int*)( (long)*(void**)( this + 0x200 ) + 0x10 ) == 0) {
         Memory::free_static(*(void**)( this + 0x200 ), false);
         *(undefined8*)( this + 0x200 ) = 0;
      }

      *param_1 = *(uchar**)( this + 0x240 );
      *param_2 = *(int*)( this + 0x248 );
      return 0;
   }

   _err_print_error("get_packet", "modules/websocket/websocket_multiplayer_peer.cpp", 0x80, "Condition \"incoming_packets.is_empty()\" is true. Returning: ERR_UNAVAILABLE", 0, 0);
   return 2;
}
/* void Ref<StreamPeer>::TEMPNAMEPLACEHOLDERVALUE(Ref<StreamPeerTCP> const&) [clone .isra.0] */void Ref<StreamPeer>::operator =(Ref<StreamPeer> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &StreamPeer::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* Ref<WebSocketPeer>::TEMPNAMEPLACEHOLDERVALUE(Ref<WebSocketPeer> const&) [clone .isra.0] */void Ref<WebSocketPeer>::operator =(Ref<WebSocketPeer> *this, Ref *param_1) {
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
/* HashMap<int, Ref<WebSocketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<WebSocketPeer> > > >::erase(int const&) [clone
   .isra.0] */void HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::erase(HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>> *this, int *param_1) {
   uint *puVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   long *plVar12;
   Object *pOVar13;
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
   uint uVar26;
   char cVar27;
   uint uVar28;
   int iVar29;
   long lVar30;
   ulong uVar31;
   long *plVar32;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = 0;
   cVar27 = _lookup_pos(this, (int*)( ulong )(uint) * param_1, &local_44);
   if (cVar27 == '\0') goto LAB_00100a9c;
   lVar8 = *(long*)( this + 0x10 );
   lVar9 = *(long*)( this + 8 );
   uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar31 = CONCAT44(0, uVar6);
   lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(local_44 + 1) * lVar10;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar31;
   lVar30 = SUB168(auVar14 * auVar20, 8);
   puVar1 = (uint*)( lVar8 + lVar30 * 4 );
   uVar28 = SUB164(auVar14 * auVar20, 8);
   uVar7 = *puVar1;
   if (uVar7 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar7 * lVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar6 + uVar28 ) - SUB164(auVar15 * auVar21, 8)) * lVar10;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      iVar29 = SUB164(auVar16 * auVar22, 8);
      while (uVar26 = uVar28,iVar29 != 0) {
         puVar2 = (uint*)( lVar8 + (ulong)local_44 * 4 );
         *puVar1 = *puVar2;
         puVar3 = (undefined8*)( lVar9 + lVar30 * 8 );
         *puVar2 = uVar7;
         puVar4 = (undefined8*)( lVar9 + (ulong)local_44 * 8 );
         uVar11 = *puVar3;
         *puVar3 = *puVar4;
         *puVar4 = uVar11;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = ( ulong )(uVar26 + 1) * lVar10;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar31;
         lVar30 = SUB168(auVar19 * auVar25, 8);
         puVar1 = (uint*)( lVar8 + lVar30 * 4 );
         uVar28 = SUB164(auVar19 * auVar25, 8);
         uVar7 = *puVar1;
         local_44 = uVar26;
         if (uVar7 == 0) break;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar7 * lVar10;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar31;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(( uVar28 + uVar6 ) - SUB164(auVar17 * auVar23, 8)) * lVar10;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar31;
         iVar29 = SUB164(auVar18 * auVar24, 8);
      }
;
   }

   uVar31 = (ulong)local_44;
   plVar5 = (long*)( lVar9 + uVar31 * 8 );
   *(undefined4*)( lVar8 + uVar31 * 4 ) = 0;
   plVar32 = (long*)*plVar5;
   if (*(long**)( this + 0x18 ) == plVar32) {
      *(long*)( this + 0x18 ) = *plVar32;
      plVar32 = (long*)*plVar5;
      if (*(long**)( this + 0x20 ) != plVar32) goto LAB_00100a46;
      LAB_00100ac0:*(long*)( this + 0x20 ) = plVar32[1];
      plVar32 = (long*)*plVar5;
      plVar12 = (long*)plVar32[1];
   }
 else {
      if (*(long**)( this + 0x20 ) == plVar32) goto LAB_00100ac0;
      LAB_00100a46:plVar12 = (long*)plVar32[1];
   }

   if (plVar12 != (long*)0x0) {
      *plVar12 = *plVar32;
      plVar32 = (long*)*plVar5;
   }

   if (*plVar32 != 0) {
      *(long*)( *plVar32 + 8 ) = plVar32[1];
      plVar32 = (long*)*plVar5;
   }

   if (( plVar32[3] != 0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0') {
      pOVar13 = (Object*)plVar32[3];
      cVar27 = predelete_handler(pOVar13);
      if (cVar27 != '\0') {
         ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
         Memory::free_static(pOVar13, false);
      }

   }

   Memory::free_static(plVar32, false);
   *(undefined8*)( *(long*)( this + 8 ) + uVar31 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   LAB_00100a9c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WebSocketMultiplayerPeer::get_peer(int) const */long *WebSocketMultiplayerPeer::get_peer(int param_1) {
   long lVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   char cVar12;
   uint uVar13;
   uint in_EDX;
   int iVar14;
   ulong uVar15;
   long lVar16;
   uint uVar17;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar18;
   ulong uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   plVar18 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_RSI + 0x210 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( lVar1 != 0 ) && ( *(int*)( in_RSI + 0x234 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x230 ) * 8 );
      uVar13 = ( in_EDX >> 0x10 ^ in_EDX ) * -0x7a143595;
      uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar17 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
         uVar17 = 1;
         uVar15 = uVar2;
      }
 else {
         uVar15 = uVar17 * uVar2;
      }

      uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x230 ) * 4 ));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar19;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar16 = SUB168(auVar3 * auVar7, 8);
      uVar13 = *(uint*)( *(long*)( in_RSI + 0x218 ) + lVar16 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar13 != 0) {
         uVar20 = 0;
         do {
            if (( uVar17 == uVar13 ) && ( *(uint*)( *(long*)( lVar1 + lVar16 * 8 ) + 0x10 ) == in_EDX )) {
               local_44 = 0;
               cVar12 = HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::_lookup_pos((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( in_RSI + 0x208 ), (int*)(ulong)in_EDX, &local_44);
               if (cVar12 == '\0') {
                  _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar11 = (code*)invalidInstructionException();
                  ( *pcVar11 )();
               }

               lVar1 = *(long*)( lVar1 + (ulong)local_44 * 8 );
               *plVar18 = 0;
               lVar1 = *(long*)( lVar1 + 0x18 );
               if (lVar1 != 0) {
                  *plVar18 = lVar1;
                  cVar12 = RefCounted::reference();
                  if (cVar12 == '\0') {
                     *plVar18 = 0;
                  }

               }

               goto LAB_00100cb4;
            }

            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( iVar14 + 1 ) * uVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar19;
            lVar16 = SUB168(auVar4 * auVar8, 8);
            uVar13 = *(uint*)( *(long*)( in_RSI + 0x218 ) + lVar16 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar13 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x230 ) * 4 ) + iVar14 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,uVar20 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("get_peer", "modules/websocket/websocket_multiplayer_peer.cpp", 0x1a3, "Condition \"!peers_map.has(p_id)\" is true. Returning: Ref<WebSocketPeer>()", 0, 0);
   *plVar18 = 0;
   LAB_00100cb4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return plVar18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::get_peer_port(int) const */undefined2 WebSocketMultiplayerPeer::get_peer_port(WebSocketMultiplayerPeer *this, int param_1) {
   uint uVar1;
   long lVar2;
   ulong uVar3;
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
   code *pcVar19;
   undefined2 uVar20;
   uint uVar21;
   uint uVar22;
   uint uVar23;
   long lVar24;
   long lVar25;
   uint uVar26;
   ulong uVar27;
   uint uVar28;
   ulong uVar29;
   uint uVar30;
   lVar2 = *(long*)( this + 0x210 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x234 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
      uVar29 = CONCAT44(0, uVar1);
      uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x230 ) * 8 );
      uVar21 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar21 = ( uVar21 ^ uVar21 >> 0xd ) * -0x3d4d51cb;
      uVar30 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
         uVar30 = 1;
         uVar27 = uVar3;
      }
 else {
         uVar27 = uVar30 * uVar3;
      }

      lVar4 = *(long*)( this + 0x218 );
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar29;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar27;
      lVar24 = SUB168(auVar5 * auVar12, 8);
      uVar21 = *(uint*)( lVar4 + lVar24 * 4 );
      uVar22 = SUB164(auVar5 * auVar12, 8);
      if (uVar21 != 0) {
         uVar26 = 0;
         lVar25 = lVar24;
         uVar28 = uVar21;
         uVar23 = uVar22;
         do {
            if (( uVar28 == uVar30 ) && ( *(int*)( *(long*)( lVar2 + lVar25 * 8 ) + 0x10 ) == param_1 )) {
               uVar28 = 0;
               goto LAB_00100ee7;
            }

            uVar26 = uVar26 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( uVar23 + 1 ) * uVar3;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar29;
            lVar25 = SUB168(auVar6 * auVar13, 8);
            uVar28 = *(uint*)( lVar4 + lVar25 * 4 );
            uVar23 = SUB164(auVar6 * auVar13, 8);
         }
 while ( ( uVar28 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar28 * uVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar29,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( uVar1 + uVar23 ) - SUB164(auVar7 * auVar14, 8) ) * uVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar29,uVar26 <= SUB164(auVar8 * auVar15, 8) );
      }

   }

   _err_print_error("get_peer_port", "modules/websocket/websocket_multiplayer_peer.cpp", 0x1de, "Condition \"!peers_map.has(p_peer_id)\" is true. Returning: 0", 0, 0);
   return 0;
   while (true) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar21 * uVar3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar29;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ( uVar1 + uVar22 ) - SUB164(auVar10 * auVar17, 8) ) * uVar3;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar29;
      if (SUB164(auVar11 * auVar18, 8) < uVar28) break;
      LAB_00100ee7:if (( uVar30 == uVar21 ) && ( *(int*)( *(long*)( lVar2 + lVar24 * 8 ) + 0x10 ) == param_1 )) {
         uVar20 = ( **(code**)( **(long**)( *(long*)( lVar2 + (ulong)uVar22 * 8 ) + 0x18 ) + 0x1c0 ) )();
         return uVar20;
      }

      uVar28 = uVar28 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = ( uVar22 + 1 ) * uVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar29;
      lVar24 = SUB168(auVar9 * auVar16, 8);
      uVar21 = *(uint*)( lVar4 + lVar24 * 4 );
      uVar22 = SUB164(auVar9 * auVar16, 8);
      if (uVar21 == 0) break;
   }
;
   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar19 = (code*)invalidInstructionException();
   ( *pcVar19 )();
}
/* WebSocketMultiplayerPeer::get_peer_address(int) const */undefined8 WebSocketMultiplayerPeer::get_peer_address(int param_1) {
   uint uVar1;
   long lVar2;
   long lVar3;
   ulong uVar4;
   long lVar5;
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
   code *pcVar20;
   uint uVar21;
   uint in_EDX;
   uint uVar22;
   uint uVar23;
   long lVar24;
   long lVar25;
   uint uVar26;
   long in_RSI;
   ulong uVar27;
   uint uVar28;
   undefined4 in_register_0000003c;
   ulong uVar29;
   uint uVar30;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( in_RSI + 0x210 );
   if (( lVar3 != 0 ) && ( *(int*)( in_RSI + 0x234 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x230 ) * 4 );
      uVar29 = CONCAT44(0, uVar1);
      uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x230 ) * 8 );
      uVar21 = ( in_EDX >> 0x10 ^ in_EDX ) * -0x7a143595;
      uVar21 = ( uVar21 ^ uVar21 >> 0xd ) * -0x3d4d51cb;
      uVar30 = uVar21 ^ uVar21 >> 0x10;
      if (uVar21 == uVar21 >> 0x10) {
         uVar30 = 1;
         uVar27 = uVar4;
      }
 else {
         uVar27 = uVar30 * uVar4;
      }

      lVar5 = *(long*)( in_RSI + 0x218 );
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar29;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar27;
      lVar24 = SUB168(auVar6 * auVar13, 8);
      uVar21 = *(uint*)( lVar5 + lVar24 * 4 );
      uVar22 = SUB164(auVar6 * auVar13, 8);
      if (uVar21 != 0) {
         uVar26 = 0;
         lVar25 = lVar24;
         uVar28 = uVar21;
         uVar23 = uVar22;
         do {
            if (( uVar30 == uVar28 ) && ( *(uint*)( *(long*)( lVar3 + lVar25 * 8 ) + 0x10 ) == in_EDX )) {
               uVar28 = 0;
               goto LAB_00101137;
            }

            uVar26 = uVar26 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( uVar23 + 1 ) * uVar4;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar29;
            lVar25 = SUB168(auVar7 * auVar14, 8);
            uVar28 = *(uint*)( lVar5 + lVar25 * 4 );
            uVar23 = SUB164(auVar7 * auVar14, 8);
         }
 while ( ( uVar28 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar28 * uVar4,auVar15._8_8_ = 0,auVar15._0_8_ = uVar29,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( uVar1 + uVar23 ) - SUB164(auVar8 * auVar15, 8) ) * uVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar29,uVar26 <= SUB164(auVar9 * auVar16, 8) );
      }

   }

   _err_print_error("get_peer_address", "modules/websocket/websocket_multiplayer_peer.cpp", 0x1d9, "Condition \"!peers_map.has(p_peer_id)\" is true. Returning: IPAddress()", 0, 0);
   IPAddress::clear();
   LAB_0010115f:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(in_register_0000003c, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar21 * uVar4;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar29;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ( uVar1 + uVar22 ) - SUB164(auVar11 * auVar18, 8) ) * uVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar29;
      if (SUB164(auVar12 * auVar19, 8) < uVar28) break;
      LAB_00101137:if (( uVar30 == uVar21 ) && ( *(uint*)( *(long*)( lVar3 + lVar24 * 8 ) + 0x10 ) == in_EDX )) {
         ( **(code**)( **(long**)( *(long*)( lVar3 + (ulong)uVar22 * 8 ) + 0x18 ) + 0x1b8 ) )(CONCAT44(in_register_0000003c, param_1));
         goto LAB_0010115f;
      }

      uVar28 = uVar28 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( uVar22 + 1 ) * uVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar29;
      lVar24 = SUB168(auVar10 * auVar17, 8);
      uVar21 = *(uint*)( lVar5 + lVar24 * 4 );
      uVar22 = SUB164(auVar10 * auVar17, 8);
      if (uVar21 == 0) break;
   }
;
   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar20 = (code*)invalidInstructionException();
   ( *pcVar20 )();
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
/* WebSocketMultiplayerPeer::WebSocketMultiplayerPeer() */void WebSocketMultiplayerPeer::WebSocketMultiplayerPeer(WebSocketMultiplayerPeer *this) {
   undefined8 uVar1;
   code *pcVar2;
   char cVar3;
   Object *pOVar4;
   Object *pOVar5;
   Object *pOVar6;
   RefCounted::RefCounted((RefCounted*)this);
   this[0x1a0] = (WebSocketMultiplayerPeer)0x0;
   *(undefined8*)( this + 0x17c ) = 0x80000000000000;
   *(undefined8*)( this + 0x198 ) = 0x200000000;
   *(undefined***)this = &PTR__initialize_classv_00112f30;
   uVar1 = _LC26;
   *(undefined8*)( this + 400 ) = 0;
   *(undefined8*)( this + 0x1e0 ) = uVar1;
   *(undefined8*)( this + 0x230 ) = uVar1;
   pcVar2 = WebSocketPeer::_create;
   *(undefined8*)( this + 0x1a8 ) = 3000;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined4*)( this + 0x1f8 ) = 0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined4*)( this + 0x238 ) = 0;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined4*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x250 ) = 0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x210 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
   if (pcVar2 == (code*)0x0) {
      return;
   }

   pOVar4 = (Object*)( *pcVar2 )(1);
   if (( pOVar4 == (Object*)0x0 ) || ( cVar3 = RefCounted::init_ref() ),cVar3 == '\0') {
      pOVar6 = *(Object**)( this + 0x1b0 );
      if (pOVar6 == (Object*)0x0) {
         return;
      }

      *(undefined8*)( this + 0x1b0 ) = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') {
         return;
      }

      pOVar4 = (Object*)0x0;
      cVar3 = predelete_handler(pOVar6);
      if (cVar3 == '\0') {
         return;
      }

      LAB_00101466:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
      if (pOVar4 == (Object*)0x0) {
         return;
      }

      cVar3 = RefCounted::unreference();
      pOVar5 = pOVar4;
   }
 else {
      pOVar6 = *(Object**)( this + 0x1b0 );
      pOVar5 = pOVar6;
      if (pOVar4 != pOVar6) {
         *(Object**)( this + 0x1b0 ) = pOVar4;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x1b0 ) = 0;
         }

         pOVar5 = pOVar4;
         if (( ( pOVar6 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) goto LAB_00101466;
      }

      cVar3 = RefCounted::unreference();
   }

   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),cVar3 != '\0') {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
      return;
   }

   return;
}
/* WebSocketMultiplayerPeer::_clear() */void WebSocketMultiplayerPeer::_clear(WebSocketMultiplayerPeer *this) {
   uint uVar1;
   void *pvVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   long *plVar7;
   *(undefined4*)( this + 0x1f8 ) = 0;
   *(undefined4*)( this + 0x254 ) = 0;
   if (( *(long*)( this + 0x210 ) != 0 ) && ( *(int*)( this + 0x234 ) != 0 )) {
      lVar6 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x218 ) + lVar6 ) != 0) {
               *(int*)( *(long*)( this + 0x218 ) + lVar6 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x210 ) + lVar6 * 2 );
               if (( *(long*)( (long)pvVar2 + 0x18 ) != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
                  pOVar4 = *(Object**)( (long)pvVar2 + 0x18 );
                  cVar5 = predelete_handler(pOVar4);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }

               }

               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x210 ) + lVar6 * 2 ) = 0;
            }

            lVar6 = lVar6 + 4;
         }
 while ( lVar6 != (ulong)uVar1 << 2 );
      }

      *(undefined4*)( this + 0x234 ) = 0;
      *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0x1e8 ) != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
      pOVar4 = *(Object**)( this + 0x1e8 );
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   *(undefined8*)( this + 0x1e8 ) = 0;
   if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      lVar6 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x1c8 ) + lVar6 ) != 0) {
               *(int*)( *(long*)( this + 0x1c8 ) + lVar6 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x1c0 ) + lVar6 * 2 );
               for (int i = 0; i < 3; i++) {
                  if (( *(long*)( (long)pvVar2 + ( -8*i + 48 ) ) != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
                     pOVar4 = *(Object**)( (long)pvVar2 + ( -8*i + 48 ) );
                     cVar5 = predelete_handler(pOVar4);
                     if (cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 320 ) )(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                  }

               }

               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x1c0 ) + lVar6 * 2 ) = 0;
            }

            lVar6 = lVar6 + 4;
         }
 while ( lVar6 != (ulong)uVar1 << 2 );
      }

      *(undefined4*)( this + 0x1e4 ) = 0;
      *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0x1f0 ) != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
      pOVar4 = *(Object**)( this + 0x1f0 );
      cVar5 = predelete_handler(pOVar4);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   *(undefined8*)( this + 0x1f0 ) = 0;
   if (*(void**)( this + 0x240 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x240 ), false);
      *(undefined8*)( this + 0x240 ) = 0;
   }

   plVar7 = *(long**)( this + 0x200 );
   if (plVar7 != (long*)0x0) {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
         do {
            Memory::free_static(*(void**)( lVar6 + 8 ), false);
            *(undefined8*)( lVar6 + 8 ) = 0;
            lVar6 = *(long*)( lVar6 + 0x18 );
         }
 while ( lVar6 != 0 );
         plVar7 = *(long**)( this + 0x200 );
      }

      if (plVar7 != (long*)0x0) {
         do {
            pvVar2 = (void*)*plVar7;
            if (pvVar2 == (void*)0x0) {
               return;
            }

            if (plVar7 == *(long**)( (long)pvVar2 + 0x28 )) {
               lVar6 = *(long*)( (long)pvVar2 + 0x18 );
               lVar3 = *(long*)( (long)pvVar2 + 0x20 );
               *plVar7 = lVar6;
               if (pvVar2 == (void*)plVar7[1]) {
                  plVar7[1] = lVar3;
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 0x18 ) = lVar6;
                  lVar6 = *(long*)( (long)pvVar2 + 0x18 );
               }

               if (lVar6 != 0) {
                  *(long*)( lVar6 + 0x20 ) = lVar3;
               }

               Memory::free_static(pvVar2, false);
               *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            plVar7 = *(long**)( this + 0x200 );
         }
 while ( (int)plVar7[2] != 0 );
         Memory::free_static(plVar7, false);
         *(undefined8*)( this + 0x200 ) = 0;
      }

   }

   return;
}
/* WebSocketMultiplayerPeer::~WebSocketMultiplayerPeer() */void WebSocketMultiplayerPeer::~WebSocketMultiplayerPeer(WebSocketMultiplayerPeer *this) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   void *pvVar7;
   *(undefined***)this = &PTR__initialize_classv_00112f30;
   _clear(this);
   pvVar7 = *(void**)( this + 0x210 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x234 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x234 ) = 0;
            *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x218 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x218 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x210 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar5 );
            *(undefined4*)( this + 0x234 ) = 0;
            *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_001019df;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x218 ), false);
   }

   LAB_001019df:plVar6 = *(long**)( this + 0x200 );
   if (plVar6 != (long*)0x0) {
      do {
         pvVar7 = (void*)*plVar6;
         if (pvVar7 == (void*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00101a51;
            }

            break;
         }

         if (*(long**)( (long)pvVar7 + 0x28 ) == plVar6) {
            lVar5 = *(long*)( (long)pvVar7 + 0x18 );
            lVar2 = *(long*)( (long)pvVar7 + 0x20 );
            *plVar6 = lVar5;
            if (pvVar7 == (void*)plVar6[1]) {
               plVar6[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x18 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar7 + 0x18 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x20 ) = lVar2;
            }

            Memory::free_static(pvVar7, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0x200 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_00101a51:if (*(long*)( this + 0x1f0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x1f0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x1e8 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x1e8 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   pvVar7 = *(void**)( this + 0x1c0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x1e4 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1e4 ) = 0;
            *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1c8 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x1c8 ) + lVar5 ) = 0;
                  for (int i = 0; i < 3; i++) {
                     if (*(long*)( (long)pvVar7 + ( -8*i + 48 ) ) != 0) {
                        cVar4 = RefCounted::unreference();
                        if (cVar4 != '\0') {
                           pOVar3 = *(Object**)( (long)pvVar7 + ( -8*i + 48 ) );
                           cVar4 = predelete_handler(pOVar3);
                           if (cVar4 != '\0') {
                              ( **(code**)( *(long*)pOVar3 + 320 ) )(pOVar3);
                              Memory::free_static(pOVar3, false);
                           }

                        }

                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x1c0 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1e4 ) = 0;
            *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00101b70;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x1c8 ), false);
   }

   LAB_00101b70:if (*(long*)( this + 0x1b0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x1b0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   *(code**)this = TCPServer::TCPServer;
   if (*(long*)( this + 400 ) != 0) {
      LOCK();
      plVar6 = (long*)( *(long*)( this + 400 ) + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         lVar5 = *(long*)( this + 400 );
         *(undefined8*)( this + 400 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00112dd0;
   Object::~Object((Object*)this);
   return;
}
/* WebSocketMultiplayerPeer::~WebSocketMultiplayerPeer() */void WebSocketMultiplayerPeer::~WebSocketMultiplayerPeer(WebSocketMultiplayerPeer *this) {
   ~WebSocketMultiplayerPeer(this)
   ;;
   operator_delete(this, 600);
   return;
}
/* WebSocketMultiplayerPeer::close() */void WebSocketMultiplayerPeer::close(WebSocketMultiplayerPeer *this) {
   _clear(this);
   return;
}
/* WebSocketMultiplayerPeer::create_server(int, IPAddress, Ref<TLSOptions>) */int WebSocketMultiplayerPeer::create_server(WebSocketMultiplayerPeer *param_1, ulong param_2, long *param_3) {
   char cVar1;
   int iVar2;
   TCPServer *this;
   Object *pOVar3;
   Object *pOVar4;
   if (*(code**)( *(long*)param_1 + 0x210 ) == get_connection_status) {
      iVar2 = *(int*)( param_1 + 0x1f8 );
   }
 else {
      iVar2 = ( **(code**)( *(long*)param_1 + 0x210 ) )();
   }

   if (iVar2 != 0) {
      _err_print_error("create_server", "modules/websocket/websocket_multiplayer_peer.cpp", 0xb6, "Condition \"get_connection_status() != CONNECTION_DISCONNECTED\" is true. Returning: ERR_ALREADY_IN_USE", 0, 0);
      return 0x16;
   }

   if (( *param_3 != 0 ) && ( *(int*)( *param_3 + 0x17c ) != 2 )) {
      _err_print_error("create_server", "modules/websocket/websocket_multiplayer_peer.cpp", 0xb7, "Condition \"p_options.is_valid() && !p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   _clear(param_1);
   this(TCPServer * operator_new(0x188, ""));
   TCPServer::TCPServer(this);
   postinitialize_handler((Object*)this);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)( param_1 + 0x1e8 );
      if (pOVar3 == (Object*)0x0) goto LAB_00101f3a;
      *(undefined8*)( param_1 + 0x1e8 ) = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         this(TCPServer * 0x0);
         cVar1 = predelete_handler(pOVar3);
         if (cVar1 != '\0') goto LAB_00102143;
      }

   }
 else {
      pOVar3 = *(Object**)( param_1 + 0x1e8 );
      pOVar4 = pOVar3;
      if (this != (TCPServer*)pOVar3) {
         *(TCPServer**)( param_1 + 0x1e8 ) = this;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)( param_1 + 0x1e8 ) = 0;
         }

         pOVar4 = (Object*)this;
         if (( ( pOVar3 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) {
            LAB_00102143:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
            pOVar4 = (Object*)this;
            if (this == (TCPServer*)0x0) goto LAB_00101f33;
         }

      }

      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar4) ),cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   LAB_00101f33:pOVar3 = *(Object**)( param_1 + 0x1e8 );
   LAB_00101f3a:iVar2 = TCPServer::listen((ushort)pOVar3, (IPAddress*)( param_2 & 0xffff ));
   if (iVar2 == 0) {
      pOVar3 = (Object*)*param_3;
      pOVar4 = *(Object**)( param_1 + 0x1f0 );
      *(undefined4*)( param_1 + 0x254 ) = 1;
      *(undefined4*)( param_1 + 0x1f8 ) = 2;
      if (pOVar3 != pOVar4) {
         *(Object**)( param_1 + 0x1f0 ) = pOVar3;
         if (( pOVar3 != (Object*)0x0 ) && ( cVar1 = RefCounted::reference() ),cVar1 == '\0') {
            *(undefined8*)( param_1 + 0x1f0 ) = 0;
         }

         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

}
else {
    if ((*(long *)(param_1 + 0x1e8) != 0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) {
      pOVar3 = *(Object **)(param_1 + 0x1e8);
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  return iVar2;
}/* WebSocketMultiplayerPeer::put_packet(unsigned char const*, int) */undefined4 WebSocketMultiplayerPeer::put_packet(WebSocketMultiplayerPeer *this, uchar *param_1, int param_2) {
   char cVar1;
   undefined4 uVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   uint uVar6;
   long in_FS_OFFSET;
   CowData<char32_t> local_40[8];
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x210 ) == get_connection_status) {
      iVar3 = *(int*)( this + 0x1f8 );
   }
 else {
      iVar3 = ( **(code**)( *(long*)this + 0x210 ) )();
   }

   if (iVar3 != 2) {
      uVar2 = 3;
      _err_print_error("put_packet", "modules/websocket/websocket_multiplayer_peer.cpp", 0x8c, "Condition \"get_connection_status() != CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED", 0, 0);
      goto LAB_001022b0;
   }

   lVar4 = *(long*)this;
   if (*(code**)( lVar4 + 0x1f0 ) == is_server) {
      if (*(long*)( this + 0x1e8 ) == 0) {
         LAB_001022e8:( **(code**)( lVar4 + 0x218 ) )(&local_38, this, 1);
         uVar2 = ( **(code**)( *(long*)local_38 + 0x160 ) )(local_38, param_1, param_2);
         if (( ( local_38 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
         Memory::free_static(local_38, false);
      }

      goto LAB_001022b0;
   }

}
else{cVar1 = ( **(code**)( lVar4 + 0x1f0 ) )(this);if (cVar1 == '\0') {
   lVar4 = *(long*)this;
   goto LAB_001022e8;
}
}uVar6 = *(uint*)( this + 0x250 );if ((int)uVar6 < 1) {
   plVar5 = *(long**)( this + 0x220 );
   if (plVar5 != (long*)0x0) {
      while (true) {
         if (( uVar6 == 0 ) || ( uVar6 + (int)plVar5[2] != 0 )) {
            ( **(code**)( *(long*)plVar5[3] + 0x160 ) )((long*)plVar5[3], param_1, param_2);
         }

         plVar5 = (long*)*plVar5;
         if (plVar5 == (long*)0x0) break;
         uVar6 = *(uint*)( this + 0x250 );
      }
;
      uVar2 = 0;
      goto LAB_001022b0;
   }

}
 else {
   cVar1 = HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::_lookup_pos((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( this + 0x208 ), (int*)(ulong)uVar6, (uint*)&local_38);
   if (cVar1 == '\0') {
      itos((long)local_40);
      operator+((char *)&
      local_38,(String*)"Peer not found: ";
      _err_print_error("put_packet", "modules/websocket/websocket_multiplayer_peer.cpp", 0x90, "Condition \"!peers_map.has(target_peer)\" is true. Returning: ERR_INVALID_PARAMETER", (Ref<WebSocketPeer>*)&local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      uVar2 = 0x1f;
      CowData<char32_t>::_unref(local_40);
      goto LAB_001022b0;
   }

   ( **(code**)( *(long*)this + 0x218 ) )((Ref<WebSocketPeer>*)&local_38, this, uVar6);
   ( **(code**)( *(long*)local_38 + 0x160 ) )(local_38, param_1, param_2);
   Ref<WebSocketPeer>::unref((Ref<WebSocketPeer>*)&local_38);
}
uVar2 = 0;LAB_001022b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar2;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WebSocketMultiplayerPeer::disconnect_peer(int, bool) */void WebSocketMultiplayerPeer::disconnect_peer(WebSocketMultiplayerPeer *this, int param_1, bool param_2) {
   ulong uVar1;
   long *plVar2;
   code *pcVar3;
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
   undefined8 *puVar14;
   int iVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   int local_6c[3];
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c[0] = param_1;
   if (( *(long*)( this + 0x210 ) != 0 ) && ( *(int*)( this + 0x234 ) != 0 )) {
      uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x230 ) * 8 );
      uVar13 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
      uVar18 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
         uVar18 = 1;
         uVar16 = uVar1;
      }
 else {
         uVar16 = uVar18 * uVar1;
      }

      uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 ));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar19;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar16;
      lVar17 = SUB168(auVar4 * auVar8, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x218 ) + lVar17 * 4 );
      iVar15 = SUB164(auVar4 * auVar8, 8);
      if (uVar13 != 0) {
         uVar20 = 0;
         do {
            if (( uVar13 == uVar18 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 0x210 ) + lVar17 * 8 ) + 0x10 ) )) {
               puVar14 = (undefined8*)HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator []((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( this + 0x208 ), local_6c);
               plVar2 = (long*)*puVar14;
               local_60 = 0;
               local_50 = 0;
               pcVar3 = *(code**)( *plVar2 + 0x1b0 );
               local_58 = &_LC33;
               String::parse_latin1((StrRange*)&local_60);
               ( *pcVar3 )(plVar2, 1000, (StrRange*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (!param_2) goto LAB_001025f3;
               HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::erase(( HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref < WebSocketPeer>>> > * )(this + 0x208), local_6c);
               if (*(code**)( *(long*)this + 0x1f0 ) == is_server) {
                  if (*(long*)( this + 0x1e8 ) != 0) goto LAB_001025f3;
               }
 else {
                  cVar12 = ( **(code**)( *(long*)this + 0x1f0 ) )(this);
                  if (cVar12 != '\0') goto LAB_001025f3;
               }

               _clear(this);
               goto LAB_001025f3;
            }

            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( iVar15 + 1 ) * uVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar17 = SUB168(auVar5 * auVar9, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x218 ) + lVar17 * 4 );
            iVar15 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar13 * uVar1,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x230 ) * 4 ) + iVar15 ) - SUB164(auVar6 * auVar10, 8) ) * uVar1,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,uVar20 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   _err_print_error("disconnect_peer", "modules/websocket/websocket_multiplayer_peer.cpp", 0x1e3, "Condition \"!peers_map.has(p_peer_id)\" is true.", 0, 0);
   LAB_001025f3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WebSocketMultiplayerPeer::_poll_client() */void WebSocketMultiplayerPeer::_poll_client(WebSocketMultiplayerPeer *this) {
   HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>> *this_00;
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   long *plVar6;
   void *__dest;
   undefined4 *puVar7;
   long lVar8;
   undefined1(*pauVar9)[16];
   char *pcVar10;
   undefined8 uVar11;
   long in_FS_OFFSET;
   double dVar12;
   long *local_78;
   ulong local_70;
   int local_68;
   undefined4 uStack_64;
   void *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1f8 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar11 = 0xdb;
         pcVar10 = "Condition \"connection_status == CONNECTION_DISCONNECTED\" is true.";
         goto LAB_001029b6;
      }

      goto LAB_00102d83;
   }

   this_00 = (HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( this + 0x208 );
   cVar3 = HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::_lookup_pos(this_00, (int*)0x1, (uint*)&local_60);
   if (cVar3 != '\0') {
      local_60 = (void*)CONCAT44(local_60._4_4_, 1);
      plVar6 = (long*)HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator [](this_00, (int*)&local_60);
      if (*plVar6 != 0) {
         local_60 = (void*)CONCAT44(local_60._4_4_, 1);
         plVar6 = (long*)HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator [](this_00, (int*)&local_60);
         plVar6 = (long*)*plVar6;
         if (( plVar6 == (long*)0x0 ) || ( local_78 = plVar6 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
            local_78 = (long*)0x0;
            plVar6 = (long*)0x0;
         }

         ( **(code**)( *plVar6 + 0x1f0 ) )(plVar6);
         iVar4 = ( **(code**)( *plVar6 + 0x1f8 ) )(plVar6);
         if (iVar4 == 1) {
            if (*(int*)( this + 0x1f8 ) != 1) {
               LAB_001027e5:iVar4 = ( **(code**)( *plVar6 + 0x150 ) )(plVar6);
               if (0 < iVar4) {
                  do {
                     iVar5 = ( **(code**)( *plVar6 + 0x1f8 ) )(plVar6);
                     if (iVar5 != 1) break;
                     local_68 = 0;
                     iVar5 = ( **(code**)( *plVar6 + 0x158 ) )(plVar6, (StringName*)&local_60, &local_68);
                     if (iVar5 != 0) {
                        _err_print_error("_poll_client", "modules/websocket/websocket_multiplayer_peer.cpp", 0xfa, "Condition \"err != OK\" is true.", 0, 0);
                        goto LAB_001027a6;
                     }

                     if (local_68 < 1) {
                        _err_print_error("_poll_client", "modules/websocket/websocket_multiplayer_peer.cpp", 0xfb, "Condition \"size <= 0\" is true.", 0, 0);
                        goto LAB_001027a6;
                     }

                     __dest = (void*)Memory::alloc_static((long)local_68, false);
                     memcpy(__dest, local_60, (long)local_68);
                     iVar5 = local_68;
                     if (*(long*)( this + 0x200 ) == 0) {
                        pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined1(**) [16])( this + 0x200 ) = pauVar9;
                        *(undefined4*)pauVar9[1] = 0;
                        *pauVar9 = (undefined1[16])0x0;
                     }

                     puVar7 = (undefined4*)operator_new(0x30, DefaultAllocator::alloc);
                     plVar1 = *(long**)( this + 0x200 );
                     *(undefined8*)( puVar7 + 6 ) = 0;
                     lVar8 = plVar1[1];
                     *puVar7 = 1;
                     *(void**)( puVar7 + 2 ) = __dest;
                     puVar7[4] = iVar5;
                     *(long*)( puVar7 + 8 ) = lVar8;
                     *(long**)( puVar7 + 10 ) = plVar1;
                     if (lVar8 != 0) {
                        *(undefined4**)( lVar8 + 0x18 ) = puVar7;
                     }

                     plVar1[1] = (long)puVar7;
                     if (*plVar1 == 0) {
                        *plVar1 = (long)puVar7;
                     }

                     *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                     iVar4 = iVar4 + -1;
                  }
 while ( iVar4 != 0 );
               }

               goto LAB_00102799;
            }

            iVar4 = ( **(code**)( *plVar6 + 0x150 ) )(plVar6);
            if (0 < iVar4) {
               local_70 = local_70 & 0xffffffff00000000;
               iVar4 = ( **(code**)( *plVar6 + 0x158 ) )(plVar6, &local_68, &local_70);
               if (( iVar4 == 0 ) && ( (int)local_70 == 4 )) {
                  iVar4 = *(int*)CONCAT44(uStack_64, local_68);
                  *(int*)( this + 0x254 ) = iVar4;
                  if (1 < iVar4) {
                     *(undefined4*)( this + 0x1f8 ) = 2;
                     StringName::StringName((StringName*)&local_60, "peer_connected", false);
                     Object::emit_signal<int>((Object*)this, (StringName*)&local_60, 1);
                     if (( StringName::configured != '\0' ) && ( local_60 != (void*)0x0 )) {
                        StringName::unref();
                     }

                     goto LAB_001027e5;
                  }

                  pcVar2 = *(code**)( *plVar6 + 0x1b0 );
                  local_60 = (void*)0x0;
                  String::parse_latin1((String*)&local_60, "");
                  ( *pcVar2 )(plVar6, 1000, (StringName*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  _err_print_error("_poll_client", "modules/websocket/websocket_multiplayer_peer.cpp", 0xed, "Method/function failed.", "Invalid ID received from server", 0, 0);
               }
 else {
                  pcVar2 = *(code**)( *plVar6 + 0x1b0 );
                  local_60 = (void*)0x0;
                  String::parse_latin1((String*)&local_60, "");
                  ( *pcVar2 )(plVar6, 1000, (StringName*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  _err_print_error("_poll_client", "modules/websocket/websocket_multiplayer_peer.cpp", 0xe8, "Method/function failed.", "Invalid ID received from server", 0, 0);
               }

            }

         }
 else {
            iVar4 = ( **(code**)( *plVar6 + 0x1f8 ) )(plVar6);
            if (iVar4 == 3) {
               if (*(int*)( this + 0x1f8 ) == 2) {
                  if ((_poll_client()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar4 = __cxa_guard_acquire(&_poll_client()::{lambda()#1}::operator()()::sname),
               iVar4 != 0))
                  {
                     _scs_create((char *)&_poll_client()::{lambda()
                     #1
                     __cxa_atexit(StringName::~StringName, &_poll_client()::, {
                           lambda()
                           #1
                           __cxa_guard_release(&_poll_client()::{lambda()#1}::operator()()::sname);
            }
            Object::emit_signal<int>
                      ((Object *)this,
                       (StringName *)&_poll_client()::{lambda()
                           #1
                        }
, LAB_00102b2d:
          _clear(this);
                  }

                  else{LAB_00102799:if (*(int *)(this + 0x1f8) == 1){cVar3 = HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>
                    ::_lookup_pos((HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>
                                   *)(this + 0x1b8),(int *)0x1,(uint *)&local_60);
            if (cVar3 == '\0') {
              _err_print_error("_poll_client","modules/websocket/websocket_multiplayer_peer.cpp",
                               0x10d,"Condition \"!pending_peers.has(1)\" is true.",0,0);
            }else{OS::get_singleton();
              lVar8 = OS::get_ticks_msec();
              local_60 = (void *)CONCAT44(local_60._4_4_,1);
              plVar6 = (long *)HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>
                               ::operator[]((HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>
                                             *)(this + 0x1b8),(int *)&local_60);
              if (*(ulong *)(this + 0x1a8) < (ulong)(lVar8 - *plVar6)) {
                cVar3 = is_print_verbose_enabled();
                if (cVar3 != '\0') {
                  dVar12 = (double)*(ulong *)(this + 0x1a8) * __LC65;
                  local_70 = 0;
                  String::parse_latin1
                            ((String *)&local_70,"WebSocket handshake timed out after %.3f seconds."
                            );
                  vformat<double>((String *)&local_68,dVar12);
                  Variant::Variant((Variant *)local_58,(String *)&local_68);
                  stringify_variants((Variant *)&local_60);
                  __print_line((String *)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);}goto LAB_00102b2d;}};
               }

            }

         }

         LAB_001027a6:Ref<WebSocketPeer>::unref((Ref<WebSocketPeer>*)&local_78);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00102d83;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar11 = 0xdc;
      pcVar10 = "Condition \"!peers_map.has(1) || peers_map[1].is_null()\" is true.";
      LAB_001029b6:_err_print_error("_poll_client", "modules/websocket/websocket_multiplayer_peer.cpp", uVar11, pcVar10, 0, 0);
      return;
   }

   LAB_00102d83:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WebSocketMultiplayerPeer::_bind_methods() */void WebSocketMultiplayerPeer::_bind_methods(void) {
   Variant *pVVar1;
   char cVar2;
   MethodBind *pMVar3;
   uint uVar4;
   Variant *pVVar5;
   long in_FS_OFFSET;
   undefined8 local_160;
   undefined8 local_158;
   undefined8 local_150;
   long local_148;
   long local_140;
   long local_138;
   long local_130;
   MethodDefinition local_128[48];
   Variant *local_f8;
   char *pcStack_f0;
   undefined8 local_e8;
   undefined *local_d8;
   char *pcStack_d0;
   char *local_c8;
   undefined8 local_c0;
   Variant *local_b8;
   Variant *pVStack_b0;
   char **local_a8;
   undefined8 local_a0;
   undefined1 local_98[16];
   Variant *local_88;
   undefined1 local_80[16];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_e8 = 0;
   pVStack_b0 = (Variant*)&pcStack_f0;
   local_f8 = (Variant*)&_LC69;
   pcStack_f0 = "tls_client_options";
   uVar4 = (uint)(Variant*)&local_b8;
   local_b8 = (Variant*)&local_f8;
   D_METHODP((char*)local_128, (char***)"create_client", uVar4);
   Variant::Variant((Variant*)&local_b8, (Object*)0x0);
   local_98 = (undefined1[16])0x0;
   local_a0 = 0;
   local_f8 = (Variant*)&local_b8;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Error,String_const&,Ref<TLSOptions>>(create_client);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, &local_f8, 1);
   if (Variant::needs_deinit[(int)local_a0] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_b8];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_b8];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_c8 = "tls_server_options";
   local_a8 = &local_c8;
   local_d8 = &_LC67;
   pcStack_d0 = "bind_address";
   local_c0 = 0;
   local_b8 = (Variant*)&local_d8;
   pVStack_b0 = (Variant*)&pcStack_d0;
   D_METHODP((char*)local_128, (char***)"create_server", uVar4);
   Variant::Variant((Variant*)&local_88, "*");
   pVVar5 = (Variant*)local_40;
   Variant::Variant(local_70, (Object*)0x0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_b8 = (Variant*)&local_88;
   pVStack_b0 = local_70;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Error,int,IPAddress,Ref<TLSOptions>>(create_server);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, &local_b8, 2);
   do {
      pVVar1 = pVVar5 + -0x18;
      pVVar5 = pVVar5 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar5 != (Variant*)&local_88 );
   MethodDefinition::~MethodDefinition(local_128);
   pVStack_b0 = (Variant*)0x0;
   local_b8 = (Variant*)0x106924;
   uVar4 = (uint)(Variant*)&local_88;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"get_peer", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Ref<WebSocketPeer>,int>((_func_Ref_int*)0x219);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)&_LC75;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"get_peer_address", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,IPAddress,int>(get_peer_address);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)&_LC75;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"get_peer_port", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int,int>(get_peer_port);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_supported_protocols", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Vector<String>>(get_supported_protocols);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)0x106947;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_supported_protocols", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Vector<String>const&>(set_supported_protocols);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_handshake_headers", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Vector<String>>(get_handshake_headers);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)0x106947;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_handshake_headers", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,Vector<String>const&>(set_handshake_headers);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_inbound_buffer_size", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(get_inbound_buffer_size);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)0x1069ad;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_inbound_buffer_size", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(set_inbound_buffer_size);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_outbound_buffer_size", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(get_outbound_buffer_size);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   local_b8 = (Variant*)0x1069ad;
   pVStack_b0 = (Variant*)0x0;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_outbound_buffer_size", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(set_outbound_buffer_size);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_handshake_timeout", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,float>(get_handshake_timeout);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   pVStack_b0 = (Variant*)0x0;
   local_b8 = (Variant*)0x106a19;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_handshake_timeout", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,float>(set_handshake_timeout);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   pVStack_b0 = (Variant*)0x0;
   local_b8 = (Variant*)0x106a21;
   local_88 = (Variant*)&local_b8;
   D_METHODP((char*)local_128, (char***)"set_max_queued_packets", uVar4);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(set_max_queued_packets);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   D_METHODP((char*)local_128, (char***)"get_max_queued_packets", 0);
   local_80 = (undefined1[16])0x0;
   local_88 = (Variant*)0x0;
   pMVar3 = create_method_bind<WebSocketMultiplayerPeer,int>(get_max_queued_packets);
   ClassDB::bind_methodfi(1, pMVar3, false, local_128, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(local_128);
   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "supported_protocols");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 0x22, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "handshake_headers");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 0x22, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_138 != 0 ) ) )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "inbound_buffer_size");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "outbound_buffer_size");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "handshake_timeout");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 3, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_138, true);
   _scs_create((char*)&local_140, true);
   local_148 = 0;
   local_150 = 0;
   String::parse_latin1((String*)&local_150, "");
   local_158 = 0;
   String::parse_latin1((String*)&local_158, "max_queued_packets");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_128, 2, (String*)&local_158, 0, (String*)&local_150, 6, &local_148);
   local_160 = 0;
   String::parse_latin1((String*)&local_160, "WebSocketMultiplayerPeer");
   StringName::StringName((StringName*)&local_130, (String*)&local_160, false);
   ClassDB::add_property((StringName*)&local_130, (PropertyInfo*)local_128, (StringName*)&local_140, (StringName*)&local_138, -1);
   if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_140 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_138 != 0 )) {
      StringName::unref();
   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WebSocketMultiplayerPeer::_create_peer() */WebSocketMultiplayerPeer * __thiscall
WebSocketMultiplayerPeer::_create_peer(WebSocketMultiplayerPeer *this){
   undefined8 uVar1;
   char cVar2;
   long lVar3;
   Vector *pVVar4;
   long in_FS_OFFSET;
   CowData<String> local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (WebSocketPeer::_create != (code*)0x0) {
      lVar3 = ( *WebSocketPeer::_create )(1);
      if (lVar3 != 0) {
         *(long*)this = lVar3;
         cVar2 = RefCounted::init_ref();
         if (cVar2 != '\0') {
            pVVar4 = *(Vector**)this;
            goto LAB_0010413a;
         }

      }

   }

   *(undefined8*)this = 0;
   pVVar4 = (Vector*)0x0;
   LAB_0010413a:WebSocketPeer::get_supported_protocols();
   WebSocketPeer::set_supported_protocols(pVVar4);
   CowData<String>::_unref(local_40);
   pVVar4 = *(Vector**)this;
   WebSocketPeer::get_handshake_headers();
   WebSocketPeer::set_handshake_headers(pVVar4);
   CowData<String>::_unref(local_40);
   uVar1 = *(undefined8*)this;
   WebSocketPeer::get_inbound_buffer_size();
   WebSocketPeer::set_inbound_buffer_size((int)uVar1);
   uVar1 = *(undefined8*)this;
   WebSocketPeer::get_outbound_buffer_size();
   WebSocketPeer::set_outbound_buffer_size((int)uVar1);
   uVar1 = *(undefined8*)this;
   WebSocketPeer::get_max_queued_packets();
   WebSocketPeer::set_max_queued_packets((int)uVar1);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::create_client(String const&, Ref<TLSOptions>) */int WebSocketMultiplayerPeer::create_client(WebSocketMultiplayerPeer *this, undefined8 param_1, long *param_3) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   Object *local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(code**)( *(long*)this + 0x210 ) == get_connection_status) {
      iVar4 = *(int*)( this + 0x1f8 );
   }
 else {
      iVar4 = ( **(code**)( *(long*)this + 0x210 ) )();
   }

   if (iVar4 != 0) {
      iVar4 = 0x16;
      _err_print_error("create_client", "modules/websocket/websocket_multiplayer_peer.cpp", 0xc6, "Condition \"get_connection_status() != CONNECTION_DISCONNECTED\" is true. Returning: ERR_ALREADY_IN_USE", 0, 0);
      goto LAB_00104300;
   }

   if (( *param_3 != 0 ) && ( *(int*)( *param_3 + 0x17c ) == 2 )) {
      iVar4 = 0x1f;
      _err_print_error("create_client", "modules/websocket/websocket_multiplayer_peer.cpp", 199, "Condition \"p_options.is_valid() && p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      goto LAB_00104300;
   }

   _clear(this);
   _create_peer((WebSocketMultiplayerPeer*)&local_50);
   pcVar1 = *(code**)( *(long*)local_50 + 0x198 );
   local_48 = (Object*)0x0;
   if (( (Object*)*param_3 != (Object*)0x0 ) && ( local_48 = (Object*)*param_3 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_48 = (Object*)0x0;
   }

   iVar4 = ( *pcVar1 )(local_50, param_1, &local_48);
   if (( ( local_48 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),pOVar2 = local_48,cVar3 == '\0' )) {
      if (iVar4 == 0) goto LAB_00104328;
      LAB_001042ea:cVar3 = RefCounted::unreference();
   }
 else {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      if (iVar4 != 0) goto LAB_001042ea;
      LAB_00104328:OS::get_singleton();
      uVar5 = OS::get_ticks_msec();
      local_48 = (Object*)CONCAT44(local_48._4_4_, 1);
      puVar6 = (undefined8*)HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>::operator []((HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>*)( this + 0x1b8 ), (int*)&local_48);
      *puVar6 = uVar5;
      for (int i = 0; i < 3; i++) {
         pOVar2 = (Object*)puVar6[( i + 1 )];
         if (pOVar2 != (Object*)0) {
            puVar6[( i + 1 )] = 0;
            cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar2) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      local_48 = (Object*)CONCAT44(local_48._4_4_, 1);
      puVar6 = (undefined8*)HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator []((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( this + 0x208 ), (int*)&local_48);
      pOVar2 = (Object*)*puVar6;
      if (local_50 != pOVar2) {
         *puVar6 = local_50;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *puVar6 = 0;
         }

         if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   *(undefined4*)( this + 0x1f8 ) = 1;
   cVar3 = RefCounted::unreference();
}
if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(local_50) ),cVar3 != '\0') {
   ( **(code**)( *(long*)local_50 + 0x140 ) )(local_50);
   Memory::free_static(local_50, false);
}
LAB_00104300:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar4;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WebSocketMultiplayerPeer::_poll_server() */void WebSocketMultiplayerPeer::_poll_server(WebSocketMultiplayerPeer *this) {
   undefined8 *puVar1;
   uint *puVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   long lVar6;
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
   code *pcVar25;
   ulong uVar26;
   char cVar27;
   uint uVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   undefined4 uVar32;
   long lVar33;
   void *__dest;
   undefined4 *puVar34;
   Object *pOVar35;
   Ref<WebSocketPeer> *this_00;
   undefined1(*pauVar36)[16];
   undefined8 *puVar37;
   long *plVar38;
   Ref *pRVar39;
   char *pcVar40;
   uint uVar41;
   ulong uVar42;
   ulong uVar43;
   undefined8 uVar44;
   uint uVar45;
   long *plVar46;
   ulong uVar47;
   Object *pOVar48;
   Ref *pRVar49;
   int *piVar50;
   ulong uVar51;
   uint uVar52;
   int iVar53;
   uint *puVar54;
   ulong uVar55;
   long in_FS_OFFSET;
   double dVar56;
   long local_108;
   int *local_f0;
   int local_dc;
   long *local_d8;
   Object *local_d0;
   Ref *local_c8[2];
   int *local_b8;
   Ref *pRStack_b0;
   Object *local_a8;
   Ref *pRStack_a0;
   undefined8 local_98;
   Variant *local_88[2];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x1f8 ) == 2) {
      if (( *(long*)( this + 0x1e8 ) != 0 ) && ( cVar27 = TCPServer::is_listening() ),cVar27 != '\0') {
         cVar27 = ( **(code**)( *(long*)this + 0x1b8 ) )(this);
         if (( cVar27 == '\0' ) && ( cVar27 = TCPServer::is_connection_available() ),cVar27 != '\0') {
            pRStack_a0 = (Ref*)0x0;
            pRStack_b0 = (Ref*)0x0;
            local_a8 = (Object*)0x0;
            OS::get_singleton();
            local_b8 = (int*)OS::get_ticks_msec();
            TCPServer::take_connection();
            pRVar49 = local_c8[0];
            if (local_c8[0] != (Ref*)0x0) {
               pRStack_b0 = local_c8[0];
               cVar27 = RefCounted::reference();
               if (cVar27 == '\0') {
                  pRStack_b0 = (Ref*)0x0;
               }

               pRVar49 = pRStack_b0;
               if (( ( local_c8[0] != (Ref*)0x0 ) && ( cVar27 = RefCounted::unreference() ),pRVar39 = local_c8[0],pRVar49 = pRStack_b0,cVar27 != '\0' )) {
                  ( **(code**)( *(long*)pRVar39 + 0x140 ) )(pRVar39);
                  Memory::free_static(pRVar39, false);
               }

            }

            Ref<StreamPeer>::operator =((Ref<StreamPeer>*)&local_a8, pRVar49);
            uVar32 = MultiplayerPeer::generate_unique_id();
            local_c8[0] = (Ref*)CONCAT44(local_c8[0]._4_4_, uVar32);
            puVar37 = (undefined8*)HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>::operator []((HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>*)( this + 0x1b8 ), (int*)local_c8);
            pRVar49 = pRStack_b0;
            pOVar48 = (Object*)puVar37[1];
            *puVar37 = local_b8;
            if (pRStack_b0 != (Ref*)pOVar48) {
               puVar37[1] = pRStack_b0;
               if (( pRStack_b0 != (Ref*)0x0 ) && ( cVar27 = RefCounted::reference() ),cVar27 == '\0') {
                  puVar37[1] = 0;
               }

               if (( ( pOVar48 != (Object*)0x0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0' )) &&( cVar27 = cVar27 != '\0' )(**(code**)( *(long*)pOVar48 + 0x140 ))(pOVar48);
               Memory::free_static(pOVar48, false);
            }

         }

         pOVar35 = local_a8;
         pOVar48 = (Object*)puVar37[2];
         if (local_a8 != pOVar48) {
            puVar37[2] = local_a8;
            if (( local_a8 != (Object*)0x0 ) && ( cVar27 = RefCounted::reference() ),cVar27 == '\0') {
               puVar37[2] = 0;
            }

            if (( ( pOVar48 != (Object*)0x0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0' )) &&( cVar27 = cVar27 != '\0' )(**(code**)( *(long*)pOVar48 + 0x140 ))(pOVar48);
            Memory::free_static(pOVar48, false);
         }

      }

      pRVar39 = pRStack_a0;
      Ref<WebSocketPeer>::operator =((Ref<WebSocketPeer>*)( puVar37 + 3 ), pRStack_a0);
      if (( ( pRVar39 != (Ref*)0x0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0' )) &&( cVar27 = cVar27 != '\0' )(**(code**)( *(long*)pRVar39 + 0x140 ))(pRVar39);
      Memory::free_static(pRVar39, false);
   }

   if (( ( pOVar35 != (Object*)0x0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0' )) &&( cVar27 = cVar27 != '\0' )(**(code**)( *(long*)pOVar35 + 0x140 ))(pOVar35);
   Memory::free_static(pOVar35, false);
}
if (( ( pRVar49 != (Ref*)0x0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0' )) &&( cVar27 = cVar27 != '\0' )(**(code**)( *(long*)pRVar49 + 0x140 ))(pRVar49);Memory::free_static(pRVar49, false);}
      }plVar46 = *(long**)( this + 0x1d0 );local_98 = 2;local_b8 = (int*)0x0;pRStack_b0 = (Ref*)0x0;local_a8 = (Object*)0x0;pRStack_a0 = (Ref*)0x0;if (plVar46 != (long*)0x0) {
   do if (( cVar27 != '\0' ) && ( cVar27 = predelete_handler(pOVar48) ),cVar27 != '\0') {
      ( **(code**)( *(long*)pOVar48 + 0x140 ) )(pOVar48);
      Memory::free_static(pOVar48, false);
   }
 else {
      ( **(code**)( *(long*)plVar46[6] + 0x1f0 ) )();
      iVar30 = ( **(code**)( *(long*)plVar46[6] + 0x1f8 ) )();
      if (iVar30 == 1) {
         HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_c8);
         cVar27 = ( **(code**)( *(long*)this + 0x1b8 ) )(this);
         if (cVar27 == '\0') {
            local_d0 = (Object*)CONCAT44(local_d0._4_4_, iVar29);
            iVar30 = ( **(code**)( *(long*)plVar46[6] + 0x160 ) )((long*)plVar46[6], &local_d0, 4);
            if (iVar30 == 0) {
               this_00 = (Ref<WebSocketPeer>*)HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator []((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>*)( this + 0x208 ), &local_dc);
               Ref<WebSocketPeer>::operator =(this_00, (Ref*)plVar46[6]);
               StringName::StringName((StringName*)local_c8, "peer_connected", false);
               Object::emit_signal<int>((Object*)this, (StringName*)local_c8, iVar29);
               if (( StringName::configured != '\0' ) && ( local_c8[0] != (Ref*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               _err_print_error("_poll_server", "modules/websocket/websocket_multiplayer_peer.cpp", 0x13f, "Failed to send ID to newly connected peer.", 0, 0);
            }

         }

      }
 else if (iVar30 != 0) {
         HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_c8);
      }

   }
 while ( plVar46 != (long*)0x0 );
   LAB_001046e7:piVar50 = local_b8;
   iVar29 = local_98._4_4_;
   if (local_98._4_4_ != 0) {
      local_108 = 0;
      lVar33 = *(long*)( this + 0x1c0 );
      local_f0 = local_b8;
      joined_r0x00104716:while (( iVar30 = (int)local_108 ),lVar33 != 0 && ( *(int*)( this + 0x1e4 ) != 0 )) {
         uVar3 = piVar50[local_108];
         uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 );
         uVar55 = CONCAT44(0, uVar4);
         uVar5 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
         uVar28 = ( uVar3 >> 0x10 ^ uVar3 ) * -0x7a143595;
         uVar28 = ( uVar28 ^ uVar28 >> 0xd ) * -0x3d4d51cb;
         uVar45 = uVar28 ^ uVar28 >> 0x10;
         if (uVar28 == uVar28 >> 0x10) {
            uVar45 = 1;
            uVar42 = uVar5;
         }
 else {
            uVar42 = uVar45 * uVar5;
         }

         lVar6 = *(long*)( this + 0x1c8 );
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar55;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar42;
         uVar42 = SUB168(auVar7 * auVar16, 8);
         uVar28 = *(uint*)( lVar6 + uVar42 * 4 );
         uVar47 = (ulong)SUB164(auVar7 * auVar16, 8);
         if (uVar28 == 0) {
            if (iVar29 <= iVar30 + 1) goto LAB_00104991;
            local_108 = local_108 + 1;
         }
 else {
            uVar52 = 0;
            LAB_001047f5:auVar10._8_8_ = 0;
            auVar10._0_8_ = ( (int)uVar47 + 1 ) * uVar5;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar55;
            uVar43 = SUB168(auVar10 * auVar19, 8);
            uVar41 = SUB164(auVar10 * auVar19, 8);
            if (( uVar45 != uVar28 ) || ( uVar3 != *(uint*)( *(long*)( lVar33 + uVar42 * 8 ) + 0x10 ) )) goto LAB_001047b8;
            puVar54 = (uint*)( lVar6 + uVar43 * 4 );
            uVar42 = ( ulong ) * puVar54;
            if (( *puVar54 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar42 * uVar5,auVar20._8_8_ = 0,auVar20._0_8_ = uVar55,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( uVar41 + uVar4 ) - SUB164(auVar11 * auVar20, 8) ) * uVar5,auVar21._8_8_ = 0,auVar21._0_8_ = uVar55,uVar26 = (ulong)uVar41,uVar51 = uVar47,SUB164(auVar12 * auVar21, 8) != 0) {
               while (true) {
                  uVar47 = uVar26;
                  puVar2 = (uint*)( lVar6 + uVar51 * 4 );
                  *puVar54 = *puVar2;
                  puVar37 = (undefined8*)( lVar33 + uVar43 * 8 );
                  *puVar2 = (uint)uVar42;
                  puVar1 = (undefined8*)( lVar33 + uVar51 * 8 );
                  uVar44 = *puVar37;
                  *puVar37 = *puVar1;
                  *puVar1 = uVar44;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( (int)uVar47 + 1 ) * uVar5;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar55;
                  uVar43 = SUB168(auVar15 * auVar24, 8);
                  puVar54 = (uint*)( lVar6 + uVar43 * 4 );
                  uVar42 = ( ulong ) * puVar54;
                  if (( *puVar54 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar42 * uVar5,auVar22._8_8_ = 0,auVar22._0_8_ = uVar55,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( SUB164(auVar15 * auVar24, 8) + uVar4 ) - SUB164(auVar13 * auVar22, 8) ) * uVar5,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,SUB164(auVar14 * auVar23, 8) == 0) break;
                  uVar26 = uVar43 & 0xffffffff;
                  uVar51 = uVar47;
               }
;
            }

            plVar46 = (long*)( lVar33 + uVar47 * 8 );
            *(undefined4*)( lVar6 + uVar47 * 4 ) = 0;
            plVar38 = (long*)*plVar46;
            if (*(long**)( this + 0x1d0 ) == plVar38) {
               *(long*)( this + 0x1d0 ) = *plVar38;
               plVar38 = (long*)*plVar46;
            }

            if (plVar38 == *(long**)( this + 0x1d8 )) {
               *(long*)( this + 0x1d8 ) = plVar38[1];
               plVar38 = (long*)*plVar46;
            }

            if ((long*)plVar38[1] != (long*)0x0) {
               *(long*)plVar38[1] = *plVar38;
               plVar38 = (long*)*plVar46;
            }

            if (*plVar38 != 0) {
               *(long*)( *plVar38 + 8 ) = plVar38[1];
               plVar38 = (long*)*plVar46;
            }

            for (int i = 0; i < 3; i++) {
               if (( plVar38[( 6 - i )] != 0 ) && ( cVar27 = RefCounted::unreference() ),cVar27 != '\0') {
                  pOVar48 = (Object*)plVar38[( 6 - i )];
                  cVar27 = predelete_handler(pOVar48);
                  if (cVar27 != '\0') {
                     ( **(code**)( *(long*)pOVar48 + 320 ) )(pOVar48);
                     Memory::free_static(pOVar48, false);
                  }

               }

            }

            Memory::free_static(plVar38, false);
            lVar33 = *(long*)( this + 0x1c0 );
            *(undefined8*)( lVar33 + uVar47 * 8 ) = 0;
            *(int*)( this + 0x1e4 ) = *(int*)( this + 0x1e4 ) + -1;
            if (iVar29 <= iVar30 + 1) goto LAB_00104991;
            local_108 = local_108 + 1;
         }

      }
;
      LAB_00104fc0:if (iVar30 + 1 < iVar29) {
         local_108 = local_108 + 1;
         goto joined_r0x00104716;
      }

      LAB_00104991:if (piVar50 == (int*)0x0) {
         plVar46 = *(long**)( this + 0x220 );
         if (plVar46 != (long*)0x0) goto LAB_00104a11;
         iVar29 = local_98._4_4_;
         LAB_00105184:iVar53 = 1;
         iVar30 = *local_b8;
         piVar50 = local_b8;
         while (true) {
            if ((_poll_server()::{lambda()#1}::operator()()::sname == '\0') &&
                 (iVar31 = __cxa_guard_acquire(&_poll_server()::{lambda()#1}::operator()()::sname),
                 iVar31 != 0))
            {
               _scs_create((char *)&_poll_server()::{lambda()
               #1
               __cxa_atexit(StringName::~StringName,
                             &_poll_server()::{lambda()#1}::operator()()::sname,&__dso_handle);
                __cxa_guard_release(&_poll_server()::{lambda()#1}::operator()()::sname);
              }
              Variant::Variant((Variant *)local_78,iVar30);
              local_60 = 0;
              local_58 = (undefined1  [16])0x0;
              local_88[0] = (Variant *)local_78;
              (**(code **)(*(long *)this + 0xd0))
                        (this,&_poll_server()::{lambda()#1}::operator()()::sname,local_88,1);
              if (Variant::needs_deinit[(int)local_60] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>
              ::erase((HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>
                       *)(this + 0x208),piVar50);
              pRVar49 = pRStack_a0;
              if (iVar29 <= iVar53) break;
              iVar30 = piVar50[1];
              piVar50 = piVar50 + 1;
              iVar53 = iVar53 + 1;
            }
            local_f0 = local_b8;
            if (local_b8 == (int *)0x0) {
LAB_00104bca:
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                return;
              }
              goto LAB_001058cd;
            }
            if ((local_98._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) != 0))
               {
                  memset(pRStack_a0, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_98 & 0xffffffff ) * 4 ) * 4);
               }

            }

            else{if (*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) != 0) {
              memset(pRStack_a0,0,
                     (ulong)*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) * 4);
            }
            plVar46 = *(long **)(this + 0x220);
            local_98 = local_98 & 0xffffffff;pRVar49 = pRStack_a0;
            if (plVar46 != (long*)0x0) goto LAB_00104a11;
         }
;
         LAB_00104f1d:Memory::free_static(local_f0, false);
         Memory::free_static(local_a8, false);
         Memory::free_static(pRStack_b0, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pRVar49, false);
            return;
         }

         goto LAB_001058cd;
      }

   }

   plVar46 = *(long**)( this + 0x220 );
   joined_r0x00104e05:if (plVar46 != (long*)0x0) {
      LAB_00104a11:do {
         pOVar48 = (Object*)plVar46[3];
         if (pOVar48 == (Object*)0x0) goto WebSocketMultiplayerPeer__poll_server;
         cVar27 = RefCounted::reference();
         if (cVar27 == '\0') {
            pOVar48 = (Object*)0x0;
         }

         local_d8 = (long*)CONCAT44(local_d8._4_4_, (int)plVar46[2]);
         ( **(code**)( *(long*)pOVar48 + 0x1f0 ) )(pOVar48);
         iVar29 = ( **(code**)( *(long*)pOVar48 + 0x1f8 ) )(pOVar48);
         if (iVar29 == 1) {
            iVar29 = ( **(code**)( *(long*)pOVar48 + 0x150 ) )(pOVar48);
            if (0 < iVar29) {
               do {
                  while (true) {
                     iVar30 = ( **(code**)( *(long*)pOVar48 + 0x1f8 ) )(pOVar48);
                     if (iVar30 != 1) goto LAB_00104b60;
                     local_d0 = (Object*)( (ulong)local_d0 & 0xffffffff00000000 );
                     iVar30 = ( **(code**)( *(long*)pOVar48 + 0x158 ) )(pOVar48, local_c8, &local_d0);
                     if (iVar30 != 0) goto LAB_00104b60;
                     if ((int)local_d0 < 1) goto LAB_00104b60;
                     __dest = (void*)Memory::alloc_static((long)(int)local_d0, false);
                     memcpy(__dest, local_c8[0], (long)(int)local_d0);
                     uVar32 = (int)local_d0;
                     lVar33 = plVar46[2];
                     if (*(long*)( this + 0x200 ) == 0) {
                        pauVar36 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined1(**) [16])( this + 0x200 ) = pauVar36;
                        *(undefined4*)pauVar36[1] = 0;
                        *pauVar36 = (undefined1[16])0x0;
                     }

                     puVar34 = (undefined4*)operator_new(0x30, DefaultAllocator::alloc);
                     plVar38 = *(long**)( this + 0x200 );
                     *(undefined8*)( puVar34 + 6 ) = 0;
                     lVar6 = plVar38[1];
                     *puVar34 = (int)lVar33;
                     *(void**)( puVar34 + 2 ) = __dest;
                     puVar34[4] = uVar32;
                     *(long*)( puVar34 + 8 ) = lVar6;
                     *(long**)( puVar34 + 10 ) = plVar38;
                     if (lVar6 != 0) {
                        *(undefined4**)( lVar6 + 0x18 ) = puVar34;
                     }

                     plVar38[1] = (long)puVar34;
                     if (*plVar38 != 0) break;
                     *(int*)( plVar38 + 2 ) = (int)plVar38[2] + 1;
                     iVar29 = iVar29 + -1;
                     *plVar38 = (long)puVar34;
                     if (iVar29 == 0) goto LAB_00104b60;
                  }
;
                  *(int*)( plVar38 + 2 ) = (int)plVar38[2] + 1;
                  iVar29 = iVar29 + -1;
               }
 while ( iVar29 != 0 );
            }

            LAB_00104b60:cVar27 = RefCounted::unreference();
         }
 else {
            HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_c8);
            cVar27 = RefCounted::unreference();
         }

         if (( cVar27 != '\0' ) && ( cVar27 = predelete_handler(pOVar48) ),cVar27 != '\0') goto code_r0x00104b80;
         plVar46 = (long*)*plVar46;
         if (plVar46 == (long*)0x0) break;
      }
 while ( true );
   }

   local_f0 = local_b8;
   iVar29 = local_98._4_4_;
   if (local_98._4_4_ != 0) goto LAB_00105184;
   pRVar49 = pRStack_a0;
   if (local_b8 != (int*)0x0) goto LAB_00104f1d;
   goto LAB_00104bca;
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   uVar44 = 0x118;
   pcVar40 = "Condition \"tcp_server.is_null() || !tcp_server->is_listening()\" is true.";
   goto LAB_001055c9;
}
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   uVar44 = 0x117;
   pcVar40 = "Condition \"connection_status != CONNECTION_CONNECTED\" is true.";
   LAB_001055c9:_err_print_error("_poll_server", "modules/websocket/websocket_multiplayer_peer.cpp", uVar44, pcVar40, 0, 0);
   return;
}
LAB_001058cd:/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_001047b8:uVar28 = *(uint*)( lVar6 + uVar43 * 4 );uVar47 = uVar43 & 0xffffffff;uVar52 = uVar52 + 1;if (( uVar28 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar28 * uVar5,auVar17._8_8_ = 0,auVar17._0_8_ = uVar55,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( uVar4 + uVar41 ) - SUB164(auVar8 * auVar17, 8) ) * uVar5,auVar18._8_8_ = 0,auVar18._0_8_ = uVar55,uVar42 = uVar43,SUB164(auVar9 * auVar18, 8) < uVar52) goto LAB_00104fc0;goto LAB_001047f5;code_r0x00104b80:( **(code**)( *(long*)pOVar48 + 0x140 ) )(pOVar48);Memory::free_static(pOVar48, false);plVar46 = (long*)*plVar46;goto joined_r0x00104e05;}/* WebSocketMultiplayerPeer::poll() */void WebSocketMultiplayerPeer::poll(WebSocketMultiplayerPeer *this) {
   char cVar1;
   if (*(int*)( this + 0x1f8 ) == 0) {
      return;
   }

   if (*(code**)( *(long*)this + 0x1f0 ) == is_server) {
      if (*(long*)( this + 0x1e8 ) != 0) {
         _poll_server(this);
         return;
      }

      _poll_client(this);
      return;
   }

   cVar1 = ( **(code**)( *(long*)this + 0x1f0 ) )();
   if (cVar1 == '\0') {
      _poll_client(this);
      return;
   }

   _poll_server(this);
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
   return (uint)CONCAT71(0x1135, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1135, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* WebSocketMultiplayerPeer::is_class_ptr(void*) const */uint WebSocketMultiplayerPeer::is_class_ptr(WebSocketMultiplayerPeer *this, void *param_1) {
   return (uint)CONCAT71(0x1135, (undefined4*)param_1 == &MultiplayerPeer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1135, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1135, (undefined4*)param_1 == &PacketPeer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1135, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1135, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* WebSocketMultiplayerPeer::_getv(StringName const&, Variant&) const */undefined8 WebSocketMultiplayerPeer::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebSocketMultiplayerPeer::_setv(StringName const&, Variant const&) */undefined8 WebSocketMultiplayerPeer::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebSocketMultiplayerPeer::_validate_propertyv(PropertyInfo&) const */void WebSocketMultiplayerPeer::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* WebSocketMultiplayerPeer::_property_can_revertv(StringName const&) const */undefined8 WebSocketMultiplayerPeer::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* WebSocketMultiplayerPeer::_property_get_revertv(StringName const&, Variant&) const */undefined8 WebSocketMultiplayerPeer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* WebSocketMultiplayerPeer::_notificationv(int, bool) */void WebSocketMultiplayerPeer::_notificationv(int param_1, bool param_2) {
   return;
}
/* WebSocketMultiplayerPeer::get_packet_channel() const */undefined8 WebSocketMultiplayerPeer::get_packet_channel(void) {
   return 0;
}
/* WebSocketMultiplayerPeer::get_packet_mode() const */undefined8 WebSocketMultiplayerPeer::get_packet_mode(void) {
   return 2;
}
/* WebSocketMultiplayerPeer::is_server_relay_supported() const */undefined8 WebSocketMultiplayerPeer::is_server_relay_supported(void) {
   return 1;
}
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<int>::_gen_argument_type(int) const */char MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}
/* MethodBindT<int>::get_argument_meta(int) const */byte MethodBindT<int>::get_argument_meta(MethodBindT<int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<Vector<String> const&>::_gen_argument_type(int) const */byte MethodBindT<Vector<String>const&>::_gen_argument_type(MethodBindT<Vector<String>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x22;
}
/* MethodBindT<Vector<String> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Vector<String>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}
/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int, int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int,int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int, int>::get_argument_meta(int) const */char MethodBindTRC<int,int>::get_argument_meta(MethodBindTRC<int,int> *this, int param_1) {
   return ( param_1 < 1 ) * '\x03';
}
/* MethodBindTRC<IPAddress, int>::_gen_argument_type(int) const */int MethodBindTRC<IPAddress,int>::_gen_argument_type(MethodBindTRC<IPAddress,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
}
/* MethodBindTRC<IPAddress, int>::get_argument_meta(int) const */byte MethodBindTRC<IPAddress,int>::get_argument_meta(MethodBindTRC<IPAddress,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<Ref<WebSocketPeer>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<WebSocketPeer>,int>::_gen_argument_type(MethodBindTRC<Ref<WebSocketPeer>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<WebSocketPeer>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<WebSocketPeer>,int>::get_argument_meta(MethodBindTRC<Ref<WebSocketPeer>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::_gen_argument_type(int) const */undefined8 MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::_gen_argument_type(MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 2;
   if (( param_1 - 1U < 2 ) && ( uVar1 = param_1 == 1 )) {
      uVar1 = 4;
   }

   return uVar1;
}
/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::get_argument_meta(int) const */byte MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::get_argument_meta(MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::_gen_argument_type(int) const */int MethodBindTR<Error,String_const&,Ref<TLSOptions>>::_gen_argument_type(MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this, int param_1) {
   int iVar1;
   iVar1 = 2;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffec ) + 0x18;
   }

   return iVar1;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String_const&,Ref<TLSOptions>>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00112dd0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00112dd0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::~MethodBindTR() */void MethodBindTR<Error,String_const&,Ref<TLSOptions>>::~MethodBindTR(MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113160;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::~MethodBindTR() */void MethodBindTR<Error,String_const&,Ref<TLSOptions>>::~MethodBindTR(MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113160;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::~MethodBindTR() */void MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::~MethodBindTR(MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001131c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::~MethodBindTR() */void MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::~MethodBindTR(MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001131c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<WebSocketPeer>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<WebSocketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<WebSocketPeer>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113220;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<WebSocketPeer>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<WebSocketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<WebSocketPeer>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113220;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */void MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113280;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */void MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113280;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int, int>::~MethodBindTRC() */void MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001132e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int, int>::~MethodBindTRC() */void MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001132e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113340;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113340;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector<String> const&>::~MethodBindT() */void MethodBindT<Vector<String>const&>::~MethodBindT(MethodBindT<Vector<String>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001133a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector<String> const&>::~MethodBindT() */void MethodBindT<Vector<String>const&>::~MethodBindT(MethodBindT<Vector<String>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001133a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001134c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001134c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113520;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113520;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113460;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113460;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113400;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00113400;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* WebSocketMultiplayerPeer::_get_class_namev() const */undefined8 *WebSocketMultiplayerPeer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106b23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106b23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebSocketMultiplayerPeer");
         goto LAB_00106b8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WebSocketMultiplayerPeer");
   LAB_00106b8e:return &_get_class_namev();
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
         LAB_00106c03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106c03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00106c6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00106c6e:return &_get_class_namev();
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
/* WebSocketMultiplayerPeer::get_class() const */void WebSocketMultiplayerPeer::get_class(void) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */undefined1[16];HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1) {
   void *pvVar1;
   void *pvVar2;
   long lVar3;
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
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   uint *in_RDX;
   long lVar39;
   ulong uVar40;
   uint uVar41;
   long *in_RSI;
   uint uVar42;
   ulong uVar43;
   undefined4 uVar44;
   ulong uVar45;
   uint uVar46;
   uint *puVar47;
   undefined1 auVar48[16];
   long *plStack_98;
   lVar34 = *in_RSI;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar30 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      if (lVar34 != 0) goto LAB_0010718a;
   }
 else {
      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_0010718a:if (uVar42 != 0) {
         uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
         uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
         uVar41 = uVar29 ^ uVar29 >> 0x10;
         if (uVar29 == uVar29 >> 0x10) {
            uVar41 = 1;
            uVar40 = uVar33;
         }
 else {
            uVar40 = uVar41 * uVar33;
         }

         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar43;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar40;
         lVar39 = SUB168(auVar5 * auVar17, 8);
         iVar38 = SUB164(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( in_RSI[3] + lVar39 * 4 );
         uVar40 = (ulong)uVar29;
         if (uVar29 != 0) {
            uVar29 = 0;
            do {
               if (uVar41 == (uint)uVar40) {
                  uVar32 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                  plStack_98 = (long*)(ulong)uVar32;
                  if (*(uint*)( lVar34 + (long)plStack_98 * 4 ) == uVar31) goto LAB_0010727f;
               }

               uVar29 = uVar29 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( iVar38 + 1 ) * uVar33;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar43;
               lVar39 = SUB168(auVar6 * auVar18, 8);
               uVar32 = *(uint*)( in_RSI[3] + lVar39 * 4 );
               uVar40 = (ulong)uVar32;
               iVar38 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar40 * uVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar7 * auVar19, 8) ) * uVar33,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar29 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar30 * __LC34 < (float)( uVar42 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         plStack_98 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RSI;
         uVar32 = 0xffffffff;
         goto LAB_0010727f;
      }

      uVar30 = (int)in_RSI[4] + 1;
      uVar33 = (ulong)uVar30;
      if (uVar30 < 2) {
         uVar33 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar1 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar30 << 2;
      pvVar2 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar33 = 0;
         lVar39 = in_RSI[3];
         lVar3 = in_RSI[2];
         do {
            uVar45 = uVar33 & 0xffffffff;
            uVar44 = (undefined4)uVar33;
            uVar29 = 0;
            uVar30 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar33 * 4 ) * 4 );
            uVar40 = (ulong)uVar30;
            lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar43 = CONCAT44(0, uVar42);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar40 * lVar35;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            lVar36 = SUB168(auVar9 * auVar21, 8) * 4;
            iVar38 = SUB164(auVar9 * auVar21, 8);
            puVar47 = (uint*)( lVar39 + lVar36 );
            uVar31 = *puVar47;
            if (uVar31 == 0) {
               lVar35 = uVar33 * 4;
            }
 else {
               do {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar31 * lVar35;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar43;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar35;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  if (uVar30 < uVar29) {
                     *(int*)( lVar3 + uVar45 * 4 ) = iVar38;
                     uVar31 = *puVar47;
                     *puVar47 = (uint)uVar40;
                     uVar29 = *(uint*)( lVar36 + lVar34 );
                     uVar40 = (ulong)uVar31;
                     *(uint*)( lVar36 + lVar34 ) = (uint)uVar45;
                     uVar45 = (ulong)uVar29;
                     uVar29 = uVar30;
                  }

                  uVar44 = (undefined4)uVar45;
                  uVar30 = (uint)uVar40;
                  uVar29 = uVar29 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar38 + 1) * lVar35;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar43;
                  lVar36 = SUB168(auVar12 * auVar24, 8) * 4;
                  iVar38 = SUB164(auVar12 * auVar24, 8);
                  puVar47 = (uint*)( lVar39 + lVar36 );
                  uVar31 = *puVar47;
               }
 while ( uVar31 != 0 );
               lVar35 = uVar45 << 2;
            }

            *puVar47 = uVar30;
            uVar33 = uVar33 + 1;
            *(int*)( lVar3 + lVar35 ) = iVar38;
            *(undefined4*)( lVar34 + lVar36 ) = uVar44;
         }
 while ( (uint)uVar33 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      uVar31 = *in_RDX;
   }

   uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar29 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar30 = uVar29 ^ uVar29 >> 0x10;
   if (uVar29 == uVar29 >> 0x10) {
      uVar33 = 1;
      uVar30 = 1;
   }
 else {
      uVar33 = (ulong)uVar30;
   }

   uVar41 = 0;
   *(uint*)( lVar34 + (ulong)uVar42 * 4 ) = uVar31;
   lVar3 = in_RSI[3];
   uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar40 = CONCAT44(0, uVar42);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar36;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar40;
   lVar39 = SUB168(auVar13 * auVar25, 8) * 4;
   iVar38 = SUB164(auVar13 * auVar25, 8);
   lVar35 = in_RSI[2];
   puVar47 = (uint*)( lVar3 + lVar39 );
   lVar4 = in_RSI[1];
   uVar31 = *puVar47;
   uVar29 = *(uint*)( (long)in_RSI + 0x24 );
   plStack_98 = in_RSI;
   while (uVar31 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar31 * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      uVar32 = uVar30;
      uVar46 = uVar29;
      if (uVar31 < uVar41) {
         puVar37 = (uint*)( lVar39 + lVar4 );
         *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
         uVar32 = *puVar47;
         *puVar47 = uVar30;
         uVar46 = *puVar37;
         *puVar37 = uVar29;
         uVar41 = uVar31;
      }

      uVar41 = uVar41 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar38 + 1) * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      plStack_98 = SUB168(auVar16 * auVar28, 8);
      lVar39 = (long)plStack_98 * 4;
      iVar38 = SUB164(auVar16 * auVar28, 8);
      puVar47 = (uint*)( lVar3 + lVar39 );
      uVar29 = uVar46;
      uVar30 = uVar32;
      uVar31 = *puVar47;
   }
;
   *puVar47 = uVar30;
   *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
   *(uint*)( lVar4 + lVar39 ) = uVar29;
   uVar32 = *(uint*)( (long)in_RSI + 0x24 );
   uVar42 = uVar32 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar42;
   LAB_0010727f:param_1[3] = uVar32;
   *(long*)param_1 = lVar34;
   param_1[2] = uVar42;
   auVar48._8_8_ = plStack_98;
   auVar48._0_8_ = param_1;
   return auVar48;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC33;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x22;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001078d5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001078d5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00107ae8) *//* String vformat<double>(String const&, double const) */String *vformat<double>(String *param_1, double param_2) {
   char cVar1;
   Variant *this;
   bool *in_RSI;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_2);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, in_RSI);
   *(undefined8*)param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00107d6b;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00107d6b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00107d6b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MultiplayerPeer::is_class(String const&) const */undefined8 MultiplayerPeer::is_class(MultiplayerPeer *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00107f8b;
   }

   cVar5 = String::operator ==(param_1, "MultiplayerPeer");
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
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00107f8b;
      }

      cVar5 = String::operator ==(param_1, "PacketPeer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_00108095;
      }

   }

   LAB_00107f8b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00108095:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WebSocketMultiplayerPeer::is_class(String const&) const */undefined8 WebSocketMultiplayerPeer::is_class(WebSocketMultiplayerPeer *this, String *param_1) {
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010819b;
   }

   cVar4 = String::operator ==(param_1, "WebSocketMultiplayerPeer");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = MultiplayerPeer::is_class((MultiplayerPeer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010819b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
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
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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
/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC33;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 3;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00108435;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00108435:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC33;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 2;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00108595;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00108595:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
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
      LAB_0010878d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010878d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x001087af;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x001087af:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
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
   plVar1 = *(long**)pLVar5;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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
/* PacketPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PacketPeer::_get_property_listv(PacketPeer *this, List *param_1, bool param_2) {
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
   local_78 = "PacketPeer";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PacketPeer";
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
      LAB_00108b0d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00108b0d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00108b2f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00108b2f:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "PacketPeer", false);
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
/* MultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MultiplayerPeer::_get_property_listv(MultiplayerPeer *this, List *param_1, bool param_2) {
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
      PacketPeer::_get_property_listv((PacketPeer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "MultiplayerPeer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MultiplayerPeer";
   local_98 = 0;
   local_70 = 0xf;
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
      LAB_00108eed:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00108eed;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00108f0f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00108f0f:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "MultiplayerPeer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PacketPeer::_get_property_listv((PacketPeer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void WebSocketMultiplayerPeer::_get_property_listv(WebSocketMultiplayerPeer *this, List *param_1, bool param_2) {
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
      MultiplayerPeer::_get_property_listv((MultiplayerPeer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "WebSocketMultiplayerPeer";
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "WebSocketMultiplayerPeer";
   local_98 = 0;
   local_70 = 0x18;
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
      LAB_001092cd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001092cd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001092ef;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001092ef:if (lVar2 == 0) {
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "WebSocketMultiplayerPeer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         MultiplayerPeer::_get_property_listv((MultiplayerPeer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
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
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC33;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 2, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
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
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC33;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 3, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector<String> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector<String>const&>::_gen_argument_type_info(int param_1) {
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
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC33;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x22, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<WebSocketPeer>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<WebSocketPeer>,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0xd;
      local_68 = "WebSocketPeer";
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar6 = 0x18;
      puVar6[6] = 0x11;
      *(undefined8*)( puVar6 + 8 ) = 0;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar6[10] = 6;
         LAB_00109dd7:StringName::StringName((StringName*)&local_68, (String*)( puVar6 + 8 ), false);
         if (*(char**)( puVar6 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(char**)( puVar6 + 4 ) = local_68;
         }

      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)&local_a0);
         puVar6[10] = 6;
         if (puVar6[6] == 0x11) goto LAB_00109dd7;
         StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_98);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_00109c80;
   }

   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = "";
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_00109cb8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109cb8;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
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
   *puVar6 = (undefined4)local_98;
   *(undefined8*)( puVar6 + 2 ) = uVar4;
   *(undefined8*)( puVar6 + 4 ) = uVar5;
   puVar6[6] = (undefined4)local_80;
   *(long*)( puVar6 + 8 ) = local_78;
   puVar6[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_00109c80:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar6;
}
/* MethodBindTRC<int, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      local_68 = &_LC33;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar7 = 2;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar7[10] = 6;
         LAB_0010a047:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_0010a047;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_0010a082;
   }

   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC33;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010a0b8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010a0b8;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
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
   uVar6 = local_90._8_8_;
   uVar5 = local_90._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_90._8_8_;
   local_90 = auVar4 << 0x40;
   *puVar7 = (undefined4)local_98;
   *(undefined8*)( puVar7 + 2 ) = uVar5;
   *(undefined8*)( puVar7 + 4 ) = uVar6;
   puVar7[6] = (undefined4)local_80;
   *(long*)( puVar7 + 8 ) = local_78;
   puVar7[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010a082:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindTRC<IPAddress, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<IPAddress,int>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
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
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      local_68 = &_LC33;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar7 = 4;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar7[10] = 6;
         LAB_0010a407:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_0010a407;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_0010a442;
   }

   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC33;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010a478:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010a478;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
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
   uVar6 = local_90._8_8_;
   uVar5 = local_90._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_90._8_8_;
   local_90 = auVar4 << 0x40;
   *puVar7 = (undefined4)local_98;
   *(undefined8*)( puVar7 + 2 ) = uVar5;
   *(undefined8*)( puVar7 + 4 ) = uVar6;
   puVar7[6] = (undefined4)local_80;
   *(long*)( puVar7 + 8 ) = local_78;
   puVar7[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010a442:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* Ref<WebSocketPeer>::unref() */void Ref<WebSocketPeer>::unref(Ref<WebSocketPeer> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, Ref<WebSocketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<WebSocketPeer> > > >::operator[](int const&) */undefined1 * __thiscallHashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>>::operator [](HashMap<int,Ref<WebSocketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<WebSocketPeer>>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2uint uVar3void *pvVar4void *__slong lVar5long lVar6undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1(*pauVar23)[16];char cVar24uint uVar25uint uVar26uint uVar27ulong uVar28undefined8 uVar29void *__s_00undefined1(*pauVar30)[16];void *pvVar31int iVar32long lVar33long lVar34ulong uVar35undefined8 uVar36uint uVar37uint uVar38ulong uVar39undefined1(*pauVar40)[16];long in_FS_OFFSETuint local_48uint local_44long local_40uVar26 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_48 = 0;cVar24 = _lookup_pos(this, (int*)(ulong)uVar26, &local_48);if (cVar24 == '\0') {
   uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      uVar35 = (ulong)uVar27;
      uVar28 = uVar35 * 4;
      uVar39 = uVar35 * 8;
      uVar29 = Memory::alloc_static(uVar28, false);
      *(undefined8*)( this + 0x10 ) = uVar29;
      pvVar31 = (void*)Memory::alloc_static(uVar39, false);
      *(void**)( this + 8 ) = pvVar31;
      if (uVar27 != 0) {
         pvVar4 = *(void**)( this + 0x10 );
         if (( pvVar4 < (void*)( (long)pvVar31 + uVar39 ) ) && ( pvVar31 < (void*)( (long)pvVar4 + uVar28 ) )) {
            uVar28 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar28 * 4 ) = 0;
               *(undefined8*)( (long)pvVar31 + uVar28 * 8 ) = 0;
               uVar28 = uVar28 + 1;
            }
 while ( uVar35 != uVar28 );
         }
 else {
            memset(pvVar4, 0, uVar28);
            memset(pvVar31, 0, uVar39);
         }

      }

      uVar26 = *param_1;
   }

   local_44 = 0;
   cVar24 = _lookup_pos(this, (int*)(ulong)uVar26, &local_44);
   if (cVar24 == '\0') {
      if ((float)uVar27 * __LC34 < (float)( *(int*)( this + 0x2c ) + 1 )) {
         uVar26 = *(uint*)( this + 0x28 );
         if (uVar26 == 0x1c) {
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            pauVar30 = (undefined1(*) [16])0x0;
            goto LAB_0010aa95;
         }

         uVar28 = ( ulong )(uVar26 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar27 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
         if (uVar26 + 1 < 2) {
            uVar28 = 2;
         }

         uVar26 = *(uint*)( hash_table_size_primes + uVar28 * 4 );
         uVar35 = (ulong)uVar26;
         *(int*)( this + 0x28 ) = (int)uVar28;
         pvVar31 = *(void**)( this + 8 );
         uVar28 = uVar35 * 4;
         uVar39 = uVar35 * 8;
         pvVar4 = *(void**)( this + 0x10 );
         uVar29 = Memory::alloc_static(uVar28, false);
         *(undefined8*)( this + 0x10 ) = uVar29;
         __s_00 = (void*)Memory::alloc_static(uVar39, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar26 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar28 ) )) {
               uVar28 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar28 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar28 * 8 ) = 0;
                  uVar28 = uVar28 + 1;
               }
 while ( uVar28 != uVar35 );
            }
 else {
               memset(__s, 0, uVar28);
               memset(__s_00, 0, uVar39);
            }

         }

         if (uVar27 == 0) {
            uVar26 = *param_1;
         }
 else {
            uVar28 = 0;
            do {
               uVar26 = *(uint*)( (long)pvVar4 + uVar28 * 4 );
               if (uVar26 != 0) {
                  lVar5 = *(long*)( this + 0x10 );
                  uVar37 = 0;
                  uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar39 = CONCAT44(0, uVar3);
                  lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar26 * lVar6;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar39;
                  lVar33 = SUB168(auVar7 * auVar15, 8);
                  puVar1 = (uint*)( lVar5 + lVar33 * 4 );
                  iVar32 = SUB164(auVar7 * auVar15, 8);
                  uVar38 = *puVar1;
                  uVar29 = *(undefined8*)( (long)pvVar31 + uVar28 * 8 );
                  while (uVar38 != 0) {
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = (ulong)uVar38 * lVar6;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar39;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(( iVar32 + uVar3 ) - SUB164(auVar8 * auVar16, 8)) * lVar6;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar39;
                     uVar25 = SUB164(auVar9 * auVar17, 8);
                     uVar36 = uVar29;
                     if (uVar25 < uVar37) {
                        *puVar1 = uVar26;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar33 * 8 );
                        uVar36 = *puVar2;
                        *puVar2 = uVar29;
                        uVar26 = uVar38;
                        uVar37 = uVar25;
                     }

                     uVar37 = uVar37 + 1;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(iVar32 + 1) * lVar6;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = uVar39;
                     lVar33 = SUB168(auVar10 * auVar18, 8);
                     puVar1 = (uint*)( lVar5 + lVar33 * 4 );
                     iVar32 = SUB164(auVar10 * auVar18, 8);
                     uVar29 = uVar36;
                     uVar38 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar33 * 8 ) = uVar29;
                  *puVar1 = uVar26;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar28 = uVar28 + 1;
            }
 while ( uVar27 != uVar28 );
            Memory::free_static(pvVar31, false);
            Memory::free_static(pvVar4, false);
            uVar26 = *param_1;
         }

      }

      pauVar30 = (undefined1(*) [16])operator_new(0x20, "");
      *(uint*)pauVar30[1] = uVar26;
      *(undefined8*)( pauVar30[1] + 8 ) = 0;
      *pauVar30 = (undefined1[16])0x0;
      puVar2 = *(undefined8**)( this + 0x20 );
      if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
      }
 else {
         *puVar2 = pauVar30;
         *(undefined8**)( *pauVar30 + 8 ) = puVar2;
      }

      uVar26 = *param_1;
      *(undefined1(**) [16])( this + 0x20 ) = pauVar30;
      uVar26 = ( uVar26 >> 0x10 ^ uVar26 ) * -0x7a143595;
      uVar27 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
      uVar26 = uVar27 ^ uVar27 >> 0x10;
      if (uVar27 == uVar27 >> 0x10) {
         uVar28 = 1;
         uVar26 = 1;
      }
 else {
         uVar28 = (ulong)uVar26;
      }

      lVar5 = *(long*)( this + 0x10 );
      uVar38 = 0;
      uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar27);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      lVar34 = SUB168(auVar11 * auVar19, 8);
      lVar33 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar5 + lVar34 * 4 );
      iVar32 = SUB164(auVar11 * auVar19, 8);
      uVar3 = *puVar1;
      pauVar23 = pauVar30;
      while (uVar3 != 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar3 * lVar6;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar39;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( iVar32 + uVar27 ) - SUB164(auVar12 * auVar20, 8)) * lVar6;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar39;
         uVar37 = SUB164(auVar13 * auVar21, 8);
         pauVar40 = pauVar23;
         if (uVar37 < uVar38) {
            *puVar1 = uVar26;
            puVar2 = (undefined8*)( lVar33 + lVar34 * 8 );
            pauVar40 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar23;
            uVar26 = uVar3;
            uVar38 = uVar37;
         }

         uVar38 = uVar38 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar6;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar39;
         lVar34 = SUB168(auVar14 * auVar22, 8);
         puVar1 = (uint*)( lVar5 + lVar34 * 4 );
         iVar32 = SUB164(auVar14 * auVar22, 8);
         pauVar23 = pauVar40;
         uVar3 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar33 + lVar34 * 8 ) = pauVar23;
      *puVar1 = uVar26;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   }
 else {
      uVar28 = (ulong)local_44;
      Ref<WebSocketPeer>::operator =((Ref<WebSocketPeer>*)( *(long*)( *(long*)( this + 8 ) + uVar28 * 8 ) + 0x18 ), (Ref*)0x0);
      pauVar30 = *(undefined1(**) [16])( *(long*)( this + 8 ) + uVar28 * 8 );
   }

}
 else {
   pauVar30 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_48 * 8 );
}
LAB_0010aa95:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar30[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, WebSocketMultiplayerPeer::PendingPeer, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   WebSocketMultiplayerPeer::PendingPeer> > >::operator[](int const&) */undefined8 * __thiscallHashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>>::operator [](HashMap<int,WebSocketMultiplayerPeer::PendingPeer,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,WebSocketMultiplayerPeer::PendingPeer>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2uint uVar3void *pvVar4void *__slong lVar5long lVar6undefined8 *puVar7Object *pOVar8undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]char cVar25uint uVar26uint uVar27uint uVar28ulong uVar29undefined8 uVar30void *__s_00undefined8 *puVar31void *pvVar32int iVar33long lVar34long lVar35ulong uVar36undefined8 uVar37uint uVar38uint uVar39ulong uVar40undefined8 *puVar41long in_FS_OFFSETuint local_a0uint local_9c[3]undefined1 local_90[16]undefined8 local_80undefined1 local_78[16]uint local_68undefined8 local_60undefined1 local_58[16]Ref *local_48long local_40uVar27 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_a0 = 0;cVar25 = _lookup_pos(this, (int*)(ulong)uVar27, &local_a0);if (cVar25 != '\0') {
   puVar31 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + (ulong)local_a0 * 8 ) + 0x18 );
   goto LAB_0010b199;
}
local_9c[1] = 0;local_9c[2] = 0;local_80 = 0;uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_90 = (undefined1[16])0x0;if (*(long*)( this + 8 ) == 0) {
   uVar36 = (ulong)uVar28;
   uVar29 = uVar36 * 4;
   uVar40 = uVar36 * 8;
   uVar30 = Memory::alloc_static(uVar29, false);
   *(undefined8*)( this + 0x10 ) = uVar30;
   pvVar32 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = pvVar32;
   if (uVar28 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar32 + uVar40 ) ) && ( pvVar32 < (void*)( (long)pvVar4 + uVar29 ) )) {
         uVar29 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar29 * 4 ) = 0;
            *(undefined8*)( (long)pvVar32 + uVar29 * 8 ) = 0;
            uVar29 = uVar29 + 1;
         }
 while ( uVar36 != uVar29 );
      }
 else {
         memset(pvVar4, 0, uVar29);
         memset(pvVar32, 0, uVar40);
      }

   }

   uVar27 = *param_1;
}
local_9c[0] = 0;cVar25 = _lookup_pos(this, (int*)(ulong)uVar27, local_9c);if (cVar25 == '\0') {
   if ((float)uVar28 * __LC34 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar27 = *(uint*)( this + 0x28 );
      if (uVar27 == 0x1c) {
         puVar31 = (undefined8*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010b157;
      }

      uVar29 = ( ulong )(uVar27 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar28 = *(uint*)( hash_table_size_primes + (ulong)uVar27 * 4 );
      if (uVar27 + 1 < 2) {
         uVar29 = 2;
      }

      uVar27 = *(uint*)( hash_table_size_primes + uVar29 * 4 );
      uVar36 = (ulong)uVar27;
      *(int*)( this + 0x28 ) = (int)uVar29;
      pvVar32 = *(void**)( this + 8 );
      uVar29 = uVar36 * 4;
      uVar40 = uVar36 * 8;
      pvVar4 = *(void**)( this + 0x10 );
      uVar30 = Memory::alloc_static(uVar29, false);
      *(undefined8*)( this + 0x10 ) = uVar30;
      __s_00 = (void*)Memory::alloc_static(uVar40, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar27 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar40 ) ) && ( __s_00 < (void*)( (long)__s + uVar29 ) )) {
            uVar29 = 0;
            do {
               *(undefined4*)( (long)__s + uVar29 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar29 * 8 ) = 0;
               uVar29 = uVar29 + 1;
            }
 while ( uVar36 != uVar29 );
         }
 else {
            memset(__s, 0, uVar29);
            memset(__s_00, 0, uVar40);
         }

      }

      if (uVar28 == 0) {
         uVar27 = *param_1;
      }
 else {
         uVar29 = 0;
         do {
            uVar27 = *(uint*)( (long)pvVar4 + uVar29 * 4 );
            if (uVar27 != 0) {
               lVar5 = *(long*)( this + 0x10 );
               uVar38 = 0;
               uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar40 = CONCAT44(0, uVar3);
               lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar27 * lVar6;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar40;
               lVar34 = SUB168(auVar9 * auVar17, 8);
               puVar1 = (uint*)( lVar5 + lVar34 * 4 );
               iVar33 = SUB164(auVar9 * auVar17, 8);
               uVar39 = *puVar1;
               uVar30 = *(undefined8*)( (long)pvVar32 + uVar29 * 8 );
               while (uVar39 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar39 * lVar6;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar40;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar3 + iVar33 ) - SUB164(auVar10 * auVar18, 8)) * lVar6;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar40;
                  uVar26 = SUB164(auVar11 * auVar19, 8);
                  uVar37 = uVar30;
                  if (uVar26 < uVar38) {
                     *puVar1 = uVar27;
                     puVar31 = (undefined8*)( (long)__s_00 + lVar34 * 8 );
                     uVar37 = *puVar31;
                     *puVar31 = uVar30;
                     uVar27 = uVar39;
                     uVar38 = uVar26;
                  }

                  uVar38 = uVar38 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar33 + 1) * lVar6;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar40;
                  lVar34 = SUB168(auVar12 * auVar20, 8);
                  puVar1 = (uint*)( lVar5 + lVar34 * 4 );
                  iVar33 = SUB164(auVar12 * auVar20, 8);
                  uVar30 = uVar37;
                  uVar39 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar34 * 8 ) = uVar30;
               *puVar1 = uVar27;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar29 = uVar29 + 1;
         }
 while ( uVar28 != uVar29 );
         Memory::free_static(pvVar32, false);
         Memory::free_static(pvVar4, false);
         uVar27 = *param_1;
      }

   }

   local_78 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_48 = (Ref*)0x0;
   local_68 = uVar27;
   Ref<WebSocketPeer>::operator =((Ref<WebSocketPeer>*)&local_48, (Ref*)0x0);
   puVar31 = (undefined8*)operator_new(0x38, "");
   *puVar31 = local_78._0_8_;
   puVar31[1] = local_78._8_8_;
   puVar31[4] = 0;
   *(uint*)( puVar31 + 2 ) = local_68;
   puVar31[3] = local_60;
   if (local_58._0_8_ != 0) {
      puVar31[4] = local_58._0_8_;
      cVar25 = RefCounted::reference();
      if (cVar25 == '\0') {
         puVar31[4] = 0;
      }

   }

   puVar31[5] = 0;
   if (local_58._8_8_ != 0) {
      puVar31[5] = local_58._8_8_;
      cVar25 = RefCounted::reference();
      if (cVar25 == '\0') {
         puVar31[5] = 0;
      }

   }

   puVar31[6] = 0;
   Ref<WebSocketPeer>::operator =((Ref<WebSocketPeer>*)( puVar31 + 6 ), local_48);
   Ref<WebSocketPeer>::unref((Ref<WebSocketPeer>*)&local_48);
   uVar30 = local_58._8_8_;
   if (( ( (Object*)local_58._8_8_ != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)uVar30 + 0x140 ))(uVar30);
   Memory::free_static((void*)uVar30, false);
}
uVar30 = local_58._0_8_;if (( ( (Object*)local_58._0_8_ != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)uVar30 + 0x140 ))(uVar30);Memory::free_static((void*)uVar30, false);}puVar7 = *(undefined8**)( this + 0x20 );if (puVar7 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar31;
}
 else {
   *puVar7 = puVar31;
   puVar31[1] = puVar7;
}
uVar27 = *param_1;*(undefined8**)( this + 0x20 ) = puVar31;uVar27 = ( uVar27 >> 0x10 ^ uVar27 ) * -0x7a143595;uVar28 = ( uVar27 ^ uVar27 >> 0xd ) * -0x3d4d51cb;uVar27 = uVar28 ^ uVar28 >> 0x10;if (uVar28 == uVar28 >> 0x10) {
   uVar29 = 1;
   uVar27 = 1;
}
 else {
   uVar29 = (ulong)uVar27;
}
uVar39 = 0;lVar5 = *(long*)( this + 0x10 );lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar28);auVar13._8_8_ = 0;auVar13._0_8_ = uVar29 * lVar6;auVar21._8_8_ = 0;auVar21._0_8_ = uVar40;lVar35 = SUB168(auVar13 * auVar21, 8);lVar34 = *(long*)( this + 8 );puVar1 = (uint*)( lVar5 + lVar35 * 4 );iVar33 = SUB164(auVar13 * auVar21, 8);uVar3 = *puVar1;puVar7 = puVar31;while (uVar3 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar3 * lVar6;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar28 + iVar33 ) - SUB164(auVar14 * auVar22, 8)) * lVar6;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar40;
   uVar38 = SUB164(auVar15 * auVar23, 8);
   puVar41 = puVar7;
   if (uVar38 < uVar39) {
      *puVar1 = uVar27;
      puVar2 = (undefined8*)( lVar34 + lVar35 * 8 );
      puVar41 = (undefined8*)*puVar2;
      *puVar2 = puVar7;
      uVar27 = uVar3;
      uVar39 = uVar38;
   }

   uVar39 = uVar39 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar33 + 1) * lVar6;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar40;
   lVar35 = SUB168(auVar16 * auVar24, 8);
   puVar1 = (uint*)( lVar5 + lVar35 * 4 );
   iVar33 = SUB164(auVar16 * auVar24, 8);
   puVar7 = puVar41;
   uVar3 = *puVar1;
}
;*(undefined8**)( lVar34 + lVar35 * 8 ) = puVar7;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;}
  else{
   uVar29 = (ulong)local_9c[0];
   lVar5 = *(long*)( *(long*)( this + 8 ) + uVar29 * 8 );
   pOVar8 = *(Object**)( lVar5 + 0x20 );
   *(undefined8*)( lVar5 + 0x18 ) = 0;
   if (pOVar8 != (Object*)0x0) {
      *(undefined8*)( lVar5 + 0x20 ) = 0;
      cVar25 = RefCounted::unreference();
      if (( cVar25 != '\0' ) && ( cVar25 = predelete_handler(pOVar8) ),cVar25 != '\0') {
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }

   }

   pOVar8 = *(Object**)( lVar5 + 0x28 );
   if (pOVar8 != (Object*)0x0) {
      *(undefined8*)( lVar5 + 0x28 ) = 0;
      cVar25 = RefCounted::unreference();
      if (( cVar25 != '\0' ) && ( cVar25 = predelete_handler(pOVar8) ),cVar25 != '\0') {
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }

   }

   Ref<WebSocketPeer>::operator =((Ref<WebSocketPeer>*)( lVar5 + 0x30 ), (Ref*)0x0);
   puVar31 = *(undefined8**)( *(long*)( this + 8 ) + uVar29 * 8 );
}
LAB_0010b157:puVar31 = puVar31 + 3;Ref<WebSocketPeer>::unref((Ref<WebSocketPeer>*)&local_80);uVar30 = local_90._8_8_;if (( ( (Object*)local_90._8_8_ != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)uVar30 + 0x140 ))(uVar30);Memory::free_static((void*)uVar30, false);}uVar30 = local_90._0_8_;if (( ( (Object*)local_90._0_8_ != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)uVar30 + 0x140 ))(uVar30);Memory::free_static((void*)uVar30, false);}LAB_0010b199:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar31;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, Error, String const&, Ref<TLSOptions>
   >(Error (WebSocketMultiplayerPeer::*)(String const&, Ref<TLSOptions>)) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,Error,String_const&,Ref<TLSOptions>>(_func_Error_String_ptr_Ref *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Error_String_ptr_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113160;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, Error, int, IPAddress, Ref<TLSOptions>
   >(Error (WebSocketMultiplayerPeer::*)(int, IPAddress, Ref<TLSOptions>)) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,Error,int,IPAddress,Ref<TLSOptions>>(_func_Error_int_IPAddress_Ref *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Error_int_IPAddress_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001131c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, Ref<WebSocketPeer>,
   int>(Ref<WebSocketPeer> (WebSocketMultiplayerPeer::*)(int) const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,Ref<WebSocketPeer>,int>(_func_Ref_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113220;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, IPAddress, int>(IPAddress
   (WebSocketMultiplayerPeer::*)(int) const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,IPAddress,int>(_func_IPAddress_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_IPAddress_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113280;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, int, int>(int
   (WebSocketMultiplayerPeer::*)(int) const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,int,int>(_func_int_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001132e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, Vector<String>>(Vector<String>
   (WebSocketMultiplayerPeer::*)() const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,Vector<String>>(_func_Vector *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113340;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, Vector<String> const&>(void
   (WebSocketMultiplayerPeer::*)(Vector<String> const&)) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,Vector<String>const&>(_func_void_Vector_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Vector_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001133a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, int>(int (WebSocketMultiplayerPeer::*)()
   const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,int>(_func_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113400;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, int>(void
   (WebSocketMultiplayerPeer::*)(int)) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,int>(_func_void_int *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113460;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, float>(float
   (WebSocketMultiplayerPeer::*)() const) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,float>(_func_float *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001134c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<WebSocketMultiplayerPeer, float>(void
   (WebSocketMultiplayerPeer::*)(float)) */MethodBind *create_method_bind<WebSocketMultiplayerPeer,float>(_func_void_float *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00113520;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WebSocketMultiplayerPeer";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WebSocketMultiplayerPeer::_initialize_classv() */void WebSocketMultiplayerPeer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (MultiplayerPeer::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_00118010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "PacketPeer";
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
        PacketPeer::_bind_methods();
        PacketPeer::initialize_class()::initialized = '\x01';
      }
      local_58 = "PacketPeer";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "MultiplayerPeer";
      local_70 = 0;
      local_50 = 0xf;
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
      if ((code *)PTR__bind_methods_00118008 != PacketPeer::_bind_methods) {
        MultiplayerPeer::_bind_methods();
      }
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "WebSocketMultiplayerPeer";
    local_70 = 0;
    local_50 = 0x18;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<StreamPeer>::unref() */

void __thiscall Ref<StreamPeer>::unref(Ref<StreamPeer> *this)

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



/* Ref<StreamPeerTLS>::unref() */

void __thiscall Ref<StreamPeerTLS>::unref(Ref<StreamPeerTLS> *this)

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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

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
          plVar6 = plVar6 + 1;
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "Error";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10c5d0);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0010c6e5;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010c6e5:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebSocketMultiplayerPeer::_poll_server() [clone .cold] */

void WebSocketMultiplayerPeer::_poll_server(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x0010c9b8) */
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
  String::sprintf((Array *)local_b8,param_2);
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



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010cdf9;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010cc82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010cdf9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_0010cfe9;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0010ce71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010cfe9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
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
  float fVar5;
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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d140;
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
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
LAB_0010d140:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_0010d358;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0010d358:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_0010d517;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_0010d517:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010d861;
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
                    /* WARNING: Could not recover jumptable at 0x0010d6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010d861:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010da41;
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
                    /* WARNING: Could not recover jumptable at 0x0010d8cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010da41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010db10;
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
LAB_0010db10:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      goto LAB_0010dd24;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010dd24:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      goto LAB_0010ded3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_0010ded3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<String> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<String>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0010e219;
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
                    /* WARNING: Could not recover jumptable at 0x0010e0a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010e219:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<String> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<String>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0010e3f1;
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
                    /* WARNING: Could not recover jumptable at 0x0010e279. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010e3f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e4d0;
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
      (*(code *)pVVar2)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_0010e4d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
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
      local_48 = (Variant **)0x10cb38;
      local_40[0] = 0x35;
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
      goto LAB_0010e717;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010e717:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
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
      local_48 = (void **)0x10cb38;
      local_40[0] = 0x35;
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
      goto LAB_0010e8f3;
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
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_0010e8f3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int,int>::validated_call
          (MethodBindTRC<int,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010ea9a;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_0010ea9a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int,int>::ptrcall
          (MethodBindTRC<int,int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
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
      goto LAB_0010ec78;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(long *)param_3 = (long)iVar1;
LAB_0010ec78:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<IPAddress,int>::validated_call
          (MethodBindTRC<IPAddress,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((IPAddress *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eeb7;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  IPAddress::operator_cast_to_String((IPAddress *)&local_78);
  if (*(char **)(param_3 + 8) != local_78) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    pcVar1 = local_78;
    local_78 = (char *)0x0;
    *(char **)(param_3 + 8) = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0010eeb7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<IPAddress, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<IPAddress,int>::ptrcall
          (MethodBindTRC<IPAddress,int> *this,Object *param_1,void **param_2,void *param_3)

{
  char *pcVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      vformat<StringName>((IPAddress *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(IPAddress *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f0cf;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar2)(local_48,param_1 + *(long *)(this + 0x60),**param_2);
  IPAddress::operator_cast_to_String((IPAddress *)&local_58);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)param_3);
    pcVar1 = local_58;
    local_58 = (char *)0x0;
    *(char **)param_3 = pcVar1;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_0010f0cf:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<WebSocketPeer>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<WebSocketPeer>,int>::ptrcall
          (MethodBindTRC<Ref<WebSocketPeer>,int> *this,Object *param_1,void **param_2,void *param_3)

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
      local_48 = (Object *)0x10cb38;
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
      goto LAB_0010f309;
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
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010f309;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010f351;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010f351;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010f351:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010f309;
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
LAB_0010f309:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,Ref<TLSOptions>>::validated_call
          (MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

{
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
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10cb38;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f64c;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(param_2[1] + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010f5fb:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&TLSOptions::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010f5fb;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = (*pcVar7)(param_1 + lVar1,*param_2 + 8,(StringName *)&local_68);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010f64c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::validated_call
          (MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

{
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
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10cb38;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f9a4;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)(param_1 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_58,*(Object **)(param_2[2] + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar2 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010f925:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&TLSOptions::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010f925;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  IPAddress::IPAddress((IPAddress *)local_58,(String *)(param_2[1] + 8));
  uVar4 = (*pcVar7)(param_1 + lVar1,*(undefined8 *)(*param_2 + 8),(StringName *)&local_68);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010f9a4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTR<Error,String_const&,Ref<TLSOptions>>::ptrcall
          (MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this,Object *param_1,void **param_2,
          void *param_3)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10cb38;
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fc61;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[1] == (long *)0x0) || (local_58 = *param_2[1], local_58 == (Object *)0x0)) {
LAB_0010fc32:
    local_58 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010fc32;
  }
  uVar4 = (*pcVar6)(param_1 + lVar1,*param_2,(StringName *)&local_58);
  *(ulong *)param_3 = (ulong)uVar4;
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010fc61:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::ptrcall
          (MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  IPAddress local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10cb38;
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fecb;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  if (((long *)param_2[2] == (long *)0x0) || (local_68 = *param_2[2], local_68 == (Object *)0x0)) {
LAB_0010fe72:
    local_68 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010fe72;
  }
  IPAddress::IPAddress(local_58,(String *)param_2[1]);
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar6)(param_1 + lVar1,**param_2,(StringName *)&local_68);
  *(ulong *)param_3 = (ulong)uVar4;
  if (local_68 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_68;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_68);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010fecb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<WebSocketPeer>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<WebSocketPeer>,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
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
    if (local_68 == (Object *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10cb38;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001101a0;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001101f0;
LAB_001101e0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001101f0:
        uVar7 = 4;
        goto LAB_00110195;
      }
      if (in_R8D == 1) goto LAB_001101e0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC116;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((Ref<WebSocketPeer> *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),
                       iVar6);
    Variant::Variant((Variant *)local_58,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    Ref<WebSocketPeer>::unref((Ref<WebSocketPeer> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00110195:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001101a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<IPAddress, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<IPAddress,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  IPAddress local_68 [32];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_00110530;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00110570;
LAB_00110560:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110570:
        uVar7 = 4;
        goto LAB_00110525;
      }
      if (in_R8D == 1) goto LAB_00110560;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC116;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)(local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00110525:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110530:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001108b0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001108f0;
LAB_001108e0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001108f0:
        uVar7 = 4;
        goto LAB_001108a5;
      }
      if (in_R8D == 1) goto LAB_001108e0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC116;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    iVar6 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_48,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_001108a5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001108b0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<String> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<String>const&>::call
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
  undefined8 local_40 [2];
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
      local_40[0] = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00110ca0;
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
      if (in_R8D != 1) goto LAB_00110cf0;
LAB_00110ce0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00110cf0:
        uVar6 = 4;
        goto LAB_00110c95;
      }
      if (in_R8D == 1) goto LAB_00110ce0;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x22);
    uVar4 = _LC118;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<String>::_unref((CowData<String> *)local_40);
  }
  else {
    uVar6 = 3;
LAB_00110c95:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00110ca0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::call
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
  long local_b8;
  undefined8 local_b0;
  Object *local_a8;
  undefined8 local_a0;
  Variant local_98 [32];
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar13 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar13 != (long *)0x0) && (plVar13[1] != 0)) && (*(char *)(plVar13[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar13[1] == 0) {
      plVar11 = (long *)plVar13[0x23];
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)(**(code **)(*plVar13 + 0x40))(plVar13);
      }
    }
    else {
      plVar11 = (long *)(plVar13[1] + 0x20);
    }
    if (local_a8 == (Object *)*plVar11) {
      if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = (Object *)0x10cb38;
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_00111132;
    }
    if ((StringName::configured != '\0') && (local_a8 != (Object *)0x0)) {
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
        local_78[lVar9] = pVVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar16 & 1) != 0) {
        pVVar16 = *(Variant **)(pVVar16 + *(long *)((long)plVar13 + (long)pVVar1) + -1);
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[2]);
      uVar4 = _LC119;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      local_a8 = (Object *)0x0;
      pOVar10 = (Object *)Variant::get_validated_object();
      pOVar5 = local_a8;
      if (pOVar10 != local_a8) {
        if (pOVar10 == (Object *)0x0) {
          if (local_a8 != (Object *)0x0) {
            local_a8 = (Object *)0x0;
LAB_0011100d:
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
          pOVar10 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&TLSOptions::typeinfo,0);
          if (pOVar5 != pOVar10) {
            local_a8 = pOVar10;
            if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::reference();
              if (cVar6 == '\0') {
                local_a8 = (Object *)0x0;
              }
            }
            if (pOVar5 != (Object *)0x0) goto LAB_0011100d;
          }
        }
      }
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[1],4);
      uVar4 = _LC120;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_IPAddress(local_98);
      cVar6 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC116;
      if (cVar6 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[0]);
      iVar8 = (*(code *)pVVar16)((Variant *)((long)plVar13 + (long)pVVar1),iVar8,&local_a8);
      Variant::Variant((Variant *)local_58,iVar8);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      if (local_a8 != (Object *)0x0) {
        cVar6 = RefCounted::unreference();
        pOVar5 = local_a8;
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(local_a8);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      goto LAB_00111132;
    }
    uVar7 = 4;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00111132:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,Ref<TLSOptions>>::call
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
  Object *pOVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  int iVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  Variant *pVVar16;
  long in_FS_OFFSET;
  long local_78;
  Object *local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_68 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001115e0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_001115d5:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_001115e0;
  }
  pVVar16 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar16 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_00111610;
    pVVar13 = *(Variant **)param_4;
LAB_0011162d:
    pVVar16 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar16 + -8);
    iVar14 = (int)lVar2;
    if (iVar14 < iVar7) {
LAB_00111610:
      uVar8 = 4;
      goto LAB_001115d5;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar14 + -2);
      if (lVar2 <= lVar11) goto LAB_00111750;
      pVVar13 = pVVar16 + lVar11 * 0x18;
    }
    else {
      pVVar13 = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0011162d;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar14 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00111750:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar16 = pVVar16 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar15 & 1) != 0) {
    pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar16);
  uVar4 = _LC121;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_70 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_70;
  if (pOVar9 != local_70) {
    if (pOVar9 == (Object *)0x0) {
      if (local_70 != (Object *)0x0) {
        local_70 = (Object *)0x0;
LAB_00111507:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&TLSOptions::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_70 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_70 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_00111507;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
  uVar4 = _LC122;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  Variant::operator_cast_to_String((Variant *)&local_68);
  iVar7 = (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),(Variant *)&local_68,
                             &local_70);
  Variant::Variant((Variant *)local_58,iVar7);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
LAB_001115e0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<WebSocketPeer>, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<WebSocketPeer>,int>::validated_call
          (MethodBindTRC<Ref<WebSocketPeer>,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      goto LAB_0011191c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
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
LAB_0011191c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00111bdd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00111c40;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00111c40:
      uVar6 = 4;
LAB_00111bdd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00111b5b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00111b5b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC123;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00111bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00111ca6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111ca6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
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
    goto LAB_00111f6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00111fd0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00111fd0:
      uVar6 = 4;
LAB_00111f6d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00111eeb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00111eeb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC116;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00111f46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC115,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00112036;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00112036:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Ref<TLSOptions> >(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<TLSOptions>>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
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
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = "TLSOptions";
    local_70 = 10;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<String const&, Ref<TLSOptions> >(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,Ref<TLSOptions>>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_94;
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
  local_94 = 0;
  if (param_1 == 0) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC33;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_2 = local_78._0_4_;
    if (*(long *)(param_2 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_60;
    if (*(long *)(param_2 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_94 = 1;
  call_get_argument_type_info_helper<Ref<TLSOptions>>(param_1,&local_94,param_2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,Ref<TLSOptions>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,Ref<TLSOptions>>(in_EDX,(PropertyInfo *)&local_48);
    uVar2 = local_40._0_8_;
    uVar3 = local_40._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_40._8_8_;
    local_40 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_cc;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (2 < in_EDX) {
    GetTypeInfo<Error,void>::get_class_info(this);
    goto LAB_00112739;
  }
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 6;
  local_cc = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  if (in_EDX == 0) {
    local_b8 = 0;
    local_c0 = 0;
    local_78 = &_LC33;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_c0);
    local_c8 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_c0 == 0) {
LAB_0011284b:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_b8);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_c0);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011284b;
      StringName::StringName((StringName *)&local_b0,(String *)&local_58,false);
      if (local_70._8_8_ == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_b0;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
LAB_00112887:
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
    }
    if (local_a0._8_8_ != local_70._8_8_) {
      StringName::unref();
      local_a0._8_8_ = local_70._8_8_;
      local_70._8_8_ = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  else {
    local_cc = 1;
    if (in_EDX == 1) {
      local_b0 = 0;
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      PropertyInfo::PropertyInfo
                ((PropertyInfo *)&local_78,4,(CowData<char32_t> *)&local_c0,0,(String *)&local_b8,6,
                 &local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      goto LAB_00112887;
    }
  }
  local_cc = 2;
  call_get_argument_type_info_helper<Ref<TLSOptions>>(in_EDX,&local_cc,(PropertyInfo *)&local_a8);
  uVar5 = local_a0._8_8_;
  uVar4 = local_a0._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_a0._8_8_;
  local_a0 = auVar1 << 0x40;
  *(undefined4 *)this = (undefined4)local_a8;
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x18) = (undefined4)local_90;
  *(long *)(this + 0x20) = local_88;
  *(undefined4 *)(this + 0x28) = local_80;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
LAB_00112739:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

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
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector<String> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<String>const&>::~MethodBindT(MethodBindT<Vector<String>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int,int>::~MethodBindTRC(MethodBindTRC<int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<IPAddress, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<IPAddress,int>::~MethodBindTRC(MethodBindTRC<IPAddress,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<WebSocketPeer>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<WebSocketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<WebSocketPeer>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, IPAddress, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,int,IPAddress,Ref<TLSOptions>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, Ref<TLSOptions> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,Ref<TLSOptions>>::~MethodBindTR
          (MethodBindTR<Error,String_const&,Ref<TLSOptions>> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
