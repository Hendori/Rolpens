
/* StreamPeerMbedTLS::get_status() const */

undefined4 __thiscall StreamPeerMbedTLS::get_status(StreamPeerMbedTLS *this)

{
  return *(undefined4 *)(this + 0x180);
}



/* StreamPeerMbedTLS::put_data(unsigned char const*, int) */

undefined8 __thiscall
StreamPeerMbedTLS::put_data(StreamPeerMbedTLS *this,uchar *param_1,int param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x180) == 2) {
    local_34 = 0;
    if (0 < param_2) {
      do {
        uVar1 = (**(code **)(*(long *)this + 0x158))(this,param_1,param_2,&local_34);
        if ((int)uVar1 != 0) goto LAB_0010007f;
        param_2 = param_2 - local_34;
        param_1 = param_1 + local_34;
      } while (0 < param_2);
    }
    uVar1 = 0;
  }
  else {
    _err_print_error("put_data","modules/mbedtls/stream_peer_mbedtls.cpp",0x8c,
                     "Condition \"status != STATUS_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,0,0);
    uVar1 = 3;
  }
LAB_0010007f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::get_data(unsigned char*, int) */

undefined8 __thiscall
StreamPeerMbedTLS::get_data(StreamPeerMbedTLS *this,uchar *param_1,int param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x180) == 2) {
    local_34 = 0;
    if (0 < param_2) {
      do {
        uVar1 = (**(code **)(*(long *)this + 0x168))(this,param_1,param_2,&local_34);
        if ((int)uVar1 != 0) goto LAB_0010014f;
        param_2 = param_2 - local_34;
        param_1 = param_1 + local_34;
      } while (0 < param_2);
    }
    uVar1 = 0;
  }
  else {
    _err_print_error("get_data","modules/mbedtls/stream_peer_mbedtls.cpp",0xbe,
                     "Condition \"status != STATUS_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,0,0);
    uVar1 = 3;
  }
LAB_0010014f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::bio_send(void*, unsigned char const*, unsigned long) */

int StreamPeerMbedTLS::bio_send(void *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (uchar *)0x0) && (param_3 != 0)) {
    if (param_1 != (void *)0x0) {
      iVar2 = (**(code **)(**(long **)((long)param_1 + 400) + 0x158))();
      if (iVar2 == 0) {
        if (local_14 == 0) {
          local_14 = -0x6880;
        }
      }
      else {
        local_14 = -0x6c00;
      }
      goto LAB_001001f8;
    }
    _err_print_error("bio_send","modules/mbedtls/stream_peer_mbedtls.cpp",0x2a,
                     "Parameter \"sp\" is null.",0,0);
  }
  local_14 = 0;
LAB_001001f8:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::bio_recv(void*, unsigned char*, unsigned long) */

int StreamPeerMbedTLS::bio_recv(void *param_1,uchar *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_14;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 != (uchar *)0x0) && (param_3 != 0)) {
    if (param_1 != (void *)0x0) {
      iVar2 = (**(code **)(**(long **)((long)param_1 + 400) + 0x168))();
      if (iVar2 == 0) {
        if (local_14 == 0) {
          local_14 = -0x6900;
        }
      }
      else {
        local_14 = -0x6c00;
      }
      goto LAB_00100298;
    }
    _err_print_error("bio_recv","modules/mbedtls/stream_peer_mbedtls.cpp",0x3e,
                     "Parameter \"sp\" is null.",0,0);
  }
  local_14 = 0;
LAB_00100298:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::get_available_bytes() const */

undefined8 __thiscall StreamPeerMbedTLS::get_available_bytes(StreamPeerMbedTLS *this)

{
  undefined8 uVar1;
  
  if (*(int *)(this + 0x180) == 2) {
    uVar1 = mbedtls_ssl_get_bytes_avail(*(long *)(this + 0x198) + 0x630);
    return uVar1;
  }
  _err_print_error("get_available_bytes","modules/mbedtls/stream_peer_mbedtls.cpp",0x10e,
                   "Condition \"status != STATUS_CONNECTED\" is true. Returning: 0",0,0);
  return 0;
}



/* StreamPeerMbedTLS::get_stream() const */

void StreamPeerMbedTLS::get_stream(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    *in_RDI = *(long *)(in_RSI + 400);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* StreamPeerMbedTLS::disconnect_from_stream() [clone .part.0] */

void __thiscall StreamPeerMbedTLS::disconnect_from_stream(StreamPeerMbedTLS *this)

{
  char cVar1;
  int iVar2;
  Object *pOVar3;
  undefined8 uVar4;
  Object *pOVar5;
  
  if (*(long *)(this + 400) == 0) {
    TLSContextMbedTLS::clear();
    pOVar5 = *(Object **)(this + 400);
    if (pOVar5 == (Object *)0x0) {
LAB_00100409:
      *(undefined4 *)(this + 0x180) = 0;
      return;
    }
    *(undefined8 *)(this + 400) = 0;
    cVar1 = RefCounted::unreference();
    pOVar3 = (Object *)0x0;
    if (cVar1 == '\0') goto LAB_00100409;
LAB_00100549:
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 != '\0') goto LAB_001004b2;
  }
  else {
    pOVar3 = (Object *)
             __dynamic_cast(*(long *)(this + 400),&Object::typeinfo,&StreamPeerTCP::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
      iVar2 = StreamPeerTCP::get_status();
      if (iVar2 == 2) {
        uVar4 = TLSContextMbedTLS::get_context();
        mbedtls_ssl_close_notify(uVar4);
      }
      TLSContextMbedTLS::clear();
      pOVar5 = *(Object **)(this + 400);
      if (pOVar5 != (Object *)0x0) {
        *(undefined8 *)(this + 400) = 0;
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') goto LAB_00100549;
      }
      *(undefined4 *)(this + 0x180) = 0;
      goto LAB_0010046f;
    }
    TLSContextMbedTLS::clear();
    pOVar5 = *(Object **)(this + 400);
    if (pOVar5 == (Object *)0x0) goto LAB_00100409;
    *(undefined8 *)(this + 400) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_00100409;
    pOVar3 = (Object *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') goto LAB_00100409;
LAB_001004b2:
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  *(undefined4 *)(this + 0x180) = 0;
  if (pOVar3 == (Object *)0x0) {
    return;
  }
LAB_0010046f:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
    return;
  }
  return;
}



/* StreamPeerMbedTLS::disconnect_from_stream() */

void __thiscall StreamPeerMbedTLS::disconnect_from_stream(StreamPeerMbedTLS *this)

{
  if (1 < *(int *)(this + 0x180) - 1U) {
    return;
  }
  disconnect_from_stream(this);
  return;
}



/* StreamPeerMbedTLS::get_partial_data(unsigned char*, int, int&) */

undefined8 __thiscall
StreamPeerMbedTLS::get_partial_data(StreamPeerMbedTLS *this,uchar *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x180) != 2) {
    _err_print_error("get_partial_data","modules/mbedtls/stream_peer_mbedtls.cpp",0xd2,
                     "Condition \"status != STATUS_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,0,0);
    return 3;
  }
  *param_3 = 0;
  iVar3 = 0;
  do {
    uVar2 = TLSContextMbedTLS::get_context();
    uVar1 = mbedtls_ssl_read(uVar2,param_1 + iVar3,(long)(param_2 - iVar3));
    if ((uVar1 & 0xffffff7f) == 0xffff9700) {
      return 0;
    }
    if (uVar1 == 0xffff8780) {
      if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
        if (*(int *)(this + 0x180) - 1U < 2) {
          disconnect_from_stream(this);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x1a0))(this);
      }
      return 0x12;
    }
    if ((int)uVar1 < 1) {
      TLSContextMbedTLS::print_mbedtls_error(uVar1);
      if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
        if (*(int *)(this + 0x180) - 1U < 2) {
          disconnect_from_stream(this);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x1a0))(this);
      }
      return 0x1b;
    }
    iVar3 = uVar1 + *param_3;
    *param_3 = iVar3;
  } while (iVar3 < param_2);
  return 0;
}



/* StreamPeerMbedTLS::put_partial_data(unsigned char const*, int, int&) */

undefined8 __thiscall
StreamPeerMbedTLS::put_partial_data(StreamPeerMbedTLS *this,uchar *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x180) != 2) {
    _err_print_error("put_partial_data","modules/mbedtls/stream_peer_mbedtls.cpp",0xa0,
                     "Condition \"status != STATUS_CONNECTED\" is true. Returning: ERR_UNCONFIGURED"
                     ,0,0);
    return 3;
  }
  *param_3 = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    do {
      uVar2 = TLSContextMbedTLS::get_context();
      uVar1 = mbedtls_ssl_write(uVar2,param_1 + iVar3,(long)(param_2 - iVar3));
      if ((uVar1 & 0xffffff7f) == 0xffff9700) {
        return 0;
      }
      if (uVar1 == 0xffff8780) {
        if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
          if (*(int *)(this + 0x180) - 1U < 2) {
            disconnect_from_stream(this);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x1a0))(this);
        }
        return 0x12;
      }
      if ((int)uVar1 < 1) {
        TLSContextMbedTLS::print_mbedtls_error(uVar1);
        if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
          if (*(int *)(this + 0x180) - 1U < 2) {
            disconnect_from_stream(this);
          }
        }
        else {
          (**(code **)(*(long *)this + 0x1a0))(this);
        }
        return 0x1b;
      }
      iVar3 = uVar1 + *param_3;
      *param_3 = iVar3;
    } while (iVar3 < param_2);
  }
  return 0;
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



/* StreamPeerMbedTLS::~StreamPeerMbedTLS() */

void __thiscall StreamPeerMbedTLS::~StreamPeerMbedTLS(StreamPeerMbedTLS *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00104dd0;
  if (*(int *)(this + 0x180) - 1U < 2) {
    disconnect_from_stream(this);
  }
  if (*(long *)(this + 0x198) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x198);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 400) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 400);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00104a70;
  Object::~Object((Object *)this);
  return;
}



/* StreamPeerMbedTLS::~StreamPeerMbedTLS() */

void __thiscall StreamPeerMbedTLS::~StreamPeerMbedTLS(StreamPeerMbedTLS *this)

{
  ~StreamPeerMbedTLS(this);
  operator_delete(this,0x1a0);
  return;
}



/* StreamPeerMbedTLS::_cleanup() */

void __thiscall StreamPeerMbedTLS::_cleanup(StreamPeerMbedTLS *this)

{
  Object *pOVar1;
  char cVar2;
  
  TLSContextMbedTLS::clear();
  pOVar1 = *(Object **)(this + 400);
  if (pOVar1 != (Object *)0x0) {
    *(undefined8 *)(this + 400) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined4 *)(this + 0x180) = 0;
  return;
}



/* StreamPeerMbedTLS::_do_handshake() */

undefined8 __thiscall StreamPeerMbedTLS::_do_handshake(StreamPeerMbedTLS *this)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = TLSContextMbedTLS::get_context();
  uVar3 = mbedtls_ssl_handshake(uVar4);
  if ((uVar3 & 0xffffff7f) != 0xffff9700) {
    if (uVar3 != 0) {
      itos((long)&local_40);
      operator+((char *)&local_38,(String *)"TLS handshake error: ");
      _err_print_error("_do_handshake","modules/mbedtls/stream_peer_mbedtls.cpp",0x58,&local_38,0,0)
      ;
      lVar2 = local_38;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
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
      TLSContextMbedTLS::print_mbedtls_error(uVar3);
      if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
        if (*(int *)(this + 0x180) - 1U < 2) {
          disconnect_from_stream(this);
        }
      }
      else {
        (**(code **)(*(long *)this + 0x1a0))(this);
      }
      *(undefined4 *)(this + 0x180) = 3;
      uVar4 = 1;
      goto LAB_00100ae0;
    }
    *(undefined4 *)(this + 0x180) = 2;
  }
  uVar4 = 0;
LAB_00100ae0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::poll() */

void __thiscall StreamPeerMbedTLS::poll(StreamPeerMbedTLS *this)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (1 < *(int *)(this + 0x180) - 1U) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xed;
      pcVar6 = "Condition \"status != STATUS_CONNECTED && status != STATUS_HANDSHAKING\" is true.";
LAB_00100dc6:
      _err_print_error(&_LC21,"modules/mbedtls/stream_peer_mbedtls.cpp",uVar4,pcVar6,0,0);
      return;
    }
    goto LAB_00100e52;
  }
  if (*(long *)(this + 400) == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar4 = 0xee;
      pcVar6 = "Condition \"base.is_null()\" is true.";
      goto LAB_00100dc6;
    }
    goto LAB_00100e52;
  }
  if (*(int *)(this + 0x180) == 1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _do_handshake(this);
      return;
    }
    goto LAB_00100e52;
  }
  uVar4 = TLSContextMbedTLS::get_context();
  uVar2 = mbedtls_ssl_read(uVar4,&local_21,0);
  if ((uVar2 & 0xffffff7f) == 0xffff9700) {
LAB_00100c8f:
    if (*(long *)(this + 400) != 0) {
      pOVar5 = (Object *)
               __dynamic_cast(*(long *)(this + 400),&Object::typeinfo,&StreamPeerTCP::typeinfo,0);
      if (pOVar5 != (Object *)0x0) {
        cVar1 = RefCounted::reference();
        if (cVar1 != '\0') {
          iVar3 = StreamPeerTCP::get_status();
          if (iVar3 != 2) {
            if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
              if (*(int *)(this + 0x180) - 1U < 2) {
                disconnect_from_stream(this);
              }
            }
            else {
              (**(code **)(*(long *)this + 0x1a0))(this);
            }
          }
          cVar1 = RefCounted::unreference();
          if (cVar1 != '\0') {
            cVar1 = predelete_handler(pOVar5);
            if (cVar1 != '\0') {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
      }
    }
  }
  else {
    if (uVar2 != 0xffff8780) {
      if (-1 < (int)uVar2) goto LAB_00100c8f;
      TLSContextMbedTLS::print_mbedtls_error(uVar2);
    }
    if (*(code **)(*(long *)this + 0x1a0) == disconnect_from_stream) {
      if (*(int *)(this + 0x180) - 1U < 2) {
        disconnect_from_stream(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x1a0))(this);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100e52:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::connect_to_stream(Ref<StreamPeer>, String const&, Ref<TLSOptions>) */

int __thiscall
StreamPeerMbedTLS::connect_to_stream
          (StreamPeerMbedTLS *this,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  Object *pOVar2;
  long lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  Object *pOVar8;
  long in_FS_OFFSET;
  Object *local_48;
  long local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    iVar6 = 0x1f;
    _err_print_error("connect_to_stream","modules/mbedtls/stream_peer_mbedtls.cpp",100,
                     "Condition \"p_base.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
    goto LAB_00100f7d;
  }
  uVar7 = *(undefined8 *)(this + 0x198);
  if ((Object *)*param_4 == (Object *)0x0) {
    local_40 = 0;
    local_48 = (Object *)0x0;
    TLSOptions::client(&local_38,&local_48,&local_40);
    iVar6 = TLSContextMbedTLS::init_client(uVar7,0,param_3,&local_38);
    if (((local_38 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar8 = local_38, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_38), cVar4 != '\0')) {
LAB_001010d8:
      (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      Memory::free_static(pOVar8,false);
      if (cVar4 == '\0') goto LAB_00100ee8;
    }
    if (((local_48 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar8 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      if (*(code **)(*(long *)pOVar8 + 0x140) == X509CertificateMbedTLS::~X509CertificateMbedTLS) {
        *(code **)pOVar8 = Resource::~Resource;
        mbedtls_x509_crt_free(pOVar8 + 0x240);
        *(undefined ***)pOVar8 = &PTR__initialize_classv_00104bd0;
        Resource::~Resource((Resource *)pOVar8);
      }
      else {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
      }
      Memory::free_static(pOVar8,false);
    }
    lVar3 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar1 = (long *)(local_40 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    local_38 = (Object *)*param_4;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_38 = (Object *)0x0;
    }
    iVar6 = TLSContextMbedTLS::init_client(uVar7,0,param_3,&local_38);
    if ((local_38 != (Object *)0x0) &&
       (cVar4 = RefCounted::unreference(), pOVar8 = local_38, cVar4 != '\0')) {
      cVar4 = '\0';
      cVar5 = predelete_handler(local_38);
      if (cVar5 != '\0') goto LAB_001010d8;
    }
  }
LAB_00100ee8:
  if (iVar6 == 0) {
    pOVar8 = (Object *)*param_2;
    pOVar2 = *(Object **)(this + 400);
    if (pOVar8 != pOVar2) {
      *(Object **)(this + 400) = pOVar8;
      if ((pOVar8 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        *(undefined8 *)(this + 400) = 0;
      }
      if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    uVar7 = TLSContextMbedTLS::get_context();
    mbedtls_ssl_set_bio(uVar7,this,bio_send,bio_recv,0);
    *(undefined4 *)(this + 0x180) = 1;
    iVar6 = _do_handshake(this);
    if (iVar6 != 0) {
      *(undefined4 *)(this + 0x180) = 4;
      iVar6 = 1;
    }
  }
  else {
    _err_print_error("connect_to_stream","modules/mbedtls/stream_peer_mbedtls.cpp",0x67,
                     "Condition \"err != OK\" is true. Returning: err",0,0);
  }
LAB_00100f7d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* StreamPeerMbedTLS::accept_stream(Ref<StreamPeer>, Ref<TLSOptions>) */

int __thiscall StreamPeerMbedTLS::accept_stream(StreamPeerMbedTLS *this,long *param_2,long *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Object *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    _err_print_error("accept_stream","modules/mbedtls/stream_peer_mbedtls.cpp",0x77,
                     "Condition \"p_base.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",0,0)
    ;
  }
  else {
    pOVar1 = (Object *)*param_3;
    if ((pOVar1 != (Object *)0x0) && (*(int *)(pOVar1 + 0x17c) == 2)) {
      uVar5 = *(undefined8 *)(this + 0x198);
      local_38 = (Object *)0x0;
      local_40 = pOVar1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_40 = (Object *)0x0;
      }
      iVar4 = TLSContextMbedTLS::init_server(uVar5,0,&local_40,&local_38);
      if (local_40 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar1 = local_40;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_40);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      if (local_38 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar1 = local_38;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_38);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
            Memory::free_static(pOVar1,false);
          }
        }
      }
      if (iVar4 == 0) {
        pOVar1 = (Object *)*param_2;
        pOVar2 = *(Object **)(this + 400);
        if (pOVar1 != pOVar2) {
          *(Object **)(this + 400) = pOVar1;
          if (pOVar1 != (Object *)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              *(undefined8 *)(this + 400) = 0;
            }
          }
          if (pOVar2 != (Object *)0x0) {
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
        uVar5 = TLSContextMbedTLS::get_context();
        mbedtls_ssl_set_bio(uVar5,this,bio_send,bio_recv,0);
        *(undefined4 *)(this + 0x180) = 1;
        iVar4 = _do_handshake(this);
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0x180) = 2;
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
      }
      else {
        _err_print_error("accept_stream","modules/mbedtls/stream_peer_mbedtls.cpp",0x7b,
                         "Condition \"err != OK\" is true. Returning: err",0,0);
      }
      goto LAB_00101309;
    }
    _err_print_error("accept_stream","modules/mbedtls/stream_peer_mbedtls.cpp",0x78,
                     "Condition \"p_options.is_null() || !p_options->is_server()\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,0,0);
  }
  iVar4 = 0x1f;
LAB_00101309:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerMbedTLS::StreamPeerMbedTLS() */

void __thiscall StreamPeerMbedTLS::StreamPeerMbedTLS(StreamPeerMbedTLS *this)

{
  char cVar1;
  TLSContextMbedTLS *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  RefCounted::RefCounted((RefCounted *)this);
  this[0x17c] = (StreamPeerMbedTLS)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00104dd0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  this_00 = (TLSContextMbedTLS *)operator_new(0x9c0,"");
  TLSContextMbedTLS::TLSContextMbedTLS(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar3 = *(Object **)(this + 0x198);
    if (pOVar3 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)(this + 0x198) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (TLSContextMbedTLS *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)(this + 0x198);
    pOVar2 = pOVar3;
    if (this_00 == (TLSContextMbedTLS *)pOVar3) goto LAB_0010155e;
    *(TLSContextMbedTLS **)(this + 0x198) = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)(this + 0x198) = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010155e;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (TLSContextMbedTLS *)0x0) {
    return;
  }
LAB_0010155e:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* StreamPeerMbedTLS::_create_func(bool) */

StreamPeerMbedTLS * StreamPeerMbedTLS::_create_func(bool param_1)

{
  StreamPeerMbedTLS *this;
  
  this = (StreamPeerMbedTLS *)operator_new(0x1a0,"");
  StreamPeerMbedTLS(this);
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* StreamPeerMbedTLS::initialize_tls() */

void StreamPeerMbedTLS::initialize_tls(void)

{
  StreamPeerTLS::_create = _create_func;
  return;
}



/* StreamPeerMbedTLS::finalize_tls() */

void StreamPeerMbedTLS::finalize_tls(void)

{
  StreamPeerTLS::_create = 0;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* X509Certificate::is_class_ptr(void*) const */

uint __thiscall X509Certificate::is_class_ptr(X509Certificate *this,void *param_1)

{
  return (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* X509Certificate::_getv(StringName const&, Variant&) const */

undefined8 X509Certificate::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_setv(StringName const&, Variant const&) */

undefined8 X509Certificate::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_validate_propertyv(PropertyInfo&) const */

void X509Certificate::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* X509Certificate::_property_can_revertv(StringName const&) const */

undefined8 X509Certificate::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* X509Certificate::_property_get_revertv(StringName const&, Variant&) const */

undefined8 X509Certificate::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* X509Certificate::_notificationv(int, bool) */

void X509Certificate::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StreamPeerTLS::is_class_ptr(void*) const */

uint __thiscall StreamPeerTLS::is_class_ptr(StreamPeerTLS *this,void *param_1)

{
  return (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &StreamPeer::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x104f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StreamPeerTLS::_getv(StringName const&, Variant&) const */

undefined8 StreamPeerTLS::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerTLS::_setv(StringName const&, Variant const&) */

undefined8 StreamPeerTLS::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerTLS::_validate_propertyv(PropertyInfo&) const */

void StreamPeerTLS::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StreamPeerTLS::_property_can_revertv(StringName const&) const */

undefined8 StreamPeerTLS::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StreamPeerTLS::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StreamPeerTLS::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StreamPeerTLS::_notificationv(int, bool) */

void StreamPeerTLS::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104a70;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00104a70;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(code **)this = Resource::~Resource;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_00104bd0;
  Resource::~Resource((Resource *)this);
  return;
}



/* X509Certificate::_get_class_namev() const */

undefined8 * X509Certificate::_get_class_namev(void)

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
LAB_00101c93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101c93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
      goto LAB_00101cfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"X509Certificate");
LAB_00101cfe:
  return &_get_class_namev()::_class_name_static;
}



/* StreamPeerTLS::_get_class_namev() const */

undefined8 * StreamPeerTLS::_get_class_namev(void)

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
LAB_00101d83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101d83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StreamPeerTLS");
      goto LAB_00101dee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StreamPeerTLS");
LAB_00101dee:
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
LAB_00101e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00101ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00101ece:
  return &_get_class_namev()::_class_name_static;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerTLS::get_class() const */

void StreamPeerTLS::get_class(void)

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



/* X509Certificate::get_class() const */

void X509Certificate::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010225f;
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
LAB_0010225f:
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
    if (cVar6 != '\0') goto LAB_00102313;
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
              if (lVar5 == 0) goto LAB_001023c3;
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
LAB_001023c3:
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
      if (cVar6 != '\0') goto LAB_00102313;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102313:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerTLS::is_class(String const&) const */

undefined8 __thiscall StreamPeerTLS::is_class(StreamPeerTLS *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001024ef;
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
LAB_001024ef:
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
    if (cVar6 != '\0') goto LAB_001025a3;
  }
  cVar6 = String::operator==(param_1,"StreamPeerTLS");
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
              if (lVar5 == 0) goto LAB_00102663;
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
LAB_00102663:
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
      if (cVar6 != '\0') goto LAB_001025a3;
    }
    cVar6 = String::operator==(param_1,"StreamPeer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010270c;
    }
  }
LAB_001025a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010270c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509Certificate::is_class(String const&) const */

undefined8 __thiscall X509Certificate::is_class(X509Certificate *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010278f;
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
LAB_0010278f:
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
    if (cVar6 != '\0') goto LAB_00102843;
  }
  cVar6 = String::operator==(param_1,"X509Certificate");
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
              if (lVar5 == 0) goto LAB_00102903;
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
LAB_00102903:
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
      if (cVar6 != '\0') goto LAB_00102843;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001029ac;
    }
  }
LAB_00102843:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001029ac:
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
LAB_00102cc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102cc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102ce6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102ce6:
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



/* X509Certificate::_initialize_classv() */

void X509Certificate::_initialize_classv(void)

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
    if (Resource::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
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
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "X509Certificate";
    local_70 = 0;
    local_50 = 0xf;
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
    if ((code *)PTR__bind_methods_00107008 != Resource::_bind_methods) {
      X509Certificate::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StreamPeerTLS::_initialize_classv() */

void StreamPeerTLS::_initialize_classv(void)

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
    if (StreamPeer::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00107010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "RefCounted";
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "StreamPeer";
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
      StreamPeer::_bind_methods();
      StreamPeer::initialize_class()::initialized = '\x01';
    }
    local_58 = "StreamPeer";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StreamPeerTLS";
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
    if ((code *)PTR__bind_methods_00107018 != StreamPeer::_bind_methods) {
      StreamPeerTLS::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00103968:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103968;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103985;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103985:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* X509Certificate::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
X509Certificate::_get_property_listv(X509Certificate *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "X509Certificate";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "X509Certificate";
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
LAB_00103db8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103db8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103dd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103dd5:
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
  StringName::StringName((StringName *)&local_78,"X509Certificate",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

{
  *(code **)this = Resource::~Resource;
  mbedtls_x509_crt_free();
  *(undefined ***)this = &PTR__initialize_classv_00104bd0;
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x530);
  return;
}



/* StreamPeer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StreamPeer::_get_property_listv(StreamPeer *this,List *param_1,bool param_2)

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
  local_78 = "StreamPeer";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StreamPeer";
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
LAB_00104258:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104258;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104275;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104275:
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
  StringName::StringName((StringName *)&local_78,"StreamPeer",false);
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



/* StreamPeerTLS::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StreamPeerTLS::_get_property_listv(StreamPeerTLS *this,List *param_1,bool param_2)

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
    StreamPeer::_get_property_listv((StreamPeer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StreamPeerTLS";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StreamPeerTLS";
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
LAB_001046a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001046a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001046c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001046c5:
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
  StringName::StringName((StringName *)&local_78,"StreamPeerTLS",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StreamPeer::_get_property_listv((StreamPeer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* X509CertificateMbedTLS::~X509CertificateMbedTLS() */

void __thiscall X509CertificateMbedTLS::~X509CertificateMbedTLS(X509CertificateMbedTLS *this)

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


