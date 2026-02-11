
/* CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write
          (CowData<MIDIDriverALSAMidi::InputConnection> *this)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar2 * 0x28 != 0) {
    uVar9 = lVar2 * 0x28 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 1;
    puVar6[1] = lVar2;
    if (lVar2 != 0) {
      puVar7 = puVar6 + 2;
      do {
        lVar5 = *(long *)this + (-0x10 - (long)puVar6);
        puVar8 = puVar7 + 5;
        *puVar7 = &PTR__Parser_00101610;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((long)puVar7 + lVar5 + 8);
        *(undefined1 *)((long)puVar7 + 0xc) = *(undefined1 *)((long)puVar7 + lVar5 + 0xc);
        *(undefined2 *)((long)puVar7 + 0xd) = *(undefined2 *)((long)puVar7 + lVar5 + 0xd);
        puVar7[2] = *(undefined8 *)((long)puVar7 + lVar5 + 0x10);
        uVar3 = *(undefined8 *)((long)puVar7 + lVar5 + 0x20);
        *(undefined1 *)(puVar7 + 3) = *(undefined1 *)((long)puVar7 + lVar5 + 0x18);
        puVar7[4] = uVar3;
        puVar7 = puVar8;
      } while (puVar8 != puVar6 + lVar2 * 5 + 2);
    }
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
    *(undefined8 **)this = puVar6 + 2;
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



/* MIDIDriverALSAMidi::InputConnection::InputConnection(int, _snd_rawmidi*) */

void __thiscall
MIDIDriverALSAMidi::InputConnection::InputConnection
          (InputConnection *this,int param_1,_snd_rawmidi *param_2)

{
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__Parser_00101610;
  this[0xc] = (InputConnection)0x0;
  *(undefined2 *)(this + 0xd) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (InputConnection)0x0;
  *(_snd_rawmidi **)(this + 0x20) = param_2;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MIDIDriverALSAMidi::InputConnection::read() */

void __thiscall MIDIDriverALSAMidi::InputConnection::read(InputConnection *this)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined1 local_58;
  undefined1 local_57 [39];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar4 = (*_snd_rawmidi_read_dylibloader_wrapper_asound)
                      (*(undefined8 *)(this + 0x20),&local_58,0x20);
    if (iVar4 < 0) break;
    if (iVar4 == 0) goto LAB_0010034b;
    puVar5 = &local_58;
    do {
      puVar5 = puVar5 + 1;
      MIDIDriver::Parser::parse_fragment((uchar)this);
    } while (puVar5 != local_57 + (iVar4 - 1));
  }
  if (iVar4 != -0xb) {
    local_68 = (char *)(*_snd_strerror_dylibloader_wrapper_asound)(iVar4);
    local_70 = 0;
    local_60 = 0;
    if (local_68 != (char *)0x0) {
      local_60 = strlen(local_68);
    }
    String::parse_latin1((StrRange *)&local_70);
    operator+((char *)&local_68,(String *)"snd_rawmidi_read error: ");
    _err_print_error(&_LC6,"drivers/alsamidi/midi_driver_alsamidi.cpp",0x33,&local_68,0,0);
    pcVar3 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
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
  }
LAB_0010034b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MIDIDriverALSAMidi::thread_func(void*) */

void MIDIDriverALSAMidi::thread_func(void *param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  InputConnection *this;
  InputConnection *pIVar4;
  
  cVar1 = *(char *)((long)param_1 + 0x60);
  while( true ) {
    if (cVar1 != '\0') {
      return;
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x28));
    if (iVar2 != 0) break;
    CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write
              ((CowData<MIDIDriverALSAMidi::InputConnection> *)((long)param_1 + 0x58));
    this = *(InputConnection **)((long)param_1 + 0x58);
    CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write
              ((CowData<MIDIDriverALSAMidi::InputConnection> *)((long)param_1 + 0x58));
    pIVar4 = *(InputConnection **)((long)param_1 + 0x58);
    if (pIVar4 != (InputConnection *)0x0) {
      pIVar4 = pIVar4 + *(long *)(pIVar4 + -8) * 0x28;
    }
    for (; this != pIVar4; this = this + 0x28) {
      InputConnection::read(this);
    }
    pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x28));
    plVar3 = (long *)OS::get_singleton();
    (**(code **)(*plVar3 + 0x1f8))(plVar3,1000);
    cVar1 = *(char *)((long)param_1 + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* MIDIDriverALSAMidi::lock() const */

void __thiscall MIDIDriverALSAMidi::lock(MIDIDriverALSAMidi *this)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* MIDIDriverALSAMidi::unlock() const */

void __thiscall MIDIDriverALSAMidi::unlock(MIDIDriverALSAMidi *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
  return;
}



/* MIDIDriverALSAMidi::MIDIDriverALSAMidi() */

void __thiscall MIDIDriverALSAMidi::MIDIDriverALSAMidi(MIDIDriverALSAMidi *this)

{
  MIDIDriver::MIDIDriver((MIDIDriver *)this);
  *(undefined ***)this = &PTR__MIDIDriverALSAMidi_00101660;
  Thread::Thread((Thread *)(this + 0x18));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x38) = 1;
  *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
  this[0x60] = (MIDIDriverALSAMidi)0x0;
  this[0x60] = (MIDIDriverALSAMidi)0x0;
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MIDIDriverALSAMidi::close() */

void __thiscall MIDIDriverALSAMidi::close(MIDIDriverALSAMidi *this)

{
  CowData<MIDIDriverALSAMidi::InputConnection> *this_00;
  char cVar1;
  long lVar2;
  long lVar3;
  
  this[0x60] = (MIDIDriverALSAMidi)0x1;
  cVar1 = Thread::is_started();
  if (cVar1 != '\0') {
    Thread::wait_to_finish();
  }
  this_00 = (CowData<MIDIDriverALSAMidi::InputConnection> *)(this + 0x58);
  CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write(this_00);
  lVar2 = *(long *)(this + 0x58);
  CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write(this_00);
  lVar3 = *(long *)(this + 0x58);
  if (lVar3 != 0) {
    lVar3 = lVar3 + *(long *)(lVar3 + -8) * 0x28;
  }
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    (*_snd_rawmidi_close_dylibloader_wrapper_asound)(*(undefined8 *)(lVar2 + 0x20));
  }
  CowData<MIDIDriverALSAMidi::InputConnection>::resize<false>(this_00,0);
  if ((*(long *)(this + 0x10) != 0) && (*(long *)(*(long *)(this + 0x10) + -8) != 0)) {
    CowData<String>::_unref((CowData<String> *)(this + 0x10));
    return;
  }
  return;
}



/* MIDIDriverALSAMidi::~MIDIDriverALSAMidi() */

void __thiscall MIDIDriverALSAMidi::~MIDIDriverALSAMidi(MIDIDriverALSAMidi *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__MIDIDriverALSAMidi_00101660;
  close(this);
  if (*(long *)(this + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x58);
      *(undefined8 *)(this + 0x58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Thread::~Thread((Thread *)(this + 0x18));
  *(undefined **)this = &DAT_00101630;
  CowData<String>::_unref((CowData<String> *)(this + 0x10));
  return;
}



/* MIDIDriverALSAMidi::~MIDIDriverALSAMidi() */

void __thiscall MIDIDriverALSAMidi::~MIDIDriverALSAMidi(MIDIDriverALSAMidi *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__MIDIDriverALSAMidi_00101660;
  close(this);
  if (*(long *)(this + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x58);
      *(undefined8 *)(this + 0x58) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Thread::~Thread((Thread *)(this + 0x18));
  *(undefined **)this = &DAT_00101630;
  CowData<String>::_unref((CowData<String> *)(this + 0x10));
  operator_delete(this,0x68);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MIDIDriverALSAMidi::open() */

undefined8 __thiscall MIDIDriverALSAMidi::open(MIDIDriverALSAMidi *this)

{
  long *plVar1;
  CowData<char32_t> *this_00;
  int iVar2;
  int iVar3;
  void *__ptr;
  char *__s;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (*_snd_device_name_hint_dylibloader_wrapper_asound)(0xffffffff,"rawmidi",&local_78);
  if (iVar2 < 0) {
    uVar5 = 0x13;
  }
  else {
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x28));
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar2);
    }
    lVar7 = *local_78;
    if (lVar7 != 0) {
      iVar2 = 0;
      plVar8 = local_78;
      do {
        __ptr = (void *)(*_snd_device_name_get_hint_dylibloader_wrapper_asound)(lVar7,&_LC13);
        if (__ptr != (void *)0x0) {
          iVar3 = (*_snd_rawmidi_open_dylibloader_wrapper_asound)(&local_70,0,__ptr,2);
          if (-1 < iVar3) {
            (*_snd_rawmidi_info_malloc_dylibloader_wrapper_asound)(&local_68);
            (*_snd_rawmidi_info_dylibloader_wrapper_asound)(local_70,local_68);
            __s = (char *)(*_snd_rawmidi_info_get_name_dylibloader_wrapper_asound)(local_68);
            local_60 = 0;
            sVar4 = 0;
            if (__s != (char *)0x0) {
              sVar4 = strlen(__s);
            }
            local_58 = __s;
            local_50 = sVar4;
            String::parse_latin1((StrRange *)&local_60);
            if (*(long *)(this + 0x10) == 0) {
              lVar7 = 1;
            }
            else {
              lVar7 = *(long *)(*(long *)(this + 0x10) + -8) + 1;
            }
            iVar3 = CowData<String>::resize<false>((CowData<String> *)(this + 0x10),lVar7);
            if (iVar3 == 0) {
              if (*(long *)(this + 0x10) == 0) {
                lVar6 = -1;
                lVar7 = 0;
              }
              else {
                lVar7 = *(long *)(*(long *)(this + 0x10) + -8);
                lVar6 = lVar7 + -1;
                if (-1 < lVar6) {
                  CowData<String>::_copy_on_write((CowData<String> *)(this + 0x10));
                  this_00 = (CowData<char32_t> *)(*(long *)(this + 0x10) + lVar6 * 8);
                  if (*(long *)this_00 != local_60) {
                    CowData<char32_t>::_ref(this_00,(CowData *)&local_60);
                  }
                  goto LAB_00100967;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar7,"p_index","size()","",
                         false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_00100967:
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
            (*_snd_rawmidi_info_free_dylibloader_wrapper_asound)(local_68);
            uVar5 = local_70;
            if (*(long *)(this + 0x58) == 0) {
              lVar7 = 1;
            }
            else {
              lVar7 = *(long *)(*(long *)(this + 0x58) + -8) + 1;
            }
            iVar3 = CowData<MIDIDriverALSAMidi::InputConnection>::resize<false>
                              ((CowData<MIDIDriverALSAMidi::InputConnection> *)(this + 0x58),lVar7);
            if (iVar3 == 0) {
              if (*(long *)(this + 0x58) == 0) {
                lVar6 = -1;
                lVar7 = 0;
              }
              else {
                lVar7 = *(long *)(*(long *)(this + 0x58) + -8);
                lVar6 = lVar7 + -1;
                if (-1 < lVar6) {
                  CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write
                            ((CowData<MIDIDriverALSAMidi::InputConnection> *)(this + 0x58));
                  lVar7 = *(long *)(this + 0x58) + lVar6 * 0x28;
                  *(int *)(lVar7 + 8) = iVar2;
                  *(undefined2 *)(lVar7 + 0xc) = 0;
                  *(undefined1 *)(lVar7 + 0xe) = 0;
                  *(undefined8 *)(lVar7 + 0x10) = 0;
                  *(undefined1 *)(lVar7 + 0x18) = 0;
                  *(undefined8 *)(lVar7 + 0x20) = uVar5;
                  goto LAB_00100a20;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar6,lVar7,"p_index","size()","",
                         false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_00100a20:
            iVar2 = iVar2 + 1;
          }
          free(__ptr);
        }
        lVar7 = plVar8[1];
        plVar8 = plVar8 + 1;
      } while (lVar7 != 0);
    }
    (*_snd_device_name_free_hint_dylibloader_wrapper_asound)(local_78);
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x28));
    this[0x60] = (MIDIDriverALSAMidi)0x0;
    local_58 = (char *)CONCAT44(local_58._4_4_,1);
    Thread::start((_func_void_void_ptr *)(this + 0x18),thread_func,(Settings *)this);
    uVar5 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



/* MIDIDriver::Parser::~Parser() */

void __thiscall MIDIDriver::Parser::~Parser(Parser *this)

{
  return;
}



/* MIDIDriver::Parser::~Parser() */

void __thiscall MIDIDriver::Parser::~Parser(Parser *this)

{
  operator_delete(this,0x20);
  return;
}



/* CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<MIDIDriverALSAMidi::InputConnection>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_00101180:
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
  if (lVar10 == 0) goto LAB_00101180;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00101059:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00101059;
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
    goto LAB_001011d6;
  }
  if (lVar10 == lVar7) {
LAB_001010ff:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001011d6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001010ea;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001010ff;
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
LAB_001010ea:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<MIDIDriverALSAMidi::InputConnection>::_realloc(long) */

undefined8 __thiscall
CowData<MIDIDriverALSAMidi::InputConnection>::_realloc
          (CowData<MIDIDriverALSAMidi::InputConnection> *this,long param_1)

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
/* Error CowData<MIDIDriverALSAMidi::InputConnection>::resize<false>(long) */

undefined8 __thiscall
CowData<MIDIDriverALSAMidi::InputConnection>::resize<false>
          (CowData<MIDIDriverALSAMidi::InputConnection> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 0x28;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_00101510:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0x28 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar9 = uVar4 + 1;
  if (lVar9 == 0) goto LAB_00101510;
  if (param_1 <= lVar8) {
    if ((lVar9 != lVar3) && (uVar7 = _realloc(this,lVar9), (int)uVar7 != 0)) {
      return uVar7;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    goto LAB_00101570;
  }
  if (lVar9 == lVar3) {
LAB_0010147c:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar6[-1];
    if (param_1 <= lVar3) goto LAB_00101419;
  }
  else {
    if (lVar8 != 0) {
      uVar7 = _realloc(this,lVar9);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010147c;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar3 = 0;
  }
  puVar6 = puVar6 + lVar3 * 5;
  lVar3 = lVar3 + 1;
  *puVar6 = &PTR__Parser_00101610;
  *(undefined4 *)(puVar6 + 1) = 0;
  lVar8 = lVar3 * 0x28;
  *(undefined1 *)((long)puVar6 + 0xc) = 0;
  *(undefined2 *)((long)puVar6 + 0xd) = 0;
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  puVar6[4] = 0;
  if (lVar3 < param_1) {
    do {
      lVar3 = lVar3 + 1;
      puVar6 = (undefined8 *)(*(long *)this + lVar8);
      lVar8 = lVar8 + 0x28;
      *puVar6 = &PTR__Parser_00101610;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined1 *)((long)puVar6 + 0xc) = 0;
      *(undefined2 *)((long)puVar6 + 0xd) = 0;
      puVar6[2] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
      puVar6[4] = 0;
    } while (param_1 != lVar3);
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
LAB_00101570:
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00101419:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* MIDIDriver::Parser::~Parser() */

void __thiscall MIDIDriver::Parser::~Parser(Parser *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


