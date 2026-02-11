
/* AudioDriverALSA::get_mix_rate() const */

undefined4 __thiscall AudioDriverALSA::get_mix_rate(AudioDriverALSA *this)

{
  return *(undefined4 *)(this + 0xb0);
}



/* AudioDriverALSA::get_speaker_mode() const */

undefined4 __thiscall AudioDriverALSA::get_speaker_mode(AudioDriverALSA *this)

{
  return *(undefined4 *)(this + 0xb4);
}



/* AudioDriverALSA::start() */

void __thiscall AudioDriverALSA::start(AudioDriverALSA *this)

{
  this[0xd4] = (AudioDriverALSA)0x1;
  return;
}



/* AudioDriverALSA::unlock() */

void __thiscall AudioDriverALSA::unlock(AudioDriverALSA *this)

{
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
  return;
}



/* CowData<short>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<short>::_copy_on_write(CowData<short> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  size_t __n;
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
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 2;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

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
  __n = lVar2 * 4;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::finish() */

void __thiscall AudioDriverALSA::finish(AudioDriverALSA *this)

{
  char cVar1;
  
  this[0xd5] = (AudioDriverALSA)0x1;
  cVar1 = Thread::is_started();
  if (cVar1 != '\0') {
    Thread::wait_to_finish();
  }
  if (*(long *)(this + 0x78) != 0) {
    (*_snd_pcm_close_dylibloader_wrapper_asound)();
    *(undefined8 *)(this + 0x78) = 0;
  }
  return;
}



/* AudioDriverALSA::lock() */

void AudioDriverALSA::lock(void)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *in_RSI;
  long in_RDI;
  long *plVar5;
  bool bVar6;
  
  uVar3 = pthread_mutex_lock((pthread_mutex_t *)(in_RDI + 0x50));
  if (uVar3 == 0) {
    return;
  }
  plVar5 = (long *)(ulong)uVar3;
  std::__throw_system_error(uVar3);
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
    else {
      *plVar5 = 0;
    }
  }
  plVar1 = (long *)(*in_RSI + -0x10);
  if (*in_RSI != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar4 = *plVar1;
      bVar6 = lVar2 == lVar4;
      if (bVar6) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar6);
    if (lVar4 != -1) {
      *plVar5 = *in_RSI;
    }
  }
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



/* AudioDriverALSA::set_output_device(String const&) */

CowData<char32_t> * __thiscall
AudioDriverALSA::set_output_device(AudioDriverALSA *this,String *param_1)

{
  uint uVar1;
  CowData<char32_t> *pCVar2;
  String *pSVar3;
  
  if (*(code **)(*(long *)this + 0x38) == lock) {
    pSVar3 = param_1;
    uVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x50));
    if (uVar1 != 0) {
      pCVar2 = (CowData<char32_t> *)(ulong)uVar1;
      std::__throw_system_error(uVar1);
      *(undefined8 *)pCVar2 = 0;
      if (*(long *)(pSVar3 + 0x80) != 0) {
        CowData<char32_t>::_ref(pCVar2,(CowData *)(pSVar3 + 0x80));
      }
      return pCVar2;
    }
  }
  else {
    (**(code **)(*(long *)this + 0x38))();
  }
  if (*(long *)(this + 0x88) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x88),(CowData *)param_1);
  }
  if (*(code **)(*(long *)this + 0x40) == unlock) {
    uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(this + 0x50));
    return (CowData<char32_t> *)(ulong)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00100411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar2 = (CowData<char32_t> *)(**(code **)(*(long *)this + 0x40))(this);
  return pCVar2;
}



/* AudioDriverALSA::get_output_device() */

void AudioDriverALSA::get_output_device(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x80) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x80));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::finish_output_device() */

void __thiscall AudioDriverALSA::finish_output_device(AudioDriverALSA *this)

{
  if (*(long *)(this + 0x78) != 0) {
    (*_snd_pcm_close_dylibloader_wrapper_asound)();
    *(undefined8 *)(this + 0x78) = 0;
  }
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::get_output_device_list() */

AudioDriverALSA * __thiscall AudioDriverALSA::get_output_device_list(AudioDriverALSA *this)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  char *__s1;
  void *__ptr;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  local_60 = 0;
  local_58 = "Default";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_60);
  Vector<String>::push_back((Vector<String> *)this);
  lVar4 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar5 = (long *)(local_60 + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  iVar3 = (*_snd_device_name_hint_dylibloader_wrapper_asound)(0xffffffff,&_LC27,&local_80);
  if (-1 < iVar3) {
    lVar4 = *local_80;
    if (lVar4 != 0) {
      plVar5 = local_80;
      do {
        __s1 = (char *)(*_snd_device_name_get_hint_dylibloader_wrapper_asound)(lVar4,&_LC28);
        __ptr = (void *)(*_snd_device_name_get_hint_dylibloader_wrapper_asound)(*plVar5,0x102a84);
        if (__s1 == (char *)0x0) {
          if (__ptr != (void *)0x0) {
            free(__ptr);
          }
        }
        else {
          iVar3 = strncmp(__s1,"plughw",6);
          if (iVar3 == 0) {
            if (__ptr == (void *)0x0) {
              String::utf8((char *)&local_58,(int)__s1);
              Vector<String>::push_back((Vector<String> *)this);
              pcVar2 = local_58;
              if (local_58 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_58 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_58 = (char *)0x0;
                  Memory::free_static(pcVar2 + -0x10,false);
                }
              }
            }
            else {
              String::utf8((char *)&local_60,(int)__ptr);
              local_58 = ";";
              local_70 = 0;
              local_50 = 1;
              String::parse_latin1((StrRange *)&local_70);
              String::utf8((char *)&local_78,(int)__s1);
              String::operator+((String *)&local_68,(String *)&local_78);
              String::operator+((String *)&local_58,(String *)&local_68);
              Vector<String>::push_back((Vector<String> *)this);
              pcVar2 = local_58;
              if (local_58 != (char *)0x0) {
                LOCK();
                plVar1 = (long *)(local_58 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_58 = (char *)0x0;
                  Memory::free_static(pcVar2 + -0x10,false);
                }
              }
              lVar4 = local_68;
              if (local_68 != 0) {
                LOCK();
                plVar1 = (long *)(local_68 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              lVar4 = local_78;
              if (local_78 != 0) {
                LOCK();
                plVar1 = (long *)(local_78 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
              lVar4 = local_70;
              if (local_70 != 0) {
                LOCK();
                plVar1 = (long *)(local_70 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
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
LAB_001008c0:
              free(__ptr);
            }
          }
          else if (__ptr != (void *)0x0) goto LAB_001008c0;
          free(__s1);
        }
        lVar4 = plVar5[1];
        plVar5 = plVar5 + 1;
      } while (lVar4 != 0);
    }
    (*_snd_device_name_free_hint_dylibloader_wrapper_asound)(local_80);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::init_output_device() */

undefined8 __thiscall AudioDriverALSA::init_output_device(AudioDriverALSA *this)

{
  String *this_00;
  CowData<int> *this_01;
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar20;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  CowData<short> *this_02;
  long in_FS_OFFSET;
  bool bVar27;
  undefined1 auStack_d8 [8];
  StrRange *local_d0;
  long *local_c8;
  StrRange *local_c0;
  uint local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  undefined1 *puVar19;
  undefined1 *puVar21;
  
  this_00 = (String *)(this + 0x80);
  puVar19 = auStack_d8;
  puVar18 = auStack_d8;
  puVar22 = auStack_d8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = AudioDriver::_get_configured_mix_rate();
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb0) = uVar7;
  *(undefined4 *)(this + 0xd0) = 2;
  cVar6 = String::operator!=(this_00,"Default");
  if (cVar6 != '\0') {
    (**(code **)(*(long *)this + 0x50))(&local_78,this);
    if ((local_70 != 0) && (lVar10 = *(long *)(local_70 + -8), lVar10 != 0)) {
      lVar24 = 0;
      while (lVar24 < lVar10) {
        cVar6 = String::operator==((String *)(local_70 + lVar24 * 8),this_00);
        if (cVar6 != '\0') goto LAB_00100b3c;
        lVar24 = lVar24 + 1;
        if (local_70 == 0) break;
        lVar10 = *(long *)(local_70 + -8);
      }
    }
    local_68 = "Default";
    local_60 = 7;
    String::parse_latin1((StrRange *)this_00);
    local_68 = "Default";
    local_60 = 7;
    String::parse_latin1((StrRange *)(this + 0x88));
LAB_00100b3c:
    CowData<String>::_unref((CowData<String> *)&local_70);
  }
  cVar6 = String::operator==(this_00,"Default");
  if (cVar6 == '\0') {
    local_78 = (char *)0x0;
    plVar12 = (long *)(*(long *)(this + 0x80) + -0x10);
    if (*(long *)(this + 0x80) != 0) {
      do {
        lVar10 = *plVar12;
        if (lVar10 == 0) goto LAB_0010111c;
        LOCK();
        lVar24 = *plVar12;
        bVar27 = lVar10 == lVar24;
        if (bVar27) {
          *plVar12 = lVar10 + 1;
          lVar24 = lVar10;
        }
        UNLOCK();
      } while (!bVar27);
      if (lVar24 != -1) {
        local_78 = *(char **)(this + 0x80);
      }
    }
LAB_0010111c:
    iVar8 = String::find_char((wchar32)&local_78,0x3b);
    pcVar5 = local_78;
    if (iVar8 != -1) {
      String::substr((int)&local_68,(wchar32)&local_78);
      pcVar4 = local_68;
      pcVar3 = local_78;
      if (local_78 == local_68) {
        pcVar5 = local_78;
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar12 = (long *)(local_78 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          if (*plVar12 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
            pcVar5 = local_78;
          }
        }
      }
      else {
        pcVar5 = local_68;
        if (local_78 != (char *)0x0) {
          LOCK();
          plVar12 = (long *)(local_78 + -0x10);
          *plVar12 = *plVar12 + -1;
          UNLOCK();
          pcVar5 = local_68;
          if (*plVar12 == 0) {
            local_78 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            pcVar5 = local_68;
          }
        }
      }
    }
    local_78 = pcVar5;
    pcVar1 = _snd_pcm_open_dylibloader_wrapper_asound;
    String::utf8();
    uVar11 = CharString::get_data();
    iVar8 = (*pcVar1)(this + 0x78,uVar11,0,1);
    pcVar3 = local_68;
    pcVar5 = local_78;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar12 = (long *)(local_68 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
        pcVar5 = local_78;
      }
    }
    local_78 = pcVar5;
    if (pcVar5 == (char *)0x0) goto LAB_00100b73;
    LOCK();
    plVar12 = (long *)(pcVar5 + -0x10);
    *plVar12 = *plVar12 + -1;
    UNLOCK();
    if (*plVar12 != 0) goto LAB_00100b73;
    local_78 = (char *)0x0;
    Memory::free_static(pcVar5 + -0x10,false);
    if (iVar8 < 0) goto LAB_001011c0;
LAB_00100b7c:
    lVar10 = (*_snd_pcm_hw_params_sizeof_dylibloader_wrapper_asound)();
    puVar22 = auStack_d8;
    while (puVar19 != auStack_d8 + -(lVar10 + 0x17U & 0xfffffffffffff000)) {
      puVar18 = puVar22 + -0x1000;
      *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
      puVar19 = puVar22 + -0x1000;
      puVar22 = puVar22 + -0x1000;
    }
    uVar25 = (ulong)((uint)(lVar10 + 0x17U) & 0xff0);
    lVar24 = -uVar25;
    puVar20 = puVar18 + lVar24;
    puVar21 = puVar18 + lVar24;
    puVar22 = puVar18 + lVar24;
    if (uVar25 != 0) {
      *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
    }
    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100bce;
    uVar11 = (*_snd_pcm_hw_params_sizeof_dylibloader_wrapper_asound)();
    uVar25 = (ulong)(puVar18 + lVar24 + 0xf) & 0xfffffffffffffff0;
    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100be7;
    __memset_chk(uVar25,0,uVar11,lVar10);
    uVar11 = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100bf4;
    iVar8 = (*_snd_pcm_hw_params_any_dylibloader_wrapper_asound)(uVar11,uVar25);
    if (iVar8 < 0) {
      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101358;
      uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101375;
      __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
      if (*(long *)(this + 0x78) != 0) {
        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101384;
        (*_snd_pcm_close_dylibloader_wrapper_asound)();
        *(undefined8 *)(this + 0x78) = 0;
      }
      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1013b1;
      _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x5f,
                       "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
    }
    else {
      uVar11 = *(undefined8 *)(this + 0x78);
      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c0e;
      iVar8 = (*_snd_pcm_hw_params_set_access_dylibloader_wrapper_asound)(uVar11,uVar25,3);
      if (iVar8 < 0) {
        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101438;
        uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101455;
        __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
        if (*(long *)(this + 0x78) != 0) {
          *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101464;
          (*_snd_pcm_close_dylibloader_wrapper_asound)();
          *(undefined8 *)(this + 0x78) = 0;
        }
        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101491;
        _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x62,
                         "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
        puVar22 = puVar18 + lVar24;
      }
      else {
        uVar11 = *(undefined8 *)(this + 0x78);
        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c28;
        iVar8 = (*_snd_pcm_hw_params_set_format_dylibloader_wrapper_asound)(uVar11,uVar25,2);
        if (iVar8 < 0) {
          *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1014a8;
          uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
          *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1014c5;
          __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
          if (*(long *)(this + 0x78) != 0) {
            *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1014d4;
            (*_snd_pcm_close_dylibloader_wrapper_asound)();
            *(undefined8 *)(this + 0x78) = 0;
          }
          *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101501;
          _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x66,
                           "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
          puVar22 = puVar18 + lVar24;
        }
        else {
          uVar11 = *(undefined8 *)(this + 0x78);
          *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c42;
          iVar8 = (*_snd_pcm_hw_params_set_channels_dylibloader_wrapper_asound)(uVar11,uVar25,2);
          if (iVar8 < 0) {
            *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101518;
            uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
            *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101535;
            __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
            if (*(long *)(this + 0x78) != 0) {
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101544;
              (*_snd_pcm_close_dylibloader_wrapper_asound)();
              *(undefined8 *)(this + 0x78) = 0;
            }
            *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101571;
            _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x6a,
                             "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
            puVar22 = puVar18 + lVar24;
          }
          else {
            uVar11 = *(undefined8 *)(this + 0x78);
            *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c60;
            iVar8 = (*_snd_pcm_hw_params_set_rate_near_dylibloader_wrapper_asound)
                              (uVar11,uVar25,this + 0xb0,0);
            if (iVar8 < 0) {
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1013c8;
              uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1013e5;
              __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
              if (*(long *)(this + 0x78) != 0) {
                *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1013f4;
                (*_snd_pcm_close_dylibloader_wrapper_asound)();
                *(undefined8 *)(this + 0x78) = 0;
              }
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101421;
              _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x6d,
                               "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
              puVar22 = puVar18 + lVar24;
            }
            else {
              local_b4 = 2;
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c77;
              plVar12 = (long *)Engine::get_singleton();
              pcVar1 = *(code **)(*plVar12 + 0x38);
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100c80;
              iVar8 = (*pcVar1)(plVar12);
              uVar9 = iVar8 * *(int *)(this + 0xb0);
              uVar16 = 0;
              if (999 < uVar9) {
                uVar15 = uVar9 / 1000 - 1;
                uVar15 = uVar15 | uVar15 >> 1;
                uVar15 = uVar15 | uVar15 >> 2;
                uVar15 = uVar15 | uVar15 >> 4;
                uVar15 = uVar15 | uVar15 >> 8;
                uVar16 = (ulong)((uVar15 | uVar15 >> 0x10) + 1);
              }
              uVar15 = uVar9 / 1000;
              uVar9 = uVar9 / 2000 | uVar15;
              uVar9 = uVar9 | uVar9 >> 2;
              uVar9 = uVar9 | uVar9 >> 4;
              uVar9 = uVar9 >> 0x10 | uVar9 >> 8 | uVar9;
              uVar11 = *(undefined8 *)(this + 0x78);
              if (uVar15 + ((uVar9 >> 1) - uVar9) < (int)uVar16 - uVar15) {
                uVar16 = (ulong)(uVar9 - (uVar9 >> 1));
              }
              *(ulong *)(this + 0xb8) = uVar16;
              *(ulong *)(this + 200) = uVar16;
              *(ulong *)(this + 0xc0) = local_b4 * uVar16;
              *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d31;
              iVar8 = (*_snd_pcm_hw_params_set_buffer_size_near_dylibloader_wrapper_asound)
                                (uVar11,uVar25,this + 0xc0);
              if (iVar8 < 0) {
                *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101878;
                uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101895;
                __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                if (*(long *)(this + 0x78) != 0) {
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1018a4;
                  (*_snd_pcm_close_dylibloader_wrapper_asound)();
                  *(undefined8 *)(this + 0x78) = 0;
                }
                *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1018d1;
                _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x79,
                                 "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
                puVar22 = puVar18 + lVar24;
              }
              else {
                uVar11 = *(undefined8 *)(this + 0x78);
                *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d4f;
                iVar8 = (*_snd_pcm_hw_params_set_period_size_near_dylibloader_wrapper_asound)
                                  (uVar11,uVar25,this + 200,0);
                if (iVar8 < 0) {
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1012c0;
                  uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1012dd;
                  __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                  if (*(long *)(this + 0x78) != 0) {
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1012ec;
                    (*_snd_pcm_close_dylibloader_wrapper_asound)();
                    *(undefined8 *)(this + 0x78) = 0;
                  }
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101319;
                  _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x7c,
                                   "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0)
                  ;
                  puVar22 = puVar18 + lVar24;
                }
                else {
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d5c;
                  cVar6 = is_print_verbose_enabled();
                  if (cVar6 != '\0') {
                    local_d0 = (StrRange *)&local_80;
                    local_80 = 0;
                    local_68 = "ms";
                    local_60 = 2;
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1015c3;
                    String::parse_latin1(local_d0);
                    local_c8 = &local_90;
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1015f2;
                    itos((long)local_c8);
                    local_a0 = 0;
                    local_68 = " calculated latency: ";
                    local_c0 = (StrRange *)&local_a0;
                    local_60 = 0x15;
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101629;
                    String::parse_latin1(local_c0);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101638;
                    itos((long)&local_b0);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10164a;
                    operator+((char *)&local_a8,(String *)"Audio buffer frames: ");
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101667;
                    String::operator+((String *)&local_98,(String *)&local_a8);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10167d;
                    String::operator+((String *)&local_88,(String *)&local_98);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101693;
                    String::operator+((String *)&local_78,(String *)&local_88);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10169e;
                    Variant::Variant((Variant *)local_58,(String *)&local_78);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1016a9;
                    stringify_variants((Variant *)&local_68);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1016b1;
                    __print_line((String *)&local_68);
                    pcVar5 = local_68;
                    if (local_68 != (char *)0x0) {
                      LOCK();
                      plVar12 = (long *)(local_68 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_68 = (char *)0x0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1016d9;
                        Memory::free_static(pcVar5 + -0x10,false);
                      }
                    }
                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101c50;
                      Variant::_clear_internal();
                    }
                    pcVar5 = local_78;
                    if (local_78 != (char *)0x0) {
                      LOCK();
                      plVar12 = (long *)(local_78 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_78 = (char *)0x0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101716;
                        Memory::free_static(pcVar5 + -0x10,false);
                      }
                    }
                    lVar10 = local_88;
                    if (local_88 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_88 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_88 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10173e;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_98;
                    if (local_98 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_98 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_98 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10176f;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_a8;
                    if (local_a8 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_a8 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_a8 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1017a0;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_b0;
                    if (local_b0 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_b0 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_b0 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1017d1;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_a0;
                    if (local_a0 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_a0 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_a0 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101802;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_90;
                    if (local_90 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_90 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_90 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101833;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                    lVar10 = local_80;
                    if (local_80 != 0) {
                      LOCK();
                      plVar12 = (long *)(local_80 + -0x10);
                      *plVar12 = *plVar12 + -1;
                      UNLOCK();
                      if (*plVar12 == 0) {
                        local_80 = 0;
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101863;
                        Memory::free_static((void *)(lVar10 + -0x10),false);
                      }
                    }
                  }
                  uVar11 = *(undefined8 *)(this + 0x78);
                  *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d7a;
                  iVar8 = (*_snd_pcm_hw_params_set_periods_near_dylibloader_wrapper_asound)
                                    (uVar11,uVar25,&local_b4,0);
                  if (iVar8 < 0) {
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1018de;
                    uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x1018fb;
                    __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                    if (*(long *)(this + 0x78) != 0) {
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10190a;
                      (*_snd_pcm_close_dylibloader_wrapper_asound)();
                      *(undefined8 *)(this + 0x78) = 0;
                    }
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101937;
                    _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x81,
                                     "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,
                                     0);
                    puVar22 = puVar18 + lVar24;
                  }
                  else {
                    uVar11 = *(undefined8 *)(this + 0x78);
                    *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d8f;
                    iVar8 = (*_snd_pcm_hw_params_dylibloader_wrapper_asound)(uVar11,uVar25);
                    if (iVar8 < 0) {
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101944;
                      uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101961;
                      __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                      if (*(long *)(this + 0x78) != 0) {
                        *(undefined8 *)(puVar18 + lVar24 + -8) = 0x101970;
                        (*_snd_pcm_close_dylibloader_wrapper_asound)();
                        *(undefined8 *)(this + 0x78) = 0;
                      }
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x10199d;
                      _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",
                                       0x84,
                                       "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",
                                       0,0);
                      puVar22 = puVar18 + lVar24;
                    }
                    else {
                      *(undefined8 *)(puVar18 + lVar24 + -8) = 0x100d9d;
                      lVar10 = (*_snd_pcm_sw_params_sizeof_dylibloader_wrapper_asound)();
                      puVar22 = puVar18 + lVar24;
                      while (puVar20 != puVar18 + (lVar24 - (lVar10 + 0x17U & 0xfffffffffffff000)))
                      {
                        puVar21 = puVar22 + -0x1000;
                        *(undefined8 *)(puVar22 + -8) = *(undefined8 *)(puVar22 + -8);
                        puVar20 = puVar22 + -0x1000;
                        puVar22 = puVar22 + -0x1000;
                      }
                      uVar25 = (ulong)((uint)(lVar10 + 0x17U) & 0xff0);
                      lVar24 = -uVar25;
                      puVar22 = puVar21 + lVar24;
                      if (uVar25 != 0) {
                        *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
                      }
                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100deb;
                      uVar11 = (*_snd_pcm_sw_params_sizeof_dylibloader_wrapper_asound)();
                      uVar25 = (ulong)(puVar21 + lVar24 + 0xf) & 0xfffffffffffffff0;
                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100e04;
                      __memset_chk(uVar25,0,uVar11,lVar10);
                      uVar11 = *(undefined8 *)(this + 0x78);
                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100e11;
                      iVar8 = (*_snd_pcm_sw_params_current_dylibloader_wrapper_asound)
                                        (uVar11,uVar25);
                      if (iVar8 < 0) {
                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a10;
                        uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a2d;
                        __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                        if (*(long *)(this + 0x78) != 0) {
                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a3c;
                          (*_snd_pcm_close_dylibloader_wrapper_asound)();
                          *(undefined8 *)(this + 0x78) = 0;
                        }
                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a69;
                        _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",
                                         0x8b,
                                         "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN"
                                         ,0,0);
                        puVar22 = puVar21 + lVar24;
                      }
                      else {
                        uVar11 = *(undefined8 *)(this + 200);
                        uVar2 = *(undefined8 *)(this + 0x78);
                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100e2d;
                        iVar8 = (*_snd_pcm_sw_params_set_avail_min_dylibloader_wrapper_asound)
                                          (uVar2,uVar25,uVar11);
                        if (iVar8 < 0) {
                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a76;
                          uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a93;
                          __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                          if (*(long *)(this + 0x78) != 0) {
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101aa2;
                            (*_snd_pcm_close_dylibloader_wrapper_asound)();
                            *(undefined8 *)(this + 0x78) = 0;
                          }
                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101acf;
                          _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp"
                                           ,0x8e,
                                           "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN"
                                           ,0,0);
                          puVar22 = puVar21 + lVar24;
                        }
                        else {
                          uVar11 = *(undefined8 *)(this + 0x78);
                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100e47;
                          iVar8 = (*
                                  _snd_pcm_sw_params_set_start_threshold_dylibloader_wrapper_asound)
                                            (uVar11,uVar25,1);
                          if (iVar8 < 0) {
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101adc;
                            uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101af9;
                            __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                            if (*(long *)(this + 0x78) != 0) {
                              *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101b08;
                              (*_snd_pcm_close_dylibloader_wrapper_asound)();
                              *(undefined8 *)(this + 0x78) = 0;
                            }
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101b35;
                            _err_print_error("init_output_device",
                                             "drivers/alsa/audio_driver_alsa.cpp",0x91,
                                             "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN"
                                             ,0,0);
                            puVar22 = puVar21 + lVar24;
                          }
                          else {
                            uVar11 = *(undefined8 *)(this + 0x78);
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100e5c;
                            iVar8 = (*_snd_pcm_sw_params_dylibloader_wrapper_asound)(uVar11);
                            if (-1 < iVar8) {
                              lVar10 = (long)*(int *)(this + 0xd0) * *(long *)(this + 200);
                              this_01 = (CowData<int> *)(this + 0x98);
                              if (lVar10 < 0) {
                                *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101c7a;
                                _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                                 "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                                 ,0,0);
LAB_00100fa3:
                                lVar10 = (long)*(int *)(this + 0xd0) * *(long *)(this + 200);
                                if (lVar10 < 0) {
                                  *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101ca4;
                                  _err_print_error("resize","./core/templates/cowdata.h",0x157,
                                                                                                      
                                                  "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER"
                                                  ,0,0);
                                  uVar11 = 0;
                                  goto LAB_00101325;
                                }
LAB_00100fc2:
                                this_02 = (CowData<short> *)(this + 0xa8);
                                lVar13 = *(long *)(this + 0xa8);
                                if (lVar13 == 0) {
                                  if (lVar10 != 0) {
                                    lVar26 = 0;
                                    *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101d05;
                                    CowData<short>::_copy_on_write(this_02);
                                    lVar13 = 0;
                                    goto LAB_0010103b;
                                  }
                                }
                                else {
                                  lVar26 = *(long *)(lVar13 + -8);
                                  if (lVar26 != lVar10) {
                                    if (lVar10 == 0) goto LAB_00101bb3;
                                    *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100ff0;
                                    CowData<short>::_copy_on_write(this_02);
                                    lVar13 = lVar26 * 2;
                                    if (lVar13 != 0) {
                                      uVar25 = lVar13 - 1U | lVar13 - 1U >> 1;
                                      uVar25 = uVar25 | uVar25 >> 2;
                                      uVar25 = uVar25 | uVar25 >> 4;
                                      uVar25 = uVar25 | uVar25 >> 8;
                                      uVar25 = uVar25 | uVar25 >> 0x10;
                                      lVar13 = (uVar25 | uVar25 >> 0x20) + 1;
                                    }
LAB_0010103b:
                                    uVar25 = lVar10 * 2 - 1;
                                    uVar25 = uVar25 | uVar25 >> 1;
                                    uVar25 = uVar25 | uVar25 >> 2;
                                    uVar25 = uVar25 | uVar25 >> 4;
                                    uVar25 = uVar25 | uVar25 >> 8;
                                    uVar25 = uVar25 | uVar25 >> 0x10;
                                    uVar25 = uVar25 | uVar25 >> 0x20;
                                    lVar23 = uVar25 + 1;
                                    if (lVar23 == 0) {
                                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101d76;
                                      _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                                                                                                              
                                                  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                                                  ,0,0);
                                      uVar11 = 0;
                                      puVar22 = puVar21 + lVar24;
                                      goto LAB_00101325;
                                    }
                                    if (lVar10 <= lVar26) {
                                      if (lVar23 != lVar13) {
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101b47;
                                        iVar8 = CowData<short>::_realloc(this_02,lVar23);
                                        if (iVar8 != 0) goto LAB_001010d5;
                                      }
                                      if (*(long *)(this + 0xa8) == 0) {
                                        uVar11 = init_output_device();
                                        return uVar11;
                                      }
                                      *(long *)(*(long *)(this + 0xa8) + -8) = lVar10;
                                      uVar11 = 0;
                                      puVar22 = puVar21 + lVar24;
                                      goto LAB_00101325;
                                    }
                                    if (lVar23 == lVar13) {
LAB_00101c09:
                                      puVar17 = *(undefined8 **)(this + 0xa8);
                                      if (puVar17 == (undefined8 *)0x0) {
                                        uVar11 = FUN_00102b4e();
                                        return uVar11;
                                      }
                                    }
                                    else {
                                      if (lVar26 != 0) {
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101c01;
                                        iVar8 = CowData<short>::_realloc(this_02,lVar23);
                                        if (iVar8 != 0) goto LAB_001010d5;
                                        goto LAB_00101c09;
                                      }
                                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x1010ae;
                                      puVar14 = (undefined8 *)
                                                Memory::alloc_static(uVar25 + 0x11,false);
                                      if (puVar14 == (undefined8 *)0x0) {
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101dcc;
                                        _err_print_error("resize","./core/templates/cowdata.h",0x171
                                                         ,"Parameter \"mem_new\" is null.",0,0);
                                        uVar11 = 0;
                                        puVar22 = puVar21 + lVar24;
                                        goto LAB_00101325;
                                      }
                                      puVar17 = puVar14 + 2;
                                      *puVar14 = 1;
                                      puVar14[1] = 0;
                                      *(undefined8 **)(this + 0xa8) = puVar17;
                                    }
                                    puVar17[-1] = lVar10;
                                  }
                                }
                              }
                              else {
                                lVar13 = *(long *)(this + 0x98);
                                if (lVar13 != 0) {
                                  lVar26 = *(long *)(lVar13 + -8);
                                  if (lVar10 - lVar26 != 0) {
                                    if (lVar10 != 0) {
                                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100eb1;
                                      CowData<int>::_copy_on_write(this_01);
                                      lVar13 = lVar26 * 4;
                                      if (lVar13 != 0) {
                                        uVar25 = lVar13 - 1U | lVar13 - 1U >> 1;
                                        uVar25 = uVar25 | uVar25 >> 2;
                                        uVar25 = uVar25 | uVar25 >> 4;
                                        uVar25 = uVar25 | uVar25 >> 8;
                                        uVar25 = uVar25 | uVar25 >> 0x10;
                                        lVar13 = (uVar25 | uVar25 >> 0x20) + 1;
                                      }
                                      goto LAB_00100efd;
                                    }
                                    LOCK();
                                    plVar12 = (long *)(lVar13 + -0x10);
                                    *plVar12 = *plVar12 + -1;
                                    UNLOCK();
                                    if (*plVar12 == 0) {
                                      lVar10 = *(long *)(this + 0x98);
                                      *(undefined8 *)(this + 0x98) = 0;
                                      *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101cec;
                                      Memory::free_static((void *)(lVar10 + -0x10),false);
                                    }
                                    else {
                                      *(undefined8 *)(this + 0x98) = 0;
                                    }
                                    goto LAB_00100fa3;
                                  }
                                  goto LAB_00100fc2;
                                }
                                if (lVar10 != 0) {
                                  lVar26 = 0;
                                  *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101d20;
                                  CowData<int>::_copy_on_write(this_01);
                                  lVar13 = 0;
LAB_00100efd:
                                  if (lVar10 * 4 != 0) {
                                    uVar25 = lVar10 * 4 - 1;
                                    uVar25 = uVar25 | uVar25 >> 1;
                                    uVar25 = uVar25 | uVar25 >> 2;
                                    uVar25 = uVar25 | uVar25 >> 4;
                                    uVar25 = uVar25 | uVar25 >> 8;
                                    uVar25 = uVar25 | uVar25 >> 0x10;
                                    uVar25 = uVar25 | uVar25 >> 0x20;
                                    lVar23 = uVar25 + 1;
                                    if (lVar23 != 0) {
                                      if (lVar10 - lVar26 == 0 || lVar10 < lVar26) {
                                        if (lVar23 != lVar13) {
                                          *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101b77;
                                          iVar8 = CowData<int>::_realloc(this_01,lVar23);
                                          if (iVar8 != 0) goto LAB_00100fa3;
                                        }
                                        if (*(long *)(this + 0x98) == 0) {
                                          uVar11 = FUN_00102b5a();
                                          return uVar11;
                                        }
                                        *(long *)(*(long *)(this + 0x98) + -8) = lVar10;
                                        goto LAB_00100fa3;
                                      }
                                      if (lVar23 == lVar13) {
LAB_00101c30:
                                        puVar17 = *(undefined8 **)(this + 0x98);
                                        if (puVar17 == (undefined8 *)0x0) {
                                          uVar11 = FUN_00102b42();
                                          return uVar11;
                                        }
LAB_00100f9f:
                                        puVar17[-1] = lVar10;
                                      }
                                      else if (lVar26 == 0) {
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x100f7c;
                                        puVar14 = (undefined8 *)
                                                  Memory::alloc_static(uVar25 + 0x11,false);
                                        if (puVar14 != (undefined8 *)0x0) {
                                          puVar17 = puVar14 + 2;
                                          *puVar14 = 1;
                                          puVar14[1] = 0;
                                          *(undefined8 **)(this + 0x98) = puVar17;
                                          goto LAB_00100f9f;
                                        }
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101da2;
                                        _err_print_error("resize","./core/templates/cowdata.h",0x171
                                                         ,"Parameter \"mem_new\" is null.",0,0);
                                      }
                                      else {
                                        *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101c28;
                                        iVar8 = CowData<int>::_realloc(this_01,lVar23);
                                        if (iVar8 == 0) goto LAB_00101c30;
                                      }
                                      goto LAB_00100fa3;
                                    }
                                  }
                                  *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101d4c;
                                  _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                                                                                                      
                                                  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                                                  ,0,0);
                                  goto LAB_00100fa3;
                                }
                                lVar13 = *(long *)(this + 0xa8);
                                if ((lVar13 != 0) && (*(long *)(lVar13 + -8) != 0)) {
LAB_00101bb3:
                                  LOCK();
                                  plVar12 = (long *)(lVar13 + -0x10);
                                  *plVar12 = *plVar12 + -1;
                                  UNLOCK();
                                  if (*plVar12 == 0) {
                                    lVar10 = *(long *)(this + 0xa8);
                                    *(undefined8 *)(this + 0xa8) = 0;
                                    *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101cc8;
                                    Memory::free_static((void *)(lVar10 + -0x10),false);
                                    uVar11 = 0;
                                    puVar22 = puVar21 + lVar24;
                                  }
                                  else {
                                    *(undefined8 *)(this + 0xa8) = 0;
                                    uVar11 = 0;
                                    puVar22 = puVar21 + lVar24;
                                  }
                                  goto LAB_00101325;
                                }
                              }
LAB_001010d5:
                              uVar11 = 0;
                              puVar22 = puVar21 + lVar24;
                              goto LAB_00101325;
                            }
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x1019aa;
                            uVar11 = (*_snd_strerror_dylibloader_wrapper_asound)(iVar8);
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x1019c7;
                            __fprintf_chk(_stderr,2,"ALSA ERR: %s\n",uVar11);
                            if (*(long *)(this + 0x78) != 0) {
                              *(undefined8 *)(puVar21 + lVar24 + -8) = 0x1019d6;
                              (*_snd_pcm_close_dylibloader_wrapper_asound)();
                              *(undefined8 *)(this + 0x78) = 0;
                            }
                            *(undefined8 *)(puVar21 + lVar24 + -8) = 0x101a03;
                            _err_print_error("init_output_device",
                                             "drivers/alsa/audio_driver_alsa.cpp",0x94,
                                             "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN"
                                             ,0,0);
                            puVar22 = puVar21 + lVar24;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar8 = (*_snd_pcm_open_dylibloader_wrapper_asound)(this + 0x78,"default",0,1);
LAB_00100b73:
    if (-1 < iVar8) goto LAB_00100b7c;
LAB_001011c0:
    _err_print_error("init_output_device","drivers/alsa/audio_driver_alsa.cpp",0x5a,
                     "Condition \"status < 0\" is true. Returning: ERR_CANT_OPEN",0,0);
  }
  uVar11 = 0x13;
LAB_00101325:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar22 + -8) = 0x101dd8;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::init() */

int __thiscall AudioDriverALSA::init(AudioDriverALSA *this)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  initialize_pulse(1);
  iVar6 = initialize_asound(1);
  if (iVar6 != 0) {
    iVar6 = 0x13;
    goto LAB_00101ff4;
  }
  iVar6 = (*_snd_asoundlib_version_dylibloader_wrapper_asound)();
  String::utf8((char *)&local_88,iVar6);
  String::split(local_68,SUB81(&local_88,0),0x102eb2);
  if ((local_60 != 0) && (1 < *(long *)(local_60 + -8))) {
    lVar7 = String::to_int();
    if (lVar7 != 1) {
LAB_0010202f:
      if (local_60 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(long *)(local_60 + -8);
        if (0 < lVar7) {
          lVar7 = String::to_int();
          if (1 < lVar7) goto LAB_00102059;
          goto LAB_00101e79;
        }
      }
      lVar8 = 0;
      goto LAB_00102238;
    }
    if (local_60 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(local_60 + -8);
      if (1 < lVar7) {
        lVar7 = String::to_int();
        if (lVar7 < 1) goto LAB_0010202f;
LAB_00102059:
        cVar5 = is_print_verbose_enabled();
        if (cVar5 != '\0') {
          bVar3 = true;
          goto LAB_00101e88;
        }
        goto LAB_00101fa2;
      }
    }
    lVar8 = 1;
LAB_00102238:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_00101e79:
  cVar5 = is_print_verbose_enabled();
  if (cVar5 == '\0') {
LAB_00102070:
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      Variant::Variant((Variant *)local_48,"Unsupported ALSA library version!");
      stringify_variants((Variant *)&local_58);
      __print_line((String *)&local_58);
      pcVar4 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    iVar6 = 0x13;
  }
  else {
    bVar3 = false;
LAB_00101e88:
    local_78 = 0;
    plVar1 = (long *)(local_88 + -0x10);
    if (local_88 != 0) {
      do {
        lVar7 = *plVar1;
        if (lVar7 == 0) goto LAB_00101ec0;
        LOCK();
        lVar8 = *plVar1;
        bVar9 = lVar7 == lVar8;
        if (bVar9) {
          *plVar1 = lVar7 + 1;
          lVar8 = lVar7;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_78 = local_88;
      }
    }
LAB_00101ec0:
    local_80 = 0;
    local_58 = "ALSA %s detected.";
    local_50 = 0x11;
    String::parse_latin1((StrRange *)&local_80);
    vformat<String>((String *)&local_70,(StrRange *)&local_80,&local_78);
    Variant::Variant((Variant *)local_48,(String *)&local_70);
    stringify_variants((Variant *)&local_58);
    __print_line((String *)&local_58);
    pcVar4 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
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
    lVar7 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if (!bVar3) goto LAB_00102070;
LAB_00101fa2:
    this[0xd4] = (AudioDriverALSA)0x0;
    this[0xd5] = (AudioDriverALSA)0x0;
    iVar6 = init_output_device(this);
    if (iVar6 == 0) {
      local_58 = (char *)CONCAT44(local_58._4_4_,1);
      Thread::start((_func_void_void_ptr *)(this + 0x40),thread_func,(Settings *)this);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
  lVar7 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_00101ff4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::thread_func(void*) */

void AudioDriverALSA::thread_func(void *param_1)

{
  char *pcVar1;
  StrRange *pSVar2;
  String *this;
  undefined2 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  size_t sVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)((long)param_1 + 0xd5);
  do {
    if (*pcVar1 != '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_00102890:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Load size is inaccurate */
    if (*(code **)(*param_1 + 0x38) == lock) {
      iVar6 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x50));
      if (iVar6 != 0) {
LAB_00102889:
        std::__throw_system_error(iVar6);
        goto LAB_00102890;
      }
    }
    else {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    plVar7 = (long *)OS::get_singleton();
    uVar8 = (**(code **)(*plVar7 + 0x208))(plVar7);
    *(undefined8 *)((long)param_1 + 0x18) = uVar8;
    if (*(char *)((long)param_1 + 0xd4) == '\0') {
      uVar12 = *(ulong *)((long)param_1 + 200);
      if ((long)*(int *)((long)param_1 + 0xd0) * uVar12 != 0) {
        lVar9 = *(long *)((long)param_1 + 0xa8);
        uVar15 = 0;
        do {
          if (lVar9 == 0) {
LAB_001025a0:
            lVar9 = 0;
LAB_001025a6:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,uVar15,lVar9,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar9 = *(long *)(lVar9 + -8);
          if (lVar9 <= (long)uVar15) goto LAB_001025a6;
          CowData<short>::_copy_on_write((CowData<short> *)((long)param_1 + 0xa8));
          lVar9 = *(long *)((long)param_1 + 0xa8);
          uVar12 = *(ulong *)((long)param_1 + 200);
          *(undefined2 *)(lVar9 + uVar15 * 2) = 0;
          uVar15 = uVar15 + 1;
        } while (uVar15 < (long)*(int *)((long)param_1 + 0xd0) * uVar12);
      }
    }
    else {
      CowData<int>::_copy_on_write((CowData<int> *)((long)param_1 + 0x98));
      AudioDriver::audio_server_process
                ((int)param_1,(int *)(ulong)*(uint *)((long)param_1 + 200),
                 SUB81(*(undefined8 *)((long)param_1 + 0x98),0));
      uVar12 = *(ulong *)((long)param_1 + 200);
      if ((long)*(int *)((long)param_1 + 0xd0) * uVar12 != 0) {
        lVar9 = *(long *)((long)param_1 + 0x98);
        uVar15 = 0;
        do {
          if (lVar9 == 0) {
            lVar16 = 0;
LAB_0010255c:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar15,lVar16,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar16 = *(long *)(lVar9 + -8);
          if (lVar16 <= (long)uVar15) goto LAB_0010255c;
          uVar3 = *(undefined2 *)(lVar9 + 2 + uVar15 * 4);
          if (*(long *)((long)param_1 + 0xa8) == 0) goto LAB_001025a0;
          lVar9 = *(long *)(*(long *)((long)param_1 + 0xa8) + -8);
          if (lVar9 <= (long)uVar15) goto LAB_001025a6;
          CowData<short>::_copy_on_write((CowData<short> *)((long)param_1 + 0xa8));
          uVar12 = *(ulong *)((long)param_1 + 200);
          *(undefined2 *)(*(long *)((long)param_1 + 0xa8) + uVar15 * 2) = uVar3;
          uVar15 = uVar15 + 1;
          if ((long)*(int *)((long)param_1 + 0xd0) * uVar12 <= uVar15) break;
          lVar9 = *(long *)((long)param_1 + 0x98);
        } while( true );
      }
    }
    uVar13 = (uint)uVar12;
    uVar12 = uVar12 & 0xffffffff;
    iVar14 = 0;
    while (uVar13 != 0) {
      while( true ) {
        if (*pcVar1 != '\0') goto LAB_001023ed;
        iVar6 = (*_snd_pcm_writei_dylibloader_wrapper_asound)
                          (*(undefined8 *)((long)param_1 + 0x78),
                           *(long *)((long)param_1 + 0xa8) +
                           (long)(*(int *)((long)param_1 + 0xd0) * iVar14) * 2,(long)(int)uVar12);
        if (0 < iVar6) break;
        if (iVar6 == -0xb) {
          plVar7 = (long *)OS::get_singleton();
          lVar9 = (**(code **)(*plVar7 + 0x208))(plVar7);
          LOCK();
          *(long *)((long)param_1 + 0x20) =
               *(long *)((long)param_1 + 0x20) + (lVar9 - *(long *)((long)param_1 + 0x18));
          UNLOCK();
                    /* WARNING: Load size is inaccurate */
          if (*(code **)(*param_1 + 0x40) == unlock) {
            pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x50));
          }
          else {
            (**(code **)(*param_1 + 0x40))(param_1);
          }
          plVar7 = (long *)OS::get_singleton();
          (**(code **)(*plVar7 + 0x1f8))(plVar7,1000);
                    /* WARNING: Load size is inaccurate */
          if (*(code **)(*param_1 + 0x38) == lock) {
            iVar6 = pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0x50));
            if (iVar6 != 0) goto LAB_00102889;
          }
          else {
            (**(code **)(*param_1 + 0x38))(param_1);
          }
          plVar7 = (long *)OS::get_singleton();
          lVar9 = (**(code **)(*plVar7 + 0x208))(plVar7);
          *(long *)((long)param_1 + 0x18) = lVar9;
        }
        else {
          iVar6 = (*_snd_pcm_recover_dylibloader_wrapper_asound)
                            (*(undefined8 *)((long)param_1 + 0x78),iVar6,0);
          if (iVar6 < 0) {
            pcVar10 = (char *)(*_snd_strerror_dylibloader_wrapper_asound)(iVar6);
            local_60 = 0;
            sVar11 = 0;
            if (pcVar10 != (char *)0x0) {
              sVar11 = strlen(pcVar10);
            }
            local_58 = pcVar10;
            local_50 = sVar11;
            String::parse_latin1((StrRange *)&local_60);
            operator+((char *)&local_58,(String *)"ALSA: Failed and can\'t recover: ");
            _err_print_error("thread_func","drivers/alsa/audio_driver_alsa.cpp",0xed,&local_58,0,0);
            pcVar10 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar7 = (long *)(local_58 + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar10 + -0x10,false);
              }
            }
            lVar9 = local_60;
            if (local_60 != 0) {
              LOCK();
              plVar7 = (long *)(local_60 + -0x10);
              *plVar7 = *plVar7 + -1;
              UNLOCK();
              if (*plVar7 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar9 + -0x10),false);
              }
            }
            *(undefined1 *)((long)param_1 + 0xd4) = 0;
            *pcVar1 = '\x01';
          }
        }
      }
      iVar14 = iVar14 + iVar6;
      uVar13 = (int)uVar12 - iVar6;
      uVar12 = (ulong)uVar13;
    }
LAB_001023ed:
    pSVar2 = (StrRange *)((long)param_1 + 0x88);
    this = (String *)((long)param_1 + 0x80);
    cVar5 = String::operator!=(this,(String *)pSVar2);
    if (cVar5 != '\0') {
      if (*(long *)((long)param_1 + 0x80) != *(long *)((long)param_1 + 0x88)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)pSVar2);
      }
      if (*(long *)((long)param_1 + 0x78) != 0) {
        (*_snd_pcm_close_dylibloader_wrapper_asound)();
        *(undefined8 *)((long)param_1 + 0x78) = 0;
      }
      iVar6 = init_output_device((AudioDriverALSA *)param_1);
      if (iVar6 != 0) {
        _err_print_error("thread_func","drivers/alsa/audio_driver_alsa.cpp",0xfb,
                         "ALSA: init_output_device error");
        local_58 = "Default";
        local_50 = 7;
        String::parse_latin1((StrRange *)this);
        local_58 = "Default";
        local_50 = 7;
        String::parse_latin1(pSVar2);
        iVar6 = init_output_device((AudioDriverALSA *)param_1);
        if (iVar6 != 0) {
          *(undefined1 *)((long)param_1 + 0xd4) = 0;
          *pcVar1 = '\x01';
        }
      }
    }
    plVar7 = (long *)OS::get_singleton();
    lVar9 = (**(code **)(*plVar7 + 0x208))(plVar7);
    LOCK();
    *(long *)((long)param_1 + 0x20) =
         *(long *)((long)param_1 + 0x20) + (lVar9 - *(long *)((long)param_1 + 0x18));
    UNLOCK();
                    /* WARNING: Load size is inaccurate */
    if (*(code **)(*param_1 + 0x40) == unlock) {
      pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0x50));
    }
    else {
      (**(code **)(*param_1 + 0x40))(param_1);
    }
  } while( true );
}



/* AudioDriver::get_latency() */

undefined8 AudioDriver::get_latency(void)

{
  return 0;
}



/* AudioDriver::input_start() */

undefined8 AudioDriver::input_start(void)

{
  return 1;
}



/* AudioDriver::input_stop() */

undefined8 AudioDriver::input_stop(void)

{
  return 1;
}



/* AudioDriver::set_input_device(String const&) */

void AudioDriver::set_input_device(String *param_1)

{
  return;
}



/* AudioDriver::is_stream_registered_as_sample(Ref<AudioStream> const&) const */

undefined8 AudioDriver::is_stream_registered_as_sample(Ref *param_1)

{
  return 0;
}



/* AudioDriver::register_sample(Ref<AudioSample> const&) */

void AudioDriver::register_sample(Ref *param_1)

{
  return;
}



/* AudioDriver::unregister_sample(Ref<AudioSample> const&) */

void AudioDriver::unregister_sample(Ref *param_1)

{
  return;
}



/* AudioDriver::stop_sample_playback(Ref<AudioSamplePlayback> const&) */

void AudioDriver::stop_sample_playback(Ref *param_1)

{
  return;
}



/* AudioDriver::set_sample_playback_pause(Ref<AudioSamplePlayback> const&, bool) */

void AudioDriver::set_sample_playback_pause(Ref *param_1,bool param_2)

{
  return;
}



/* AudioDriver::is_sample_playback_active(Ref<AudioSamplePlayback> const&) */

undefined8 AudioDriver::is_sample_playback_active(Ref *param_1)

{
  return 0;
}



/* AudioDriver::get_sample_playback_position(Ref<AudioSamplePlayback> const&) */

undefined8 AudioDriver::get_sample_playback_position(Ref *param_1)

{
  return 0;
}



/* AudioDriver::update_sample_playback_pitch_scale(Ref<AudioSamplePlayback> const&, float) */

void AudioDriver::update_sample_playback_pitch_scale(Ref *param_1,float param_2)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioDriver::set_sample_playback_bus_volumes_linear(Ref<AudioSamplePlayback> const&,
   HashMap<StringName, Vector<AudioFrame>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<AudioFrame> > > > const&) */

void AudioDriver::set_sample_playback_bus_volumes_linear(Ref *param_1,HashMap *param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_count(int) */

void AudioDriver::set_sample_bus_count(int param_1)

{
  return;
}



/* AudioDriver::remove_sample_bus(int) */

void AudioDriver::remove_sample_bus(int param_1)

{
  return;
}



/* AudioDriver::add_sample_bus(int) */

void AudioDriver::add_sample_bus(int param_1)

{
  return;
}



/* AudioDriver::move_sample_bus(int, int) */

void AudioDriver::move_sample_bus(int param_1,int param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_send(int, StringName const&) */

void AudioDriver::set_sample_bus_send(int param_1,StringName *param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_volume_db(int, float) */

void AudioDriver::set_sample_bus_volume_db(int param_1,float param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_solo(int, bool) */

void AudioDriver::set_sample_bus_solo(int param_1,bool param_2)

{
  return;
}



/* AudioDriver::set_sample_bus_mute(int, bool) */

void AudioDriver::set_sample_bus_mute(int param_1,bool param_2)

{
  return;
}



/* AudioDriverALSA::get_name() const */

undefined * AudioDriverALSA::get_name(void)

{
  return &_LC2;
}



/* CowData<short>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<short>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AudioDriverALSA::init_output_device() [clone .cold] */

void AudioDriverALSA::init_output_device(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102b42(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102b4e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102b5a(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* AudioDriver::get_input_mix_rate() const */

ulong __thiscall AudioDriver::get_input_mix_rate(AudioDriver *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x18) == AudioDriverALSA::get_mix_rate) {
    return (ulong)*(uint *)(this + 0xb0);
  }
                    /* WARNING: Could not recover jumptable at 0x00102b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x18))();
  return uVar1;
}



/* AudioDriver::get_input_device() */

AudioDriver * __thiscall AudioDriver::get_input_device(AudioDriver *this)

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



/* AudioDriverALSA::~AudioDriverALSA() */

void __thiscall AudioDriverALSA::~AudioDriverALSA(AudioDriverALSA *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_name_00103a70;
  if (*(long *)(this + 0xa8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x98) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x98) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x98);
      *(undefined8 *)(this + 0x98) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x88) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x88) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x88) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x80);
      *(undefined8 *)(this + 0x80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Thread::~Thread((Thread *)(this + 0x40));
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* AudioDriverALSA::~AudioDriverALSA() */

void __thiscall AudioDriverALSA::~AudioDriverALSA(AudioDriverALSA *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR_get_name_00103a70;
  if (*(long *)(this + 0xa8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x98) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x98) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x98);
      *(undefined8 *)(this + 0x98) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x88) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x88) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x88);
      *(undefined8 *)(this + 0x88) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x80);
      *(undefined8 *)(this + 0x80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Thread::~Thread((Thread *)(this + 0x40));
  *(code **)this = Variant::Variant;
  if (*(long *)(this + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x30) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x30);
      *(undefined8 *)(this + 0x30) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      operator_delete(this,0xd8);
      return;
    }
  }
  operator_delete(this,0xd8);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00103048) */
/* WARNING: Removing unreachable block (ram,0x00103178) */
/* WARNING: Removing unreachable block (ram,0x00103340) */
/* WARNING: Removing unreachable block (ram,0x00103184) */
/* WARNING: Removing unreachable block (ram,0x0010318e) */
/* WARNING: Removing unreachable block (ram,0x00103320) */
/* WARNING: Removing unreachable block (ram,0x0010319a) */
/* WARNING: Removing unreachable block (ram,0x001031a4) */
/* WARNING: Removing unreachable block (ram,0x00103300) */
/* WARNING: Removing unreachable block (ram,0x001031b0) */
/* WARNING: Removing unreachable block (ram,0x001031ba) */
/* WARNING: Removing unreachable block (ram,0x001032e0) */
/* WARNING: Removing unreachable block (ram,0x001031c6) */
/* WARNING: Removing unreachable block (ram,0x001031d0) */
/* WARNING: Removing unreachable block (ram,0x001032c0) */
/* WARNING: Removing unreachable block (ram,0x001031dc) */
/* WARNING: Removing unreachable block (ram,0x001031e6) */
/* WARNING: Removing unreachable block (ram,0x001032a0) */
/* WARNING: Removing unreachable block (ram,0x001031f2) */
/* WARNING: Removing unreachable block (ram,0x001031fc) */
/* WARNING: Removing unreachable block (ram,0x00103280) */
/* WARNING: Removing unreachable block (ram,0x00103204) */
/* WARNING: Removing unreachable block (ram,0x0010321a) */
/* WARNING: Removing unreachable block (ram,0x00103226) */
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
LAB_001037c0:
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
  if (lVar10 == 0) goto LAB_001037c0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00103699:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00103699;
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
    goto LAB_00103816;
  }
  if (lVar10 == lVar7) {
LAB_0010373f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00103816:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010372a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010373f;
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
LAB_0010372a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

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



/* CowData<short>::_realloc(long) */

undefined8 __thiscall CowData<short>::_realloc(CowData<short> *this,long param_1)

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
/* AudioDriverALSA::~AudioDriverALSA() */

void __thiscall AudioDriverALSA::~AudioDriverALSA(AudioDriverALSA *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


