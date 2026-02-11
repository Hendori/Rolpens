
/* ENetMultiplayerPeer::set_target_peer(int) */

void __thiscall ENetMultiplayerPeer::set_target_peer(ENetMultiplayerPeer *this,int param_1)

{
  *(int *)(this + 0x1ac) = param_1;
  return;
}



/* ENetMultiplayerPeer::is_server() const */

bool __thiscall ENetMultiplayerPeer::is_server(ENetMultiplayerPeer *this)

{
  return *(int *)(this + 0x1a4) == 1;
}



/* ENetMultiplayerPeer::is_server_relay_supported() const */

undefined4 __thiscall ENetMultiplayerPeer::is_server_relay_supported(ENetMultiplayerPeer *this)

{
  return CONCAT31((int3)(*(int *)(this + 0x1a4) - 1U >> 8),*(int *)(this + 0x1a4) - 1U < 2);
}



/* ENetMultiplayerPeer::get_available_packet_count() const */

undefined4 __thiscall ENetMultiplayerPeer::get_available_packet_count(ENetMultiplayerPeer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(long *)(this + 0x218) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x218) + 0x10);
  }
  return uVar1;
}



/* ENetMultiplayerPeer::get_max_packet_size() const */

undefined8 ENetMultiplayerPeer::get_max_packet_size(void)

{
  return 0x1000000;
}



/* ENetMultiplayerPeer::get_connection_status() const */

undefined4 __thiscall ENetMultiplayerPeer::get_connection_status(ENetMultiplayerPeer *this)

{
  return *(undefined4 *)(this + 0x1b0);
}



/* ENetMultiplayerPeer::get_packet_peer() const */

undefined4 __thiscall ENetMultiplayerPeer::get_packet_peer(ENetMultiplayerPeer *this)

{
  long *plVar1;
  
  if (*(int *)(this + 0x1a4) == 0) {
    _err_print_error("get_packet_peer","modules/enet/enet_multiplayer_peer.cpp",0x26,
                     "Condition \"!_is_active()\" is true. Returning: 1",
                     "The multiplayer instance isn\'t currently active.",0,0);
  }
  else {
    plVar1 = *(long **)(this + 0x218);
    if ((plVar1 != (long *)0x0) && ((int)plVar1[2] != 0)) {
      return *(undefined4 *)(*plVar1 + 8);
    }
    _err_print_error("get_packet_peer","modules/enet/enet_multiplayer_peer.cpp",0x27,
                     "Condition \"incoming_packets.is_empty()\" is true. Returning: 1",0,0);
  }
  return 1;
}



/* ENetMultiplayerPeer::get_packet_mode() const */

undefined4 __thiscall ENetMultiplayerPeer::get_packet_mode(ENetMultiplayerPeer *this)

{
  long *plVar1;
  
  if (*(int *)(this + 0x1a4) == 0) {
    _err_print_error("get_packet_mode","modules/enet/enet_multiplayer_peer.cpp",0x2d,
                     "Condition \"!_is_active()\" is true. Returning: TRANSFER_MODE_RELIABLE",
                     "The multiplayer instance isn\'t currently active.",0,0);
  }
  else {
    plVar1 = *(long **)(this + 0x218);
    if ((plVar1 != (long *)0x0) && ((int)plVar1[2] != 0)) {
      return *(undefined4 *)(*plVar1 + 0x10);
    }
    _err_print_error("get_packet_mode","modules/enet/enet_multiplayer_peer.cpp",0x2e,
                     "Condition \"incoming_packets.is_empty()\" is true. Returning: TRANSFER_MODE_RELIABLE"
                     ,0,0);
  }
  return 2;
}



/* ENetMultiplayerPeer::get_packet_channel() const */

int __thiscall ENetMultiplayerPeer::get_packet_channel(ENetMultiplayerPeer *this)

{
  long *plVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1a4) == 0) {
    _err_print_error("get_packet_channel","modules/enet/enet_multiplayer_peer.cpp",0x33,
                     "Condition \"!_is_active()\" is true. Returning: 1",
                     "The multiplayer instance isn\'t currently active.",0,0);
  }
  else {
    plVar1 = *(long **)(this + 0x218);
    if ((plVar1 != (long *)0x0) && ((int)plVar1[2] != 0)) {
      iVar2 = *(int *)(*plVar1 + 0xc);
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      return iVar2 + -1;
    }
    _err_print_error("get_packet_channel","modules/enet/enet_multiplayer_peer.cpp",0x34,
                     "Condition \"incoming_packets.is_empty()\" is true. Returning: 1",0,0);
  }
  return 1;
}



/* ENetMultiplayerPeer::set_refuse_new_connections(bool) */

void ENetMultiplayerPeer::set_refuse_new_connections(bool param_1)

{
  undefined8 *puVar1;
  undefined7 in_register_00000039;
  
  if (*(int *)(CONCAT71(in_register_00000039,param_1) + 0x1a4) != 0) {
    for (puVar1 = *(undefined8 **)(CONCAT71(in_register_00000039,param_1) + 0x1d0);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      ENetConnection::refuse_new_connections(SUB81(puVar1[3],0));
    }
  }
  MultiplayerPeer::set_refuse_new_connections(param_1);
  return;
}



/* ENetMultiplayerPeer::create_mesh(int) */

undefined4 ENetMultiplayerPeer::create_mesh(int param_1)

{
  undefined4 uVar1;
  int in_ESI;
  undefined4 in_register_0000003c;
  long lVar2;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  if (0 < in_ESI) {
    if (*(int *)(lVar2 + 0x1a4) == 0) {
      *(undefined4 *)(lVar2 + 0x1a4) = 3;
      *(int *)(lVar2 + 0x1a8) = in_ESI;
      *(undefined4 *)(lVar2 + 0x1b0) = 2;
      uVar1 = 0;
    }
    else {
      _err_print_error("create_mesh","modules/enet/enet_multiplayer_peer.cpp",0x6f,
                       "Condition \"_is_active()\" is true. Returning: ERR_ALREADY_IN_USE",
                       "The multiplayer instance is already active.",0,0);
      uVar1 = 0x16;
    }
    return uVar1;
  }
  _err_print_error("create_mesh","modules/enet/enet_multiplayer_peer.cpp",0x6e,
                   "Condition \"p_id <= 0\" is true. Returning: ERR_INVALID_PARAMETER",
                   "The unique ID must be greater then 0",0,0);
  return 0x1f;
}



/* ENetMultiplayerPeer::get_unique_id() const */

undefined4 __thiscall ENetMultiplayerPeer::get_unique_id(ENetMultiplayerPeer *this)

{
  if (*(int *)(this + 0x1a4) != 0) {
    return *(undefined4 *)(this + 0x1a8);
  }
  _err_print_error("get_unique_id","modules/enet/enet_multiplayer_peer.cpp",0x1b4,
                   "Condition \"!_is_active()\" is true. Returning: 0",
                   "The multiplayer instance isn\'t currently active.",0,0);
  return 0;
}



/* HashMap<int, Ref<ENetPacketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetPacketPeer> > > >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
::_lookup_pos(HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* HashMap<int, Ref<ENetConnection>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetConnection> > > >::_lookup_pos(int const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
::_lookup_pos(HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
              *this,int *param_1,uint *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if ((*(long *)(this + 8) == 0) || (*(int *)(this + 0x2c) == 0)) {
    return 0;
  }
  uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar10 = ((uint)((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
  uVar10 = (uVar10 ^ uVar10 >> 0xd) * -0x3d4d51cb;
  uVar14 = uVar10 ^ uVar10 >> 0x10;
  if (uVar10 == uVar10 >> 0x10) {
    uVar14 = 1;
    uVar12 = uVar1;
  }
  else {
    uVar12 = uVar14 * uVar1;
  }
  uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar15;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  lVar13 = SUB168(auVar2 * auVar6,8);
  uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
  uVar11 = SUB164(auVar2 * auVar6,8);
  if (uVar10 != 0) {
    uVar16 = 0;
    do {
      if ((uVar14 == uVar10) &&
         (*(uint *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == (uint)param_1)) {
        *param_2 = uVar11;
        return 1;
      }
      uVar16 = uVar16 + 1;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (uVar11 + 1) * uVar1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7,8);
      uVar10 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
      uVar11 = SUB164(auVar3 * auVar7,8);
    } while ((uVar10 != 0) &&
            (auVar4._8_8_ = 0, auVar4._0_8_ = uVar10 * uVar1, auVar8._8_8_ = 0,
            auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
            auVar5._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4) +
                            uVar11) - SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
            auVar9._0_8_ = uVar15, uVar16 <= SUB164(auVar5 * auVar9,8)));
  }
  return 0;
}



/* Error Object::emit_signal<int>(StringName const&, int) [clone .isra.0] */

void __thiscall Object::emit_signal<int>(Object *this,StringName *param_1,int param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_2);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*(long *)this + 0xd0))(this,param_1,local_68,1);
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ENetMultiplayerPeer::get_packet(unsigned char const**, int&) */

undefined1  [16] __thiscall
ENetMultiplayerPeer::get_packet(ENetMultiplayerPeer *this,uchar **param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uchar *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long *plVar9;
  
  plVar9 = *(long **)(this + 0x218);
  if ((plVar9 != (long *)0x0) && ((int)plVar9[2] != 0)) {
    plVar1 = *(long **)(this + 0x220);
    if (plVar1 != (long *)0x0) {
      *plVar1 = *plVar1 + -1;
      uVar5 = _LC19;
      if (*plVar1 == 0) {
        enet_packet_destroy();
        uVar5 = _LC19;
        plVar9 = *(long **)(this + 0x218);
        *(undefined8 *)(this + 0x220) = 0;
        *(undefined8 *)(this + 0x228) = uVar5;
        uVar5 = uRam0000000000000008;
        if (plVar9 == (long *)0x0) {
          *(undefined8 *)(this + 0x220) = _DAT_00000000;
          *(undefined8 *)(this + 0x228) = uVar5;
          *(undefined4 *)(this + 0x230) = _DAT_00000010;
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
      }
      else {
        *(undefined8 *)(this + 0x220) = 0;
        *(undefined8 *)(this + 0x228) = uVar5;
      }
    }
    puVar2 = (undefined8 *)*plVar9;
    uVar5 = puVar2[1];
    *(undefined8 *)(this + 0x220) = *puVar2;
    *(undefined8 *)(this + 0x228) = uVar5;
    *(undefined4 *)(this + 0x230) = *(undefined4 *)(puVar2 + 2);
    if ((long *)puVar2[5] == plVar9) {
      lVar8 = puVar2[3];
      lVar3 = puVar2[4];
      *plVar9 = lVar8;
      if ((undefined8 *)plVar9[1] == puVar2) {
        plVar9[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar8;
        lVar8 = puVar2[3];
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x20) = lVar3;
      }
      Memory::free_static(puVar2,false);
      *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(this + 0x218) + 0x10) == 0) {
      Memory::free_static(*(void **)(this + 0x218),false);
      *(undefined8 *)(this + 0x218) = 0;
    }
    puVar4 = *(uchar **)(*(long *)(this + 0x220) + 0x10);
    uVar5 = *(undefined8 *)(*(long *)(this + 0x220) + 0x18);
    *param_1 = puVar4;
    *param_2 = (int)uVar5;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = puVar4;
    return auVar7 << 0x40;
  }
  _err_print_error("get_packet","modules/enet/enet_multiplayer_peer.cpp",0x141,
                   "Condition \"incoming_packets.is_empty()\" is true. Returning: ERR_UNAVAILABLE",
                   "No incoming packets available.",0);
  return ZEXT816(2);
}



/* ENetMultiplayerPeer::close() [clone .part.0] */

void __thiscall ENetMultiplayerPeer::close(ENetMultiplayerPeer *this)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  Object *pOVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = *(long **)(this + 0x220);
  if (plVar9 != (long *)0x0) {
    *plVar9 = *plVar9 + -1;
    if (*plVar9 == 0) {
      enet_packet_destroy();
    }
    uVar6 = _LC19;
    *(undefined8 *)(this + 0x220) = 0;
    *(undefined8 *)(this + 0x228) = uVar6;
  }
  for (puVar2 = *(undefined8 **)(this + 0x200); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    if ((puVar2[3] != 0) && (iVar8 = ENetPacketPeer::get_state(), iVar8 == 5)) {
      ENetPacketPeer::peer_disconnect_now((int)puVar2[3]);
    }
  }
  for (puVar2 = *(undefined8 **)(this + 0x1d0); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    ENetConnection::flush();
    ENetConnection::destroy();
  }
  plVar9 = *(long **)(this + 0x218);
  *(undefined4 *)(this + 0x1a4) = 0;
  if (plVar9 != (long *)0x0) {
    do {
      pvVar3 = (void *)*plVar9;
      if (pvVar3 == (void *)0x0) goto LAB_001009bd;
      if (*(long **)((long)pvVar3 + 0x28) == plVar9) {
        lVar10 = *(long *)((long)pvVar3 + 0x18);
        lVar4 = *(long *)((long)pvVar3 + 0x20);
        *plVar9 = lVar10;
        if (pvVar3 == (void *)plVar9[1]) {
          plVar9[1] = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x18) = lVar10;
          lVar10 = *(long *)((long)pvVar3 + 0x18);
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x20) = lVar4;
        }
        Memory::free_static(pvVar3,false);
        *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar9 = *(long **)(this + 0x218);
    } while ((int)plVar9[2] != 0);
    Memory::free_static(plVar9,false);
    *(undefined8 *)(this + 0x218) = 0;
  }
LAB_001009bd:
  if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
    lVar10 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1f8) + lVar10) != 0) {
          *(int *)(*(long *)(this + 0x1f8) + lVar10) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0x1f0) + lVar10 * 2);
          if ((*(long *)((long)pvVar3 + 0x18) != 0) &&
             (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
            pOVar5 = *(Object **)((long)pvVar3 + 0x18);
            cVar7 = predelete_handler(pOVar5);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0x1f0) + lVar10 * 2) = 0;
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar1 << 2 != lVar10);
    }
    *(undefined4 *)(this + 0x214) = 0;
    *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
    lVar10 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x1c8) + lVar10) != 0) {
          *(int *)(*(long *)(this + 0x1c8) + lVar10) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0x1c0) + lVar10 * 2);
          if ((*(long *)((long)pvVar3 + 0x18) != 0) &&
             (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
            pOVar5 = *(Object **)((long)pvVar3 + 0x18);
            cVar7 = predelete_handler(pOVar5);
            if (cVar7 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0x1c0) + lVar10 * 2) = 0;
        }
        lVar10 = lVar10 + 4;
      } while (lVar10 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x1e4) = 0;
    *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  }
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  if (*(code **)(*(long *)this + 0x1b0) != set_refuse_new_connections) {
                    /* WARNING: Could not recover jumptable at 0x00100c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x1b0))(this,0);
    return;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    for (puVar2 = *(undefined8 **)(this + 0x1d0); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      ENetConnection::refuse_new_connections(SUB81(puVar2[3],0));
    }
  }
  MultiplayerPeer::set_refuse_new_connections(SUB81(this,0));
  return;
}



/* ENetMultiplayerPeer::close() */

void __thiscall ENetMultiplayerPeer::close(ENetMultiplayerPeer *this)

{
  if (*(int *)(this + 0x1a4) == 0) {
    return;
  }
  close(this);
  return;
}



/* ENetMultiplayerPeer::~ENetMultiplayerPeer() */

void __thiscall ENetMultiplayerPeer::~ENetMultiplayerPeer(ENetMultiplayerPeer *this)

{
  uint uVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_001105b8;
  if (*(int *)(this + 0x1a4) != 0) {
    close(this);
  }
  plVar5 = *(long **)(this + 0x218);
  if (plVar5 != (long *)0x0) {
    do {
      pvVar7 = (void *)*plVar5;
      if (pvVar7 == (void *)0x0) {
        if ((int)plVar5[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00100d43;
        }
        break;
      }
      if (*(long **)((long)pvVar7 + 0x28) == plVar5) {
        lVar6 = *(long *)((long)pvVar7 + 0x18);
        lVar2 = *(long *)((long)pvVar7 + 0x20);
        *plVar5 = lVar6;
        if (pvVar7 == (void *)plVar5[1]) {
          plVar5[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x18) = lVar6;
          lVar6 = *(long *)((long)pvVar7 + 0x18);
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x20) = lVar2;
        }
        Memory::free_static(pvVar7,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0x218);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
  }
LAB_00100d43:
  pvVar7 = *(void **)(this + 0x1f0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x214) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1f8) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1f8) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar7 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1f0);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x214) = 0;
        *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00100dfd;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1f8),false);
  }
LAB_00100dfd:
  pvVar7 = *(void **)(this + 0x1c0);
  if (pvVar7 != (void *)0x0) {
    if (*(int *)(this + 0x1e4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
      }
      else {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x1c8) + lVar6) != 0) {
            pvVar7 = *(void **)((long)pvVar7 + lVar6 * 2);
            *(int *)(*(long *)(this + 0x1c8) + lVar6) = 0;
            if (*(long *)((long)pvVar7 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar7 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            Memory::free_static(pvVar7,false);
            pvVar7 = *(void **)(this + 0x1c0);
            *(undefined8 *)((long)pvVar7 + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar1 << 2 != lVar6);
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        if (pvVar7 == (void *)0x0) goto LAB_00100eb5;
      }
    }
    Memory::free_static(pvVar7,false);
    Memory::free_static(*(void **)(this + 0x1c8),false);
  }
LAB_00100eb5:
  *(undefined **)this = &__dso_handle;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar5 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      lVar6 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00110458;
  Object::~Object((Object *)this);
  return;
}



/* ENetMultiplayerPeer::~ENetMultiplayerPeer() */

void __thiscall ENetMultiplayerPeer::~ENetMultiplayerPeer(ENetMultiplayerPeer *this)

{
  ~ENetMultiplayerPeer(this);
  operator_delete(this,0x250);
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
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
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* HashMap<int, Ref<ENetPacketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetPacketPeer> > > >::erase(int const&) [clone
   .isra.0] */

void __thiscall
HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
::erase(HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  Object *pOVar10;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  ulong uVar41;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar35 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar41 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar30 = (uVar35 >> 0x10 ^ uVar35) * -0x7a143595;
    uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar34 = uVar30 ^ uVar30 >> 0x10;
    if (uVar30 == uVar30 >> 0x10) {
      uVar34 = 1;
      uVar32 = uVar7;
    }
    else {
      uVar32 = uVar34 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    uVar32 = SUB168(auVar11 * auVar20,8);
    uVar30 = *(uint *)(lVar8 + uVar32 * 4);
    uVar37 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar30 != 0) {
      uVar39 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ((int)uVar37 + 1) * uVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar41;
        uVar33 = SUB168(auVar14 * auVar23,8);
        uVar31 = SUB164(auVar14 * auVar23,8);
        if ((uVar34 == uVar30) && (uVar35 == *(uint *)(*(long *)(lVar6 + uVar32 * 8) + 0x10))) {
          puVar40 = (uint *)(lVar8 + uVar33 * 4);
          uVar35 = *puVar40;
          if ((uVar35 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = uVar35 * uVar7, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar41, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar31 + uVar5) - SUB164(auVar15 * auVar24,8)) * uVar7,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar32 = (ulong)uVar31, uVar38 = uVar37,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar37 = uVar32;
              puVar1 = (uint *)(lVar8 + uVar38 * 4);
              *puVar40 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar33 * 8);
              *puVar1 = uVar35;
              puVar3 = (undefined8 *)(lVar6 + uVar38 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar37 + 1) * uVar7;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar41;
              uVar33 = SUB168(auVar19 * auVar28,8);
              puVar40 = (uint *)(lVar8 + uVar33 * 4);
              uVar35 = *puVar40;
              if ((uVar35 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar35 * uVar7, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar41, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) * uVar7,
                 auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, SUB164(auVar18 * auVar27,8) == 0))
              break;
              uVar32 = uVar33 & 0xffffffff;
              uVar38 = uVar37;
            }
          }
          plVar4 = (long *)(lVar6 + uVar37 * 8);
          *(undefined4 *)(lVar8 + uVar37 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((plVar36[3] != 0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) {
            pOVar10 = (Object *)plVar36[3];
            cVar29 = predelete_handler(pOVar10);
            if (cVar29 != '\0') {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar37 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar30 = *(uint *)(lVar8 + uVar33 * 4);
        uVar37 = uVar33 & 0xffffffff;
        uVar39 = uVar39 + 1;
      } while ((uVar30 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar7, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar41, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar5 + uVar31) - SUB164(auVar12 * auVar21,8)) * uVar7,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar41, uVar32 = uVar33,
              uVar39 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* HashMap<int, Ref<ENetConnection>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetConnection> > > >::erase(int const&) [clone
   .isra.0] */

void __thiscall
HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
::erase(HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
        *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  Object *pOVar10;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  char cVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  ulong uVar41;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar35 = *param_1;
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar41 = CONCAT44(0,uVar5);
    uVar7 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar30 = (uVar35 >> 0x10 ^ uVar35) * -0x7a143595;
    uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
    uVar34 = uVar30 ^ uVar30 >> 0x10;
    if (uVar30 == uVar30 >> 0x10) {
      uVar34 = 1;
      uVar32 = uVar7;
    }
    else {
      uVar32 = uVar34 * uVar7;
    }
    lVar8 = *(long *)(this + 0x10);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar41;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar32;
    uVar32 = SUB168(auVar11 * auVar20,8);
    uVar30 = *(uint *)(lVar8 + uVar32 * 4);
    uVar37 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar30 != 0) {
      uVar39 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = ((int)uVar37 + 1) * uVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar41;
        uVar33 = SUB168(auVar14 * auVar23,8);
        uVar31 = SUB164(auVar14 * auVar23,8);
        if ((uVar34 == uVar30) && (uVar35 == *(uint *)(*(long *)(lVar6 + uVar32 * 8) + 0x10))) {
          puVar40 = (uint *)(lVar8 + uVar33 * 4);
          uVar35 = *puVar40;
          if ((uVar35 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = uVar35 * uVar7, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar41, auVar16._8_8_ = 0,
             auVar16._0_8_ = ((uVar31 + uVar5) - SUB164(auVar15 * auVar24,8)) * uVar7,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar41, uVar32 = (ulong)uVar31, uVar38 = uVar37,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar37 = uVar32;
              puVar1 = (uint *)(lVar8 + uVar38 * 4);
              *puVar40 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar33 * 8);
              *puVar1 = uVar35;
              puVar3 = (undefined8 *)(lVar6 + uVar38 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ((int)uVar37 + 1) * uVar7;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar41;
              uVar33 = SUB168(auVar19 * auVar28,8);
              puVar40 = (uint *)(lVar8 + uVar33 * 4);
              uVar35 = *puVar40;
              if ((uVar35 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = uVar35 * uVar7, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar41, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      ((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) * uVar7,
                 auVar27._8_8_ = 0, auVar27._0_8_ = uVar41, SUB164(auVar18 * auVar27,8) == 0))
              break;
              uVar32 = uVar33 & 0xffffffff;
              uVar38 = uVar37;
            }
          }
          plVar4 = (long *)(lVar6 + uVar37 * 8);
          *(undefined4 *)(lVar8 + uVar37 * 4) = 0;
          plVar36 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar36) {
            *(long *)(this + 0x18) = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*(long **)(this + 0x20) == plVar36) {
            *(long *)(this + 0x20) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((long *)plVar36[1] != (long *)0x0) {
            *(long *)plVar36[1] = *plVar36;
            plVar36 = (long *)*plVar4;
          }
          if (*plVar36 != 0) {
            *(long *)(*plVar36 + 8) = plVar36[1];
            plVar36 = (long *)*plVar4;
          }
          if ((plVar36[3] != 0) && (cVar29 = RefCounted::unreference(), cVar29 != '\0')) {
            pOVar10 = (Object *)plVar36[3];
            cVar29 = predelete_handler(pOVar10);
            if (cVar29 != '\0') {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          Memory::free_static(plVar36,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar37 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar30 = *(uint *)(lVar8 + uVar33 * 4);
        uVar37 = uVar33 & 0xffffffff;
        uVar39 = uVar39 + 1;
      } while ((uVar30 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = uVar30 * uVar7, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar41, auVar13._8_8_ = 0,
              auVar13._0_8_ = ((uVar5 + uVar31) - SUB164(auVar12 * auVar21,8)) * uVar7,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar41, uVar32 = uVar33,
              uVar39 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* ENetMultiplayerPeer::get_host() const */

void ENetMultiplayerPeer::get_host(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  long in_RSI;
  uint uVar15;
  long *in_RDI;
  ulong uVar16;
  uint uVar17;
  
  if (*(int *)(in_RSI + 0x1a4) == 0) {
    _err_print_error("get_host","modules/enet/enet_multiplayer_peer.cpp",0x1c4,
                     "Condition \"!_is_active()\" is true. Returning: nullptr",0,0);
    *in_RDI = 0;
    return;
  }
  if (*(int *)(in_RSI + 0x1a4) == 3) {
    _err_print_error("get_host","modules/enet/enet_multiplayer_peer.cpp",0x1c5,
                     "Condition \"active_mode == MODE_MESH\" is true. Returning: nullptr",0,0);
    *in_RDI = 0;
    return;
  }
  lVar1 = *(long *)(in_RSI + 0x1c0);
  if ((lVar1 != 0) && (*(int *)(in_RSI + 0x1e4) != 0)) {
    uVar16 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x1e0) * 4));
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x1e0) * 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar2;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(in_RSI + 0x1c8) + lVar14 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar15 == 1) && (*(int *)(*(long *)(lVar1 + lVar14 * 8) + 0x10) == 0)) {
          lVar1 = *(long *)(lVar1 + (ulong)uVar13 * 8);
          *in_RDI = 0;
          lVar1 = *(long *)(lVar1 + 0x18);
          if (lVar1 == 0) {
            return;
          }
          *in_RDI = lVar1;
          cVar12 = RefCounted::reference();
          if (cVar12 != '\0') {
            return;
          }
          *in_RDI = 0;
          return;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(in_RSI + 0x1c8) + lVar14 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar15 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                        (ulong)*(uint *)(in_RSI + 0x1e0) * 4) + uVar13) -
                             SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                   "FATAL: Condition \"!exists\" is true.",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}



/* ENetMultiplayerPeer::_store_packet(int, ENetConnection::Event&) */

void __thiscall
ENetMultiplayerPeer::_store_packet(ENetMultiplayerPeer *this,int param_1,Event *param_2)

{
  Event EVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  
  uVar5 = 2;
  plVar2 = *(long **)(param_2 + 0x10);
  EVar1 = param_2[8];
  if ((*(uint *)(plVar2 + 1) & 1) == 0) {
    uVar5 = (*(uint *)(plVar2 + 1) >> 1 ^ 1) & 1;
  }
  *plVar2 = *plVar2 + 1;
  if (*(long *)(this + 0x218) == 0) {
    pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 0x218) = pauVar7;
    *(undefined4 *)pauVar7[1] = 0;
    *pauVar7 = (undefined1  [16])0x0;
  }
  puVar6 = (undefined8 *)operator_new(0x30,DefaultAllocator::alloc);
  plVar3 = *(long **)(this + 0x218);
  puVar6[3] = 0;
  lVar4 = plVar3[1];
  *puVar6 = plVar2;
  *(int *)(puVar6 + 1) = param_1;
  *(uint *)((long)puVar6 + 0xc) = (uint)(byte)EVar1;
  *(uint *)(puVar6 + 2) = uVar5;
  puVar6[4] = lVar4;
  puVar6[5] = plVar3;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 0x18) = puVar6;
  }
  plVar3[1] = (long)puVar6;
  if (*plVar3 != 0) {
    *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
    return;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  *plVar3 = (long)puVar6;
  return;
}



/* ENetMultiplayerPeer::_pop_current_packet() */

void __thiscall ENetMultiplayerPeer::_pop_current_packet(ENetMultiplayerPeer *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x220);
  if (plVar1 != (long *)0x0) {
    *plVar1 = *plVar1 + -1;
    if (*plVar1 == 0) {
      enet_packet_destroy();
    }
    uVar2 = _LC19;
    *(undefined8 *)(this + 0x220) = 0;
    *(undefined8 *)(this + 0x228) = uVar2;
  }
  return;
}



/* ENetMultiplayerPeer::_destroy_unused(_ENetPacket*) */

void __thiscall ENetMultiplayerPeer::_destroy_unused(ENetMultiplayerPeer *this,_ENetPacket *param_1)

{
  if (*(long *)param_1 != 0) {
    return;
  }
  enet_packet_destroy(param_1);
  return;
}



/* ENetMultiplayerPeer::ENetMultiplayerPeer() */

void __thiscall ENetMultiplayerPeer::ENetMultiplayerPeer(ENetMultiplayerPeer *this)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  this[0x1a0] = (ENetMultiplayerPeer)0x0;
  *(undefined8 *)(this + 0x17c) = 0x80000000000000;
  *(undefined8 *)(this + 0x198) = 0x200000000;
  *(undefined ***)this = &PTR__initialize_classv_001105b8;
  uVar2 = _LC34;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1e0) = uVar2;
  *(undefined8 *)(this + 0x210) = uVar2;
  *(undefined8 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x230) = 2;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  IPAddress::clear();
  local_48 = &_LC35;
  local_50 = 0;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_50);
  IPAddress::IPAddress((IPAddress *)&local_38,(String *)&local_50);
  lVar3 = local_50;
  *(undefined2 *)(this + 0x248) = local_28;
  *(undefined8 *)(this + 0x238) = local_38;
  *(undefined8 *)(this + 0x240) = uStack_30;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::create_server(int, int, int, int, int) */

int ENetMultiplayerPeer::create_server(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  Object *pOVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  RefCounted *this;
  undefined8 *puVar5;
  undefined4 in_register_0000003c;
  long *plVar6;
  RefCounted *pRVar7;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  plVar6 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)((long)plVar6 + 0x1a4) == 0) {
    if (*(code **)(*plVar6 + 0x1b0) == set_refuse_new_connections) {
      MultiplayerPeer::set_refuse_new_connections(SUB41(param_1,0));
    }
    else {
      (**(code **)(*plVar6 + 0x1b0))(plVar6,0);
    }
    pRVar7 = (RefCounted *)0x0;
    this = (RefCounted *)operator_new(400,"");
    RefCounted::RefCounted(this);
    *(code **)this = RefCounted::init_ref;
    *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this);
    cVar3 = RefCounted::init_ref();
    if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        pRVar7 = this;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler((Object *)this);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)this + 0x140))(this);
          Memory::free_static(this,false);
        }
      }
    }
    iVar4 = param_4 + 2;
    if (param_4 < 1) {
      iVar4 = 0;
    }
    iVar4 = ENetConnection::create_host_bound
                      ((IPAddress *)pRVar7,param_1 + 0x238,param_2,param_3,0,iVar4);
    uVar2 = _LC42;
    if (iVar4 == 0) {
      *(undefined4 *)(plVar6 + 0x36) = 2;
      local_44 = 0;
      *(undefined8 *)((long)plVar6 + 0x1a4) = uVar2;
      puVar5 = (undefined8 *)
               HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
               ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                             *)(plVar6 + 0x37),&local_44);
      pOVar1 = (Object *)*puVar5;
      if (pOVar1 != (Object *)pRVar7) {
        *puVar5 = pRVar7;
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *puVar5 = 0;
        }
        if (pOVar1 != (Object *)0x0) {
          cVar3 = RefCounted::unreference();
          if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar1);
            if (cVar3 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
      }
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object *)pRVar7);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pRVar7 + 0x140))(pRVar7);
        Memory::free_static(pRVar7,false);
      }
    }
  }
  else {
    iVar4 = 0x16;
    _err_print_error("create_server","modules/enet/enet_multiplayer_peer.cpp",0x3d,
                     "Condition \"_is_active()\" is true. Returning: ERR_ALREADY_IN_USE",
                     "The multiplayer instance is already active.",0,0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::create_client(String const&, int, int, int, int, int) */

int __thiscall
ENetMultiplayerPeer::create_client
          (ENetMultiplayerPeer *this,String *param_1,int param_2,int param_3,int param_4,int param_5
          ,int param_6)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  RefCounted *this_00;
  undefined8 *puVar5;
  Object *pOVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_4c;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1a4) != 0) {
    iVar3 = 0x16;
    _err_print_error("create_client","modules/enet/enet_multiplayer_peer.cpp",0x4e,
                     "Condition \"_is_active()\" is true. Returning: ERR_ALREADY_IN_USE",
                     "The multiplayer instance is already active.",0,0);
    goto LAB_00101ed2;
  }
  if (*(code **)(*(long *)this + 0x1b0) == set_refuse_new_connections) {
    MultiplayerPeer::set_refuse_new_connections(SUB81(this,0));
  }
  else {
    (**(code **)(*(long *)this + 0x1b0))(this,0);
  }
  pOVar6 = (Object *)0x0;
  this_00 = (RefCounted *)operator_new(400,"");
  RefCounted::RefCounted(this_00);
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined1 (*) [16])(this_00 + 0x180) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
LAB_00101e81:
    if (param_6 == 0) goto LAB_00101f50;
LAB_00101e8d:
    iVar3 = ENetConnection::create_host_bound
                      ((IPAddress *)pOVar6,(int)this + 0x238,param_6,1,0,param_4);
    if (iVar3 == 0) goto LAB_00101f70;
LAB_00101ec2:
    cVar2 = RefCounted::unreference();
  }
  else {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      pOVar6 = (Object *)this_00;
    }
    cVar2 = RefCounted::unreference();
    if ((cVar2 == '\0') || (cVar2 = predelete_handler((Object *)this_00), cVar2 == '\0'))
    goto LAB_00101e81;
    (**(code **)(*(long *)this_00 + 0x140))(this_00);
    Memory::free_static(this_00,false);
    if (param_6 != 0) goto LAB_00101e8d;
LAB_00101f50:
    iVar3 = ENetConnection::create_host((int)pOVar6,1,0,param_4);
    if (iVar3 != 0) goto LAB_00101ec2;
LAB_00101f70:
    uVar4 = MultiplayerPeer::generate_unique_id();
    *(undefined4 *)(this + 0x1a8) = uVar4;
    ENetConnection::connect_to_host((String *)&local_48,(int)pOVar6,(int)param_1,param_2);
    if (local_48 == (Object *)0x0) {
      iVar7 = 0x14;
      iVar3 = 0x14;
      ENetConnection::destroy();
      _err_print_error("create_client","modules/enet/enet_multiplayer_peer.cpp",0x61,
                       "Method/function failed. Returning: ERR_CANT_CREATE",
                       "Couldn\'t connect to the ENet multiplayer server.",0,0);
      if (local_48 != (Object *)0x0) goto LAB_001020c0;
      goto LAB_00101ec2;
    }
    *(undefined4 *)(this + 0x1b0) = 1;
    *(undefined4 *)(this + 0x1a4) = 2;
    local_4c = 1;
    puVar5 = (undefined8 *)
             HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
             ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                           *)(this + 0x1e8),&local_4c);
    pOVar1 = (Object *)*puVar5;
    if (local_48 != pOVar1) {
      *puVar5 = local_48;
      if ((local_48 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        *puVar5 = 0;
      }
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    local_4c = 0;
    puVar5 = (undefined8 *)
             HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
             ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                           *)(this + 0x1b8),&local_4c);
    pOVar1 = (Object *)*puVar5;
    if (pOVar1 != pOVar6) {
      *puVar5 = pOVar6;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *puVar5 = 0;
      }
      if (((pOVar1 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    iVar3 = 0;
    iVar7 = 0;
    if (local_48 == (Object *)0x0) goto LAB_00101ec2;
LAB_001020c0:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
      (**(code **)(*(long *)local_48 + 0x140))(local_48);
      Memory::free_static(local_48,false);
    }
    cVar2 = RefCounted::unreference();
    iVar3 = iVar7;
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00101ed2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* ENetMultiplayerPeer::disconnect_peer(int, bool) */

void __thiscall
ENetMultiplayerPeer::disconnect_peer(ENetMultiplayerPeer *this,int param_1,bool param_2)

{
  ulong uVar1;
  void *pvVar2;
  Object *pOVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  undefined8 *puVar14;
  code *pcVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long in_FS_OFFSET;
  int local_4c [2];
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c[0] = param_1;
  if (*(int *)(this + 0x1a4) != 0) {
    if ((*(long *)(this + 0x1f0) != 0) && (*(int *)(this + 0x214) != 0)) {
      uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x210) * 8);
      uVar13 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
      uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
      uVar21 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
        uVar21 = 1;
        uVar17 = uVar1;
      }
      else {
        uVar17 = uVar21 * uVar1;
      }
      uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar19;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar18 = SUB168(auVar4 * auVar8,8);
      uVar13 = *(uint *)(*(long *)(this + 0x1f8) + lVar18 * 4);
      iVar16 = SUB164(auVar4 * auVar8,8);
      if (uVar13 != 0) {
        uVar20 = 0;
        while ((uVar21 != uVar13 ||
               (param_1 != *(int *)(*(long *)(*(long *)(this + 0x1f0) + lVar18 * 8) + 0x10)))) {
          uVar20 = uVar20 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (iVar16 + 1) * uVar1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar19;
          lVar18 = SUB168(auVar5 * auVar9,8);
          uVar13 = *(uint *)(*(long *)(this + 0x1f8) + lVar18 * 4);
          iVar16 = SUB164(auVar5 * auVar9,8);
          if ((uVar13 == 0) ||
             (auVar6._8_8_ = 0, auVar6._0_8_ = uVar13 * uVar1, auVar10._8_8_ = 0,
             auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
             auVar7._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x210) * 4)
                             + iVar16) - SUB164(auVar6 * auVar10,8)) * uVar1, auVar11._8_8_ = 0,
             auVar11._0_8_ = uVar19, SUB164(auVar7 * auVar11,8) < uVar20)) goto LAB_001024f0;
        }
        puVar14 = (undefined8 *)
                  HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                  ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                *)(this + 0x1e8),local_4c);
        ENetPacketPeer::peer_disconnect((int)*puVar14);
        if (*(int *)(this + 0x1a4) - 1U < 2) {
          local_44 = 0;
          HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
          ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                        *)(this + 0x1b8),(int *)&local_44);
          ENetConnection::flush();
        }
        else {
          cVar12 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                   ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                  *)(this + 0x1b8),(int *)(ulong)(uint)param_1,&local_44);
          if (cVar12 == '\0') {
            _err_print_error("disconnect_peer","modules/enet/enet_multiplayer_peer.cpp",0x113,
                             "Condition \"!hosts.has(p_peer)\" is true.",0,0);
            goto LAB_0010238c;
          }
          HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
          ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                        *)(this + 0x1b8),local_4c);
          ENetConnection::flush();
        }
        if (!param_2) goto LAB_0010238c;
        HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
        ::erase((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                 *)(this + 0x1e8),local_4c);
        cVar12 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                 ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                *)(this + 0x1b8),(int *)(ulong)(uint)param_1,&local_44);
        if (cVar12 != '\0') {
          HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
          ::erase((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                   *)(this + 0x1b8),local_4c);
        }
        if (*(int *)(this + 0x1a4) != 2) goto LAB_0010238c;
        if ((*(long *)(this + 0x1c0) == 0) || (*(int *)(this + 0x1e4) == 0)) {
          pcVar15 = *(code **)(*(long *)this + 0x200);
          if (pcVar15 != close) goto LAB_00102547;
          goto LAB_001024e0;
        }
        uVar13 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4);
        lVar18 = 0;
        if (uVar13 != 0) {
          do {
            if (*(int *)(*(long *)(this + 0x1c8) + lVar18) != 0) {
              *(int *)(*(long *)(this + 0x1c8) + lVar18) = 0;
              pvVar2 = *(void **)(*(long *)(this + 0x1c0) + lVar18 * 2);
              if ((*(long *)((long)pvVar2 + 0x18) != 0) &&
                 (cVar12 = RefCounted::unreference(), cVar12 != '\0')) {
                pOVar3 = *(Object **)((long)pvVar2 + 0x18);
                cVar12 = predelete_handler(pOVar3);
                if (cVar12 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
              Memory::free_static(pvVar2,false);
              *(undefined8 *)(*(long *)(this + 0x1c0) + lVar18 * 2) = 0;
            }
            lVar18 = lVar18 + 4;
          } while ((ulong)uVar13 << 2 != lVar18);
        }
        *(undefined4 *)(this + 0x1e4) = 0;
        *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
        pcVar15 = *(code **)(*(long *)this + 0x200);
        if (pcVar15 == close) {
          if (*(int *)(this + 0x1a4) != 0) {
LAB_001024e0:
            close(this);
          }
        }
        else {
LAB_00102547:
          (*pcVar15)(this);
        }
        goto LAB_0010238c;
      }
    }
  }
LAB_001024f0:
  _err_print_error("disconnect_peer","modules/enet/enet_multiplayer_peer.cpp",0x10e,
                   "Condition \"!_is_active() || !peers.has(p_peer)\" is true.",0,0);
LAB_0010238c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::add_mesh_peer(int, Ref<ENetConnection>) */

undefined8 __thiscall
ENetMultiplayerPeer::add_mesh_peer(ENetMultiplayerPeer *this,int param_1,long *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  int local_8c [3];
  undefined8 *local_80;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c[0] = param_1;
  if ((List *)*param_3 == (List *)0x0) {
    uVar9 = 0x1f;
    _err_print_error("add_mesh_peer","modules/enet/enet_multiplayer_peer.cpp",0x77,
                     "Condition \"p_host.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
    goto LAB_0010277d;
  }
  if (*(int *)(this + 0x1a4) != 3) {
    uVar9 = 3;
    _err_print_error("add_mesh_peer","modules/enet/enet_multiplayer_peer.cpp",0x78,
                     "Condition \"active_mode != MODE_MESH\" is true. Returning: ERR_UNCONFIGURED",
                     "The multiplayer instance is not configured as a mesh. Call \'create_mesh\' first."
                     ,0,0);
    goto LAB_0010277d;
  }
  local_80 = (undefined8 *)0x0;
  ENetConnection::get_peers((List *)*param_3);
  if ((local_80 == (undefined8 *)0x0) || (*(int *)(local_80 + 2) != 1)) {
LAB_001027f8:
    uVar9 = 0x1f;
    _err_print_error("add_mesh_peer","modules/enet/enet_multiplayer_peer.cpp",0x7b,
                     "Condition \"host_peers.size() != 1 || host_peers.front()->get()->get_state() != ENetPacketPeer::STATE_CONNECTED\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,"The provided host must have exactly one peer in the connected state.",0,0);
  }
  else {
    iVar5 = ENetPacketPeer::get_state();
    if (iVar5 != 5) goto LAB_001027f8;
    plVar7 = (long *)HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                     ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                   *)(this + 0x1b8),local_8c);
    pOVar1 = (Object *)*param_3;
    pOVar2 = (Object *)*plVar7;
    if (pOVar1 != pOVar2) {
      *plVar7 = (long)pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar7 = 0;
        }
      }
      if (pOVar2 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar2);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    if (local_80 == (undefined8 *)0x0) {
      HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
      ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                    *)(this + 0x1e8),local_8c);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plVar7 = (long *)*local_80;
    plVar8 = (long *)HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                     ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                   *)(this + 0x1e8),local_8c);
    pOVar1 = (Object *)*plVar7;
    pOVar2 = (Object *)*plVar8;
    if (pOVar1 != pOVar2) {
      *plVar8 = (long)pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar8 = 0;
        }
      }
      if (pOVar2 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar2);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    iVar5 = local_8c[0];
    if (add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::operator()()::
                             sname,true);
        __cxa_atexit(StringName::~StringName,
                     &add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::operator()()::
                             sname);
      }
    }
    Variant::Variant((Variant *)local_68,iVar5);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&add_mesh_peer(int,Ref<ENetConnection>)::{lambda()#1}::operator()()::sname,
               local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    uVar9 = 0;
  }
  List<Ref<ENetPacketPeer>,DefaultAllocator>::~List
            ((List<Ref<ENetPacketPeer>,DefaultAllocator> *)&local_80);
LAB_0010277d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::_disconnect_inactive_peers() */

void __thiscall ENetMultiplayerPeer::_disconnect_inactive_peers(ENetMultiplayerPeer *this)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  uint *puVar18;
  uint uVar19;
  void *pvVar20;
  ulong uVar21;
  uint uVar22;
  long in_FS_OFFSET;
  uint *local_e0;
  int local_d0;
  int local_c8 [4];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  plVar17 = *(long **)(this + 0x200);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (undefined1  [16])0x0;
  local_98 = 2;
  local_a8 = (undefined1  [16])0x0;
  if (plVar17 != (long *)0x0) {
    do {
      cVar11 = ENetPacketPeer::is_active();
      if (cVar11 == '\0') {
        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(local_c8);
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
    iVar10 = local_98._4_4_;
    if (local_98._4_4_ != 0) {
      local_e0 = (uint *)local_b8._0_8_;
      local_d0 = 1;
      do {
        HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
        ::erase((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                 *)(this + 0x1e8),(int *)local_e0);
        uVar19 = *local_e0;
        if ((*(long *)(this + 0x1c0) != 0) && (*(int *)(this + 0x1e4) != 0)) {
          uVar1 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
          uVar12 = (uVar19 >> 0x10 ^ uVar19) * -0x7a143595;
          uVar12 = (uVar12 ^ uVar12 >> 0xd) * -0x3d4d51cb;
          uVar16 = uVar12 ^ uVar12 >> 0x10;
          if (uVar12 == uVar12 >> 0x10) {
            uVar16 = 1;
            uVar14 = uVar1;
          }
          else {
            uVar14 = uVar16 * uVar1;
          }
          uVar21 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4)
                           );
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar21;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar14;
          lVar15 = SUB168(auVar2 * auVar6,8);
          uVar12 = *(uint *)(*(long *)(this + 0x1c8) + lVar15 * 4);
          iVar13 = SUB164(auVar2 * auVar6,8);
          if (uVar12 != 0) {
            uVar22 = 0;
            while ((uVar16 != uVar12 ||
                   (uVar19 != *(uint *)(*(long *)(*(long *)(this + 0x1c0) + lVar15 * 8) + 0x10)))) {
              uVar22 = uVar22 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (iVar13 + 1) * uVar1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar21;
              lVar15 = SUB168(auVar3 * auVar7,8);
              uVar12 = *(uint *)(*(long *)(this + 0x1c8) + lVar15 * 4);
              iVar13 = SUB164(auVar3 * auVar7,8);
              if ((uVar12 == 0) ||
                 (auVar4._8_8_ = 0, auVar4._0_8_ = uVar12 * uVar1, auVar8._8_8_ = 0,
                 auVar8._0_8_ = uVar21, auVar5._8_8_ = 0,
                 auVar5._0_8_ = ((*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)(this + 0x1e0) * 4) + iVar13) -
                                SUB164(auVar4 * auVar8,8)) * uVar1, auVar9._8_8_ = 0,
                 auVar9._0_8_ = uVar21, SUB164(auVar5 * auVar9,8) < uVar22)) goto LAB_00102b04;
            }
            HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
            ::erase((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                     *)(this + 0x1b8),(int *)local_e0);
            uVar19 = *local_e0;
          }
        }
LAB_00102b04:
        if ((*(int *)(this + 0x1a4) == 2) && (uVar19 != 1)) {
          _err_print_error("_disconnect_inactive_peers","modules/enet/enet_multiplayer_peer.cpp",
                           0x9f,
                           "Condition \"active_mode == MODE_CLIENT && P != TARGET_PEER_SERVER\" is true. Continuing."
                           ,0,0);
        }
        else {
          if (_disconnect_inactive_peers()::{lambda()#1}::operator()()::sname == '\0') {
            iVar13 = __cxa_guard_acquire(&_disconnect_inactive_peers()::{lambda()#1}::operator()()::
                                          sname);
            if (iVar13 != 0) {
              _scs_create((char *)&_disconnect_inactive_peers()::{lambda()#1}::operator()()::sname,
                          true);
              __cxa_atexit(StringName::~StringName,
                           &_disconnect_inactive_peers()::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_disconnect_inactive_peers()::{lambda()#1}::operator()()::sname);
            }
          }
          Variant::Variant((Variant *)local_78,uVar19);
          local_60 = 0;
          local_58 = (undefined1  [16])0x0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*(long *)this + 0xd0))
                    (this,&_disconnect_inactive_peers()::{lambda()#1}::operator()()::sname,local_88,
                     1);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        if (iVar10 <= local_d0) goto code_r0x00102bab;
        local_d0 = local_d0 + 1;
        local_e0 = local_e0 + 1;
      } while( true );
    }
    puVar18 = (uint *)local_b8._0_8_;
    pvVar20 = (void *)local_a8._8_8_;
    if ((uint *)local_b8._0_8_ != (uint *)0x0) goto LAB_00102bea;
  }
  goto LAB_00102d25;
code_r0x00102bab:
  puVar18 = (uint *)local_b8._0_8_;
  if ((uint *)local_b8._0_8_ != (uint *)0x0) {
    pvVar20 = (void *)local_a8._8_8_;
    if ((local_98._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) != 0)) {
      memset((void *)local_a8._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_98 & 0xffffffff) * 4) * 4);
    }
LAB_00102bea:
    Memory::free_static(puVar18,false);
    Memory::free_static((void *)local_a8._0_8_,false);
    Memory::free_static((void *)local_b8._8_8_,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pvVar20,false);
      return;
    }
    goto LAB_00102d4a;
  }
LAB_00102d25:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00102d4a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::set_bind_ip(IPAddress const&) */

void __thiscall ENetMultiplayerPeer::set_bind_ip(ENetMultiplayerPeer *this,IPAddress *param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  IPAddress aIStack_48 [8];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[0x10] == (IPAddress)0x0) && (param_1[0x11] == (IPAddress)0x0)) {
    IPAddress::operator_cast_to_String(aIStack_48);
    local_38 = "Invalid bind IP address: %s";
    local_30 = 0x1b;
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,aIStack_48);
    _err_print_error("set_bind_ip","modules/enet/enet_multiplayer_peer.cpp",0x1f0,
                     "Condition \"!p_ip.is_valid() && !p_ip.is_wildcard()\" is true.",
                     (CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)aIStack_48);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x238) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x240) = uVar1;
    *(undefined2 *)(this + 0x248) = *(undefined2 *)(param_1 + 0x10);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010369c) */
/* ENetMultiplayerPeer::put_packet(unsigned char const*, int) */

undefined8 __thiscall
ENetMultiplayerPeer::put_packet(ENetMultiplayerPeer *this,uchar *param_1,int param_2)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  Variant *pVVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  undefined8 local_e0;
  Array local_d8 [8];
  char *local_d0 [6];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  iVar3 = *(int *)(this + 0x1a4);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar3 == 0) {
    _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x14f,
                     "Condition \"!_is_active()\" is true. Returning: ERR_UNCONFIGURED",
                     "The multiplayer instance isn\'t currently active.",0,0);
  }
  else {
    if (*(int *)(this + 0x1b0) == 2) {
      uVar4 = *(uint *)(this + 0x1ac);
      if (uVar4 != 0) {
        uVar9 = -uVar4;
        if (0 < (int)uVar4) {
          uVar9 = uVar4;
        }
        cVar2 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                               *)(this + 0x1e8),(int *)(ulong)uVar9,(uint *)&local_98);
        if (cVar2 == '\0') {
          local_a0 = 0;
          local_98 = "Invalid target peer: %d";
          local_90 = 0x17;
          String::parse_latin1((StrRange *)&local_a0);
          vformat<int>((String *)&local_98,(int)(StrRange *)&local_a0);
          _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x151,
                           "Condition \"target_peer != 0 && !peers.has(ABS(target_peer))\" is true. Returning: ERR_INVALID_PARAMETER"
                           ,(String *)&local_98,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          uVar8 = 0x1f;
          goto LAB_00102fca;
        }
      }
      if ((iVar3 == 2) &&
         (cVar2 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                  ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                 *)(this + 0x1e8),(int *)0x1,(uint *)&local_98), cVar2 == '\0')) {
        _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x152,
                         "Condition \"active_mode == MODE_CLIENT && !peers.has(1)\" is true. Returning: ERR_BUG"
                         ,0,0);
        goto LAB_001035c0;
      }
      iVar3 = (**(code **)(*(long *)this + 0x198))(this);
      uVar4 = (**(code **)(*(long *)this + 0x1a8))(this);
      if (uVar4 < 3) {
        uVar9 = *(uint *)(CSWTCH_2702 + (ulong)uVar4 * 4);
        uVar10 = iVar3 + 1;
        if (iVar3 < 1) {
          uVar10 = *(uint *)(CSWTCH_2703 + (ulong)uVar4 * 4);
        }
        if ((((uVar9 & 8) != 0) && (0x570 < param_2)) &&
           (put_packet(unsigned_char_const*,int)::first_print != '\0')) {
          local_98 = 
          "Sending %d bytes unreliably which is above the MTU (%d), this will result in higher packet loss"
          ;
          local_e0 = 0;
          local_90 = 0x5f;
          String::parse_latin1((StrRange *)&local_e0);
          Variant::Variant(local_88,param_2);
          Variant::Variant(local_70,0x570);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          Array::Array(local_d8);
          iVar3 = (int)local_d8;
          Array::resize(iVar3);
          pVVar6 = (Variant *)Array::operator[](iVar3);
          Variant::operator=(pVVar6,local_88);
          pVVar6 = (Variant *)Array::operator[](iVar3);
          Variant::operator=(pVVar6,local_70);
          String::sprintf((Array *)local_d0,(bool *)&local_e0);
          local_98 = local_d0[0];
          local_d0[0] = (char *)0x0;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
          pVVar6 = (Variant *)local_40;
          Array::~Array(local_d8);
          do {
            pVVar1 = pVVar6 + -0x18;
            pVVar6 = pVVar6 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar6 != local_88);
          _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x16b,
                           (CowData<char32_t> *)&local_98,0,1);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
          put_packet(unsigned_char_const*,int)::first_print = '\0';
        }
      }
      else if (iVar3 < 1) {
        uVar9 = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = iVar3 + 1;
        uVar9 = 0;
      }
      plVar5 = (long *)enet_packet_create(0,(long)param_2,uVar9);
      memcpy((void *)plVar5[2],param_1,(long)param_2);
      if (*(code **)(*(long *)this + 0x1f0) == is_server) {
        iVar3 = *(int *)(this + 0x1a4);
        if (iVar3 == 1) goto LAB_00102f2e;
LAB_00103214:
        if (iVar3 != 2) {
          iVar3 = *(int *)(this + 0x1ac);
          if (iVar3 < 1) {
            for (puVar7 = *(undefined8 **)(this + 0x200); puVar7 != (undefined8 *)0x0;
                puVar7 = (undefined8 *)*puVar7) {
              if (*(int *)(puVar7 + 2) != -iVar3) {
                ENetPacketPeer::send((uchar)puVar7[3],(_ENetPacket *)((ulong)uVar10 & 0xff));
                cVar2 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                        ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                       *)(this + 0x1b8),(int *)(ulong)*(uint *)(puVar7 + 2),
                                      (uint *)&local_98);
                if (cVar2 == '\0') {
                  _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x193,
                                   "Condition \"!hosts.has(E.key)\" is true. Continuing.",0,0);
                }
                else {
                  HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                  ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                *)(this + 0x1b8),(int *)(puVar7 + 2));
                  ENetConnection::flush();
                }
              }
            }
            if (*plVar5 == 0) {
              enet_packet_destroy(plVar5);
            }
          }
          else {
            puVar7 = (undefined8 *)
                     HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                     ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                   *)(this + 0x1e8),(int *)(this + 0x1ac));
            ENetPacketPeer::send((uchar)*puVar7,(_ENetPacket *)(ulong)(uVar10 & 0xff));
            cVar2 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                    ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                   *)(this + 0x1b8),(int *)(ulong)*(uint *)(this + 0x1ac),
                                  (uint *)&local_98);
            if (cVar2 == '\0') {
              _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x199,
                               "Condition \"!hosts.has(target_peer)\" is true. Returning: ERR_BUG",0
                               ,0);
              goto LAB_001035c0;
            }
            HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
            ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                          *)(this + 0x1b8),(int *)(this + 0x1ac));
            ENetConnection::flush();
          }
          goto LAB_00102fc8;
        }
        local_98 = (char *)CONCAT44(local_98._4_4_,1);
        puVar7 = (undefined8 *)
                 HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                 ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                               *)(this + 0x1e8),(int *)&local_98);
        ENetPacketPeer::send((uchar)*puVar7,(_ENetPacket *)(ulong)(uVar10 & 0xff));
        cVar2 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                               *)(this + 0x1b8),(int *)0x0,(uint *)&local_98);
        if (cVar2 != '\0') {
          local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
          HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
          ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                        *)(this + 0x1b8),(int *)&local_98);
          ENetConnection::flush();
          goto LAB_00102fc8;
        }
        _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x188,
                         "Condition \"!hosts.has(0)\" is true. Returning: ERR_BUG",0,0);
      }
      else {
        cVar2 = (**(code **)(*(long *)this + 0x1f0))(this);
        if (cVar2 == '\0') {
          iVar3 = *(int *)(this + 0x1a4);
          goto LAB_00103214;
        }
LAB_00102f2e:
        iVar3 = *(int *)(this + 0x1ac);
        if (iVar3 == 0) {
          local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
          puVar7 = (undefined8 *)
                   HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                   ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                 *)(this + 0x1b8),(int *)&local_98);
          ENetConnection::broadcast((uchar)*puVar7,(_ENetPacket *)(ulong)(uVar10 & 0xff));
        }
        else if (iVar3 < 0) {
          for (puVar7 = *(undefined8 **)(this + 0x200); puVar7 != (undefined8 *)0x0;
              puVar7 = (undefined8 *)*puVar7) {
            if (*(int *)(puVar7 + 2) != -iVar3) {
              ENetPacketPeer::send((uchar)puVar7[3],(_ENetPacket *)(ulong)(uVar10 & 0xff));
            }
          }
          if (*plVar5 == 0) {
            enet_packet_destroy(plVar5);
          }
        }
        else {
          puVar7 = (undefined8 *)
                   HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                   ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                 *)(this + 0x1e8),(int *)(this + 0x1ac));
          ENetPacketPeer::send((uchar)*puVar7,(_ENetPacket *)(ulong)(uVar10 & 0xff));
        }
        cVar2 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                ::_lookup_pos((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                               *)(this + 0x1b8),(int *)0x0,(uint *)&local_98);
        if (cVar2 != '\0') {
          local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
          HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
          ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                        *)(this + 0x1b8),(int *)&local_98);
          ENetConnection::flush();
LAB_00102fc8:
          uVar8 = 0;
          goto LAB_00102fca;
        }
        _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x183,
                         "Condition \"!hosts.has(0)\" is true. Returning: ERR_BUG",0,0);
      }
LAB_001035c0:
      uVar8 = 0x2f;
      goto LAB_00102fca;
    }
    _err_print_error("put_packet","modules/enet/enet_multiplayer_peer.cpp",0x150,
                     "Condition \"connection_status != CONNECTION_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,"The multiplayer instance isn\'t currently connected to any server or client."
                     ,0,0);
  }
  uVar8 = 3;
LAB_00102fca:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::get_peer(int) const */

long * ENetMultiplayerPeer::get_peer(int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  char cVar12;
  uint uVar13;
  uint in_EDX;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  plVar17 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_RSI + 0x1a4) == 0) {
    _err_print_error("get_peer","modules/enet/enet_multiplayer_peer.cpp",0x1ca,
                     "Condition \"!_is_active()\" is true. Returning: nullptr",0,0);
    *plVar17 = 0;
  }
  else {
    lVar1 = *(long *)(in_RSI + 0x1f0);
    if ((lVar1 != 0) && (*(int *)(in_RSI + 0x214) != 0)) {
      uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x210) * 8);
      uVar13 = (in_EDX >> 0x10 ^ in_EDX) * -0x7a143595;
      uVar13 = (uVar13 ^ uVar13 >> 0xd) * -0x3d4d51cb;
      uVar20 = uVar13 ^ uVar13 >> 0x10;
      if (uVar13 == uVar13 >> 0x10) {
        uVar20 = 1;
        uVar15 = uVar2;
      }
      else {
        uVar15 = uVar20 * uVar2;
      }
      uVar18 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x210) * 4));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar18;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar16 = SUB168(auVar3 * auVar7,8);
      uVar13 = *(uint *)(*(long *)(in_RSI + 0x1f8) + lVar16 * 4);
      iVar14 = SUB164(auVar3 * auVar7,8);
      if (uVar13 != 0) {
        uVar19 = 0;
        do {
          if ((uVar20 == uVar13) && (*(uint *)(*(long *)(lVar1 + lVar16 * 8) + 0x10) == in_EDX)) {
            if ((*(int *)(in_RSI + 0x1a4) == 2) && (in_EDX != 1)) {
              _err_print_error("get_peer","modules/enet/enet_multiplayer_peer.cpp",0x1cc,
                               "Condition \"active_mode == MODE_CLIENT && p_id != 1\" is true. Returning: nullptr"
                               ,0,0);
              *plVar17 = 0;
            }
            else {
              local_44 = 0;
              cVar12 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                       ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                      *)(in_RSI + 0x1e8),(int *)(ulong)in_EDX,&local_44);
              if (cVar12 == '\0') {
                _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                                 "FATAL: Condition \"!exists\" is true.",0,0);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar11 = (code *)invalidInstructionException();
                (*pcVar11)();
              }
              lVar1 = *(long *)(lVar1 + (ulong)local_44 * 8);
              *plVar17 = 0;
              lVar1 = *(long *)(lVar1 + 0x18);
              if (lVar1 != 0) {
                *plVar17 = lVar1;
                cVar12 = RefCounted::reference();
                if (cVar12 == '\0') {
                  *plVar17 = 0;
                }
              }
            }
            goto LAB_00103a04;
          }
          uVar19 = uVar19 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (iVar14 + 1) * uVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar18;
          lVar16 = SUB168(auVar4 * auVar8,8);
          uVar13 = *(uint *)(*(long *)(in_RSI + 0x1f8) + lVar16 * 4);
          iVar14 = SUB164(auVar4 * auVar8,8);
        } while ((uVar13 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = uVar13 * uVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar18, auVar6._8_8_ = 0,
                auVar6._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(in_RSI + 0x210) * 4) + iVar14) -
                               SUB164(auVar5 * auVar9,8)) * uVar2, auVar10._8_8_ = 0,
                auVar10._0_8_ = uVar18, uVar19 <= SUB164(auVar6 * auVar10,8)));
      }
    }
    _err_print_error("get_peer","modules/enet/enet_multiplayer_peer.cpp",0x1cb,
                     "Condition \"!peers.has(p_id)\" is true. Returning: nullptr",0,0);
    *plVar17 = 0;
  }
LAB_00103a04:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::poll() */

void __thiscall ENetMultiplayerPeer::poll(ENetMultiplayerPeer *this)

{
  HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
  *this_00;
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  Object *pOVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  void *pvVar23;
  uint uVar24;
  long *plVar25;
  uint *puVar26;
  ulong uVar27;
  int iVar28;
  long in_FS_OFFSET;
  Ref<ENetPacketPeer> *local_128;
  int local_fc;
  uint local_f8 [4];
  Object *local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined1 local_c8 [12];
  uint uStack_bc;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1a4) == 0) {
    _err_print_error(&_LC97,"modules/enet/enet_multiplayer_peer.cpp",0xa5,
                     "Condition \"!_is_active()\" is true.",
                     "The multiplayer instance isn\'t currently active.",0,0);
  }
  else {
    plVar25 = *(long **)(this + 0x220);
    if (plVar25 != (long *)0x0) {
      *plVar25 = *plVar25 + -1;
      if (*plVar25 == 0) {
        enet_packet_destroy();
      }
      uVar16 = _LC19;
      *(undefined8 *)(this + 0x220) = 0;
      *(undefined8 *)(this + 0x228) = uVar16;
    }
    _disconnect_inactive_peers(this);
    iVar18 = *(int *)(this + 0x1a4);
    if (iVar18 == 2) {
      cVar17 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
               ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                              *)(this + 0x1e8),(int *)0x1,(uint *)local_c8);
      if (cVar17 != '\0') {
        local_c8[8] = 0;
        this_00 = (HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                   *)(this + 0x1b8);
        auVar14._8_4_ = 0;
        auVar14._0_8_ = stack0xffffffffffffff40;
        local_c8 = auVar14 << 0x40;
        uStack_bc = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = local_b8._8_8_;
        local_b8 = auVar15 << 0x40;
        local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
        puVar21 = (undefined8 *)
                  HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                  ::operator[](this_00,(int *)&local_e8);
        local_f8[0] = ENetConnection::service((int)*puVar21,(Event *)0x0);
        if (local_f8[0] == 1) goto LAB_001043fc;
        do {
          local_128 = (Ref<ENetPacketPeer> *)local_c8;
          if (local_f8[0] == 2) {
            if (*(int *)(this + 0x1b0) == 2) {
              if ((poll()::{lambda()#2}::operator()()::sname == '\0') &&
                 (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#2}::operator()()::sname),
                 iVar18 != 0)) {
                _scs_create((char *)&poll()::{lambda()#2}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,&poll()::{lambda()#2}::operator()()::sname,
                             &__dso_handle);
                __cxa_guard_release(&poll()::{lambda()#2}::operator()()::sname);
              }
              Object::emit_signal<int>
                        ((Object *)this,(StringName *)&poll()::{lambda()#2}::operator()()::sname,1);
            }
LAB_00104386:
            if (*(code **)(*(long *)this + 0x200) == close) {
              if (*(int *)(this + 0x1a4) != 0) {
                close(this);
              }
            }
            else {
              (**(code **)(*(long *)this + 0x200))(this);
            }
          }
          else if (local_f8[0] == 3) {
            _store_packet(this,1,(Event *)local_128);
          }
          else if (local_f8[0] != 0) goto LAB_00104386;
          while( true ) {
            cVar17 = HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                     ::_lookup_pos(this_00,(int *)0x0,(uint *)&local_e8);
            if (cVar17 == '\0') goto LAB_00103e60;
            local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
            puVar21 = (undefined8 *)
                      HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                      ::operator[](this_00,(int *)&local_e8);
            iVar18 = ENetConnection::check_events((EventType *)*puVar21,(Event *)local_f8);
            if (iVar18 < 1) goto LAB_00103e60;
            if (local_f8[0] != 1) break;
LAB_001043fc:
            *(undefined4 *)(this + 0x1b0) = 2;
            if ((poll()::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#1}::operator()()::sname),
               iVar18 != 0)) {
              _scs_create((char *)&poll()::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,&poll()::{lambda()#1}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&poll()::{lambda()#1}::operator()()::sname);
            }
            Object::emit_signal<int>
                      ((Object *)this,(StringName *)&poll()::{lambda()#1}::operator()()::sname,1);
          }
        } while( true );
      }
      if (*(code **)(*(long *)this + 0x200) == close) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          close(this);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00104959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x200))(this);
        return;
      }
      goto LAB_0010495b;
    }
    if (iVar18 == 3) {
      plVar25 = *(long **)(this + 0x1d0);
      local_a8 = 2;
      _local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      if (plVar25 != (long *)0x0) {
        do {
          local_e0 = 0;
          local_e8 = (Object *)0x0;
          local_dc = 0;
          local_d8 = 0;
          local_fc = ENetConnection::service((int)plVar25[3],(Event *)0x0);
          do {
            if (local_fc == 1) {
              ENetPacketPeer::reset();
            }
            else {
              if (local_fc != 3) {
                if (local_fc != 0) {
                  HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert
                            ((int *)local_f8);
                }
                break;
              }
              _store_packet(this,(int)plVar25[2],(Event *)&local_e8);
            }
            iVar18 = ENetConnection::check_events((EventType *)plVar25[3],(Event *)&local_fc);
          } while (0 < iVar18);
          if (((local_e8 != (Object *)0x0) &&
              (cVar17 = RefCounted::unreference(), pOVar4 = local_e8, cVar17 != '\0')) &&
             (cVar17 = predelete_handler(local_e8), cVar17 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
          plVar25 = (long *)*plVar25;
        } while (plVar25 != (long *)0x0);
        iVar18 = local_a8._4_4_;
        if (local_a8._4_4_ == 0) {
          pvVar23 = (void *)local_b8._8_8_;
          puVar26 = (uint *)local_c8._0_8_;
          if ((uint *)local_c8._0_8_ != (uint *)0x0) goto LAB_0010404c;
        }
        else {
          iVar28 = 1;
          puVar26 = (uint *)local_c8._0_8_;
          while( true ) {
            uVar19 = *puVar26;
            cVar17 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                     ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                    *)(this + 0x1e8),(int *)(ulong)uVar19,(uint *)&local_e8);
            if (cVar17 != '\0') {
              if ((poll()::{lambda()#8}::operator()()::sname == '\0') &&
                 (iVar20 = __cxa_guard_acquire(&poll()::{lambda()#8}::operator()()::sname),
                 iVar20 != 0)) {
                _scs_create((char *)&poll()::{lambda()#8}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,&poll()::{lambda()#8}::operator()()::sname,
                             &__dso_handle);
                __cxa_guard_release(&poll()::{lambda()#8}::operator()()::sname);
              }
              Variant::Variant((Variant *)local_78,uVar19);
              local_60 = 0;
              local_58 = (undefined1  [16])0x0;
              local_98 = (Variant *)local_78;
              (**(code **)(*(long *)this + 0xd0))
                        (this,&poll()::{lambda()#8}::operator()()::sname,&local_98,1);
              if (Variant::needs_deinit[(int)local_60] != '\0') {
                Variant::_clear_internal();
              }
              if (Variant::needs_deinit[local_78[0]] != '\0') {
                Variant::_clear_internal();
              }
              HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
              ::erase((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                       *)(this + 0x1e8),(int *)puVar26);
            }
            HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
            ::erase((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                     *)(this + 0x1b8),(int *)puVar26);
            if (iVar18 <= iVar28) break;
            iVar28 = iVar28 + 1;
            puVar26 = puVar26 + 1;
          }
          puVar26 = (uint *)local_c8._0_8_;
          if ((uint *)local_c8._0_8_ != (uint *)0x0) {
            pvVar23 = (void *)local_b8._8_8_;
            if ((local_a8._4_4_ != 0) &&
               (*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) != 0)) {
              memset((void *)local_b8._8_8_,0,
                     (ulong)*(uint *)(hash_table_size_primes + (local_a8 & 0xffffffff) * 4) * 4);
            }
LAB_0010404c:
            Memory::free_static(puVar26,false);
            Memory::free_static((void *)local_b8._0_8_,false);
            Memory::free_static(stack0xffffffffffffff40,false);
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              Memory::free_static(pvVar23,false);
              return;
            }
            goto LAB_0010495b;
          }
        }
      }
    }
    else if (iVar18 == 1) {
      local_c8._0_9_ = ZEXT89(0);
      uStack_bc = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_b8._8_8_;
      local_b8 = auVar13 << 0x40;
      local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
      puVar21 = (undefined8 *)
                HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                              *)(this + 0x1b8),(int *)&local_e8);
      local_fc = ENetConnection::service((int)*puVar21,(Event *)0x0);
      if (local_fc == 1) goto LAB_00103d45;
LAB_00103c0f:
      uVar16 = local_c8._0_8_;
      if (local_fc == 2) {
        pcVar3 = *(code **)(*(long *)local_c8._0_8_ + 0xb8);
        local_90 = (undefined1  [16])0x0;
        local_98 = (Variant *)0x0;
        if ((poll()::{lambda()#5}::operator()()::sname == '\0') &&
           (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#5}::operator()()::sname), iVar18 != 0))
        {
          _scs_create((char *)&poll()::{lambda()#5}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&poll()::{lambda()#5}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&poll()::{lambda()#5}::operator()()::sname);
        }
        (*pcVar3)((Variant *)local_78,uVar16,&poll()::{lambda()#5}::operator()()::sname,&local_98);
        uVar19 = Variant::operator_cast_to_int((Variant *)local_78);
        local_f8[0] = uVar19;
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_98] != '\0') {
          Variant::_clear_internal();
        }
        cVar17 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                 ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                *)(this + 0x1e8),(int *)(ulong)uVar19,(uint *)&local_e8);
        if (cVar17 != '\0') {
          if ((poll()::{lambda()#6}::operator()()::sname == '\0') &&
             (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#6}::operator()()::sname), iVar18 != 0)
             ) {
            _scs_create((char *)&poll()::{lambda()#6}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&poll()::{lambda()#6}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&poll()::{lambda()#6}::operator()()::sname);
          }
          Object::emit_signal<int>
                    ((Object *)this,(StringName *)&poll()::{lambda()#6}::operator()()::sname,uVar19)
          ;
          HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
          ::erase((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                   *)(this + 0x1e8),(int *)local_f8);
        }
      }
      else if (local_fc == 3) {
        pcVar3 = *(code **)(*(long *)local_c8._0_8_ + 0xb8);
        local_90 = (undefined1  [16])0x0;
        local_98 = (Variant *)0x0;
        if ((poll()::{lambda()#7}::operator()()::sname == '\0') &&
           (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#7}::operator()()::sname), iVar18 != 0))
        {
          _scs_create((char *)&poll()::{lambda()#7}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&poll()::{lambda()#7}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&poll()::{lambda()#7}::operator()()::sname);
        }
        (*pcVar3)((Variant *)local_78,uVar16,&poll()::{lambda()#7}::operator()()::sname,&local_98);
        iVar18 = Variant::operator_cast_to_int((Variant *)local_78);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_98] != '\0') {
          Variant::_clear_internal();
        }
        _store_packet(this,iVar18,(Event *)local_c8);
      }
      else if (local_fc != 0) {
        if (*(code **)(*(long *)this + 0x200) == close) {
          if (*(int *)(this + 0x1a4) != 0) {
            close(this);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x200))(this);
        }
      }
LAB_00103c50:
      do {
        lVar1 = *(long *)(this + 0x1c0);
        while( true ) {
          if ((lVar1 == 0) || (*(int *)(this + 0x1e4) == 0)) goto LAB_00103e60;
          uVar27 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e0) * 4)
                           );
          uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1e0) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar27;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar2;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar19 = *(uint *)(*(long *)(this + 0x1c8) + lVar22 * 4);
          iVar18 = SUB164(auVar5 * auVar9,8);
          if (uVar19 == 0) goto LAB_00103e60;
          uVar24 = 0;
          while ((uVar19 != 1 || (*(int *)(*(long *)(lVar1 + lVar22 * 8) + 0x10) != 0))) {
            uVar24 = uVar24 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (iVar18 + 1) * uVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar27;
            lVar22 = SUB168(auVar6 * auVar10,8);
            uVar19 = *(uint *)(*(long *)(this + 0x1c8) + lVar22 * 4);
            iVar18 = SUB164(auVar6 * auVar10,8);
            if ((uVar19 == 0) ||
               (auVar7._8_8_ = 0, auVar7._0_8_ = uVar19 * uVar2, auVar11._8_8_ = 0,
               auVar11._0_8_ = uVar27, auVar8._8_8_ = 0,
               auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                         (ulong)*(uint *)(this + 0x1e0) * 4) + iVar18) -
                              SUB164(auVar7 * auVar11,8)) * uVar2, auVar12._8_8_ = 0,
               auVar12._0_8_ = uVar27, SUB164(auVar8 * auVar12,8) < uVar24)) goto LAB_00103e60;
          }
          local_e8 = (Object *)((ulong)local_e8 & 0xffffffff00000000);
          puVar21 = (undefined8 *)
                    HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                    ::operator[]((HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
                                  *)(this + 0x1b8),(int *)&local_e8);
          iVar18 = ENetConnection::check_events((EventType *)*puVar21,(Event *)&local_fc);
          if (iVar18 < 1) goto LAB_00103e60;
          if (local_fc != 1) goto LAB_00103c0f;
LAB_00103d45:
          cVar17 = (**(code **)(*(long *)this + 0x1b8))(this);
          if (cVar17 != '\0') {
            ENetPacketPeer::reset();
            goto LAB_00103c50;
          }
          uVar19 = uStack_bc;
          uVar16 = local_c8._0_8_;
          if (uStack_bc < 2) break;
          cVar17 = HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                   ::_lookup_pos((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                  *)(this + 0x1e8),(int *)(ulong)uStack_bc,(uint *)&local_e8);
          if (cVar17 != '\0') break;
          local_e8 = (Object *)CONCAT44(local_e8._4_4_,uVar19);
          pcVar3 = *(code **)(*(long *)uVar16 + 0xa8);
          Variant::Variant((Variant *)local_78,uVar19);
          if ((poll()::{lambda()#3}::operator()()::sname == '\0') &&
             (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#3}::operator()()::sname), iVar18 != 0)
             ) {
            _scs_create((char *)&poll()::{lambda()#3}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&poll()::{lambda()#3}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&poll()::{lambda()#3}::operator()()::sname);
          }
          (*pcVar3)(uVar16,&poll()::{lambda()#3}::operator()()::sname,(Variant *)local_78);
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          puVar21 = (undefined8 *)
                    HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                    ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                                  *)(this + 0x1e8),(int *)&local_e8);
          pOVar4 = (Object *)*puVar21;
          if ((Object *)local_c8._0_8_ != pOVar4) {
            *puVar21 = local_c8._0_8_;
            if (((Object *)local_c8._0_8_ != (Object *)0x0) &&
               (cVar17 = RefCounted::reference(), cVar17 == '\0')) {
              *puVar21 = 0;
            }
            if (((pOVar4 != (Object *)0x0) && (cVar17 = RefCounted::unreference(), cVar17 != '\0'))
               && (cVar17 = predelete_handler(pOVar4), cVar17 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          if ((poll()::{lambda()#4}::operator()()::sname == '\0') &&
             (iVar18 = __cxa_guard_acquire(&poll()::{lambda()#4}::operator()()::sname), iVar18 != 0)
             ) {
            _scs_create((char *)&poll()::{lambda()#4}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&poll()::{lambda()#4}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&poll()::{lambda()#4}::operator()()::sname);
          }
          Object::emit_signal<int>
                    ((Object *)this,(StringName *)&poll()::{lambda()#4}::operator()()::sname,uVar19)
          ;
          lVar1 = *(long *)(this + 0x1c0);
        }
        ENetPacketPeer::reset();
      } while( true );
    }
  }
  goto LAB_00103e69;
LAB_00103e60:
  local_128 = (Ref<ENetPacketPeer> *)local_c8;
  Ref<ENetPacketPeer>::unref(local_128);
LAB_00103e69:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010495b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::_bind_methods() */

void ENetMultiplayerPeer::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  long *plVar7;
  uint uVar8;
  Variant *pVVar9;
  long lVar10;
  long in_FS_OFFSET;
  CowData<char32_t> *local_340;
  undefined8 local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  char *local_238;
  undefined8 local_230;
  char *local_228;
  undefined8 local_220;
  long *local_218;
  int local_210;
  undefined8 local_208;
  undefined4 local_200;
  char *local_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e8;
  undefined *local_1d8;
  char *pcStack_1d0;
  char *local_1c8;
  char *pcStack_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  Variant *local_1a8;
  Variant *pVStack_1a0;
  Variant *local_198;
  Variant *pVStack_190;
  char **local_188;
  char *local_178;
  undefined *puStack_170;
  char *local_168;
  char *pcStack_160;
  char *local_158;
  char *pcStack_150;
  undefined8 local_148;
  char *local_138;
  undefined8 local_130;
  Variant local_120 [24];
  Variant local_108 [24];
  Variant local_f0 [24];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  Variant local_c0 [8];
  Variant *local_b8;
  undefined1 auStack_b0 [16];
  Variant *pVStack_a0;
  char **local_98;
  char **ppcStack_90;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  puVar4 = PTR__LC100_00110cd8;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_1d8 = &_LC101;
  pcStack_1d0 = "max_clients";
  local_1b8 = "out_bandwidth";
  local_1a8 = (Variant *)&local_1d8;
  local_1c8 = "max_channels";
  pcStack_1c0 = "in_bandwidth";
  pVStack_1a0 = (Variant *)&pcStack_1d0;
  local_198 = (Variant *)&local_1c8;
  local_1b0 = 0;
  pVStack_190 = (Variant *)&pcStack_1c0;
  local_188 = &local_1b8;
  D_METHODP((char *)&local_228,(char ***)"create_server",(uint)&local_1a8);
  Variant::Variant((Variant *)&local_b8,0x20);
  pVVar9 = (Variant *)local_40;
  Variant::Variant((Variant *)&pVStack_a0,0);
  Variant::Variant(local_88,0);
  Variant::Variant(local_70,0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_1a8 = (Variant *)&local_b8;
  pVStack_1a0 = (Variant *)&pVStack_a0;
  local_198 = local_88;
  pVStack_190 = local_70;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Error,int,int,int,int,int>(create_server);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,&local_1a8,4);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_218;
  } while (pVVar9 != (Variant *)&local_b8);
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  local_178 = "address";
  puStack_170 = &_LC101;
  pVVar9 = local_c0;
  local_168 = "channel_count";
  pcStack_160 = "in_bandwidth";
  local_158 = "out_bandwidth";
  pcStack_150 = "local_port";
  local_148 = 0;
  uVar8 = (uint)(Variant *)&local_b8;
  local_b8 = (Variant *)&local_178;
  pVStack_a0 = (Variant *)&pcStack_160;
  local_98 = &local_158;
  ppcStack_90 = &pcStack_150;
  auStack_b0._0_8_ = &puStack_170;
  auStack_b0._8_8_ = &local_168;
  D_METHODP((char *)&local_228,(char ***)"create_client",uVar8);
  Variant::Variant((Variant *)&local_138,0);
  Variant::Variant(local_120,0);
  Variant::Variant(local_108,0);
  Variant::Variant(local_f0,0);
  local_d0 = (undefined1  [16])0x0;
  local_d8 = 0;
  auStack_b0._8_8_ = local_108;
  auStack_b0._0_8_ = local_120;
  local_b8 = (Variant *)&local_138;
  pVStack_a0 = local_f0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Error,String_const&,int,int,int,int,int>
                     (create_client);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,&local_b8,4);
  do {
    pVVar1 = pVVar9 + -0x18;
    pVVar9 = pVVar9 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar5 = local_218;
  } while (pVVar9 != (Variant *)&local_138);
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  local_138 = "unique_id";
  local_130 = 0;
  local_b8 = (Variant *)&local_138;
  D_METHODP((char *)&local_228,(char ***)"create_mesh",uVar8);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Error,int>(create_mesh);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_1f8 = "peer_id";
  puStack_1f0 = puVar4;
  auStack_b0._0_8_ = &puStack_1f0;
  local_b8 = (Variant *)&local_1f8;
  D_METHODP((char *)&local_228,(char ***)"add_mesh_peer",uVar8);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Error,int,Ref<ENetConnection>>(add_mesh_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  local_138 = "ip";
  local_130 = 0;
  local_b8 = (Variant *)&local_138;
  D_METHODP((char *)&local_228,(char ***)"set_bind_ip",uVar8);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,IPAddress_const&>(set_bind_ip);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_228,(char ***)"get_host",0);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Ref<ENetConnection>>(get_host);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  local_138 = "id";
  local_130 = 0;
  local_b8 = (Variant *)&local_138;
  D_METHODP((char *)&local_228,(char ***)"get_peer",uVar8);
  auStack_b0 = (undefined1  [16])0x0;
  local_b8 = (Variant *)0x0;
  pMVar6 = create_method_bind<ENetMultiplayerPeer,Ref<ENetPacketPeer>,int>(get_peer);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_228,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_218;
  if (local_218 != (long *)0x0) {
    LOCK();
    plVar7 = local_218 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_218 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_218[-1];
      lVar10 = 0;
      local_218 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar10 = lVar10 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar10);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_228 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_240,true);
  _scs_create((char *)&local_248,true);
  local_250 = 0;
  local_228 = "ENetConnection";
  local_258 = 0;
  local_220 = 0xe;
  String::parse_latin1((StrRange *)&local_258);
  local_228 = "host";
  local_260 = 0;
  local_220 = 4;
  String::parse_latin1((StrRange *)&local_260);
  local_228 = (char *)CONCAT44(local_228._4_4_,0x18);
  local_220 = 0;
  if (local_260 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_220,(CowData *)&local_260);
  }
  local_218 = (long *)0x0;
  local_210 = 0x11;
  local_208 = 0;
  if (local_258 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_258);
    local_200 = 0;
    if (local_210 != 0x11) {
      StringName::operator=((StringName *)&local_218,(StringName *)&local_250);
      goto LAB_00105647;
    }
  }
  local_340 = (CowData<char32_t> *)&local_208;
  local_200 = 0;
  StringName::StringName((StringName *)&local_238,(String *)local_340,false);
  if (local_218 == (long *)local_238) {
    if ((StringName::configured != '\0') && (local_238 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_218 = (long *)local_238;
  }
LAB_00105647:
  local_340 = (CowData<char32_t> *)&local_208;
  local_268 = 0;
  local_238 = "ENetMultiplayerPeer";
  local_230 = 0x13;
  String::parse_latin1((StrRange *)&local_268);
  StringName::StringName((StringName *)&local_238,(String *)&local_268,false);
  ClassDB::add_property
            ((StringName *)&local_238,(PropertyInfo *)&local_228,(StringName *)&local_248,
             (StringName *)&local_240,-1);
  if ((StringName::configured != '\0') && (local_238 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref(local_340);
  if ((StringName::configured != '\0') && (local_218 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
  if ((((StringName::configured != '\0') &&
       ((local_250 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_248 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_240 != 0)) {
    StringName::unref();
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* ENetMultiplayerPeer::is_class_ptr(void*) const */

uint __thiscall ENetMultiplayerPeer::is_class_ptr(ENetMultiplayerPeer *this,void *param_1)

{
  return (uint)CONCAT71(0x110a,(undefined4 *)param_1 ==
                               &MultiplayerPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ENetMultiplayerPeer::_getv(StringName const&, Variant&) const */

undefined8 ENetMultiplayerPeer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ENetMultiplayerPeer::_setv(StringName const&, Variant const&) */

undefined8 ENetMultiplayerPeer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ENetMultiplayerPeer::_validate_propertyv(PropertyInfo&) const */

void ENetMultiplayerPeer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ENetMultiplayerPeer::_property_can_revertv(StringName const&) const */

undefined8 ENetMultiplayerPeer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ENetMultiplayerPeer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ENetMultiplayerPeer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ENetMultiplayerPeer::_notificationv(int, bool) */

void ENetMultiplayerPeer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::_gen_argument_type
          (MethodBindTRC<Ref<ENetPacketPeer>,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffea) + 0x18;
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::get_argument_meta
          (MethodBindTRC<Ref<ENetPacketPeer>,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Ref<ENetConnection>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<ENetConnection>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<ENetConnection>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<ENetConnection>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<IPAddress const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<IPAddress_const&>::_gen_argument_type(MethodBindT<IPAddress_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<IPAddress const&>::get_argument_meta(int) const */

undefined8 MethodBindT<IPAddress_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::_gen_argument_type(int) const */

undefined8 __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::_gen_argument_type
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 == 1) {
    uVar1 = 0x18;
  }
  return uVar1;
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::get_argument_meta
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error, int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int>::get_argument_meta(MethodBindTR<Error,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::_gen_argument_type
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::get_argument_meta
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < param_1) {
    bVar1 = -(param_1 - 1U < 5) & 3;
  }
  return bVar1;
}



/* MethodBindTR<Error, int, int, int, int, int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error,int,int,int,int,int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error, int, int, int, int, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,int,int,int,int>::get_argument_meta
          (MethodBindTR<Error,int,int,int,int,int> *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < param_1) {
    bVar1 = -((uint)param_1 < 5) & 3;
  }
  return bVar1;
}



/* MethodBindTR<Error, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,int,int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001107e0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,int,int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001107e0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110840;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110840;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108a0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108a0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::~MethodBindTR
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::~MethodBindTR
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<IPAddress const&>::~MethodBindT() */

void __thiscall MethodBindT<IPAddress_const&>::~MethodBindT(MethodBindT<IPAddress_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<IPAddress const&>::~MethodBindT() */

void __thiscall MethodBindT<IPAddress_const&>::~MethodBindT(MethodBindT<IPAddress_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC(MethodBindTRC<Ref<ENetConnection>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC(MethodBindTRC<Ref<ENetConnection>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<ENetPacketPeer>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<ENetPacketPeer>,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110458;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110458;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ENetMultiplayerPeer::_get_class_namev() const */

undefined8 * ENetMultiplayerPeer::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106b93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106b93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ENetMultiplayerPeer");
      goto LAB_00106bfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ENetMultiplayerPeer");
LAB_00106bfe:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00106c73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00106c73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00106cde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00106cde:
  return &_get_class_namev()::_class_name_static;
}



/* ENetMultiplayerPeer::get_class() const */

void ENetMultiplayerPeer::get_class(void)

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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* List<Ref<ENetPacketPeer>, DefaultAllocator>::~List() */

undefined8 __thiscall
List<Ref<ENetPacketPeer>,DefaultAllocator>::~List(List<Ref<ENetPacketPeer>,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_28;
  
  plVar7 = *(long **)this;
  if (plVar7 == (long *)0x0) {
    return uStack_28;
  }
  do {
    plVar1 = (long *)*plVar7;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar7[2] != 0) {
        uVar6 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar6;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar7) {
      lVar5 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar7 = lVar5;
      if (plVar1 == (long *)plVar7[1]) {
        plVar7[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar5;
        lVar5 = plVar1[1];
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar2;
      }
      if (*plVar1 != 0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          pOVar3 = (Object *)*plVar1;
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
      Memory::free_static(plVar1,false);
      *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar7 = *(long **)this;
  } while ((int)plVar7[2] != 0);
  uVar6 = Memory::free_static(plVar7,false);
  return uVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<ENetConnection>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetConnection> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
::operator[](HashMap<int,Ref<ENetConnection>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetConnection>>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  void *__s_00;
  undefined1 (*pauVar31) [16];
  void *pvVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined1 (*pauVar41) [16];
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar27 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar25 = _lookup_pos(this,(int *)(ulong)uVar27,&local_48);
  if (cVar25 == '\0') {
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar36 = (ulong)uVar28;
      uVar29 = uVar36 * 4;
      uVar40 = uVar36 * 8;
      uVar30 = Memory::alloc_static(uVar29,false);
      *(undefined8 *)(this + 0x10) = uVar30;
      pvVar32 = (void *)Memory::alloc_static(uVar40,false);
      *(void **)(this + 8) = pvVar32;
      if (uVar28 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar32 + uVar40)) &&
           (pvVar32 < (void *)((long)pvVar4 + uVar29))) {
          uVar29 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar29 * 4) = 0;
            *(undefined8 *)((long)pvVar32 + uVar29 * 8) = 0;
            uVar29 = uVar29 + 1;
          } while (uVar36 != uVar29);
        }
        else {
          memset(pvVar4,0,uVar29);
          memset(pvVar32,0,uVar40);
        }
      }
      uVar27 = *param_1;
    }
    local_44 = 0;
    cVar25 = _lookup_pos(this,(int *)(ulong)uVar27,&local_44);
    if (cVar25 == '\0') {
      if ((float)uVar28 * __LC36 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar27 = *(uint *)(this + 0x28);
        if (uVar27 == 0x1c) {
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          pauVar31 = (undefined1 (*) [16])0x0;
          goto LAB_00107535;
        }
        uVar29 = (ulong)(uVar27 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar27 * 4);
        if (uVar27 + 1 < 2) {
          uVar29 = 2;
        }
        uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
        uVar36 = (ulong)uVar27;
        *(int *)(this + 0x28) = (int)uVar29;
        pvVar32 = *(void **)(this + 8);
        uVar29 = uVar36 * 4;
        uVar40 = uVar36 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar30 = Memory::alloc_static(uVar29,false);
        *(undefined8 *)(this + 0x10) = uVar30;
        __s_00 = (void *)Memory::alloc_static(uVar40,false);
        *(void **)(this + 8) = __s_00;
        if (uVar27 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar29))) {
            uVar29 = 0;
            do {
              *(undefined4 *)((long)__s + uVar29 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar36);
          }
          else {
            memset(__s,0,uVar29);
            memset(__s_00,0,uVar40);
          }
        }
        if (uVar28 == 0) {
          uVar27 = *param_1;
        }
        else {
          uVar29 = 0;
          do {
            uVar27 = *(uint *)((long)pvVar4 + uVar29 * 4);
            if (uVar27 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar38 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar40 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar27 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar40;
              lVar34 = SUB168(auVar8 * auVar16,8);
              puVar1 = (uint *)(lVar5 + lVar34 * 4);
              iVar33 = SUB164(auVar8 * auVar16,8);
              uVar39 = *puVar1;
              uVar30 = *(undefined8 *)((long)pvVar32 + uVar29 * 8);
              while (uVar39 != 0) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar39 * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar40;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)((iVar33 + uVar3) - SUB164(auVar9 * auVar17,8)) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar40;
                uVar26 = SUB164(auVar10 * auVar18,8);
                uVar37 = uVar30;
                if (uVar26 < uVar38) {
                  *puVar1 = uVar27;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar34 * 8);
                  uVar37 = *puVar2;
                  *puVar2 = uVar30;
                  uVar27 = uVar39;
                  uVar38 = uVar26;
                }
                uVar38 = uVar38 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar6;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar40;
                lVar34 = SUB168(auVar11 * auVar19,8);
                puVar1 = (uint *)(lVar5 + lVar34 * 4);
                iVar33 = SUB164(auVar11 * auVar19,8);
                uVar30 = uVar37;
                uVar39 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar34 * 8) = uVar30;
              *puVar1 = uVar27;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar29 = uVar29 + 1;
          } while (uVar28 != uVar29);
          Memory::free_static(pvVar32,false);
          Memory::free_static(pvVar4,false);
          uVar27 = *param_1;
        }
      }
      pauVar31 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar31[1] = uVar27;
      *(undefined8 *)(pauVar31[1] + 8) = 0;
      *pauVar31 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar31;
      }
      else {
        *puVar2 = pauVar31;
        *(undefined8 **)(*pauVar31 + 8) = puVar2;
      }
      uVar27 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar31;
      uVar27 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
      uVar28 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
      uVar27 = uVar28 ^ uVar28 >> 0x10;
      if (uVar28 == uVar28 >> 0x10) {
        uVar29 = 1;
        uVar27 = 1;
      }
      else {
        uVar29 = (ulong)uVar27;
      }
      lVar5 = *(long *)(this + 0x10);
      uVar39 = 0;
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar40 = CONCAT44(0,uVar28);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar35 = SUB168(auVar12 * auVar20,8);
      lVar34 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar35 * 4);
      iVar33 = SUB164(auVar12 * auVar20,8);
      uVar3 = *puVar1;
      pauVar24 = pauVar31;
      while (uVar3 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar3 * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar40;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((iVar33 + uVar28) - SUB164(auVar13 * auVar21,8)) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar40;
        uVar38 = SUB164(auVar14 * auVar22,8);
        pauVar41 = pauVar24;
        if (uVar38 < uVar39) {
          *puVar1 = uVar27;
          puVar2 = (undefined8 *)(lVar34 + lVar35 * 8);
          pauVar41 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar24;
          uVar27 = uVar3;
          uVar39 = uVar38;
        }
        uVar39 = uVar39 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar40;
        lVar35 = SUB168(auVar15 * auVar23,8);
        puVar1 = (uint *)(lVar5 + lVar35 * 4);
        iVar33 = SUB164(auVar15 * auVar23,8);
        pauVar24 = pauVar41;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar34 + lVar35 * 8) = pauVar24;
      *puVar1 = uVar27;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar29 = (ulong)local_44;
      pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar29 * 8);
      pOVar7 = *(Object **)(pauVar31[1] + 8);
      if (pOVar7 != (Object *)0x0) {
        *(undefined8 *)(pauVar31[1] + 8) = 0;
        cVar25 = RefCounted::unreference();
        if ((cVar25 != '\0') && (cVar25 = predelete_handler(pOVar7), cVar25 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar29 * 8);
      }
    }
  }
  else {
    pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00107535:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar31[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, Ref<ENetPacketPeer>, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, Ref<ENetPacketPeer> > > >::operator[](int const&) */

undefined1 * __thiscall
HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
::operator[](HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
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
  undefined1 (*pauVar24) [16];
  char cVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  void *__s_00;
  undefined1 (*pauVar31) [16];
  void *pvVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined1 (*pauVar41) [16];
  long in_FS_OFFSET;
  uint local_48;
  uint local_44;
  long local_40;
  
  uVar27 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  cVar25 = _lookup_pos(this,(int *)(ulong)uVar27,&local_48);
  if (cVar25 == '\0') {
    uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar36 = (ulong)uVar28;
      uVar29 = uVar36 * 4;
      uVar40 = uVar36 * 8;
      uVar30 = Memory::alloc_static(uVar29,false);
      *(undefined8 *)(this + 0x10) = uVar30;
      pvVar32 = (void *)Memory::alloc_static(uVar40,false);
      *(void **)(this + 8) = pvVar32;
      if (uVar28 != 0) {
        pvVar4 = *(void **)(this + 0x10);
        if ((pvVar4 < (void *)((long)pvVar32 + uVar40)) &&
           (pvVar32 < (void *)((long)pvVar4 + uVar29))) {
          uVar29 = 0;
          do {
            *(undefined4 *)((long)pvVar4 + uVar29 * 4) = 0;
            *(undefined8 *)((long)pvVar32 + uVar29 * 8) = 0;
            uVar29 = uVar29 + 1;
          } while (uVar36 != uVar29);
        }
        else {
          memset(pvVar4,0,uVar29);
          memset(pvVar32,0,uVar40);
        }
      }
      uVar27 = *param_1;
    }
    local_44 = 0;
    cVar25 = _lookup_pos(this,(int *)(ulong)uVar27,&local_44);
    if (cVar25 == '\0') {
      if ((float)uVar28 * __LC36 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar27 = *(uint *)(this + 0x28);
        if (uVar27 == 0x1c) {
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          pauVar31 = (undefined1 (*) [16])0x0;
          goto LAB_00107b05;
        }
        uVar29 = (ulong)(uVar27 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar28 = *(uint *)(hash_table_size_primes + (ulong)uVar27 * 4);
        if (uVar27 + 1 < 2) {
          uVar29 = 2;
        }
        uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
        uVar36 = (ulong)uVar27;
        *(int *)(this + 0x28) = (int)uVar29;
        pvVar32 = *(void **)(this + 8);
        uVar29 = uVar36 * 4;
        uVar40 = uVar36 * 8;
        pvVar4 = *(void **)(this + 0x10);
        uVar30 = Memory::alloc_static(uVar29,false);
        *(undefined8 *)(this + 0x10) = uVar30;
        __s_00 = (void *)Memory::alloc_static(uVar40,false);
        *(void **)(this + 8) = __s_00;
        if (uVar27 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar29))) {
            uVar29 = 0;
            do {
              *(undefined4 *)((long)__s + uVar29 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
              uVar29 = uVar29 + 1;
            } while (uVar29 != uVar36);
          }
          else {
            memset(__s,0,uVar29);
            memset(__s_00,0,uVar40);
          }
        }
        if (uVar28 == 0) {
          uVar27 = *param_1;
        }
        else {
          uVar29 = 0;
          do {
            uVar27 = *(uint *)((long)pvVar4 + uVar29 * 4);
            if (uVar27 != 0) {
              lVar5 = *(long *)(this + 0x10);
              uVar38 = 0;
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar40 = CONCAT44(0,uVar3);
              lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar27 * lVar6;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar40;
              lVar34 = SUB168(auVar8 * auVar16,8);
              puVar1 = (uint *)(lVar5 + lVar34 * 4);
              iVar33 = SUB164(auVar8 * auVar16,8);
              uVar39 = *puVar1;
              uVar30 = *(undefined8 *)((long)pvVar32 + uVar29 * 8);
              while (uVar39 != 0) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar39 * lVar6;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar40;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)((iVar33 + uVar3) - SUB164(auVar9 * auVar17,8)) * lVar6;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar40;
                uVar26 = SUB164(auVar10 * auVar18,8);
                uVar37 = uVar30;
                if (uVar26 < uVar38) {
                  *puVar1 = uVar27;
                  puVar2 = (undefined8 *)((long)__s_00 + lVar34 * 8);
                  uVar37 = *puVar2;
                  *puVar2 = uVar30;
                  uVar27 = uVar39;
                  uVar38 = uVar26;
                }
                uVar38 = uVar38 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar6;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar40;
                lVar34 = SUB168(auVar11 * auVar19,8);
                puVar1 = (uint *)(lVar5 + lVar34 * 4);
                iVar33 = SUB164(auVar11 * auVar19,8);
                uVar30 = uVar37;
                uVar39 = *puVar1;
              }
              *(undefined8 *)((long)__s_00 + lVar34 * 8) = uVar30;
              *puVar1 = uVar27;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar29 = uVar29 + 1;
          } while (uVar28 != uVar29);
          Memory::free_static(pvVar32,false);
          Memory::free_static(pvVar4,false);
          uVar27 = *param_1;
        }
      }
      pauVar31 = (undefined1 (*) [16])operator_new(0x20,"");
      *(uint *)pauVar31[1] = uVar27;
      *(undefined8 *)(pauVar31[1] + 8) = 0;
      *pauVar31 = (undefined1  [16])0x0;
      puVar2 = *(undefined8 **)(this + 0x20);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar31;
      }
      else {
        *puVar2 = pauVar31;
        *(undefined8 **)(*pauVar31 + 8) = puVar2;
      }
      uVar27 = *param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar31;
      uVar27 = (uVar27 >> 0x10 ^ uVar27) * -0x7a143595;
      uVar28 = (uVar27 ^ uVar27 >> 0xd) * -0x3d4d51cb;
      uVar27 = uVar28 ^ uVar28 >> 0x10;
      if (uVar28 == uVar28 >> 0x10) {
        uVar29 = 1;
        uVar27 = 1;
      }
      else {
        uVar29 = (ulong)uVar27;
      }
      lVar5 = *(long *)(this + 0x10);
      uVar39 = 0;
      uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar40 = CONCAT44(0,uVar28);
      lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29 * lVar6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar35 = SUB168(auVar12 * auVar20,8);
      lVar34 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar5 + lVar35 * 4);
      iVar33 = SUB164(auVar12 * auVar20,8);
      uVar3 = *puVar1;
      pauVar24 = pauVar31;
      while (uVar3 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar3 * lVar6;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar40;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((iVar33 + uVar28) - SUB164(auVar13 * auVar21,8)) * lVar6;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar40;
        uVar38 = SUB164(auVar14 * auVar22,8);
        pauVar41 = pauVar24;
        if (uVar38 < uVar39) {
          *puVar1 = uVar27;
          puVar2 = (undefined8 *)(lVar34 + lVar35 * 8);
          pauVar41 = (undefined1 (*) [16])*puVar2;
          *puVar2 = pauVar24;
          uVar27 = uVar3;
          uVar39 = uVar38;
        }
        uVar39 = uVar39 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar40;
        lVar35 = SUB168(auVar15 * auVar23,8);
        puVar1 = (uint *)(lVar5 + lVar35 * 4);
        iVar33 = SUB164(auVar15 * auVar23,8);
        pauVar24 = pauVar41;
        uVar3 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar34 + lVar35 * 8) = pauVar24;
      *puVar1 = uVar27;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar29 = (ulong)local_44;
      pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar29 * 8);
      pOVar7 = *(Object **)(pauVar31[1] + 8);
      if (pOVar7 != (Object *)0x0) {
        *(undefined8 *)(pauVar31[1] + 8) = 0;
        cVar25 = RefCounted::unreference();
        if ((cVar25 != '\0') && (cVar25 = predelete_handler(pOVar7), cVar25 != '\0')) {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
        pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar29 * 8);
      }
    }
  }
  else {
    pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_48 * 8);
  }
LAB_00107b05:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar31[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::add_mesh_peer(int, Ref<ENetConnection>) [clone .cold] */

void ENetMultiplayerPeer::add_mesh_peer(void)

{
  code *pcVar1;
  long unaff_RBX;
  int *unaff_R13;
  
  HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
  ::operator[]((HashMap<int,Ref<ENetPacketPeer>,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,Ref<ENetPacketPeer>>>>
                *)(unaff_RBX + 0x1e8),unaff_R13);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ENetMultiplayerPeer::_bind_methods() [clone .cold] */

void ENetMultiplayerPeer::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */

undefined1  [16]
HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
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
  undefined1 auVar48 [16];
  long *plStack_98;
  
  lVar34 = *in_RSI;
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar30 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    if (lVar34 != 0) goto LAB_00107dfa;
  }
  else {
    uVar31 = *in_RDX;
    uVar42 = *(uint *)((long)in_RSI + 0x24);
LAB_00107dfa:
    if (uVar42 != 0) {
      uVar33 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar29 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar29 = (uVar29 ^ uVar29 >> 0xd) * -0x3d4d51cb;
      uVar41 = uVar29 ^ uVar29 >> 0x10;
      if (uVar29 == uVar29 >> 0x10) {
        uVar41 = 1;
        uVar40 = uVar33;
      }
      else {
        uVar40 = uVar41 * uVar33;
      }
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4));
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar43;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar40;
      lVar39 = SUB168(auVar5 * auVar17,8);
      iVar38 = SUB164(auVar5 * auVar17,8);
      uVar29 = *(uint *)(in_RSI[3] + lVar39 * 4);
      uVar40 = (ulong)uVar29;
      if (uVar29 != 0) {
        uVar29 = 0;
        do {
          if (uVar41 == (uint)uVar40) {
            uVar32 = *(uint *)(in_RSI[1] + lVar39 * 4);
            plStack_98 = (long *)(ulong)uVar32;
            if (*(uint *)(lVar34 + (long)plStack_98 * 4) == uVar31) goto LAB_00107eef;
          }
          uVar29 = uVar29 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (iVar38 + 1) * uVar33;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar43;
          lVar39 = SUB168(auVar6 * auVar18,8);
          uVar32 = *(uint *)(in_RSI[3] + lVar39 * 4);
          uVar40 = (ulong)uVar32;
          iVar38 = SUB164(auVar6 * auVar18,8);
        } while ((uVar32 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar40 * uVar33, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar43, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4
                                          ) + iVar38) - SUB164(auVar7 * auVar19,8)) * uVar33,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar43, uVar29 <= SUB164(auVar8 * auVar20,8)));
      }
    }
  }
  if ((float)uVar30 * __LC36 < (float)(uVar42 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      plStack_98 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar42 = *(uint *)((long)in_RSI + 0x24);
      lVar34 = *in_RSI;
      uVar32 = 0xffffffff;
      goto LAB_00107eef;
    }
    uVar30 = (int)in_RSI[4] + 1;
    uVar33 = (ulong)uVar30;
    if (uVar30 < 2) {
      uVar33 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar1 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar30 << 2;
    pvVar2 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,uVar33,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar30 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar33 = 0;
      lVar39 = in_RSI[3];
      lVar3 = in_RSI[2];
      do {
        uVar45 = uVar33 & 0xffffffff;
        uVar44 = (undefined4)uVar33;
        uVar29 = 0;
        uVar30 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar33 * 4) * 4);
        uVar40 = (ulong)uVar30;
        lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar43 = CONCAT44(0,uVar42);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar40 * lVar35;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar43;
        lVar36 = SUB168(auVar9 * auVar21,8) * 4;
        iVar38 = SUB164(auVar9 * auVar21,8);
        puVar47 = (uint *)(lVar39 + lVar36);
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
            auVar11._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar10 * auVar22,8)) * lVar35;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            uVar30 = SUB164(auVar11 * auVar23,8);
            if (uVar30 < uVar29) {
              *(int *)(lVar3 + uVar45 * 4) = iVar38;
              uVar31 = *puVar47;
              *puVar47 = (uint)uVar40;
              uVar29 = *(uint *)(lVar36 + lVar34);
              uVar40 = (ulong)uVar31;
              *(uint *)(lVar36 + lVar34) = (uint)uVar45;
              uVar45 = (ulong)uVar29;
              uVar29 = uVar30;
            }
            uVar44 = (undefined4)uVar45;
            uVar30 = (uint)uVar40;
            uVar29 = uVar29 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar38 + 1) * lVar35;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar43;
            lVar36 = SUB168(auVar12 * auVar24,8) * 4;
            iVar38 = SUB164(auVar12 * auVar24,8);
            puVar47 = (uint *)(lVar39 + lVar36);
            uVar31 = *puVar47;
          } while (uVar31 != 0);
          lVar35 = uVar45 << 2;
        }
        *puVar47 = uVar30;
        uVar33 = uVar33 + 1;
        *(int *)(lVar3 + lVar35) = iVar38;
        *(undefined4 *)(lVar34 + lVar36) = uVar44;
      } while ((uint)uVar33 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    uVar42 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    uVar31 = *in_RDX;
  }
  uVar30 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
  uVar29 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
  uVar30 = uVar29 ^ uVar29 >> 0x10;
  if (uVar29 == uVar29 >> 0x10) {
    uVar33 = 1;
    uVar30 = 1;
  }
  else {
    uVar33 = (ulong)uVar30;
  }
  uVar41 = 0;
  *(uint *)(lVar34 + (ulong)uVar42 * 4) = uVar31;
  lVar3 = in_RSI[3];
  uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar40 = CONCAT44(0,uVar42);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar33 * lVar36;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar39 = SUB168(auVar13 * auVar25,8) * 4;
  iVar38 = SUB164(auVar13 * auVar25,8);
  lVar35 = in_RSI[2];
  puVar47 = (uint *)(lVar3 + lVar39);
  lVar4 = in_RSI[1];
  uVar31 = *puVar47;
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  plStack_98 = in_RSI;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar36;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar42 + iVar38) - SUB164(auVar14 * auVar26,8)) * lVar36;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar31 = SUB164(auVar15 * auVar27,8);
    uVar32 = uVar30;
    uVar46 = uVar29;
    if (uVar31 < uVar41) {
      puVar37 = (uint *)(lVar39 + lVar4);
      *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
      uVar32 = *puVar47;
      *puVar47 = uVar30;
      uVar46 = *puVar37;
      *puVar37 = uVar29;
      uVar41 = uVar31;
    }
    uVar41 = uVar41 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar38 + 1) * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    plStack_98 = SUB168(auVar16 * auVar28,8);
    lVar39 = (long)plStack_98 * 4;
    iVar38 = SUB164(auVar16 * auVar28,8);
    puVar47 = (uint *)(lVar3 + lVar39);
    uVar29 = uVar46;
    uVar30 = uVar32;
    uVar31 = *puVar47;
  }
  *puVar47 = uVar30;
  *(int *)(lVar35 + (ulong)uVar29 * 4) = iVar38;
  *(uint *)(lVar4 + lVar39) = uVar29;
  uVar32 = *(uint *)((long)in_RSI + 0x24);
  uVar42 = uVar32 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar42;
LAB_00107eef:
  param_1[3] = uVar32;
  *(long *)param_1 = lVar34;
  param_1[2] = uVar42;
  auVar48._8_8_ = plStack_98;
  auVar48._0_8_ = param_1;
  return auVar48;
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108598) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00108898) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x108a62);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC63;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00108b3a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC63;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00108b3a:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00108e4f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00108e4f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00108f03;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00108faf;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00108faf:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00108f03;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108f03:
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* MethodBindTRC<Ref<ENetConnection>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<ENetConnection>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "ENetConnection";
  local_40 = 0xe;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_0010924d;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_0010924d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::is_class(String const&) const */

undefined8 __thiscall ENetMultiplayerPeer::is_class(ENetMultiplayerPeer *this,String *param_1)

{
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001093cf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001093cf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_00109483;
  }
  cVar6 = String::operator==(param_1,"ENetMultiplayerPeer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00109567;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00109567:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00109483;
    }
    cVar6 = String::operator==(param_1,"MultiplayerPeer");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_00109617;
                LOCK();
                lVar8 = *plVar1;
                bVar9 = lVar5 == lVar8;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar8 != -1) {
                local_60 = *(long *)(lVar4 + 0x10);
              }
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
LAB_00109617:
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00109483;
      }
      cVar6 = String::operator==(param_1,"PacketPeer");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
          return uVar7;
        }
        goto LAB_00109691;
      }
    }
  }
LAB_00109483:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00109691:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_0010982d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010982d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010984f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010984f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PacketPeer::_get_property_listv(PacketPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PacketPeer";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PacketPeer";
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
  if (local_90 == 0) {
LAB_00109bad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109bad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109bcf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109bcf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"PacketPeer",false);
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



/* MultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
MultiplayerPeer::_get_property_listv(MultiplayerPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    PacketPeer::_get_property_listv((PacketPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "MultiplayerPeer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "MultiplayerPeer";
  local_98 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109f8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109f8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109faf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109faf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"MultiplayerPeer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PacketPeer::_get_property_listv((PacketPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ENetMultiplayerPeer::_get_property_listv(ENetMultiplayerPeer *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    MultiplayerPeer::_get_property_listv((MultiplayerPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ENetMultiplayerPeer";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ENetMultiplayerPeer";
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
  if (local_90 == 0) {
LAB_0010a36d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010a36d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010a38f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010a38f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
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
  StringName::StringName((StringName *)&local_78,"ENetMultiplayerPeer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      MultiplayerPeer::_get_property_listv((MultiplayerPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<IPAddress const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<IPAddress_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010a5f9;
  local_78 = 0;
  local_68 = &_LC40;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010a6f5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010a6f5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010a5f9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Ref<ENetPacketPeer>::unref() */

void __thiscall Ref<ENetPacketPeer>::unref(Ref<ENetPacketPeer> *this)

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



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Error, int, int, int, int, int>(Error
   (ENetMultiplayerPeer::*)(int, int, int, int, int)) */

MethodBind *
create_method_bind<ENetMultiplayerPeer,Error,int,int,int,int,int>
          (_func_Error_int_int_int_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_int_int_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001107e0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 5;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Error, String const&, int, int, int, int,
   int>(Error (ENetMultiplayerPeer::*)(String const&, int, int, int, int, int)) */

MethodBind *
create_method_bind<ENetMultiplayerPeer,Error,String_const&,int,int,int,int,int>
          (_func_Error_String_ptr_int_int_int_int_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_String_ptr_int_int_int_int_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110840;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 6;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Error, int>(Error
   (ENetMultiplayerPeer::*)(int)) */

MethodBind * create_method_bind<ENetMultiplayerPeer,Error,int>(_func_Error_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001108a0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Error, int, Ref<ENetConnection> >(Error
   (ENetMultiplayerPeer::*)(int, Ref<ENetConnection>)) */

MethodBind *
create_method_bind<ENetMultiplayerPeer,Error,int,Ref<ENetConnection>>(_func_Error_int_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Error_int_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, IPAddress const&>(void
   (ENetMultiplayerPeer::*)(IPAddress const&)) */

MethodBind *
create_method_bind<ENetMultiplayerPeer,IPAddress_const&>(_func_void_IPAddress_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_IPAddress_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Ref<ENetConnection>>(Ref<ENetConnection>
   (ENetMultiplayerPeer::*)() const) */

MethodBind * create_method_bind<ENetMultiplayerPeer,Ref<ENetConnection>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001109c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<ENetMultiplayerPeer, Ref<ENetPacketPeer>, int>(Ref<ENetPacketPeer>
   (ENetMultiplayerPeer::*)(int) const) */

MethodBind * create_method_bind<ENetMultiplayerPeer,Ref<ENetPacketPeer>,int>(_func_Ref_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "ENetMultiplayerPeer";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ENetMultiplayerPeer::_initialize_classv() */

void ENetMultiplayerPeer::_initialize_classv(void)

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
    if (MultiplayerPeer::initialize_class()::initialized == '\0') {
      if (PacketPeer::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00114010 != RefCounted::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00114008 != PacketPeer::_bind_methods) {
        MultiplayerPeer::_bind_methods();
      }
      MultiplayerPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "MultiplayerPeer";
    local_68 = 0;
    local_50 = 0xf;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ENetMultiplayerPeer";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x0010b648) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<IPAddress const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<IPAddress_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar2 = param_2[0x23];
      if (pVVar2 == (Variant *)0x0) {
        pVVar2 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar2 = param_2[1] + 0x20;
    }
    if (local_58 == *(char **)pVVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b955;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  IPAddress::IPAddress(local_48,(String *)(*(long *)param_3 + 8));
  (*pcVar3)((long *)((long)param_2 + lVar1),local_48);
LAB_0010b955:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<IPAddress const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<IPAddress_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar2 = (long *)param_2[0x23];
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar2 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bb41;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)((long)param_2 + lVar1) + -1);
  }
  IPAddress::IPAddress(local_48,*param_3);
  (*pcVar3)((long *)((long)param_2 + lVar1),local_48);
LAB_0010bb41:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error,int>::validated_call
          (MethodBindTR<Error,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bd1b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010bd1b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int>::ptrcall
          (MethodBindTR<Error,int> *this,Object *param_1,void **param_2,void *param_3)

{
  uint uVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010befa;
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
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010befa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::validated_call
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c114;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined8 *)(param_2[1] + 8),
                    *(undefined8 *)(param_2[2] + 8),*(undefined8 *)(param_2[3] + 8),
                    *(undefined8 *)(param_2[4] + 8),*(undefined8 *)(param_2[5] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010c114:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::ptrcall(Object*, void const**,
   void*) const */

void __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::ptrcall
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c306;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1],*param_2[2],*param_2[3],
                    *param_2[4],*param_2[5]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010c306:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, int, int, int, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,int,int,int,int,int>::validated_call
          (MethodBindTR<Error,int,int,int,int,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c4ee;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8),
                    *(undefined4 *)(param_2[1] + 8),*(undefined4 *)(param_2[2] + 8),
                    *(undefined4 *)(param_2[3] + 8),*(undefined4 *)(param_2[4] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0010c4ee:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, int, int, int, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int,int,int,int,int>::ptrcall
          (MethodBindTR<Error,int,int,int,int,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c6c9;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60),**param_2,*param_2[1],*param_2[2],*param_2[3],
                    *param_2[4]);
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0010c6c9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::ptrcall
          (MethodBindTRC<Ref<ENetPacketPeer>,int> *this,Object *param_1,void **param_2,void *param_3
          )

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
      local_48 = (Object *)0x10b818;
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
      goto LAB_0010c8f9;
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
    if (pOVar5 == (Object *)0x0) goto LAB_0010c8f9;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010c941;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010c941;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010c941:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010c8f9;
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
LAB_0010c8f9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetConnection>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<ENetConnection>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10b818;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ccc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010ccc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetConnection>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<ENetConnection>>::ptrcall
          (MethodBindTRC<Ref<ENetConnection>> *this,Object *param_1,void **param_2,void *param_3)

{
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
      local_48 = (Object *)0x10b818;
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
      goto LAB_0010cf46;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010cf46;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010cf89;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010cf89;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010cf89:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010cf46;
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
LAB_0010cf46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::validated_call
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

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
      local_68 = (Object *)0x10b818;
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
      goto LAB_0010d26b;
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
LAB_0010d21b:
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
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&ENetConnection::typeinfo,0);
      if (pOVar2 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010d21b;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = (*pcVar7)(param_1 + lVar1,*(undefined4 *)(*param_2 + 8),(StringName *)&local_68);
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
LAB_0010d26b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::ptrcall
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this,Object *param_1,void **param_2,
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
      local_58 = (Object *)0x10b818;
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
      goto LAB_0010d523;
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
LAB_0010d4f2:
    local_58 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010d4f2;
  }
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar6)(param_1 + lVar1,**param_2,(StringName *)&local_58);
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
LAB_0010d523:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, int, int, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,int,int,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  Variant *pVVar17;
  long lVar18;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Variant *local_68 [5];
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar13 = (long *)plVar15[0x23];
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar15 + 0x40))();
      }
    }
    else {
      plVar13 = (long *)(plVar15[1] + 0x20);
    }
    if (local_98 == (char *)*plVar13) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d910;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar17 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 6) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar18;
    }
    if ((int)(5 - in_R8D) <= iVar6) {
      lVar12 = 0;
      do {
        if ((int)lVar12 < (int)in_R8D) {
          pVVar16 = *(Variant **)(param_4 + lVar12 * 8);
        }
        else {
          uVar14 = iVar6 + -5 + (int)lVar12;
          if (lVar18 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar18,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar16 = pVVar2 + (ulong)uVar14 * 0x18;
        }
        local_68[lVar12] = pVVar16;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 5);
      *in_R9 = 0;
      if (((ulong)pVVar17 & 1) != 0) {
        pVVar17 = *(Variant **)(pVVar17 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[4],2);
      uVar4 = _LC121;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_68[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[3],2);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_68[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[2],2);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_68[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[1],2);
      uVar4 = _LC124;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_68[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_68[0],2);
      uVar4 = _LC125;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar10 = Variant::operator_cast_to_int(local_68[0]);
      iVar6 = (*(code *)pVVar17)((Variant *)((long)plVar15 + (long)pVVar1),iVar10,iVar9,iVar8,iVar7,
                                 iVar6);
      Variant::Variant((Variant *)local_88,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_88[0];
      *(undefined8 *)(param_1 + 8) = local_80;
      *(undefined8 *)(param_1 + 0x10) = uStack_78;
      goto LAB_0010d910;
    }
    uVar11 = 4;
  }
  else {
    uVar11 = 3;
  }
  *in_R9 = uVar11;
  in_R9[2] = 5;
LAB_0010d910:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error,int>::call
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
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dc60;
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
      if (in_R8D != 1) goto LAB_0010dca0;
LAB_0010dc90:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010dca0:
        uVar7 = 4;
        goto LAB_0010dc55;
      }
      if (in_R8D == 1) goto LAB_0010dc90;
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
    uVar4 = _LC125;
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
LAB_0010dc55:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010dc60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<ENetPacketPeer>,int>::call
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
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10b818;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e020;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010e060;
LAB_0010e050:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e060:
        uVar8 = 4;
        goto LAB_0010e015;
      }
      if (in_R8D == 1) goto LAB_0010e050;
      lVar10 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar10) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar12 = pVVar12 + lVar10 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar13 & 1) != 0) {
      pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC125;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar7 = Variant::operator_cast_to_int(pVVar12);
    (*(code *)pVVar13)(&local_58,(Variant *)((long)plVar11 + (long)pVVar1),iVar7);
    Variant::Variant((Variant *)local_48,local_58);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_58 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58;
      if (cVar6 != '\0') {
        cVar6 = predelete_handler(local_58);
        if (cVar6 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
  }
  else {
    uVar8 = 3;
LAB_0010e015:
    *in_R9 = uVar8;
    in_R9[2] = 1;
  }
LAB_0010e020:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,Ref<ENetConnection>>::call
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
  Variant *this;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
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
    if (local_68 == (Object *)*plVar10) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x10b818;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e490;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (2 < in_R8D) {
    uVar8 = 3;
LAB_0010e485:
    *in_R9 = uVar8;
    in_R9[2] = 2;
    goto LAB_0010e490;
  }
  pVVar15 = param_2[5];
  iVar7 = 2 - in_R8D;
  if (pVVar15 == (Variant *)0x0) {
    if (iVar7 != 0) goto LAB_0010e4c0;
    this = *(Variant **)param_4;
LAB_0010e4dd:
    pVVar15 = *(Variant **)(param_4 + 8);
  }
  else {
    lVar2 = *(long *)(pVVar15 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_0010e4c0:
      uVar8 = 4;
      goto LAB_0010e485;
    }
    if (in_R8D == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_0010e600;
      this = pVVar15 + lVar11 * 0x18;
    }
    else {
      this = *(Variant **)param_4;
      if (in_R8D == 2) goto LAB_0010e4dd;
    }
    lVar11 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_0010e600:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar15 = pVVar15 + lVar11 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar14 & 1) != 0) {
    pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar15);
  uVar4 = _LC126;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_68 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_68;
  if (pOVar9 != local_68) {
    if (pOVar9 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_0010e3c7:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&ENetConnection::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_68 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010e3c7;
      }
    }
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC125;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  iVar7 = Variant::operator_cast_to_int(this);
  iVar7 = (*(code *)pVVar14)((Variant *)((long)plVar12 + (long)pVVar1),iVar7,&local_68);
  Variant::Variant((Variant *)local_58,iVar7);
  if (Variant::needs_deinit[*(int *)param_1] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined4 *)param_1 = local_58[0];
  *(undefined8 *)(param_1 + 8) = local_50;
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  if (local_68 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_68;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_68);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0010e490:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,int,int,int,int,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  long lVar16;
  uint in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  Variant *local_d0;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  Variant *local_78 [7];
  long local_40;
  
  plVar15 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar15 != (long *)0x0) && (plVar15[1] != 0)) && (*(char *)(plVar15[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar15[1] == 0) {
      plVar13 = (long *)plVar15[0x23];
      if (plVar13 == (long *)0x0) {
        plVar13 = (long *)(**(code **)(*plVar15 + 0x40))();
      }
    }
    else {
      plVar13 = (long *)(plVar15[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar13) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ea11;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_d0 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 7) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar6 = 0;
      lVar16 = 0;
    }
    else {
      lVar16 = *(long *)(pVVar2 + -8);
      iVar6 = (int)lVar16;
    }
    if ((int)(6 - in_R8D) <= iVar6) {
      lVar12 = 0;
      do {
        while ((int)in_R8D <= (int)lVar12) {
          uVar14 = iVar6 + -6 + (int)lVar12;
          if (lVar16 <= (int)uVar14) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar14,lVar16,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          local_78[lVar12] = pVVar2 + (ulong)uVar14 * 0x18;
          lVar12 = lVar12 + 1;
          if (lVar12 == 6) goto LAB_0010e828;
        }
        local_78[lVar12] = *(Variant **)(param_4 + lVar12 * 8);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 6);
LAB_0010e828:
      *in_R9 = 0;
      if (((ulong)local_d0 & 1) != 0) {
        local_d0 = *(Variant **)(local_d0 + *(long *)((long)plVar15 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[5],2);
      uVar4 = _LC127;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(local_78[5]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[4],2);
      uVar4 = _LC121;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[4]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[3],2);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[3]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar9 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar4 = _LC124;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar10 = Variant::operator_cast_to_int(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],4);
      uVar4 = _LC128;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_String((Variant *)&local_a8);
      iVar6 = (*(code *)local_d0)((Variant *)((long)plVar15 + (long)pVVar1),(Variant *)&local_a8,
                                  iVar10,iVar9,iVar8,iVar7,iVar6);
      Variant::Variant((Variant *)local_98,iVar6);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_98[0];
      *(undefined8 *)(param_1 + 8) = local_90;
      *(undefined8 *)(param_1 + 0x10) = uStack_88;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      goto LAB_0010ea11;
    }
    uVar11 = 4;
  }
  else {
    uVar11 = 3;
  }
  *in_R9 = uVar11;
  in_R9[2] = 6;
LAB_0010ea11:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::validated_call
          (MethodBindTRC<Ref<ENetPacketPeer>,int> *this,Object *param_1,Variant **param_2,
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
      goto LAB_0010ecac;
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
LAB_0010ecac:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<ENetConnection>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<ENetConnection>>::validated_call
          (MethodBindTRC<Ref<ENetConnection>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
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
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10b818;
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
      goto LAB_0010eef6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
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
LAB_0010eef6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, IPAddress const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(IPAddress const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,IPAddress_const&>
               (__UnexistingClass *param_1,_func_void_IPAddress_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

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
  undefined4 *puVar9;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  if (uVar8 < 2) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010f218;
LAB_0010f198:
      puVar9 = *(undefined4 **)CONCAT44(in_register_0000000c,param_4);
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010f218:
        uVar6 = 4;
        goto LAB_0010f1a5;
      }
      if (uVar8 == 1) goto LAB_0010f198;
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
      puVar9 = (undefined4 *)(lVar1 + lVar7 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_IPAddress_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar9,4);
    uVar4 = _LC128;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_IPAddress(aVStack_48);
    (*param_2)((IPAddress *)(param_1 + (long)param_3));
  }
  else {
    uVar6 = 3;
LAB_0010f1a5:
    *(undefined4 *)param_6 = uVar6;
    *(undefined4 *)(param_6 + 8) = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<IPAddress const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<IPAddress_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC120,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010f316;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,IPAddress_const&>
            (p_Var2,(_func_void_IPAddress_ptr *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010f316:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0010f517;
  local_78 = 0;
  local_68 = &_LC40;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010f615:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010f615;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_0010f517:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, int, int, int, int, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,int,int,int,int,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 5) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    uVar2 = local_60._0_8_;
    uVar3 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = uVar2;
    *(undefined8 *)(this + 0x10) = uVar3;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  }
  else {
    GetTypeInfo<Error,void>::get_class_info(this);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> * MethodBindTR<Error,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_4c = 0;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,&local_4c,(PropertyInfo *)&local_48);
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



/* MethodBindTRC<Ref<ENetPacketPeer>, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<ENetPacketPeer>,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
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
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
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
    goto LAB_0010f9e8;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = "ENetPacketPeer";
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_0010fae7:
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
    if (puVar4[6] == 0x11) goto LAB_0010fae7;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010f9e8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, Ref<ENetConnection> >::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,int,Ref<ENetConnection>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<Error,void> *this;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  this = (GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < in_EDX) {
    GetTypeInfo<Error,void>::get_class_info(this);
    goto LAB_0010fb73;
  }
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 6;
  local_bc = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  call_get_argument_type_info_helper<int>(in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
  if (in_EDX == local_bc) {
    local_a8 = 0;
    local_b0 = 0;
    local_68 = "ENetConnection";
    local_60._0_8_ = 0xe;
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
    local_50 = 0x11;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_b0 == 0) {
LAB_0010fdd3:
      local_40 = 6;
      StringName::StringName((StringName *)&local_a0,(String *)&local_48,false);
      if (local_60._8_8_ == local_a0) {
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_60._8_8_ = local_a0;
      }
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010fdd3;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if ((StringName::configured != '\0') && (local_a8 != 0)) {
      StringName::unref();
    }
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
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
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_48 = 0;
    }
    local_70 = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  uVar4 = local_90._8_8_;
  uVar3 = local_90._0_8_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_90._8_8_;
  local_90 = auVar1 << 0x40;
  *(undefined4 *)this = (undefined4)local_98;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined4 *)(this + 0x18) = (undefined4)local_80;
  *(long *)(this + 0x20) = local_78;
  *(undefined4 *)(this + 0x28) = local_70;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
LAB_0010fb73:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* void call_get_argument_type_info<String const&, int, int, int, int, int>(int, PropertyInfo&) */

void call_get_argument_type_info<String_const&,int,int,int,int,int>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  if (param_1 != 0) goto LAB_0010fe72;
  local_78 = 0;
  local_68 = &_LC40;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010ffc5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ffc5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010fe72:
  local_8c = 1;
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  call_get_argument_type_info_helper<int>(param_1,&local_8c,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, int, int, int, int, int>::_gen_argument_type_info(int) const
    */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,int,int,int,int,int>::_gen_argument_type_info(int param_1)

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
  if (in_EDX < 6) {
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 6;
    local_40 = (undefined1  [16])0x0;
    call_get_argument_type_info<String_const&,int,int,int,int,int>(in_EDX,(PropertyInfo *)&local_48)
    ;
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



/* WARNING: Control flow encountered bad instruction data */
/* List<Ref<ENetPacketPeer>, DefaultAllocator>::~List() */

void __thiscall
List<Ref<ENetPacketPeer>,DefaultAllocator>::~List(List<Ref<ENetPacketPeer>,DefaultAllocator> *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<ENetPacketPeer>, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetPacketPeer>,int>::~MethodBindTRC(MethodBindTRC<Ref<ENetPacketPeer>,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<ENetConnection>>::~MethodBindTRC(MethodBindTRC<Ref<ENetConnection>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<IPAddress const&>::~MethodBindT() */

void __thiscall MethodBindT<IPAddress_const&>::~MethodBindT(MethodBindT<IPAddress_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, Ref<ENetConnection> >::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,Ref<ENetConnection>>::~MethodBindTR
          (MethodBindTR<Error,int,Ref<ENetConnection>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int>::~MethodBindTR() */

void __thiscall MethodBindTR<Error,int>::~MethodBindTR(MethodBindTR<Error,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,String_const&,int,int,int,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, int, int, int, int, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,int,int,int,int>::~MethodBindTR
          (MethodBindTR<Error,int,int,int,int,int> *this)

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


