
/* PacketPeerUDP::get_max_packet_size() const */

undefined8 PacketPeerUDP::get_max_packet_size(void)

{
  return 0x200;
}



/* PacketPeerUDP::is_socket_connected() const */

PacketPeerUDP __thiscall PacketPeerUDP::is_socket_connected(PacketPeerUDP *this)

{
  return this[0x201ec];
}



/* PacketPeerUDP::is_bound() const */

undefined8 __thiscall PacketPeerUDP::is_bound(PacketPeerUDP *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x201f8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
    return uVar1;
  }
  return 0;
}



/* PacketPeerUDP::get_packet_port() const */

undefined4 __thiscall PacketPeerUDP::get_packet_port(PacketPeerUDP *this)

{
  return *(undefined4 *)(this + 0x201cc);
}



/* PacketPeerUDP::get_local_port() const */

undefined2 __thiscall PacketPeerUDP::get_local_port(PacketPeerUDP *this)

{
  long in_FS_OFFSET;
  undefined2 local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(**(long **)(this + 0x201f8) + 0x1b8))(*(long **)(this + 0x201f8),0,&local_12);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::set_broadcast_enabled(bool) */

void __thiscall PacketPeerUDP::set_broadcast_enabled(PacketPeerUDP *this,bool param_1)

{
  char cVar1;
  
  if (*(long *)(this + 0x201f0) != 0) {
    _err_print_error("set_broadcast_enabled","core/io/packet_peer_udp.cpp",0x29,
                     "Condition \"udp_server\" is true.",0,0);
    return;
  }
  this[0x201ee] = (PacketPeerUDP)param_1;
  if (*(long **)(this + 0x201f8) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00100104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x201f8) + 0x1c0))(*(long **)(this + 0x201f8),param_1);
      return;
    }
  }
  return;
}



/* PacketPeerUDP::leave_multicast_group(IPAddress, String const&) */

undefined8 PacketPeerUDP::leave_multicast_group(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x201f0) == 0) {
    if (*(long **)(param_1 + 0x201f8) == (long *)0x0) {
      _err_print_error("leave_multicast_group","core/io/packet_peer_udp.cpp",0x41,
                       "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
      uVar2 = 2;
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1a8))();
      if (cVar1 == '\0') {
        _err_print_error("leave_multicast_group","core/io/packet_peer_udp.cpp",0x42,
                         "Condition \"!_sock->is_open()\" is true. Returning: ERR_UNCONFIGURED",0,0)
        ;
        uVar2 = 3;
      }
      else {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1f0))
                          (*(long **)(param_1 + 0x201f8),&stack0x00000008,param_2);
      }
    }
    return uVar2;
  }
  _err_print_error("leave_multicast_group","core/io/packet_peer_udp.cpp",0x40,
                   "Condition \"udp_server\" is true. Returning: ERR_LOCKED",0,0);
  return 0x17;
}



/* PacketPeerUDP::join_multicast_group(IPAddress, String const&) */

ulong PacketPeerUDP::join_multicast_group(long param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  char in_stack_00000018;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x201f0) == 0) {
    if (*(long **)(param_1 + 0x201f8) == (long *)0x0) {
      _err_print_error("join_multicast_group","core/io/packet_peer_udp.cpp",0x32,
                       "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
      uVar4 = 2;
    }
    else if (in_stack_00000018 == '\0') {
      _err_print_error("join_multicast_group","core/io/packet_peer_udp.cpp",0x33,
                       "Condition \"!p_multi_address.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
      uVar4 = 0x1f;
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1a8))();
      if (cVar1 == '\0') {
        bVar2 = IPAddress::is_ipv4();
        local_24 = 2 - (uint)bVar2;
        uVar3 = (**(code **)(**(long **)(param_1 + 0x201f8) + 0x150))
                          (*(long **)(param_1 + 0x201f8),2,&local_24);
        if (uVar3 != 0) {
          _err_print_error("join_multicast_group","core/io/packet_peer_udp.cpp",0x38,
                           "Condition \"err != OK\" is true. Returning: err",0,0);
          uVar4 = (ulong)uVar3;
          goto LAB_001002be;
        }
        (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1c8))(*(long **)(param_1 + 0x201f8),0);
        (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1c0))
                  (*(long **)(param_1 + 0x201f8),*(undefined1 *)(param_1 + 0x201ee));
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x201f8) + 0x1e8))
                        (*(long **)(param_1 + 0x201f8),&stack0x00000008,param_2);
    }
  }
  else {
    _err_print_error("join_multicast_group","core/io/packet_peer_udp.cpp",0x31,
                     "Condition \"udp_server\" is true. Returning: ERR_LOCKED",0,0);
    uVar4 = 0x17;
  }
LAB_001002be:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::put_packet(unsigned char const*, int) */

ulong __thiscall PacketPeerUDP::put_packet(PacketPeerUDP *this,uchar *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x201f8) == (long *)0x0) {
    _err_print_error("put_packet","core/io/packet_peer_udp.cpp",0x8c,
                     "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
    uVar5 = 2;
  }
  else if (this[0x201e4] == (PacketPeerUDP)0x0) {
    _err_print_error("put_packet","core/io/packet_peer_udp.cpp",0x8d,
                     "Condition \"!peer_addr.is_valid()\" is true. Returning: ERR_UNCONFIGURED",0,0)
    ;
    uVar5 = 3;
  }
  else {
    local_38 = -1;
    cVar2 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
    if (cVar2 == '\0') {
      bVar3 = IPAddress::is_ipv4();
      local_34 = 2 - (uint)bVar3;
      uVar4 = (**(code **)(**(long **)(this + 0x201f8) + 0x150))
                        (*(long **)(this + 0x201f8),2,&local_34);
      if (uVar4 != 0) {
        _err_print_error("put_packet","core/io/packet_peer_udp.cpp",0x95,
                         "Condition \"err != OK\" is true. Returning: err",0,0);
        uVar5 = (ulong)uVar4;
        goto LAB_001004f0;
      }
      (**(code **)(**(long **)(this + 0x201f8) + 0x1c8))(*(long **)(this + 0x201f8),0);
      (**(code **)(**(long **)(this + 0x201f8) + 0x1c0))(*(long **)(this + 0x201f8),this[0x201ee]);
    }
    do {
      plVar1 = *(long **)(this + 0x201f8);
      if ((this[0x201ec] == (PacketPeerUDP)0x0) || (*(long *)(this + 0x201f0) != 0)) {
        uVar5 = (**(code **)(*plVar1 + 0x198))
                          (plVar1,param_1,param_2,&local_38,*(undefined2 *)(this + 0x201e8));
      }
      else {
        uVar5 = (**(code **)(*plVar1 + 400))(plVar1,param_1,param_2,&local_38);
      }
      if ((int)uVar5 == 0) goto LAB_001004f0;
      if ((int)uVar5 != 0x2c) {
        uVar5 = 1;
        goto LAB_001004f0;
      }
      if (this[0x201ed] == (PacketPeerUDP)0x0) goto LAB_001004f0;
    } while (local_38 != param_2);
    uVar5 = 0;
  }
LAB_001004f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::_get_packet_ip() const */

PacketPeerUDP * __thiscall PacketPeerUDP::_get_packet_ip(PacketPeerUDP *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  IPAddress::operator_cast_to_String((IPAddress *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::_set_dest_address(String const&, int) */

undefined8 __thiscall
PacketPeerUDP::_set_dest_address(PacketPeerUDP *this,String *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  IPAddress::clear();
  cVar1 = String::is_valid_ip_address();
  if (cVar1 == '\0') {
    uVar2 = IP::get_singleton();
    IP::resolve_hostname(&local_38,uVar2,param_1,3);
    local_58 = local_38;
    uStack_50 = uStack_30;
    local_48 = local_28;
    uVar2 = 0x1a;
    if ((char)local_28 == '\0') goto LAB_00100728;
  }
  else {
    IPAddress::IPAddress((IPAddress *)&local_38,param_1);
    local_48 = local_28;
    local_58 = local_38;
    uStack_50 = uStack_30;
  }
  if (this[0x201ec] == (PacketPeerUDP)0x0) {
    *(int *)(this + 0x201e8) = param_2;
    *(undefined2 *)(this + 0x201e4) = local_48;
    uVar2 = 0;
    *(undefined8 *)(this + 0x201d4) = local_58;
    *(undefined8 *)(this + 0x201dc) = uStack_50;
  }
  else {
    _err_print_error("set_dest_address","core/io/packet_peer_udp.cpp",0x166,
                     "Condition \"connected\" is true.",
                     "Destination address cannot be set for connected sockets",0,0);
    uVar2 = 0;
  }
LAB_00100728:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* PacketPeerUDP::wait() */

undefined8 __thiscall PacketPeerUDP::wait(PacketPeerUDP *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(this + 0x201f8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001007f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,0,0xffffffff);
    return uVar2;
  }
  _err_print_error(&_LC15,"core/io/packet_peer_udp.cpp",0x119,
                   "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
  return 2;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = __n;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* PacketPeerUDP::set_blocking_mode(bool) */

void __thiscall PacketPeerUDP::set_blocking_mode(PacketPeerUDP *this,bool param_1)

{
  this[0x201ed] = (PacketPeerUDP)param_1;
  return;
}



/* PacketPeerUDP::connect_shared_socket(Ref<NetSocket>, IPAddress, unsigned short, UDPServer*) */

undefined8
PacketPeerUDP::connect_shared_socket
          (long param_1,undefined8 *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined2 param_9)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  
  *(undefined8 *)(param_1 + 0x201f0) = param_4;
  pOVar1 = *(Object **)(param_1 + 0x201f8);
  *(undefined1 *)(param_1 + 0x201ec) = 1;
  pOVar2 = (Object *)*param_2;
  if (pOVar2 != pOVar1) {
    *(Object **)(param_1 + 0x201f8) = pOVar2;
    if (pOVar2 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *(undefined8 *)(param_1 + 0x201f8) = 0;
      }
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
  *(uint *)(param_1 + 0x201e8) = param_3 & 0xffff;
  *(uint *)(param_1 + 0x201cc) = param_3 & 0xffff;
  *(undefined2 *)(param_1 + 0x201e4) = param_9;
  *(undefined2 *)(param_1 + 0x201c8) = param_9;
  *(undefined8 *)(param_1 + 0x201d4) = param_7;
  *(undefined8 *)(param_1 + 0x201dc) = param_8;
  *(undefined8 *)(param_1 + 0x201b8) = param_7;
  *(undefined8 *)(param_1 + 0x201c0) = param_8;
  return 0;
}



/* PacketPeerUDP::store_packet(IPAddress, unsigned int, unsigned char*, int) */

undefined8 PacketPeerUDP::store_packet(long param_1,undefined4 param_2,long param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  long lVar12;
  int local_58;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar2 = *(int *)(param_1 + 0x1a8) - *(int *)(param_1 + 0x1ac);
  if (iVar2 < 0) {
    if (*(long *)(param_1 + 0x1a0) != 0) {
      iVar2 = iVar2 + *(int *)(*(long *)(param_1 + 0x1a0) + -8);
    }
    iVar4 = iVar2 + -1;
  }
  else {
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      if (*(long *)(param_1 + 0x1a0) == 0) {
        iVar4 = -1;
      }
      else {
        iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1a0) + -8) + -1;
      }
    }
  }
  if (iVar4 <= param_4 + 0x17) {
    return 6;
  }
  local_40 = param_4;
  local_3c = param_2;
  lVar3 = IPAddress::get_ipv6();
  iVar2 = *(int *)(param_1 + 0x1a8);
  uVar8 = *(uint *)(param_1 + 0x1ac);
  iVar4 = iVar2 - uVar8;
  if (iVar4 < 0) {
    lVar7 = *(long *)(param_1 + 0x1a0);
    iVar11 = iVar4 + -1;
    if (lVar7 == 0) goto LAB_00100b72;
    iVar4 = *(int *)(lVar7 + -8) + iVar4 + -1;
  }
  else if (iVar4 == 0) {
    if (*(long *)(param_1 + 0x1a0) == 0) {
      iVar11 = -1;
      lVar7 = 0;
      goto LAB_00100b72;
    }
    iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1a0) + -8) + -1;
  }
  else {
    iVar4 = iVar4 + -1;
  }
  iVar11 = 0x10;
  if (iVar4 < 0x11) {
    iVar11 = iVar4;
  }
  if (iVar4 != 0) {
    lVar7 = *(long *)(param_1 + 0x1a0);
LAB_00100b72:
    iVar4 = 0;
    iVar2 = iVar11;
    do {
      iVar9 = iVar2 + uVar8;
      if (lVar7 == 0) {
        if (0 < iVar9) {
          iVar9 = 0;
        }
        iVar9 = iVar9 - uVar8;
        if (0 < iVar9) goto LAB_00100d21;
      }
      else {
        if (*(int *)(lVar7 + -8) < iVar9) {
          iVar9 = *(int *)(lVar7 + -8);
        }
        iVar9 = iVar9 - uVar8;
        if (0 < iVar9) {
          lVar5 = (long)(int)uVar8;
          uVar10 = *(undefined1 *)(lVar3 + iVar4);
          if (lVar5 < 0) {
LAB_00100d30:
            lVar3 = *(long *)(lVar7 + -8);
            goto LAB_00100c63;
          }
          lVar12 = iVar4 - lVar5;
          lVar6 = iVar9 + lVar5;
          while( true ) {
            if (lVar7 == 0) goto LAB_00100c45;
            if (*(long *)(lVar7 + -8) <= lVar5) goto LAB_00100d30;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x1a0));
            *(undefined1 *)(*(long *)(param_1 + 0x1a0) + lVar5) = uVar10;
            if (lVar5 + 1 == lVar6) break;
            lVar7 = *(long *)(param_1 + 0x1a0);
            uVar10 = *(undefined1 *)(lVar5 + 1 + lVar12 + lVar3);
            lVar5 = lVar5 + 1;
          }
          iVar4 = (iVar4 - uVar8) + 1 + (int)lVar5;
        }
      }
      iVar2 = iVar2 - iVar9;
      if (iVar2 == 0) goto LAB_00100d3c;
      lVar7 = *(long *)(param_1 + 0x1a0);
      uVar8 = 0;
    } while( true );
  }
LAB_00100d5d:
  uVar8 = uVar8 & *(uint *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1ac) = uVar8;
  iVar4 = iVar2 - uVar8;
  if (iVar4 < 0) {
    lVar3 = *(long *)(param_1 + 0x1a0);
    iVar11 = iVar4 + -1;
    if (lVar3 == 0) {
LAB_00100da5:
      lVar7 = 0;
      local_58 = iVar11;
      do {
        iVar2 = uVar8 + local_58;
        if (lVar3 == 0) {
          if (0 < iVar2) {
            iVar2 = 0;
          }
          iVar4 = iVar2 - uVar8;
          if (0 < iVar4) goto LAB_00100d21;
        }
        else {
          iVar4 = *(int *)(lVar3 + -8);
          if (iVar2 <= *(int *)(lVar3 + -8)) {
            iVar4 = iVar2;
          }
          iVar4 = iVar4 - uVar8;
          if (0 < iVar4) {
            lVar5 = (long)(int)uVar8;
            uVar10 = *(undefined1 *)((long)&local_3c + lVar7);
            if (lVar5 < 0) {
LAB_00100e6e:
              lVar3 = *(long *)(lVar3 + -8);
              goto LAB_00100c63;
            }
            lVar6 = (long)((int)lVar7 + 1);
            lVar7 = iVar4 + lVar5;
            while( true ) {
              if (lVar3 == 0) goto LAB_00100c45;
              if (*(long *)(lVar3 + -8) <= lVar5) goto LAB_00100e6e;
              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x1a0));
              *(undefined1 *)(*(long *)(param_1 + 0x1a0) + lVar5) = uVar10;
              lVar5 = lVar5 + 1;
              if (lVar7 == lVar5) break;
              lVar3 = *(long *)(param_1 + 0x1a0);
              uVar10 = *(undefined1 *)((long)&local_3c + lVar6);
              lVar6 = lVar6 + 1;
            }
            lVar7 = (long)(int)lVar6;
          }
        }
        uVar8 = 0;
        local_58 = local_58 - iVar4;
        if (local_58 == 0) goto LAB_00101012;
        lVar3 = *(long *)(param_1 + 0x1a0);
      } while( true );
    }
    iVar9 = *(int *)(lVar3 + -8) + iVar4 + -1;
    iVar11 = 4;
    if (iVar9 < 5) {
      iVar11 = iVar9;
    }
    if (iVar9 != 0) goto LAB_00100da5;
LAB_00100ebd:
    iVar11 = iVar4 + -1;
    if (lVar3 != 0) {
      iVar4 = iVar4 + *(int *)(lVar3 + -8) + -1;
LAB_00100ecc:
      iVar11 = 4;
      if (iVar4 < 5) {
        iVar11 = iVar4;
      }
      if (iVar4 == 0) goto LAB_00101248;
      lVar3 = *(long *)(param_1 + 0x1a0);
    }
  }
  else {
    if (iVar4 != 0) {
      iVar4 = iVar4 + -1;
      iVar11 = 4;
      if (iVar4 < 5) {
        iVar11 = iVar4;
      }
      if (iVar4 != 0) {
        lVar3 = *(long *)(param_1 + 0x1a0);
        goto LAB_00100da5;
      }
LAB_00101248:
      iVar11 = 0;
LAB_0010109d:
      uVar8 = *(int *)(param_1 + 0x1ac) + iVar11 & *(uint *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1ac) = uVar8;
      iVar2 = iVar2 - uVar8;
      if (iVar2 < 0) {
        if (*(long *)(param_1 + 0x1a0) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1a0) + -8);
        }
        iVar4 = iVar2 + -1 + iVar4;
      }
      else {
        iVar4 = iVar2 + -1;
        if (iVar2 == 0) {
          if (*(long *)(param_1 + 0x1a0) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1a0) + -8);
          }
          iVar4 = iVar4 + -1;
        }
      }
      if (iVar4 < param_4) {
        param_4 = iVar4;
      }
      iVar2 = param_4;
      iVar4 = 0;
      do {
        if (iVar2 == 0) {
          *(int *)(param_1 + 0x201d0) = *(int *)(param_1 + 0x201d0) + 1;
          *(uint *)(param_1 + 0x1ac) =
               *(int *)(param_1 + 0x1ac) + param_4 & *(uint *)(param_1 + 0x1b0);
          return 0;
        }
        if (*(long *)(param_1 + 0x1a0) == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = (int)*(undefined8 *)(*(long *)(param_1 + 0x1a0) + -8);
        }
        lVar3 = (long)iVar4;
        lVar5 = (long)(int)uVar8;
        iVar9 = uVar8 + iVar2;
        if (iVar11 < (int)(uVar8 + iVar2)) {
          iVar9 = iVar11;
        }
        while ((int)lVar3 - iVar4 < (int)(iVar9 - uVar8)) {
          uVar10 = *(undefined1 *)(param_3 + lVar3);
          lVar7 = *(long *)(param_1 + 0x1a0);
          if (lVar5 < 0) {
            if (lVar7 == 0) {
LAB_001011e2:
              lVar3 = 0;
            }
            else {
LAB_001011bb:
              lVar3 = *(long *)(lVar7 + -8);
            }
            goto LAB_00100c63;
          }
          if (lVar7 == 0) goto LAB_001011e2;
          lVar3 = lVar3 + 1;
          if (*(long *)(lVar7 + -8) <= lVar5) goto LAB_001011bb;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x1a0));
          *(undefined1 *)(*(long *)(param_1 + 0x1a0) + lVar5) = uVar10;
          lVar5 = lVar5 + 1;
        }
        iVar2 = iVar2 - (iVar9 - uVar8);
        uVar8 = 0;
        iVar4 = (int)lVar3;
      } while( true );
    }
    lVar3 = *(long *)(param_1 + 0x1a0);
    if (lVar3 == 0) {
      iVar11 = -1;
      goto LAB_00100da5;
    }
    iVar4 = *(int *)(lVar3 + -8) + -1;
    iVar11 = 4;
    if (iVar4 < 5) {
      iVar11 = iVar4;
    }
    if (iVar4 != 0) goto LAB_00100da5;
LAB_00101055:
    if (lVar3 != 0) {
      iVar4 = (int)*(undefined8 *)(lVar3 + -8) + -1;
      goto LAB_00100ecc;
    }
    iVar11 = -1;
    lVar3 = 0;
  }
  lVar7 = 0;
  iVar2 = iVar11;
LAB_00100f0a:
  iVar4 = uVar8 + iVar2;
  if (lVar3 == 0) {
    if (0 < iVar4) {
      iVar4 = 0;
    }
    iVar4 = iVar4 - uVar8;
    if (iVar4 < 1) goto LAB_00101069;
    lVar5 = (long)(int)uVar8;
    lVar3 = 0;
    goto LAB_00100c63;
  }
  if (*(int *)(lVar3 + -8) < iVar4) {
    iVar4 = *(int *)(lVar3 + -8);
  }
  iVar4 = iVar4 - uVar8;
  if (0 < iVar4) {
    lVar5 = (long)(int)uVar8;
    uVar10 = *(undefined1 *)((long)&local_40 + lVar7);
    if (-1 < lVar5) {
      lVar7 = (long)((int)lVar7 + 1);
      lVar6 = iVar4 + lVar5;
      do {
        if (lVar3 == 0) {
LAB_00100f9a:
          lVar3 = 0;
          goto LAB_00100c63;
        }
        if (*(long *)(lVar3 + -8) <= lVar5) {
          if (lVar3 == 0) goto LAB_00100f9a;
          break;
        }
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x1a0));
        *(undefined1 *)(*(long *)(param_1 + 0x1a0) + lVar5) = uVar10;
        lVar5 = lVar5 + 1;
        if (lVar6 == lVar5) goto LAB_00101066;
        lVar3 = *(long *)(param_1 + 0x1a0);
        uVar10 = *(undefined1 *)((long)&local_40 + lVar7);
        lVar7 = lVar7 + 1;
      } while( true );
    }
    lVar3 = *(long *)(lVar3 + -8);
    goto LAB_00100c63;
  }
LAB_00101069:
  uVar8 = 0;
  iVar2 = iVar2 - iVar4;
  if (iVar2 == 0) goto LAB_00101085;
  lVar3 = *(long *)(param_1 + 0x1a0);
  goto LAB_00100f0a;
LAB_00100d3c:
  iVar2 = *(int *)(param_1 + 0x1a8);
  uVar8 = *(int *)(param_1 + 0x1ac) + iVar11;
  goto LAB_00100d5d;
LAB_00101012:
  iVar2 = *(int *)(param_1 + 0x1a8);
  uVar8 = *(uint *)(param_1 + 0x1b0) & iVar11 + *(int *)(param_1 + 0x1ac);
  *(uint *)(param_1 + 0x1ac) = uVar8;
  iVar4 = iVar2 - uVar8;
  if (iVar4 < 0) {
    lVar3 = *(long *)(param_1 + 0x1a0);
    goto LAB_00100ebd;
  }
  if (iVar4 == 0) {
    lVar3 = *(long *)(param_1 + 0x1a0);
    goto LAB_00101055;
  }
  iVar4 = iVar4 + -1;
  goto LAB_00100ecc;
LAB_00101066:
  lVar7 = (long)(int)lVar7;
  goto LAB_00101069;
LAB_00101085:
  iVar2 = *(int *)(param_1 + 0x1a8);
  goto LAB_0010109d;
LAB_00100d21:
  lVar5 = (long)(int)uVar8;
LAB_00100c45:
  lVar3 = 0;
LAB_00100c63:
  _err_print_index_error
            ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar3,"p_index",
             "((Vector<T> *)(this))->_cowdata.size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PacketPeerUDP::_poll() */

undefined1 __thiscall PacketPeerUDP::_poll(PacketPeerUDP *this)

{
  PacketPeerUDP *pPVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 uVar5;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x201f8) == (long *)0x0) {
    _err_print_error("_poll","core/io/packet_peer_udp.cpp",0x11e,
                     "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
    uVar5 = 2;
  }
  else {
    cVar3 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
    uVar5 = 1;
    if ((cVar3 != '\0') && (uVar5 = 0, *(long *)(this + 0x201f0) == 0)) {
      pPVar1 = this + 0x1b8;
      IPAddress::clear();
      while( true ) {
        plVar2 = *(long **)(this + 0x201f8);
        if (this[0x201ec] == (PacketPeerUDP)0x0) {
          iVar4 = (**(code **)(*plVar2 + 0x188))
                            (plVar2,pPVar1,0x10000,&local_4c,&local_48,&local_4e,0);
        }
        else {
          iVar4 = (**(code **)(*plVar2 + 0x180))(plVar2,pPVar1,0x10000,&local_4c);
          local_48 = *(undefined8 *)(this + 0x201d4);
          uStack_40 = *(undefined8 *)(this + 0x201dc);
          local_38 = CONCAT22(local_38._2_2_,*(undefined2 *)(this + 0x201e4));
          local_4e = (undefined2)*(undefined4 *)(this + 0x201e8);
        }
        if (iVar4 != 0) break;
        iVar4 = store_packet(this,local_4e,pPVar1,local_4c);
        if (iVar4 != 0) {
          _err_print_error("_poll","core/io/packet_peer_udp.cpp",0x13f,
                           "Buffer full, dropping packets!",0,1);
        }
      }
      uVar5 = iVar4 != 0x2c;
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* PacketPeerUDP::get_available_packet_count() const */

undefined4 __thiscall PacketPeerUDP::get_available_packet_count(PacketPeerUDP *this)

{
  int iVar1;
  
  iVar1 = _poll(this);
  if (iVar1 == 0) {
    return *(undefined4 *)(this + 0x201d0);
  }
  return 0xffffffff;
}



/* PacketPeerUDP::get_packet(unsigned char const**, int&) */

int __thiscall PacketPeerUDP::get_packet(PacketPeerUDP *this,uchar **param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long in_FS_OFFSET;
  int local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = _poll(this);
  if (iVar1 != 0) goto LAB_0010164b;
  if (*(int *)(this + 0x201d0) == 0) {
    iVar1 = 2;
    goto LAB_0010164b;
  }
  uVar8 = *(uint *)(this + 0x1a8);
  local_5c = 0;
  lVar11 = *(long *)(this + 0x1a0);
  local_58 = (undefined1  [16])0x0;
  iVar3 = uVar8 - *(int *)(this + 0x1ac);
  if (lVar11 == 0) {
    iVar7 = 0;
    if (iVar3 < 0) {
      uVar4 = *(int *)(this + 0x1ac) - uVar8;
      if (0x10 < (int)uVar4) {
        uVar4 = 0x10;
      }
      uVar17 = uVar4 + uVar8;
      goto LAB_0010169b;
    }
LAB_001014ec:
    uVar17 = uVar8;
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      goto LAB_0010167a;
    }
  }
  else {
    iVar7 = (int)*(undefined8 *)(lVar11 + -8);
    if (-1 < iVar3) goto LAB_001014ec;
    iVar3 = iVar3 + -1 + iVar7;
LAB_0010167a:
    uVar4 = (iVar7 - iVar3) - 1;
    if (0x10 < (int)uVar4) {
      uVar4 = 0x10;
    }
    uVar17 = uVar4 + uVar8;
    if (iVar7 - iVar3 != 1) {
LAB_0010169b:
      iVar3 = 0;
      uVar15 = uVar17;
      if (lVar11 == 0) goto LAB_001016ff;
      do {
        uVar10 = *(uint *)(lVar11 + -8);
        while( true ) {
          if ((int)uVar15 <= (int)uVar10) {
            uVar10 = uVar15;
          }
          iVar7 = uVar10 - uVar8;
          if (0 < iVar7) {
            lVar2 = 0;
            do {
              local_58[lVar2 + iVar3] = *(undefined1 *)((int)uVar8 + lVar11 + lVar2);
              lVar2 = lVar2 + 1;
            } while (iVar7 != lVar2);
            iVar3 = iVar3 + iVar7;
          }
          uVar8 = 0;
          uVar15 = uVar4 - iVar7;
          if (uVar15 == 0) goto LAB_001014fb;
          uVar4 = uVar15;
          if (lVar11 != 0) break;
LAB_001016ff:
          uVar10 = 0;
        }
      } while( true );
    }
  }
LAB_001014fb:
  *(uint *)(this + 0x1a8) = uVar17 & *(uint *)(this + 0x1b0);
  IPAddress::set_ipv6((uchar *)(this + 0x201b8));
  lVar11 = *(long *)(this + 0x1a0);
  if (lVar11 == 0) {
    uVar5 = (ulong)*(int *)(this + 0x1a8);
    iVar7 = 0;
    iVar3 = *(int *)(this + 0x1a8) - *(int *)(this + 0x1ac);
    if (-1 < iVar3) goto LAB_00101549;
LAB_00101551:
    iVar7 = iVar7 - (iVar3 + -1);
    iVar3 = iVar7 + -1;
    if (4 < iVar3) {
      iVar3 = 4;
    }
    if (iVar7 == 1) {
      uVar5 = (ulong)(uint)((int)uVar5 + iVar3);
    }
    else {
      iVar14 = 0;
      iVar7 = iVar3;
      do {
        iVar9 = (int)uVar5 + iVar7;
        if (lVar11 == 0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *(int *)(lVar11 + -8);
        }
        if (iVar16 < iVar9) {
          iVar9 = iVar16;
        }
        iVar9 = iVar9 - (int)uVar5;
        if (0 < iVar9) {
          lVar2 = (long)iVar14;
          lVar6 = uVar5 - lVar2;
          lVar13 = iVar9 + lVar2;
          do {
            this[lVar2 + 0x201cc] = *(PacketPeerUDP *)(lVar11 + lVar6 + lVar2);
            lVar2 = lVar2 + 1;
          } while (lVar2 != lVar13);
          lVar11 = *(long *)(this + 0x1a0);
          iVar14 = iVar14 + iVar9;
        }
        uVar5 = 0;
        iVar7 = iVar7 - iVar9;
      } while (iVar7 != 0);
      uVar5 = (ulong)(uint)(*(int *)(this + 0x1a8) + iVar3);
    }
  }
  else {
    uVar5 = (ulong)*(int *)(this + 0x1a8);
    iVar7 = (int)*(undefined8 *)(lVar11 + -8);
    iVar3 = *(int *)(this + 0x1a8) - *(int *)(this + 0x1ac);
    if (iVar3 < 0) {
      iVar3 = iVar3 + iVar7;
      goto LAB_00101551;
    }
LAB_00101549:
    if (iVar3 != 0) goto LAB_00101551;
  }
  uVar8 = *(uint *)(this + 0x1b0);
  iVar3 = *(int *)(this + 0x1ac);
  uVar4 = (uint)uVar5 & uVar8;
  *(uint *)(this + 0x1a8) = uVar4;
  iVar7 = uVar4 - iVar3;
  if (lVar11 == 0) {
    if (iVar7 < 0) {
      iVar7 = iVar3 - uVar4;
      if (4 < (int)(iVar3 - uVar4)) {
        iVar7 = 4;
      }
      iVar14 = 0;
    }
    else {
      if (iVar7 == 0) goto LAB_00101618;
      iVar14 = 0;
      iVar7 = iVar3 - uVar4;
    }
LAB_0010172a:
    lVar2 = (long)(int)uVar4;
    iVar16 = 0;
    iVar9 = iVar7;
    do {
      iVar12 = (int)lVar2 + iVar9;
      if (iVar14 < iVar12) {
        iVar12 = iVar14;
      }
      uVar17 = iVar12 - (int)lVar2;
      if (0 < (int)uVar17) {
        lVar6 = (long)iVar16;
        iVar16 = iVar16 + uVar17;
        memcpy(local_58 + lVar6 + -4,(void *)(lVar2 + lVar11),(ulong)uVar17);
      }
      lVar2 = 0;
      iVar9 = iVar9 - uVar17;
    } while (iVar9 != 0);
    uVar4 = iVar7 + uVar4 & uVar8;
    *(uint *)(this + 0x1a8) = uVar4;
    iVar3 = uVar4 - iVar3;
    iVar9 = local_5c;
LAB_001017cd:
    if (iVar3 < 0) {
      iVar7 = -iVar3;
    }
    else if (iVar3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = iVar14 - iVar3;
    }
    if (iVar9 <= iVar7) {
      iVar7 = iVar9;
    }
    iVar3 = 0;
    if (iVar7 != 0) {
      lVar11 = *(long *)(this + 0x1a0);
      iVar14 = uVar4 + iVar7;
      iVar16 = iVar7;
      if (lVar11 == 0) goto LAB_0010185f;
      do {
        iVar12 = *(int *)(lVar11 + -8);
        while( true ) {
          if (iVar12 < iVar14) {
            iVar14 = iVar12;
          }
          iVar14 = iVar14 - uVar4;
          if (0 < iVar14) {
            lVar2 = (long)iVar3;
            lVar6 = (int)uVar4 - lVar2;
            lVar13 = iVar14 + lVar2;
            do {
              this[lVar2 + 0x101b8] = *(PacketPeerUDP *)(lVar11 + lVar6 + lVar2);
              lVar2 = lVar2 + 1;
            } while (lVar2 != lVar13);
            iVar3 = iVar3 + iVar14;
          }
          uVar4 = 0;
          iVar14 = iVar16 - iVar14;
          if (iVar14 == 0) goto LAB_00101621;
          lVar11 = *(long *)(this + 0x1a0);
          iVar16 = iVar14;
          if (lVar11 != 0) break;
LAB_0010185f:
          iVar12 = 0;
        }
      } while( true );
    }
  }
  else {
    iVar14 = (int)*(undefined8 *)(lVar11 + -8);
    if (iVar7 < 0) {
      iVar9 = -(iVar7 + -1);
      iVar7 = iVar9 + -1;
      if (4 < iVar9 + -1) {
        iVar7 = 4;
      }
LAB_00101721:
      if (iVar9 != 1) goto LAB_0010172a;
      *(uint *)(this + 0x1a8) = uVar4;
      iVar9 = 0;
      iVar3 = uVar4 - iVar3;
      goto LAB_001017cd;
    }
    if (iVar7 != 0) {
      iVar9 = iVar14 - (iVar7 + -1);
      iVar7 = iVar9 + -1;
      if (4 < iVar9 + -1) {
        iVar7 = 4;
      }
      goto LAB_00101721;
    }
LAB_00101618:
    iVar9 = 0;
  }
LAB_00101621:
  *(int *)(this + 0x201d0) = *(int *)(this + 0x201d0) + -1;
  *(uint *)(this + 0x1a8) = iVar7 + *(int *)(this + 0x1a8) & *(uint *)(this + 0x1b0);
  *param_1 = (uchar *)(this + 0x101b8);
  *param_2 = iVar9;
LAB_0010164b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* PacketPeerUDP::get_packet_address() const */

void PacketPeerUDP::get_packet_address(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar1 = *(undefined8 *)(in_RSI + 0x201b8);
  uVar2 = *(undefined8 *)(in_RSI + 0x201c0);
  *(undefined4 *)(in_RDI + 2) = *(undefined4 *)(in_RSI + 0x201c8);
  *in_RDI = uVar1;
  in_RDI[1] = uVar2;
  return;
}



/* PacketPeerUDP::set_dest_address(IPAddress const&, int) */

void __thiscall PacketPeerUDP::set_dest_address(PacketPeerUDP *this,IPAddress *param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  if (this[0x201ec] == (PacketPeerUDP)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x201d4) = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x201dc) = uVar2;
    uVar1 = *(undefined2 *)(param_1 + 0x10);
    *(int *)(this + 0x201e8) = param_2;
    *(undefined2 *)(this + 0x201e4) = uVar1;
    return;
  }
  _err_print_error("set_dest_address","core/io/packet_peer_udp.cpp",0x166,
                   "Condition \"connected\" is true.",
                   "Destination address cannot be set for connected sockets",0,0);
  return;
}



/* PacketPeerUDP::_bind_methods() */

void PacketPeerUDP::_bind_methods(void)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  Variant *pVVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_168 [2];
  long *local_158;
  char *local_148;
  char *pcStack_140;
  undefined8 local_138;
  char *local_128;
  char *pcStack_120;
  undefined8 local_118;
  undefined *local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_c8;
  char *pcStack_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  char **local_98;
  Variant **local_88;
  undefined1 auStack_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = 0;
  local_b8 = "recv_buf_size";
  local_a8 = (Variant *)&local_c8;
  pVVar8 = (Variant *)local_40;
  local_c8 = &_LC38;
  pcStack_c0 = "bind_address";
  pVStack_a0 = (Variant *)&pcStack_c0;
  local_98 = &local_b8;
  D_METHODP((char *)local_168,(char ***)&_LC42,(uint)&local_a8);
  Variant::Variant((Variant *)&local_88,"*");
  Variant::Variant(local_70,0x10000);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = (Variant *)&local_88;
  pVStack_a0 = local_70;
  pMVar5 = create_method_bind<PacketPeerUDP,Error,int,IPAddress_const&,int>(bind);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,&local_a8,2);
  do {
    pVVar1 = pVVar8 + -0x18;
    pVVar8 = pVVar8 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
    plVar4 = local_158;
  } while (pVVar8 != (Variant *)&local_88);
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"close",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP>(close);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)&_LC15,0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,Error>(wait);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"is_bound",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,bool>(is_bound);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  local_d8 = 0;
  local_e8 = &_LC39;
  puStack_e0 = &_LC38;
  auStack_80._0_8_ = &puStack_e0;
  uVar6 = (uint)(Variant *)&local_88;
  local_88 = (Variant **)&local_e8;
  D_METHODP((char *)local_168,(char ***)"connect_to_host",uVar6);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,Error,IPAddress_const&,int>(connect_to_host);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"is_socket_connected",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,bool>(is_socket_connected);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"get_packet_ip",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,String>(_get_packet_ip);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"get_packet_port",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,int>(get_packet_port);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_168,(char ***)"get_local_port",0);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,int>(get_local_port);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  local_f8 = 0;
  local_108 = &_LC39;
  puStack_100 = &_LC38;
  auStack_80._0_8_ = &puStack_100;
  local_88 = (Variant **)&local_108;
  D_METHODP((char *)local_168,(char ***)"set_dest_address",uVar6);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,Error,String_const&,int>(_set_dest_address);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  local_a8 = (Variant *)0x1045b7;
  pVStack_a0 = (Variant *)0x0;
  local_88 = &local_a8;
  D_METHODP((char *)local_168,(char ***)"set_broadcast_enabled",uVar6);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,bool>(set_broadcast_enabled);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  local_118 = 0;
  local_128 = "multicast_address";
  pcStack_120 = "interface_name";
  auStack_80._0_8_ = &pcStack_120;
  local_88 = (Variant **)&local_128;
  D_METHODP((char *)local_168,(char ***)"join_multicast_group",uVar6);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,Error,IPAddress,String_const&>(join_multicast_group);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  local_138 = 0;
  local_148 = "multicast_address";
  pcStack_140 = "interface_name";
  auStack_80._0_8_ = &pcStack_140;
  local_88 = (Variant **)&local_148;
  D_METHODP((char *)local_168,(char ***)"leave_multicast_group",uVar6);
  auStack_80 = (undefined1  [16])0x0;
  local_88 = (Variant **)0x0;
  pMVar5 = create_method_bind<PacketPeerUDP,Error,IPAddress,String_const&>(leave_multicast_group);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_168,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_158;
  if (local_158 != (long *)0x0) {
    LOCK();
    plVar7 = local_158 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_158 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_158[-1];
      local_158 = (long *)0x0;
      if (lVar2 != 0) {
        lVar9 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_168[0] != 0)) {
    StringName::unref();
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_00102c26:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00102c26;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_001049de();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00102b7c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00102b7c:
  puVar8[-1] = param_1;
  return;
}



/* PacketPeerUDP::bind(int, IPAddress const&, int) */

int __thiscall PacketPeerUDP::bind(PacketPeerUDP *this,int param_1,IPAddress *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x201f8) == (long *)0x0) {
    iVar3 = 2;
    _err_print_error(&_LC42,"core/io/packet_peer_udp.cpp",0xb5,
                     "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
    goto LAB_00102dca;
  }
  cVar1 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
  if (cVar1 != '\0') {
    iVar3 = 0x16;
    _err_print_error(&_LC42,"core/io/packet_peer_udp.cpp",0xb6,
                     "Condition \"_sock->is_open()\" is true. Returning: ERR_ALREADY_IN_USE",0,0);
    goto LAB_00102dca;
  }
  if (param_2[0x10] == '\0') {
    if (param_2[0x11] == '\0') {
      _err_print_error(&_LC42,"core/io/packet_peer_udp.cpp",0xb7,
                       "Condition \"!p_bind_address.is_valid() && !p_bind_address.is_wildcard()\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,0,0);
      goto LAB_00102ec1;
    }
    iVar6 = 3;
    if (0xffff < (uint)param_1) goto LAB_00102e90;
  }
  else {
    if (0xffff < (uint)param_1) {
LAB_00102e90:
      _err_print_error(&_LC42,"core/io/packet_peer_udp.cpp",0xb8,
                       "Condition \"p_port < 0 || p_port > 65535\" is true. Returning: ERR_INVALID_PARAMETER"
                       ,"The local port number must be between 0 and 65535 (inclusive).",0,0);
LAB_00102ec1:
      iVar3 = 0x1f;
      goto LAB_00102dca;
    }
    local_34 = 3;
    bVar2 = IPAddress::is_ipv4();
    iVar6 = 2 - (uint)bVar2;
  }
  iVar3 = 0x14;
  local_34 = iVar6;
  iVar6 = (**(code **)(**(long **)(this + 0x201f8) + 0x150))(*(long **)(this + 0x201f8),2,&local_34)
  ;
  if (iVar6 == 0) {
    (**(code **)(**(long **)(this + 0x201f8) + 0x1c8))(*(long **)(this + 0x201f8),0);
    (**(code **)(**(long **)(this + 0x201f8) + 0x1c0))(*(long **)(this + 0x201f8),this[0x201ee]);
    iVar3 = (**(code **)(**(long **)(this + 0x201f8) + 0x160))(*(long **)(this + 0x201f8),param_1);
    if (iVar3 == 0) {
      if ((param_3 & 0x40000000U) == 0) {
        iVar4 = 0x1e;
        do {
          iVar5 = iVar4 + -1;
          iVar6 = 0;
          if (iVar4 == 0) break;
          iVar6 = iVar4;
          iVar4 = iVar5;
        } while ((1 << ((byte)iVar5 & 0x1f) & param_3) == 0);
      }
      else {
        iVar6 = 0x1f;
      }
      RingBuffer<unsigned_char>::resize((RingBuffer<unsigned_char> *)(this + 0x198),iVar6);
    }
    else {
      (**(code **)(**(long **)(this + 0x201f8) + 0x158))();
    }
  }
LAB_00102dca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



/* PacketPeerUDP::close() */

void __thiscall PacketPeerUDP::close(PacketPeerUDP *this)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  Object *pOVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  Object *pOVar11;
  ulong uVar12;
  
  if (*(long *)(this + 0x201f0) == 0) {
    if (*(long **)(this + 0x201f8) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x201f8) + 0x158))();
    }
  }
  else {
    UDPServer::remove_peer();
    *(undefined8 *)(this + 0x201f0) = 0;
    pOVar6 = (Object *)NetSocket::create();
    if (pOVar6 == (Object *)0x0) {
      pOVar11 = *(Object **)(this + 0x201f8);
      if (pOVar11 != (Object *)0x0) {
        *(undefined8 *)(this + 0x201f8) = 0;
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar11);
joined_r0x001031cd:
          if (cVar4 != '\0') {
LAB_00102fbb:
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
            if (pOVar6 != (Object *)0x0) goto LAB_00102fe0;
          }
        }
      }
    }
    else {
      cVar4 = RefCounted::init_ref();
      pOVar11 = *(Object **)(this + 0x201f8);
      if (cVar4 == '\0') {
        if (pOVar11 != (Object *)0x0) {
          *(undefined8 *)(this + 0x201f8) = 0;
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar6 = (Object *)0x0;
            cVar4 = predelete_handler(pOVar11);
            goto joined_r0x001031cd;
          }
        }
      }
      else {
        if (pOVar6 != pOVar11) {
          *(Object **)(this + 0x201f8) = pOVar6;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *(undefined8 *)(this + 0x201f8) = 0;
          }
          if (((pOVar11 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar11), cVar4 != '\0')) goto LAB_00102fbb;
        }
LAB_00102fe0:
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
  }
  if (*(long *)(this + 0x1a0) == 0) {
    iVar8 = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1a0),0x10000);
LAB_00103090:
    uVar7 = *(uint *)(this + 0x1a8);
    uVar5 = *(uint *)(this + 0x1ac);
    if ((int)uVar5 < (int)uVar7) {
      if (0 < (int)uVar5) {
        lVar9 = 0;
        do {
          lVar2 = *(long *)(this + 0x1a0);
          if (lVar2 == 0) {
            lVar10 = 0;
LAB_0010325b:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar10 = *(long *)(lVar2 + -8);
          if (lVar10 <= lVar9) goto LAB_0010325b;
          uVar1 = *(undefined1 *)(lVar2 + lVar9);
          uVar12 = (ulong)(iVar8 + (int)lVar9 & 0xffff);
          if (lVar10 <= (long)uVar12) {
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar12,lVar10,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar9 = lVar9 + 1;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1a0));
          *(undefined1 *)(*(long *)(this + 0x1a0) + uVar12) = uVar1;
          uVar5 = *(uint *)(this + 0x1ac);
        } while ((int)lVar9 < (int)uVar5);
      }
      uVar5 = uVar5 + iVar8;
      goto LAB_0010303a;
    }
  }
  else {
    iVar8 = (int)*(undefined8 *)(*(long *)(this + 0x1a0) + -8);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1a0),0x10000);
    if (iVar8 < 0x10000) goto LAB_00103090;
    uVar7 = *(uint *)(this + 0x1a8);
    uVar5 = *(uint *)(this + 0x1ac);
  }
  *(uint *)(this + 0x1a8) = uVar7 & 0xffff;
LAB_0010303a:
  *(uint *)(this + 0x1ac) = uVar5 & 0xffff;
  *(undefined4 *)(this + 0x1b0) = 0xffff;
  *(undefined4 *)(this + 0x201d0) = 0;
  this[0x201ec] = (PacketPeerUDP)0x0;
  return;
}



/* PacketPeerUDP::disconnect_shared_socket() */

void __thiscall PacketPeerUDP::disconnect_shared_socket(PacketPeerUDP *this)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  Object *pOVar4;
  
  *(undefined8 *)(this + 0x201f0) = 0;
  pOVar2 = (Object *)NetSocket::create();
  if ((pOVar2 == (Object *)0x0) || (cVar1 = RefCounted::init_ref(), cVar1 == '\0')) {
    pOVar4 = *(Object **)(this + 0x201f8);
    if (pOVar4 == (Object *)0x0) goto LAB_00103323;
    *(undefined8 *)(this + 0x201f8) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_00103323;
    pOVar2 = (Object *)0x0;
    cVar1 = predelete_handler(pOVar4);
    if (cVar1 == '\0') goto LAB_00103323;
LAB_0010336a:
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    pOVar3 = pOVar2;
    if (pOVar2 == (Object *)0x0) goto LAB_00103323;
  }
  else {
    pOVar4 = *(Object **)(this + 0x201f8);
    pOVar3 = pOVar4;
    if (pOVar2 != pOVar4) {
      *(Object **)(this + 0x201f8) = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 0x201f8) = 0;
      }
      pOVar3 = pOVar2;
      if (((pOVar4 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) goto LAB_0010336a;
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00103323:
  close(this);
  return;
}



/* PacketPeerUDP::connect_to_host(IPAddress const&, int) */

undefined8 __thiscall
PacketPeerUDP::connect_to_host(PacketPeerUDP *this,IPAddress *param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x201f0) == 0) {
    if (*(long **)(this + 0x201f8) == (long *)0x0) {
      _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xe6,
                       "Condition \"_sock.is_null()\" is true. Returning: ERR_UNAVAILABLE",0,0);
      uVar6 = 2;
    }
    else {
      if (param_1[0x10] == '\0') {
        _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xe7,
                         "Condition \"!p_host.is_valid()\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,0,0);
      }
      else {
        if (param_2 - 1U < 0xffff) {
          cVar3 = (**(code **)(**(long **)(this + 0x201f8) + 0x1a8))();
          if (cVar3 == '\0') {
            bVar4 = IPAddress::is_ipv4();
            local_24 = 2 - (uint)bVar4;
            iVar5 = (**(code **)(**(long **)(this + 0x201f8) + 0x150))
                              (*(long **)(this + 0x201f8),2,&local_24);
            if (iVar5 != 0) {
              _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xef,
                               "Condition \"err != OK\" is true. Returning: ERR_CANT_OPEN",0,0);
              uVar6 = 0x13;
              goto LAB_001034af;
            }
            (**(code **)(**(long **)(this + 0x201f8) + 0x1c8))(*(long **)(this + 0x201f8),0);
          }
          uVar6 = (**(code **)(**(long **)(this + 0x201f8) + 0x170))
                            (*(long **)(this + 0x201f8),param_2);
          if ((int)uVar6 == 0) {
            this[0x201ec] = (PacketPeerUDP)0x1;
            uVar2 = *(undefined8 *)(param_1 + 8);
            *(undefined8 *)(this + 0x201d4) = *(undefined8 *)param_1;
            *(undefined8 *)(this + 0x201dc) = uVar2;
            uVar1 = *(undefined2 *)(param_1 + 0x10);
            *(int *)(this + 0x201e8) = param_2;
            *(undefined2 *)(this + 0x201e4) = uVar1;
            *(undefined8 *)(this + 0x1a8) = 0;
          }
          else {
            close(this);
            _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xfa,
                             "Method/function failed. Returning: FAILED","Unable to connect",0,0);
            uVar6 = 1;
          }
          goto LAB_001034af;
        }
        _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xe8,
                         "Condition \"p_port < 1 || p_port > 65535\" is true. Returning: ERR_INVALID_PARAMETER"
                         ,"The remote port number must be between 1 and 65535 (inclusive).",0,0);
      }
      uVar6 = 0x1f;
    }
  }
  else {
    _err_print_error("connect_to_host","core/io/packet_peer_udp.cpp",0xe5,
                     "Condition \"udp_server\" is true. Returning: ERR_LOCKED",0,0);
    uVar6 = 0x17;
  }
LAB_001034af:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::~PacketPeerUDP() */

void __thiscall PacketPeerUDP::~PacketPeerUDP(PacketPeerUDP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010df98;
  close(this);
  if (*(long *)(this + 0x201f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x201f8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010de38;
  Object::~Object((Object *)this);
  return;
}



/* PacketPeerUDP::~PacketPeerUDP() */

void __thiscall PacketPeerUDP::~PacketPeerUDP(PacketPeerUDP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_0010df98;
  close(this);
  if (*(long *)(this + 0x201f8) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x201f8);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x1a0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a0);
      *(undefined8 *)(this + 0x1a0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010de38;
  Object::~Object((Object *)this);
  operator_delete(this,0x20200);
  return;
}



/* PacketPeerUDP::PacketPeerUDP() */

void __thiscall PacketPeerUDP::PacketPeerUDP(PacketPeerUDP *this)

{
  CowData<unsigned_char> *this_00;
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  
  this_00 = (CowData<unsigned_char> *)(this + 0x1a0);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined8 *)(this + 0x17c) = 0x80000000000000;
  *(undefined ***)this = &PTR__initialize_classv_0010df98;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  CowData<unsigned_char>::resize<false>(this_00,1);
  if (*(int *)(this + 0x1ac) < *(int *)(this + 0x1a8)) {
    lVar6 = 0;
    if (0 < *(int *)(this + 0x1ac)) {
      do {
        lVar2 = *(long *)(this + 0x1a0);
        if (lVar2 == 0) goto LAB_00103a34;
        lVar9 = *(long *)(lVar2 + -8);
        if (lVar9 <= lVar6) goto LAB_00103a37;
        uVar1 = *(undefined1 *)(lVar2 + lVar6);
        lVar6 = lVar6 + 1;
        CowData<unsigned_char>::_copy_on_write(this_00);
        **(undefined1 **)(this + 0x1a0) = uVar1;
      } while ((int)lVar6 < *(int *)(this + 0x1ac));
    }
  }
  else {
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  *(undefined8 *)(this + 0x1ac) = 0;
  IPAddress::clear();
  *(undefined8 *)(this + 0x201cc) = 0;
  IPAddress::clear();
  *(undefined4 *)(this + 0x201e8) = 0;
  *(undefined2 *)(this + 0x201ec) = 0x100;
  this[0x201ee] = (PacketPeerUDP)0x0;
  *(undefined8 *)(this + 0x201f0) = 0;
  lVar6 = NetSocket::create();
  if (lVar6 == 0) {
LAB_00103b18:
    *(undefined8 *)(this + 0x201f8) = 0;
  }
  else {
    *(long *)(this + 0x201f8) = lVar6;
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_00103b18;
  }
  if (*(long *)(this + 0x1a0) == 0) {
    iVar8 = 0;
    CowData<unsigned_char>::resize<false>(this_00,0x10000);
LAB_00103aa0:
    uVar7 = *(uint *)(this + 0x1a8);
    uVar5 = *(uint *)(this + 0x1ac);
    if ((int)uVar5 < (int)uVar7) {
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          lVar2 = *(long *)(this + 0x1a0);
          if (lVar2 == 0) {
LAB_00103a34:
            lVar9 = 0;
LAB_00103a37:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar9 = *(long *)(lVar2 + -8);
          if (lVar9 <= lVar6) goto LAB_00103a37;
          uVar1 = *(undefined1 *)(lVar2 + lVar6);
          uVar10 = (ulong)(iVar8 + (int)lVar6 & 0xffff);
          if (lVar9 <= (long)uVar10) {
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar10,lVar9,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar6 = lVar6 + 1;
          CowData<unsigned_char>::_copy_on_write(this_00);
          *(undefined1 *)(*(long *)(this + 0x1a0) + uVar10) = uVar1;
          uVar5 = *(uint *)(this + 0x1ac);
        } while ((int)lVar6 < (int)uVar5);
      }
      uVar5 = uVar5 + iVar8;
      goto LAB_001039d6;
    }
  }
  else {
    iVar8 = (int)*(undefined8 *)(*(long *)(this + 0x1a0) + -8);
    CowData<unsigned_char>::resize<false>(this_00,0x10000);
    if (iVar8 < 0x10000) goto LAB_00103aa0;
    uVar7 = *(uint *)(this + 0x1a8);
    uVar5 = *(uint *)(this + 0x1ac);
  }
  *(uint *)(this + 0x1a8) = uVar7 & 0xffff;
LAB_001039d6:
  *(uint *)(this + 0x1ac) = uVar5 & 0xffff;
  *(undefined4 *)(this + 0x1b0) = 0xffff;
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
  return (uint)CONCAT71(0x10e5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e5,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* PacketPeerUDP::is_class_ptr(void*) const */

uint __thiscall PacketPeerUDP::is_class_ptr(PacketPeerUDP *this,void *param_1)

{
  return (uint)CONCAT71(0x10e5,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e5,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10e5,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PacketPeerUDP::_getv(StringName const&, Variant&) const */

undefined8 PacketPeerUDP::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PacketPeerUDP::_setv(StringName const&, Variant const&) */

undefined8 PacketPeerUDP::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PacketPeerUDP::_validate_propertyv(PropertyInfo&) const */

void PacketPeerUDP::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PacketPeerUDP::_property_can_revertv(StringName const&) const */

undefined8 PacketPeerUDP::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PacketPeerUDP::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PacketPeerUDP::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PacketPeerUDP::_notificationv(int, bool) */

void PacketPeerUDP::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Error, IPAddress, String const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,IPAddress,String_const&>::_gen_argument_type
          (MethodBindTR<Error,IPAddress,String_const&> *this,int param_1)

{
  return (-((uint)param_1 < 2) & 2U) + 2;
}



/* MethodBindTR<Error, IPAddress, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error,IPAddress,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, String const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int>::_gen_argument_type
          (MethodBindTR<Error,String_const&,int> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, String const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,String_const&,int>::get_argument_meta
          (MethodBindTR<Error,String_const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, IPAddress const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,IPAddress_const&,int>::_gen_argument_type
          (MethodBindTR<Error,IPAddress_const&,int> *this,int param_1)

{
  return (-(param_1 == 0) & 2U) + 2;
}



/* MethodBindTR<Error, IPAddress const&, int>::get_argument_meta(int) const */

char __thiscall
MethodBindTR<Error,IPAddress_const&,int>::get_argument_meta
          (MethodBindTR<Error,IPAddress_const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x03';
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<Error>::get_argument_meta(int) const */

undefined8 MethodBindTR<Error>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Error, int, IPAddress const&, int>::_gen_argument_type(int) const */

char __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::_gen_argument_type
          (MethodBindTR<Error,int,IPAddress_const&,int> *this,int param_1)

{
  return (param_1 == 1) * '\x02' + '\x02';
}



/* MethodBindTR<Error, int, IPAddress const&, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::get_argument_meta
          (MethodBindTR<Error,int,IPAddress_const&,int> *this,int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (-1 < param_1) {
    bVar1 = -((param_1 & 0xfffffffdU) == 0) & 3;
  }
  return bVar1;
}



/* MethodBindTR<Error, int, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,int,IPAddress_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e138;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, int, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,int,IPAddress_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e138;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e198;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e198;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e1f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e1f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,IPAddress_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e2b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,IPAddress_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e2b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e258;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e258;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e318;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e318;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e378;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e378;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, String const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e3d8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, String const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e3d8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e438;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e438;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Error, IPAddress, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress,String_const&>::~MethodBindTR
          (MethodBindTR<Error,IPAddress,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e498;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Error, IPAddress, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress,String_const&>::~MethodBindTR
          (MethodBindTR<Error,IPAddress,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010e498;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010de38;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010de38;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PacketPeerUDP::_bind_methods() [clone .cold] */

void PacketPeerUDP::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001049de(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PacketPeerUDP::_get_class_namev() const */

undefined8 * PacketPeerUDP::_get_class_namev(void)

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
LAB_00104a33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104a33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PacketPeerUDP");
      goto LAB_00104a9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PacketPeerUDP");
LAB_00104a9e:
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
LAB_00104b13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104b13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00104b7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00104b7e:
  return &_get_class_namev()::_class_name_static;
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



/* PacketPeerUDP::get_class() const */

void PacketPeerUDP::get_class(void)

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
            if (lVar5 == 0) goto LAB_00104ddf;
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
LAB_00104ddf:
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
    if (cVar6 != '\0') goto LAB_00104e93;
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
              if (lVar5 == 0) goto LAB_00104f43;
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
LAB_00104f43:
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
      if (cVar6 != '\0') goto LAB_00104e93;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PacketPeerUDP::is_class(String const&) const */

undefined8 __thiscall PacketPeerUDP::is_class(PacketPeerUDP *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010506f;
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
LAB_0010506f:
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
    if (cVar6 != '\0') goto LAB_00105123;
  }
  cVar6 = String::operator==(param_1,"PacketPeerUDP");
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
              if (lVar5 == 0) goto LAB_001051e3;
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
LAB_001051e3:
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
      if (cVar6 != '\0') goto LAB_00105123;
    }
    cVar6 = String::operator==(param_1,"PacketPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010528c;
    }
  }
LAB_00105123:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010528c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001053dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001053dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010555c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010555c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
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
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC24;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001056dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001056dc:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
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



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
LAB_00105a28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105a28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00105a46;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00105a46:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
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
  long lVar3;
  undefined1 (*pauVar4) [16];
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
LAB_00105e28:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105e28;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105e45;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105e45:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* PacketPeerUDP::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PacketPeerUDP::_get_property_listv(PacketPeerUDP *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    PacketPeer::_get_property_listv((PacketPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PacketPeerUDP";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PacketPeerUDP";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_00106278:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106278;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106295;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106295:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PacketPeerUDP",false);
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10658d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC32;
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
        goto LAB_0010665d;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC32;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0010665d:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
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
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::_gen_argument_type_info(int) const */

undefined8 MethodBindTR<Error>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<Error,void>::get_class_info
            ((GetTypeInfo<Error,void> *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001069a9;
  local_78 = 0;
  local_68 = &_LC24;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00106aa5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00106aa5;
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
LAB_001069a9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBind* create_method_bind<PacketPeerUDP, Error, int, IPAddress const&, int>(Error
   (PacketPeerUDP::*)(int, IPAddress const&, int)) */

MethodBind *
create_method_bind<PacketPeerUDP,Error,int,IPAddress_const&,int>
          (_func_Error_int_IPAddress_ptr_int *param_1)

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
  *(_func_Error_int_IPAddress_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e138;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP>(void (PacketPeerUDP::*)()) */

MethodBind * create_method_bind<PacketPeerUDP>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0010e198;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, Error>(Error (PacketPeerUDP::*)()) */

MethodBind * create_method_bind<PacketPeerUDP,Error>(_func_Error *param_1)

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
  *(_func_Error **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e1f8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, bool>(bool (PacketPeerUDP::*)() const) */

MethodBind * create_method_bind<PacketPeerUDP,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e258;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, Error, IPAddress const&, int>(Error
   (PacketPeerUDP::*)(IPAddress const&, int)) */

MethodBind *
create_method_bind<PacketPeerUDP,Error,IPAddress_const&,int>(_func_Error_IPAddress_ptr_int *param_1)

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
  *(_func_Error_IPAddress_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e2b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, String>(String (PacketPeerUDP::*)() const) */

MethodBind * create_method_bind<PacketPeerUDP,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e318;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, int>(int (PacketPeerUDP::*)() const) */

MethodBind * create_method_bind<PacketPeerUDP,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e378;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, Error, String const&, int>(Error
   (PacketPeerUDP::*)(String const&, int)) */

MethodBind *
create_method_bind<PacketPeerUDP,Error,String_const&,int>(_func_Error_String_ptr_int *param_1)

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
  *(_func_Error_String_ptr_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e3d8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, bool>(void (PacketPeerUDP::*)(bool)) */

MethodBind * create_method_bind<PacketPeerUDP,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e438;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<PacketPeerUDP, Error, IPAddress, String const&>(Error
   (PacketPeerUDP::*)(IPAddress, String const&)) */

MethodBind *
create_method_bind<PacketPeerUDP,Error,IPAddress,String_const&>
          (_func_Error_IPAddress_String_ptr *param_1)

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
  *(_func_Error_IPAddress_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010e498;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PacketPeerUDP";
  local_30 = 0xd;
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



/* PacketPeerUDP::_initialize_classv() */

void PacketPeerUDP::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00112010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
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
      if ((code *)PTR__bind_methods_00112008 != RefCounted::_bind_methods) {
        PacketPeer::_bind_methods();
      }
      PacketPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PacketPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PacketPeerUDP";
    local_70 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<unsigned char>::_realloc(long) */

undefined8 __thiscall CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this,long param_1)

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



/* RingBuffer<unsigned char>::resize(int) */

void __thiscall RingBuffer<unsigned_char>::resize(RingBuffer<unsigned_char> *this,int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (*(long *)(this + 8) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(*(long *)(this + 8) + -8);
  }
  iVar5 = 1 << ((byte)param_1 & 0x1f);
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 8),1L << ((byte)param_1 & 0x3f));
  uVar1 = iVar5 - 1;
  uVar4 = *(uint *)(this + 0x14);
  if ((iVar8 < iVar5) && ((int)uVar4 < (int)*(uint *)(this + 0x10))) {
    if (0 < (int)uVar4) {
      lVar9 = 0;
      do {
        lVar6 = *(long *)(this + 8);
        if (lVar6 == 0) {
          lVar7 = 0;
LAB_00107cbb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar9) goto LAB_00107cbb;
        uVar2 = *(undefined1 *)(lVar6 + lVar9);
        lVar6 = (long)(int)(iVar8 + (int)lVar9 & uVar1);
        if ((lVar6 < 0) || (lVar7 <= lVar6)) {
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar7,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar9 = lVar9 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 8));
        *(undefined1 *)(*(long *)(this + 8) + lVar6) = uVar2;
        uVar4 = *(uint *)(this + 0x14);
      } while ((int)lVar9 < (int)uVar4);
    }
    uVar4 = uVar4 + iVar8;
  }
  else {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & uVar1;
  }
  *(uint *)(this + 0x14) = uVar4 & uVar1;
  *(uint *)(this + 0x18) = uVar1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107e98) */
/* WARNING: Removing unreachable block (ram,0x0010802d) */
/* WARNING: Removing unreachable block (ram,0x00108039) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTR<Error, IPAddress, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,IPAddress,String_const&>::validated_call
          (MethodBindTR<Error,IPAddress,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  Variant *pVVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001081f1;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  pVVar2 = param_2[1];
  IPAddress::IPAddress(local_48,(String *)(*param_2 + 8));
  uVar4 = (*pcVar6)(param_1 + lVar1,pVVar2 + 8);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
LAB_001081f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, IPAddress, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,IPAddress,String_const&>::ptrcall
          (MethodBindTR<Error,IPAddress,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar1 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108445;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar1 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar1) + -1);
  }
  pvVar2 = param_2[1];
  IPAddress::IPAddress(local_48,(String *)*param_2);
  uVar4 = (*pcVar6)(param_1 + lVar1,pvVar2);
  *(ulong *)param_3 = (ulong)uVar4;
LAB_00108445:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108835;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00108835:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00108a55;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010889e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00108a55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTR<Error,String_const&,int>::validated_call
          (MethodBindTR<Error,String_const&,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108ab2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2 + 8,*(undefined4 *)(param_2[1] + 8));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_00108ab2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,String_const&,int>::ptrcall
          (MethodBindTR<Error,String_const&,int> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108cdc;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60),*param_2,*param_2[1]);
  *(ulong *)param_3 = (ulong)uVar3;
LAB_00108cdc:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109000;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_00109000:
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109264;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar3;
LAB_00109264:
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109463;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar3;
LAB_00109463:
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001096f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar4)((CowData<char32_t> *)&local_58);
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
LAB_001096f0:
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
  Variant **ppVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  long *plVar4;
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
      local_48 = (Variant **)0x108088;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar2 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar2 + -2,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001099a1;
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
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar2 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar2 + -2,false);
    }
  }
LAB_001099a1:
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x108088;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109bae;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_00109bae:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, IPAddress const&, int>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Error,IPAddress_const&,int>::validated_call
          (MethodBindTR<Error,IPAddress_const&,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109d9b;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[1] + 8);
  IPAddress::IPAddress(local_48,(String *)(*param_2 + 8));
  uVar4 = (*pcVar6)(param_1 + lVar2,local_48,uVar1);
  *(ulong *)(param_3 + 8) = (ulong)uVar4;
LAB_00109d9b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, IPAddress const&, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,IPAddress_const&,int>::ptrcall
          (MethodBindTR<Error,IPAddress_const&,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  IPAddress local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109fe6;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[1];
  IPAddress::IPAddress(local_48,(String *)*param_2);
  uVar4 = (*pcVar6)(param_1 + lVar2,local_48,uVar1);
  *(ulong *)param_3 = (ulong)uVar4;
LAB_00109fe6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a290;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_0010a290:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a4f2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_0010a4f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a6f1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_0010a6f1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Error>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a960;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      iVar4 = (*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,iVar4);
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
LAB_0010a960:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Error>::validated_call
          (MethodBindTR<Error> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010abc4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0010abc4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error>::ptrcall(MethodBindTR<Error> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  uint uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010adc3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar3;
LAB_0010adc3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_48 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar6 = (long *)(local_50 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b090;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
      (*(code *)pVVar4)();
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
LAB_0010b090:
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b48b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b48b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_30 = 0x35;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b67b;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b4e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b67b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::validated_call
          (MethodBindTR<Error,int,IPAddress_const&,int> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  IPAddress local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_68 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar4 = (long *)(local_70 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b6f9;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + lVar2) + -1);
  }
  uVar1 = *(undefined4 *)(param_2[2] + 8);
  IPAddress::IPAddress(local_58,(String *)(param_2[1] + 8));
  uVar3 = (*pcVar5)(param_1 + lVar2,*(undefined4 *)(*param_2 + 8),local_58,uVar1);
  *(ulong *)(param_3 + 8) = (ulong)uVar3;
LAB_0010b6f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress const&, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::ptrcall
          (MethodBindTR<Error,int,IPAddress_const&,int> *this,Object *param_1,void **param_2,
          void *param_3)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
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
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0x35;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      pcVar3 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_68 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar5 = (long *)(local_70 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010b912;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  lVar2 = *(long *)(this + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)(param_1 + lVar2) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = *param_2[2];
  IPAddress::IPAddress(local_58,(String *)param_2[1]);
                    /* WARNING: Load size is inaccurate */
  uVar4 = (*pcVar6)(param_1 + lVar2,**param_2,local_58,uVar1);
  *(ulong *)param_3 = (ulong)uVar4;
LAB_0010b912:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, IPAddress, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,IPAddress,String_const&>::call
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
  Variant *pVVar12;
  uint in_R8D;
  undefined4 *in_R9;
  int iVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  Variant local_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_88 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bc70;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar11 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar11 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010bcb8;
      pVVar12 = *(Variant **)param_4;
LAB_0010bccd:
      pVVar11 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010bcb8:
        uVar7 = 4;
        goto LAB_0010bca5;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_0010bd90;
        pVVar12 = pVVar11 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010bccd;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010bd90:
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
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC81;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_88);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_IPAddress(local_78);
    iVar6 = (*(code *)pVVar14)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_88);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  }
  else {
    uVar7 = 3;
LAB_0010bca5:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010bc70:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, int, IPAddress const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,int,IPAddress_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 in_register_00000014;
  long *plVar12;
  Variant *pVVar13;
  long lVar14;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar15;
  long in_FS_OFFSET;
  long local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant local_98 [32];
  Variant *local_78 [4];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_a8,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_a8 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_a8 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_b0 = 0;
      local_a0 = 0x35;
      String::parse_latin1((StrRange *)&local_b0);
      vformat<StringName>((StringName *)&local_a8,(StrRange *)&local_b0,&local_b8);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_a8,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c09a;
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar15 = param_2[0xb];
  pVVar1 = param_2[0xc];
  uVar6 = 3;
  if (in_R8D < 4) {
    pVVar2 = param_2[5];
    if (pVVar2 == (Variant *)0x0) {
      iVar7 = 0;
      lVar14 = 0;
    }
    else {
      lVar14 = *(long *)(pVVar2 + -8);
      iVar7 = (int)lVar14;
    }
    if ((int)(3 - in_R8D) <= iVar7) {
      lVar9 = 0;
      do {
        if ((int)lVar9 < (int)in_R8D) {
          pVVar13 = *(Variant **)(param_4 + lVar9 * 8);
        }
        else {
          uVar11 = iVar7 + -3 + (int)lVar9;
          if (lVar14 <= (int)uVar11) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar11,lVar14,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          pVVar13 = pVVar2 + (ulong)uVar11 * 0x18;
        }
        local_78[lVar9] = pVVar13;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      *in_R9 = 0;
      if (((ulong)pVVar15 & 1) != 0) {
        pVVar15 = *(Variant **)(pVVar15 + *(long *)((long)plVar12 + (long)pVVar1) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],2);
      uVar4 = _LC84;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(local_78[2]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],4);
      uVar4 = _LC81;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      Variant::operator_cast_to_IPAddress(local_98);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],2);
      uVar4 = _LC85;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar4;
      }
      iVar8 = Variant::operator_cast_to_int(local_78[0]);
      iVar7 = (*(code *)pVVar15)((Variant *)((long)plVar12 + (long)pVVar1),iVar8,local_98,iVar7);
      Variant::Variant((Variant *)local_58,iVar7);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      goto LAB_0010c09a;
    }
    uVar6 = 4;
  }
  *in_R9 = uVar6;
  in_R9[2] = 3;
LAB_0010c09a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, IPAddress const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,IPAddress_const&,int>::call
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
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  Variant local_78 [32];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_88,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_88 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_90 = 0;
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_90);
      vformat<StringName>((StringName *)&local_88,(StrRange *)&local_90,&local_98);
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_88,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      if ((StringName::configured != '\0') && (local_98 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c44d;
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_0010c490;
      pVVar12 = *(Variant **)param_4;
LAB_0010c4ad:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_0010c490:
        uVar7 = 4;
        goto LAB_0010c47d;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_0010c570;
        pVVar12 = pVVar10 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010c4ad;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010c570:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,2);
    uVar4 = _LC86;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar10);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,4);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_IPAddress(local_78);
    iVar6 = (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),local_78,iVar6);
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
  }
  else {
    uVar7 = 3;
LAB_0010c47d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010c44d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Error, String const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Error,String_const&,int>::call
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
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c84a;
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
      if (iVar6 != 0) goto LAB_0010c888;
      pVVar11 = *(Variant **)param_4;
LAB_0010c89d:
      pVVar14 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar14 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010c888:
        uVar7 = 4;
        goto LAB_0010c875;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0010c970;
        pVVar11 = pVVar14 + lVar9 * 0x18;
      }
      else {
        pVVar11 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_0010c89d;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0010c970:
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
    uVar4 = _LC86;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar14);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC82;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_68);
    iVar6 = (*(code *)pVVar13)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68,iVar6)
    ;
    Variant::Variant((Variant *)local_58,iVar6);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_0010c875:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_0010c84a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
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
    goto LAB_0010cbbd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010cc20;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010cc20:
      uVar6 = 4;
LAB_0010cbbd:
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
      goto LAB_0010cb3b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010cb3b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC87;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010cb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC79,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010cc86;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010cc86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_0010cec7;
  local_78 = 0;
  local_68 = &_LC24;
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
LAB_0010cfc5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010cfc5;
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
LAB_0010cec7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void call_get_argument_type_info<IPAddress, String const&>(int, PropertyInfo&) */

void call_get_argument_type_info<IPAddress,String_const&>(int param_1,PropertyInfo *param_2)

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
  if (param_1 != 0) goto LAB_0010d121;
  local_78 = 0;
  local_68 = &_LC24;
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
LAB_0010d235:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d235;
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
LAB_0010d121:
  local_8c = 1;
  call_get_argument_type_info_helper<String_const&>(param_1,&local_8c,param_2);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, IPAddress, String const&>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,IPAddress,String_const&>::_gen_argument_type_info(int param_1)

{
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
    call_get_argument_type_info<IPAddress,String_const&>(in_EDX,(PropertyInfo *)&local_48);
    *(undefined4 *)this = (undefined4)local_48;
    *(undefined8 *)(this + 8) = local_40._0_8_;
    *(undefined8 *)(this + 0x10) = local_40._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_30;
    *(undefined8 *)(this + 0x20) = local_28;
    *(undefined4 *)(this + 0x28) = local_20;
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
  if (iVar5 != param_1) goto LAB_0010d437;
  local_78 = 0;
  local_68 = &_LC24;
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
LAB_0010d535:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d535;
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
LAB_0010d437:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, String const&, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,String_const&,int>::_gen_argument_type_info(int param_1)

{
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
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<String_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
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



/* void call_get_argument_type_info_helper<IPAddress const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<IPAddress_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

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
  if (iVar5 != param_1) goto LAB_0010d767;
  local_78 = 0;
  local_68 = &_LC24;
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
LAB_0010d865:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010d865;
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
LAB_0010d767:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Error, int, IPAddress const&, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,int,IPAddress_const&,int>::_gen_argument_type_info(int param_1)

{
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
  if (in_EDX < 3) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    call_get_argument_type_info_helper<IPAddress_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68)
    ;
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
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



/* MethodBindTR<Error, IPAddress const&, int>::_gen_argument_type_info(int) const */

GetTypeInfo<Error,void> *
MethodBindTR<Error,IPAddress_const&,int>::_gen_argument_type_info(int param_1)

{
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
  if (in_EDX < 2) {
    local_60 = (undefined1  [16])0x0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_6c = 0;
    call_get_argument_type_info_helper<IPAddress_const&>(in_EDX,&local_6c,(PropertyInfo *)&local_68)
    ;
    call_get_argument_type_info_helper<int>(in_EDX,&local_6c,(PropertyInfo *)&local_68);
    *(undefined4 *)this = (undefined4)local_68;
    *(undefined8 *)(this + 8) = local_60._0_8_;
    *(undefined8 *)(this + 0x10) = local_60._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_50;
    *(undefined8 *)(this + 0x20) = local_48;
    *(undefined4 *)(this + 0x28) = local_40;
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



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, IPAddress, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress,String_const&>::~MethodBindTR
          (MethodBindTR<Error,IPAddress,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, String const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,String_const&,int>::~MethodBindTR(MethodBindTR<Error,String_const&,int> *this)

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
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,IPAddress_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Error>::~MethodBindTR() */

void __thiscall MethodBindTR<Error>::~MethodBindTR(MethodBindTR<Error> *this)

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
/* MethodBindTR<Error, int, IPAddress const&, int>::~MethodBindTR() */

void __thiscall
MethodBindTR<Error,int,IPAddress_const&,int>::~MethodBindTR
          (MethodBindTR<Error,int,IPAddress_const&,int> *this)

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


