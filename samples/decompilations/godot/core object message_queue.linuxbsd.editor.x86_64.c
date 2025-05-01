
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



/* CallQueue::_call_function(Callable const&, Variant const*, int, bool) */

void __thiscall
CallQueue::_call_function
          (CallQueue *this,Callable *param_1,Variant *param_2,int param_3,bool param_4)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [8];
  StrRange *local_b0;
  Callable *local_a8;
  CallError *local_a0;
  long local_90;
  long local_88;
  long local_80;
  int local_78;
  undefined8 local_74;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  undefined1 *puVar6;
  
  puVar9 = (undefined8 *)0x0;
  puVar5 = auStack_b8;
  puVar6 = auStack_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = auStack_b8;
  if (param_3 != 0) {
    uVar8 = (long)param_3 * 8 + 0x17;
    puVar7 = auStack_b8;
    while (puVar6 != auStack_b8 + -(uVar8 & 0xfffffffffffff000)) {
      puVar5 = puVar7 + -0x1000;
      *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
      puVar6 = puVar7 + -0x1000;
      puVar7 = puVar7 + -0x1000;
    }
    uVar8 = (ulong)((uint)uVar8 & 0xff0);
    lVar2 = -uVar8;
    if (uVar8 != 0) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    puVar9 = (undefined8 *)((ulong)(puVar5 + lVar2 + 0xf) & 0xfffffffffffffff0);
    puVar7 = puVar5 + lVar2;
    if (0 < param_3) {
      puVar4 = puVar9;
      do {
        *puVar4 = param_2;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 0x18;
        puVar7 = puVar5 + lVar2;
      } while (puVar9 + param_3 != puVar4);
    }
  }
  local_78 = 0;
  local_74 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_50 = (undefined1  [16])0x0;
  local_a0 = (CallError *)local_58;
  *(undefined8 *)(puVar7 + -8) = 0x100171;
  Callable::callp((Variant **)param_1,(int)puVar9,(Variant *)(ulong)(uint)param_3,
                  (CallError *)local_58);
  if ((param_4) && (local_78 != 0)) {
    local_80 = 0;
    local_68 = &_LC0;
    local_60 = 1;
    local_b0 = (StrRange *)&local_80;
    *(undefined8 *)(puVar7 + -8) = 0x1001ed;
    String::parse_latin1((StrRange *)&local_80);
    local_a8 = (Callable *)&local_90;
    *(undefined8 *)(puVar7 + -8) = 0x10020f;
    Variant::get_callable_error_text
              ((Callable *)&local_90,(Variant **)param_1,(int)puVar9,
               (CallError *)(ulong)(uint)param_3);
    *(undefined8 *)(puVar7 + -8) = 0x100225;
    operator+((char *)&local_88,(String *)"Error calling deferred method: ");
    *(undefined8 *)(puVar7 + -8) = 0x100237;
    String::operator+((String *)&local_68,(String *)&local_88);
    *(undefined8 *)(puVar7 + -8) = 0x100258;
    _err_print_error("_call_function","core/object/message_queue.cpp",0xde,(String *)&local_68,0,0);
    puVar3 = local_68;
    if (local_68 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = (undefined *)0x0;
        *(undefined8 *)(puVar7 + -8) = 0x100280;
        Memory::free_static(puVar3 + -0x10,false);
      }
    }
    lVar2 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        *(undefined8 *)(puVar7 + -8) = 0x1002a8;
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
        *(undefined8 *)(puVar7 + -8) = 0x1002d9;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        *(undefined8 *)(puVar7 + -8) = 0x100309;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    *(undefined8 *)(puVar7 + -8) = 0x10031c;
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_00100326;
    __stack_chk_fail();
  }
  return;
}



/* CallQueue::flush() */

undefined8 __thiscall CallQueue::flush(CallQueue *this)

{
  pthread_mutex_t *__mutex;
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  StringName *pSVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  Callable *this_00;
  uint uVar11;
  Callable *pCVar12;
  long *in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if ((CallQueue *)*in_FS_OFFSET == this) {
    if (*(int *)(this + 0x40) != 0) {
      if (this[0x68] != (CallQueue)0x0) goto LAB_00100561;
      goto LAB_0010038d;
    }
  }
  else {
    __mutex = (pthread_mutex_t *)(this + 8);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
LAB_00100717:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
    if (*(int *)(this + 0x40) == 0) {
      if ((CallQueue *)*in_FS_OFFSET != this) {
        pthread_mutex_unlock(__mutex);
        uVar7 = 0;
        goto LAB_00100566;
      }
    }
    else {
      if (this[0x68] != (CallQueue)0x0) {
        if ((CallQueue *)*in_FS_OFFSET != this) {
          pthread_mutex_unlock(__mutex);
        }
LAB_00100561:
        uVar7 = 0x2c;
        goto LAB_00100566;
      }
LAB_0010038d:
      this[0x68] = (CallQueue)0x1;
      uVar11 = 0;
      uVar9 = 0;
      uVar10 = (ulong)*(uint *)(this + 0x50);
      if (*(int *)(this + 100) == 0) {
        if (*(uint *)(this + 0x50) == 0) {
          uVar10 = 0;
          uVar8 = 0;
LAB_001005de:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,uVar10,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar6 = *(undefined4 **)(this + 0x58);
      }
      else {
        do {
          if ((uint)uVar10 <= uVar9) {
            uVar8 = (ulong)uVar9;
            goto LAB_001005de;
          }
          puVar6 = *(undefined4 **)(this + 0x58);
          uVar8 = (ulong)uVar9;
          if ((uint)puVar6[uVar8] <= uVar11) break;
          uVar10 = (ulong)*(uint *)(this + 0x40);
          if (*(uint *)(this + 0x40) <= uVar9) goto LAB_001005de;
          iVar4 = 0x18;
          this_00 = (Callable *)((ulong)uVar11 + *(long *)(*(long *)(this + 0x48) + uVar8 * 8));
          if ((*(ushort *)(this_00 + 0x10) & 0x1fff) != 1) {
            iVar4 = (*(short *)(this_00 + 0x12) * 3 + 3) * 8;
          }
          uVar11 = uVar11 + iVar4;
          pSVar5 = (StringName *)Callable::get_object();
          if ((CallQueue *)*in_FS_OFFSET != this) {
            pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
          }
          uVar3 = *(ushort *)(this_00 + 0x10);
          uVar2 = uVar3 & 0x1fff;
          if (uVar2 == 1) {
            if (pSVar5 != (StringName *)0x0) {
              Object::notification((int)pSVar5,SUB21(*(undefined2 *)(this_00 + 0x12),0));
              uVar3 = *(ushort *)(this_00 + 0x10) & 0x1fff;
              goto LAB_00100474;
            }
          }
          else {
            if (uVar2 == 2) {
              if (pSVar5 != (StringName *)0x0) {
                Callable::get_method();
                Object::set(pSVar5,(Variant *)&local_48,(bool *)(this_00 + 0x18));
                if ((StringName::configured != '\0') && (local_48 != 0)) {
                  StringName::unref();
                }
                uVar3 = *(ushort *)(this_00 + 0x10) & 0x1fff;
                goto LAB_00100474;
              }
            }
            else if ((uVar2 == 0) && ((pSVar5 != (StringName *)0x0 || ((uVar3 & 0x2000) != 0)))) {
              _call_function(this,this_00,(Variant *)(this_00 + 0x18),
                             (int)*(short *)(this_00 + 0x12),(bool)((byte)(uVar3 >> 0xe) & 1));
              uVar3 = *(ushort *)(this_00 + 0x10) & 0x1fff;
LAB_00100474:
              if (uVar3 == 1) goto LAB_0010047a;
            }
            iVar4 = 0;
            pCVar12 = this_00;
            if (0 < *(short *)(this_00 + 0x12)) {
              do {
                pCVar12 = pCVar12 + 0x18;
                iVar4 = iVar4 + 1;
                if (Variant::needs_deinit[*(int *)pCVar12] != '\0') {
                  Variant::_clear_internal();
                }
              } while (iVar4 < *(short *)(this_00 + 0x12));
            }
          }
LAB_0010047a:
          Callable::~Callable(this_00);
          if (((CallQueue *)*in_FS_OFFSET != this) &&
             (iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 8)), iVar4 != 0))
          goto LAB_00100717;
          uVar10 = (ulong)*(uint *)(this + 0x50);
          if (*(uint *)(this + 0x50) <= uVar9) goto LAB_001005de;
          puVar6 = *(undefined4 **)(this + 0x58);
          if (puVar6[uVar8] == uVar11) {
            uVar9 = uVar9 + 1;
            uVar11 = 0;
          }
        } while (uVar9 < *(uint *)(this + 100));
      }
      *puVar6 = 0;
      *(undefined4 *)(this + 100) = 1;
      this[0x68] = (CallQueue)0x0;
      if ((CallQueue *)*in_FS_OFFSET != this) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
      }
    }
  }
  uVar7 = 0;
LAB_00100566:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* CallQueue::clear() */

void __thiscall CallQueue::clear(CallQueue *this)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  Callable *this_00;
  Callable *pCVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long *in_FS_OFFSET;
  ulong local_50;
  
  if ((CallQueue *)*in_FS_OFFSET == this) {
    if (*(int *)(this + 0x40) == 0) {
      return;
    }
  }
  else {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 8));
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    if (*(int *)(this + 0x40) == 0) {
      if ((CallQueue *)*in_FS_OFFSET == this) {
        return;
      }
      goto LAB_00100906;
    }
  }
  if (*(int *)(this + 100) != 0) {
    local_50 = 0;
    uVar6 = (ulong)*(uint *)(this + 0x50);
    do {
      uVar4 = (uint)local_50;
      if ((uint)uVar6 <= uVar4) {
LAB_00100858:
        local_50 = local_50 & 0xffffffff;
        goto LAB_00100877;
      }
      uVar8 = 0;
      while (uVar7 = (uint)uVar8, uVar7 < *(uint *)(*(long *)(this + 0x58) + local_50 * 4)) {
        uVar6 = (ulong)*(uint *)(this + 0x40);
        if (*(uint *)(this + 0x40) <= uVar4) goto LAB_00100858;
        this_00 = (Callable *)(uVar8 + *(long *)(*(long *)(this + 0x48) + local_50 * 8));
        if ((*(ushort *)(this_00 + 0x10) & 0x1fff) == 1) {
          uVar7 = uVar7 + 0x18;
        }
        else {
          sVar1 = *(short *)(this_00 + 0x12);
          if (0 < sVar1) {
            iVar3 = 0;
            pCVar5 = this_00;
            do {
              pCVar5 = pCVar5 + 0x18;
              iVar3 = iVar3 + 1;
              if (Variant::needs_deinit[*(int *)pCVar5] != '\0') {
                Variant::_clear_internal();
              }
            } while (iVar3 < *(short *)(this_00 + 0x12));
          }
          uVar7 = uVar7 + (sVar1 * 3 + 3) * 8;
        }
        uVar8 = (ulong)uVar7;
        Callable::~Callable(this_00);
        uVar6 = (ulong)*(uint *)(this + 0x50);
        if (*(uint *)(this + 0x50) <= uVar4) goto LAB_00100858;
      }
      local_50 = local_50 + 1;
    } while ((uint)local_50 < *(uint *)(this + 100));
  }
  *(undefined4 *)(this + 100) = 1;
  if (*(int *)(this + 0x50) == 0) {
    uVar6 = 0;
    local_50 = 0;
LAB_00100877:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,local_50,uVar6,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  **(undefined4 **)(this + 0x58) = 0;
  if (this == (CallQueue *)*in_FS_OFFSET) {
    return;
  }
LAB_00100906:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  return;
}



/* CallQueue::is_flushing() const */

CallQueue __thiscall CallQueue::is_flushing(CallQueue *this)

{
  return this[0x68];
}



/* CallQueue::has_messages() const */

undefined4 __thiscall CallQueue::has_messages(CallQueue *this)

{
  code *pcVar1;
  
  if (*(int *)(this + 100) == 0) {
    return 0;
  }
  if (*(int *)(this + 100) != 1) {
    return 1;
  }
  if (*(int *)(this + 0x50) != 0) {
    return CONCAT31((int3)((uint)*(int *)(this + 0x50) >> 8),**(int **)(this + 0x58) != 0);
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xae,0,0,"p_index","count","",false,true
            );
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallQueue::get_max_buffer_usage() const */

int __thiscall CallQueue::get_max_buffer_usage(CallQueue *this)

{
  return *(int *)(this + 0x40) << 0xc;
}



/* CallQueue::CallQueue(PagedAllocator<CallQueue::Page, true, 4096u>*, unsigned int, String const&)
    */

void __thiscall
CallQueue::CallQueue(CallQueue *this,PagedAllocator *param_1,uint param_2,String *param_3)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x18) = 1;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (CallQueue)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__CallQueue_001053f8;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (CallQueue)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (param_1 == (PagedAllocator *)0x0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x68,"");
    *(undefined4 *)pauVar6[2] = 0;
    pcVar1 = pauVar6[2] + 4;
    pauVar6[2][4] = 0;
    *pauVar6 = (undefined1  [16])0x0;
    pauVar6[1] = (undefined1  [16])0x0;
    while( true ) {
      LOCK();
      cVar2 = *pcVar1;
      if (cVar2 == '\0') {
        *pcVar1 = '\x01';
      }
      uVar4 = _LC9;
      UNLOCK();
      if (cVar2 == '\0') break;
      do {
      } while (*pcVar1 != '\0');
    }
    if (*(long *)*pauVar6 == 0) {
      *(undefined4 *)pauVar6[2] = 0x10;
      *(undefined8 *)(pauVar6[1] + 8) = uVar4;
      pauVar6[2][4] = 0;
    }
    else {
      _err_print_error("configure","./core/templates/paged_allocator.h",0x93,
                       "Condition \"page_pool != nullptr\" is true.",0,0);
    }
    *(undefined1 (**) [16])(this + 0x30) = pauVar6;
    lVar5 = *(long *)(this + 0x70);
    this[0x38] = (CallQueue)0x0;
  }
  else {
    *(PagedAllocator **)(this + 0x30) = param_1;
    lVar5 = 0;
    this[0x38] = (CallQueue)0x1;
  }
  *(uint *)(this + 0x60) = param_2;
  if (*(long *)param_3 == lVar5) {
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x70),(CowData *)param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MessageQueue::set_thread_singleton_override(CallQueue*) */

void MessageQueue::set_thread_singleton_override(CallQueue *param_1)

{
  undefined8 *in_FS_OFFSET;
  
  *in_FS_OFFSET = param_1;
  return;
}



/* MessageQueue::MessageQueue() */

void __thiscall MessageQueue::MessageQueue(MessageQueue *this)

{
  long *plVar1;
  long lVar2;
  MessageQueue *pMVar3;
  int iVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  long local_a0;
  long local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_a0 = 0x6a;
  local_a8 = 
  "Message queue out of memory. Try increasing \'memory/limits/message_queue/max_size_mb\' in project settings."
  ;
  String::parse_latin1((StrRange *)&local_b8);
  Variant::Variant((Variant *)local_58,0x20);
  local_a8 = "1,512,1,or_greater";
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_a8 = "memory/limits/message_queue/max_size_mb";
  local_a0 = 0x27;
  String::parse_latin1((StrRange *)&local_d0);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_d0);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c8);
    local_80 = 6;
    if (local_90 == 0x11) {
      StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
      if (local_98 == local_b0) {
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_98 = local_b0;
      }
      goto LAB_00100d97;
    }
  }
  local_80 = 6;
  StringName::operator=((StringName *)&local_98,(StringName *)&local_c0);
LAB_00100d97:
  _GLOBAL_DEF((PropertyInfo *)local_78,(Variant *)&local_a8,SUB81((Variant *)local_58,0),true,false,
              false);
  iVar4 = Variant::operator_cast_to_int((Variant *)local_78);
  CallQueue::CallQueue((CallQueue *)this,(PagedAllocator *)0x0,iVar4 << 8,(String *)&local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar1 = (long *)(local_b8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar5 = main_singleton != (MessageQueue *)0x0;
  *(undefined ***)this = &PTR__MessageQueue_00105418;
  pMVar3 = this;
  if (bVar5) {
    _err_print_error("MessageQueue","core/object/message_queue.cpp",0x1fe,
                     "Condition \"main_singleton != nullptr\" is true.",
                     "A MessageQueue singleton already exists.",0,0);
    pMVar3 = main_singleton;
  }
  main_singleton = pMVar3;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallQueue::_add_page() */

void __thiscall CallQueue::_add_page(CallQueue *this)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  Page *pPVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  
  uVar1 = *(uint *)(this + 100);
  uVar2 = *(uint *)(this + 0x50);
  if (uVar1 == uVar2) {
    pPVar4 = PagedAllocator<CallQueue::Page,true,4096u>::alloc<>
                       (*(PagedAllocator<CallQueue::Page,true,4096u> **)(this + 0x30));
    uVar1 = *(uint *)(this + 0x40);
    if (uVar1 == *(uint *)(this + 0x44)) {
      uVar7 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar7 = 1;
      }
      *(int *)(this + 0x44) = (int)uVar7;
      lVar5 = Memory::realloc_static(*(void **)(this + 0x48),uVar7 * 8,false);
      *(long *)(this + 0x48) = lVar5;
      if (lVar5 == 0) goto LAB_00101149;
      uVar1 = *(uint *)(this + 0x40);
    }
    else {
      lVar5 = *(long *)(this + 0x48);
    }
    pvVar6 = *(void **)(this + 0x58);
    *(uint *)(this + 0x40) = uVar1 + 1;
    *(Page **)(lVar5 + (ulong)uVar1 * 8) = pPVar4;
    uVar1 = *(uint *)(this + 0x50);
    if (uVar1 == *(uint *)(this + 0x54)) {
      uVar7 = (ulong)(uVar1 * 2);
      if (uVar1 * 2 == 0) {
        uVar7 = 1;
      }
      *(int *)(this + 0x54) = (int)uVar7;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,uVar7 * 4,false);
      *(void **)(this + 0x58) = pvVar6;
      if (pvVar6 == (void *)0x0) {
LAB_00101149:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar1 = *(uint *)(this + 0x50);
    }
    *(uint *)(this + 0x50) = uVar1 + 1;
    *(undefined4 *)((long)pvVar6 + (ulong)uVar1 * 4) = 0;
    uVar1 = *(uint *)(this + 100);
    uVar2 = *(uint *)(this + 0x50);
  }
  if (uVar1 < uVar2) {
    *(undefined4 *)(*(long *)(this + 0x58) + (ulong)uVar1 * 4) = 0;
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
    return;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,(ulong)uVar2,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallQueue::statistics() */

void __thiscall CallQueue::statistics(CallQueue *this)

{
  long *plVar1;
  undefined4 uVar2;
  char *pcVar3;
  long lVar4;
  void *pvVar5;
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
  code *pcVar30;
  undefined8 uVar31;
  char cVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  undefined4 *puVar36;
  int *piVar37;
  undefined8 uVar38;
  long lVar39;
  uint uVar40;
  ushort uVar41;
  ulong uVar42;
  long lVar43;
  Callable *this_00;
  long *plVar44;
  int *piVar45;
  uint uVar46;
  uint uVar47;
  Callable *pCVar48;
  undefined8 *puVar49;
  ulong uVar50;
  uint uVar51;
  ulong uVar52;
  ulong uVar53;
  long *in_FS_OFFSET;
  bool bVar54;
  uint local_148;
  int local_144;
  int local_12c;
  char **local_118;
  long local_f0;
  char *local_e8;
  size_t local_e0;
  HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
  local_d8 [8];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  HashMap<Callable,int,HashMapHasherDefault,HashMapComparatorDefault<Callable>,DefaultTypedAllocator<HashMapElement<Callable,int>>>
  local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if (((CallQueue *)*in_FS_OFFSET != this) &&
     (iVar33 = pthread_mutex_lock((pthread_mutex_t *)(this + 8)), iVar33 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar33);
  }
  local_d0 = (undefined1  [16])0x0;
  local_b0 = _LC30;
  local_80 = _LC30;
  local_50 = _LC30;
  local_c0 = (undefined1  [16])0x0;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (*(int *)(this + 100) == 0) {
    __fprintf_chk(_stdout,2,"TOTAL PAGES: %d (%d bytes).\n",0,0);
    __fprintf_chk(_stdout,2,"NULL count: %d.\n",0);
  }
  else {
    local_12c = 0;
    uVar53 = 0;
    uVar50 = (ulong)*(uint *)(this + 0x50);
    do {
      uVar51 = (uint)uVar53;
      if ((uint)uVar50 <= uVar51) {
LAB_001013ab:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar53 & 0xffffffff,uVar50,
                   "p_index","count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar30 = (code *)invalidInstructionException();
        (*pcVar30)();
      }
      local_148 = 0;
      while (local_148 < *(uint *)(*(long *)(this + 0x58) + uVar53 * 4)) {
        uVar50 = (ulong)*(uint *)(this + 0x40);
        if (*(uint *)(this + 0x40) <= uVar51) goto LAB_001013ab;
        local_144 = 0x18;
        this_00 = (Callable *)((ulong)local_148 + *(long *)(*(long *)(this + 0x48) + uVar53 * 8));
        if ((*(ushort *)(this_00 + 0x10) & 0x1fff) != 1) {
          local_144 = (*(short *)(this_00 + 0x12) * 3 + 3) * 8;
        }
        lVar35 = Callable::get_object();
        uVar41 = *(ushort *)(this_00 + 0x10) & 0x1fff;
        if (uVar41 == 1) {
          if (lVar35 == 0) goto LAB_00101358;
          uVar40 = (uint)*(short *)(this_00 + 0x12);
          if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
            uVar52 = CONCAT44(0,*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4));
            uVar50 = *(ulong *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
            uVar34 = (uVar40 >> 0x10 ^ uVar40) * -0x7a143595;
            uVar34 = (uVar34 ^ uVar34 >> 0xd) * -0x3d4d51cb;
            uVar46 = uVar34 ^ uVar34 >> 0x10;
            if (uVar34 == uVar34 >> 0x10) {
              uVar46 = 1;
              uVar42 = uVar50;
            }
            else {
              uVar42 = uVar46 * uVar50;
            }
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar35 = SUB168(auVar10 * auVar22,8);
            uVar34 = *(uint *)(local_a0._8_8_ + lVar35 * 4);
            iVar33 = SUB164(auVar10 * auVar22,8);
            if (uVar34 != 0) {
              uVar47 = 0;
              do {
                if ((uVar34 == uVar46) &&
                   (uVar40 == *(uint *)(*(long *)(local_a0._0_8_ + lVar35 * 8) + 0x10)))
                goto LAB_00101698;
                uVar47 = uVar47 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (iVar33 + 1) * uVar50;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = uVar52;
                lVar35 = SUB168(auVar11 * auVar23,8);
                uVar34 = *(uint *)(local_a0._8_8_ + lVar35 * 4);
                iVar33 = SUB164(auVar11 * auVar23,8);
              } while ((uVar34 != 0) &&
                      (auVar12._8_8_ = 0, auVar12._0_8_ = uVar34 * uVar50, auVar24._8_8_ = 0,
                      auVar24._0_8_ = uVar52, auVar13._8_8_ = 0,
                      auVar13._0_8_ =
                           ((*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) +
                            iVar33) - SUB164(auVar12 * auVar24,8)) * uVar50, auVar25._8_8_ = 0,
                      auVar25._0_8_ = uVar52, uVar47 <= SUB164(auVar13 * auVar25,8)));
            }
          }
          local_e8 = (char *)CONCAT44(local_e8._4_4_,uVar40);
          puVar36 = (undefined4 *)
                    HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                    ::operator[](local_a8,(int *)&local_e8);
          *puVar36 = 0;
          uVar40 = (uint)*(short *)(this_00 + 0x12);
LAB_00101698:
          local_118 = &local_e8;
          local_e8 = (char *)CONCAT44(local_e8._4_4_,uVar40);
          piVar37 = (int *)HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
                           ::operator[](local_a8,(int *)local_118);
          *piVar37 = *piVar37 + 1;
        }
        else if (uVar41 == 2) {
          if (lVar35 == 0) goto LAB_00101358;
          Callable::get_method();
          uVar38 = local_d0._0_8_;
          if ((local_d0._0_8_ != 0) && (local_b0._4_4_ != 0)) {
            uVar40 = *(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4);
            lVar35 = *(long *)(hash_table_size_primes_inv + (local_b0 & 0xffffffff) * 8);
            if (local_e8 == (char *)0x0) {
              uVar34 = StringName::get_empty_hash();
            }
            else {
              uVar34 = *(uint *)(local_e8 + 0x20);
            }
            uVar50 = CONCAT44(0,uVar40);
            if (uVar34 == 0) {
              uVar34 = 1;
            }
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar34 * lVar35;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar50;
            lVar43 = SUB168(auVar6 * auVar18,8);
            uVar46 = *(uint *)(local_d0._8_8_ + lVar43 * 4);
            iVar33 = SUB164(auVar6 * auVar18,8);
            if (uVar46 != 0) {
              uVar47 = 0;
              do {
                if ((uVar46 == uVar34) &&
                   (*(char **)(*(long *)(uVar38 + lVar43 * 8) + 0x10) == local_e8))
                goto LAB_0010182a;
                uVar47 = uVar47 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)(iVar33 + 1) * lVar35;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar50;
                lVar43 = SUB168(auVar7 * auVar19,8);
                uVar46 = *(uint *)(local_d0._8_8_ + lVar43 * 4);
                iVar33 = SUB164(auVar7 * auVar19,8);
              } while ((uVar46 != 0) &&
                      (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar46 * lVar35, auVar20._8_8_ = 0,
                      auVar20._0_8_ = uVar50, auVar9._8_8_ = 0,
                      auVar9._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar8 * auVar20,8)) *
                                     lVar35, auVar21._8_8_ = 0, auVar21._0_8_ = uVar50,
                      uVar47 <= SUB164(auVar9 * auVar21,8)));
            }
          }
          puVar36 = (undefined4 *)
                    HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::operator[](local_d8,(StringName *)&local_e8);
          *puVar36 = 0;
LAB_0010182a:
          piVar37 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                           ::operator[](local_d8,(StringName *)&local_e8);
          *piVar37 = *piVar37 + 1;
          if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
            StringName::unref();
          }
        }
        else if ((uVar41 == 0) && ((lVar35 != 0 || ((*(ushort *)(this_00 + 0x10) & 0x2000) != 0))))
        {
          if ((local_70._0_8_ != 0) && (local_50._4_4_ != 0)) {
            uVar40 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
            lVar35 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
            Callable::operator_cast_to_String((Callable *)&local_e8);
            uVar34 = String::hash();
            pcVar3 = local_e8;
            if (local_e8 != (char *)0x0) {
              LOCK();
              plVar44 = (long *)(local_e8 + -0x10);
              *plVar44 = *plVar44 + -1;
              UNLOCK();
              if (*plVar44 == 0) {
                local_e8 = (char *)0x0;
                Memory::free_static(pcVar3 + -0x10,false);
              }
            }
            uVar50 = CONCAT44(0,uVar40);
            uVar38 = local_70._8_8_;
            uVar46 = 1;
            if (uVar34 != 0) {
              uVar46 = uVar34;
            }
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar46 * lVar35;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar50;
            lVar43 = SUB168(auVar14 * auVar26,8);
            uVar34 = *(uint *)(local_70._8_8_ + lVar43 * 4);
            iVar33 = SUB164(auVar14 * auVar26,8);
            if (uVar34 != 0) {
              uVar47 = 0;
              do {
                if (uVar34 == uVar46) {
                  cVar32 = Callable::operator==
                                     ((Callable *)(*(long *)(local_70._0_8_ + lVar43 * 8) + 0x10),
                                      this_00);
                  if (cVar32 != '\0') goto LAB_00101338;
                }
                uVar47 = uVar47 + 1;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar35;
                auVar27._8_8_ = 0;
                auVar27._0_8_ = uVar50;
                lVar43 = SUB168(auVar15 * auVar27,8);
                uVar34 = *(uint *)(uVar38 + lVar43 * 4);
                iVar33 = SUB164(auVar15 * auVar27,8);
              } while ((uVar34 != 0) &&
                      (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar34 * lVar35, auVar28._8_8_ = 0,
                      auVar28._0_8_ = uVar50, auVar17._8_8_ = 0,
                      auVar17._0_8_ =
                           (ulong)((uVar40 + iVar33) - SUB164(auVar16 * auVar28,8)) * lVar35,
                      auVar29._8_8_ = 0, auVar29._0_8_ = uVar50,
                      uVar47 <= SUB164(auVar17 * auVar29,8)));
            }
          }
          puVar36 = (undefined4 *)
                    HashMap<Callable,int,HashMapHasherDefault,HashMapComparatorDefault<Callable>,DefaultTypedAllocator<HashMapElement<Callable,int>>>
                    ::operator[](local_78,this_00);
          *puVar36 = 0;
LAB_00101338:
          piVar37 = (int *)HashMap<Callable,int,HashMapHasherDefault,HashMapComparatorDefault<Callable>,DefaultTypedAllocator<HashMapElement<Callable,int>>>
                           ::operator[](local_78,this_00);
          *piVar37 = *piVar37 + 1;
        }
        else {
LAB_00101358:
          fwrite("Object was deleted while awaiting a callback.\n",1,0x2e,_stdout);
          local_12c = local_12c + 1;
        }
        local_148 = local_148 + local_144;
        if (((*(ushort *)(this_00 + 0x10) & 0x1fff) != 1) && (0 < *(short *)(this_00 + 0x12))) {
          iVar33 = 0;
          pCVar48 = this_00;
          do {
            pCVar48 = pCVar48 + 0x18;
            iVar33 = iVar33 + 1;
            if (Variant::needs_deinit[*(int *)pCVar48] != '\0') {
              Variant::_clear_internal();
            }
          } while (iVar33 < *(short *)(this_00 + 0x12));
        }
        Callable::~Callable(this_00);
        uVar50 = (ulong)*(uint *)(this + 0x50);
        if (*(uint *)(this + 0x50) <= uVar51) goto LAB_001013ab;
      }
      uVar51 = *(uint *)(this + 100);
      uVar53 = uVar53 + 1;
    } while ((uint)uVar53 < uVar51);
    plVar44 = (long *)local_c0._0_8_;
    __fprintf_chk(_stdout,2,"TOTAL PAGES: %d (%d bytes).\n",uVar51,uVar51 << 0xc);
    __fprintf_chk(_stdout,2,"NULL count: %d.\n",local_12c);
    if (plVar44 != (long *)0x0) {
      do {
        lVar35 = plVar44[2];
        lVar43 = plVar44[3];
        if (lVar35 == 0) {
          local_f0 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar35 + 8);
          local_f0 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar35 + 0x10) + -0x10);
            if (*(long *)(lVar35 + 0x10) != 0) {
              do {
                lVar4 = *plVar1;
                if (lVar4 == 0) goto LAB_0010199b;
                LOCK();
                lVar39 = *plVar1;
                bVar54 = lVar4 == lVar39;
                if (bVar54) {
                  *plVar1 = lVar4 + 1;
                  lVar39 = lVar4;
                }
                UNLOCK();
              } while (!bVar54);
              if (lVar39 != -1) {
                local_f0 = *(long *)(lVar35 + 0x10);
              }
            }
          }
          else {
            local_e0 = strlen(pcVar3);
            local_e8 = pcVar3;
            String::parse_latin1((StrRange *)&local_f0);
          }
        }
LAB_0010199b:
        String::utf8();
        uVar38 = CharString::get_data();
        __fprintf_chk(_stdout,2,"SET %s: %d.\n",uVar38,(int)lVar43);
        pcVar3 = local_e8;
        if (local_e8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_e8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_e8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar35 = local_f0;
        if (local_f0 != 0) {
          LOCK();
          plVar1 = (long *)(local_f0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_f0 = 0;
            Memory::free_static((void *)(lVar35 + -0x10),false);
          }
        }
        plVar44 = (long *)*plVar44;
      } while (plVar44 != (long *)0x0);
    }
  }
  for (puVar49 = (undefined8 *)local_60._0_8_; puVar49 != (undefined8 *)0x0;
      puVar49 = (undefined8 *)*puVar49) {
    uVar2 = *(undefined4 *)(puVar49 + 4);
    Callable::operator_cast_to_String((Callable *)&local_f0);
    String::utf8();
    uVar38 = CharString::get_data();
    __fprintf_chk(_stdout,2,"CALL %s: %d.\n",uVar38,uVar2);
    pcVar3 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar44 = (long *)(local_e8 + -0x10);
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (*plVar44 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar35 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar44 = (long *)(local_f0 + -0x10);
      *plVar44 = *plVar44 + -1;
      UNLOCK();
      if (*plVar44 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar35 + -0x10),false);
      }
    }
  }
  for (puVar49 = (undefined8 *)local_90._0_8_; puVar49 != (undefined8 *)0x0;
      puVar49 = (undefined8 *)*puVar49) {
    __fprintf_chk(_stdout,2,"NOTIFY %d: %d.\n",*(undefined4 *)(puVar49 + 2),
                  *(undefined4 *)((long)puVar49 + 0x14));
  }
  if ((CallQueue *)*in_FS_OFFSET != this) {
    pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  }
  uVar38 = local_70._0_8_;
  if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
    uVar31 = local_70._8_8_;
    if ((local_50._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
      piVar37 = (int *)(local_70._8_8_ +
                       (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
      piVar45 = (int *)local_70._8_8_;
      puVar49 = (undefined8 *)local_70._0_8_;
      do {
        if (*piVar45 != 0) {
          pvVar5 = (void *)*puVar49;
          *piVar45 = 0;
          Callable::~Callable((Callable *)((long)pvVar5 + 0x10));
          Memory::free_static(pvVar5,false);
          *puVar49 = 0;
        }
        piVar45 = piVar45 + 1;
        puVar49 = puVar49 + 1;
      } while (piVar45 != piVar37);
    }
    Memory::free_static((void *)uVar38,false);
    Memory::free_static((void *)uVar31,false);
  }
  uVar38 = local_a0._0_8_;
  if ((undefined8 *)local_a0._0_8_ != (undefined8 *)0x0) {
    uVar31 = local_a0._8_8_;
    if ((local_80._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) != 0)) {
      piVar37 = (int *)(local_a0._8_8_ +
                       (ulong)*(uint *)(hash_table_size_primes + (local_80 & 0xffffffff) * 4) * 4);
      piVar45 = (int *)local_a0._8_8_;
      puVar49 = (undefined8 *)local_a0._0_8_;
      do {
        if (*piVar45 != 0) {
          *piVar45 = 0;
          Memory::free_static((void *)*puVar49,false);
          *puVar49 = 0;
        }
        piVar45 = piVar45 + 1;
        puVar49 = puVar49 + 1;
      } while (piVar37 != piVar45);
    }
    Memory::free_static((void *)uVar38,false);
    Memory::free_static((void *)uVar31,false);
  }
  uVar38 = local_d0._0_8_;
  if ((undefined8 *)local_d0._0_8_ == (undefined8 *)0x0) {
    if (local_40 == in_FS_OFFSET[5]) {
      return;
    }
  }
  else {
    uVar31 = local_d0._8_8_;
    if ((local_b0._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) != 0)) {
      piVar37 = (int *)(local_d0._8_8_ +
                       (ulong)*(uint *)(hash_table_size_primes + (local_b0 & 0xffffffff) * 4) * 4);
      piVar45 = (int *)local_d0._8_8_;
      puVar49 = (undefined8 *)local_d0._0_8_;
      do {
        if (*piVar45 != 0) {
          bVar54 = StringName::configured != '\0';
          pvVar5 = (void *)*puVar49;
          *piVar45 = 0;
          if ((bVar54) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          *puVar49 = 0;
        }
        piVar45 = piVar45 + 1;
        puVar49 = puVar49 + 1;
      } while (piVar45 != piVar37);
    }
    Memory::free_static((void *)uVar38,false);
    if (local_40 == in_FS_OFFSET[5]) {
      Memory::free_static((void *)uVar31,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallQueue::push_callablep(Callable const&, Variant const**, int, bool) */

undefined8 __thiscall
CallQueue::push_callablep
          (CallQueue *this,Callable *param_1,Variant **param_2,int param_3,bool param_4)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  Page *pPVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  void *pvVar15;
  Callable *this_00;
  Variant *this_01;
  Variant **ppVVar16;
  Variant **ppVVar17;
  ulong uVar18;
  uint uVar19;
  long *in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  uVar19 = (param_3 * 3 + 3) * 8;
  local_40 = in_FS_OFFSET[5];
  if (0x1000 < uVar19) {
    local_60 = 0;
    local_50 = 0x29;
    local_58 = " bytes), consider passing less arguments.";
    String::parse_latin1((StrRange *)&local_60);
    itos((long)&local_70);
    operator+((char *)&local_68,(String *)"Message is too large to fit on a page (");
    String::operator+((String *)&local_58,(String *)&local_68);
    _err_print_error("push_callablep","core/object/message_queue.cpp",0x59,
                     "Condition \"room_needed > uint32_t(PAGE_SIZE_BYTES)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,(String *)&local_58,0,0);
    pcVar6 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
    lVar10 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    lVar10 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
    }
    uVar12 = 0x1f;
    goto LAB_00101f79;
  }
  if (((CallQueue *)*in_FS_OFFSET != this) &&
     (iVar8 = pthread_mutex_lock((pthread_mutex_t *)(this + 8)), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  if (*(int *)(this + 0x40) == 0) {
    pPVar11 = PagedAllocator<CallQueue::Page,true,4096u>::alloc<>
                        (*(PagedAllocator<CallQueue::Page,true,4096u> **)(this + 0x30));
    uVar9 = *(uint *)(this + 0x40);
    if (uVar9 == *(uint *)(this + 0x44)) {
      uVar14 = (ulong)(uVar9 * 2);
      if (uVar9 * 2 == 0) {
        uVar14 = 1;
      }
      *(int *)(this + 0x44) = (int)uVar14;
      lVar10 = Memory::realloc_static(*(void **)(this + 0x48),uVar14 * 8,false);
      *(long *)(this + 0x48) = lVar10;
      if (lVar10 == 0) goto LAB_001023d8;
      uVar9 = *(uint *)(this + 0x40);
    }
    else {
      lVar10 = *(long *)(this + 0x48);
    }
    pvVar15 = *(void **)(this + 0x58);
    *(uint *)(this + 0x40) = uVar9 + 1;
    *(Page **)(lVar10 + (ulong)uVar9 * 8) = pPVar11;
    uVar9 = *(uint *)(this + 0x50);
    if (uVar9 == *(uint *)(this + 0x54)) {
      uVar14 = (ulong)(uVar9 * 2);
      if (uVar9 * 2 == 0) {
        uVar14 = 1;
      }
      *(int *)(this + 0x54) = (int)uVar14;
      pvVar15 = (void *)Memory::realloc_static(pvVar15,uVar14 * 4,false);
      *(void **)(this + 0x58) = pvVar15;
      if (pvVar15 == (void *)0x0) {
LAB_001023d8:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar9 = *(uint *)(this + 0x50);
    }
    *(uint *)(this + 0x50) = uVar9 + 1;
    iVar8 = 1;
    *(undefined4 *)((long)pvVar15 + (ulong)uVar9 * 4) = 0;
    *(undefined4 *)(this + 100) = 1;
    uVar9 = 0;
  }
  else {
    iVar8 = *(int *)(this + 100);
    uVar9 = iVar8 - 1;
  }
  uVar14 = (ulong)uVar9;
  uVar18 = (ulong)*(uint *)(this + 0x50);
  if (*(uint *)(this + 0x50) <= uVar9) goto LAB_0010200d;
  uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar14 * 4);
  if (uVar3 + uVar19 < 0x1001) {
    uVar4 = *(uint *)(this + 0x40);
    if (uVar4 <= uVar9) {
LAB_001021b8:
      uVar18 = (ulong)uVar4;
      goto LAB_0010200d;
    }
    lVar10 = *(long *)(*(long *)(this + 0x48) + uVar14 * 8);
  }
  else {
    if (*(int *)(this + 0x60) == iVar8) {
      String::utf8();
      uVar12 = CharString::get_data();
      Callable::operator_cast_to_String((Callable *)&local_68);
      String::utf8();
      uVar13 = CharString::get_data();
      __fprintf_chk(_stderr,2,"Failed method: %s. Message queue out of memory. %s\n",uVar13,uVar12);
      lVar10 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      lVar10 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
      pcVar6 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      statistics(this);
      if ((CallQueue *)*in_FS_OFFSET != this) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
      }
      uVar12 = 6;
      goto LAB_00101f79;
    }
    _add_page(this);
    uVar4 = *(uint *)(this + 0x40);
    uVar9 = *(int *)(this + 100) - 1;
    uVar14 = (ulong)uVar9;
    if (uVar4 <= uVar9) {
      uVar14 = (ulong)uVar9;
      goto LAB_001021b8;
    }
    uVar18 = (ulong)*(uint *)(this + 0x50);
    lVar10 = *(long *)(*(long *)(this + 0x48) + uVar14 * 8);
    if (*(uint *)(this + 0x50) <= uVar9) goto LAB_0010200d;
    uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar14 * 4);
  }
  this_00 = (Callable *)(lVar10 + (ulong)uVar3);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  *(short *)(this_00 + 0x12) = (short)param_3;
  Callable::operator=(this_00,param_1);
  *(ushort *)(this_00 + 0x10) = (ushort)param_4 << 0xe;
  lVar10 = Callable::get_object_id();
  if ((lVar10 == 0) && (cVar7 = Callable::is_valid(), cVar7 != '\0')) {
    *(ushort *)(this_00 + 0x10) = *(ushort *)(this_00 + 0x10) | 0x2000;
  }
  ppVVar16 = param_2;
  if (0 < param_3) {
    do {
      this_01 = (Variant *)(this_00 + 0x18);
      *(undefined4 *)this_01 = 0;
      ppVVar17 = ppVVar16 + 1;
      *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
      Variant::operator=(this_01,*ppVVar16);
      ppVVar16 = ppVVar17;
      this_00 = (Callable *)this_01;
    } while (ppVVar17 != param_2 + param_3);
  }
  uVar18 = (ulong)*(uint *)(this + 0x50);
  uVar9 = *(int *)(this + 100) - 1;
  if (uVar9 < *(uint *)(this + 0x50)) {
    piVar2 = (int *)(*(long *)(this + 0x58) + (ulong)uVar9 * 4);
    *piVar2 = *piVar2 + uVar19;
    if ((CallQueue *)*in_FS_OFFSET != this) {
      pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
    }
    uVar12 = 0;
LAB_00101f79:
    if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar12;
  }
  uVar14 = (ulong)uVar9;
LAB_0010200d:
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,uVar18,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* CallQueue::push_callp(ObjectID, StringName const&, Variant const**, int, bool) */

undefined4 __thiscall
CallQueue::push_callp
          (CallQueue *this,undefined8 param_2,undefined8 param_3,Variant **param_4,int param_5,
          bool param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Callable::Callable(aCStack_48);
  uVar1 = push_callablep(this,aCStack_48,param_4,param_5,param_6);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallQueue::push_callp(Object*, StringName const&, Variant const**, int, bool) */

undefined4 __thiscall
CallQueue::push_callp
          (CallQueue *this,Object *param_1,StringName *param_2,Variant **param_3,int param_4,
          bool param_5)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Callable::Callable(aCStack_48,*(undefined8 *)(param_1 + 0x60));
  uVar1 = push_callablep(this,aCStack_48,param_3,param_4,param_5);
  Callable::~Callable(aCStack_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102b2a) */
/* WARNING: Removing unreachable block (ram,0x00102b36) */
/* WARNING: Removing unreachable block (ram,0x001027ed) */
/* WARNING: Removing unreachable block (ram,0x001027f5) */
/* WARNING: Removing unreachable block (ram,0x0010280c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallQueue::push_set(ObjectID, StringName const&, Variant const&) */

undefined8 __thiscall
CallQueue::push_set(CallQueue *this,ulong param_2,long *param_3,Variant *param_4)

{
  long *plVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Page *pPVar13;
  long lVar14;
  long lVar15;
  void *pvVar16;
  Callable *this_00;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  long *in_FS_OFFSET;
  bool bVar20;
  char *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = in_FS_OFFSET[5];
  if (((CallQueue *)*in_FS_OFFSET != this) &&
     (iVar7 = pthread_mutex_lock((pthread_mutex_t *)(this + 8)), iVar7 != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  if (*(int *)(this + 0x40) == 0) {
    pPVar13 = PagedAllocator<CallQueue::Page,true,4096u>::alloc<>
                        (*(PagedAllocator<CallQueue::Page,true,4096u> **)(this + 0x30));
    uVar8 = *(uint *)(this + 0x40);
    if (uVar8 == *(uint *)(this + 0x44)) {
      uVar17 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar17 = 1;
      }
      *(int *)(this + 0x44) = (int)uVar17;
      lVar15 = Memory::realloc_static(*(void **)(this + 0x48),uVar17 * 8,false);
      *(long *)(this + 0x48) = lVar15;
      if (lVar15 == 0) goto LAB_00102c03;
      uVar8 = *(uint *)(this + 0x40);
    }
    else {
      lVar15 = *(long *)(this + 0x48);
    }
    pvVar16 = *(void **)(this + 0x58);
    *(uint *)(this + 0x40) = uVar8 + 1;
    *(Page **)(lVar15 + (ulong)uVar8 * 8) = pPVar13;
    uVar8 = *(uint *)(this + 0x50);
    if (uVar8 == *(uint *)(this + 0x54)) {
      uVar17 = (ulong)(uVar8 * 2);
      if (uVar8 * 2 == 0) {
        uVar17 = 1;
      }
      *(int *)(this + 0x54) = (int)uVar17;
      pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar17 * 4,false);
      *(void **)(this + 0x58) = pvVar16;
      if (pvVar16 == (void *)0x0) {
LAB_00102c03:
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      uVar8 = *(uint *)(this + 0x50);
    }
    *(uint *)(this + 0x50) = uVar8 + 1;
    iVar7 = 1;
    *(undefined4 *)((long)pvVar16 + (ulong)uVar8 * 4) = 0;
    *(undefined4 *)(this + 100) = 1;
    uVar8 = 0;
  }
  else {
    iVar7 = *(int *)(this + 100);
    uVar8 = iVar7 - 1;
  }
  uVar19 = (ulong)*(uint *)(this + 0x50);
  uVar17 = (ulong)uVar8;
  if (*(uint *)(this + 0x50) <= uVar8) goto LAB_001026af;
  uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar17 * 4);
  if (uVar3 + 0x30 < 0x1001) {
    uVar19 = (ulong)*(uint *)(this + 0x40);
    if (*(uint *)(this + 0x40) <= uVar8) goto LAB_001026af;
    lVar15 = *(long *)(*(long *)(this + 0x48) + uVar17 * 8);
  }
  else {
    if (*(int *)(this + 0x60) == iVar7) {
      local_88 = (char *)0x0;
      uVar8 = (uint)param_2 & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
        while( true ) {
          uVar17 = (ulong)local_58 >> 8;
          local_58 = (char *)(uVar17 << 8);
          LOCK();
          bVar20 = (char)ObjectDB::spin_lock == '\0';
          if (bVar20) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar20) break;
          local_58 = (char *)(uVar17 << 8);
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar18 = (ulong *)(ObjectDB::object_slots + (ulong)uVar8 * 0x10);
        uVar17 = param_2 >> 0x18 & 0x7fffffffff;
        if (uVar17 == (*puVar18 & 0x7fffffffff)) {
          ObjectDB::spin_lock._0_1_ = '\0';
          if (puVar18[1] != 0) {
            if ((uint)ObjectDB::slot_max <= uVar8) {
              _err_print_error("get_instance","./core/object/object.h",0x418,
                               "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010511f:
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            while( true ) {
              uVar19 = (ulong)local_58 >> 8;
              local_58 = (char *)(uVar19 << 8);
              LOCK();
              bVar20 = (char)ObjectDB::spin_lock == '\0';
              if (bVar20) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar20) break;
              local_58 = (char *)(uVar19 << 8);
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar18 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
            if (uVar17 != (*puVar18 & 0x7fffffffff)) {
              ObjectDB::spin_lock._0_1_ = '\0';
              goto LAB_0010511f;
            }
            ObjectDB::spin_lock._0_1_ = '\0';
            (**(code **)(*(long *)puVar18[1] + 0x48))(&local_58);
            if (local_58 != (char *)0x0) {
              local_88 = local_58;
            }
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
      String::utf8();
      uVar9 = CharString::get_data();
      itos((long)&local_70);
      String::utf8();
      uVar10 = CharString::get_data();
      lVar15 = *param_3;
      if (lVar15 == 0) {
LAB_00102b5d:
        local_78 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar15 + 8);
        local_78 = 0;
        if (pcVar4 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar15 + 0x10) + -0x10);
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_00102b5d;
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00102b5d;
            LOCK();
            lVar14 = *plVar1;
            bVar20 = lVar5 == lVar14;
            if (bVar20) {
              *plVar1 = lVar5 + 1;
              lVar14 = lVar5;
            }
            UNLOCK();
          } while (!bVar20);
          if (lVar14 != -1) {
            local_78 = *(long *)(lVar15 + 0x10);
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_78);
        }
      }
      String::utf8();
      uVar11 = CharString::get_data();
      String::utf8();
      uVar12 = CharString::get_data();
      __fprintf_chk(_stderr,2,"Failed set: %s: %s target ID: %s. Message queue out of memory. %s\n",
                    uVar12,uVar11,uVar10,uVar9);
      if (local_80 != 0) {
        LOCK();
        plVar1 = (long *)(local_80 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
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
      lVar15 = local_78;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_78 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      lVar15 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      lVar15 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      lVar15 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
      statistics(this);
      if ((CallQueue *)*in_FS_OFFSET != this) {
        pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
      }
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static(local_88 + -0x10,false);
        }
      }
      uVar9 = 6;
      goto LAB_0010264c;
    }
    _add_page(this);
    uVar19 = (ulong)*(uint *)(this + 0x40);
    uVar8 = *(int *)(this + 100) - 1;
    uVar17 = (ulong)uVar8;
    if (*(uint *)(this + 0x40) <= uVar8) goto LAB_001026af;
    uVar19 = (ulong)*(uint *)(this + 0x50);
    lVar15 = *(long *)(*(long *)(this + 0x48) + uVar17 * 8);
    if (*(uint *)(this + 0x50) <= uVar8) goto LAB_001026af;
    uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar17 * 4);
  }
  this_00 = (Callable *)(lVar15 + (ulong)uVar3);
  *(undefined2 *)(this_00 + 0x12) = 1;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this_00 + 8) = 0;
  Callable::Callable((Callable *)&local_58,param_2,param_3);
  Callable::operator=(this_00,(Callable *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(undefined2 *)(this_00 + 0x10) = 2;
  *(undefined1 (*) [16])(this_00 + 0x20) = (undefined1  [16])0x0;
  Variant::operator=((Variant *)(this_00 + 0x18),param_4);
  uVar19 = (ulong)*(uint *)(this + 0x50);
  uVar8 = *(int *)(this + 100) - 1;
  if (*(uint *)(this + 0x50) <= uVar8) {
    uVar17 = (ulong)uVar8;
LAB_001026af:
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,uVar17,uVar19,"p_index","count",
               "",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  piVar2 = (int *)(*(long *)(this + 0x58) + (ulong)uVar8 * 4);
  *piVar2 = *piVar2 + 0x30;
  if ((CallQueue *)*in_FS_OFFSET != this) {
    pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  }
  uVar9 = 0;
LAB_0010264c:
  if (local_40 != in_FS_OFFSET[5]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* CallQueue::push_set(Object*, StringName const&, Variant const&) */

void CallQueue::push_set(Object *param_1,StringName *param_2,Variant *param_3)

{
  push_set((CallQueue *)param_1,*(undefined8 *)(param_2 + 0x60));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CallQueue::push_notification(ObjectID, int) */

undefined8 __thiscall CallQueue::push_notification(CallQueue *this,undefined8 param_2,int param_3)

{
  long *plVar1;
  Callable *this_00;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  Page *pPVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long *in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = in_FS_OFFSET[5];
  if (param_3 < 0) {
    _err_print_error("push_notification","core/object/message_queue.cpp",0xb1,
                     "Condition \"p_notification < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,
                     0);
    uVar7 = 0x1f;
  }
  else {
    if ((CallQueue *)*in_FS_OFFSET != this) {
      iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 8));
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar5);
      }
    }
    if (*(int *)(this + 0x40) == 0) {
      pPVar6 = PagedAllocator<CallQueue::Page,true,4096u>::alloc<>
                         (*(PagedAllocator<CallQueue::Page,true,4096u> **)(this + 0x30));
      uVar12 = *(uint *)(this + 0x40);
      if (uVar12 == *(uint *)(this + 0x44)) {
        uVar11 = (ulong)(uVar12 * 2);
        if (uVar12 * 2 == 0) {
          uVar11 = 1;
        }
        *(int *)(this + 0x44) = (int)uVar11;
        lVar9 = Memory::realloc_static(*(void **)(this + 0x48),uVar11 * 8,false);
        *(long *)(this + 0x48) = lVar9;
        if (lVar9 == 0) goto LAB_00103023;
        uVar12 = *(uint *)(this + 0x40);
      }
      else {
        lVar9 = *(long *)(this + 0x48);
      }
      pvVar10 = *(void **)(this + 0x58);
      *(uint *)(this + 0x40) = uVar12 + 1;
      *(Page **)(lVar9 + (ulong)uVar12 * 8) = pPVar6;
      uVar12 = *(uint *)(this + 0x50);
      if (uVar12 == *(uint *)(this + 0x54)) {
        uVar11 = (ulong)(uVar12 * 2);
        if (uVar12 * 2 == 0) {
          uVar11 = 1;
        }
        *(int *)(this + 0x54) = (int)uVar11;
        pvVar10 = (void *)Memory::realloc_static(pvVar10,uVar11 * 4,false);
        *(void **)(this + 0x58) = pvVar10;
        if (pvVar10 == (void *)0x0) {
LAB_00103023:
          _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar12 = *(uint *)(this + 0x50);
      }
      *(uint *)(this + 0x50) = uVar12 + 1;
      iVar5 = 1;
      *(undefined4 *)((long)pvVar10 + (ulong)uVar12 * 4) = 0;
      *(undefined4 *)(this + 100) = 1;
      uVar12 = 0;
    }
    else {
      iVar5 = *(int *)(this + 100);
      uVar12 = iVar5 - 1;
    }
    uVar13 = (ulong)*(uint *)(this + 0x50);
    uVar11 = (ulong)uVar12;
    if (*(uint *)(this + 0x50) <= uVar12) goto LAB_00102de0;
    uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar11 * 4);
    if (uVar3 + 0x18 < 0x1001) {
      uVar13 = (ulong)*(uint *)(this + 0x40);
      if (*(uint *)(this + 0x40) <= uVar12) goto LAB_00102de0;
      lVar9 = *(long *)(*(long *)(this + 0x48) + uVar11 * 8);
    }
    else {
      if (*(int *)(this + 0x60) == iVar5) {
        String::utf8();
        uVar7 = CharString::get_data();
        itos((long)&local_58);
        String::utf8();
        uVar8 = CharString::get_data();
        __fprintf_chk(_stderr,2,
                      "Failed notification: %d target ID: %s. Message queue out of memory. %s\n",
                      param_3,uVar8,uVar7);
        lVar9 = local_50;
        if (local_50 != 0) {
          LOCK();
          plVar1 = (long *)(local_50 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_58;
        if (local_58 != 0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        lVar9 = local_48[0];
        if (local_48[0] != 0) {
          LOCK();
          plVar1 = (long *)(local_48[0] + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48[0] = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        statistics(this);
        if ((CallQueue *)*in_FS_OFFSET != this) {
          pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
        }
        uVar7 = 6;
        goto LAB_00102d7c;
      }
      _add_page(this);
      uVar13 = (ulong)*(uint *)(this + 0x40);
      uVar12 = *(int *)(this + 100) - 1;
      uVar11 = (ulong)uVar12;
      if (*(uint *)(this + 0x40) <= uVar12) goto LAB_00102de0;
      uVar13 = (ulong)*(uint *)(this + 0x50);
      lVar9 = *(long *)(*(long *)(this + 0x48) + uVar11 * 8);
      if (*(uint *)(this + 0x50) <= uVar12) goto LAB_00102de0;
      uVar3 = *(uint *)(*(long *)(this + 0x58) + uVar11 * 4);
    }
    this_00 = (Callable *)(lVar9 + (ulong)uVar3);
    *(undefined2 *)(this_00 + 0x10) = 1;
    lVar9 = CoreStringNames::singleton;
    *(undefined8 *)this_00 = 0;
    *(undefined8 *)(this_00 + 8) = 0;
    Callable::Callable((Callable *)local_48,param_2,lVar9 + 0x118);
    Callable::operator=(this_00,(Callable *)local_48);
    Callable::~Callable((Callable *)local_48);
    iVar5 = *(int *)(this + 100);
    uVar12 = *(uint *)(this + 0x50);
    uVar13 = (ulong)uVar12;
    *(short *)(this_00 + 0x12) = (short)param_3;
    uVar11 = (ulong)(iVar5 - 1U);
    if (uVar12 <= iVar5 - 1U) {
LAB_00102de0:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,uVar13,"p_index","count"
                 ,"",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    piVar2 = (int *)(*(long *)(this + 0x58) + uVar11 * 4);
    *piVar2 = *piVar2 + 0x18;
    if ((CallQueue *)*in_FS_OFFSET != this) {
      pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
    }
    uVar7 = 0;
  }
LAB_00102d7c:
  if (local_30 == in_FS_OFFSET[5]) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallQueue::push_notification(Object*, int) */

void CallQueue::push_notification(Object *param_1,int param_2)

{
  undefined4 in_register_00000034;
  
  push_notification((CallQueue *)param_1,
                    *(undefined8 *)(CONCAT44(in_register_00000034,param_2) + 0x60));
  return;
}



/* CallQueue::~CallQueue() */

void __thiscall CallQueue::~CallQueue(CallQueue *this)

{
  char *pcVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  PagedAllocator<CallQueue::Page,true,4096u> *this_00;
  long lVar8;
  long in_FS_OFFSET;
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__CallQueue_001053f8;
  clear(this);
  if (*(int *)(this + 0x40) != 0) {
    lVar8 = 0;
    do {
      lVar6 = *(long *)(this + 0x30);
      uVar7 = *(undefined8 *)(*(long *)(this + 0x48) + lVar8 * 8);
      pcVar1 = (char *)(lVar6 + 0x24);
      while( true ) {
        LOCK();
        cVar3 = *pcVar1;
        if (cVar3 == '\0') {
          *pcVar1 = '\x01';
        }
        UNLOCK();
        if (cVar3 == '\0') break;
        do {
        } while (*pcVar1 != '\0');
      }
      uVar4 = *(uint *)(lVar6 + 0x14);
      lVar8 = lVar8 + 1;
      *(undefined8 *)
       (*(long *)(*(long *)(lVar6 + 8) +
                 (ulong)(uVar4 >> ((byte)*(undefined4 *)(lVar6 + 0x18) & 0x1f)) * 8) +
       (ulong)(uVar4 & *(uint *)(lVar6 + 0x1c)) * 8) = uVar7;
      *(uint *)(lVar6 + 0x14) = uVar4 + 1;
      *(undefined1 *)(lVar6 + 0x24) = 0;
    } while ((uint)lVar8 < *(uint *)(this + 0x40));
  }
  if (this[0x38] == (CallQueue)0x0) {
    this_00 = *(PagedAllocator<CallQueue::Page,true,4096u> **)(this + 0x30);
    PagedAllocator<CallQueue::Page,true,4096u>::~PagedAllocator(this_00);
    Memory::free_static(this_00,false);
  }
  if (*(long *)(this + 0x70) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)(this + 0x70) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar8 = *(long *)(this + 0x70);
      *(undefined8 *)(this + 0x70) = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    if (*(int *)(this + 0x50) != 0) {
      *(undefined4 *)(this + 0x50) = 0;
    }
    Memory::free_static(*(void **)(this + 0x58),false);
  }
  if (*(void **)(this + 0x48) == (void *)0x0) {
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (*(int *)(this + 0x40) != 0) {
      *(undefined4 *)(this + 0x40) = 0;
    }
    if (lVar5 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(*(void **)(this + 0x48),false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallQueue::~CallQueue() */

void __thiscall CallQueue::~CallQueue(CallQueue *this)

{
  ~CallQueue(this);
  operator_delete(this,0x78);
  return;
}



/* MessageQueue::~MessageQueue() */

void __thiscall MessageQueue::~MessageQueue(MessageQueue *this)

{
  *(undefined ***)this = &PTR__MessageQueue_00105418;
  main_singleton = 0;
  CallQueue::~CallQueue((CallQueue *)this);
  return;
}



/* MessageQueue::~MessageQueue() */

void __thiscall MessageQueue::~MessageQueue(MessageQueue *this)

{
  *(undefined ***)this = &PTR__MessageQueue_00105418;
  main_singleton = 0;
  CallQueue::~CallQueue((CallQueue *)this);
  operator_delete(this,0x78);
  return;
}



/* CallQueue::Page* PagedAllocator<CallQueue::Page, true, 4096u>::alloc<>() */

Page * __thiscall
PagedAllocator<CallQueue::Page,true,4096u>::alloc<>
          (PagedAllocator<CallQueue::Page,true,4096u> *this)

{
  PagedAllocator<CallQueue::Page,true,4096u> *pPVar1;
  PagedAllocator<CallQueue::Page,true,4096u> PVar2;
  long lVar3;
  Page *pPVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  byte bVar14;
  
  bVar14 = 0;
  pPVar1 = this + 0x24;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    LOCK();
    PVar2 = *pPVar1;
    if (PVar2 == (PagedAllocator<CallQueue::Page,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<CallQueue::Page,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar2 == (PagedAllocator<CallQueue::Page,true,4096u>)0x0) break;
    do {
    } while (*pPVar1 != (PagedAllocator<CallQueue::Page,true,4096u>)0x0);
  }
  iVar8 = *(int *)(this + 0x14);
  if (iVar8 == 0) {
    uVar7 = *(uint *)(this + 0x10) + 1;
    lVar11 = (ulong)*(uint *)(this + 0x10) * 8;
    *(uint *)(this + 0x10) = uVar7;
    uVar9 = Memory::realloc_static(*(void **)this,(ulong)uVar7 * 8,false);
    *(undefined8 *)this = uVar9;
    uVar9 = Memory::realloc_static(*(void **)(this + 8),(ulong)*(uint *)(this + 0x10) << 3,false);
    lVar5 = *(long *)this;
    *(undefined8 *)(this + 8) = uVar9;
    uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x20) << 0xc,false);
    uVar7 = *(uint *)(this + 0x20);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    lVar5 = *(long *)(this + 8);
    uVar9 = Memory::alloc_static((ulong)uVar7 << 3,false);
    *(undefined8 *)(lVar5 + lVar11) = uVar9;
    uVar7 = *(uint *)(this + 0x20);
    if (uVar7 == 0) {
      plVar12 = *(long **)(this + 8);
    }
    else {
      plVar12 = *(long **)(this + 8);
      lVar5 = *(long *)this;
      uVar10 = 0;
      lVar6 = *plVar12;
      do {
        *(ulong *)(lVar6 + uVar10 * 8) = uVar10 * 0x1000 + *(long *)(lVar5 + lVar11);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar7);
    }
    iVar8 = uVar7 + *(int *)(this + 0x14);
  }
  else {
    plVar12 = *(long **)(this + 8);
  }
  uVar7 = iVar8 - 1;
  *(uint *)(this + 0x14) = uVar7;
  pPVar4 = *(Page **)(plVar12[uVar7 >> ((byte)*(undefined4 *)(this + 0x18) & 0x1f)] +
                     (ulong)(uVar7 & *(uint *)(this + 0x1c)) * 8);
  this[0x24] = (PagedAllocator<CallQueue::Page,true,4096u>)0x0;
  *(undefined8 *)pPVar4 = 0;
  *(undefined8 *)(pPVar4 + 0xff8) = 0;
  puVar13 = (undefined8 *)((ulong)(pPVar4 + 8) & 0xfffffffffffffff8);
  for (uVar10 = (ulong)(((int)pPVar4 - (int)(undefined8 *)((ulong)(pPVar4 + 8) & 0xfffffffffffffff8)
                        ) + 0x1000U >> 3); uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (ulong)bVar14 * -2 + 1;
  }
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Callable, int, HashMapHasherDefault, HashMapComparatorDefault<Callable>,
   DefaultTypedAllocator<HashMapElement<Callable, int> > >::operator[](Callable const&) */

undefined8 * __thiscall
HashMap<Callable,int,HashMapHasherDefault,HashMapComparatorDefault<Callable>,DefaultTypedAllocator<HashMapElement<Callable,int>>>
::operator[](HashMap<Callable,int,HashMapHasherDefault,HashMapComparatorDefault<Callable>,DefaultTypedAllocator<HashMapElement<Callable,int>>>
             *this,Callable *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *__s;
  long lVar5;
  undefined8 *puVar6;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  char cVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  undefined8 uVar48;
  void *__s_00;
  undefined8 *puVar49;
  void *pvVar50;
  ulong uVar51;
  int iVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  undefined8 uVar56;
  uint uVar57;
  uint uVar58;
  long lVar59;
  undefined8 *puVar60;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  Callable local_58 [16];
  undefined4 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar44 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00104120:
    uVar47 = (ulong)uVar44;
    uVar51 = uVar47 * 4;
    uVar55 = uVar47 * 8;
    uVar48 = Memory::alloc_static(uVar51,false);
    *(undefined8 *)(this + 0x10) = uVar48;
    pvVar50 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = pvVar50;
    if (uVar44 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar50 + uVar55)) && (pvVar50 < (void *)((long)pvVar4 + uVar51))
         ) {
        uVar51 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar51 * 4) = 0;
          *(undefined8 *)((long)pvVar50 + uVar51 * 8) = 0;
          uVar51 = uVar51 + 1;
        } while (uVar47 != uVar51);
        goto LAB_00103f7a;
      }
      memset(pvVar4,0,uVar51);
      memset(pvVar50,0,uVar55);
      iVar52 = *(int *)(this + 0x2c);
LAB_00103f7e:
      if (iVar52 != 0) {
LAB_00103f86:
        uVar45 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        Callable::operator_cast_to_String((Callable *)local_68);
        uVar46 = String::hash();
        uVar47 = (ulong)uVar46;
        uVar48 = local_68._0_8_;
        if (local_68._0_8_ != 0) {
          LOCK();
          plVar1 = (long *)(local_68._0_8_ + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            auVar41._8_8_ = 0;
            auVar41._0_8_ = local_68._8_8_;
            local_68 = auVar41 << 0x40;
            Memory::free_static((void *)(uVar48 + -0x10),false);
          }
        }
        uVar51 = CONCAT44(0,uVar45);
        lVar59 = *(long *)(this + 0x10);
        if (uVar46 == 0) {
          uVar47 = 1;
        }
        uVar57 = 0;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar47 * lVar5;
        auVar35._8_8_ = 0;
        auVar35._0_8_ = uVar51;
        lVar53 = SUB168(auVar19 * auVar35,8);
        uVar46 = *(uint *)(lVar59 + lVar53 * 4);
        uVar58 = SUB164(auVar19 * auVar35,8);
        if (uVar46 != 0) {
          do {
            if ((uint)uVar47 == uVar46) {
              cVar42 = Callable::operator==
                                 ((Callable *)(*(long *)(*(long *)(this + 8) + lVar53 * 8) + 0x10),
                                  param_1);
              if (cVar42 != '\0') {
                puVar49 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar58 * 8);
                *(undefined4 *)(puVar49 + 4) = 0;
                goto LAB_00103ddb;
              }
              lVar59 = *(long *)(this + 0x10);
            }
            uVar57 = uVar57 + 1;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = (ulong)(uVar58 + 1) * lVar5;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = uVar51;
            lVar53 = SUB168(auVar20 * auVar36,8);
            uVar46 = *(uint *)(lVar59 + lVar53 * 4);
            uVar58 = SUB164(auVar20 * auVar36,8);
          } while ((uVar46 != 0) &&
                  (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)uVar46 * lVar5, auVar37._8_8_ = 0,
                  auVar37._0_8_ = uVar51, auVar22._8_8_ = 0,
                  auVar22._0_8_ = (ulong)((uVar45 + uVar58) - SUB164(auVar21 * auVar37,8)) * lVar5,
                  auVar38._8_8_ = 0, auVar38._0_8_ = uVar51, uVar57 <= SUB164(auVar22 * auVar38,8)))
          ;
        }
        iVar52 = *(int *)(this + 0x2c);
      }
      uVar47 = (ulong)uVar44;
      goto LAB_00103a28;
    }
    iVar52 = *(int *)(this + 0x2c);
    if (pvVar50 == (void *)0x0) goto LAB_00103a28;
    if (iVar52 != 0) goto LAB_00103f86;
LAB_00103a4e:
    uVar44 = *(uint *)(this + 0x28);
    if (uVar44 == 0x1c) {
      puVar49 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00103ddb;
    }
    uVar47 = (ulong)(uVar44 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar45 = *(uint *)(hash_table_size_primes + (ulong)uVar44 * 4);
    if (uVar44 + 1 < 2) {
      uVar47 = 2;
    }
    uVar44 = *(uint *)(hash_table_size_primes + uVar47 * 4);
    uVar55 = (ulong)uVar44;
    *(int *)(this + 0x28) = (int)uVar47;
    pvVar50 = *(void **)(this + 8);
    uVar47 = uVar55 * 4;
    uVar51 = uVar55 * 8;
    pvVar4 = *(void **)(this + 0x10);
    uVar48 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar48;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar44 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar47))) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)__s + uVar47 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar47 != uVar55);
      }
      else {
        memset(__s,0,uVar47);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar45 != 0) {
      uVar47 = 0;
      do {
        uVar44 = *(uint *)((long)pvVar4 + uVar47 * 4);
        if (uVar44 != 0) {
          lVar5 = *(long *)(this + 0x10);
          uVar57 = 0;
          uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar46);
          lVar59 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)uVar44 * lVar59;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar51;
          lVar53 = SUB168(auVar7 * auVar23,8);
          puVar2 = (uint *)(lVar5 + lVar53 * 4);
          iVar52 = SUB164(auVar7 * auVar23,8);
          uVar58 = *puVar2;
          uVar48 = *(undefined8 *)((long)pvVar50 + uVar47 * 8);
          while (uVar58 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar58 * lVar59;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar51;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar46 + iVar52) - SUB164(auVar8 * auVar24,8)) * lVar59;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            uVar43 = SUB164(auVar9 * auVar25,8);
            uVar56 = uVar48;
            if (uVar43 < uVar57) {
              *puVar2 = uVar44;
              puVar49 = (undefined8 *)((long)__s_00 + lVar53 * 8);
              uVar56 = *puVar49;
              *puVar49 = uVar48;
              uVar44 = uVar58;
              uVar57 = uVar43;
            }
            uVar57 = uVar57 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar52 + 1) * lVar59;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            lVar53 = SUB168(auVar10 * auVar26,8);
            puVar2 = (uint *)(lVar5 + lVar53 * 4);
            iVar52 = SUB164(auVar10 * auVar26,8);
            uVar48 = uVar56;
            uVar58 = *puVar2;
          }
          *(undefined8 *)((long)__s_00 + lVar53 * 8) = uVar48;
          *puVar2 = uVar44;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar47 = uVar47 + 1;
      } while (uVar45 != uVar47);
      Memory::free_static(pvVar50,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    iVar52 = *(int *)(this + 0x2c);
    uVar47 = (ulong)uVar44;
    if (iVar52 != 0) {
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      Callable::operator_cast_to_String((Callable *)local_68);
      uVar45 = String::hash();
      uVar47 = (ulong)uVar45;
      uVar48 = local_68._0_8_;
      if (local_68._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_68._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar40._8_8_ = 0;
          auVar40._0_8_ = local_68._8_8_;
          local_68 = auVar40 << 0x40;
          Memory::free_static((void *)(uVar48 + -0x10),false);
        }
      }
      uVar51 = CONCAT44(0,uVar44);
      lVar59 = *(long *)(this + 0x10);
      if (uVar45 == 0) {
        uVar47 = 1;
      }
      uVar58 = 0;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar47 * lVar5;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar51;
      lVar53 = SUB168(auVar15 * auVar31,8);
      uVar45 = *(uint *)(lVar59 + lVar53 * 4);
      uVar46 = SUB164(auVar15 * auVar31,8);
      if (uVar45 != 0) {
        do {
          if ((uint)uVar47 == uVar45) {
            cVar42 = Callable::operator==
                               ((Callable *)(*(long *)(*(long *)(this + 8) + lVar53 * 8) + 0x10),
                                param_1);
            if (cVar42 != '\0') {
              puVar49 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar46 * 8);
              goto LAB_00103ddb;
            }
            lVar59 = *(long *)(this + 0x10);
          }
          uVar58 = uVar58 + 1;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = (ulong)(uVar46 + 1) * lVar5;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = uVar51;
          lVar53 = SUB168(auVar16 * auVar32,8);
          uVar45 = *(uint *)(lVar59 + lVar53 * 4);
          uVar46 = SUB164(auVar16 * auVar32,8);
        } while ((uVar45 != 0) &&
                (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar45 * lVar5, auVar33._8_8_ = 0,
                auVar33._0_8_ = uVar51, auVar18._8_8_ = 0,
                auVar18._0_8_ = (ulong)((uVar46 + uVar44) - SUB164(auVar17 * auVar33,8)) * lVar5,
                auVar34._8_8_ = 0, auVar34._0_8_ = uVar51, uVar58 <= SUB164(auVar18 * auVar34,8)));
      }
      uVar44 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00104120;
LAB_00103f7a:
      iVar52 = *(int *)(this + 0x2c);
      goto LAB_00103f7e;
    }
LAB_00103a28:
    if ((float)uVar47 * __LC25 < (float)(iVar52 + 1)) goto LAB_00103a4e;
  }
  local_68 = (undefined1  [16])0x0;
  Callable::Callable(local_58,param_1);
  local_48 = 0;
  puVar49 = (undefined8 *)operator_new(0x28,"");
  *puVar49 = local_68._0_8_;
  puVar49[1] = local_68._8_8_;
  Callable::Callable((Callable *)(puVar49 + 2),local_58);
  *(undefined4 *)(puVar49 + 4) = local_48;
  Callable::~Callable(local_58);
  puVar6 = *(undefined8 **)(this + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar49;
  }
  else {
    *puVar6 = puVar49;
    puVar49[1] = puVar6;
  }
  *(undefined8 **)(this + 0x20) = puVar49;
  Callable::operator_cast_to_String((Callable *)local_68);
  uVar44 = String::hash();
  uVar47 = (ulong)uVar44;
  uVar48 = local_68._0_8_;
  if (local_68._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_68._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar39._8_8_ = 0;
      auVar39._0_8_ = local_68._8_8_;
      local_68 = auVar39 << 0x40;
      Memory::free_static((void *)(uVar48 + -0x10),false);
    }
  }
  if (uVar44 == 0) {
    uVar47 = 1;
  }
  lVar5 = *(long *)(this + 0x10);
  uVar58 = 0;
  lVar59 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar46 = (uint)uVar47;
  uVar44 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar44);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar47 * lVar59;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar51;
  lVar54 = SUB168(auVar11 * auVar27,8);
  lVar53 = *(long *)(this + 8);
  puVar2 = (uint *)(lVar5 + lVar54 * 4);
  iVar52 = SUB164(auVar11 * auVar27,8);
  uVar45 = *puVar2;
  puVar6 = puVar49;
  while (uVar45 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar45 * lVar59;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar51;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar44 + iVar52) - SUB164(auVar12 * auVar28,8)) * lVar59;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    uVar46 = SUB164(auVar13 * auVar29,8);
    puVar60 = puVar6;
    if (uVar46 < uVar58) {
      *puVar2 = (uint)uVar47;
      uVar47 = (ulong)uVar45;
      puVar3 = (undefined8 *)(lVar53 + lVar54 * 8);
      puVar60 = (undefined8 *)*puVar3;
      *puVar3 = puVar6;
      uVar58 = uVar46;
    }
    uVar46 = (uint)uVar47;
    uVar58 = uVar58 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar52 + 1) * lVar59;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    lVar54 = SUB168(auVar14 * auVar30,8);
    puVar2 = (uint *)(lVar5 + lVar54 * 4);
    iVar52 = SUB164(auVar14 * auVar30,8);
    puVar6 = puVar60;
    uVar45 = *puVar2;
  }
  *(undefined8 **)(lVar53 + lVar54 * 8) = puVar6;
  *puVar2 = uVar46;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00103ddb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar49 + 4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<int, int, HashMapHasherDefault, HashMapComparatorDefault<int>,
   DefaultTypedAllocator<HashMapElement<int, int> > >::operator[](int const&) */

undefined1  [16] __thiscall
HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
::operator[](HashMap<int,int,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,int>>>
             *this,int *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
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
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  ulong uVar43;
  int iVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  ulong uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar40 = (ulong)*(uint *)(this + 0x28);
  uVar38 = *param_1;
  uVar39 = *(uint *)(hash_table_size_primes + uVar40 * 4);
  uVar51 = CONCAT44(0,uVar39);
  if (local_70 == (void *)0x0) {
    uVar40 = uVar51 * 4;
    uVar48 = uVar51 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    lStack_90 = 0x10482b;
    local_70 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = local_70;
    if (uVar39 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      uVar38 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_00104393;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_70 + uVar48)) &&
         (local_70 < (void *)((long)pvVar3 + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar40 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar51 != uVar40);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
      else {
        memset(pvVar3,0,uVar40);
        lStack_90 = 0x104874;
        memset(local_70,0,uVar48);
        iVar44 = *(int *)(this + 0x2c);
        uVar38 = *param_1;
      }
    }
    if (iVar44 != 0) {
      uVar40 = (ulong)*(uint *)(this + 0x28);
      lVar52 = *(long *)(this + 0x10);
      goto LAB_00104713;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 != 0) {
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar37 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar37 = (uVar37 ^ uVar37 >> 0xd) * -0x3d4d51cb;
      uVar53 = uVar37 ^ uVar37 >> 0x10;
      if (uVar37 == uVar37 >> 0x10) {
        uVar53 = 1;
        uVar45 = uVar48;
      }
      else {
        uVar45 = uVar53 * uVar48;
      }
      lVar52 = *(long *)(this + 0x10);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar51;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar45;
      lVar46 = SUB168(auVar4 * auVar20,8);
      uVar37 = *(uint *)(lVar52 + lVar46 * 4);
      uVar54 = SUB164(auVar4 * auVar20,8);
      if (uVar37 != 0) {
        uVar50 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar53 == uVar37) &&
             (uVar38 == *(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10))) {
            auVar56._0_8_ = *(long *)((long)local_70 + (ulong)uVar54 * 8) + 0x14;
            auVar56._8_8_ = lVar47;
            return auVar56;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (uVar54 + 1) * uVar48;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar51;
          lVar46 = SUB168(auVar5 * auVar21,8);
          uVar37 = *(uint *)(lVar52 + lVar46 * 4);
          uVar54 = SUB164(auVar5 * auVar21,8);
        } while ((uVar37 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = uVar37 * uVar48, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar51, auVar7._8_8_ = 0,
                auVar7._0_8_ = ((uVar54 + uVar39) - SUB164(auVar6 * auVar22,8)) * uVar48,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar51, lVar47 = SUB168(auVar7 * auVar23,8),
                uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_00104713:
      uVar45 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar40 * 4));
      uVar48 = *(ulong *)(hash_table_size_primes_inv + uVar40 * 8);
      uVar39 = (uVar38 >> 0x10 ^ uVar38) * -0x7a143595;
      uVar39 = (uVar39 ^ uVar39 >> 0xd) * -0x3d4d51cb;
      uVar37 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
        uVar37 = 1;
        uVar43 = uVar48;
      }
      else {
        uVar43 = uVar37 * uVar48;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar45;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar43;
      lVar46 = SUB168(auVar16 * auVar32,8);
      uVar39 = *(uint *)(lVar52 + lVar46 * 4);
      uVar53 = SUB164(auVar16 * auVar32,8);
      if (uVar39 != 0) {
        uVar54 = 0;
        lVar47 = lVar46;
        do {
          if ((uVar37 == uVar39) &&
             (*(uint *)(*(long *)((long)local_70 + lVar46 * 8) + 0x10) == uVar38)) {
            pauVar42 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar53 * 8);
            *(undefined4 *)(pauVar42[1] + 4) = 0;
            lStack_90 = lVar47;
            goto LAB_001046f4;
          }
          uVar54 = uVar54 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (uVar53 + 1) * uVar48;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar45;
          lVar46 = SUB168(auVar17 * auVar33,8);
          uVar39 = *(uint *)(lVar52 + lVar46 * 4);
          uVar53 = SUB164(auVar17 * auVar33,8);
        } while ((uVar39 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = uVar39 * uVar48, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar45, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar40 * 4) + uVar53) -
                     SUB164(auVar18 * auVar34,8)) * uVar48, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar45, lVar47 = SUB168(auVar19 * auVar35,8),
                uVar54 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_00104393:
  if ((float)uVar51 * __LC25 < (float)(iVar44 + 1)) {
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001046f4;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar48 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = uVar48 * 4;
    uVar51 = uVar48 * 8;
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar48);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar52 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar38 * lVar46;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar47 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar52 + lVar47 * 4);
          iVar44 = SUB164(auVar8 * auVar24,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)local_70 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar53 * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar51;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar46;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar51;
            uVar50 = SUB164(auVar10 * auVar26,8);
            uVar49 = uVar41;
            if (uVar50 < uVar54) {
              *puVar1 = uVar38;
              puVar2 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar50;
            }
            uVar54 = uVar54 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar51;
            lVar47 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar52 + lVar47 * 4);
            iVar44 = SUB164(auVar11 * auVar27,8);
            uVar41 = uVar49;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar3,false);
    }
  }
  iVar44 = *param_1;
  pauVar42 = (undefined1 (*) [16])operator_new(0x18,"");
  *(int *)pauVar42[1] = iVar44;
  *(undefined4 *)(pauVar42[1] + 4) = 0;
  *pauVar42 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    *puVar2 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = ((uint)*param_1 >> 0x10 ^ *param_1) * -0x7a143595;
  uVar39 = (uVar38 ^ uVar38 >> 0xd) * -0x3d4d51cb;
  uVar38 = uVar39 ^ uVar39 >> 0x10;
  if (uVar39 == uVar39 >> 0x10) {
    uVar40 = 1;
    uVar38 = 1;
  }
  else {
    uVar40 = (ulong)uVar38;
  }
  uVar53 = 0;
  lVar52 = *(long *)(this + 0x10);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar51 = CONCAT44(0,uVar39);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar40 * lVar46;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar51;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar52 + lStack_90 * 4);
  iVar44 = SUB164(auVar12 * auVar28,8);
  uVar37 = *puVar1;
  pauVar36 = pauVar42;
  while (uVar37 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar37 * lVar46;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar51;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar39 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar51;
    uVar54 = SUB164(auVar14 * auVar30,8);
    pauVar55 = pauVar36;
    if (uVar54 < uVar53) {
      *puVar1 = uVar38;
      puVar2 = (undefined8 *)(lVar47 + lStack_90 * 8);
      pauVar55 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar38 = uVar37;
      uVar53 = uVar54;
    }
    uVar53 = uVar53 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar51;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar52 + lStack_90 * 4);
    iVar44 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar55;
    uVar37 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar47 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001046f4:
  auVar57._8_8_ = lStack_90;
  auVar57._0_8_ = pauVar42[1] + 4;
  return auVar57;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00104fe8:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00104e98;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_00104e9c:
      if (iVar46 != 0) {
LAB_00104ea4:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined4 *)(puVar42 + 3) = 0;
              goto LAB_00104a9c;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00104ad3;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00104ad3;
    if (iVar46 != 0) goto LAB_00104ea4;
LAB_00104af9:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104a9c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_00104a9c;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00104fe8;
LAB_00104e98:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00104e9c;
    }
LAB_00104ad3:
    if ((float)uVar40 * __LC25 < (float)(iVar46 + 1)) goto LAB_00104af9;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined4 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_00104fad;
LAB_00104d84:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00104d84;
LAB_00104fad:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104a9c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallQueue::push_set(ObjectID, StringName const&, Variant const&) [clone .cold] */

void CallQueue::push_set(void)

{
  code *pcVar1;
  
  _err_print_error("get_instance","./core/object/object.h",0x418,
                   "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PagedAllocator<CallQueue::Page, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<CallQueue::Page,true,4096u>::~PagedAllocator
          (PagedAllocator<CallQueue::Page,true,4096u> *this)

{
  PagedAllocator<CallQueue::Page,true,4096u> *pPVar1;
  long *plVar2;
  long lVar3;
  PagedAllocator<CallQueue::Page,true,4096u> PVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  pPVar1 = this + 0x24;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar5 = (ulong)local_48 >> 8;
    local_48 = (char *)(uVar5 << 8);
    LOCK();
    PVar4 = *pPVar1;
    if (PVar4 == (PagedAllocator<CallQueue::Page,true,4096u>)0x0) {
      *pPVar1 = (PagedAllocator<CallQueue::Page,true,4096u>)0x1;
    }
    UNLOCK();
    if (PVar4 == (PagedAllocator<CallQueue::Page,true,4096u>)0x0) break;
    local_48 = (char *)(uVar5 << 8);
    do {
    } while (*pPVar1 != (PagedAllocator<CallQueue::Page,true,4096u>)0x0);
  }
  if (*(uint *)(this + 0x14) < (uint)(*(int *)(this + 0x20) * *(int *)(this + 0x10))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_48 = "N9CallQueue4PageE";
      local_50 = 0;
      local_40 = 0x11;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      pcVar6 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar2 = (long *)(local_48 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar7 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar2 = (long *)(local_58 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
  }
  else if (*(int *)(this + 0x10) != 0) {
    lVar7 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)this + lVar7 * 8),false);
      lVar3 = lVar7 * 8;
      lVar7 = lVar7 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 8) + lVar3),false);
    } while ((uint)lVar7 < *(uint *)(this + 0x10));
    Memory::free_static(*(void **)this,false);
    Memory::free_static(*(void **)(this + 8),false);
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined1 (*) [16])this = (undefined1  [16])0x0;
  }
  this[0x24] = (PagedAllocator<CallQueue::Page,true,4096u>)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PagedAllocator<CallQueue::Page, true, 4096u>::~PagedAllocator() */

void __thiscall
PagedAllocator<CallQueue::Page,true,4096u>::~PagedAllocator
          (PagedAllocator<CallQueue::Page,true,4096u> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


