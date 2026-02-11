
/* WSLPeer::_wsl_recv_start_callback(wslay_event_context*, wslay_event_on_frame_recv_start_arg
   const*, void*) */

void WSLPeer::_wsl_recv_start_callback
               (wslay_event_context *param_1,wslay_event_on_frame_recv_start_arg *param_2,
               void *param_3)

{
  if (1 < (byte)((char)param_2[2] - 1U)) {
    return;
  }
  *(wslay_event_on_frame_recv_start_arg *)((long)param_3 + 0x260) = param_2[2];
  return;
}



/* WSLPeer::get_available_packet_count() const */

undefined4 __thiscall WSLPeer::get_available_packet_count(WSLPeer *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x1e0) == 1) {
    uVar1 = *(undefined4 *)(this + 0x298);
  }
  return uVar1;
}



/* WSLPeer::_wsl_genmask_callback(wslay_event_context*, unsigned char*, unsigned long, void*) */

undefined8
WSLPeer::_wsl_genmask_callback
          (wslay_event_context *param_1,uchar *param_2,ulong param_3,void *param_4)

{
  int iVar1;
  
  if (_static_rng == (uchar *)0x0) {
    _err_print_error("_wsl_genmask_callback","modules/websocket/wsl_peer.cpp",0x27b,
                     "Parameter \"_static_rng\" is null.",0,0);
  }
  else {
    iVar1 = CryptoCore::RandomGenerator::get_random_bytes(_static_rng,(ulong)param_2);
    if (iVar1 == 0) {
      return 0;
    }
    _err_print_error("_wsl_genmask_callback","modules/websocket/wsl_peer.cpp",0x27d,
                     "Condition \"err != OK\" is true. Returning: WSLAY_ERR_CALLBACK_FAILURE",0,0);
  }
  return 0xfffffe70;
}



/* WSLPeer::get_connected_host() const */

void WSLPeer::get_connected_host(void)

{
  long lVar1;
  long in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x1e8) == 0) {
    _err_print_error("get_connected_host","modules/websocket/wsl_peer.cpp",0x368,
                     "Condition \"tcp.is_null()\" is true. Returning: IPAddress()",0,0);
    IPAddress::clear();
  }
  else {
    StreamPeerTCP::get_connected_host();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::get_connected_port() const */

undefined8 __thiscall WSLPeer::get_connected_port(WSLPeer *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x1e8) != 0) {
    uVar1 = StreamPeerTCP::get_connected_port();
    return uVar1;
  }
  _err_print_error("get_connected_port","modules/websocket/wsl_peer.cpp",0x36d,
                   "Condition \"tcp.is_null()\" is true. Returning: 0",0,0);
  return 0;
}



/* WSLPeer::set_no_delay(bool) */

void WSLPeer::set_no_delay(bool param_1)

{
  long lVar1;
  undefined7 in_register_00000039;
  
  lVar1 = *(long *)(CONCAT71(in_register_00000039,param_1) + 0x1e8);
  if (lVar1 != 0) {
    StreamPeerTCP::set_no_delay(SUB81(lVar1,0));
    return;
  }
  _err_print_error("set_no_delay","modules/websocket/wsl_peer.cpp",0x37a,
                   "Condition \"tcp.is_null()\" is true.",0,0);
  return;
}



/* WSLPeer::get_current_outbound_buffered_amount() const */

undefined8 __thiscall WSLPeer::get_current_outbound_buffered_amount(WSLPeer *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x1e0) != 1) {
    return 0;
  }
  uVar1 = wslay_event_get_queued_msg_length(*(undefined8 *)(this + 0x1f8));
  return uVar1;
}



/* WSLPeer::_wsl_send_callback(wslay_event_context*, unsigned char const*, unsigned long, int,
   void*) */

long WSLPeer::_wsl_send_callback
               (wslay_event_context *param_1,uchar *param_2,ulong param_3,int param_4,void *param_5)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  pOVar1 = *(Object **)((long)param_5 + 0x1f0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar1 != (Object *)0x0) {
    cVar2 = RefCounted::reference();
    if (cVar2 != '\0') {
      local_34 = 0;
      iVar3 = (**(code **)(*(long *)pOVar1 + 0x158))(pOVar1,param_2,param_3 & 0xffffffff,&local_34);
      if (iVar3 == 0) {
        if (local_34 == 0) {
          wslay_event_set_error(param_1);
          goto LAB_0010030f;
        }
        lVar4 = (long)local_34;
      }
      else {
        wslay_event_set_error(param_1);
LAB_0010030f:
        lVar4 = -1;
      }
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      goto LAB_001002e4;
    }
  }
  lVar4 = -1;
  wslay_event_set_error(param_1,0xfffffe70);
LAB_001002e4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<PacketBuffer<unsigned char>::_Packet>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<PacketBuffer<unsigned_char>::_Packet>::_copy_on_write
          (CowData<PacketBuffer<unsigned_char>::_Packet> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
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
    puVar4[1] = lVar2;
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



/* WSLPeer::get_selected_protocol() const */

void WSLPeer::get_selected_protocol(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x220) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x220));
  }
  return;
}



/* WSLPeer::get_requested_url() const */

void WSLPeer::get_requested_url(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x200) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x200));
  }
  return;
}



/* WSLPeer::_wsl_msg_recv_callback(wslay_event_context*, wslay_event_on_msg_recv_arg const*, void*)
    */

void WSLPeer::_wsl_msg_recv_callback
               (wslay_event_context *param_1,wslay_event_on_msg_recv_arg *param_2,void *param_3)

{
  undefined4 *puVar1;
  wslay_event_on_msg_recv_arg wVar2;
  wslay_event_on_msg_recv_arg wVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int iVar11;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  wVar2 = param_2[1];
  if (wVar2 == (wslay_event_on_msg_recv_arg)0x8) {
    uVar7 = *(ulong *)(param_2 + 0x10);
    *(uint *)((long)param_3 + 0x230) = (uint)*(ushort *)(param_2 + 0x18);
    String::parse_latin1((StrRange *)((long)param_3 + 0x238));
    if (2 < uVar7) {
      String::parse_utf8((char *)((long)param_3 + 0x238),(int)*(undefined8 *)(param_2 + 8) + 2,
                         (bool)((char)uVar7 + -2));
    }
    if (*(int *)((long)param_3 + 0x1e0) == 1) {
      *(undefined4 *)((long)param_3 + 0x1e0) = 2;
    }
  }
  else if (wVar2 == (wslay_event_on_msg_recv_arg)0xa) {
    *(undefined1 *)((long)param_3 + 0x250) = 0;
  }
  else if ((byte)((char)wVar2 - 1U) < 2) {
    wVar3 = *(wslay_event_on_msg_recv_arg *)((long)param_3 + 0x260);
    if (wVar3 != wVar2) {
      if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_wsl_msg_recv_callback","modules/websocket/wsl_peer.cpp",0x297,
                         "Condition \"pm.opcode != op\" is true.",0,0);
        return;
      }
      goto LAB_0010081d;
    }
    uVar6 = *(undefined8 *)((long)param_3 + 600);
    if (*(long *)((long)param_3 + 0x290) == 0) {
      if (-1 < (long)*(int *)((long)param_3 + 0x298)) goto LAB_001007e7;
      iVar4 = *(int *)((long)param_3 + 0x29c);
      lVar9 = 0;
LAB_001005d3:
      lVar10 = (long)iVar4;
      if (lVar9 < lVar10) {
        _err_print_error("write_packet","modules/websocket/packet_buffer.h",0x39,
                         "Condition \"_write_pos > _packets.size()\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
      else {
        if ((lVar10 < 0) || (lVar9 == lVar10)) {
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar8 = (code *)invalidInstructionException();
          (*pcVar8)();
        }
        CowData<PacketBuffer<unsigned_char>::_Packet>::_copy_on_write
                  ((CowData<PacketBuffer<unsigned_char>::_Packet> *)((long)param_3 + 0x290));
        iVar11 = _LC23._4_4_;
        iVar4 = (int)_LC23;
        lVar9 = *(long *)((long)param_3 + 0x290);
        puVar1 = (undefined4 *)(lVar9 + lVar10 * 8);
        *puVar1 = (int)uVar6;
        *(bool *)(puVar1 + 1) = wVar3 == (wslay_event_on_msg_recv_arg)0x1;
        iVar11 = (int)((ulong)*(undefined8 *)((long)param_3 + 0x298) >> 0x20) + iVar11;
        *(ulong *)((long)param_3 + 0x298) =
             CONCAT44(iVar11,(int)*(undefined8 *)((long)param_3 + 0x298) + iVar4);
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(lVar9 + -8);
        }
        if (lVar9 <= iVar11) {
          *(undefined4 *)((long)param_3 + 0x29c) = 0;
        }
      }
    }
    else {
      lVar9 = *(long *)(*(long *)((long)param_3 + 0x290) + -8);
      if (*(int *)((long)param_3 + 0x298) < lVar9) {
        iVar4 = *(int *)((long)param_3 + 0x29c);
        goto LAB_001005d3;
      }
LAB_001007e7:
      _err_print_error("write_packet","modules/websocket/packet_buffer.h",0x35,
                       "Condition \"p_info && _queued >= _packets.size()\" is true. Returning: ERR_OUT_OF_MEMORY"
                       ,"Too many packets in queue! Dropping data.",0,0);
    }
    *(undefined8 *)((long)param_3 + 600) = 0;
    *(undefined1 *)((long)param_3 + 0x260) = 0;
  }
  if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010081d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WSLPeer::get_packet(unsigned char const**, int&) */

undefined8 __thiscall WSLPeer::get_packet(WSLPeer *this,uchar **param_1,int *param_2)

{
  int *piVar1;
  WSLPeer WVar2;
  uchar *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar13 = *(int *)(this + 0x1e0);
  *param_2 = 0;
  if (iVar13 != 1) {
    _err_print_error("get_packet","modules/websocket/wsl_peer.cpp",0x32b,
                     "Condition \"ready_state != STATE_OPEN\" is true. Returning: FAILED",0,0);
    return 1;
  }
  if (*(int *)(this + 0x298) == 0) {
    return 2;
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x280));
  puVar3 = *(uchar **)(this + 0x280);
  if (puVar3 == (uchar *)0x0) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(int *)(puVar3 + -8);
  }
  if (*(int *)(this + 0x298) < 1) {
    _err_print_error("read_packet","modules/websocket/packet_buffer.h",0x4e,
                     "Condition \"_queued < 1\" is true. Returning: ERR_UNAVAILABLE",0,0);
    goto LAB_00100c01;
  }
  lVar9 = (long)*(int *)(this + 0x2a0);
  lVar7 = *(long *)(this + 0x290);
  if (lVar9 < 0) {
    if (lVar7 != 0) {
      lVar6 = *(long *)(lVar7 + -8);
      goto LAB_00100b18;
    }
  }
  else if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + -8);
    if (lVar6 <= lVar9) goto LAB_00100b18;
    piVar1 = (int *)(lVar7 + lVar9 * 8);
    iVar5 = *(int *)(this + 0x2a0) + 1;
    iVar14 = *piVar1;
    WVar2 = *(WSLPeer *)(piVar1 + 1);
    if (lVar6 <= iVar5) {
      iVar5 = 0;
    }
    iVar8 = *(int *)(this + 0x2b8);
    lVar9 = (long)iVar8;
    *(int *)(this + 0x298) = *(int *)(this + 0x298) + -1;
    lVar7 = *(long *)(this + 0x2b0);
    *(int *)(this + 0x2a0) = iVar5;
    iVar5 = iVar8 - *(int *)(this + 700);
    if (lVar7 == 0) {
      iVar11 = 0;
      iVar12 = iVar5;
      if (-1 < iVar5) goto LAB_00100a28;
LAB_00100b9b:
      iVar11 = iVar11 - (iVar12 + -1);
    }
    else {
      iVar11 = (int)*(undefined8 *)(lVar7 + -8);
      iVar12 = iVar11 + iVar5;
      if (iVar5 < 0) goto LAB_00100b9b;
LAB_00100a28:
      iVar11 = iVar11 - (iVar5 + -1);
      if (iVar5 == 0) {
        iVar11 = 1;
      }
    }
    if (iVar14 < iVar11) {
      if (iVar14 <= iVar13) {
        this[0x240] = WVar2;
        if (lVar7 == 0) {
          if (iVar5 < 0) {
            iVar13 = 0;
            goto LAB_00100b02;
          }
          if (iVar5 != 0) {
            iVar13 = *(int *)(this + 700) - iVar8;
            if (iVar14 < iVar13) {
              iVar13 = iVar14;
            }
            goto LAB_00100a84;
          }
        }
        else {
          iVar13 = (int)*(undefined8 *)(lVar7 + -8);
          if (iVar5 < 0) {
            iVar5 = iVar5 + iVar13;
LAB_00100b02:
            iVar5 = iVar13 - iVar5;
          }
          else if (iVar5 != 0) {
            iVar5 = iVar13 - iVar5;
          }
        }
        iVar13 = iVar14;
        if (iVar5 < iVar14) {
          iVar13 = iVar5;
        }
        if (iVar13 != 0) {
LAB_00100a84:
          iVar12 = 0;
          iVar8 = iVar8 + iVar13;
          iVar5 = iVar13;
          if (lVar7 == 0) goto LAB_00100ae6;
          do {
            iVar11 = *(int *)(lVar7 + -8);
            while( true ) {
              if (iVar11 < iVar8) {
                iVar8 = iVar11;
              }
              iVar8 = iVar8 - (int)lVar9;
              if (0 < iVar8) {
                lVar6 = (long)iVar12;
                lVar9 = lVar9 - lVar6;
                lVar10 = iVar8 + lVar6;
                do {
                  puVar3[lVar6] = *(uchar *)(lVar9 + lVar7 + lVar6);
                  lVar6 = lVar6 + 1;
                } while (lVar6 != lVar10);
                iVar12 = iVar12 + iVar8;
              }
              iVar8 = iVar5 - iVar8;
              if (iVar8 == 0) {
                iVar8 = *(int *)(this + 0x2b8);
                goto LAB_00100b67;
              }
              lVar7 = *(long *)(this + 0x2b0);
              lVar9 = 0;
              iVar5 = iVar8;
              if (lVar7 != 0) break;
LAB_00100ae6:
              iVar11 = 0;
            }
          } while( true );
        }
LAB_00100b67:
        *(uint *)(this + 0x2b8) = iVar13 + iVar8 & *(uint *)(this + 0x2c0);
        goto LAB_00100b78;
      }
      _err_print_error("read_packet","modules/websocket/packet_buffer.h",0x57,
                       "Condition \"p_bytes < (int)p.size\" is true. Returning: ERR_OUT_OF_MEMORY",0
                       ,0);
    }
    else {
      _err_print_error("read_packet","modules/websocket/packet_buffer.h",0x56,
                       "Condition \"_payload.data_left() < (int)p.size\" is true. Returning: ERR_BUG"
                       ,0,0);
    }
LAB_00100c01:
    iVar14 = 0;
LAB_00100b78:
    *param_1 = puVar3;
    *param_2 = iVar14;
    return 0;
  }
  lVar6 = 0;
LAB_00100b18:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WSLPeer::_wsl_frame_recv_chunk_callback(wslay_event_context*, wslay_event_on_frame_recv_chunk_arg
   const*, void*) */

ulong WSLPeer::_wsl_frame_recv_chunk_callback
                (wslay_event_context *param_1,wslay_event_on_frame_recv_chunk_arg *param_2,
                void *param_3)

{
  code *pcVar1;
  ulong in_RAX;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  ulong uVar10;
  uint local_4c;
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  
  if (*(char *)((long)param_3 + 0x260) == '\0') {
    return in_RAX;
  }
  uVar10 = *(ulong *)param_2;
  lVar2 = *(long *)(param_2 + 8);
  if (uVar10 == 0) goto LAB_00100cc5;
  local_4c = *(uint *)((long)param_3 + 700);
  iVar3 = *(int *)((long)param_3 + 0x2b8) - local_4c;
  uVar6 = (uint)lVar2;
  if (iVar3 < 0) {
    if (*(long *)((long)param_3 + 0x2b0) != 0) {
      iVar3 = iVar3 + *(int *)(*(long *)((long)param_3 + 0x2b0) + -8);
      goto joined_r0x00100eca;
    }
    uVar4 = iVar3 - 1;
    if (uVar6 <= uVar4) {
      local_3c = uVar6;
      if ((int)uVar4 <= (int)uVar6) {
        local_3c = uVar4;
      }
      lVar2 = 0;
      goto LAB_00100d37;
    }
  }
  else {
    if (iVar3 == 0) {
      if (*(long *)((long)param_3 + 0x2b0) == 0) {
        local_3c = 0xffffffff;
        if ((int)uVar6 < 0) {
          local_3c = uVar6;
        }
        lVar2 = 0;
        goto LAB_00100d37;
      }
      iVar3 = (int)*(undefined8 *)(*(long *)((long)param_3 + 0x2b0) + -8);
    }
joined_r0x00100eca:
    local_3c = iVar3 - 1;
    if (uVar6 <= local_3c) {
      if ((int)uVar6 <= (int)local_3c) {
        local_3c = uVar6;
      }
      if (local_3c != 0) {
        lVar2 = *(long *)((long)param_3 + 0x2b0);
LAB_00100d37:
        local_40 = 0;
        local_44 = local_3c;
        do {
          local_48 = local_4c + local_44;
          if (lVar2 == 0) {
            if (0 < local_48) {
              local_48 = 0;
            }
            local_48 = local_48 - local_4c;
            if (0 < local_48) {
              lVar7 = (long)(int)local_4c;
LAB_00100df0:
              lVar2 = 0;
LAB_00100df8:
              _err_print_index_error
                        ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar2,"p_index",
                         "((Vector<T> *)(this))->_cowdata.size()","",false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          else {
            if (*(int *)(lVar2 + -8) < local_48) {
              local_48 = *(int *)(lVar2 + -8);
            }
            local_48 = local_48 - local_4c;
            if (0 < local_48) {
              lVar7 = (long)(int)local_4c;
              uVar9 = *(undefined1 *)(uVar10 + (long)local_40);
              if (lVar7 < 0) {
LAB_00100e40:
                lVar2 = *(long *)(lVar2 + -8);
                goto LAB_00100df8;
              }
              lVar5 = local_40 - lVar7;
              lVar8 = local_48 + lVar7;
              while( true ) {
                if (lVar2 == 0) goto LAB_00100df0;
                if (*(long *)(lVar2 + -8) <= lVar7) goto LAB_00100e40;
                CowData<unsigned_char>::_copy_on_write
                          ((CowData<unsigned_char> *)((long)param_3 + 0x2b0));
                *(undefined1 *)(*(long *)((long)param_3 + 0x2b0) + lVar7) = uVar9;
                if (lVar7 + 1 == lVar8) break;
                lVar2 = *(long *)((long)param_3 + 0x2b0);
                uVar9 = *(undefined1 *)(lVar7 + 1 + lVar5 + uVar10);
                lVar7 = lVar7 + 1;
              }
              local_40 = (local_40 - local_4c) + 1 + (int)lVar7;
            }
          }
          local_44 = local_44 - local_48;
          if (local_44 == 0) goto LAB_00100f20;
          local_4c = 0;
          lVar2 = *(long *)((long)param_3 + 0x2b0);
        } while( true );
      }
      goto LAB_00100f33;
    }
  }
  uVar10 = 0;
  _err_print_error("write_packet","modules/websocket/packet_buffer.h",0x34,
                   "Condition \"p_payload && (uint32_t)_payload.space_left() < p_size\" is true. Returning: ERR_OUT_OF_MEMORY"
                   ,"Buffer payload full! Dropping data.",0);
  lVar2 = *(long *)(param_2 + 8);
LAB_00100cc5:
  *(long *)((long)param_3 + 600) = *(long *)((long)param_3 + 600) + lVar2;
  return uVar10;
LAB_00100f20:
  local_4c = local_3c + *(int *)((long)param_3 + 700);
  lVar2 = *(long *)(param_2 + 8);
LAB_00100f33:
  local_4c = local_4c & *(uint *)((long)param_3 + 0x2c0);
  uVar10 = (ulong)local_4c;
  *(uint *)((long)param_3 + 700) = local_4c;
  goto LAB_00100cc5;
}



/* WSLPeer::initialize() */

void WSLPeer::initialize(void)

{
  RandomGenerator *this;
  
  WebSocketPeer::_create = _create;
  this = (RandomGenerator *)operator_new(0x10,"");
  CryptoCore::RandomGenerator::RandomGenerator(this);
  _static_rng = this;
  CryptoCore::RandomGenerator::init();
  return;
}



/* WSLPeer::deinitialize() */

void WSLPeer::deinitialize(void)

{
  RandomGenerator *pRVar1;
  
  pRVar1 = _static_rng;
  if (_static_rng != (RandomGenerator *)0x0) {
    CryptoCore::RandomGenerator::~RandomGenerator(_static_rng);
    Memory::free_static(pRVar1,false);
    _static_rng = (RandomGenerator *)0x0;
  }
  return;
}



/* WSLPeer::Resolver::start(String const&, int) */

void __thiscall WSLPeer::Resolver::start(Resolver *this,String *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  Array local_60 [8];
  IPAddress local_58 [32];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 8) != -1) {
    iVar2 = IP::get_singleton();
    IP::erase_resolve_item(iVar2);
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  *(int *)(this + 0xc) = param_2;
  cVar1 = String::is_valid_ip_address();
  if (cVar1 == '\0') {
    uVar3 = IP::get_singleton();
    iVar2 = IP::resolve_hostname_queue_item(uVar3,param_1,3);
    *(int *)(this + 8) = iVar2;
    if (iVar2 == -1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("start","modules/websocket/wsl_peer.cpp",0x40,
                         "Condition \"resolver_id == IP::RESOLVER_INVALID_ID\" is true.",0,0);
        return;
      }
      goto LAB_0010116d;
    }
    iVar2 = IP::get_singleton();
    iVar2 = IP::get_resolve_item_status(iVar2);
    if (iVar2 == 2) {
      IP::get_singleton();
      IP::get_resolve_item_addresses((int)local_60);
      Array::operator=((Array *)this,local_60);
      Array::~Array(local_60);
      iVar2 = IP::get_singleton();
      IP::erase_resolve_item(iVar2);
      *(undefined4 *)(this + 8) = 0xffffffff;
    }
  }
  else {
    IPAddress::IPAddress(local_58,param_1);
    Variant::Variant((Variant *)local_38,local_58);
    Array::push_back((Variant *)this);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010116d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::Resolver::stop() */

void __thiscall WSLPeer::Resolver::stop(Resolver *this)

{
  int iVar1;
  
  if (*(int *)(this + 8) != -1) {
    iVar1 = IP::get_singleton();
    IP::erase_resolve_item(iVar1);
    *(undefined4 *)(this + 8) = 0xffffffff;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



/* WSLPeer::Resolver::try_next_candidate(Ref<StreamPeerTCP>&) */

void __thiscall WSLPeer::Resolver::try_next_candidate(Resolver *this,Ref *param_1)

{
  IPAddress *pIVar1;
  int iVar2;
  long in_FS_OFFSET;
  Array local_80 [8];
  Variant local_78 [32];
  int local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 8) == -1) {
LAB_00101217:
    iVar2 = StreamPeerTCP::get_status();
    if (iVar2 == 0) goto LAB_0010123d;
    StreamPeerTCP::poll();
    iVar2 = StreamPeerTCP::get_status();
    if (iVar2 == 2) {
      StreamPeerTCP::set_no_delay(SUB81(*(undefined8 *)param_1,0));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Array::clear();
        return;
      }
      goto LAB_00101354;
    }
    if (iVar2 != 1) {
      do {
        while( true ) {
          StreamPeerTCP::disconnect_from_host();
LAB_0010123d:
          iVar2 = Array::size();
          if (iVar2 == 0) goto LAB_001012a0;
          pIVar1 = *(IPAddress **)param_1;
          Array::pop_front();
          Variant::operator_cast_to_IPAddress(local_78);
          iVar2 = StreamPeerTCP::connect_to_host(pIVar1,(int)local_78);
          if (Variant::needs_deinit[local_58] == '\0') break;
          Variant::_clear_internal();
          if (iVar2 == 0) goto LAB_001012a0;
        }
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = IP::get_singleton();
    iVar2 = IP::get_resolve_item_status(iVar2);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        IP::get_singleton();
        IP::get_resolve_item_addresses((int)local_80);
        Array::operator=((Array *)this,local_80);
        Array::~Array(local_80);
      }
      iVar2 = IP::get_singleton();
      IP::erase_resolve_item(iVar2);
      *(undefined4 *)(this + 8) = 0xffffffff;
      goto LAB_00101217;
    }
  }
LAB_001012a0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101354:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::_compute_key_response(String) */

WSLPeer * __thiscall WSLPeer::_compute_key_response(WSLPeer *this,String *param_2)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11";
  local_40 = 0x24;
  String::parse_latin1((StrRange *)&local_50);
  String::operator+((String *)&local_58,param_2);
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
  String::sha1_buffer();
  CryptoCore::b64_encode_str((uchar *)this,(int)local_40);
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



/* WSLPeer::_send(unsigned char const*, int, wslay_opcode) */

undefined8 __thiscall
WSLPeer::_send(WSLPeer *this,undefined8 param_1,int param_2,undefined1 param_4)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x1e0) != 1) {
    _err_print_error("_send","modules/websocket/wsl_peer.cpp",0x30e,
                     "Condition \"ready_state != STATE_OPEN\" is true. Returning: FAILED",0,0);
    uVar5 = 1;
    goto LAB_00101557;
  }
  uVar4 = wslay_event_get_queued_msg_count(*(undefined8 *)(this + 0x1f8));
  if (uVar4 < *(uint *)(this + 0x1c0)) {
    uVar5 = *(undefined8 *)(this + 0x1f8);
    if (0 < *(int *)(this + 0x1b8)) {
      lVar6 = wslay_event_get_queued_msg_length(uVar5);
      if ((ulong)*(uint *)(this + 0x1b8) < (ulong)(lVar6 + param_2)) {
        _err_print_error("_send","modules/websocket/wsl_peer.cpp",0x310,
                         "Condition \"outbound_buffer_size > 0 && (wslay_event_get_queued_msg_length(wsl_ctx) + p_buffer_size > (uint32_t)outbound_buffer_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
        goto LAB_00101665;
      }
      uVar5 = *(undefined8 *)(this + 0x1f8);
    }
    local_48[0] = param_4;
    local_40 = param_1;
    local_38 = (long)param_2;
    iVar3 = wslay_event_queue_msg(uVar5,local_48);
    if (iVar3 == 0) {
      uVar5 = wslay_event_send(*(undefined8 *)(this + 0x1f8));
      if ((int)uVar5 == 0) goto LAB_00101557;
    }
    local_60 = 0;
    local_50 = 0;
    pcVar2 = *(code **)(*(long *)this + 0x1b0);
    local_58 = &_LC15;
    String::parse_latin1((StrRange *)&local_60);
    (*pcVar2)(this,0xffffffff,(StrRange *)&local_60);
    lVar6 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
        uVar5 = 1;
        goto LAB_00101557;
      }
    }
    uVar5 = 1;
  }
  else {
    _err_print_error("_send","modules/websocket/wsl_peer.cpp",0x30f,
                     "Condition \"wslay_event_get_queued_msg_count(wsl_ctx) >= (uint32_t)max_queued_packets\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
LAB_00101665:
    uVar5 = 6;
  }
LAB_00101557:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::send(unsigned char const*, int, WebSocketPeer::WriteMode) */

void WSLPeer::send(void)

{
  _send();
  return;
}



/* WSLPeer::put_packet(unsigned char const*, int) */

void WSLPeer::put_packet(uchar *param_1,int param_2)

{
  _send();
  return;
}



/* WSLPeer::_wsl_recv_callback(wslay_event_context*, unsigned char*, unsigned long, int, void*) */

long WSLPeer::_wsl_recv_callback
               (wslay_event_context *param_1,uchar *param_2,ulong param_3,int param_4,void *param_5)

{
  long *plVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_94;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  CowData<char32_t> local_70 [8];
  String local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  pOVar2 = *(Object **)((long)param_5 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar2 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 != '\0') {
      if (*(long *)((long)param_5 + 0x290) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(long *)((long)param_5 + 0x290) + -8);
      }
      iVar5 = (iVar5 - *(int *)((long)param_5 + 0x298)) * 2;
      iVar4 = *(int *)((long)param_5 + 0x2b8) - *(int *)((long)param_5 + 700);
      if (iVar4 < 0) {
        if (*(long *)((long)param_5 + 0x2b0) != 0) {
          iVar4 = iVar4 + *(int *)(*(long *)((long)param_5 + 0x2b0) + -8);
        }
        iVar6 = iVar4 + -1;
      }
      else {
        iVar6 = iVar4 + -1;
        if (iVar4 == 0) {
          if (*(long *)((long)param_5 + 0x2b0) == 0) {
            iVar6 = -1;
          }
          else {
            iVar6 = (int)*(undefined8 *)(*(long *)((long)param_5 + 0x2b0) + -8) + -1;
          }
        }
      }
      if (iVar6 < iVar5) {
        iVar5 = iVar6;
      }
      uVar7 = (long)iVar5;
      if (param_3 < (ulong)(long)iVar5) {
        uVar7 = param_3;
      }
      if (uVar7 == 0) {
LAB_001018a0:
        wslay_event_set_error(param_1);
LAB_001018ad:
        lVar8 = -1;
      }
      else {
        local_94 = 0;
        iVar5 = (**(code **)(*(long *)pOVar2 + 0x168))(pOVar2,param_2,uVar7,&local_94);
        if (iVar5 != 0) {
          cVar3 = is_print_verbose_enabled();
          if (cVar3 != '\0') {
            itos((long)local_70);
            local_80 = 0;
            String::parse_latin1((String *)&local_80,", read (should be 0!): ");
            itos((long)local_90);
            operator+((char *)local_88,(String *)"Websocket get data error: ");
            String::operator+(local_78,(String *)local_88);
            String::operator+(local_68,local_78);
            Variant::Variant((Variant *)local_58,local_68);
            stringify_variants((Variant *)&local_60);
            __print_line((String *)&local_60);
            lVar8 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar8 + -0x10),false);
              }
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
            CowData<char32_t>::_unref(local_88);
            CowData<char32_t>::_unref(local_90);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            CowData<char32_t>::_unref(local_70);
          }
          wslay_event_set_error(param_1);
          goto LAB_001018ad;
        }
        if (local_94 == 0) goto LAB_001018a0;
        lVar8 = (long)local_94;
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar2);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      goto LAB_00101814;
    }
  }
  lVar8 = -1;
  wslay_event_set_error(param_1,0xfffffe70);
LAB_00101814:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::_parse_client_request() */

char __thiscall WSLPeer::_parse_client_request(WSLPeer *this)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  undefined8 uVar14;
  char cVar15;
  char cVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  String *pSVar20;
  CowData<char32_t> *this_00;
  CowData *pCVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  int *piVar27;
  undefined8 *puVar28;
  char *pcVar29;
  String *this_01;
  long lVar30;
  long lVar31;
  uint uVar32;
  long in_FS_OFFSET;
  char local_f9;
  undefined8 local_e0;
  CowData<char32_t> local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  long local_c0;
  long local_b8;
  ulong local_b0;
  char local_a8 [8];
  long local_a0;
  long local_98;
  String *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_70._8_8_ = local_70._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = StreamPeerBuffer::get_position();
  StreamPeerBuffer::get_data_array();
  local_78 = local_80;
  local_70._0_8_ = 0;
  local_98 = 0;
  if (local_80 != (char *)0x0) {
    iVar18 = iVar18 + -4;
    if (iVar18 < 0) {
      local_70._0_8_ = strlen(local_80);
    }
    else if (iVar18 != 0) {
      iVar23 = 0;
      pcVar29 = local_80;
      do {
        if (*pcVar29 == '\0') {
          local_70._0_8_ = SEXT48(iVar23);
          goto LAB_00101aaf;
        }
        iVar23 = iVar23 + 1;
        pcVar29 = pcVar29 + 1;
      } while (iVar18 != iVar23);
      local_70._0_8_ = SEXT48(iVar18);
    }
  }
LAB_00101aaf:
  String::parse_latin1((StrRange *)&local_98);
  String::split(local_a8,SUB81((StrRange *)&local_98,0),0x10a1c7);
  lVar31 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar31 + -0x10),false);
    }
  }
  pcVar29 = local_80;
  if (local_80 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (char *)0x0;
      Memory::free_static(pcVar29 + -0x10,false);
    }
  }
  if (local_a0 != 0) {
    lVar31 = *(long *)(local_a0 + -8);
    iVar18 = (int)lVar31;
    if (3 < iVar18) {
      if (lVar31 < 1) {
        lVar30 = 0;
        goto LAB_00102451;
      }
      String::split((char *)&local_98,SUB81(local_a0,0),0x10a1f1);
      if ((local_90 == (String *)0x0) || (*(long *)(local_90 + -8) < 2)) {
        _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0x9f,
                         "Condition \"req.size() < 2\" is true. Returning: false",
                         "Invalid protocol or status code.",0,0);
      }
      else {
        cVar15 = String::operator!=(local_90,"GET");
        if (cVar15 == '\0') {
          if (local_90 == (String *)0x0) {
            lVar31 = 0;
          }
          else {
            lVar31 = *(long *)(local_90 + -8);
            if (2 < lVar31) {
              cVar15 = String::operator!=(local_90 + 0x10,"HTTP/1.1");
              if (cVar15 != '\0') goto LAB_00102620;
              lVar30 = 1;
              local_70 = (undefined1  [16])0x0;
              local_50 = 2;
              local_60 = (undefined1  [16])0x0;
              do {
                if (local_a0 == 0) {
LAB_00102430:
                  lVar31 = 0;
                  goto LAB_00102451;
                }
                lVar31 = *(long *)(local_a0 + -8);
                if (lVar31 <= lVar30) goto LAB_00102451;
                String::split((char *)&local_88,(bool)((char)local_a0 + (char)lVar30 * '\b'),
                              0x10a200);
                cVar15 = '\0';
                if ((local_80 == (char *)0x0) || (*(long *)(local_80 + -8) != 2)) {
                  if (local_a0 == 0) goto LAB_00102430;
                  lVar31 = *(long *)(local_a0 + -8);
                  if (lVar31 <= lVar30) goto LAB_00102451;
                  operator+((char *)&local_b0,(String *)"Invalid header -> ");
                  _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0xa7,
                                   "Condition \"header.size() != 2\" is true. Returning: false",
                                   (CowData<char32_t> *)&local_b0,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  CowData<String>::_unref((CowData<String> *)&local_80);
                  local_f9 = cVar15;
                  goto LAB_00102504;
                }
                String::to_lower();
                if (local_80 == (char *)0x0) goto LAB_001025f0;
                lVar31 = *(long *)(local_80 + -8);
                if (lVar31 < 2) goto LAB_001025f3;
                String::strip_edges(SUB81((CowData *)&local_b8,0),(bool)((char)local_80 + '\b'));
                uVar26 = local_70._0_8_;
                if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
                  lVar31 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
                  uVar19 = String::hash();
                  uVar22 = CONCAT44(0,uVar3);
                  uVar14 = local_70._8_8_;
                  uVar24 = 1;
                  if (uVar19 != 0) {
                    uVar24 = uVar19;
                  }
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar24 * lVar31;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar22;
                  lVar25 = SUB168(auVar5 * auVar9,8);
                  uVar19 = *(uint *)(local_70._8_8_ + lVar25 * 4);
                  iVar23 = SUB164(auVar5 * auVar9,8);
                  if (uVar19 != 0) {
                    uVar32 = 0;
                    do {
                      if ((uVar19 == uVar24) &&
                         (cVar16 = String::operator==((String *)
                                                      (*(long *)(uVar26 + lVar25 * 8) + 0x10),
                                                      (String *)&local_c0), cVar16 != '\0')) {
                        operator+((char *)&local_b0,(String *)&_LC98);
                        pSVar20 = (String *)
                                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                *)&local_78,(String *)&local_c0);
                        String::operator+=(pSVar20,(String *)&local_b0);
                        uVar22 = local_b0;
                        if (local_b0 != 0) {
                          LOCK();
                          plVar1 = (long *)(local_b0 - 0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            local_b0 = 0;
                            Memory::free_static((void *)(uVar22 - 0x10),false);
                          }
                        }
                        goto LAB_00101e99;
                      }
                      uVar32 = uVar32 + 1;
                      auVar6._8_8_ = 0;
                      auVar6._0_8_ = (ulong)(iVar23 + 1) * lVar31;
                      auVar10._8_8_ = 0;
                      auVar10._0_8_ = uVar22;
                      lVar25 = SUB168(auVar6 * auVar10,8);
                      uVar19 = *(uint *)(uVar14 + lVar25 * 4);
                      iVar23 = SUB164(auVar6 * auVar10,8);
                    } while ((uVar19 != 0) &&
                            (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar19 * lVar31,
                            auVar11._8_8_ = 0, auVar11._0_8_ = uVar22, auVar8._8_8_ = 0,
                            auVar8._0_8_ = (ulong)((uVar3 + iVar23) - SUB164(auVar7 * auVar11,8)) *
                                           lVar31, auVar12._8_8_ = 0, auVar12._0_8_ = uVar22,
                            uVar32 <= SUB164(auVar8 * auVar12,8)));
                  }
                }
                this_00 = (CowData<char32_t> *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)&local_c0);
                if (*(long *)this_00 != local_b8) {
                  CowData<char32_t>::_ref(this_00,(CowData *)&local_b8);
                }
LAB_00101e99:
                lVar31 = local_b8;
                if (local_b8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_b8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_b8 = 0;
                    Memory::free_static((void *)(lVar31 + -0x10),false);
                  }
                }
                lVar31 = local_c0;
                if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c0 = 0;
                    Memory::free_static((void *)(lVar31 + -0x10),false);
                  }
                }
                lVar30 = lVar30 + 1;
                CowData<String>::_unref((CowData<String> *)&local_80);
              } while ((ulong)(iVar18 - 2) + 2 != lVar30);
              local_b8 = 0;
              local_88 = "host";
              local_80 = (char *)0x4;
              String::parse_latin1((StrRange *)&local_b8);
              local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
              cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                      *)&local_78,(String *)&local_b8,(uint *)&local_88);
              if (cVar16 == '\0') {
                local_88 = (char *)0x0;
                String::parse_latin1((String *)&local_88,"");
                if (local_88 != *(char **)(this + 0x208)) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x208));
                  pcVar29 = local_88;
                  local_88 = (char *)0x0;
                  *(char **)(this + 0x208) = pcVar29;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              }
              else {
                local_88 = "host";
                local_b0 = 0;
                local_80 = (char *)0x4;
                String::parse_latin1((StrRange *)&local_b0);
                local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
                cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)&local_b0,(uint *)&local_88);
                if (cVar16 == '\0') {
                  _err_print_error(&_LC33,"./core/templates/hash_map.h",0x140,
                                   "FATAL: Condition \"!exists\" is true.","HashMap key not found.",
                                   0,0);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar13 = (code *)invalidInstructionException();
                  (*pcVar13)();
                }
                lVar31 = *(long *)(local_70._0_8_ + ((ulong)local_88 & 0xffffffff) * 8);
                local_88 = (char *)0x0;
                if (*(long *)(lVar31 + 0x18) == 0) {
                  if (*(long *)(this + 0x208) == 0) goto LAB_00102b18;
LAB_0010285d:
                  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x208));
                  pcVar29 = local_88;
                  local_88 = (char *)0x0;
                  *(char **)(this + 0x208) = pcVar29;
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                }
                else {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar31 + 0x18))
                  ;
                  if (local_88 != *(char **)(this + 0x208)) goto LAB_0010285d;
LAB_00102b18:
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
              if (local_90 == (String *)0x0) {
LAB_001025f0:
                lVar31 = 0;
              }
              else {
                lVar31 = *(long *)(local_90 + -8);
                if (1 < lVar31) {
                  pcVar29 = "ws://";
                  if (this[0x268] != (WSLPeer)0x0) {
                    pcVar29 = "wss://";
                  }
                  operator+((char *)&local_b0,(String *)pcVar29);
                  String::operator+((String *)&local_88,(String *)&local_b0);
                  if (*(char **)(this + 0x200) != local_88) {
                    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x200));
                    pcVar29 = local_88;
                    local_88 = (char *)0x0;
                    *(char **)(this + 0x200) = pcVar29;
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  local_b8 = 0;
                  local_88 = "upgrade";
                  local_80 = (char *)0x7;
                  String::parse_latin1((StrRange *)&local_b8);
                  local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
                  cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                           ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                          *)&local_78,(String *)&local_b8,(uint *)&local_88);
                  if (cVar16 == '\0') {
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_001028a7:
                    pSVar20 = (String *)&local_e0;
                    local_b0 = 0;
                    String::parse_latin1((String *)&local_b0,"\'.");
                    this_01 = (String *)&local_d0;
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"websocket");
                    local_d0 = 0;
                    String::parse_latin1(this_01,"\'. Expected value \'");
                    local_e0 = 0;
                    String::parse_latin1(pSVar20,"upgrade");
                    operator+((char *)local_d8,(String *)"Missing or invalid header \'");
                    String::operator+(local_c8,(String *)local_d8);
                    String::operator+((String *)&local_b8,local_c8);
                    String::operator+((String *)&local_88,(String *)&local_b8);
                    _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0xb7,
                                     "Condition \"!headers.has(\"upgrade\") || headers[\"upgrade\"].to_lower() != \"websocket\"\" is true. Returning: false"
                                     ,(StrRange *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
                    CowData<char32_t>::_unref(local_d8);
LAB_001029a8:
                    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar20);
                  }
                  else {
                    local_b0 = 0;
                    local_88 = "upgrade";
                    local_80 = (char *)0x7;
                    String::parse_latin1((StrRange *)&local_b0);
                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  *)&local_78,(String *)&local_b0);
                    String::to_lower();
                    cVar16 = String::operator!=((String *)&local_88,"websocket");
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    if (cVar16 != '\0') goto LAB_001028a7;
                    local_b8 = 0;
                    local_88 = "sec-websocket-version";
                    local_80 = (char *)0x15;
                    String::parse_latin1((StrRange *)&local_b8);
                    local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
                    cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                             ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                            *)&local_78,(String *)&local_b8,(uint *)&local_88);
                    if (cVar16 != '\0') {
                      local_b0 = 0;
                      local_88 = "sec-websocket-version";
                      local_80 = (char *)0x15;
                      String::parse_latin1((StrRange *)&local_b0);
                      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                      ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                    *)&local_78,(String *)&local_b0);
                      String::to_lower();
                      cVar16 = String::operator!=((String *)&local_88,"13");
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                      if (cVar16 != '\0') goto LAB_001029e0;
                      local_88 = (char *)0x0;
                      String::parse_latin1((String *)&local_88,"sec-websocket-key");
                      local_b0 = local_b0 & 0xffffffff00000000;
                      cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                               ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                              *)&local_78,(String *)&local_88,(uint *)&local_b0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      if (cVar16 == '\0') {
                        local_b0 = 0;
                        String::parse_latin1((String *)&local_b0,"\'.");
                        local_c0 = 0;
                        String::parse_latin1((String *)&local_c0,"sec-websocket-key");
                        operator+((char *)&local_b8,(String *)"Missing header \'");
                        String::operator+((String *)&local_88,(String *)&local_b8);
                        pcVar29 = 
                        "Condition \"!headers.has(\"sec-websocket-key\")\" is true. Returning: false"
                        ;
                        uVar26 = 0xb9;
                      }
                      else {
                        local_88 = (char *)0x0;
                        String::parse_latin1((String *)&local_88,"connection");
                        local_b0 = local_b0 & 0xffffffff00000000;
                        local_f9 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                   ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                  *)&local_78,(String *)&local_88,(uint *)&local_b0)
                        ;
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                        if (local_f9 != '\0') {
                          local_88 = (char *)0x0;
                          String::parse_latin1((String *)&local_88,"sec-websocket-key");
                          pCVar21 = (CowData *)
                                    HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                    ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                  *)&local_78,(String *)&local_88);
                          if (*(long *)(this + 0x228) != *(long *)pCVar21) {
                            CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x228),pCVar21);
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          local_88 = (char *)0x0;
                          String::parse_latin1((String *)&local_88,"sec-websocket-protocol");
                          local_b0 = local_b0 & 0xffffffff00000000;
                          cVar16 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                   ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                  *)&local_78,(String *)&local_88,(uint *)&local_b0)
                          ;
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          if (cVar16 != '\0') {
                            lVar31 = 0;
                            local_b0 = 0;
                            String::parse_latin1((String *)&local_b0,"sec-websocket-protocol");
                            bVar17 = (bool)HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                           ::operator[]((
                                                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                  *)&local_78,(String *)&local_b0);
                            String::split((char *)&local_88,bVar17,0x10a2d4);
                            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                            do {
                              if ((local_80 == (char *)0x0) || (*(long *)(local_80 + -8) <= lVar31))
                              goto LAB_00102c3d;
                              lVar25 = 0;
                              String::strip_edges(SUB81((CowData<char32_t> *)&local_b0,0),
                                                  (bool)((char)local_80 + (char)lVar31 * '\b'));
                              lVar30 = *(long *)(this + 0x1a0);
                              if (lVar30 != 0) {
                                while (lVar25 < *(long *)(lVar30 + -8)) {
                                  cVar16 = String::operator!=((String *)&local_b0,
                                                              (String *)(lVar30 + lVar25 * 8));
                                  if (cVar16 == '\0') {
                                    uVar22 = local_b0;
                                    if (*(ulong *)(this + 0x220) != local_b0) {
                                      CowData<char32_t>::_ref
                                                ((CowData<char32_t> *)(this + 0x220),
                                                 (CowData *)&local_b0);
                                      uVar22 = *(ulong *)(this + 0x220);
                                    }
                                    goto LAB_00102bb1;
                                  }
                                  lVar30 = *(long *)(this + 0x1a0);
                                  lVar25 = lVar25 + 1;
                                  if (lVar30 == 0) break;
                                }
                              }
                              uVar22 = *(ulong *)(this + 0x220);
LAB_00102bb1:
                              if ((uVar22 != 0) && (1 < *(uint *)(uVar22 - 8))) goto LAB_00102c60;
                              lVar31 = lVar31 + 1;
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                            } while( true );
                          }
                          if (*(long *)(this + 0x1a0) != 0) {
                            local_f9 = *(long *)(*(long *)(this + 0x1a0) + -8) < 1;
                          }
                          goto LAB_00102504;
                        }
                        local_b0 = 0;
                        String::parse_latin1((String *)&local_b0,"\'.");
                        local_c0 = 0;
                        String::parse_latin1((String *)&local_c0,"connection");
                        operator+((char *)&local_b8,(String *)"Missing header \'");
                        String::operator+((String *)&local_88,(String *)&local_b8);
                        pcVar29 = 
                        "Condition \"!headers.has(\"connection\")\" is true. Returning: false";
                        uVar26 = 0xba;
                      }
                      _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",
                                       uVar26,pcVar29,(StrRange *)&local_88,0,0);
                      pSVar20 = (String *)&local_88;
                      this_01 = (String *)&local_b8;
                      goto LAB_001029a8;
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_001029e0:
                    local_b0 = 0;
                    String::parse_latin1((String *)&local_b0,"\'.");
                    local_c0 = 0;
                    String::parse_latin1((String *)&local_c0,"13");
                    this_01 = (String *)&local_d0;
                    local_d0 = 0;
                    String::parse_latin1(this_01,"\'. Expected value \'");
                    local_e0 = 0;
                    String::parse_latin1((String *)&local_e0,"sec-websocket-version");
                    operator+((char *)local_d8,(String *)"Missing or invalid header \'");
                    String::operator+(local_c8,(String *)local_d8);
                    String::operator+((String *)&local_b8,local_c8);
                    String::operator+((String *)&local_88,(String *)&local_b8);
                    _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0xb8,
                                     "Condition \"!headers.has(\"sec-websocket-version\") || headers[\"sec-websocket-version\"].to_lower() != \"13\"\" is true. Returning: false"
                                     ,(StrRange *)&local_88,0,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
                    CowData<char32_t>::_unref(local_d8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
                  local_f9 = cVar15;
                  goto LAB_00102504;
                }
              }
LAB_001025f3:
              lVar30 = 1;
              goto LAB_00102451;
            }
          }
          lVar30 = 2;
LAB_00102451:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar30,lVar31,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
LAB_00102620:
        _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0xa2,
                         "Condition \"req[0] != \"GET\" || req[2] != \"HTTP/1.1\"\" is true. Returning: false"
                         ,"Invalid method or HTTP version.",0,0);
      }
      local_f9 = '\0';
      goto LAB_001025a5;
    }
  }
  local_78 = ", expected >= 4.";
  local_88 = (char *)0x0;
  local_70._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  itos((long)&local_b0);
  operator+((char *)&local_98,(String *)"Not enough response headers, got: ");
  String::operator+((String *)&local_78,(String *)&local_98);
  _err_print_error("_parse_client_request","modules/websocket/wsl_peer.cpp",0x9c,
                   "Condition \"len < 4\" is true. Returning: false",(String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_f9 = '\0';
  goto LAB_001025b2;
LAB_00102c60:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_00102c3d:
  if ((*(long *)(this + 0x220) == 0) || (*(uint *)(*(long *)(this + 0x220) + -8) < 2)) {
    CowData<String>::_unref((CowData<String> *)&local_80);
    local_f9 = cVar15;
  }
  else {
    CowData<String>::_unref((CowData<String> *)&local_80);
  }
LAB_00102504:
  uVar26 = local_70._0_8_;
  if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
    uVar14 = local_70._8_8_;
    if ((local_50._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
      piVar2 = (int *)(local_70._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
      piVar27 = (int *)local_70._8_8_;
      puVar28 = (undefined8 *)local_70._0_8_;
      do {
        if (*piVar27 != 0) {
          pvVar4 = (void *)*puVar28;
          *piVar27 = 0;
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *puVar28 = 0;
        }
        piVar27 = piVar27 + 1;
        puVar28 = puVar28 + 1;
      } while (piVar27 != piVar2);
    }
    Memory::free_static((void *)uVar26,false);
    Memory::free_static((void *)uVar14,false);
  }
LAB_001025a5:
  CowData<String>::_unref((CowData<String> *)&local_90);
LAB_001025b2:
  CowData<String>::_unref((CowData<String> *)&local_a0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_f9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::_verify_server_response() */

undefined4 __thiscall WSLPeer::_verify_server_response(WSLPeer *this)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  String *pSVar19;
  CowData<char32_t> *this_00;
  CowData *pCVar20;
  long lVar21;
  char *pcVar22;
  int iVar23;
  uint uVar24;
  undefined8 uVar25;
  int *piVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  uint uVar32;
  undefined4 uVar33;
  long in_FS_OFFSET;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  char local_b8 [8];
  long local_b0;
  CowData<char32_t> local_a8 [8];
  String *local_a0;
  ulong local_98;
  long local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_70._8_8_ = local_70._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = StreamPeerBuffer::get_position();
  StreamPeerBuffer::get_data_array();
  local_78 = local_80;
  local_70._0_8_ = 0;
  local_98 = 0;
  if (local_80 != (char *)0x0) {
    iVar16 = iVar16 + -4;
    if (iVar16 < 0) {
      local_70._0_8_ = strlen(local_80);
    }
    else if (iVar16 != 0) {
      iVar23 = 0;
      pcVar22 = local_80;
      do {
        if (*pcVar22 == '\0') {
          local_70._0_8_ = SEXT48(iVar23);
          goto LAB_00102e5f;
        }
        iVar23 = iVar23 + 1;
        pcVar22 = pcVar22 + 1;
      } while (iVar16 != iVar23);
      local_70._0_8_ = SEXT48(iVar16);
    }
  }
LAB_00102e5f:
  String::parse_latin1((StrRange *)&local_98);
  String::split(local_b8,SUB81((StrRange *)&local_98,0),0x10a1c7);
  uVar28 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 - 0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(uVar28 - 0x10),false);
    }
  }
  pcVar22 = local_80;
  if (local_80 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = (char *)0x0;
      Memory::free_static(pcVar22 + -0x10,false);
    }
  }
  if (local_b0 != 0) {
    uVar28 = *(ulong *)(local_b0 + -8);
    iVar16 = (int)uVar28;
    if (3 < iVar16) {
      if ((long)uVar28 < 1) {
        lVar29 = 0;
        goto LAB_001036a3;
      }
      String::split((char *)local_a8,SUB81(local_b0,0),0x10a1f1);
      if ((local_a0 == (String *)0x0) || (*(long *)(local_a0 + -8) < 2)) {
        local_88 = (char *)0x0;
        local_78 = "\', expected \'HTTP/1.1 101\'.";
        local_70._0_8_ = 0x1b;
        String::parse_latin1((StrRange *)&local_88);
        if (local_b0 == 0) {
LAB_00103d3e:
          uVar28 = 0;
        }
        else {
          uVar28 = *(ulong *)(local_b0 + -8);
          if (0 < (long)uVar28) {
            operator+((char *)&local_98,(String *)"Invalid protocol or status code. Got \'");
            String::operator+((String *)&local_78,(String *)&local_98);
            pcVar22 = "Condition \"req.size() < 2\" is true. Returning: false";
            uVar25 = 0x1a8;
            goto LAB_00103a6c;
          }
        }
LAB_00103d41:
        lVar29 = 0;
        goto LAB_001036a3;
      }
      cVar15 = String::operator!=(local_a0,"HTTP/1.1");
      if (cVar15 == '\0') {
        if (local_a0 == (String *)0x0) {
LAB_00103680:
          uVar28 = 0;
        }
        else {
          uVar28 = *(ulong *)(local_a0 + -8);
          if (1 < (long)uVar28) {
            cVar15 = String::operator!=(local_a0 + 8,"101");
            if (cVar15 == '\0') {
              lVar29 = 1;
              local_50 = 2;
              local_70 = (undefined1  [16])0x0;
              local_60 = (undefined1  [16])0x0;
              do {
                if (local_b0 == 0) {
LAB_001036d0:
                  uVar28 = 0;
                  goto LAB_001036a3;
                }
                uVar28 = *(ulong *)(local_b0 + -8);
                if ((long)uVar28 <= lVar29) goto LAB_001036a3;
                String::split((char *)&local_98,(bool)((char)local_b0 + (char)lVar29 * '\b'),
                              0x10a200);
                if ((local_90 == 0) || (*(long *)(local_90 + -8) != 2)) {
                  local_c0 = 0;
                  local_88 = ".";
                  uVar18 = 0;
                  local_80 = (char *)0x1;
                  String::parse_latin1((StrRange *)&local_c0);
                  if (local_b0 == 0) goto LAB_001036d0;
                  uVar28 = *(ulong *)(local_b0 + -8);
                  if ((long)uVar28 <= lVar29) goto LAB_001036a3;
                  operator+((char *)&local_c8,(String *)"Invalid header -> ");
                  String::operator+((String *)&local_88,(String *)&local_c8);
                  _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",0x1b1,
                                   "Condition \"header.size() != 2\" is true. Returning: false",
                                   (StrRange *)&local_88,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<String>::_unref((CowData<String> *)&local_90);
                  goto LAB_001037ed;
                }
                String::to_lower();
                if (local_90 == 0) goto LAB_00103680;
                uVar28 = *(ulong *)(local_90 + -8);
                if ((long)uVar28 < 2) goto LAB_00103683;
                lVar21 = 1;
                String::strip_edges(SUB81((CowData *)&local_c0,0),(bool)((char)local_90 + '\b'));
                uVar25 = local_70._0_8_;
                if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
                  uVar27 = CONCAT44(0,uVar3);
                  lVar31 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
                  uVar17 = String::hash();
                  uVar14 = local_70._8_8_;
                  uVar24 = 1;
                  if (uVar17 != 0) {
                    uVar24 = uVar17;
                  }
                  uVar28 = (ulong)uVar24;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar24 * lVar31;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar27;
                  lVar21 = SUB168(auVar5 * auVar9,8);
                  uVar17 = *(uint *)(local_70._8_8_ + lVar21 * 4);
                  iVar23 = SUB164(auVar5 * auVar9,8);
                  if (uVar17 != 0) {
                    uVar32 = 0;
                    do {
                      if ((uVar17 == uVar24) &&
                         (cVar15 = String::operator==((String *)
                                                      (*(long *)(uVar25 + lVar21 * 8) + 0x10),
                                                      (String *)&local_c8), cVar15 != '\0')) {
                        operator+((char *)&local_88,(String *)&_LC98);
                        pSVar19 = (String *)
                                  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                  ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                                *)&local_78,(String *)&local_c8);
                        String::operator+=(pSVar19,(String *)&local_88);
                        pcVar22 = local_88;
                        if (local_88 != (char *)0x0) {
                          LOCK();
                          plVar1 = (long *)(local_88 + -0x10);
                          *plVar1 = *plVar1 + -1;
                          UNLOCK();
                          if (*plVar1 == 0) {
                            local_88 = (char *)0x0;
                            Memory::free_static(pcVar22 + -0x10,false);
                          }
                        }
                        goto LAB_00103246;
                      }
                      uVar32 = uVar32 + 1;
                      auVar6._8_8_ = 0;
                      auVar6._0_8_ = (ulong)(iVar23 + 1) * lVar31;
                      auVar10._8_8_ = 0;
                      auVar10._0_8_ = uVar27;
                      lVar21 = SUB168(auVar6 * auVar10,8);
                      uVar17 = *(uint *)(uVar14 + lVar21 * 4);
                      iVar23 = SUB164(auVar6 * auVar10,8);
                    } while ((uVar17 != 0) &&
                            (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar17 * lVar31,
                            auVar11._8_8_ = 0, auVar11._0_8_ = uVar27, auVar8._8_8_ = 0,
                            auVar8._0_8_ = (ulong)((uVar3 + iVar23) - SUB164(auVar7 * auVar11,8)) *
                                           lVar31, auVar12._8_8_ = 0, auVar12._0_8_ = uVar27,
                            uVar32 <= SUB164(auVar8 * auVar12,8)));
                  }
                }
                this_00 = (CowData<char32_t> *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)&local_c8);
                if (*(long *)this_00 != local_c0) {
                  CowData<char32_t>::_ref(this_00,(CowData *)&local_c0);
                }
LAB_00103246:
                lVar31 = local_c0;
                if (local_c0 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c0 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c0 = 0;
                    Memory::free_static((void *)(lVar31 + -0x10),false);
                  }
                }
                lVar31 = local_c8;
                if (local_c8 != 0) {
                  LOCK();
                  plVar1 = (long *)(local_c8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_c8 = 0;
                    Memory::free_static((void *)(lVar31 + -0x10),false);
                  }
                }
                lVar29 = lVar29 + 1;
                CowData<String>::_unref((CowData<String> *)&local_90);
              } while (lVar29 != (ulong)(iVar16 - 2) + 2);
              local_c0 = 0;
              local_88 = "connection";
              uVar33 = 0;
              local_80 = (char *)0xa;
              String::parse_latin1((StrRange *)&local_c0);
              local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
              cVar15 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                       ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                      *)&local_78,(String *)&local_c0,(uint *)&local_88);
              if (cVar15 == '\0') {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_00103bf0:
                local_98 = 0;
                String::parse_latin1((String *)&local_98,"\'.");
                local_c8 = 0;
                String::parse_latin1((String *)&local_c8,"upgrade");
                local_d8 = 0;
                String::parse_latin1((String *)&local_d8,"\'. Expected value \'");
                local_e8 = 0;
                String::parse_latin1((String *)&local_e8,"connection");
                operator+((char *)&local_e0,(String *)"Missing or invalid header \'");
                String::operator+((String *)&local_d0,(String *)&local_e0);
                String::operator+((String *)&local_c0,(String *)&local_d0);
                String::operator+((String *)&local_88,(String *)&local_c0);
                _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",0x1c1,
                                 "Condition \"!headers.has(\"connection\") || headers[\"connection\"].to_lower() != \"upgrade\"\" is true. Returning: false"
                                 ,(StrRange *)&local_88,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
LAB_00103d1c:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                uVar18 = uVar33;
              }
              else {
                local_98 = 0;
                local_88 = "connection";
                local_80 = (char *)0xa;
                String::parse_latin1((StrRange *)&local_98);
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)&local_78,(String *)&local_98);
                String::to_lower();
                cVar15 = String::operator!=((String *)&local_88,"upgrade");
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                if (cVar15 != '\0') goto LAB_00103bf0;
                local_c0 = 0;
                local_88 = "upgrade";
                local_80 = (char *)0x7;
                String::parse_latin1((StrRange *)&local_c0);
                local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
                cVar15 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)&local_c0,(uint *)&local_88);
                if (cVar15 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_00103eee:
                  local_98 = 0;
                  String::parse_latin1((String *)&local_98,"\'.");
                  local_c8 = 0;
                  String::parse_latin1((String *)&local_c8,"websocket");
                  local_d8 = 0;
                  String::parse_latin1((String *)&local_d8,"\'. Expected value \'");
                  local_e8 = 0;
                  String::parse_latin1((String *)&local_e8,"upgrade");
                  operator+((char *)&local_e0,(String *)"Missing or invalid header \'");
                  String::operator+((String *)&local_d0,(String *)&local_e0);
                  String::operator+((String *)&local_c0,(String *)&local_d0);
                  String::operator+((String *)&local_88,(String *)&local_c0);
                  _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",0x1c2,
                                   "Condition \"!headers.has(\"upgrade\") || headers[\"upgrade\"].to_lower() != \"websocket\"\" is true. Returning: false"
                                   ,(StrRange *)&local_88,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  goto LAB_00103d1c;
                }
                local_98 = 0;
                local_88 = "upgrade";
                local_80 = (char *)0x7;
                String::parse_latin1((StrRange *)&local_98);
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)&local_78,(String *)&local_98);
                String::to_lower();
                cVar15 = String::operator!=((String *)&local_88,"websocket");
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                if (cVar15 != '\0') goto LAB_00103eee;
                local_c8 = 0;
                String::parse_latin1((String *)&local_c8,"sec-websocket-accept");
                local_88 = (char *)((ulong)local_88 & 0xffffffff00000000);
                uVar18 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                         ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)&local_c8,(uint *)&local_88);
                if ((char)uVar18 == '\0') {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_00103d6d:
                  local_98 = 0;
                  String::parse_latin1((String *)&local_98,"\'.");
                  local_d0 = 0;
                  if (*(long *)(this + 0x228) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_d0,(CowData *)(this + 0x228));
                  }
                  _compute_key_response((WSLPeer *)&local_c8,(CowData<char32_t> *)&local_d0);
                  local_e0 = 0;
                  String::parse_latin1((String *)&local_e0,"\'. Expected value \'");
                  local_f0 = 0;
                  String::parse_latin1((String *)&local_f0,"sec-websocket-accept");
                  operator+((char *)&local_e8,(String *)"Missing or invalid header \'");
                  String::operator+((String *)&local_d8,(String *)&local_e8);
                  String::operator+((String *)&local_c0,(String *)&local_d8);
                  String::operator+((String *)&local_88,(String *)&local_c0);
                  _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",0x1c3,
                                   "Condition \"!headers.has(\"sec-websocket-accept\") || headers[\"sec-websocket-accept\"] != _compute_key_response(session_key)\" is true. Returning: false"
                                   ,(StrRange *)&local_88,0,0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  uVar18 = uVar33;
                }
                else {
                  local_98 = 0;
                  if (*(long *)(this + 0x228) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_98,(CowData *)(this + 0x228));
                  }
                  _compute_key_response((WSLPeer *)&local_88,(StrRange *)&local_98);
                  local_c0 = 0;
                  String::parse_latin1((String *)&local_c0,"sec-websocket-accept");
                  pSVar19 = (String *)
                            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                            ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                          *)&local_78,(String *)&local_c0);
                  cVar15 = String::operator!=(pSVar19,(String *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
                  if (cVar15 != '\0') goto LAB_00103d6d;
                  if ((*(long *)(this + 0x1a0) == 0) ||
                     (*(long *)(*(long *)(this + 0x1a0) + -8) == 0)) {
                    local_88 = (char *)0x0;
                    String::parse_latin1((String *)&local_88,"sec-websocket-protocol");
                    local_98 = local_98 & 0xffffffff00000000;
                    cVar15 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                             ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                            *)&local_78,(String *)&local_88,(uint *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    if (cVar15 != '\0') {
                      local_98 = 0;
                      String::parse_latin1((String *)&local_98,"sec-websocket-protocol");
                      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                      ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                    *)&local_78,(String *)&local_98);
                      operator+((char *)&local_88,(String *)"Received unrequested sub-protocol -> ")
                      ;
                      _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",
                                       0x1c8,
                                       "Condition \"headers.has(\"sec-websocket-protocol\")\" is true. Returning: false"
                                       ,(StrRange *)&local_88,0,0);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                      uVar18 = uVar33;
                    }
                  }
                  else {
                    local_88 = (char *)0x0;
                    String::parse_latin1((String *)&local_88,"sec-websocket-protocol");
                    local_98 = local_98 & 0xffffffff00000000;
                    cVar15 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                             ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                            *)&local_78,(String *)&local_88,(uint *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    if (cVar15 == '\0') {
                      _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",
                                       0x1cb,
                                       "Condition \"!headers.has(\"sec-websocket-protocol\")\" is true. Returning: false"
                                       ,"Requested sub-protocol(s) but received none.",0,0,uVar28);
                      uVar18 = uVar33;
                    }
                    else {
                      local_88 = (char *)0x0;
                      String::parse_latin1((String *)&local_88,"sec-websocket-protocol");
                      pCVar20 = (CowData *)
                                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                              *)&local_78,(String *)&local_88);
                      if (*(long *)(this + 0x220) != *(long *)pCVar20) {
                        CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x220),pCVar20);
                      }
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      lVar29 = *(long *)(this + 0x1a0);
                      for (lVar31 = 0; (lVar29 != 0 && (lVar31 < *(long *)(lVar29 + -8)));
                          lVar31 = lVar31 + 1) {
                        cVar15 = String::operator!=((String *)(lVar29 + lVar31 * 8),
                                                    (String *)(this + 0x220));
                        if (cVar15 == '\0') goto LAB_001037ed;
                        lVar29 = *(long *)(this + 0x1a0);
                      }
                      operator+((char *)&local_88,(String *)"Received unrequested sub-protocol -> ")
                      ;
                      _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",
                                       0x1d7,"Method/function failed. Returning: false",
                                       (StrRange *)&local_88,0,0,lVar21);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                      uVar18 = uVar33;
                    }
                  }
                }
              }
LAB_001037ed:
              uVar25 = local_70._0_8_;
              if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
                uVar14 = local_70._8_8_;
                if ((local_50._4_4_ != 0) &&
                   (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
                  piVar2 = (int *)(local_70._8_8_ +
                                  (ulong)*(uint *)(hash_table_size_primes +
                                                  (local_50 & 0xffffffff) * 4) * 4);
                  piVar26 = (int *)local_70._8_8_;
                  puVar30 = (undefined8 *)local_70._0_8_;
                  do {
                    if (*piVar26 != 0) {
                      pvVar4 = (void *)*puVar30;
                      *piVar26 = 0;
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
                      Memory::free_static(pvVar4,false);
                      *puVar30 = 0;
                    }
                    piVar26 = piVar26 + 1;
                    puVar30 = puVar30 + 1;
                  } while (piVar2 != piVar26);
                }
                Memory::free_static((void *)uVar25,false);
                Memory::free_static((void *)uVar14,false);
              }
              goto LAB_00103892;
            }
            local_88 = (char *)0x0;
            local_78 = "\', expected \'101\'.";
            local_70._0_8_ = 0x12;
            String::parse_latin1((StrRange *)&local_88);
            if (local_a0 == (String *)0x0) goto LAB_00103680;
            uVar28 = *(ulong *)(local_a0 + -8);
            if (1 < (long)uVar28) {
              operator+((char *)&local_98,(String *)"Invalid status code. Got: \'");
              String::operator+((String *)&local_78,(String *)&local_98);
              pcVar22 = "Condition \"req[1] != \"101\"\" is true. Returning: false";
              uVar25 = 0x1ac;
              goto LAB_00103a6c;
            }
          }
        }
LAB_00103683:
        lVar29 = 1;
LAB_001036a3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar29,uVar28,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar13 = (code *)invalidInstructionException();
        (*pcVar13)();
      }
      local_88 = (char *)0x0;
      local_78 = "\', expected \'HTTP/1.1\'.";
      local_70._0_8_ = 0x17;
      String::parse_latin1((StrRange *)&local_88);
      if (local_a0 == (String *)0x0) goto LAB_00103d3e;
      uVar28 = *(ulong *)(local_a0 + -8);
      if ((long)uVar28 < 1) goto LAB_00103d41;
      operator+((char *)&local_98,(String *)"Invalid protocol. Got: \'");
      String::operator+((String *)&local_78,(String *)&local_98);
      pcVar22 = "Condition \"req[0] != \"HTTP/1.1\"\" is true. Returning: false";
      uVar25 = 0x1ab;
LAB_00103a6c:
      _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",uVar25,pcVar22,
                       (String *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      uVar18 = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_00103892:
      CowData<String>::_unref((CowData<String> *)&local_a0);
      goto LAB_0010389f;
    }
  }
  local_78 = ", expected >= 4.";
  local_88 = (char *)0x0;
  local_70._0_8_ = 0x10;
  String::parse_latin1((StrRange *)&local_88);
  itos((long)local_a8);
  operator+((char *)&local_98,(String *)"Not enough response headers. Got: ");
  String::operator+((String *)&local_78,(String *)&local_98);
  _err_print_error("_verify_server_response","modules/websocket/wsl_peer.cpp",0x1a5,
                   "Condition \"len < 4\" is true. Returning: false",(String *)&local_78,0,0);
  uVar18 = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
LAB_0010389f:
  CowData<String>::_unref((CowData<String> *)&local_b0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar18;
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
LAB_001043c6:
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
    if (lVar10 == 0) goto LAB_001043c6;
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
    FUN_0010a654();
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
      goto LAB_0010431c;
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
LAB_0010431c:
  puVar8[-1] = param_1;
  return;
}



/* WSLPeer::_generate_key() */

WSLPeer * __thiscall WSLPeer::_generate_key(WSLPeer *this)

{
  long *plVar1;
  uchar *puVar2;
  long in_FS_OFFSET;
  uchar *local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = (uchar *)0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_30,0x10);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_30);
  _wsl_genmask_callback((wslay_event_context *)0x0,local_30[0],0x10,(void *)0x0);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_30);
  puVar2 = local_30[0];
  CryptoCore::b64_encode_str((uchar *)this,(int)local_30[0]);
  if (puVar2 != (uchar *)0x0) {
    LOCK();
    plVar1 = (long *)(puVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_30[0] + -0x10,false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::_clear() */

void __thiscall WSLPeer::_clear(WSLPeer *this)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  this[0x1e4] = (WSLPeer)0x0;
  *(undefined4 *)(this + 0x1e0) = 3;
  if (*(long *)(this + 0x1f0) != 0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      pOVar5 = *(Object **)(this + 0x1f0);
      cVar7 = predelete_handler(pOVar5);
      if (cVar7 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  *(undefined8 *)(this + 0x1f0) = 0;
  if (*(long *)(this + 0x1e8) != 0) {
    StreamPeerTCP::disconnect_from_host();
    if (*(long *)(this + 0x1e8) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        pOVar5 = *(Object **)(this + 0x1e8);
        cVar7 = predelete_handler(pOVar5);
        if (cVar7 != '\0') {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
      }
    }
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  if (*(long *)(this + 0x1f8) != 0) {
    wslay_event_context_free();
    *(undefined8 *)(this + 0x1f8) = 0;
  }
  if (*(int *)(this + 0x1d8) != -1) {
    iVar8 = IP::get_singleton();
    IP::erase_resolve_item(iVar8);
    *(undefined4 *)(this + 0x1d8) = 0xffffffff;
  }
  lVar9 = *(long *)(this + 0x200);
  *(undefined4 *)(this + 0x1dc) = 0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x200) = 0;
    }
  }
  lVar9 = *(long *)(this + 0x208);
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x208);
      *(undefined8 *)(this + 0x208) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x208) = 0;
    }
  }
  this[0x210] = (WSLPeer)0x1;
  StreamPeerBuffer::clear();
  lVar9 = *(long *)(this + 0x220);
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x220);
      *(undefined8 *)(this + 0x220) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x220) = 0;
    }
  }
  lVar9 = *(long *)(this + 0x228);
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x228);
      *(undefined8 *)(this + 0x228) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x228) = 0;
    }
  }
  this[0x240] = (WSLPeer)0x0;
  if (*(long *)(this + 0x2b0) == 0) {
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x2b0),1);
LAB_00104758:
    if (*(int *)(this + 700) < *(int *)(this + 0x2b8)) {
      if (0 < *(int *)(this + 700)) {
        lVar9 = 0;
        do {
          lVar4 = *(long *)(this + 0x2b0);
          if (lVar4 == 0) {
            lVar10 = 0;
LAB_001047bf:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar10,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar10 = *(long *)(lVar4 + -8);
          if (lVar10 <= lVar9) goto LAB_001047bf;
          uVar2 = *(undefined1 *)(lVar4 + lVar9);
          lVar9 = lVar9 + 1;
          CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x2b0));
          **(undefined1 **)(this + 0x2b0) = uVar2;
        } while ((int)lVar9 < *(int *)(this + 700));
      }
      goto LAB_001046a3;
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(this + 0x2b0) + -8);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x2b0),1);
    if ((int)uVar3 < 1) goto LAB_00104758;
  }
  *(undefined4 *)(this + 0x2b8) = 0;
LAB_001046a3:
  lVar9 = *(long *)(this + 0x290);
  *(undefined8 *)(this + 700) = 0;
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x290) = 0;
    }
  }
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x280),0);
  lVar9 = *(long *)(this + 0x238);
  *(undefined4 *)(this + 0x230) = 0xffffffff;
  if ((lVar9 != 0) && (*(long *)(lVar9 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar9 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar9 = *(long *)(this + 0x238);
      *(undefined8 *)(this + 0x238) = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
      return;
    }
    *(undefined8 *)(this + 0x238) = 0;
  }
  return;
}



/* WSLPeer::accept_stream(Ref<StreamPeer>) */

undefined8 __thiscall WSLPeer::accept_stream(WSLPeer *this,long *param_2)

{
  Object *pOVar1;
  code *pcVar2;
  char cVar3;
  Object *pOVar4;
  Object *pOVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("accept_stream","modules/websocket/wsl_peer.cpp",0x80,
                     "Condition \"p_stream.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
  }
  else {
    if (1 < *(int *)(this + 0x1e0) - 2U) {
      _err_print_error("accept_stream","modules/websocket/wsl_peer.cpp",0x81,
                       "Condition \"ready_state != STATE_CLOSED && ready_state != STATE_CLOSING\" is true. Returning: ERR_ALREADY_IN_USE"
                       ,0,0);
      uVar6 = 0x16;
      goto LAB_00104a3b;
    }
    _clear(this);
    cVar3 = (**(code **)(*(long *)*param_2 + 0x60))();
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*(long *)*param_2 + 0x60))
                        ((long *)*param_2,&StreamPeerTLS::get_class_ptr_static()::ptr);
      if (cVar3 != '\0') {
        if ((*param_2 == 0) ||
           (pOVar5 = (Object *)__dynamic_cast(*param_2,&Object::typeinfo,&StreamPeerTLS::typeinfo,0)
           , pOVar5 == (Object *)0x0)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          pOVar5 = (Object *)0x0;
        }
        (**(code **)(*(long *)pOVar5 + 0x198))(&local_38);
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        if ((local_38 == (Object *)0x0) ||
           (cVar3 = (**(code **)(*(long *)local_38 + 0x60))(), cVar3 == '\0')) {
          _err_print_error("accept_stream","modules/websocket/wsl_peer.cpp",0x8b,
                           "Condition \"base_stream.is_null() || !base_stream->is_class_ptr(StreamPeerTCP::get_class_ptr_static())\" is true. Returning: ERR_INVALID_PARAMETER"
                           ,0,0);
          if ((local_38 != (Object *)0x0) &&
             ((cVar3 = RefCounted::unreference(), cVar3 != '\0' &&
              (cVar3 = predelete_handler(local_38), cVar3 != '\0')))) {
            (**(code **)(*(long *)local_38 + 0x140))(local_38);
            Memory::free_static(local_38,false);
          }
          goto LAB_00104cf5;
        }
        if (((local_38 == (Object *)0x0) ||
            (pOVar5 = (Object *)
                      __dynamic_cast(local_38,&Object::typeinfo,&StreamPeerTCP::typeinfo,0),
            pOVar5 == (Object *)0x0)) || (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
          pOVar5 = *(Object **)(this + 0x1e8);
          if (pOVar5 != (Object *)0x0) {
            *(undefined8 *)(this + 0x1e8) = 0;
            cVar3 = RefCounted::unreference();
            goto joined_r0x00104e15;
          }
        }
        else {
          pOVar1 = *(Object **)(this + 0x1e8);
          if (pOVar1 != pOVar5) {
            *(Object **)(this + 0x1e8) = pOVar5;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              *(undefined8 *)(this + 0x1e8) = 0;
            }
            if (((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
               (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
          cVar3 = RefCounted::unreference();
joined_r0x00104e15:
          if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
        pOVar5 = (Object *)*param_2;
        pOVar1 = *(Object **)(this + 0x1f0);
        if (pOVar5 != pOVar1) {
          *(Object **)(this + 0x1f0) = pOVar5;
          if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *(undefined8 *)(this + 0x1f0) = 0;
          }
          if (((pOVar1 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
             (cVar3 = predelete_handler(pOVar1), cVar3 != '\0')) {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
        this[0x268] = (WSLPeer)0x1;
        if (((local_38 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
           (cVar3 = predelete_handler(local_38), cVar3 != '\0')) {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
      pOVar4 = *(Object **)(this + 0x1f0);
LAB_001049e3:
      if (pOVar4 != (Object *)0x0) {
        pOVar5 = *(Object **)(this + 0x1e8);
LAB_001049f3:
        if (pOVar5 != (Object *)0x0) {
          this[0x1e4] = (WSLPeer)0x1;
          StreamPeerTCP::set_no_delay(SUB81(pOVar5,0));
          *(undefined4 *)(this + 0x1e0) = 0;
          StreamPeerBuffer::resize((int)*(undefined8 *)(this + 0x218));
          StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
          uVar6 = 0;
          goto LAB_00104a3b;
        }
      }
    }
    else {
      pOVar1 = (Object *)*param_2;
      pOVar5 = *(Object **)(this + 0x1e8);
      if (pOVar1 != (Object *)0x0) {
        pOVar4 = (Object *)__dynamic_cast(pOVar1,&Object::typeinfo,&StreamPeerTCP::typeinfo,0);
        if (pOVar5 != pOVar4) {
          *(Object **)(this + 0x1e8) = pOVar4;
          if ((pOVar4 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
            *(undefined8 *)(this + 0x1e8) = 0;
          }
          if (pOVar5 != (Object *)0x0) goto LAB_00104d14;
          goto LAB_00104ac1;
        }
        pOVar4 = *(Object **)(this + 0x1f0);
        if (pOVar1 != pOVar4) {
          *(Object **)(this + 0x1f0) = pOVar1;
LAB_00104d67:
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            *(undefined8 *)(this + 0x1f0) = 0;
          }
          goto LAB_00104ae1;
        }
        this[0x268] = (WSLPeer)0x0;
        goto LAB_001049f3;
      }
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1e8) = 0;
LAB_00104d14:
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
LAB_00104ac1:
        pOVar5 = (Object *)*param_2;
        pOVar4 = *(Object **)(this + 0x1f0);
        if (pOVar5 != pOVar4) {
          *(Object **)(this + 0x1f0) = pOVar5;
          if (pOVar5 != (Object *)0x0) goto LAB_00104d67;
LAB_00104ae1:
          if (pOVar4 != (Object *)0x0) goto LAB_00104ae6;
          goto LAB_00104af6;
        }
LAB_00104afd:
        this[0x268] = (WSLPeer)0x0;
        goto LAB_001049e3;
      }
      pOVar4 = *(Object **)(this + 0x1f0);
      if (pOVar4 != (Object *)0x0) {
        *(undefined8 *)(this + 0x1f0) = 0;
LAB_00104ae6:
        cVar3 = RefCounted::unreference();
        if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
LAB_00104af6:
        pOVar4 = *(Object **)(this + 0x1f0);
        goto LAB_00104afd;
      }
      this[0x268] = (WSLPeer)0x0;
    }
    _err_print_error("accept_stream","modules/websocket/wsl_peer.cpp",0x90,
                     "Condition \"connection.is_null() || tcp.is_null()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
LAB_00104cf5:
  uVar6 = 0x1f;
LAB_00104a3b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::connect_to_url(String const&, Ref<TLSOptions>) */

int __thiscall WSLPeer::connect_to_url(WSLPeer *this,String *param_1,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  StreamPeerTCP *this_00;
  Object *pOVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  long lVar10;
  long in_FS_OFFSET;
  CowData<char32_t> *local_d0;
  int local_c4;
  int local_a4;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  String local_80 [8];
  Object *local_78;
  long local_70;
  Object *local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1de,
                     "Condition \"p_url.is_empty()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
  }
  else {
    if ((*param_3 == 0) || (*(int *)(*param_3 + 0x17c) != 2)) {
      if (1 < *(int *)(this + 0x1e0) - 2U) {
        _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1e0,
                         "Condition \"ready_state != STATE_CLOSED && ready_state != STATE_CLOSING\" is true. Returning: ERR_ALREADY_IN_USE"
                         ,0,0);
        local_c4 = 0x16;
        goto LAB_00105a54;
      }
      _clear(this);
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_a4 = 0;
      local_c4 = String::parse_url(param_1,(String *)&local_90,(int *)&local_a0,(String *)&local_a4,
                                   (String *)&local_98);
      if (local_c4 == 0) {
        if ((local_90 == 0) || (*(uint *)(local_90 + -8) < 2)) {
          local_50 = 5;
          local_58 = (Object *)0x10a1c1;
          String::parse_latin1((StrRange *)&local_90);
        }
        cVar3 = String::operator!=((String *)&local_90,"ws://");
        if ((cVar3 == '\0') ||
           (cVar3 = String::operator!=((String *)&local_90,"wss://"), cVar3 == '\0')) {
          this[0x268] = (WSLPeer)0x0;
          cVar3 = String::operator==((String *)&local_90,"wss://");
          if (cVar3 == '\0') {
            if (local_a4 == 0) {
              if (this[0x268] != (WSLPeer)0x0) goto LAB_00105c70;
              local_a4 = 0x50;
            }
          }
          else {
            this[0x268] = (WSLPeer)0x1;
            if (local_a4 == 0) {
LAB_00105c70:
              local_a4 = 0x1bb;
            }
          }
          if ((local_98 == 0) || (*(uint *)(local_98 + -8) < 2)) {
            local_50 = 1;
            local_58 = (Object *)&_LC135;
            String::parse_latin1((StrRange *)&local_98);
          }
          if ((this[0x268] == (WSLPeer)0x0) ||
             (cVar3 = StreamPeerTLS::is_available(), cVar3 != '\0')) {
            if (*(long *)(this + 0x200) != *(long *)param_1) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x200),(CowData *)param_1);
            }
            if (*(long *)(this + 0x208) != local_a0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x208),(CowData *)&local_a0);
            }
            pOVar9 = (Object *)*param_3;
            if (pOVar9 == (Object *)0x0) {
              local_60 = 0;
              local_68 = (Object *)0x0;
              TLSOptions::client(&local_58,&local_68,(CowData<char32_t> *)&local_60);
              pOVar9 = *(Object **)(this + 0x270);
              pOVar5 = pOVar9;
              if (local_58 == pOVar9) {
LAB_00105bf5:
                if (((pOVar5 != (Object *)0x0) &&
                    (cVar3 = RefCounted::unreference(), pOVar9 = local_58, cVar3 != '\0')) &&
                   (cVar3 = predelete_handler(local_58), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                }
              }
              else {
                *(Object **)(this + 0x270) = local_58;
                if (local_58 != (Object *)0x0) {
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                    *(undefined8 *)(this + 0x270) = 0;
                  }
                  pOVar5 = local_58;
                  if (pOVar9 != (Object *)0x0) goto LAB_00105bdd;
                  goto LAB_00105bf5;
                }
                if (pOVar9 != (Object *)0x0) {
LAB_00105bdd:
                  cVar3 = RefCounted::unreference();
                  pOVar5 = local_58;
                  if ((cVar3 != '\0') &&
                     (cVar3 = predelete_handler(pOVar9), pOVar5 = local_58, cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                    Memory::free_static(pOVar9,false);
                    pOVar5 = local_58;
                  }
                  goto LAB_00105bf5;
                }
              }
              if (((local_68 != (Object *)0x0) &&
                  (cVar3 = RefCounted::unreference(), pOVar9 = local_68, cVar3 != '\0')) &&
                 (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                Memory::free_static(pOVar9,false);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            }
            else {
              pOVar5 = *(Object **)(this + 0x270);
              if (pOVar9 != pOVar5) {
                *(Object **)(this + 0x270) = pOVar9;
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  *(undefined8 *)(this + 0x270) = 0;
                }
                if (((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
                    ) && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
              }
            }
            this_00 = (StreamPeerTCP *)operator_new(0x1b0,"");
            StreamPeerTCP::StreamPeerTCP(this_00);
            postinitialize_handler((Object *)this_00);
            cVar3 = RefCounted::init_ref();
            if (cVar3 == '\0') {
              pOVar9 = *(Object **)(this + 0x1e8);
              if (pOVar9 != (Object *)0x0) {
                *(undefined8 *)(this + 0x1e8) = 0;
                cVar3 = RefCounted::unreference();
                if (cVar3 != '\0') {
                  this_00 = (StreamPeerTCP *)0x0;
                  cVar3 = predelete_handler(pOVar9);
                  if (cVar3 != '\0') goto LAB_00105ca3;
                }
              }
            }
            else {
              pOVar9 = *(Object **)(this + 0x1e8);
              pOVar5 = pOVar9;
              if (this_00 != (StreamPeerTCP *)pOVar9) {
                *(StreamPeerTCP **)(this + 0x1e8) = this_00;
                cVar3 = RefCounted::reference();
                if (cVar3 == '\0') {
                  *(undefined8 *)(this + 0x1e8) = 0;
                }
                pOVar5 = (Object *)this_00;
                if (((pOVar9 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')
                    ) && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
LAB_00105ca3:
                  (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                  Memory::free_static(pOVar9,false);
                  pOVar5 = (Object *)this_00;
                  if (this_00 == (StreamPeerTCP *)0x0) goto LAB_00105243;
                }
              }
              cVar3 = RefCounted::unreference();
              if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
LAB_00105243:
            Resolver::start((Resolver *)(this + 0x1d0),(String *)&local_a0,local_a4);
            Resolver::try_next_candidate((Resolver *)(this + 0x1d0),(Ref *)(this + 0x1e8));
            iVar4 = StreamPeerTCP::get_status();
            if (((iVar4 == 1) || (iVar4 = StreamPeerTCP::get_status(), iVar4 == 2)) ||
               ((iVar4 = Array::size(), 0 < iVar4 || (*(int *)(this + 0x1d8) != -1)))) {
              pOVar9 = *(Object **)(this + 0x1f0);
              if (*(long *)(this + 0x1e8) == 0) {
                if (pOVar9 != (Object *)0x0) {
                  *(undefined8 *)(this + 0x1f0) = 0;
LAB_00105a9c:
                  cVar3 = RefCounted::unreference();
                  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar9), cVar3 != '\0')) {
                    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                    Memory::free_static(pOVar9,false);
                  }
                }
              }
              else {
                pOVar5 = (Object *)
                         __dynamic_cast(*(long *)(this + 0x1e8),&Object::typeinfo,
                                        &StreamPeer::typeinfo,0);
                if (pOVar9 != pOVar5) {
                  *(Object **)(this + 0x1f0) = pOVar5;
                  if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0'))
                  {
                    *(undefined8 *)(this + 0x1f0) = 0;
                  }
                  if (pOVar9 != (Object *)0x0) goto LAB_00105a9c;
                }
              }
              _generate_key((WSLPeer *)&local_58);
              pOVar9 = local_58;
              if (*(Object **)(this + 0x228) == local_58) {
                if (local_58 != (Object *)0x0) {
                  LOCK();
                  pOVar5 = local_58 + -0x10;
                  *(long *)pOVar5 = *(long *)pOVar5 + -1;
                  UNLOCK();
                  if (*(long *)pOVar5 == 0) {
                    local_58 = (Object *)0x0;
                    Memory::free_static(pOVar9 + -0x10,false);
                  }
                }
              }
              else {
                CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x228));
                *(Object **)(this + 0x228) = local_58;
              }
              local_60 = 0;
              local_58 = (Object *)0x10a3b7;
              local_50 = 0xb;
              String::parse_latin1((StrRange *)&local_60);
              operator+((char *)&local_58,(String *)&_LC139);
              String::operator+(local_80,(String *)&local_58);
              pOVar9 = local_58;
              if (local_58 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_58 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_58 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
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
              local_78 = (Object *)0x0;
              if (local_a4 == 0x50) {
                if (this[0x268] != (WSLPeer)0x0) goto LAB_00105476;
              }
              else if ((this[0x268] == (WSLPeer)0x0) || (local_a4 != 0x1bb)) {
LAB_00105476:
                itos((long)&local_60);
                operator+((char *)&local_58,(String *)&_LC77);
                if (local_78 != local_58) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                  local_78 = local_58;
                  local_58 = (Object *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              }
              local_d0 = (CowData<char32_t> *)&local_78;
              local_60 = 0;
              local_58 = (Object *)&_LC64;
              local_50 = 2;
              String::parse_latin1((StrRange *)&local_60);
              operator+((char *)&local_70,(String *)"Host: ");
              String::operator+((String *)&local_68,(String *)&local_70);
              String::operator+((String *)&local_58,(String *)&local_68);
              String::operator+=(local_80,(String *)&local_58);
              pOVar9 = local_58;
              if (local_58 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_58 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_58 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
              pOVar9 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_68 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
              lVar7 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar1 = (long *)(local_70 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar7 + -0x10),false);
                }
              }
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
              String::operator+=(local_80,"Upgrade: websocket\r\n");
              String::operator+=(local_80,"Connection: Upgrade\r\n");
              local_60 = 0;
              local_58 = (Object *)&_LC64;
              local_50 = 2;
              String::parse_latin1((StrRange *)&local_60);
              operator+((char *)&local_68,(String *)"Sec-WebSocket-Key: ");
              String::operator+((String *)&local_58,(String *)&local_68);
              String::operator+=(local_80,(String *)&local_58);
              pOVar9 = local_58;
              if (local_58 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_58 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_58 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
              pOVar9 = local_68;
              if (local_68 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_68 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_68 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
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
              String::operator+=(local_80,"Sec-WebSocket-Version: 13\r\n");
              if ((*(long *)(this + 0x1a0) != 0) && (0 < *(long *)(*(long *)(this + 0x1a0) + -8))) {
                String::operator+=(local_80,"Sec-WebSocket-Protocol: ");
                lVar7 = *(long *)(this + 0x1a0);
                for (lVar10 = 0; (lVar7 != 0 && (lVar10 < *(long *)(lVar7 + -8)));
                    lVar10 = lVar10 + 1) {
                  if (lVar10 != 0) {
                    String::operator+=(local_80,",");
                    lVar7 = *(long *)(this + 0x1a0);
                  }
                  if (lVar7 == 0) goto LAB_00105860;
                  lVar8 = *(long *)(lVar7 + -8);
                  if (lVar8 <= lVar10) goto LAB_00105863;
                  String::operator+=(local_80,(String *)(lVar7 + lVar10 * 8));
                  lVar7 = *(long *)(this + 0x1a0);
                }
                String::operator+=(local_80,"\r\n");
              }
              lVar7 = *(long *)(this + 0x1b0);
              for (lVar10 = 0; (lVar7 != 0 && (lVar10 < *(long *)(lVar7 + -8))); lVar10 = lVar10 + 1
                  ) {
                local_60 = 0;
                local_58 = (Object *)&_LC64;
                local_50 = 2;
                String::parse_latin1((StrRange *)&local_60);
                lVar7 = *(long *)(this + 0x1b0);
                if (lVar7 == 0) {
LAB_00105860:
                  lVar8 = 0;
LAB_00105863:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar8,"p_index","size()"
                             ,"",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                lVar8 = *(long *)(lVar7 + -8);
                if (lVar8 <= lVar10) goto LAB_00105863;
                String::operator+((String *)&local_58,(String *)(lVar7 + lVar10 * 8));
                String::operator+=(local_80,(String *)&local_58);
                pOVar9 = local_58;
                if (local_58 != (Object *)0x0) {
                  LOCK();
                  pOVar5 = local_58 + -0x10;
                  *(long *)pOVar5 = *(long *)pOVar5 + -1;
                  UNLOCK();
                  if (*(long *)pOVar5 == 0) {
                    local_58 = (Object *)0x0;
                    Memory::free_static(pOVar9 + -0x10,false);
                  }
                }
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
                lVar7 = *(long *)(this + 0x1b0);
              }
              String::operator+=(local_80,"\r\n");
              String::utf8();
              if (local_58 == (Object *)0x0) {
                iVar4 = 0;
              }
              else {
                iVar4 = (int)*(undefined8 *)(local_58 + -8) + -1 +
                        (uint)((int)*(undefined8 *)(local_58 + -8) == 0);
              }
              plVar1 = *(long **)(this + 0x218);
              pcVar2 = *(code **)(*plVar1 + 0x150);
              uVar6 = CharString::get_data();
              (*pcVar2)(plVar1,uVar6,iVar4);
              StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
              pOVar9 = local_58;
              *(undefined4 *)(this + 0x1e0) = 0;
              this[0x1e4] = (WSLPeer)0x0;
              if (local_58 != (Object *)0x0) {
                LOCK();
                pOVar5 = local_58 + -0x10;
                *(long *)pOVar5 = *(long *)pOVar5 + -1;
                UNLOCK();
                if (*(long *)pOVar5 == 0) {
                  local_58 = (Object *)0x0;
                  Memory::free_static(pOVar9 + -0x10,false);
                }
              }
              CowData<char32_t>::_unref(local_d0);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
            }
            else {
              _clear(this);
              local_c4 = 1;
            }
          }
          else {
            _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1fb,
                             "Condition \"use_tls && !StreamPeerTLS::is_available()\" is true. Returning: ERR_UNAVAILABLE"
                             ,"WSS is not available in this build.",0,0);
            local_c4 = 2;
          }
        }
        else {
          local_60 = 0;
          if (local_90 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_90);
          }
          local_68 = (Object *)0x0;
          String::parse_latin1
                    ((String *)&local_68,
                     "Invalid protocol: \"%s\" (must be either \"ws://\" or \"wss://\").");
          vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_68,
                          (CowData<char32_t> *)&local_60);
          _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1ee,
                           "Condition \"scheme != \"ws://\" && scheme != \"wss://\"\" is true. Returning: ERR_INVALID_PARAMETER"
                           ,(CowData<char32_t> *)&local_58,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          local_c4 = 0x1f;
        }
      }
      else {
        operator+((char *)&local_58,(String *)_LC131);
        _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1ea,
                         "Condition \"err != OK\" is true. Returning: err",
                         (CowData<char32_t> *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      goto LAB_00105a54;
    }
    _err_print_error("connect_to_url","modules/websocket/wsl_peer.cpp",0x1df,
                     "Condition \"p_options.is_valid() && p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  local_c4 = 0x1f;
LAB_00105a54:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::WSLPeer() */

void __thiscall WSLPeer::WSLPeer(WSLPeer *this)

{
  long *plVar1;
  CowData<unsigned_char> *this_00;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  RefCounted *this_01;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  Object *pOVar10;
  
  this_00 = (CowData<unsigned_char> *)(this + 0x2b0);
  WebSocketPeer::WebSocketPeer((WebSocketPeer *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010d898;
  Array::Array((Array *)(this + 0x1d0));
  uVar3 = _LC146;
  *(undefined4 *)(this + 0x1e0) = 3;
  this[0x1e4] = (WSLPeer)0x0;
  *(undefined8 *)(this + 0x1d8) = uVar3;
  *(undefined8 *)(this + 0x208) = 0;
  this[0x210] = (WSLPeer)0x1;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x230) = 0xffffffff;
  *(undefined8 *)(this + 0x238) = 0;
  this[0x240] = (WSLPeer)0x0;
  *(undefined8 *)(this + 0x248) = 0;
  this[0x250] = (WSLPeer)0x0;
  *(undefined8 *)(this + 600) = 0;
  this[0x260] = (WSLPeer)0x0;
  this[0x268] = (WSLPeer)0x1;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined1 (*) [16])(this + 0x1e8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  CowData<unsigned_char>::resize<false>(this_00,1);
  if (*(int *)(this + 700) < *(int *)(this + 0x2b8)) {
    lVar7 = 0;
    if (0 < *(int *)(this + 700)) {
      do {
        lVar4 = *(long *)(this + 0x2b0);
        if (lVar4 == 0) goto LAB_001062ac;
        lVar8 = *(long *)(lVar4 + -8);
        if (lVar8 <= lVar7) goto LAB_001062af;
        uVar2 = *(undefined1 *)(lVar4 + lVar7);
        lVar7 = lVar7 + 1;
        CowData<unsigned_char>::_copy_on_write(this_00);
        **(undefined1 **)(this + 0x2b0) = uVar2;
      } while ((int)lVar7 < *(int *)(this + 700));
    }
  }
  else {
    *(undefined4 *)(this + 0x2b8) = 0;
  }
  *(undefined8 *)(this + 700) = 0;
  if (*(long *)(this + 0x2b0) == 0) {
    CowData<unsigned_char>::resize<false>(this_00,1);
LAB_00106310:
    if (*(int *)(this + 0x2b8) <= *(int *)(this + 700)) goto LAB_0010618c;
    lVar7 = 0;
    if (0 < *(int *)(this + 700)) {
      do {
        lVar4 = *(long *)(this + 0x2b0);
        if (lVar4 == 0) {
LAB_001062ac:
          lVar8 = 0;
LAB_001062af:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar8 = *(long *)(lVar4 + -8);
        if (lVar8 <= lVar7) goto LAB_001062af;
        uVar2 = *(undefined1 *)(lVar4 + lVar7);
        lVar7 = lVar7 + 1;
        CowData<unsigned_char>::_copy_on_write(this_00);
        **(undefined1 **)(this + 0x2b0) = uVar2;
      } while ((int)lVar7 < *(int *)(this + 700));
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(this + 0x2b0) + -8);
    CowData<unsigned_char>::resize<false>(this_00,1);
    if ((int)uVar3 < 1) goto LAB_00106310;
LAB_0010618c:
    *(undefined4 *)(this + 0x2b8) = 0;
  }
  lVar7 = *(long *)(this + 0x290);
  *(undefined8 *)(this + 700) = 0;
  if ((lVar7 != 0) && (*(long *)(lVar7 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar7 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar7 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x290) = 0;
    }
  }
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  this_01 = (RefCounted *)operator_new(0x198,"");
  RefCounted::RefCounted(this_01);
  this_01[0x17c] = (RefCounted)0x0;
  *(code **)this_01 = Object::_postinitialize;
  *(undefined8 *)(this_01 + 0x188) = 0;
  *(undefined4 *)(this_01 + 400) = 0;
  postinitialize_handler((Object *)this_01);
  cVar6 = RefCounted::init_ref();
  if (cVar6 == '\0') {
    pOVar10 = *(Object **)(this + 0x218);
    if (pOVar10 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 0x218) = 0;
    cVar6 = RefCounted::unreference();
    if (cVar6 == '\0') {
      return;
    }
    this_01 = (RefCounted *)0x0;
    cVar6 = predelete_handler(pOVar10);
    if (cVar6 == '\0') {
      return;
    }
  }
  else {
    pOVar10 = *(Object **)(this + 0x218);
    pOVar9 = pOVar10;
    if (this_01 == (RefCounted *)pOVar10) goto LAB_001063ba;
    *(RefCounted **)(this + 0x218) = this_01;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      *(undefined8 *)(this + 0x218) = 0;
    }
    pOVar9 = (Object *)this_01;
    if (((pOVar10 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0')) ||
       (cVar6 = predelete_handler(pOVar10), cVar6 == '\0')) goto LAB_001063ba;
  }
  (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
  Memory::free_static(pOVar10,false);
  pOVar9 = (Object *)this_01;
  if (this_01 == (RefCounted *)0x0) {
    return;
  }
LAB_001063ba:
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar9), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
    return;
  }
  return;
}



/* WSLPeer::close(int, String) */

void WSLPeer::close(long param_1,uint param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  Object *pOVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  long local_38;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
LAB_00106510:
    *(undefined4 *)(param_1 + 0x1e0) = 3;
    if ((*(long *)(param_1 + 0x1f0) != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
      pOVar4 = *(Object **)(param_1 + 0x1f0);
      cVar9 = predelete_handler(pOVar4);
      if (cVar9 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    if (*(long *)(param_1 + 0x1e8) != 0) {
      StreamPeerTCP::disconnect_from_host();
      if ((*(long *)(param_1 + 0x1e8) != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) {
        pOVar4 = *(Object **)(param_1 + 0x1e8);
        cVar9 = predelete_handler(pOVar4);
        if (cVar9 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      *(undefined8 *)(param_1 + 0x1e8) = 0;
    }
LAB_001065a0:
    iVar10 = *(int *)(param_1 + 0x1e0);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x1e0);
    if (iVar10 != 1) {
      bVar8 = iVar10 == 0 || iVar10 == 3;
LAB_001064bd:
      if (!bVar8) goto LAB_001064c1;
      goto LAB_00106510;
    }
    iVar10 = wslay_event_get_close_sent(*(undefined8 *)(param_1 + 0x1f8));
    if (iVar10 != 0) {
      bVar8 = *(int *)(param_1 + 0x1e0) == 3 || *(int *)(param_1 + 0x1e0) == 0;
      goto LAB_001064bd;
    }
    String::utf8();
    if (local_38 == 0) {
      lVar11 = 0;
    }
    else {
      iVar10 = (int)*(undefined8 *)(local_38 + -8);
      lVar11 = (long)(iVar10 + -1);
      if (iVar10 == 0) {
        lVar11 = 0;
      }
    }
    wslay_event_queue_close(*(undefined8 *)(param_1 + 0x1f8),param_2 & 0xffff,local_38,lVar11);
    wslay_event_send(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined4 *)(param_1 + 0x1e0) = 2;
    if (local_38 == 0) goto LAB_001064c1;
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001065a0;
    Memory::free_static((void *)(local_38 + -0x10),false);
    iVar10 = *(int *)(param_1 + 0x1e0);
  }
  if (iVar10 != 3) goto LAB_001064c1;
  *(undefined1 *)(param_1 + 0x250) = 0;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(param_1 + 0x2b0),1);
LAB_00106708:
    if (*(int *)(param_1 + 0x2b8) <= *(int *)(param_1 + 700)) goto LAB_001065e6;
    lVar11 = 0;
    if (0 < *(int *)(param_1 + 700)) {
      do {
        lVar6 = *(long *)(param_1 + 0x2b0);
        if (lVar6 == 0) {
          lVar12 = 0;
LAB_00106767:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        lVar12 = *(long *)(lVar6 + -8);
        if (lVar12 <= lVar11) goto LAB_00106767;
        uVar2 = *(undefined1 *)(lVar6 + lVar11);
        lVar11 = lVar11 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(param_1 + 0x2b0));
        **(undefined1 **)(param_1 + 0x2b0) = uVar2;
      } while ((int)lVar11 < *(int *)(param_1 + 700));
    }
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x2b0) + -8);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(param_1 + 0x2b0),1);
    if ((int)uVar5 < 1) goto LAB_00106708;
LAB_001065e6:
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  lVar11 = *(long *)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 700) = 0;
  if ((lVar11 != 0) && (*(long *)(lVar11 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar11 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar11 = *(long *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x290) = 0;
      Memory::free_static((void *)(lVar11 + -0x10),false);
    }
    else {
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(param_1 + 0x280),0);
  *(undefined1 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
LAB_001064c1:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WSLPeer::~WSLPeer() */

void __thiscall WSLPeer::~WSLPeer(WSLPeer *this)

{
  long *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  Object *pOVar5;
  code *pcVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = &_LC15;
  local_40 = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010d898;
  String::parse_latin1((StrRange *)&local_50);
  close(this,0xffffffff,(StrRange *)&local_50);
  lVar8 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x2b0) == 0) {
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x2b0),1);
LAB_00106a98:
    if (*(int *)(this + 0x2b8) <= *(int *)(this + 700)) goto LAB_001068d1;
    if (0 < *(int *)(this + 700)) {
      lVar8 = 0;
      do {
        lVar4 = *(long *)(this + 0x2b0);
        if (lVar4 == 0) {
          lVar9 = 0;
LAB_00106aff:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar9,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar9 = *(long *)(lVar4 + -8);
        if (lVar9 <= lVar8) goto LAB_00106aff;
        uVar2 = *(undefined1 *)(lVar4 + lVar8);
        lVar8 = lVar8 + 1;
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x2b0));
        **(undefined1 **)(this + 0x2b0) = uVar2;
      } while ((int)lVar8 < *(int *)(this + 700));
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(this + 0x2b0) + -8);
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x2b0),1);
    if ((int)uVar3 < 1) goto LAB_00106a98;
LAB_001068d1:
    *(undefined4 *)(this + 0x2b8) = 0;
  }
  lVar8 = *(long *)(this + 0x290);
  *(undefined8 *)(this + 700) = 0;
  if ((lVar8 != 0) && (*(long *)(lVar8 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x290) = 0;
    }
  }
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  if (*(long *)(this + 0x2b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x2b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x2b0);
      *(undefined8 *)(this + 0x2b0) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x290) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x290) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x290);
      *(undefined8 *)(this + 0x290) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x280) == 0) {
LAB_0010696d:
    lVar8 = *(long *)(this + 0x270);
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x280) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_0010696d;
    lVar8 = *(long *)(this + 0x280);
    *(undefined8 *)(this + 0x280) = 0;
    Memory::free_static((void *)(lVar8 + -0x10),false);
    lVar8 = *(long *)(this + 0x270);
  }
  if ((lVar8 != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
    pOVar5 = *(Object **)(this + 0x270);
    cVar7 = predelete_handler(pOVar5);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (*(long *)(this + 0x238) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x238) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x238);
      *(undefined8 *)(this + 0x238) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x228) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x228) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x228);
      *(undefined8 *)(this + 0x228) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x220) == 0) {
LAB_001069ce:
    lVar8 = *(long *)(this + 0x218);
  }
  else {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x220) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001069ce;
    lVar8 = *(long *)(this + 0x220);
    *(undefined8 *)(this + 0x220) = 0;
    Memory::free_static((void *)(lVar8 + -0x10),false);
    lVar8 = *(long *)(this + 0x218);
  }
  if ((lVar8 != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
    pOVar5 = *(Object **)(this + 0x218);
    cVar7 = predelete_handler(pOVar5);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if (*(long *)(this + 0x208) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x208) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x208);
      *(undefined8 *)(this + 0x208) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x200) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x200) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar8 = *(long *)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
      lVar8 = *(long *)(this + 0x1f0);
      goto joined_r0x00106a21;
    }
  }
  lVar8 = *(long *)(this + 0x1f0);
joined_r0x00106a21:
  if ((lVar8 != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
    pOVar5 = *(Object **)(this + 0x1f0);
    cVar7 = predelete_handler(pOVar5);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((*(long *)(this + 0x1e8) != 0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) {
    pOVar5 = *(Object **)(this + 0x1e8);
    cVar7 = predelete_handler(pOVar5);
    if (cVar7 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  Array::~Array((Array *)(this + 0x1d0));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    WebSocketPeer::~WebSocketPeer((WebSocketPeer *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::~WSLPeer() */

void __thiscall WSLPeer::~WSLPeer(WSLPeer *this)

{
  ~WSLPeer(this);
  operator_delete(this,0x2c8);
  return;
}



/* Error CowData<PacketBuffer<unsigned char>::_Packet>::resize<false>(long) [clone .isra.0] */

void __thiscall
CowData<PacketBuffer<unsigned_char>::_Packet>::resize<false>
          (CowData<PacketBuffer<unsigned_char>::_Packet> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<PacketBuffer<unsigned_char>::_Packet> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<PacketBuffer<unsigned_char>::_Packet> *pCVar10;
  CowData<PacketBuffer<unsigned_char>::_Packet> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<PacketBuffer<unsigned_char>::_Packet> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<PacketBuffer<unsigned_char>::_Packet> *)(lVar12 * 8);
    if (pCVar4 != (CowData<PacketBuffer<unsigned_char>::_Packet> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<PacketBuffer<unsigned_char>::_Packet> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 8 != 0) {
    uVar5 = param_1 * 8 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<PacketBuffer<unsigned_char>::_Packet> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<PacketBuffer<unsigned_char>::_Packet> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010a676();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00106f21;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00107012;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00106f21:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00107012:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WSLPeer::_do_client_handshake() */

void __thiscall WSLPeer::_do_client_handshake(WSLPeer *this)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  Object *pOVar10;
  Object *pOVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 local_74;
  ulong local_70;
  Object *local_68;
  long local_60;
  Object *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x1e8) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar13 = 0x139;
      pcVar12 = "Condition \"tcp.is_null()\" is true.";
      goto LAB_0010744e;
    }
    goto LAB_00107b1b;
  }
  iVar6 = Array::size();
  if (((0 < iVar6) || (*(int *)(this + 0x1d8) != -1)) ||
     (iVar6 = StreamPeerTCP::get_status(), iVar6 == 1)) {
    Resolver::try_next_candidate((Resolver *)(this + 0x1d0),(Ref *)(this + 0x1e8));
    iVar6 = Array::size();
    if ((0 < iVar6) || (*(int *)(this + 0x1d8) != -1)) goto LAB_001070b5;
  }
  StreamPeerTCP::poll();
  iVar6 = StreamPeerTCP::get_status();
  if (iVar6 != 1) {
    iVar6 = StreamPeerTCP::get_status();
    if (iVar6 == 2) {
      if (this[0x268] != (WSLPeer)0x0) {
        if (*(long *)(this + 0x1e8) == 0) {
          pOVar10 = *(Object **)(this + 0x1f0);
          pOVar9 = (Object *)0x0;
        }
        else {
          pOVar9 = (Object *)
                   __dynamic_cast(*(long *)(this + 0x1e8),&Object::typeinfo,&StreamPeer::typeinfo,0)
          ;
          if ((pOVar9 == (Object *)0x0) || (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
            pOVar10 = *(Object **)(this + 0x1f0);
            pOVar9 = (Object *)0x0;
          }
          else {
            pOVar10 = *(Object **)(this + 0x1f0);
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
              Memory::free_static(pOVar9,false);
            }
          }
        }
        if (pOVar9 == pOVar10) {
          pOVar10 = (Object *)StreamPeerTLS::create(true);
          if ((pOVar10 != (Object *)0x0) && (cVar5 = RefCounted::init_ref(), cVar5 != '\0')) {
            cVar5 = RefCounted::reference();
            if (cVar5 != '\0') {
              cVar5 = RefCounted::unreference();
              if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                Memory::free_static(pOVar10,false);
              }
              pcVar2 = *(code **)(*(long *)pOVar10 + 0x188);
              local_58 = (Object *)0x0;
              if ((*(Object **)(this + 0x270) != (Object *)0x0) &&
                 (local_58 = *(Object **)(this + 0x270), cVar5 = RefCounted::reference(),
                 cVar5 == '\0')) {
                local_58 = (Object *)0x0;
              }
              local_68 = (Object *)0x0;
              if (((*(long *)(this + 0x1e8) != 0) &&
                  (pOVar9 = (Object *)
                            __dynamic_cast(*(long *)(this + 0x1e8),&Object::typeinfo,
                                           &StreamPeer::typeinfo,0), pOVar9 != (Object *)0x0)) &&
                 (local_68 = pOVar9, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_68 = (Object *)0x0;
              }
              iVar6 = (*pcVar2)(pOVar10,&local_68,this + 0x208,(String *)&local_58);
              if (((local_68 != (Object *)0x0) &&
                  (cVar5 = RefCounted::unreference(), pOVar9 = local_68, cVar5 != '\0')) &&
                 (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                Memory::free_static(pOVar9,false);
              }
              if (((local_58 != (Object *)0x0) &&
                  (cVar5 = RefCounted::unreference(), pOVar9 = local_58, cVar5 != '\0')) &&
                 (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                Memory::free_static(pOVar9,false);
              }
              if (iVar6 == 0) {
                pOVar11 = (Object *)
                          __dynamic_cast(pOVar10,&Object::typeinfo,&StreamPeer::typeinfo,0);
                pOVar9 = *(Object **)(this + 0x1f0);
                if (pOVar9 != pOVar11) {
                  *(Object **)(this + 0x1f0) = pOVar11;
                  if ((pOVar11 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')
                     ) {
                    *(undefined8 *)(this + 0x1f0) = 0;
                  }
                  if (((pOVar9 != (Object *)0x0) &&
                      (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
                     (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
                    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
                    Memory::free_static(pOVar9,false);
                  }
                }
                goto LAB_001075c3;
              }
              pcVar2 = *(code **)(*(long *)this + 0x1b0);
              local_58 = (Object *)0x0;
              String::parse_latin1((String *)&local_58,"");
              (*pcVar2)(this,0xffffffff,(String *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              goto LAB_001077a0;
            }
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar13 = 0x150;
            pcVar12 = "Condition \"tls.is_null()\" is true.";
            goto LAB_0010744e;
          }
          goto LAB_00107b1b;
        }
        if (((*(long *)(this + 0x1f0) != 0) &&
            (pOVar9 = (Object *)
                      __dynamic_cast(*(long *)(this + 0x1f0),&Object::typeinfo,
                                     &StreamPeerTLS::typeinfo,0), pOVar9 != (Object *)0x0)) &&
           (cVar5 = RefCounted::reference(), cVar5 != '\0')) {
          cVar5 = RefCounted::reference();
          if (cVar5 != '\0') {
            cVar5 = RefCounted::unreference();
            pOVar10 = pOVar9;
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0'))
            goto LAB_00107593;
LAB_001075b6:
            (**(code **)(*(long *)pOVar10 + 0x178))(pOVar10);
LAB_001075c3:
            iVar6 = (**(code **)(*(long *)pOVar10 + 400))(pOVar10);
            if (iVar6 != 1) {
              iVar6 = (**(code **)(*(long *)pOVar10 + 400))(pOVar10);
              if (iVar6 == 2) {
                cVar5 = RefCounted::unreference();
                if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
                  Memory::free_static(pOVar10,false);
                }
                goto LAB_00107139;
              }
              pcVar2 = *(code **)(*(long *)this + 0x1b0);
              local_68 = (Object *)0x0;
              local_58 = (Object *)&_LC15;
              local_50 = 0;
              String::parse_latin1((StrRange *)&local_68);
              (*pcVar2)(this,0xffffffff,(StrRange *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            }
LAB_001077a0:
            cVar5 = RefCounted::unreference();
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar10), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                Memory::free_static(pOVar10,false);
                return;
              }
              goto LAB_00107b1b;
            }
            goto LAB_001070b5;
          }
          cVar5 = RefCounted::unreference();
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
            pOVar10 = (Object *)0x0;
LAB_00107593:
            (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
            Memory::free_static(pOVar9,false);
            if (pOVar10 != (Object *)0x0) goto LAB_001075b6;
          }
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar13 = 0x158;
          pcVar12 = "Condition \"tls.is_null()\" is true.";
LAB_0010744e:
          _err_print_error("_do_client_handshake","modules/websocket/wsl_peer.cpp",uVar13,pcVar12,0,
                           0);
          return;
        }
        goto LAB_00107b1b;
      }
LAB_00107139:
      plVar15 = *(long **)(this + 0x218);
      if (this[0x210] == (WSLPeer)0x0) {
        local_70 = local_70 & 0xffffffff00000000;
        while( true ) {
          iVar6 = (**(code **)(*plVar15 + 0x170))();
          iVar7 = StreamPeerBuffer::get_position();
          lVar14 = (long)iVar7;
          if (iVar6 == 0) break;
          iVar6 = (**(code **)(**(long **)(this + 0x1f0) + 0x168))
                            (*(long **)(this + 0x1f0),&local_74,1);
          if (iVar6 != 0) goto LAB_001073d0;
          if ((int)local_70 != 1) goto LAB_001070b5;
          StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x218));
          StreamPeerBuffer::get_data_array();
          lVar4 = local_50;
          if (local_50 != 0) {
            LOCK();
            plVar15 = (long *)(local_50 + -0x10);
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              local_50 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          if ((((3 < iVar7) && (*(char *)(lVar4 + lVar14) == '\n')) &&
              (*(char *)(lVar4 + -1 + lVar14) == '\r')) &&
             ((*(char *)(lVar4 + -2 + lVar14) == '\n' && (*(char *)(lVar4 + -3 + lVar14) == '\r'))))
          {
            cVar5 = _verify_server_response(this);
            if (cVar5 == '\0') {
              pcVar2 = *(code **)(*(long *)this + 0x1b0);
              local_58 = (Object *)0x0;
              String::parse_latin1((String *)&local_58,"");
              uVar13 = 0xffffffff;
              (*pcVar2)(this,0xffffffff,(String *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              _err_print_error("_do_client_handshake","modules/websocket/wsl_peer.cpp",0x194,
                               "Method/function failed.","Invalid response headers.",0,0,uVar13);
              goto LAB_001070b5;
            }
            wslay_event_context_client_init(this + 0x1f8,_wsl_callbacks,this);
            wslay_event_config_set_no_buffering(*(undefined8 *)(this + 0x1f8),1);
            wslay_event_config_set_max_recv_msg_length
                      (*(undefined8 *)(this + 0x1f8),(long)*(int *)(this + 0x1bc));
            iVar6 = *(int *)(this + 0x1c0);
            iVar7 = 0x1e;
            uVar3 = *(uint *)(this + 0x1bc) & 0x40000000;
            goto joined_r0x001072b8;
          }
          plVar15 = *(long **)(this + 0x218);
        }
        pcVar2 = *(code **)(*(long *)this + 0x1b0);
        local_68 = (Object *)0x0;
        local_58 = (Object *)&_LC15;
        local_50 = 0;
        String::parse_latin1((StrRange *)&local_68);
        (*pcVar2)(this,0xffffffff,(StrRange *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        _err_print_error("_do_client_handshake","modules/websocket/wsl_peer.cpp",0x17e,
                         "Method/function failed.","Response headers too big.",0,0);
      }
      else {
        uVar8 = (**(code **)(*plVar15 + 0x170))();
        iVar6 = StreamPeerBuffer::get_position();
        StreamPeerBuffer::get_data_array();
        local_74 = 0;
        iVar6 = (**(code **)(**(long **)(this + 0x1f0) + 0x158))
                          (*(long **)(this + 0x1f0),iVar6 + local_60,uVar8,&local_74);
        if (iVar6 == 0) {
          StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
          iVar6 = (**(code **)(**(long **)(this + 0x218) + 0x170))();
          if (iVar6 == 0) {
            this[0x210] = (WSLPeer)0x0;
            StreamPeerBuffer::clear();
            StreamPeerBuffer::resize((int)*(undefined8 *)(this + 0x218));
            StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
          }
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        }
        else {
          pcVar2 = *(code **)(*(long *)this + 0x1b0);
          local_70 = 0;
          local_58 = (Object *)&_LC15;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_70);
          (*pcVar2)(this,0xffffffff,(StrRange *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_60);
        }
      }
    }
    else {
LAB_001073d0:
      pcVar2 = *(code **)(*(long *)this + 0x1b0);
      local_68 = (Object *)0x0;
      local_58 = (Object *)&_LC15;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_68);
      (*pcVar2)(this,0xffffffff,(StrRange *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
  }
  goto LAB_001070b5;
joined_r0x001072b8:
  if (uVar3 != 0) goto LAB_001072cc;
  bVar16 = iVar7 == 0;
  iVar7 = iVar7 + -1;
  iVar1 = 0;
  if (bVar16) goto LAB_001072d0;
  uVar3 = 1 << ((byte)iVar7 & 0x1f) & *(uint *)(this + 0x1bc);
  goto joined_r0x001072b8;
LAB_001072cc:
  iVar1 = iVar7 + 1;
LAB_001072d0:
  RingBuffer<unsigned_char>::resize((RingBuffer<unsigned_char> *)(this + 0x2a8),iVar1);
  CowData<PacketBuffer<unsigned_char>::_Packet>::resize<false>
            ((CowData<PacketBuffer<unsigned_char>::_Packet> *)(this + 0x290),(long)iVar6);
  *(undefined4 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)(this + 0x280),(long)*(int *)(this + 0x1bc));
  *(undefined4 *)(this + 0x1e0) = 1;
LAB_001070b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107b1b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::_do_server_handshake() */

int __thiscall WSLPeer::_do_server_handshake(WSLPeer *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  Object *pOVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  undefined1 local_9d;
  int local_9c;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x268] != (WSLPeer)0x0) {
    if (((*(long *)(this + 0x1f0) == 0) ||
        (pOVar9 = (Object *)
                  __dynamic_cast(*(long *)(this + 0x1f0),&Object::typeinfo,&StreamPeerTLS::typeinfo,
                                 0), pOVar9 == (Object *)0x0)) ||
       (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
      iVar5 = 0x2f;
      _err_print_error("_do_server_handshake","modules/websocket/wsl_peer.cpp",0xdc,
                       "Method/function failed. Returning: ERR_BUG",
                       "Couldn\'t get StreamPeerTLS for WebSocket handshake.",0,0);
      goto LAB_00107fd0;
    }
    (**(code **)(*(long *)pOVar9 + 0x178))(pOVar9);
    iVar5 = (**(code **)(*(long *)pOVar9 + 400))(pOVar9);
    if (iVar5 == 1) {
      iVar5 = 0;
    }
    else {
      iVar5 = (**(code **)(*(long *)pOVar9 + 400))(pOVar9);
      if (iVar5 == 2) {
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
          Memory::free_static(pOVar9,false);
        }
        goto LAB_00107bc5;
      }
      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*(long *)pOVar9 + 400))(pOVar9);
        local_80 = 0;
        local_60 = 0x4f;
        local_68 = "WebSocket SSL connection error during handshake (StreamPeerTLS status code %d)."
        ;
        String::parse_latin1((StrRange *)&local_80);
        vformat<StreamPeerTLS::Status>((CowData<char32_t> *)&local_78,(StrRange *)&local_80,uVar7);
        Variant::Variant((Variant *)local_58,(String *)&local_78);
        stringify_variants((Variant *)&local_68);
        __print_line((String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      }
      pcVar2 = *(code **)(*(long *)this + 0x1b0);
      local_78 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_78);
      (*pcVar2)(this,0xffffffff,(StrRange *)&local_78);
      iVar5 = 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    cVar4 = RefCounted::unreference();
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar9), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
    goto LAB_00107fd0;
  }
LAB_00107bc5:
  if (this[0x210] == (WSLPeer)0x0) {
LAB_00107fb0:
    iVar6 = (**(code **)(**(long **)(this + 0x218) + 0x170))();
    if (iVar6 != 0) {
      StreamPeerBuffer::get_data_array();
      iVar5 = StreamPeerBuffer::get_position();
      local_90 = local_90 & 0xffffffff00000000;
      iVar5 = (**(code **)(**(long **)(this + 0x1f0) + 0x158))
                        (*(long **)(this + 0x1f0),iVar5 + local_70,iVar6,&local_90);
      if (iVar5 != 0) {
        cVar4 = is_print_verbose_enabled();
        if (cVar4 != '\0') {
          local_88 = 0;
          String::parse_latin1
                    ((String *)&local_88,
                     "WebSocket error while putting partial data (StreamPeer error code %d).");
          vformat<Error>((StrRange *)&local_80,(String *)&local_88,iVar5);
          Variant::Variant((Variant *)local_58,(String *)&local_80);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          pcVar3 = local_68;
          if (local_68 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (undefined *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        }
        pcVar2 = *(code **)(*(long *)this + 0x1b0);
        local_80 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        (*pcVar2)(this,0xffffffff,(StrRange *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
        goto LAB_00107fd0;
      }
      StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
      if ((int)local_90 == iVar6) {
        if (*(int *)(this + 0x1d8) != -1) {
          iVar5 = IP::get_singleton();
          IP::erase_resolve_item(iVar5);
          *(undefined4 *)(this + 0x1d8) = 0xffffffff;
        }
        *(undefined4 *)(this + 0x1dc) = 0;
        wslay_event_context_server_init(this + 0x1f8,_wsl_callbacks,this);
        wslay_event_config_set_no_buffering(*(undefined8 *)(this + 0x1f8),1);
        wslay_event_config_set_max_recv_msg_length
                  (*(undefined8 *)(this + 0x1f8),(long)*(int *)(this + 0x1bc));
        iVar5 = *(int *)(this + 0x1c0);
        if ((*(uint *)(this + 0x1bc) & 0x40000000) == 0) {
          iVar10 = 0x1e;
          do {
            iVar11 = iVar10 + -1;
            iVar6 = 0;
            if (iVar10 == 0) break;
            iVar6 = iVar10;
            iVar10 = iVar11;
          } while ((1 << ((byte)iVar11 & 0x1f) & *(uint *)(this + 0x1bc)) == 0);
        }
        else {
          iVar6 = 0x1f;
        }
        RingBuffer<unsigned_char>::resize((RingBuffer<unsigned_char> *)(this + 0x2a8),iVar6);
        CowData<PacketBuffer<unsigned_char>::_Packet>::resize<false>
                  ((CowData<PacketBuffer<unsigned_char>::_Packet> *)(this + 0x290),(long)iVar5);
        *(undefined4 *)(this + 0x2a0) = 0;
        *(undefined8 *)(this + 0x298) = 0;
        CowData<unsigned_char>::resize<false>
                  ((CowData<unsigned_char> *)(this + 0x280),(long)*(int *)(this + 0x1bc));
        *(undefined4 *)(this + 0x1e0) = 1;
      }
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_70);
    }
  }
  else {
    local_9c = 0;
    do {
      iVar5 = (**(code **)(**(long **)(this + 0x218) + 0x170))();
      if (iVar5 < 1) {
        iVar5 = 6;
        _err_print_error("_do_server_handshake","modules/websocket/wsl_peer.cpp",0xed,
                         "Condition \"handshake_buffer->get_available_bytes() < 1\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,"WebSocket response headers are too big.",0,0);
        goto LAB_00107fd0;
      }
      iVar6 = StreamPeerBuffer::get_position();
      lVar12 = (long)iVar6;
      iVar5 = (**(code **)(**(long **)(this + 0x1f0) + 0x168))(*(long **)(this + 0x1f0),&local_9d,1)
      ;
      if (iVar5 != 0) {
        cVar4 = is_print_verbose_enabled();
        if (cVar4 != '\0') {
          local_80 = 0;
          local_68 = "WebSocket error while getting partial data (StreamPeer error code %d).";
          local_60 = 0x46;
          String::parse_latin1((StrRange *)&local_80);
          vformat<Error>((StrRange *)&local_78,(StrRange *)&local_80,iVar5);
          Variant::Variant((Variant *)local_58,(String *)&local_78);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        }
        pcVar2 = *(code **)(*(long *)this + 0x1b0);
        local_78 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_78);
        (*pcVar2)(this,0xffffffff,(StrRange *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        goto LAB_001082bf;
      }
      iVar5 = 0;
      if (local_9c != 1) goto LAB_00107fd0;
      StreamPeer::put_u8((uchar)*(undefined8 *)(this + 0x218));
      StreamPeerBuffer::get_data_array();
      lVar14 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar14 + -0x10),false);
        }
      }
    } while ((((iVar6 < 4) || (*(char *)(lVar14 + lVar12) != '\n')) ||
             (*(char *)(lVar14 + -1 + lVar12) != '\r')) ||
            ((*(char *)(lVar14 + -2 + lVar12) != '\n' || (*(char *)(lVar14 + -3 + lVar12) != '\r')))
            );
    cVar4 = _parse_client_request(this);
    if (cVar4 == '\0') {
      pcVar2 = *(code **)(*(long *)this + 0x1b0);
      local_68 = (undefined *)0x0;
      String::parse_latin1((String *)&local_68,"");
      (*pcVar2)(this,0xffffffff,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001082bf:
      iVar5 = 1;
      goto LAB_00107fd0;
    }
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"HTTP/1.1 101 Switching Protocols\r\n");
    String::operator+=((String *)&local_98,"Upgrade: websocket\r\n");
    String::operator+=((String *)&local_98,"Connection: Upgrade\r\n");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"\r\n");
    local_90 = 0;
    if (*(long *)(this + 0x228) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0x228));
    }
    _compute_key_response((WSLPeer *)&local_88,(CowData<char32_t> *)&local_90);
    operator+((char *)&local_80,(String *)"Sec-WebSocket-Accept: ");
    String::operator+((String *)&local_68,(String *)&local_80);
    String::operator+=((String *)&local_98,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((*(long *)(this + 0x220) != 0) && (1 < *(uint *)(*(long *)(this + 0x220) + -8))) {
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"\r\n");
      operator+((char *)&local_80,(String *)"Sec-WebSocket-Protocol: ");
      String::operator+((String *)&local_68,(String *)&local_80);
      String::operator+=((String *)&local_98,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    }
    lVar12 = *(long *)(this + 0x1b0);
    for (lVar14 = 0; (lVar12 != 0 && (lVar14 < *(long *)(lVar12 + -8))); lVar14 = lVar14 + 1) {
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"\r\n");
      lVar12 = *(long *)(this + 0x1b0);
      if (lVar12 == 0) {
        lVar13 = 0;
LAB_00107eb8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar13,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar13 = *(long *)(lVar12 + -8);
      if (lVar13 <= lVar14) goto LAB_00107eb8;
      String::operator+((String *)&local_68,(String *)(lVar12 + lVar14 * 8));
      String::operator+=((String *)&local_98,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar12 = *(long *)(this + 0x1b0);
    }
    String::operator+=((String *)&local_98,"\r\n");
    String::utf8();
    StreamPeerBuffer::clear();
    if (local_68 == (undefined *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)*(undefined8 *)(local_68 + -8) + -1 +
              (uint)((int)*(undefined8 *)(local_68 + -8) == 0);
    }
    plVar1 = *(long **)(this + 0x218);
    pcVar2 = *(code **)(*plVar1 + 0x150);
    uVar8 = CharString::get_data();
    (*pcVar2)(plVar1,uVar8,iVar5);
    StreamPeerBuffer::seek((int)*(undefined8 *)(this + 0x218));
    pcVar3 = local_68;
    this[0x210] = (WSLPeer)0x0;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (this[0x210] == (WSLPeer)0x0) goto LAB_00107fb0;
  }
  iVar5 = 0;
LAB_00107fd0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WSLPeer::poll() */

void __thiscall WSLPeer::poll(WSLPeer *this)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  String aSStack_88 [8];
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *(int *)(this + 0x1e0);
  if (iVar6 != 3) {
    if (iVar6 == 0) {
      if (this[0x1e4] == (WSLPeer)0x0) {
        _do_client_handshake(this);
        iVar6 = *(int *)(this + 0x1e0);
      }
      else {
        _do_server_handshake(this);
        iVar6 = *(int *)(this + 0x1e0);
      }
    }
    if (iVar6 - 1U < 2) {
      if (*(long *)(this + 0x1f8) == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error(&_LC165,"modules/websocket/wsl_peer.cpp",0x2c8,
                           "Parameter \"wsl_ctx\" is null.",0,0);
          return;
        }
        goto LAB_00108c46;
      }
      OS::get_singleton();
      lVar7 = OS::get_ticks_msec();
      uVar8 = *(undefined8 *)(this + 0x1f8);
      if (((*(ulong *)(this + 0x1c8) != 0) &&
          (*(ulong *)(this + 0x1c8) < (ulong)(lVar7 - *(long *)(this + 0x248)))) &&
         (*(int *)(this + 0x1e0) == 1)) {
        if (this[0x250] == (WSLPeer)0x0) {
          this[0x250] = (WSLPeer)0x1;
          local_68 = (undefined *)CONCAT71(local_68._1_7_,9);
          local_60 = 0;
          local_58 = 0;
          iVar6 = wslay_event_queue_msg(uVar8,&local_68);
          if (iVar6 != 0) {
            cVar4 = is_print_verbose_enabled();
            if (cVar4 != '\0') {
              itos((long)&local_80);
              operator+((char *)aSStack_88,(String *)"Websocket (wslay) failed to send ping: ");
              Variant::Variant((Variant *)local_48,aSStack_88);
              stringify_variants((Variant *)&local_78);
              __print_line((String *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              if (Variant::needs_deinit[local_48[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)aSStack_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            }
            wslay_event_context_free(*(undefined8 *)(this + 0x1f8));
            *(undefined8 *)(this + 0x1f8) = 0;
            pcVar2 = *(code **)(*(long *)this + 0x1b0);
            local_80 = 0;
            local_78 = &_LC15;
            local_70 = 0;
            String::parse_latin1((StrRange *)&local_80);
            (*pcVar2)(this,0xffffffff,(StrRange *)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            goto LAB_001086f0;
          }
          *(long *)(this + 0x248) = lVar7;
          uVar8 = *(undefined8 *)(this + 0x1f8);
          goto LAB_00108765;
        }
        goto LAB_00108818;
      }
LAB_00108765:
      iVar6 = wslay_event_recv(uVar8);
      if ((iVar6 == 0) && (iVar6 = wslay_event_send(*(undefined8 *)(this + 0x1f8)), iVar6 == 0)) {
        iVar6 = wslay_event_get_close_sent(*(undefined8 *)(this + 0x1f8));
        if (iVar6 != 0) {
          iVar6 = wslay_event_get_close_received(*(undefined8 *)(this + 0x1f8));
          uVar8 = *(undefined8 *)(this + 0x1f8);
          if (iVar6 == 0) {
            iVar6 = wslay_event_get_read_enabled(uVar8);
            if (iVar6 != 0) goto LAB_001086f0;
            uVar5 = wslay_event_get_status_code_sent(*(undefined8 *)(this + 0x1f8));
            *(uint *)(this + 0x230) = (uint)uVar5;
            if (uVar5 == 0x3ef) {
              String::parse_latin1((String *)(this + 0x238),"Invalid frame payload data");
            }
            else if (uVar5 < 0x3f0) {
              if (uVar5 == 0x3ea) {
                String::parse_latin1((String *)(this + 0x238),"Protocol error");
              }
              else {
                if (uVar5 != 0x3ee) goto LAB_00108bfe;
                String::parse_latin1((String *)(this + 0x238),"Abnormal closure");
              }
            }
            else if (uVar5 == 0x3f1) {
              String::parse_latin1((String *)(this + 0x238),"Message too big");
            }
            else {
LAB_00108bfe:
              String::parse_latin1((String *)(this + 0x238),"Unknown");
            }
            uVar8 = *(undefined8 *)(this + 0x1f8);
          }
LAB_00108818:
          wslay_event_context_free(uVar8);
          *(undefined8 *)(this + 0x1f8) = 0;
          pcVar2 = *(code **)(*(long *)this + 0x1b0);
          local_78 = (undefined *)0x0;
          local_68 = &_LC15;
          local_60 = 0;
          String::parse_latin1((StrRange *)&local_78);
          (*pcVar2)(this,0xffffffff,(StrRange *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        }
      }
      else {
        cVar4 = is_print_verbose_enabled();
        if (cVar4 != '\0') {
          itos((long)&local_78);
          operator+((char *)&local_80,(String *)"Websocket (wslay) poll error: ");
          Variant::Variant((Variant *)local_48,(String *)&local_80);
          stringify_variants((Variant *)&local_68);
          __print_line((String *)&local_68);
          puVar3 = local_68;
          if (local_68 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = (undefined *)0x0;
              Memory::free_static(puVar3 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar7 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          puVar3 = local_78;
          if (local_78 != (undefined *)0x0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = (undefined *)0x0;
              Memory::free_static(puVar3 + -0x10,false);
            }
          }
        }
        wslay_event_context_free(*(undefined8 *)(this + 0x1f8));
        *(undefined8 *)(this + 0x1f8) = 0;
        pcVar2 = *(code **)(*(long *)this + 0x1b0);
        local_78 = (undefined *)0x0;
        local_68 = &_LC15;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_78);
        (*pcVar2)(this,0xffffffff,(StrRange *)&local_78);
        puVar3 = local_78;
        if (local_78 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
        }
      }
    }
  }
LAB_001086f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108c46:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WebSocketPeer::is_class_ptr(void*) const */

uint __thiscall WebSocketPeer::is_class_ptr(WebSocketPeer *this,void *param_1)

{
  return (uint)CONCAT71(0x10db,(undefined4 *)param_1 == &PacketPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10db,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10db,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10db,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* WebSocketPeer::_getv(StringName const&, Variant&) const */

undefined8 WebSocketPeer::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebSocketPeer::_setv(StringName const&, Variant const&) */

undefined8 WebSocketPeer::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebSocketPeer::_validate_propertyv(PropertyInfo&) const */

void WebSocketPeer::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* WebSocketPeer::_property_can_revertv(StringName const&) const */

undefined8 WebSocketPeer::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* WebSocketPeer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 WebSocketPeer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* WebSocketPeer::_notificationv(int, bool) */

void WebSocketPeer::_notificationv(int param_1,bool param_2)

{
  return;
}



/* WSLPeer::get_max_packet_size() const */

undefined4 __thiscall WSLPeer::get_max_packet_size(WSLPeer *this)

{
  if (*(long *)(this + 0x280) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x280) + -8);
  }
  return 0;
}



/* WSLPeer::get_ready_state() const */

undefined4 __thiscall WSLPeer::get_ready_state(WSLPeer *this)

{
  return *(undefined4 *)(this + 0x1e0);
}



/* WSLPeer::get_close_code() const */

undefined4 __thiscall WSLPeer::get_close_code(WSLPeer *this)

{
  return *(undefined4 *)(this + 0x230);
}



/* WSLPeer::was_string_packet() const */

bool __thiscall WSLPeer::was_string_packet(WSLPeer *this)

{
  return this[0x240] != (WSLPeer)0x0;
}



/* WebSocketPeer::_get_class_namev() const */

undefined8 * WebSocketPeer::_get_class_namev(void)

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
LAB_0010a593:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010a593;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"WebSocketPeer");
      goto LAB_0010a5fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"WebSocketPeer");
LAB_0010a5fe:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<PacketBuffer<unsigned char>::_Packet>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<PacketBuffer<unsigned_char>::_Packet>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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

void FUN_0010a654(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WSLPeer::accept_stream(Ref<StreamPeer>) [clone .cold] */

void WSLPeer::accept_stream(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<PacketBuffer<unsigned char>::_Packet>::resize<false>(long) [clone .isra.0] [clone
   .cold] */

void CowData<PacketBuffer<unsigned_char>::_Packet>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a676(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WSLPeer::get_close_reason() const */

void WSLPeer::get_close_reason(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x238) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x238));
  }
  return;
}



/* WebSocketPeer::get_class() const */

void WebSocketPeer::get_class(void)

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



/* WebSocketPeer::_initialize_classv() */

void WebSocketPeer::_initialize_classv(void)

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
        if ((code *)PTR__bind_methods_00111008 != RefCounted::_bind_methods) {
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
      PacketPeer::_bind_methods();
      PacketPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PacketPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "WebSocketPeer";
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != PacketPeer::_bind_methods) {
      WebSocketPeer::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
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
            if (lVar5 == 0) goto LAB_0010accf;
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
LAB_0010accf:
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
    if (cVar6 != '\0') goto LAB_0010ad83;
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
              if (lVar5 == 0) goto LAB_0010ae33;
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
LAB_0010ae33:
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
      if (cVar6 != '\0') goto LAB_0010ad83;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010ad83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WebSocketPeer::is_class(String const&) const */

undefined8 __thiscall WebSocketPeer::is_class(WebSocketPeer *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010af5f;
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
LAB_0010af5f:
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
    if (cVar6 != '\0') goto LAB_0010b013;
  }
  cVar6 = String::operator==(param_1,"WebSocketPeer");
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
              if (lVar5 == 0) goto LAB_0010b0d3;
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
LAB_0010b0d3:
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
      if (cVar6 != '\0') goto LAB_0010b013;
    }
    cVar6 = String::operator==(param_1,"PacketPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010b17c;
    }
  }
LAB_0010b013:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b17c:
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
LAB_0010b2f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b2f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010b316;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010b316:
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
LAB_0010b6f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b6f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b715;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b715:
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



/* WebSocketPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall WebSocketPeer::_get_property_listv(WebSocketPeer *this,List *param_1,bool param_2)

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
  local_78 = "WebSocketPeer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "WebSocketPeer";
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
LAB_0010bb48:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bb48;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bb65;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bb65:
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
  StringName::StringName((StringName *)&local_78,"WebSocketPeer",false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char cVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  undefined8 *puVar40;
  void *pvVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  ulong uVar45;
  uint *puVar46;
  undefined8 uVar47;
  long lVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  undefined1 (*local_a0) [16];
  long local_70;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_0010c584:
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    pvVar41 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = pvVar41;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar41 + uVar51)) && (pvVar41 < (void *)((long)pvVar2 + uVar38))
         ) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar41 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar45 != uVar38);
      }
      else {
        memset(pvVar2,0,uVar38);
        memset(pvVar41,0,uVar51);
      }
LAB_0010c464:
      iVar42 = *(int *)(this + 0x2c);
      if (iVar42 != 0) {
LAB_0010c470:
        uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar50 = String::hash();
        uVar38 = CONCAT44(0,uVar36);
        lVar53 = *(long *)(this + 0x10);
        uVar37 = 1;
        if (uVar50 != 0) {
          uVar37 = uVar50;
        }
        uVar54 = 0;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)uVar37 * lVar48;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uVar38;
        lVar43 = SUB168(auVar15 * auVar31,8);
        uVar50 = *(uint *)(lVar53 + lVar43 * 4);
        uVar49 = SUB164(auVar15 * auVar31,8);
        if (uVar50 != 0) {
          do {
            if (uVar50 == uVar37) {
              cVar35 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar43 * 8) + 0x10),
                                          param_1);
              if (cVar35 != '\0') {
                local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                if (*(long *)(local_a0[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(local_a0[1] + 8),(CowData *)&local_70);
                  local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar49 * 8);
                }
                goto LAB_0010c330;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(uVar49 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar38;
            lVar43 = SUB168(auVar16 * auVar32,8);
            uVar50 = *(uint *)(lVar53 + lVar43 * 4);
            uVar49 = SUB164(auVar16 * auVar32,8);
          } while ((uVar50 != 0) &&
                  (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar50 * lVar48, auVar33._8_8_ = 0,
                  auVar33._0_8_ = uVar38, auVar18._8_8_ = 0,
                  auVar18._0_8_ = (ulong)((uVar36 + uVar49) - SUB164(auVar17 * auVar33,8)) * lVar48,
                  auVar34._8_8_ = 0, auVar34._0_8_ = uVar38, uVar54 <= SUB164(auVar18 * auVar34,8)))
          ;
        }
        iVar42 = *(int *)(this + 0x2c);
      }
      uVar45 = (ulong)uVar55;
      goto LAB_0010bf30;
    }
    iVar42 = *(int *)(this + 0x2c);
    if (pvVar41 == (void *)0x0) goto LAB_0010bf30;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010c470;
LAB_0010bf56:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_a0 = (undefined1 (*) [16])0x0;
      goto LAB_0010c330;
    }
    uVar38 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar36 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar38 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    uVar45 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar38;
    pvVar41 = *(void **)(this + 8);
    uVar38 = uVar45 * 4;
    uVar51 = uVar45 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(this + 0x10) = uVar39;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar45);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar36 != 0) {
      uVar38 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar38 * 4);
        if (uVar55 != 0) {
          lVar48 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (ulong)uVar55 * lVar53;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar51;
          lVar43 = SUB168(auVar3 * auVar19,8);
          puVar46 = (uint *)(lVar48 + lVar43 * 4);
          iVar42 = SUB164(auVar3 * auVar19,8);
          uVar50 = *puVar46;
          uVar39 = *(undefined8 *)((long)pvVar41 + uVar38 * 8);
          while (uVar50 != 0) {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar50 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar51;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((iVar42 + uVar37) - SUB164(auVar4 * auVar20,8)) * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            uVar54 = SUB164(auVar5 * auVar21,8);
            uVar47 = uVar39;
            if (uVar54 < uVar49) {
              *puVar46 = uVar55;
              puVar40 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar47 = *puVar40;
              *puVar40 = uVar39;
              uVar55 = uVar50;
              uVar49 = uVar54;
            }
            uVar49 = uVar49 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar42 + 1) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar51;
            lVar43 = SUB168(auVar6 * auVar22,8);
            puVar46 = (uint *)(lVar48 + lVar43 * 4);
            iVar42 = SUB164(auVar6 * auVar22,8);
            uVar39 = uVar47;
            uVar50 = *puVar46;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar46 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar36 != uVar38);
      Memory::free_static(pvVar41,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar38 = CONCAT44(0,uVar55);
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar37 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar36 = 1;
      if (uVar37 != 0) {
        uVar36 = uVar37;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27,8);
      uVar37 = *(uint *)(lVar53 + lVar43 * 4);
      uVar50 = SUB164(auVar11 * auVar27,8);
      if (uVar37 == 0) {
        lVar52 = *(long *)(this + 8);
      }
      else {
        lVar52 = *(long *)(this + 8);
        uVar49 = 0;
        do {
          if (uVar36 == uVar37) {
            cVar35 = String::operator==((String *)(*(long *)(lVar52 + lVar43 * 8) + 0x10),param_1);
            if (cVar35 != '\0') {
              local_a0 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
              goto LAB_0010c330;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar52 = *(long *)(this + 8);
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar50 + 1) * lVar48;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar38;
          lVar43 = SUB168(auVar12 * auVar28,8);
          uVar37 = *(uint *)(lVar53 + lVar43 * 4);
          uVar50 = SUB164(auVar12 * auVar28,8);
        } while ((uVar37 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar37 * lVar48, auVar29._8_8_ = 0,
                auVar29._0_8_ = uVar38, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar50 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar48,
                auVar30._8_8_ = 0, auVar30._0_8_ = uVar38, uVar49 <= SUB164(auVar14 * auVar30,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar52 == 0) goto LAB_0010c584;
      goto LAB_0010c464;
    }
    local_70 = 0;
    uVar45 = (ulong)uVar55;
    iVar42 = 0;
LAB_0010bf30:
    if ((float)uVar45 * __LC48 < (float)(iVar42 + 1)) goto LAB_0010bf56;
  }
  local_58[0] = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *local_a0 = (undefined1  [16])0x0;
LAB_0010c635:
    lVar48 = 0;
    *(undefined8 *)(local_a0[1] + 8) = 0;
    puVar40 = *(undefined8 **)(this + 0x20);
    if (puVar40 != (undefined8 *)0x0) goto LAB_0010c1fa;
LAB_0010c651:
    *(undefined1 (**) [16])(this + 0x18) = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar48 = local_58[0];
    uVar39 = local_68._0_8_;
    uVar47 = local_68._8_8_;
    local_58[1] = 0;
    local_a0 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)local_a0[1] = 0;
    *(undefined8 *)*local_a0 = uVar39;
    *(undefined8 *)(*local_a0 + 8) = uVar47;
    if (lVar48 == 0) goto LAB_0010c635;
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_a0 + 1),(CowData *)local_58);
    *(undefined8 *)(local_a0[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_58[0] + -0x10),false);
    }
    puVar40 = *(undefined8 **)(this + 0x20);
    lVar48 = local_70;
    if (puVar40 == (undefined8 *)0x0) goto LAB_0010c651;
LAB_0010c1fa:
    *puVar40 = local_a0;
    *(undefined8 **)(*local_a0 + 8) = puVar40;
  }
  *(undefined1 (**) [16])(this + 0x20) = local_a0;
  uVar36 = String::hash();
  lVar53 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar36 != 0) {
    uVar55 = uVar36;
  }
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar36);
  lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)uVar55 * lVar43;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar38;
  lVar44 = SUB168(auVar7 * auVar23,8);
  lVar52 = *(long *)(this + 8);
  puVar46 = (uint *)(lVar53 + lVar44 * 4);
  iVar42 = SUB164(auVar7 * auVar23,8);
  uVar37 = *puVar46;
  pauVar57 = local_a0;
  if (uVar37 != 0) {
    uVar50 = 0;
    pauVar56 = local_a0;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar42) - SUB164(auVar8 * auVar24,8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25,8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
        *puVar46 = uVar55;
        puVar40 = (undefined8 *)(lVar52 + lVar44 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar40;
        *puVar40 = pauVar56;
        uVar50 = uVar49;
        uVar55 = uVar37;
      }
      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26,8);
      puVar46 = (uint *)(lVar53 + lVar44 * 4);
      iVar42 = SUB164(auVar10 * auVar26,8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
    } while (uVar37 != 0);
  }
  *(undefined1 (**) [16])(lVar52 + lVar44 * 8) = pauVar57;
  *puVar46 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  if (lVar48 != 0) {
    LOCK();
    plVar1 = (long *)(lVar48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_70 + -0x10),false);
    }
  }
LAB_0010c330:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_a0[1] + 8;
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



/* WARNING: Removing unreachable block (ram,0x0010c918) */
/* WARNING: Removing unreachable block (ram,0x0010ca66) */
/* WARNING: Removing unreachable block (ram,0x0010cb60) */
/* WARNING: Removing unreachable block (ram,0x0010ca72) */
/* WARNING: Removing unreachable block (ram,0x0010ca7c) */
/* WARNING: Removing unreachable block (ram,0x0010cb40) */
/* WARNING: Removing unreachable block (ram,0x0010ca88) */
/* WARNING: Removing unreachable block (ram,0x0010ca92) */
/* WARNING: Removing unreachable block (ram,0x0010cb20) */
/* WARNING: Removing unreachable block (ram,0x0010ca9e) */
/* WARNING: Removing unreachable block (ram,0x0010cabc) */
/* WARNING: Removing unreachable block (ram,0x0010cac8) */
/* String vformat<StreamPeerTLS::Status>(String const&, StreamPeerTLS::Status const) */

undefined8 * vformat<StreamPeerTLS::Status>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x0010cca8) */
/* WARNING: Removing unreachable block (ram,0x0010cddf) */
/* WARNING: Removing unreachable block (ram,0x0010cf20) */
/* WARNING: Removing unreachable block (ram,0x0010cdeb) */
/* WARNING: Removing unreachable block (ram,0x0010cdfd) */
/* WARNING: Removing unreachable block (ram,0x0010cf00) */
/* WARNING: Removing unreachable block (ram,0x0010ce09) */
/* WARNING: Removing unreachable block (ram,0x0010ce1d) */
/* WARNING: Removing unreachable block (ram,0x0010cee0) */
/* WARNING: Removing unreachable block (ram,0x0010ce29) */
/* WARNING: Removing unreachable block (ram,0x0010ce33) */
/* WARNING: Removing unreachable block (ram,0x0010cec0) */
/* WARNING: Removing unreachable block (ram,0x0010ce3f) */
/* WARNING: Removing unreachable block (ram,0x0010ce5d) */
/* WARNING: Removing unreachable block (ram,0x0010ce69) */
/* String vformat<Error>(String const&, Error const) */

undefined8 * vformat<Error>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x0010d068) */
/* WARNING: Removing unreachable block (ram,0x0010d198) */
/* WARNING: Removing unreachable block (ram,0x0010d2d0) */
/* WARNING: Removing unreachable block (ram,0x0010d1a4) */
/* WARNING: Removing unreachable block (ram,0x0010d1c0) */
/* WARNING: Removing unreachable block (ram,0x0010d2b0) */
/* WARNING: Removing unreachable block (ram,0x0010d1cc) */
/* WARNING: Removing unreachable block (ram,0x0010d1d6) */
/* WARNING: Removing unreachable block (ram,0x0010d290) */
/* WARNING: Removing unreachable block (ram,0x0010d1e2) */
/* WARNING: Removing unreachable block (ram,0x0010d1f6) */
/* WARNING: Removing unreachable block (ram,0x0010d270) */
/* WARNING: Removing unreachable block (ram,0x0010d1fe) */
/* WARNING: Removing unreachable block (ram,0x0010d214) */
/* WARNING: Removing unreachable block (ram,0x0010d220) */
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



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              *this,String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* CowData<unsigned char>::_unref() */

void __thiscall CowData<unsigned_char>::_unref(CowData<unsigned_char> *this)

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
LAB_0010d6cb:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        lVar7 = *(long *)(lVar6 + -8);
        if (lVar7 <= lVar9) goto LAB_0010d6cb;
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



/* WSLPeer::_create(bool) */

WSLPeer * WSLPeer::_create(bool param_1)

{
  WSLPeer *this;
  
  this = (WSLPeer *)operator_new(0x2c8,"");
  WSLPeer(this);
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* CowData<PacketBuffer<unsigned char>::_Packet>::_realloc(long) */

undefined8 __thiscall
CowData<PacketBuffer<unsigned_char>::_Packet>::_realloc
          (CowData<PacketBuffer<unsigned_char>::_Packet> *this,long param_1)

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



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


