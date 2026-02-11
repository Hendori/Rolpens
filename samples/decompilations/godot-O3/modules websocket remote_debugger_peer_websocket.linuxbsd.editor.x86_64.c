
/* RemoteDebuggerPeerWebSocket::is_peer_connected() */

bool __thiscall RemoteDebuggerPeerWebSocket::is_peer_connected(RemoteDebuggerPeerWebSocket *this)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
    bVar2 = true;
    if (iVar1 != 1) {
      iVar1 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}



/* RemoteDebuggerPeerWebSocket::has_message() */

undefined4 __thiscall RemoteDebuggerPeerWebSocket::has_message(RemoteDebuggerPeerWebSocket *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(this + 0x188) != 0) {
    iVar1 = *(int *)(*(long *)(this + 0x188) + 0x10);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return uVar2;
}



/* RemoteDebuggerPeerWebSocket::can_block() const */

undefined8 RemoteDebuggerPeerWebSocket::can_block(void)

{
  return 1;
}



/* RemoteDebuggerPeerWebSocket::get_max_message_size() const */

undefined8 __thiscall
RemoteDebuggerPeerWebSocket::get_max_message_size(RemoteDebuggerPeerWebSocket *this)

{
  undefined8 uVar1;
  
  if (*(long **)(this + 0x180) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x180) + 0x168))();
    return uVar1;
  }
  _err_print_error("get_max_message_size","modules/websocket/remote_debugger_peer_websocket.cpp",
                   0x55,"Condition \"ws_peer.is_null()\" is true. Returning: 0",0,0);
  return 0;
}



/* RemoteDebuggerPeerWebSocket::put_message(Array const&) */

undefined8 __thiscall
RemoteDebuggerPeerWebSocket::put_message(RemoteDebuggerPeerWebSocket *this,Array *param_1)

{
  long *plVar1;
  long lVar2;
  Array *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)(this + 400) == 0) {
    if (*(int *)(this + 0x198) < 1) {
      return 6;
    }
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(this + 400) = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  else if (*(int *)(this + 0x198) <= *(int *)(*(long *)(this + 400) + 0x10)) {
    return 6;
  }
  this_00 = (Array *)operator_new(0x20,DefaultAllocator::alloc);
  Array::Array(this_00);
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
  Array::operator=(this_00,param_1);
  plVar1 = *(long **)(this + 400);
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(Array **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 == 0) {
    *plVar1 = (long)this_00;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  return 0;
}



/* RemoteDebuggerPeerWebSocket::close() */

void __thiscall RemoteDebuggerPeerWebSocket::close(RemoteDebuggerPeerWebSocket *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
    *(undefined8 *)(this + 0x180) = 0;
  }
  return;
}



/* RemoteDebuggerPeerWebSocket::get_message() */

void RemoteDebuggerPeerWebSocket::get_message(void)

{
  undefined8 *puVar1;
  long *plVar2;
  Array *this;
  long lVar3;
  long lVar4;
  long in_RSI;
  Array *in_RDI;
  long in_FS_OFFSET;
  Array aAStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(in_RSI + 0x188);
  if ((puVar1 == (undefined8 *)0x0) || (*(int *)(puVar1 + 2) == 0)) {
    _err_print_error("get_message","modules/websocket/remote_debugger_peer_websocket.cpp",0x5e,
                     "Condition \"in_queue.is_empty()\" is true. Returning: Array()",0,0);
    Array::Array(in_RDI);
  }
  else {
    Array::Array(aAStack_38,(Array *)*puVar1);
    plVar2 = *(long **)(in_RSI + 0x188);
    if ((plVar2 != (long *)0x0) && (this = (Array *)*plVar2, this != (Array *)0x0)) {
      if (plVar2 == *(long **)(this + 0x18)) {
        lVar4 = *(long *)(this + 8);
        lVar3 = *(long *)(this + 0x10);
        *plVar2 = lVar4;
        if (this == (Array *)plVar2[1]) {
          plVar2[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar4;
          lVar4 = *(long *)(this + 8);
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar3;
        }
        Array::~Array(this);
        Memory::free_static(this,false);
        *(int *)(plVar2 + 2) = (int)plVar2[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      if (*(int *)((long)*(void **)(in_RSI + 0x188) + 0x10) == 0) {
        Memory::free_static(*(void **)(in_RSI + 0x188),false);
        *(undefined8 *)(in_RSI + 0x188) = 0;
      }
    }
    Array::Array(in_RDI,aAStack_38);
    Array::~Array(aAStack_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebuggerPeerWebSocket::poll() */

void __thiscall RemoteDebuggerPeerWebSocket::poll(RemoteDebuggerPeerWebSocket *this)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  Array *pAVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  Array local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
    while( true ) {
      iVar5 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
      plVar9 = *(long **)(this + 0x180);
      if (iVar5 != 1) break;
      iVar5 = (**(code **)(*plVar9 + 0x150))();
      if (iVar5 < 1) {
        plVar9 = *(long **)(this + 0x180);
        break;
      }
      iVar5 = 0;
      if (*(long *)(this + 0x188) != 0) {
        iVar5 = *(int *)(*(long *)(this + 0x188) + 0x10);
      }
      plVar9 = *(long **)(this + 0x180);
      if (*(int *)(this + 0x198) <= iVar5) break;
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      iVar5 = (**(code **)(*plVar9 + 0x180))(plVar9,&local_58,0);
      if (iVar5 == 0) {
        if ((int)local_58 == 0x1c) {
          Variant::operator_cast_to_Array((Variant *)local_60);
          if (*(long *)(this + 0x188) == 0) {
            pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0x188) = pauVar7;
            *(undefined4 *)pauVar7[1] = 0;
            *pauVar7 = (undefined1  [16])0x0;
          }
          pAVar6 = (Array *)operator_new(0x20,DefaultAllocator::alloc);
          Array::Array(pAVar6);
          *(undefined8 *)(pAVar6 + 0x18) = 0;
          *(undefined1 (*) [16])(pAVar6 + 8) = (undefined1  [16])0x0;
          Array::operator=(pAVar6,local_60);
          plVar9 = *(long **)(this + 0x188);
          lVar8 = plVar9[1];
          *(undefined8 *)(pAVar6 + 8) = 0;
          *(long **)(pAVar6 + 0x18) = plVar9;
          *(long *)(pAVar6 + 0x10) = lVar8;
          if (lVar8 != 0) {
            *(Array **)(lVar8 + 8) = pAVar6;
          }
          plVar9[1] = (long)pAVar6;
          if (*plVar9 == 0) {
            *plVar9 = (long)pAVar6;
          }
          *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
          Array::~Array(local_60);
        }
        else {
          _err_print_error(&_LC10,"modules/websocket/remote_debugger_peer_websocket.cpp",0x48,
                           "Condition \"var.get_type() != Variant::ARRAY\" is true. Continuing.",0,0
                          );
        }
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      else {
        _err_print_error(&_LC10,"modules/websocket/remote_debugger_peer_websocket.cpp",0x47,
                         "Condition \"err != OK\" is true. Continuing.",0,0);
        cVar1 = Variant::needs_deinit[(int)local_58];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
    }
    do {
      iVar5 = (**(code **)(*plVar9 + 0x1f8))();
      if (((iVar5 != 1) || (puVar2 = *(undefined8 **)(this + 400), puVar2 == (undefined8 *)0x0)) ||
         (*(int *)(puVar2 + 2) < 1)) goto LAB_001006b0;
      Array::Array(local_60,(Array *)*puVar2);
      plVar9 = *(long **)(this + 0x180);
      pcVar3 = *(code **)(*plVar9 + 0x188);
      Variant::Variant((Variant *)&local_58,local_60);
      iVar5 = (*pcVar3)(plVar9,(Variant *)&local_58,0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (iVar5 != 0) goto LAB_00100680;
      plVar9 = *(long **)(this + 400);
      if ((plVar9 != (long *)0x0) && (pAVar6 = (Array *)*plVar9, pAVar6 != (Array *)0x0)) {
        if (plVar9 == *(long **)(pAVar6 + 0x18)) {
          lVar8 = *(long *)(pAVar6 + 8);
          lVar4 = *(long *)(pAVar6 + 0x10);
          *plVar9 = lVar8;
          if (pAVar6 == (Array *)plVar9[1]) {
            plVar9[1] = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 8) = lVar8;
            lVar8 = *(long *)(pAVar6 + 8);
          }
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar4;
          }
          Array::~Array(pAVar6);
          Memory::free_static(pAVar6,false);
          *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(this + 400) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 400),false);
          *(undefined8 *)(this + 400) = 0;
        }
      }
      Array::~Array(local_60);
      plVar9 = *(long **)(this + 0x180);
    } while( true );
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error(&_LC10,"modules/websocket/remote_debugger_peer_websocket.cpp",0x41,
                     "Condition \"ws_peer.is_null()\" is true.",0,0);
    return;
  }
LAB_001007ed:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100680:
  _err_print_error(&_LC10,"modules/websocket/remote_debugger_peer_websocket.cpp",0x4f,
                   "Condition \"err != OK\" is true. Breaking.",0,0);
  Array::~Array(local_60);
LAB_001006b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_001007ed;
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



/* RemoteDebuggerPeerWebSocket::RemoteDebuggerPeerWebSocket(Ref<WebSocketPeer>) */

void __thiscall
RemoteDebuggerPeerWebSocket::RemoteDebuggerPeerWebSocket
          (RemoteDebuggerPeerWebSocket *this,long *param_2)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RemoteDebuggerPeer::RemoteDebuggerPeer((RemoteDebuggerPeer *)this);
  *(undefined8 *)(this + 400) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00102ef8;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"network/limits/debugger/max_queued_messages",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x198) = iVar3;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  pOVar1 = (Object *)*param_2;
  pOVar4 = *(Object **)(this + 0x180);
  if (pOVar1 == pOVar4) {
LAB_00100989:
    if (pOVar4 != (Object *)0x0) {
      WebSocketPeer::set_max_queued_packets((int)pOVar4);
      WebSocketPeer::set_inbound_buffer_size((int)*(undefined8 *)(this + 0x180));
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        WebSocketPeer::set_outbound_buffer_size((int)*(undefined8 *)(this + 0x180));
        return;
      }
      goto LAB_00100a55;
    }
  }
  else {
    *(Object **)(this + 0x180) = pOVar1;
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
        goto LAB_0010096d;
      }
      if (pOVar4 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        if (cVar2 == '\0') goto LAB_00100982;
        goto LAB_00100a19;
      }
LAB_00100982:
      pOVar4 = *(Object **)(this + 0x180);
      goto LAB_00100989;
    }
LAB_0010096d:
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
LAB_00100a19:
        cVar2 = predelete_handler(pOVar4);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      goto LAB_00100982;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RemoteDebuggerPeerWebSocket::connect_to_host(String const&) */

int __thiscall
RemoteDebuggerPeerWebSocket::connect_to_host(RemoteDebuggerPeerWebSocket *this,String *param_1)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  Object *pOVar6;
  long lVar7;
  long lVar8;
  Object *pOVar9;
  Object *pOVar10;
  long in_FS_OFFSET;
  long local_70 [2];
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((WebSocketPeer::_create == (code *)0x0) ||
      (pOVar6 = (Object *)(*WebSocketPeer::_create)(1), pOVar6 == (Object *)0x0)) ||
     (cVar2 = RefCounted::init_ref(), cVar2 == '\0')) {
    pOVar10 = *(Object **)(this + 0x180);
    if (pOVar10 != (Object *)0x0) {
      *(undefined8 *)(this + 0x180) = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        pOVar6 = (Object *)0x0;
        cVar2 = predelete_handler(pOVar10);
        if (cVar2 != '\0') {
LAB_00100e2e:
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
          pOVar9 = pOVar6;
          if (pOVar6 != (Object *)0x0) goto LAB_00100c1f;
        }
      }
      goto LAB_00100c2f;
    }
  }
  else {
    pOVar10 = *(Object **)(this + 0x180);
    pOVar9 = pOVar10;
    if (pOVar6 != pOVar10) {
      *(Object **)(this + 0x180) = pOVar6;
      cVar2 = RefCounted::reference();
      pOVar9 = pOVar6;
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
        if (pOVar10 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
joined_r0x00100f0b:
          if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar10), cVar2 != '\0'))
          goto LAB_00100e2e;
        }
      }
      else if (pOVar10 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x00100f0b;
      }
    }
LAB_00100c1f:
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar9), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
    }
LAB_00100c2f:
    if (*(long *)(this + 0x180) != 0) {
      local_60 = 0;
      local_70[0] = 0;
      local_58 = (Object *)0x1016ef;
      local_50 = 6;
      String::parse_latin1((StrRange *)local_70);
      if (local_60 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = *(long *)(local_60 + -8) + 1;
      }
      iVar3 = CowData<String>::resize<false>((CowData<String> *)&local_60,lVar8);
      if (iVar3 == 0) {
        if (local_60 == 0) {
          lVar7 = -1;
          lVar8 = 0;
        }
        else {
          lVar8 = *(long *)(local_60 + -8);
          lVar7 = lVar8 + -1;
          if (-1 < lVar7) {
            CowData<String>::_copy_on_write((CowData<String> *)&local_60);
            this_00 = (CowData<char32_t> *)(local_60 + lVar7 * 8);
            if (*(long *)this_00 != local_70[0]) {
              CowData<char32_t>::_ref(this_00,(CowData *)local_70);
            }
            goto LAB_00100ceb;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar8,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00100ceb:
      lVar8 = local_70[0];
      if (local_70[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_70[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70[0] = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      WebSocketPeer::set_supported_protocols(*(Vector **)(this + 0x180));
      WebSocketPeer::set_max_queued_packets((int)*(undefined8 *)(this + 0x180));
      WebSocketPeer::set_inbound_buffer_size((int)*(undefined8 *)(this + 0x180));
      WebSocketPeer::set_outbound_buffer_size((int)*(undefined8 *)(this + 0x180));
      local_58 = (Object *)0x0;
      iVar3 = (**(code **)(**(long **)(this + 0x180) + 0x198))
                        (*(long **)(this + 0x180),param_1,&local_58);
      if (((local_58 != (Object *)0x0) &&
          (cVar2 = RefCounted::unreference(), pOVar6 = local_58, cVar2 != '\0')) &&
         (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      if (iVar3 == 0) {
        (**(code **)(**(long **)(this + 0x180) + 0x1f0))();
        uVar4 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
        if (1 < uVar4) {
          uVar5 = (**(code **)(**(long **)(this + 0x180) + 0x1f8))();
          local_70[0] = 0;
          local_50 = 0x2e;
          local_58 = (Object *)0x101590;
          String::parse_latin1((StrRange *)local_70);
          vformat<WebSocketPeer::State>(&local_58,(StrRange *)local_70,uVar5);
          _err_print_error("connect_to_host","modules/websocket/remote_debugger_peer_websocket.cpp",
                           0x35,&local_58,0,0);
          pOVar6 = local_58;
          if (local_58 != (Object *)0x0) {
            LOCK();
            pOVar10 = local_58 + -0x10;
            *(long *)pOVar10 = *(long *)pOVar10 + -1;
            UNLOCK();
            if (*(long *)pOVar10 == 0) {
              local_58 = (Object *)0x0;
              Memory::free_static(pOVar6 + -0x10,false);
            }
          }
          lVar8 = local_70[0];
          if (local_70[0] != 0) {
            LOCK();
            plVar1 = (long *)(local_70[0] + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              iVar3 = 1;
              local_70[0] = 0;
              Memory::free_static((void *)(lVar8 + -0x10),false);
              goto LAB_00100dc2;
            }
          }
          iVar3 = 1;
        }
      }
      else {
        _err_print_error("connect_to_host","modules/websocket/remote_debugger_peer_websocket.cpp",
                         0x30,"Condition \"err != OK\" is true. Returning: err",0,0);
      }
LAB_00100dc2:
      CowData<String>::_unref((CowData<String> *)&local_60);
      goto LAB_00100dca;
    }
  }
  iVar3 = 0x2f;
  _err_print_error("connect_to_host","modules/websocket/remote_debugger_peer_websocket.cpp",0x25,
                   "Condition \"ws_peer.is_null()\" is true. Returning: ERR_BUG",0,0);
LAB_00100dca:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebuggerPeerWebSocket::create(String const&) */

Object * RemoteDebuggerPeerWebSocket::create(String *param_1)

{
  char cVar1;
  int iVar2;
  Object *this;
  Object *pOVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = String::begins_with((char *)param_1);
  if (cVar1 == '\0') {
    cVar1 = String::begins_with((char *)param_1);
    if (cVar1 != '\0') goto LAB_0010111d;
    _err_print_error("create","modules/websocket/remote_debugger_peer_websocket.cpp",0x85,
                     "Condition \"!p_uri.begins_with(\"ws://\") && !p_uri.begins_with(\"wss://\")\" is true. Returning: nullptr"
                     ,0,0);
  }
  else {
LAB_0010111d:
    this = (Object *)operator_new(0x1a0,"");
    local_28 = 0;
    RemoteDebuggerPeerWebSocket((RemoteDebuggerPeerWebSocket *)this,&local_28);
    postinitialize_handler(this);
    iVar2 = connect_to_host((RemoteDebuggerPeerWebSocket *)this,param_1);
    pOVar3 = this;
    if (iVar2 == 0) goto LAB_0010115b;
    cVar1 = predelete_handler(this);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)this + 0x140))(this);
      pOVar3 = (Object *)0x0;
      Memory::free_static(this,false);
      goto LAB_0010115b;
    }
  }
  pOVar3 = (Object *)0x0;
LAB_0010115b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pOVar3;
  }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1030,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1030,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102d98;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00102d98;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00101793:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101793;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001017fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001017fe:
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
            if (lVar5 == 0) goto LAB_0010198f;
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
LAB_0010198f:
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
    if (cVar6 != '\0') goto LAB_00101a43;
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
              if (lVar5 == 0) goto LAB_00101af3;
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
LAB_00101af3:
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
      if (cVar6 != '\0') goto LAB_00101a43;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101a43:
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
LAB_00101eb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00101eb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101ed6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101ed6:
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



/* WARNING: Removing unreachable block (ram,0x001022c8) */
/* WARNING: Removing unreachable block (ram,0x001023f8) */
/* WARNING: Removing unreachable block (ram,0x001025c0) */
/* WARNING: Removing unreachable block (ram,0x00102404) */
/* WARNING: Removing unreachable block (ram,0x0010240e) */
/* WARNING: Removing unreachable block (ram,0x001025a0) */
/* WARNING: Removing unreachable block (ram,0x0010241a) */
/* WARNING: Removing unreachable block (ram,0x00102424) */
/* WARNING: Removing unreachable block (ram,0x00102580) */
/* WARNING: Removing unreachable block (ram,0x00102430) */
/* WARNING: Removing unreachable block (ram,0x0010243a) */
/* WARNING: Removing unreachable block (ram,0x00102560) */
/* WARNING: Removing unreachable block (ram,0x00102446) */
/* WARNING: Removing unreachable block (ram,0x00102450) */
/* WARNING: Removing unreachable block (ram,0x00102540) */
/* WARNING: Removing unreachable block (ram,0x0010245c) */
/* WARNING: Removing unreachable block (ram,0x00102466) */
/* WARNING: Removing unreachable block (ram,0x00102520) */
/* WARNING: Removing unreachable block (ram,0x00102472) */
/* WARNING: Removing unreachable block (ram,0x0010247c) */
/* WARNING: Removing unreachable block (ram,0x00102500) */
/* WARNING: Removing unreachable block (ram,0x00102484) */
/* WARNING: Removing unreachable block (ram,0x0010249a) */
/* WARNING: Removing unreachable block (ram,0x001024a6) */
/* String vformat<WebSocketPeer::State>(String const&, WebSocketPeer::State const) */

undefined8 * vformat<WebSocketPeer::State>(undefined8 *param_1,bool *param_2,int param_3)

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



/* List<Array, DefaultAllocator>::~List() */

void __thiscall List<Array,DefaultAllocator>::~List(List<Array,DefaultAllocator> *this)

{
  Array *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (Array *)*plVar3;
    if (this_00 == (Array *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (Array *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      Array::~Array(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket() */

void __thiscall
RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket(RemoteDebuggerPeerWebSocket *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00102ef8;
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 400));
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 0x188));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00102d98;
  Object::~Object((Object *)this);
  return;
}



/* RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket() */

void __thiscall
RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket(RemoteDebuggerPeerWebSocket *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00102ef8;
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 400));
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 0x188));
  if (*(long *)(this + 0x180) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x180);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00102d98;
  Object::~Object((Object *)this);
  operator_delete(this,0x1a0);
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
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
    lVar7 = 0;
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
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00102c90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar10 == 0) goto LAB_00102c90;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00102b69:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00102b69;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00102ce6;
  }
  if (lVar10 == lVar7) {
LAB_00102c0f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00102ce6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00102bfa;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00102c0f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_00102bfa:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket() */

void __thiscall
RemoteDebuggerPeerWebSocket::~RemoteDebuggerPeerWebSocket(RemoteDebuggerPeerWebSocket *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Array, DefaultAllocator>::~List() */

void __thiscall List<Array,DefaultAllocator>::~List(List<Array,DefaultAllocator> *this)

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


