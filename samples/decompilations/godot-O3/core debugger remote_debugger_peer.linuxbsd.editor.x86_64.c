
/* RemoteDebuggerPeerTCP::is_peer_connected() */

RemoteDebuggerPeerTCP __thiscall
RemoteDebuggerPeerTCP::is_peer_connected(RemoteDebuggerPeerTCP *this)

{
  return this[0x200];
}



/* RemoteDebuggerPeerTCP::has_message() */

undefined4 __thiscall RemoteDebuggerPeerTCP::has_message(RemoteDebuggerPeerTCP *this)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(long *)(this + 0x1c0) != 0) {
    iVar1 = *(int *)(*(long *)(this + 0x1c0) + 0x10);
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0 < iVar1);
  }
  return uVar2;
}



/* RemoteDebuggerPeerTCP::get_max_message_size() const */

undefined8 RemoteDebuggerPeerTCP::get_max_message_size(void)

{
  return 0x800000;
}



/* RemoteDebuggerPeerTCP::poll() */

void RemoteDebuggerPeerTCP::poll(void)

{
  return;
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



/* RemoteDebuggerPeerTCP::put_message(Array const&) */

Array * __thiscall RemoteDebuggerPeerTCP::put_message(RemoteDebuggerPeerTCP *this,Array *param_1)

{
  long *plVar1;
  long lVar2;
  Array *pAVar3;
  char cVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  Array *pAVar8;
  Array *pAVar9;
  Array *pAVar10;
  undefined8 *puVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  Array aAStack_70 [8];
  long lStack_68;
  
  pAVar9 = param_1;
  uVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x188));
  if (uVar5 == 0) {
    pAVar9 = (Array *)0x6;
    if (*(long *)(this + 0x1c8) == 0) {
      if (*(int *)(this + 0x17c) < 1) goto LAB_00100209;
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0x1c8) = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    else if (*(int *)(this + 0x17c) <= *(int *)(*(long *)(this + 0x1c8) + 0x10)) goto LAB_00100209;
    pAVar9 = (Array *)operator_new(0x20,DefaultAllocator::alloc);
    Array::Array(pAVar9);
    *(undefined8 *)(pAVar9 + 0x18) = 0;
    *(undefined1 (*) [16])(pAVar9 + 8) = (undefined1  [16])0x0;
    Array::operator=(pAVar9,param_1);
    plVar12 = *(long **)(this + 0x1c8);
    lVar7 = plVar12[1];
    *(undefined8 *)(pAVar9 + 8) = 0;
    *(long **)(pAVar9 + 0x18) = plVar12;
    *(long *)(pAVar9 + 0x10) = lVar7;
    if (lVar7 != 0) {
      *(Array **)(lVar7 + 8) = pAVar9;
    }
    plVar12[1] = (long)pAVar9;
    if (*plVar12 == 0) {
      *plVar12 = (long)pAVar9;
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
    pAVar9 = (Array *)0x0;
LAB_00100209:
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x188));
    return pAVar9;
  }
  pAVar8 = (Array *)(ulong)uVar5;
  std::__throw_system_error(uVar5);
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  pAVar10 = pAVar9;
  uVar5 = pthread_mutex_lock((pthread_mutex_t *)(pAVar9 + 0x188));
  if (uVar5 != 0) {
    plVar12 = (long *)(ulong)uVar5;
    std::__throw_system_error(uVar5);
    if (*plVar12 != 0) {
      LOCK();
      plVar1 = (long *)(*plVar12 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar7 = *plVar12;
        *plVar12 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
      else {
        *plVar12 = 0;
      }
    }
    pAVar8 = *(Array **)pAVar10;
    pAVar9 = pAVar8 + -0x10;
    if (pAVar8 != (Array *)0x0) {
      do {
        pAVar3 = *(Array **)pAVar9;
        if (pAVar3 == (Array *)0x0) {
          return (Array *)0x0;
        }
        LOCK();
        pAVar8 = *(Array **)pAVar9;
        bVar13 = pAVar3 == pAVar8;
        if (bVar13) {
          *(Array **)pAVar9 = pAVar3 + 1;
          pAVar8 = pAVar3;
        }
        UNLOCK();
      } while (!bVar13);
      if (pAVar8 != (Array *)0xffffffffffffffff) {
        pAVar8 = *(Array **)pAVar10;
        *plVar12 = (long)pAVar8;
      }
    }
    return pAVar8;
  }
  if (*(code **)(*(long *)pAVar9 + 0x160) == has_message) {
    puVar11 = *(undefined8 **)(pAVar9 + 0x1c0);
    if ((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) < 1)) {
LAB_001003b0:
      _err_print_error("get_message","core/debugger/remote_debugger_peer.cpp",0x2f,
                       "Condition \"!has_message()\" is true. Returning: Array()",0,0);
      Array::Array(pAVar8);
      goto LAB_0010037b;
    }
LAB_001002e4:
    pAVar10 = (Array *)*puVar11;
  }
  else {
    cVar4 = (**(code **)(*(long *)pAVar9 + 0x160))(pAVar9);
    if (cVar4 == '\0') goto LAB_001003b0;
    puVar11 = *(undefined8 **)(pAVar9 + 0x1c0);
    if (puVar11 != (undefined8 *)0x0) goto LAB_001002e4;
    pAVar10 = (Array *)0x0;
  }
  Array::Array(aAStack_70,pAVar10);
  plVar12 = *(long **)(pAVar9 + 0x1c0);
  if ((plVar12 != (long *)0x0) && (pAVar10 = (Array *)*plVar12, pAVar10 != (Array *)0x0)) {
    if (plVar12 == *(long **)(pAVar10 + 0x18)) {
      lVar7 = *(long *)(pAVar10 + 8);
      lVar2 = *(long *)(pAVar10 + 0x10);
      *plVar12 = lVar7;
      if (pAVar10 == (Array *)plVar12[1]) {
        plVar12[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar7;
        lVar7 = *(long *)(pAVar10 + 8);
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar2;
      }
      Array::~Array(pAVar10);
      Memory::free_static(pAVar10,false);
      *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)((long)*(void **)(pAVar9 + 0x1c0) + 0x10) == 0) {
      Memory::free_static(*(void **)(pAVar9 + 0x1c0),false);
      *(long *)(pAVar9 + 0x1c0) = 0;
    }
  }
  Array::Array(pAVar8,aAStack_70);
  Array::~Array(aAStack_70);
LAB_0010037b:
  pthread_mutex_unlock((pthread_mutex_t *)(pAVar9 + 0x188));
  if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebuggerPeerTCP::get_message() */

void RemoteDebuggerPeerTCP::get_message(void)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *in_RSI;
  long *plVar6;
  undefined8 *puVar7;
  Array *pAVar8;
  Array *in_RDI;
  long *plVar9;
  long in_FS_OFFSET;
  bool bVar10;
  Array aAStack_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = in_RSI;
  uVar3 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 0x31));
  if (uVar3 != 0) {
    plVar9 = (long *)(ulong)uVar3;
    std::__throw_system_error(uVar3);
    if (*plVar9 != 0) {
      LOCK();
      plVar1 = (long *)(*plVar9 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar4 = *plVar9;
        *plVar9 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
      else {
        *plVar9 = 0;
      }
    }
    plVar1 = (long *)(*plVar6 + -0x10);
    if (*plVar6 != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) {
          return;
        }
        LOCK();
        lVar5 = *plVar1;
        bVar10 = lVar4 == lVar5;
        if (bVar10) {
          *plVar1 = lVar4 + 1;
          lVar5 = lVar4;
        }
        UNLOCK();
      } while (!bVar10);
      if (lVar5 != -1) {
        *plVar9 = *plVar6;
      }
    }
    return;
  }
  if (*(code **)(*in_RSI + 0x160) == has_message) {
    puVar7 = (undefined8 *)in_RSI[0x38];
    if ((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) < 1)) {
LAB_001003b0:
      _err_print_error("get_message","core/debugger/remote_debugger_peer.cpp",0x2f,
                       "Condition \"!has_message()\" is true. Returning: Array()",0,0);
      Array::Array(in_RDI);
      goto LAB_0010037b;
    }
LAB_001002e4:
    pAVar8 = (Array *)*puVar7;
  }
  else {
    cVar2 = (**(code **)(*in_RSI + 0x160))();
    if (cVar2 == '\0') goto LAB_001003b0;
    puVar7 = (undefined8 *)in_RSI[0x38];
    if (puVar7 != (undefined8 *)0x0) goto LAB_001002e4;
    pAVar8 = (Array *)0x0;
  }
  Array::Array(aAStack_48,pAVar8);
  plVar6 = (long *)in_RSI[0x38];
  if ((plVar6 != (long *)0x0) && (pAVar8 = (Array *)*plVar6, pAVar8 != (Array *)0x0)) {
    if (plVar6 == *(long **)(pAVar8 + 0x18)) {
      lVar4 = *(long *)(pAVar8 + 8);
      lVar5 = *(long *)(pAVar8 + 0x10);
      *plVar6 = lVar4;
      if (pAVar8 == (Array *)plVar6[1]) {
        plVar6[1] = lVar5;
      }
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = lVar4;
        lVar4 = *(long *)(pAVar8 + 8);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar5;
      }
      Array::~Array(pAVar8);
      Memory::free_static(pAVar8,false);
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    if (*(int *)(in_RSI[0x38] + 0x10) == 0) {
      Memory::free_static((void *)in_RSI[0x38],false);
      in_RSI[0x38] = 0;
    }
  }
  Array::Array(in_RDI,aAStack_48);
  Array::~Array(aAStack_48);
LAB_0010037b:
  pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 0x31));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* RemoteDebuggerPeerTCP::_write_out() */

void __thiscall RemoteDebuggerPeerTCP::_write_out(RemoteDebuggerPeerTCP *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uchar *puVar5;
  ulong uVar6;
  Array *pAVar7;
  uchar *puVar8;
  long in_FS_OFFSET;
  int local_5c;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar3 = StreamPeerTCP::get_status();
    if (iVar3 != 2) break;
    iVar3 = StreamPeerTCP::wait(*(undefined8 *)(this + 0x180),1,0);
    if (iVar3 != 0) break;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1e0));
    iVar3 = *(int *)(this + 0x1d0);
    puVar8 = *(uchar **)(this + 0x1e0);
    if (iVar3 < 1) {
      if ((*(long *)(this + 0x1c8) == 0) || (*(int *)(*(long *)(this + 0x1c8) + 0x10) == 0)) break;
      iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x188));
      if (iVar3 != 0) {
        std::__throw_system_error(iVar3);
        goto LAB_0010081d;
      }
      pAVar7 = *(Array **)(this + 0x1c8);
      if (pAVar7 != (Array *)0x0) {
        pAVar7 = *(Array **)pAVar7;
      }
      Variant::Variant((Variant *)local_58,pAVar7);
      plVar1 = *(long **)(this + 0x1c8);
      if ((plVar1 != (long *)0x0) && (pAVar7 = (Array *)*plVar1, pAVar7 != (Array *)0x0)) {
        if (plVar1 == *(long **)(pAVar7 + 0x18)) {
          lVar4 = *(long *)(pAVar7 + 8);
          lVar2 = *(long *)(pAVar7 + 0x10);
          *plVar1 = lVar4;
          if (pAVar7 == (Array *)plVar1[1]) {
            plVar1[1] = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar4;
            lVar4 = *(long *)(pAVar7 + 8);
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar2;
          }
          Array::~Array(pAVar7);
          Memory::free_static(pAVar7,false);
          *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
        if (*(int *)((long)*(void **)(this + 0x1c8) + 0x10) == 0) {
          Memory::free_static(*(void **)(this + 0x1c8),false);
          *(undefined8 *)(this + 0x1c8) = 0;
        }
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x188));
      local_5c = 0;
      iVar3 = encode_variant((Variant *)local_58,(uchar *)0x0,&local_5c,false,0);
      if (iVar3 == 0) {
        if (*(long *)(this + 0x1e0) == 0) {
          lVar4 = -3;
        }
        else {
          lVar4 = *(long *)(*(long *)(this + 0x1e0) + -8) + -3;
        }
        uVar6 = (ulong)local_5c;
        if ((long)uVar6 < lVar4) {
          puVar5 = puVar8;
          do {
            *puVar5 = (uchar)uVar6;
            puVar5 = puVar5 + 1;
            uVar6 = uVar6 >> 8 & 0xffffff;
          } while (puVar8 + 4 != puVar5);
          encode_variant((Variant *)local_58,puVar8 + 4,&local_5c,false,0);
          *(undefined4 *)(this + 0x1d4) = 0;
          iVar3 = local_5c + 4;
          *(int *)(this + 0x1d0) = iVar3;
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
            iVar3 = *(int *)(this + 0x1d0);
            puVar8 = puVar8 + *(int *)(this + 0x1d4);
          }
          goto LAB_0010056c;
        }
      }
      _err_print_error("_write_out","core/debugger/remote_debugger_peer.cpp",0x6c,
                       "Condition \"err != OK || size > out_buf.size() - 4\" is true. Continuing.",0
                       ,0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      puVar8 = puVar8 + *(int *)(this + 0x1d4);
LAB_0010056c:
      local_5c = 0;
      (**(code **)(**(long **)(this + 0x180) + 0x158))(*(long **)(this + 0x180),puVar8,iVar3);
      *(ulong *)(this + 0x1d0) =
           CONCAT44((int)((ulong)*(undefined8 *)(this + 0x1d0) >> 0x20) + local_5c,
                    (int)*(undefined8 *)(this + 0x1d0) - local_5c);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010081d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebuggerPeerTCP::_read_in() */

void __thiscall RemoteDebuggerPeerTCP::_read_in(RemoteDebuggerPeerTCP *this)

{
  char cVar1;
  uchar *puVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  Array *this_00;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  long in_FS_OFFSET;
  int iVar8;
  uint local_64;
  int local_60 [2];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    while( true ) {
      iVar5 = StreamPeerTCP::get_status();
      if ((iVar5 != 2) ||
         (iVar5 = StreamPeerTCP::wait(*(undefined8 *)(this + 0x180),0,0), iVar5 != 0))
      goto LAB_00100b20;
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)(this + 0x1f8));
      puVar2 = *(uchar **)(this + 0x1f8);
      if (*(int *)(this + 0x1e8) < 1) break;
LAB_001008c0:
      local_64 = 0;
      (**(code **)(**(long **)(this + 0x180) + 0x168))();
      iVar8 = local_64 + (int)((ulong)*(undefined8 *)(this + 0x1e8) >> 0x20);
      iVar5 = (int)*(undefined8 *)(this + 0x1e8) - local_64;
      *(ulong *)(this + 0x1e8) = CONCAT44(iVar8,iVar5);
      if (iVar5 == 0) {
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        iVar5 = decode_variant((Variant *)&local_58,puVar2,iVar8,(int *)&local_64,false,0);
        if ((*(uint *)(this + 0x1ec) == local_64) && (iVar5 == 0)) {
          if ((int)local_58 != 0x1c) {
            _err_print_error("_read_in","core/debugger/remote_debugger_peer.cpp",0x92,
                             "Condition \"var.get_type() != Variant::ARRAY\" is true. Continuing.",
                             "Malformed packet received, not an Array.",0,0);
            goto LAB_00100b75;
          }
          iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x188));
          if (iVar5 != 0) {
            std::__throw_system_error(iVar5);
            goto LAB_00100bfa;
          }
          Variant::operator_cast_to_Array((Variant *)local_60);
          if (*(long *)(this + 0x1c0) == 0) {
            pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0x1c0) = pauVar6;
            *(undefined4 *)pauVar6[1] = 0;
            *pauVar6 = (undefined1  [16])0x0;
          }
          this_00 = (Array *)operator_new(0x20,DefaultAllocator::alloc);
          Array::Array(this_00);
          *(undefined8 *)(this_00 + 0x18) = 0;
          *(undefined1 (*) [16])(this_00 + 8) = (undefined1  [16])0x0;
          Array::operator=(this_00,(Array *)local_60);
          plVar3 = *(long **)(this + 0x1c0);
          lVar4 = plVar3[1];
          *(undefined8 *)(this_00 + 8) = 0;
          *(long **)(this_00 + 0x18) = plVar3;
          *(long *)(this_00 + 0x10) = lVar4;
          if (lVar4 != 0) {
            *(Array **)(lVar4 + 8) = this_00;
          }
          plVar3[1] = (long)this_00;
          if (*plVar3 == 0) {
            *plVar3 = (long)this_00;
          }
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          Array::~Array((Array *)local_60);
          pthread_mutex_unlock((pthread_mutex_t *)(this + 0x188));
          cVar1 = Variant::needs_deinit[(int)local_58];
        }
        else {
          _err_print_error("_read_in","core/debugger/remote_debugger_peer.cpp",0x91,
                           "Condition \"read != in_pos || err != OK\" is true. Continuing.");
LAB_00100b75:
          cVar1 = Variant::needs_deinit[(int)local_58];
        }
        if (cVar1 != '\0') {
          Variant::_clear_internal();
        }
      }
    }
    iVar5 = 0;
    if (*(long *)(this + 0x1c0) != 0) {
      iVar5 = *(int *)(*(long *)(this + 0x1c0) + 0x10);
    }
    if ((*(int *)(this + 0x17c) < iVar5) ||
       (iVar5 = (**(code **)(**(long **)(this + 0x180) + 0x170))(), iVar5 < 4)) {
LAB_00100b20:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00100bfa:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_64 = 0;
    local_60[0] = 0;
    iVar5 = (**(code **)(**(long **)(this + 0x180) + 0x168))
                      (*(long **)(this + 0x180),&local_64,4,local_60);
    if ((local_60[0] == 4) && (iVar5 == 0)) {
      uVar7 = 0;
      if (*(long *)(this + 0x1f8) != 0) {
        uVar7 = *(uint *)(*(long *)(this + 0x1f8) + -8);
      }
      if (local_64 <= uVar7) {
        *(uint *)(this + 0x1e8) = local_64;
        *(undefined4 *)(this + 0x1ec) = 0;
        goto LAB_001008c0;
      }
    }
    _err_print_error("_read_in","core/debugger/remote_debugger_peer.cpp",0x86,
                     "Condition \"read != 4 || err != OK || size > (uint32_t)in_buf.size()\" is true. Continuing."
                    );
  } while( true );
}



/* RemoteDebuggerPeerTCP::_thread_func(void*) */

void RemoteDebuggerPeerTCP::_thread_func(void *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  
  do {
    if (*(char *)((long)param_1 + 0x201) == '\0') {
      return;
    }
                    /* WARNING: Load size is inaccurate */
    if (*(code **)(*param_1 + 0x150) == is_peer_connected) {
      cVar1 = *(char *)((long)param_1 + 0x200);
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x150))(param_1);
    }
    if (cVar1 == '\0') {
      return;
    }
    plVar4 = (long *)OS::get_singleton();
    lVar5 = (**(code **)(*plVar4 + 0x208))(plVar4);
    StreamPeerTCP::poll();
    if (*(char *)((long)param_1 + 0x200) == '\0') {
                    /* WARNING: Load size is inaccurate */
      pcVar6 = *(code **)(*param_1 + 0x150);
      if (pcVar6 == is_peer_connected) goto LAB_00100c33;
LAB_00100cf6:
      cVar1 = (*pcVar6)(param_1);
    }
    else {
      _write_out((RemoteDebuggerPeerTCP *)param_1);
      _read_in((RemoteDebuggerPeerTCP *)param_1);
      iVar2 = StreamPeerTCP::get_status();
                    /* WARNING: Load size is inaccurate */
      *(bool *)((long)param_1 + 0x200) = iVar2 == 2;
      pcVar6 = *(code **)(*param_1 + 0x150);
      if (pcVar6 != is_peer_connected) goto LAB_00100cf6;
LAB_00100c33:
      cVar1 = *(char *)((long)param_1 + 0x200);
    }
    if (cVar1 == '\0') {
      return;
    }
    plVar4 = (long *)OS::get_singleton();
    lVar3 = (**(code **)(*plVar4 + 0x208))(plVar4);
    if ((ulong)(lVar3 - lVar5) < 0x1af4) {
      plVar4 = (long *)OS::get_singleton();
      (**(code **)(*plVar4 + 0x1f8))(plVar4,0x1af4 - (int)(lVar3 - lVar5));
    }
  } while( true );
}



/* RemoteDebuggerPeerTCP::_poll() */

void __thiscall RemoteDebuggerPeerTCP::_poll(RemoteDebuggerPeerTCP *this)

{
  int iVar1;
  
  StreamPeerTCP::poll();
  if (this[0x200] == (RemoteDebuggerPeerTCP)0x0) {
    return;
  }
  _write_out(this);
  _read_in(this);
  iVar1 = StreamPeerTCP::get_status();
  this[0x200] = (RemoteDebuggerPeerTCP)(iVar1 == 2);
  return;
}



/* RemoteDebuggerPeer::RemoteDebuggerPeer() */

void __thiscall RemoteDebuggerPeer::RemoteDebuggerPeer(RemoteDebuggerPeer *this)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined4 *)(this + 0x17c) = 0x1000;
  *(undefined ***)this = &PTR__initialize_classv_001036b0;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_50,"network/limits/debugger/max_queued_messages",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_48);
  *(int *)(this + 0x17c) = iVar1;
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RemoteDebuggerPeerTCP::connect_to_host(String const&, unsigned short) */

undefined8 RemoteDebuggerPeerTCP::connect_to_host(String *param_1,ushort param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined6 in_register_00000032;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined2 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int local_60 [2];
  int local_58 [2];
  undefined8 uStack_50;
  undefined2 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  IPAddress::clear();
  cVar4 = String::is_valid_ip_address();
  if (cVar4 == '\0') {
    uVar7 = IP::get_singleton();
    IP::resolve_hostname(local_58,uVar7,(String *)CONCAT62(in_register_00000032,param_2),3);
    local_88 = local_48;
    uStack_90 = uStack_50;
  }
  else {
    IPAddress::IPAddress((IPAddress *)local_58,(String *)CONCAT62(in_register_00000032,param_2));
    local_88 = local_48;
    uStack_90 = uStack_50;
  }
  piVar8 = (int *)&local_78;
  local_68 = _LC29;
  local_78 = __LC28;
  uStack_70 = _UNK_00103a38;
  StreamPeerTCP::connect_to_host(*(IPAddress **)(param_1 + 0x180),(int)local_98);
  do {
    while( true ) {
      StreamPeerTCP::poll();
      iVar5 = StreamPeerTCP::get_status();
      if (iVar5 == 2) {
        cVar4 = is_print_verbose_enabled();
        if (cVar4 != '\0') {
          Variant::Variant((Variant *)local_58,"Remote Debugger: Connected!");
          stringify_variants((Variant *)&local_a8);
          __print_line((String *)&local_a8);
          pcVar3 = local_a8;
          if (local_a8 != (char *)0x0) {
            LOCK();
            plVar6 = (long *)(local_a8 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_a8 = (char *)0x0;
              Memory::free_static(pcVar3 + -0x10,false);
            }
          }
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        goto LAB_001011b8;
      }
      iVar5 = *piVar8;
      plVar6 = (long *)OS::get_singleton();
      (**(code **)(*plVar6 + 0x1f8))(plVar6,iVar5 * 1000);
      cVar4 = is_print_verbose_enabled();
      if (cVar4 != '\0') break;
LAB_00100f30:
      piVar8 = piVar8 + 1;
      if (local_60 == piVar8) goto LAB_001011b8;
    }
    local_b8 = 0;
    local_a8 = " msec.";
    local_a0 = 6;
    String::parse_latin1((StrRange *)&local_b8);
    String::num_int64((long)&local_c8,iVar5,true);
    local_a8 = "\', retrying in ";
    local_d8 = 0;
    local_a0 = 0xf;
    String::parse_latin1((StrRange *)&local_d8);
    iVar5 = StreamPeerTCP::get_status();
    String::num_int64((long)&local_e8,iVar5,true);
    operator+((char *)&local_e0,(String *)"Remote Debugger: Connection failed with status: \'");
    String::operator+((String *)&local_d0,(String *)&local_e0);
    String::operator+((String *)&local_c0,(String *)&local_d0);
    String::operator+((String *)&local_b0,(String *)&local_c0);
    Variant::Variant((Variant *)local_58,(String *)&local_b0);
    stringify_variants((Variant *)&local_a8);
    __print_line((String *)&local_a8);
    pcVar3 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar6 = (long *)(local_a8 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar6 = (long *)(local_b0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar6 = (long *)(local_c0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d0;
    if (local_d0 != 0) {
      LOCK();
      plVar6 = (long *)(local_d0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar6 = (long *)(local_e0 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar6 = (long *)(local_e8 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_d8;
    if (local_d8 != 0) {
      LOCK();
      plVar6 = (long *)(local_d8 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar6 = (long *)(local_c8 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_b8;
    if (local_b8 == 0) goto LAB_00100f30;
    LOCK();
    plVar6 = (long *)(local_b8 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 != 0) goto LAB_00100f30;
    piVar8 = piVar8 + 1;
    local_b8 = 0;
    Memory::free_static((void *)(lVar2 + -0x10),false);
  } while (local_60 != piVar8);
LAB_001011b8:
  iVar5 = StreamPeerTCP::get_status();
  if (iVar5 == 2) {
    *(undefined2 *)(param_1 + 0x200) = 0x101;
    local_a8 = (char *)CONCAT44(local_a8._4_4_,1);
    Thread::start((_func_void_void_ptr *)(param_1 + 0x1b0),_thread_func,(Settings *)param_1);
    uVar7 = 0;
  }
  else {
    iVar5 = StreamPeerTCP::get_status();
    String::num_int64((long)&local_b8,iVar5,true);
    local_a8 = "Remote Debugger: Unable to connect. Status: %s.";
    local_b0 = 0;
    local_a0 = 0x2f;
    String::parse_latin1((StrRange *)&local_b0);
    vformat<String>((Variant *)&local_a8,(StrRange *)&local_b0,&local_b8);
    _err_print_error("connect_to_host","core/debugger/remote_debugger_peer.cpp",0xb5,
                     (Variant *)&local_a8,0,0);
    pcVar3 = local_a8;
    lVar2 = local_b0;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar6 = (long *)(local_a8 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        lVar2 = local_b0;
      }
    }
    lVar1 = local_b8;
    local_b0 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      plVar6 = (long *)(lVar2 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar1 = local_b8;
      }
    }
    local_b8 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      plVar6 = (long *)(lVar1 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar1 + -0x10),false);
      }
    }
    uVar7 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
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
LAB_00101716:
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
    if (lVar10 == 0) goto LAB_00101716;
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
    FUN_0010214a();
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
      goto LAB_0010166c;
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
LAB_0010166c:
  puVar8[-1] = param_1;
  return;
}



/* RemoteDebuggerPeerTCP::RemoteDebuggerPeerTCP(Ref<StreamPeerTCP>) */

void __thiscall
RemoteDebuggerPeerTCP::RemoteDebuggerPeerTCP(RemoteDebuggerPeerTCP *this,long *param_2)

{
  long lVar1;
  char cVar2;
  StreamPeerTCP *this_00;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  RemoteDebuggerPeer::RemoteDebuggerPeer((RemoteDebuggerPeer *)this);
  *(undefined ***)this = &PTR__initialize_classv_00103850;
  *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x198) = 1;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  Thread::Thread((Thread *)(this + 0x1b0));
  *(undefined2 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1f8),0x800004);
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1e0),0x800000);
  pOVar4 = (Object *)*param_2;
  pOVar3 = *(Object **)(this + 0x180);
  if (pOVar4 == pOVar3) {
LAB_00101896:
    if (pOVar3 == (Object *)0x0) goto LAB_001018e8;
    *(undefined2 *)(this + 0x200) = 0x101;
    Thread::start((_func_void_void_ptr *)(this + 0x1b0),_thread_func,(Settings *)this);
  }
  else {
    *(Object **)(this + 0x180) = pOVar4;
    if (pOVar4 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x180) = 0;
        goto LAB_0010187a;
      }
      if (pOVar3 != (Object *)0x0) {
        cVar2 = RefCounted::unreference();
        goto joined_r0x001019cb;
      }
LAB_0010188f:
      pOVar3 = *(Object **)(this + 0x180);
      goto LAB_00101896;
    }
LAB_0010187a:
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
joined_r0x001019cb:
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
      goto LAB_0010188f;
    }
LAB_001018e8:
    this_00 = (StreamPeerTCP *)operator_new(0x1b0,"");
    StreamPeerTCP::StreamPeerTCP(this_00);
    postinitialize_handler((Object *)this_00);
    cVar2 = RefCounted::init_ref();
    if (cVar2 == '\0') {
      pOVar4 = *(Object **)(this + 0x180);
      if (pOVar4 != (Object *)0x0) {
        *(undefined8 *)(this + 0x180) = 0;
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          this_00 = (StreamPeerTCP *)0x0;
          cVar2 = predelete_handler(pOVar4);
          if (cVar2 != '\0') goto LAB_00101a3e;
        }
      }
    }
    else {
      pOVar4 = *(Object **)(this + 0x180);
      pOVar3 = pOVar4;
      if (this_00 != (StreamPeerTCP *)pOVar4) {
        *(StreamPeerTCP **)(this + 0x180) = this_00;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *(undefined8 *)(this + 0x180) = 0;
        }
        pOVar3 = (Object *)this_00;
        if (((pOVar4 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
           (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
LAB_00101a3e:
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
          pOVar3 = (Object *)this_00;
          if (this_00 == (StreamPeerTCP *)0x0) goto LAB_001018c6;
        }
      }
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pOVar3,false);
          return;
        }
        goto LAB_00101a80;
      }
    }
  }
LAB_001018c6:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101a80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RemoteDebuggerPeerTCP::create(String const&) */

Object * RemoteDebuggerPeerTCP::create(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  wchar32 wVar7;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = String::begins_with((char *)param_1);
  if (cVar4 == '\0') {
    pOVar6 = (Object *)0x0;
    _err_print_error("create","core/debugger/remote_debugger_peer.cpp",0xdd,
                     "Condition \"!p_uri.begins_with(\"tcp://\")\" is true. Returning: nullptr",0,0)
    ;
  }
  else {
    String::replace((char *)&local_40,(char *)param_1);
    wVar7 = (wchar32)&local_40;
    iVar5 = String::find_char(wVar7,0x3a);
    if (iVar5 != -1) {
      String::rfind_char(wVar7,0x3a);
      String::substr((int)&local_38,wVar7);
      String::to_int();
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
      String::substr((int)&local_38,wVar7);
      lVar3 = local_38;
      lVar2 = local_40;
      if (local_40 == local_38) {
        if (local_40 != 0) {
          LOCK();
          plVar1 = (long *)(local_40 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
      }
      else {
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
        local_40 = local_38;
      }
    }
    pOVar6 = (Object *)operator_new(0x208,"");
    local_38 = 0;
    RemoteDebuggerPeerTCP((RemoteDebuggerPeerTCP *)pOVar6,&local_38);
    postinitialize_handler(pOVar6);
    iVar5 = connect_to_host((String *)pOVar6,(ushort)&local_40);
    if (iVar5 != 0) {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      pOVar6 = (Object *)0x0;
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
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pOVar6;
}



/* RemoteDebuggerPeerTCP::close() */

void __thiscall RemoteDebuggerPeerTCP::close(RemoteDebuggerPeerTCP *this)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  this[0x201] = (RemoteDebuggerPeerTCP)0x0;
  cVar3 = Thread::is_started();
  if (cVar3 != '\0') {
    Thread::wait_to_finish();
  }
  StreamPeerTCP::disconnect_from_host();
  lVar2 = *(long *)(this + 0x1e0);
  if ((lVar2 != 0) && (*(long *)(lVar2 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1e0);
      *(undefined8 *)(this + 0x1e0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x1e0) = 0;
    }
  }
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)(this + 0x1f8),0);
  return;
}



/* RemoteDebuggerPeerTCP::~RemoteDebuggerPeerTCP() */

void __thiscall RemoteDebuggerPeerTCP::~RemoteDebuggerPeerTCP(RemoteDebuggerPeerTCP *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00103850;
  close(this);
  if (*(long *)(this + 0x1f8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1f8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1f8);
      *(undefined8 *)(this + 0x1f8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1e0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1e0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1e0);
      *(undefined8 *)(this + 0x1e0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 0x1c8));
  List<Array,DefaultAllocator>::~List((List<Array,DefaultAllocator> *)(this + 0x1c0));
  Thread::~Thread((Thread *)(this + 0x1b0));
  if (*(long *)(this + 0x180) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x180);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00103550;
  Object::~Object((Object *)this);
  return;
}



/* RemoteDebuggerPeerTCP::~RemoteDebuggerPeerTCP() */

void __thiscall RemoteDebuggerPeerTCP::~RemoteDebuggerPeerTCP(RemoteDebuggerPeerTCP *this)

{
  ~RemoteDebuggerPeerTCP(this);
  operator_delete(this,0x208);
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
  return (uint)CONCAT71(0x1039,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1039,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RemoteDebuggerPeer::can_block() const */

undefined8 RemoteDebuggerPeer::can_block(void)

{
  return 1;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103550;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00103550;
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

void FUN_0010214a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_001021a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001021a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010220e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010220e:
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
            if (lVar5 == 0) goto LAB_001026bf;
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
LAB_001026bf:
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
    if (cVar6 != '\0') goto LAB_00102773;
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
              if (lVar5 == 0) goto LAB_00102823;
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
LAB_00102823:
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
      if (cVar6 != '\0') goto LAB_00102773;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102773:
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
LAB_00102be8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102be8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102c06;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102c06:
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



/* WARNING: Removing unreachable block (ram,0x00103128) */
/* WARNING: Removing unreachable block (ram,0x00103258) */
/* WARNING: Removing unreachable block (ram,0x00103420) */
/* WARNING: Removing unreachable block (ram,0x00103264) */
/* WARNING: Removing unreachable block (ram,0x0010326e) */
/* WARNING: Removing unreachable block (ram,0x00103400) */
/* WARNING: Removing unreachable block (ram,0x0010327a) */
/* WARNING: Removing unreachable block (ram,0x00103284) */
/* WARNING: Removing unreachable block (ram,0x001033e0) */
/* WARNING: Removing unreachable block (ram,0x00103290) */
/* WARNING: Removing unreachable block (ram,0x0010329a) */
/* WARNING: Removing unreachable block (ram,0x001033c0) */
/* WARNING: Removing unreachable block (ram,0x001032a6) */
/* WARNING: Removing unreachable block (ram,0x001032b0) */
/* WARNING: Removing unreachable block (ram,0x001033a0) */
/* WARNING: Removing unreachable block (ram,0x001032bc) */
/* WARNING: Removing unreachable block (ram,0x001032c6) */
/* WARNING: Removing unreachable block (ram,0x00103380) */
/* WARNING: Removing unreachable block (ram,0x001032d2) */
/* WARNING: Removing unreachable block (ram,0x001032dc) */
/* WARNING: Removing unreachable block (ram,0x00103360) */
/* WARNING: Removing unreachable block (ram,0x001032e4) */
/* WARNING: Removing unreachable block (ram,0x001032fa) */
/* WARNING: Removing unreachable block (ram,0x00103306) */
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


