
/* BetsyCompressor::_assign_mt_ids(long) */

void __thiscall BetsyCompressor::_assign_mt_ids(BetsyCompressor *this,long param_1)

{
  *(long *)(this + 0x210) = param_1;
  return;
}



/* BetsyCompressor::_thread_exit() */

void __thiscall BetsyCompressor::_thread_exit(BetsyCompressor *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  this[0x208] = (BetsyCompressor)0x1;
  lVar3 = *(long *)(this + 0x218);
  if (lVar3 != 0) {
    if (*(long *)(this + 0x2a0) != 0) {
      RenderingDevice::free(lVar3,*(undefined8 *)(this + 0x2a0));
      lVar3 = *(long *)(this + 0x218);
    }
    lVar2 = 0;
    RenderingDevice::free(lVar3,*(undefined8 *)(this + 0x298));
    do {
      while (*(long *)(this + lVar2 * 0x10 + 0x228) != 0) {
        iVar1 = (int)lVar2;
        lVar2 = lVar2 + 1;
        RenderingDevice::free
                  (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + (long)iVar1 * 0x10 + 0x228))
        ;
        if (lVar2 == 7) {
          return;
        }
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 7);
  }
  return;
}



/* CowData<RenderingDeviceCommons::DataFormat>::_ref(CowData<RenderingDeviceCommons::DataFormat>
   const&) [clone .part.0] */

void __thiscall
CowData<RenderingDeviceCommons::DataFormat>::_ref
          (CowData<RenderingDeviceCommons::DataFormat> *this,CowData *param_1)

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



/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */

void __thiscall CowData<unsigned_char>::_ref(CowData<unsigned_char> *this,CowData *param_1)

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



/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* BetsyCompressor::_thread_loop() */

void __thiscall BetsyCompressor::_thread_loop(BetsyCompressor *this)

{
  if (this[0x208] == (BetsyCompressor)0x0) {
    do {
      WorkerThreadPool::yield();
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x178));
    } while (this[0x208] == (BetsyCompressor)0x0);
    return;
  }
  return;
}



/* BetsyCompressor::finish() */

void __thiscall BetsyCompressor::finish(BetsyCompressor *this)

{
  uint uVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar5 != 0) {
    std::__throw_system_error(iVar5);
    if (betsy == (BetsyCompressor *)0x0) {
      return;
    }
    finish(betsy);
    pOVar2 = (Object *)betsy;
    cVar4 = predelete_handler((Object *)betsy);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      return;
    }
    return;
  }
  uVar1 = *(uint *)(this + 0x1a0);
  uVar8 = (ulong)uVar1;
  uVar10 = uVar1 + 0x38;
  if (uVar1 < 0xffffffc8) {
    pvVar7 = *(void **)(this + 0x1a8);
    if (*(uint *)(this + 0x1a4) < uVar10) {
      uVar9 = uVar1 + 0x37 | uVar1 + 0x37 >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(this + 0x1a4) = uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
      *(void **)(this + 0x1a8) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar8 = (ulong)(uVar1 + 8);
    *(uint *)(this + 0x1a0) = uVar10;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      *puVar6 = &PTR_call_00123108;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6[2] = this;
      puVar6[3] = _thread_exit;
      puVar6[4] = 0;
      LOCK();
      this[0x200] = (BetsyCompressor)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f0) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
      if (*(long *)(this + 0x210) == -1) {
        pOVar2 = *(Object **)(this + 0x218);
      }
      else {
        WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
        pOVar2 = *(Object **)(this + 0x218);
        *(undefined8 *)(this + 0x210) = 0xffffffffffffffff;
      }
      if (pOVar2 != (Object *)0x0) {
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        puVar6 = *(undefined8 **)(this + 0x220);
        *(undefined8 *)(this + 0x218) = 0;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)(puVar6);
          Memory::free_static(puVar6,false);
          *(undefined8 *)(this + 0x220) = 0;
        }
      }
      return;
    }
  }
  else {
    *(uint *)(this + 0x1a0) = uVar10;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* free_device() */

void free_device(void)

{
  Object *pOVar1;
  char cVar2;
  
  if (betsy == (BetsyCompressor *)0x0) {
    return;
  }
  BetsyCompressor::finish(betsy);
  pOVar1 = (Object *)betsy;
  cVar2 = predelete_handler((Object *)betsy);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100697) */
/* WARNING: Removing unreachable block (ram,0x001007b0) */
/* BetsyCompressor::init() */

void __thiscall BetsyCompressor::init(BetsyCompressor *this)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  code *pcVar2;
  Callable *pCVar3;
  int iVar4;
  CallableCustom *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  Callable local_58 [24];
  long local_40;
  
  pCVar3 = WorkerThreadPool::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00122d60;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar5;
  *(code **)(this_00 + 0x38) = _thread_loop;
  *(BetsyCompressor **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "BetsyCompressor::_thread_loop";
  Callable::Callable(local_58,this_00);
  uVar5 = WorkerThreadPool::add_task(pCVar3,SUB81(local_58,0),(String *)0x1);
  Callable::~Callable(local_58);
  __mutex = (pthread_mutex_t *)(this + 0x178);
  iVar4 = pthread_mutex_lock(__mutex);
  if (iVar4 == 0) {
    *(undefined8 *)(this + 0x1f0) = uVar5;
    pthread_mutex_unlock(__mutex);
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 == 0) {
      uVar1 = *(uint *)(this + 0x1a0);
      uVar8 = (ulong)uVar1;
      uVar10 = uVar1 + 0x38;
      if (0xffffffc7 < uVar1) {
        *(uint *)(this + 0x1a0) = uVar10;
LAB_001007d8:
        _err_print_index_error
                  ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index"
                   ,"count","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pvVar7 = *(void **)(this + 0x1a8);
      if (*(uint *)(this + 0x1a4) < uVar10) {
        uVar9 = uVar1 + 0x37 >> 1 | uVar1 + 0x37;
        uVar9 = uVar9 | uVar9 >> 2;
        uVar9 = uVar9 | uVar9 >> 4;
        uVar9 = uVar9 | uVar9 >> 8;
        uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
        *(uint *)(this + 0x1a4) = uVar9;
        pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
        *(void **)(this + 0x1a8) = pvVar7;
        if (pvVar7 == (void *)0x0) {
          _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                           "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
      }
      uVar8 = (ulong)(uVar1 + 8);
      *(uint *)(this + 0x1a0) = uVar10;
      *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x30;
      if (uVar10 <= uVar1 + 8) goto LAB_001007d8;
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      *puVar6 = &PTR_call_001230b8;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6[2] = this;
      puVar6[3] = 0x100000;
      puVar6[4] = 0;
      puVar6[5] = uVar5;
      LOCK();
      this[0x200] = (BetsyCompressor)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f0) != -1) {
        WorkerThreadPool::notify_yield_over((long)WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock(__mutex);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CommandQueueMT::push_and_sync<BetsyCompressor,void(BetsyCompressor::*)()>
                  ((BetsyCompressor *)&__mutex->__data,(_func_void *)this);
        return;
      }
      goto LAB_0010089d;
    }
  }
  std::__throw_system_error(iVar4);
LAB_0010089d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ensure_betsy_exists() */

int ensure_betsy_exists(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  Object *this;
  Object *pOVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int iStack_68;
  undefined4 uStack_64;
  int aiStack_60 [6];
  long lStack_48;
  undefined1 *puStack_38;
  
  uVar3 = pthread_mutex_lock((pthread_mutex_t *)betsy_mutex);
  if (uVar3 == 0) {
    if (betsy != (Object *)0x0) {
      iVar4 = pthread_mutex_unlock((pthread_mutex_t *)betsy_mutex);
      return iVar4;
    }
    this = (Object *)operator_new(0x2a8,"");
    Object::Object(this);
    *(undefined ***)this = &PTR__initialize_classv_00122c00;
    CommandQueueMT::CommandQueueMT((CommandQueueMT *)(this + 0x178));
    this[0x208] = (Object)0x0;
    pOVar5 = this + 0x228;
    *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
    *(undefined8 *)(this + 0x210) = 0xffffffffffffffff;
    do {
      *(undefined1 (*) [16])pOVar5 = (undefined1  [16])0x0;
      pOVar5 = pOVar5 + 0x10;
    } while (pOVar5 != this + 0x298);
    *(undefined1 (*) [16])(this + 0x298) = (undefined1  [16])0x0;
    postinitialize_handler(this);
    betsy = this;
    BetsyCompressor::init((BetsyCompressor *)this);
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)betsy_mutex);
    return iVar4;
  }
  uVar6 = (ulong)uVar3;
  std::__throw_system_error(uVar3);
  puStack_38 = betsy_mutex;
  lStack_48 = *(long *)(in_FS_OFFSET + 0x28);
  ensure_betsy_exists();
  iVar4 = Image::get_format();
  if (iVar4 - 8U < 9) {
    cVar2 = Image::detect_signed(SUB81(uVar6,0));
    if (cVar2 == '\0') {
      uVar7 = 8;
    }
    else {
      uVar7 = 7;
    }
    CommandQueueMT::
    push_and_ret<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
              ((long)betsy + 0x178,betsy,BetsyCompressor::_compress,0,&iStack_68,uVar7,uVar6);
    iVar4 = iStack_68;
  }
  else {
    iVar4 = 2;
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&iStack_68,"rendering/textures/vram_compression/cache_gpu_compressor",
             false);
  ProjectSettings::get_setting_with_override((StringName *)aiStack_60);
  bVar1 = Variant::operator_cast_to_bool((Variant *)aiStack_60);
  if (Variant::needs_deinit[aiStack_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (CONCAT44(uStack_64,iStack_68) != 0)) {
    StringName::unref();
  }
  if (!bVar1) {
    free_device();
  }
  if (lStack_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 FUN_00100b6b(void)

{
  bool bVar1;
  StringName *unaff_RBX;
  undefined4 unaff_R12D;
  long in_FS_OFFSET;
  long in_stack_00000008;
  int in_stack_00000010;
  long in_stack_00000028;
  
  ProjectSettings::get_singleton();
  StringName::StringName(unaff_RBX,"rendering/textures/vram_compression/cache_gpu_compressor",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)&stack0x00000010);
  bVar1 = Variant::operator_cast_to_bool((Variant *)&stack0x00000010);
  if (Variant::needs_deinit[in_stack_00000010] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (in_stack_00000008 != 0)) {
    StringName::unref();
  }
  if (!bVar1) {
    free_device();
  }
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return unaff_R12D;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 switchD_00100b42::caseD_0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  StringName *unaff_RBX;
  long in_FS_OFFSET;
  undefined4 uStack0000000000000008;
  int in_stack_00000010;
  long in_stack_00000028;
  
  CommandQueueMT::
  push_and_ret<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
            (param_1,param_2,BetsyCompressor::_compress,0);
  ProjectSettings::get_singleton();
  StringName::StringName(unaff_RBX,"rendering/textures/vram_compression/cache_gpu_compressor",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)&stack0x00000010);
  bVar1 = Variant::operator_cast_to_bool((Variant *)&stack0x00000010);
  if (Variant::needs_deinit[in_stack_00000010] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (_uStack0000000000000008 != 0)) {
    StringName::unref();
  }
  if (!bVar1) {
    free_device();
  }
  if (in_stack_00000028 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uStack0000000000000008;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 8;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<RID>::push_back(RID) [clone .isra.0] */

void __thiscall Vector<RID>::push_back(Vector<RID> *this,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<RID>::resize<false>((CowData<RID> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<RID>::_copy_on_write((CowData<RID> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_2;
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



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<unsigned_char>>::_copy_on_write(CowData<Vector<unsigned_char>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<unsigned_char> *this_00;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  this_00 = (CowData<unsigned_char> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<unsigned_char>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x28 != 0) {
    uVar7 = lVar1 * 0x28 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        *puVar8 = *puVar6;
        *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
        uVar2 = puVar6[2];
        puVar8[4] = 0;
        lVar3 = puVar6[4];
        puVar8[2] = uVar2;
        if (lVar3 != 0) {
          CowData<RID>::_ref((CowData<RID> *)(puVar8 + 4),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 5;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write
          (CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
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
  if (lVar2 * 0x18 != 0) {
    uVar7 = lVar2 * 0x18 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    puVar8 = puVar5 + 2;
    if (lVar2 != 0) {
      do {
        puVar6 = (undefined4 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        uVar1 = *puVar6;
        puVar8[2] = 0;
        lVar3 = *(long *)(puVar6 + 4);
        *(undefined4 *)puVar8 = uVar1;
        if (lVar3 != 0) {
          CowData<unsigned_char>::_ref
                    ((CowData<unsigned_char> *)(puVar8 + 2),(CowData *)(puVar6 + 4));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar2 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  int iVar2;
  ulong uVar3;
  CowData<unsigned_char> *pCVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  CowData<unsigned_char> *pCVar7;
  long lVar8;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
LAB_001015d6:
    lVar8 = 0;
    pCVar4 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    if (lVar8 == 0) goto LAB_001015d6;
    uVar3 = lVar8 - 1U | lVar8 - 1U >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar4 = (CowData<unsigned_char> *)((uVar3 | uVar3 >> 0x20) + 1);
  }
  uVar3 = param_1 - 1U | param_1 - 1U >> 1;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  pCVar7 = (CowData<unsigned_char> *)(uVar3 | uVar3 >> 0x20);
  pCVar1 = pCVar7 + 1;
  if (param_1 <= lVar8) {
    if ((pCVar1 != pCVar4) && (iVar2 = _realloc(this,(long)pCVar1), iVar2 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_0010b354();
    return;
  }
  if (pCVar1 != pCVar4) {
    if (lVar8 == 0) {
      puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar7 + 0x11),false);
      if (puVar5 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8 **)this = puVar6;
      goto LAB_0010152c;
    }
    pCVar7 = this;
    iVar2 = _realloc(this,(long)pCVar1);
    if (iVar2 != 0) {
      return;
    }
  }
  puVar6 = *(undefined8 **)this;
  if (puVar6 == (undefined8 *)0x0) {
    resize<false>((long)pCVar7);
    return;
  }
LAB_0010152c:
  puVar6[-1] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BetsyCompressor::_init() */

void __thiscall BetsyCompressor::_init(BetsyCompressor *this)

{
  long *plVar1;
  Vector *pVVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  SamplerState *this_00;
  undefined8 uVar6;
  RenderingContextDriverVulkan *this_01;
  String *pSVar7;
  long in_FS_OFFSET;
  String *local_b0;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar4 = DisplayServer::can_create_rendering_device();
  if (cVar4 != '\0') {
    RenderingServer::get_singleton();
    this_01 = (RenderingContextDriverVulkan *)0x0;
    this_00 = (SamplerState *)RenderingServer::create_local_rendering_device();
    if (this_00 == (SamplerState *)0x0) {
      this_01 = (RenderingContextDriverVulkan *)operator_new(0x178,"");
      RenderingContextDriverVulkan::RenderingContextDriverVulkan(this_01);
      this_00 = (SamplerState *)operator_new(0xf28,"");
      RenderingDevice::RenderingDevice((RenderingDevice *)this_00);
      postinitialize_handler((Object *)this_00);
      iVar5 = (**(code **)(*(long *)this_01 + 0x10))(this_01);
      if ((iVar5 != 0) ||
         (iVar5 = RenderingDevice::initialize((RenderingContextDriver *)this_00,(int)this_01),
         iVar5 != 0)) {
        cVar4 = predelete_handler((Object *)this_00);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
        }
        (*(code *)**(undefined8 **)this_01)(this_01);
        Memory::free_static(this_01,false);
        _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0x77,
                         "Parameter \"rd\" is null.","Unable to create a local RenderingDevice.",0,0
                        );
        goto LAB_00101644;
      }
    }
    local_78 = _LC95;
    *(SamplerState **)(this + 0x218) = this_00;
    uStack_80 = _UNK_00123368;
    local_88 = __LC94;
    local_6c = 0;
    *(RenderingContextDriverVulkan **)(this + 0x220) = this_01;
    local_70 = 0;
    local_68 = 0x3f800000;
    local_64 = 0;
    local_60 = 7;
    local_58 = 0x260ad78ec;
    local_50 = 0;
    uVar6 = RenderingDevice::sampler_create(this_00);
    local_b0 = (String *)0x0;
    *(undefined8 *)(this + 0x298) = uVar6;
    Ref<RDShaderFile>::instantiate<>((Ref<RDShaderFile> *)&local_b0);
    pSVar7 = local_b0;
    local_a0 = 0;
    local_98 = 
    "#[versions]\n\nstandard = \"\";\ndithered = \"#define BC1_DITHER\";\n\n#[compute]\n#version 450\n\n#define min3(a, b, c) min(a, min(b, c))\n#define max3(a, b, c) max(a, max(b, c))\n\n#define float2 vec2\n#define float3 vec3\n#define float4 vec4\n\n#define int2 ivec2\n#define int3 ivec3\n#define int4 ivec4\n\n#define uint2 uvec2\n#define uint3 uvec3\n#define uint4 uvec4\n\n#define float2x2 mat2\n#define float3x3 mat3\n#define float4x4 mat4\n#define ogre_float4x3 mat3x4\n\n#define ushort uint\n#define ushort3 uint3\n#define ushort4 uint4\n\n//Short used for read operations. It\'s an int in GLSL & HLSL. An ushort in Metal\n#define rshort int\n#define rshort2 int2\n#define rint int\n//Short used for write operations. It\'s an int in GLSL. An ushort in HLSL & Metal\n#define wshort2 int2\n#define wshort3 int3\n\n#define toFloat3x3(x) mat3(x)\n#define buildFloat3x3(row0, row1, row2) mat3(row0, row1, row2)\n\n#define mul(x, y) ((x) * (y))\n#define saturate(x) clamp((x), 0.0, 1.0)\n#define lerp mix\n#define rsqrt inversesqrt\n#define INLINE\n#define NO_INTERPOLATION_PREFIX flat\n#define NO_INTERPOLATION_SUFFIX\n\n#define PARAMS_ARG_DECL\n#define PARAMS_ARG\n\n#define reversebits bitfieldReverse\n\n#define OGRE_Sample(tex, sampler, uv) texture(tex, uv)\n#define OGRE_SampleLevel(tex, sampler, uv, lod) textureLod(tex, uv, lod)\n#define OGRE_SampleArray2D(tex, sampler, uv, arrayIdx) texture(tex, vec3(uv, arrayIdx))\n#define OGRE_SampleArray2DLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec3(uv, arrayIdx), lod)\n#define OGRE_SampleArrayCubeLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec4(uv, arrayIdx), lod)\n#define OGRE_SampleGrad(tex, sampler, uv, ddx, ddy) textureGrad(tex, uv, ddx, ddy)\n#define OGRE_SampleArray2DGrad(tex, sampler, uv, arrayIdx, ddx, ddy) textureGrad(tex, vec3(uv, arrayIdx), ddx, ddy)\n#define OGRE_ddx(val) dFdx(val)\n#define OGRE_ddy(val) dFdy(val)\n#define OGRE_Load2D(tex, iuv, lod) texelFetch(tex, iuv, lod)\n#define OGRE_LoadArray2D(tex, iuv, arrayIdx, lod) texelFetch(tex, ivec3(iuv, arrayIdx), lod)\n#define OGRE_Load2DMS(tex, iuv, subsample) texelFetch(t..." /* TRUNCATED STRING LITERAL */
    ;
    local_a8 = 0;
    local_90 = 0x44ab;
    String::parse_latin1((StrRange *)&local_a8);
    iVar5 = RDShaderFile::parse_versions_from_text
                      (pSVar7,(StrRange *)&local_a8,(CowData<char32_t> *)&local_a0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (iVar5 != 0) {
      local_a0 = 0;
      local_98 = "Betsy BC1 compress shader";
      local_90 = 0x19;
      String::parse_latin1((StrRange *)&local_a0);
      RDShaderFile::print_errors(pSVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
    pVVar2 = *(Vector **)(this + 0x218);
    local_a0 = 0;
    local_98 = "";
    local_90 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    StringName::StringName((StringName *)&local_a8,"standard",false);
    RDShaderFile::get_spirv_stages((StringName *)&local_98);
    uVar6 = RenderingDevice::shader_create_from_spirv(pVVar2,(String *)&local_98);
    *(undefined8 *)(this + 0x228) = uVar6;
    CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
              ((CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)&local_90);
    if ((StringName::configured != '\0') && (local_a8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (*(long *)(this + 0x228) == 0) {
      _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0x94,
                       "Condition \"cached_shaders[BETSY_SHADER_BC1_STANDARD].compiled.is_null()\" is true."
                       ,0,0);
    }
    else {
      local_90 = 0;
      uVar6 = RenderingDevice::compute_pipeline_create
                        (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x228),
                         (StringName *)&local_98);
      lVar3 = local_90;
      *(undefined8 *)(this + 0x230) = uVar6;
      if (local_90 != 0) {
        LOCK();
        plVar1 = (long *)(local_90 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        pSVar7 = local_b0;
        if (*plVar1 == 0) {
          local_90 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
          pSVar7 = local_b0;
        }
      }
      if (*(long *)(this + 0x230) == 0) {
        _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0x97,
                         "Condition \"cached_shaders[BETSY_SHADER_BC1_STANDARD].pipeline.is_null()\" is true."
                         ,0,0);
      }
      else {
        if (((pSVar7 != (String *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
           (cVar4 = predelete_handler((Object *)pSVar7), cVar4 != '\0')) {
          (**(code **)(*(long *)pSVar7 + 0x140))(pSVar7);
          Memory::free_static(pSVar7,false);
        }
        local_b0 = (String *)0x0;
        Ref<RDShaderFile>::instantiate<>((Ref<RDShaderFile> *)&local_b0);
        pSVar7 = local_b0;
        local_a0 = 0;
        local_98 = 
        "#[versions]\n\nunsigned = \"\";\nsigned = \"#define SNORM\";\n\n#[compute]\n#version 450\n\n#define min3(a, b, c) min(a, min(b, c))\n#define max3(a, b, c) max(a, max(b, c))\n\n#define float2 vec2\n#define float3 vec3\n#define float4 vec4\n\n#define int2 ivec2\n#define int3 ivec3\n#define int4 ivec4\n\n#define uint2 uvec2\n#define uint3 uvec3\n#define uint4 uvec4\n\n#define float2x2 mat2\n#define float3x3 mat3\n#define float4x4 mat4\n#define ogre_float4x3 mat3x4\n\n#define ushort uint\n#define ushort3 uint3\n#define ushort4 uint4\n\n//Short used for read operations. It\'s an int in GLSL & HLSL. An ushort in Metal\n#define rshort int\n#define rshort2 int2\n#define rint int\n//Short used for write operations. It\'s an int in GLSL. An ushort in HLSL & Metal\n#define wshort2 int2\n#define wshort3 int3\n\n#define toFloat3x3(x) mat3(x)\n#define buildFloat3x3(row0, row1, row2) mat3(row0, row1, row2)\n\n#define mul(x, y) ((x) * (y))\n#define saturate(x) clamp((x), 0.0, 1.0)\n#define lerp mix\n#define rsqrt inversesqrt\n#define INLINE\n#define NO_INTERPOLATION_PREFIX flat\n#define NO_INTERPOLATION_SUFFIX\n\n#define PARAMS_ARG_DECL\n#define PARAMS_ARG\n\n#define reversebits bitfieldReverse\n\n#define OGRE_Sample(tex, sampler, uv) texture(tex, uv)\n#define OGRE_SampleLevel(tex, sampler, uv, lod) textureLod(tex, uv, lod)\n#define OGRE_SampleArray2D(tex, sampler, uv, arrayIdx) texture(tex, vec3(uv, arrayIdx))\n#define OGRE_SampleArray2DLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec3(uv, arrayIdx), lod)\n#define OGRE_SampleArrayCubeLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec4(uv, arrayIdx), lod)\n#define OGRE_SampleGrad(tex, sampler, uv, ddx, ddy) textureGrad(tex, uv, ddx, ddy)\n#define OGRE_SampleArray2DGrad(tex, sampler, uv, arrayIdx, ddx, ddy) textureGrad(tex, vec3(uv, arrayIdx), ddx, ddy)\n#define OGRE_ddx(val) dFdx(val)\n#define OGRE_ddy(val) dFdy(val)\n#define OGRE_Load2D(tex, iuv, lod) texelFetch(tex, iuv, lod)\n#define OGRE_LoadArray2D(tex, iuv, arrayIdx, lod) texelFetch(tex, ivec3(iuv, arrayIdx), lod)\n#define OGRE_Load2DMS(tex, iuv, subsample) texelFetch(tex, iuv..." /* TRUNCATED STRING LITERAL */
        ;
        local_a8 = 0;
        local_90 = 0x1a59;
        String::parse_latin1((StrRange *)&local_a8);
        iVar5 = RDShaderFile::parse_versions_from_text
                          (pSVar7,(StrRange *)&local_a8,(CowData<char32_t> *)&local_a0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        if (iVar5 != 0) {
          local_a0 = 0;
          local_98 = "Betsy BC4 compress shader";
          local_90 = 0x19;
          String::parse_latin1((StrRange *)&local_a0);
          RDShaderFile::print_errors(pSVar7);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        }
        pVVar2 = *(Vector **)(this + 0x218);
        local_a0 = 0;
        local_98 = "";
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_a0);
        StringName::StringName((StringName *)&local_a8,"unsigned",false);
        RDShaderFile::get_spirv_stages((StringName *)&local_98);
        uVar6 = RenderingDevice::shader_create_from_spirv(pVVar2,(String *)&local_98);
        *(undefined8 *)(this + 600) = uVar6;
        CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
                  ((CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)&local_90);
        if ((StringName::configured != '\0') && (local_a8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        if (*(long *)(this + 600) == 0) {
          _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xb3,
                           "Condition \"cached_shaders[BETSY_SHADER_BC4_UNSIGNED].compiled.is_null()\" is true."
                           ,0,0);
        }
        else {
          local_90 = 0;
          uVar6 = RenderingDevice::compute_pipeline_create
                            (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 600),
                             (StringName *)&local_98);
          lVar3 = local_90;
          *(undefined8 *)(this + 0x260) = uVar6;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pSVar7 = local_b0;
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
              pSVar7 = local_b0;
            }
          }
          if (*(long *)(this + 0x260) == 0) {
            _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xb6,
                             "Condition \"cached_shaders[BETSY_SHADER_BC4_UNSIGNED].pipeline.is_null()\" is true."
                             ,0,0);
          }
          else {
            if (((pSVar7 != (String *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
               (cVar4 = predelete_handler((Object *)pSVar7), cVar4 != '\0')) {
              (**(code **)(*(long *)pSVar7 + 0x140))(pSVar7);
              Memory::free_static(pSVar7,false);
            }
            local_b0 = (String *)0x0;
            Ref<RDShaderFile>::instantiate<>((Ref<RDShaderFile> *)&local_b0);
            pSVar7 = local_b0;
            local_a0 = 0;
            local_98 = 
            "#[versions]\n\nsigned = \"#define SIGNED\";\nunsigned = \"#define QUALITY\"; // The \"Quality\" preset causes artifacting on signed data, so for now it\'s exclusive to unsigned.\n\n#[compute]\n#version 450\n\n#define min3(a, b, c) min(a, min(b, c))\n#define max3(a, b, c) max(a, max(b, c))\n\n#define float2 vec2\n#define float3 vec3\n#define float4 vec4\n\n#define int2 ivec2\n#define int3 ivec3\n#define int4 ivec4\n\n#define uint2 uvec2\n#define uint3 uvec3\n#define uint4 uvec4\n\n#define float2x2 mat2\n#define float3x3 mat3\n#define float4x4 mat4\n#define ogre_float4x3 mat3x4\n\n#define ushort uint\n#define ushort3 uint3\n#define ushort4 uint4\n\n//Short used for read operations. It\'s an int in GLSL & HLSL. An ushort in Metal\n#define rshort int\n#define rshort2 int2\n#define rint int\n//Short used for write operations. It\'s an int in GLSL. An ushort in HLSL & Metal\n#define wshort2 int2\n#define wshort3 int3\n\n#define toFloat3x3(x) mat3(x)\n#define buildFloat3x3(row0, row1, row2) mat3(row0, row1, row2)\n\n#define mul(x, y) ((x) * (y))\n#define saturate(x) clamp((x), 0.0, 1.0)\n#define lerp mix\n#define rsqrt inversesqrt\n#define INLINE\n#define NO_INTERPOLATION_PREFIX flat\n#define NO_INTERPOLATION_SUFFIX\n\n#define PARAMS_ARG_DECL\n#define PARAMS_ARG\n\n#define reversebits bitfieldReverse\n\n#define OGRE_Sample(tex, sampler, uv) texture(tex, uv)\n#define OGRE_SampleLevel(tex, sampler, uv, lod) textureLod(tex, uv, lod)\n#define OGRE_SampleArray2D(tex, sampler, uv, arrayIdx) texture(tex, vec3(uv, arrayIdx))\n#define OGRE_SampleArray2DLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec3(uv, arrayIdx), lod)\n#define OGRE_SampleArrayCubeLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec4(uv, arrayIdx), lod)\n#define OGRE_SampleGrad(tex, sampler, uv, ddx, ddy) textureGrad(tex, uv, ddx, ddy)\n#define OGRE_SampleArray2DGrad(tex, sampler, uv, arrayIdx, ddx, ddy) textureGrad(tex, vec3(uv, arrayIdx), ddx, ddy)\n#define OGRE_ddx(val) dFdx(val)\n#define OGRE_ddy(val) dFdy(val)\n#define OGRE_Load2D(tex, iuv, lod) texelFetch(tex, iuv, lod)\n#define OGRE_LoadArray2D(tex, iuv, arrayI..." /* TRUNCATED STRING LITERAL */
            ;
            local_a8 = 0;
            local_90 = 0x6567;
            String::parse_latin1((StrRange *)&local_a8);
            iVar5 = RDShaderFile::parse_versions_from_text
                              (pSVar7,(StrRange *)&local_a8,(CowData<char32_t> *)&local_a0,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            if (iVar5 != 0) {
              local_98 = (char *)0x0;
              String::parse_latin1((String *)&local_98,"Betsy BC6 compress shader");
              RDShaderFile::print_errors(pSVar7);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            }
            pVVar2 = *(Vector **)(this + 0x218);
            local_a0 = 0;
            local_98 = "";
            local_90 = 0;
            String::parse_latin1((StrRange *)&local_a0);
            StringName::StringName((StringName *)&local_a8,"signed",false);
            RDShaderFile::get_spirv_stages((StringName *)&local_98);
            uVar6 = RenderingDevice::shader_create_from_spirv(pVVar2,(String *)&local_98);
            *(undefined8 *)(this + 0x268) = uVar6;
            CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
                      ((CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)&local_90);
            if ((StringName::configured != '\0') && (local_a8 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            if (*(long *)(this + 0x268) == 0) {
              _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xc4,
                               "Condition \"cached_shaders[BETSY_SHADER_BC6_SIGNED].compiled.is_null()\" is true."
                               ,0,0);
            }
            else {
              local_90 = 0;
              uVar6 = RenderingDevice::compute_pipeline_create
                                (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x268),
                                 (StringName *)&local_98);
              lVar3 = local_90;
              *(undefined8 *)(this + 0x270) = uVar6;
              if (local_90 != 0) {
                LOCK();
                plVar1 = (long *)(local_90 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void *)(lVar3 + -0x10),false);
                }
              }
              if (*(long *)(this + 0x270) == 0) {
                _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",199,
                                 "Condition \"cached_shaders[BETSY_SHADER_BC6_SIGNED].pipeline.is_null()\" is true."
                                 ,0,0);
                pSVar7 = local_b0;
              }
              else {
                pVVar2 = *(Vector **)(this + 0x218);
                local_a0 = 0;
                local_98 = "";
                local_90 = 0;
                String::parse_latin1((StrRange *)&local_a0);
                StringName::StringName((StringName *)&local_a8,"unsigned",false);
                RDShaderFile::get_spirv_stages((StringName *)&local_98);
                uVar6 = RenderingDevice::shader_create_from_spirv(pVVar2,(String *)&local_98);
                *(undefined8 *)(this + 0x278) = uVar6;
                CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
                          ((CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)&local_90);
                if ((StringName::configured != '\0') && (local_a8 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                if (*(long *)(this + 0x278) == 0) {
                  _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xcb,
                                   "Condition \"cached_shaders[BETSY_SHADER_BC6_UNSIGNED].compiled.is_null()\" is true."
                                   ,0,0);
                  pSVar7 = local_b0;
                }
                else {
                  local_90 = 0;
                  uVar6 = RenderingDevice::compute_pipeline_create
                                    (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x278),
                                     (StringName *)&local_98);
                  lVar3 = local_90;
                  *(undefined8 *)(this + 0x280) = uVar6;
                  if (local_90 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_90 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_90 = 0;
                      Memory::free_static((void *)(lVar3 + -0x10),false);
                    }
                  }
                  pSVar7 = local_b0;
                  if (*(long *)(this + 0x280) == 0) {
                    _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xce,
                                     "Condition \"cached_shaders[BETSY_SHADER_BC6_UNSIGNED].pipeline.is_null()\" is true."
                                     ,0,0);
                  }
                  else {
                    if (((local_b0 != (String *)0x0) &&
                        (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
                       (cVar4 = predelete_handler((Object *)pSVar7), cVar4 != '\0')) {
                      (**(code **)(*(long *)pSVar7 + 0x140))(pSVar7);
                      Memory::free_static(pSVar7,false);
                    }
                    local_b0 = (String *)0x0;
                    Ref<RDShaderFile>::instantiate<>((Ref<RDShaderFile> *)&local_b0);
                    pSVar7 = local_b0;
                    local_a0 = 0;
                    local_98 = 
                    "// RGB and Alpha components of ETC2 RGBA are computed separately.\n// This compute shader merely stitches them together to form the final result\n// It\'s also used by RG11 driver to stitch two R11 into one RG11\n\n#[compute]\n#version 450\n\n#define min3(a, b, c) min(a, min(b, c))\n#define max3(a, b, c) max(a, max(b, c))\n\n#define float2 vec2\n#define float3 vec3\n#define float4 vec4\n\n#define int2 ivec2\n#define int3 ivec3\n#define int4 ivec4\n\n#define uint2 uvec2\n#define uint3 uvec3\n#define uint4 uvec4\n\n#define float2x2 mat2\n#define float3x3 mat3\n#define float4x4 mat4\n#define ogre_float4x3 mat3x4\n\n#define ushort uint\n#define ushort3 uint3\n#define ushort4 uint4\n\n//Short used for read operations. It\'s an int in GLSL & HLSL. An ushort in Metal\n#define rshort int\n#define rshort2 int2\n#define rint int\n//Short used for write operations. It\'s an int in GLSL. An ushort in HLSL & Metal\n#define wshort2 int2\n#define wshort3 int3\n\n#define toFloat3x3(x) mat3(x)\n#define buildFloat3x3(row0, row1, row2) mat3(row0, row1, row2)\n\n#define mul(x, y) ((x) * (y))\n#define saturate(x) clamp((x), 0.0, 1.0)\n#define lerp mix\n#define rsqrt inversesqrt\n#define INLINE\n#define NO_INTERPOLATION_PREFIX flat\n#define NO_INTERPOLATION_SUFFIX\n\n#define PARAMS_ARG_DECL\n#define PARAMS_ARG\n\n#define reversebits bitfieldReverse\n\n#define OGRE_Sample(tex, sampler, uv) texture(tex, uv)\n#define OGRE_SampleLevel(tex, sampler, uv, lod) textureLod(tex, uv, lod)\n#define OGRE_SampleArray2D(tex, sampler, uv, arrayIdx) texture(tex, vec3(uv, arrayIdx))\n#define OGRE_SampleArray2DLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec3(uv, arrayIdx), lod)\n#define OGRE_SampleArrayCubeLevel(tex, sampler, uv, arrayIdx, lod) textureLod(tex, vec4(uv, arrayIdx), lod)\n#define OGRE_SampleGrad(tex, sampler, uv, ddx, ddy) textureGrad(tex, uv, ddx, ddy)\n#define OGRE_SampleArray2DGrad(tex, sampler, uv, arrayIdx, ddx, ddy) textureGrad(tex, vec3(uv, arrayIdx), ddx, ddy)\n#define OGRE_ddx(val) dFdx(val)\n#define OGRE_ddy(val) dFdy(val)\n#define OGRE_Load2D(tex, iuv, lod) texelFetch(tex, iuv, lod)\n..." /* TRUNCATED STRING LITERAL */
                    ;
                    local_a8 = 0;
                    local_90 = 0xd0b;
                    String::parse_latin1((StrRange *)&local_a8);
                    iVar5 = RDShaderFile::parse_versions_from_text
                                      (pSVar7,(StrRange *)&local_a8,(CowData<char32_t> *)&local_a0,0
                                       ,0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    if (iVar5 != 0) {
                      local_98 = (char *)0x0;
                      String::parse_latin1((String *)&local_98,"Betsy alpha stitch shader");
                      RDShaderFile::print_errors(pSVar7);
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    }
                    pVVar2 = *(Vector **)(this + 0x218);
                    local_a0 = 0;
                    local_98 = "";
                    local_90 = 0;
                    String::parse_latin1((StrRange *)&local_a0);
                    local_a8 = 0;
                    RDShaderFile::get_spirv_stages((StringName *)&local_98);
                    uVar6 = RenderingDevice::shader_create_from_spirv(pVVar2,(String *)&local_98);
                    *(undefined8 *)(this + 0x288) = uVar6;
                    CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
                              ((CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)&local_90);
                    if ((StringName::configured != '\0') && (local_a8 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    if (*(long *)(this + 0x288) == 0) {
                      _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xda,
                                       "Condition \"cached_shaders[BETSY_SHADER_ALPHA_STITCH].compiled.is_null()\" is true."
                                       ,0,0);
                    }
                    else {
                      local_90 = 0;
                      uVar6 = RenderingDevice::compute_pipeline_create
                                        (*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x288)
                                         ,(StringName *)&local_98);
                      lVar3 = local_90;
                      *(undefined8 *)(this + 0x290) = uVar6;
                      if (local_90 != 0) {
                        LOCK();
                        plVar1 = (long *)(local_90 + -0x10);
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        pSVar7 = local_b0;
                        if (*plVar1 == 0) {
                          local_90 = 0;
                          Memory::free_static((void *)(lVar3 + -0x10),false);
                          pSVar7 = local_b0;
                        }
                      }
                      if (*(long *)(this + 0x290) == 0) {
                        _err_print_error("_init","modules/betsy/image_compress_betsy.cpp",0xdd,
                                         "Condition \"cached_shaders[BETSY_SHADER_ALPHA_STITCH].pipeline.is_null()\" is true."
                                         ,0,0);
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
    if (((pSVar7 != (String *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)pSVar7), cVar4 != '\0')) {
      (**(code **)(*(long *)pSVar7 + 0x140))(pSVar7);
      Memory::free_static(pSVar7,false);
    }
  }
LAB_00101644:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */

void __thiscall
Vector<RenderingDevice::Uniform>::push_back
          (Vector<RenderingDevice::Uniform> *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar2 = CowData<RenderingDevice::Uniform>::resize<false>
                    ((CowData<RenderingDevice::Uniform> *)(this + 8),lVar3);
  if (iVar2 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar4 = lVar3 + -1;
      if (-1 < lVar4) {
        CowData<RenderingDevice::Uniform>::_copy_on_write
                  ((CowData<RenderingDevice::Uniform> *)(this + 8));
        puVar1 = (undefined8 *)(*(long *)(this + 8) + lVar4 * 0x28);
        *puVar1 = *param_2;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
        puVar1[2] = param_2[2];
        if (puVar1[4] == param_2[4]) {
          return;
        }
        CowData<RID>::_ref((CowData<RID> *)(puVar1 + 4),(CowData *)(param_2 + 4));
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar3,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BetsyCompressor::_compress(BetsyFormat, Image*) */

undefined4 __thiscall
BetsyCompressor::_compress(BetsyCompressor *this,uint param_2,undefined8 param_3)

{
  CowData<unsigned_char> *this_00;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  size_t sVar26;
  ulong uVar27;
  int iVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined8 *puVar31;
  size_t sVar32;
  int iVar33;
  int iVar34;
  long in_FS_OFFSET;
  bool bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint local_324;
  uint local_2fc;
  uint local_2e0;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  long local_1f8;
  size_t local_1f0;
  undefined1 local_1e8 [8];
  long local_1e0 [2];
  long local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulong local_1b0;
  long local_1a8;
  Vector<RID> local_1a0 [8];
  long local_198 [2];
  undefined8 local_188;
  undefined8 *puStack_180;
  undefined8 local_178;
  undefined8 local_168 [2];
  undefined4 local_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  long local_128;
  undefined2 local_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  long local_e8;
  undefined2 local_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  long local_a8;
  undefined2 local_a0;
  undefined4 local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_68;
  undefined2 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  long local_40;
  
  bVar36 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  OS::get_singleton();
  lVar13 = OS::get_ticks_msec();
  if (*(long *)(this + 0x218) == 0) {
    uVar12 = 0x14;
    goto LAB_001025ae;
  }
  cVar5 = Image::is_compressed();
  uVar12 = 0x1e;
  if (cVar5 != '\0') goto LAB_001025ae;
  uVar7 = Image::get_width();
  uVar8 = Image::get_height();
  local_2fc = uVar7;
  local_2e0 = uVar8;
  if (((uVar7 | uVar8) & 3) != 0) {
    local_2fc = uVar7 + 3 & 0xfffffffc;
    if ((int)uVar7 < 3) {
      local_2fc = uVar7;
    }
    local_2e0 = uVar8 + 3 & 0xfffffffc;
    if ((int)uVar8 < 3) {
      local_2e0 = uVar8;
    }
  }
  lVar14 = (long)(int)param_2;
  local_250 = 0;
  local_248 = 0;
  uVar7 = *(uint *)(BETSY_TO_IMAGE_FORMAT + lVar14 * 4);
  local_240 = 0;
  uVar12 = *(undefined4 *)(BETSY_TO_RD_FORMAT + lVar14 * 4);
  uVar8 = *(uint *)(FORMAT_TO_TYPE + lVar14 * 4);
  local_238 = 0;
  uVar2 = *(undefined8 *)(this + ((long)(int)uVar8 + 0x22) * 0x10 + 8);
  uVar3 = *(undefined8 *)(this + ((long)(int)uVar8 + 0x22) * 0x10 + 0x10);
  bVar35 = (param_2 & 0xfffffffb) == 2;
  if (bVar35) {
    local_250 = *(undefined8 *)(this + 600);
    local_248 = *(undefined8 *)(this + 0x260);
    local_240 = *(undefined8 *)(this + 0x288);
    local_238 = *(undefined8 *)(this + 0x290);
  }
  local_128 = 0;
  local_120 = 0;
  local_138 = 0x141;
  local_158 = (undefined4)__LC116;
  iStack_154 = (int)((ulong)__LC116 >> 0x20);
  iStack_150 = (int)_LC39;
  uStack_14c = (undefined4)((ulong)_LC39 >> 0x20);
  local_148 = __LC117;
  uStack_140 = _LC120;
  uVar9 = Image::get_format();
  switch(uVar9) {
  case 0:
  case 1:
  case 4:
    Image::convert(param_3,5);
  case 5:
    local_158 = 0x24;
    break;
  case 2:
    local_158 = 8;
    break;
  case 3:
    local_158 = 0xf;
    break;
  default:
    uVar12 = 2;
    goto LAB_001036f0;
  case 8:
    local_158 = 99;
    break;
  case 9:
    local_158 = 0x66;
    break;
  case 10:
    Image::convert(param_3,0xb);
  case 0xb:
    local_158 = 0x6c;
    break;
  case 0xc:
    local_158 = 0x4b;
    break;
  case 0xd:
    local_158 = 0x52;
    break;
  case 0xe:
    Image::convert(param_3,0xf);
  case 0xf:
    local_158 = 0x60;
    break;
  case 0x10:
    local_158 = 0x7a;
  }
  local_e8 = 0;
  uStack_100 = uStack_140;
  local_108 = local_148;
  local_f8 = local_138;
  iStack_114 = iStack_154;
  iStack_110 = iStack_150;
  uStack_10c = uStack_14c;
  if (local_128 != 0) {
    local_118 = local_158;
    CowData<RenderingDeviceCommons::DataFormat>::_ref
              ((CowData<RenderingDeviceCommons::DataFormat> *)&local_e8,(CowData *)&local_128);
  }
  local_f8 = 0x1ca;
  local_e0 = local_120;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_d8 = (undefined4)__LC116;
  iStack_d4 = (int)((ulong)__LC116 >> 0x20);
  iStack_d0 = (int)_LC39;
  uStack_cc = (undefined4)((ulong)_LC39 >> 0x20);
  local_c8 = __LC117;
  uStack_c0 = _LC120;
  local_88 = __LC117;
  uStack_80 = _LC120;
  local_118 = uVar12;
  local_98 = local_d8;
  iStack_94 = iStack_d4;
  iStack_90 = iStack_d0;
  uStack_8c = uStack_cc;
  if (bVar35) {
    local_78 = 0x1ca;
    iStack_94 = iStack_114;
    iStack_90 = iStack_110;
    uStack_8c = uStack_10c;
    local_88 = local_108;
    uStack_80 = uStack_100;
    if (local_e8 == 0) {
      local_98 = 0x6a;
      local_f8 = 0x1cb;
      local_b8 = 0x1cb;
      iStack_d4 = iStack_114;
      iStack_d0 = iStack_110;
      uStack_cc = uStack_10c;
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_60 = local_120;
    }
    else {
      local_98 = uVar12;
      CowData<RenderingDeviceCommons::DataFormat>::_ref
                ((CowData<RenderingDeviceCommons::DataFormat> *)&local_68,(CowData *)&local_e8);
      local_98 = 0x6a;
      local_f8 = local_f8 | 1;
      local_60 = local_e0;
      local_d8 = local_118;
      iStack_d4 = iStack_114;
      iStack_d0 = iStack_110;
      uStack_cc = uStack_10c;
      local_c8 = local_108;
      uStack_c0 = uStack_100;
      local_b8 = local_f8;
      if (local_a8 != local_e8) {
        CowData<RenderingDeviceCommons::DataFormat>::_ref
                  ((CowData<RenderingDeviceCommons::DataFormat> *)&local_a8,(CowData *)&local_e8);
      }
    }
    local_d8 = 100;
    local_a0 = local_e0;
  }
  if (((uVar7 & 0xfffffffd) == 0x11) && (*(long *)(this + 0x2a0) == 0)) {
    puStack_180 = (undefined8 *)0x0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&puStack_180,0x1000);
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&puStack_180);
    *puStack_180 = dxt1_encoding_table;
    puStack_180[0x1ff] = DAT_00119638;
    lVar14 = (long)puStack_180 - (long)((ulong)(puStack_180 + 1) & 0xfffffffffffffff8);
    puVar29 = (undefined8 *)((long)&dxt1_encoding_table - lVar14);
    puVar31 = (undefined8 *)((ulong)(puStack_180 + 1) & 0xfffffffffffffff8);
    for (uVar24 = (ulong)((int)lVar14 + 0x1000U >> 3); uVar24 != 0; uVar24 = uVar24 - 1) {
      *puVar31 = *puVar29;
      puVar29 = puVar29 + (ulong)bVar36 * -2 + 1;
      puVar31 = puVar31 + (ulong)bVar36 * -2 + 1;
    }
    uVar18 = RenderingDevice::storage_buffer_create(*(undefined8 *)(this + 0x218),0x1000,&local_188)
    ;
    *(undefined8 *)(this + 0x2a0) = uVar18;
    CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&puStack_180);
  }
  iVar10 = Image::get_mipmap_count();
  local_1e0[0] = 0;
  uVar6 = Image::has_mipmaps();
  lVar14 = Image::get_image_data_size(local_2fc,local_2e0,uVar7,uVar6);
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)local_1e0,lVar14);
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)local_1e0);
  lVar14 = local_1e0[0];
  local_1d0 = 0;
  puStack_180 = (undefined8 *)0x0;
  iVar11 = CowData<Vector<unsigned_char>>::resize<false>
                     ((CowData<Vector<unsigned_char>> *)&local_1d0,1);
  if (iVar11 == 0) {
    if (local_1d0 == 0) {
      lVar25 = -1;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(local_1d0 + -8);
      lVar25 = lVar15 + -1;
      if (-1 < lVar25) {
        CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>> *)&local_1d0)
        ;
        lVar15 = lVar25 * 0x10 + local_1d0;
        if (*(long *)(lVar15 + 8) != 0) {
          CowData<unsigned_char>::_ref
                    ((CowData<unsigned_char> *)(lVar15 + 8),(CowData *)&puStack_180);
        }
        goto LAB_0010289d;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar25,lVar15,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010289d:
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&puStack_180);
  CowData<Vector<unsigned_char>>::_copy_on_write((CowData<Vector<unsigned_char>> *)&local_1d0);
  lVar15 = local_1d0;
  uVar24 = _LC123;
  if (-1 < iVar10) {
    local_324 = 0;
    this_00 = (CowData<unsigned_char> *)(local_1d0 + 8);
    do {
      Image::get_image_mipmap_offset_and_dimensions
                (local_2fc,local_2e0,uVar7,local_324,&local_208,&local_204);
      Image::get_mipmap_offset_size_and_dimensions
                ((int)param_3,(long *)(ulong)local_324,&local_1f8,(int *)&local_1f0,&local_200);
      iStack_154 = local_208;
      iStack_150 = local_204;
      iStack_114 = local_208 + (int)_LC118 >> 2;
      iStack_110 = local_204 + _LC118._4_4_ >> 2;
      if ((local_208 == local_200) && (local_204 == local_1fc)) {
        CowData<unsigned_char>::resize<false>(this_00,local_1f0);
        sVar32 = local_1f0;
        lVar25 = Image::ptr();
        pvVar20 = (void *)(lVar25 + local_1f8);
        CowData<unsigned_char>::_copy_on_write(this_00);
        memcpy(*(void **)(lVar15 + 8),pvVar20,sVar32);
      }
      else {
        lVar16 = Image::ptr();
        lVar4 = local_1f8;
        uVar12 = Image::get_format();
        iVar11 = Image::get_format_pixel_size(uVar12);
        sVar32 = (size_t)iVar11;
        CowData<unsigned_char>::resize<false>(this_00,(long)(local_208 * local_204 * iVar11));
        iVar34 = 0;
        CowData<unsigned_char>::_copy_on_write(this_00);
        lVar25 = *(long *)(lVar15 + 8);
        if (0 < local_1fc) {
          iVar34 = 0;
          sVar26 = sVar32;
          do {
            iVar33 = 0;
            uVar27 = sVar26;
            if (0 < local_200) {
              uVar27 = sVar26 & 0xffffffff;
              do {
                iVar11 = local_200 * iVar34 + iVar33;
                iVar30 = local_208 * iVar34 + iVar33;
                iVar33 = iVar33 + 1;
                memcpy((void *)(iVar30 * (int)sVar26 + lVar25),
                       (void *)(iVar11 * (int)sVar26 + lVar4 + lVar16),sVar32);
              } while (iVar33 < local_200);
            }
            iVar11 = (int)uVar27;
            if (iVar33 < local_208) {
              do {
                iVar30 = iVar33 + -1;
                iVar33 = iVar33 + 1;
                iVar30 = (iVar30 + local_208 * iVar34) * iVar11;
                memcpy((void *)((iVar30 + iVar11) + lVar25),(void *)(iVar30 + lVar25),sVar32);
              } while (iVar33 < local_208);
            }
            iVar34 = iVar34 + 1;
            sVar26 = uVar27;
          } while (iVar34 < local_1fc);
        }
        iVar33 = local_208;
        if (iVar34 < local_204) {
          do {
            iVar30 = 0;
            if (0 < iVar33) {
              do {
                iVar28 = iVar33 * iVar34 + iVar30;
                iVar30 = iVar30 + 1;
                memcpy((void *)(iVar28 * iVar11 + lVar25),
                       (void *)((iVar28 - iVar33) * iVar11 + lVar25),(long)iVar11);
                iVar33 = local_208;
              } while (iVar30 < local_208);
            }
            iVar34 = iVar34 + 1;
          } while (iVar34 < local_204);
        }
      }
      local_178._0_4_ = 6;
      local_188 = __LC119;
      puStack_180 = (undefined8 *)_UNK_00123398;
      uVar17 = RenderingDevice::texture_create
                         (*(TextureFormat **)(this + 0x218),(TextureView *)&local_158,
                          (Vector *)&local_188);
      local_1b0 = 0;
      local_188 = __LC119;
      puStack_180 = (undefined8 *)_UNK_00123398;
      local_178 = CONCAT44(local_178._4_4_,6);
      uVar18 = RenderingDevice::texture_create
                         (*(TextureFormat **)(this + 0x218),(TextureView *)&local_118,
                          (Vector *)&local_188);
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1b0);
      local_1a8 = *(long *)(this + 0x298);
      local_1c0 = 0;
      local_1b0 = local_1b0 & 0xffffffffffffff00;
      local_198[0] = 0;
      local_1b8 = _LC120;
      if (local_1a8 == 0) {
        local_188 = _LC120;
        puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
        local_168[0] = 0;
        local_1a8 = uVar17;
        local_178 = uVar17;
      }
      else {
        Vector<RID>::push_back(local_1a0);
        Vector<RID>::push_back(local_1a0,uVar17);
        local_188 = local_1b8;
        local_1a8 = 0;
        local_178 = 0;
        local_168[0] = 0;
        puStack_180 = (undefined8 *)CONCAT71(puStack_180._1_7_,local_1b0._0_1_);
        if (local_198[0] != 0) {
          CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
        }
      }
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
      CowData<RID>::_unref((CowData<RID> *)local_168);
      CowData<RID>::_unref((CowData<RID> *)local_198);
      local_1b0 = local_1b0 & 0xffffffffffffff00;
      local_1b8 = _LC121;
      local_188 = _LC121;
      local_198[0] = 0;
      puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
      local_168[0] = 0;
      local_1a8 = uVar18;
      local_178 = uVar18;
      Vector<RenderingDevice::Uniform>::push_back
                ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
      CowData<RID>::_unref((CowData<RID> *)local_168);
      CowData<RID>::_unref((CowData<RID> *)local_198);
      if ((uVar7 & 0xfffffffd) == 0x11) {
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_198[0] = 0;
        local_1b8 = _LC122;
        local_1a8 = *(long *)(this + 0x2a0);
        local_188 = _LC122;
        puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
        local_168[0] = 0;
        local_178 = local_1a8;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
      }
      uVar19 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                         (*(undefined8 *)(this + 0x218),
                          (Vector<RenderingDevice::Uniform> *)&local_1c8,uVar2,0,0);
      pvVar20 = (void *)RenderingDevice::compute_list_begin();
      RenderingDevice::compute_list_bind_compute_pipeline
                (*(undefined8 *)(this + 0x218),pvVar20,uVar3);
      RenderingDevice::compute_list_bind_uniform_set(*(undefined8 *)(this + 0x218),pvVar20,uVar19,0)
      ;
      if (uVar8 == 3) {
        uStack_54 = 0;
        uStack_50 = 0;
        local_4c = 0;
        local_58 = 0;
        RenderingDevice::compute_list_set_push_constant
                  (*(long *)(this + 0x218),pvVar20,(uint)&local_58);
        iVar34 = (0x10 - local_208 % 0x10) + local_208;
        iVar11 = iVar34 + 0xf;
        if (-1 < iVar34) {
          iVar11 = iVar34;
        }
        RenderingDevice::compute_list_dispatch(*(long *)(this + 0x218),(uint)pvVar20,1,iVar11 >> 4);
      }
      else if (uVar8 < 4) {
        if (uVar8 == 0) {
          uStack_54 = 0;
          local_58 = 2;
LAB_00102eb5:
          local_4c = 0;
          uStack_50 = 0;
          RenderingDevice::compute_list_set_push_constant
                    (*(long *)(this + 0x218),pvVar20,(uint)&local_58);
          iVar34 = (0x20 - local_204 % 0x20) + local_204;
          iVar11 = iVar34 + 0x1f;
          if (-1 < iVar34) {
            iVar11 = iVar34;
          }
          iVar33 = (0x20 - local_208 % 0x20) + local_208;
          iVar34 = iVar33 + 0x1f;
          if (-1 < iVar33) {
            iVar34 = iVar33;
          }
          RenderingDevice::compute_list_dispatch
                    (*(long *)(this + 0x218),(uint)pvVar20,iVar34 >> 5,iVar11 >> 5);
        }
      }
      else if (uVar8 - 4 < 2) {
        auVar37._8_8_ = 0;
        auVar37._0_8_ = uVar24;
        auVar38._0_4_ = (float)local_208;
        auVar38._4_4_ = (float)local_204;
        auVar38._8_8_ = uVar24;
        auVar38 = divps(auVar37,auVar38);
        local_58 = auVar38._0_4_;
        uStack_54 = auVar38._4_4_;
        goto LAB_00102eb5;
      }
      RenderingDevice::compute_list_end();
      if (bVar35) {
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_1c0);
        local_1b0 = 0;
        local_178 = CONCAT44(local_178._4_4_,6);
        local_188 = __LC119;
        puStack_180 = (undefined8 *)_UNK_00123398;
        iStack_d4 = local_208 + (int)_LC118 >> 2;
        iStack_d0 = local_204 + _LC118._4_4_ >> 2;
        uVar19 = RenderingDevice::texture_create
                           (*(TextureFormat **)(this + 0x218),(TextureView *)&local_d8,
                            (Vector *)&local_188);
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1b0);
        local_1a8 = *(long *)(this + 0x298);
        local_1c0 = 0;
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_198[0] = 0;
        local_1b8 = _LC120;
        if (local_1a8 == 0) {
          local_188 = _LC120;
          puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
          local_168[0] = 0;
          local_1a8 = uVar17;
          local_178 = uVar17;
        }
        else {
          Vector<RID>::push_back(local_1a0);
          Vector<RID>::push_back(local_1a0,uVar17);
          local_188 = local_1b8;
          local_1a8 = 0;
          local_178 = 0;
          local_168[0] = 0;
          puStack_180 = (undefined8 *)CONCAT71(puStack_180._1_7_,local_1b0._0_1_);
          if (local_198[0] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
          }
        }
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_198[0] = 0;
        local_1b8 = _LC121;
        local_188 = _LC121;
        puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
        local_168[0] = 0;
        local_1a8 = uVar19;
        local_178 = uVar19;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
        uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (*(undefined8 *)(this + 0x218),
                            (Vector<RenderingDevice::Uniform> *)&local_1c8,local_250,0,0);
        pvVar20 = (void *)RenderingDevice::compute_list_begin();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (*(undefined8 *)(this + 0x218),pvVar20,local_248);
        RenderingDevice::compute_list_bind_uniform_set
                  (*(undefined8 *)(this + 0x218),pvVar20,uVar21,0);
        uStack_54 = 0;
        uStack_50 = 0;
        local_4c = 0;
        local_58 = (uVar7 == 0x13) + 1 + (uint)(uVar7 == 0x13);
        RenderingDevice::compute_list_set_push_constant
                  (*(long *)(this + 0x218),pvVar20,(uint)&local_58);
        iVar34 = (0x10 - local_208 % 0x10) + local_208;
        iVar11 = iVar34 + 0xf;
        if (-1 < iVar34) {
          iVar11 = iVar34;
        }
        RenderingDevice::compute_list_dispatch(*(long *)(this + 0x218),(uint)pvVar20,1,iVar11 >> 4);
        RenderingDevice::compute_list_end();
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_1c0);
        local_1b0 = 0;
        local_178 = CONCAT44(local_178._4_4_,6);
        local_188 = __LC119;
        puStack_180 = (undefined8 *)_UNK_00123398;
        iStack_94 = local_208 + (int)_LC118 >> 2;
        iStack_90 = local_204 + _LC118._4_4_ >> 2;
        uVar22 = RenderingDevice::texture_create
                           (*(TextureFormat **)(this + 0x218),(TextureView *)&local_98,
                            (Vector *)&local_188);
        CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1b0);
        local_1a8 = *(long *)(this + 0x298);
        local_1c0 = 0;
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_198[0] = 0;
        uVar21 = uVar19;
        if (uVar7 != 0x13) {
          uVar21 = uVar18;
        }
        local_1b8 = _LC120;
        if (local_1a8 == 0) {
          local_188 = _LC120;
          puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
          local_168[0] = 0;
          local_1a8 = uVar21;
          local_178 = uVar21;
        }
        else {
          Vector<RID>::push_back(local_1a0);
          Vector<RID>::push_back(local_1a0,uVar21);
          local_188 = local_1b8;
          local_1a8 = 0;
          local_178 = 0;
          local_168[0] = 0;
          puStack_180 = (undefined8 *)CONCAT71(puStack_180._1_7_,local_1b0._0_1_);
          if (local_198[0] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
          }
        }
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
        local_1a8 = *(long *)(this + 0x298);
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_198[0] = 0;
        local_1b8 = _LC39;
        uVar21 = uVar18;
        if (uVar7 != 0x13) {
          uVar21 = uVar19;
        }
        if (local_1a8 == 0) {
          local_188 = _LC39;
          puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
          local_168[0] = 0;
          local_1a8 = uVar21;
          local_178 = uVar21;
        }
        else {
          Vector<RID>::push_back(local_1a0);
          Vector<RID>::push_back(local_1a0,uVar21);
          local_188 = local_1b8;
          local_1a8 = 0;
          local_178 = 0;
          local_168[0] = 0;
          puStack_180 = (undefined8 *)CONCAT71(puStack_180._1_7_,local_1b0._0_1_);
          if (local_198[0] != 0) {
            CowData<RID>::_ref((CowData<RID> *)local_168,(CowData *)local_198);
          }
        }
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
        local_1b0 = local_1b0 & 0xffffffffffffff00;
        local_1b8 = _LC124;
        local_188 = _LC124;
        local_198[0] = 0;
        puStack_180 = (undefined8 *)((ulong)puStack_180 & 0xffffffffffffff00);
        local_168[0] = 0;
        local_1a8 = uVar22;
        local_178 = uVar22;
        Vector<RenderingDevice::Uniform>::push_back
                  ((Vector<RenderingDevice::Uniform> *)&local_1c8,(Vector *)&local_188);
        CowData<RID>::_unref((CowData<RID> *)local_168);
        CowData<RID>::_unref((CowData<RID> *)local_198);
        uVar21 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>
                           (*(undefined8 *)(this + 0x218),
                            (Vector<RenderingDevice::Uniform> *)&local_1c8,local_240,0,0);
        uVar23 = RenderingDevice::compute_list_begin();
        RenderingDevice::compute_list_bind_compute_pipeline
                  (*(undefined8 *)(this + 0x218),uVar23,local_238);
        RenderingDevice::compute_list_bind_uniform_set
                  (*(undefined8 *)(this + 0x218),uVar23,uVar21,0);
        iVar34 = (0x20 - local_204 % 0x20) + local_204;
        iVar11 = iVar34 + 0x1f;
        if (-1 < iVar34) {
          iVar11 = iVar34;
        }
        iVar33 = (0x20 - local_208 % 0x20) + local_208;
        iVar34 = iVar33 + 0x1f;
        if (-1 < iVar33) {
          iVar34 = iVar33;
        }
        RenderingDevice::compute_list_dispatch
                  (*(long *)(this + 0x218),(uint)uVar23,iVar34 >> 5,iVar11 >> 5);
        RenderingDevice::compute_list_end();
        RenderingDevice::submit();
        RenderingDevice::sync();
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_1c0);
        RenderingDevice::free(*(undefined8 *)(this + 0x218),uVar18);
        RenderingDevice::free(*(undefined8 *)(this + 0x218),uVar19);
        uVar18 = uVar22;
      }
      else {
        RenderingDevice::submit();
        RenderingDevice::sync();
        CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform> *)&local_1c0);
      }
      RenderingDevice::texture_get_data((Vector *)&local_188,*(undefined8 *)(this + 0x218),uVar18,0)
      ;
      lVar25 = Image::get_image_mipmap_offset(local_2fc,local_2e0,uVar7,local_324);
      if (puStack_180 == (undefined8 *)0x0) {
        sVar32 = 0;
      }
      else {
        sVar32 = puStack_180[-1];
      }
      memcpy((void *)(lVar14 + lVar25),puStack_180,sVar32);
      RenderingDevice::free(*(undefined8 *)(this + 0x218),uVar17);
      RenderingDevice::free(*(undefined8 *)(this + 0x218),uVar18);
      CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&puStack_180);
      local_324 = local_324 + 1;
    } while ((int)local_324 <= iVar10);
  }
  if ((local_1d0 != 0) && (*(long *)(local_1d0 + -8) != 0)) {
    CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1d0);
  }
  uVar6 = Image::has_mipmaps();
  Image::set_data(param_3,local_2fc,local_2e0,uVar6,uVar7,local_1e8);
  cVar5 = is_print_verbose_enabled();
  if (cVar5 != '\0') {
    OS::get_singleton();
    lVar14 = OS::get_ticks_msec();
    Image::get_format_name((CowData<char32_t> *)&local_1f0,uVar7);
    uVar12 = Image::get_mipmap_count();
    local_1c8 = 0;
    String::parse_latin1
              ((String *)&local_1c8,
               "Betsy: Encoding a %dx%d image with %d mipmaps as %s took %d ms.");
    vformat<int,int,int,String,unsigned_long>
              ((String *)&local_1b8,(String *)&local_1c8,local_2fc,local_2e0,uVar12,
               (CowData<char32_t> *)&local_1f0,lVar14 - lVar13);
    Variant::Variant((Variant *)&local_58,(String *)&local_1b8);
    stringify_variants((Variant *)&local_188);
    __print_line((String *)&local_188);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
    if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  }
  CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>> *)&local_1d0);
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)local_1e0);
  lVar13 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  lVar13 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
  uVar12 = 0;
LAB_001036f0:
  lVar13 = local_128;
  if (local_128 != 0) {
    LOCK();
    plVar1 = (long *)(local_128 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_128 = 0;
      Memory::free_static((void *)(lVar13 + -0x10),false);
    }
  }
LAB_001025ae:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
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



/* Object::_setv(StringName const&, Variant const&) */

undefined8 Object::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_getv(StringName const&, Variant&) const */

undefined8 Object::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Object::_get_property_listv(List *param_1,bool param_2)

{
  return;
}



/* Object::_validate_propertyv(PropertyInfo&) const */

void Object::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revertv(StringName const&) const */

undefined8 Object::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Object::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notificationv(int, bool) */

void Object::_notificationv(int param_1,bool param_2)

{
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



/* Object::is_class_ptr(void*) const */

undefined8 __thiscall Object::is_class_ptr(Object *this,void *param_1)

{
  return CONCAT71(0x1231,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* RDShaderFile::is_class_ptr(void*) const */

uint __thiscall RDShaderFile::is_class_ptr(RDShaderFile *this,void *param_1)

{
  return (uint)CONCAT71(0x1231,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1231,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1231,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1231,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RDShaderFile::_getv(StringName const&, Variant&) const */

undefined8 RDShaderFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_setv(StringName const&, Variant const&) */

undefined8 RDShaderFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_validate_propertyv(PropertyInfo&) const */

void RDShaderFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RDShaderFile::_property_can_revertv(StringName const&) const */

undefined8 RDShaderFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RDShaderFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RDShaderFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RDShaderFile::_notificationv(int, bool) */

void RDShaderFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),false>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),false> *this)

{
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),true>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),true> *this)

{
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<BetsyCompressor, Error (BetsyCompressor::*)(BetsyFormat, Image*),
   Error, BetsyFormat, Image*>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>::
~CommandRet(CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
            *this)

{
  return;
}



/* CallableCustomMethodPointer<BetsyCompressor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BetsyCompressor,void> *this)

{
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), false>::call() */

void CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),false>::call(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RSI;
  long in_RDI;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(in_RDI + 0x18);
  plVar1 = (long *)(*(long *)(in_RDI + 0x20) + *(long *)(in_RDI + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00104210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), true>::call() */

void CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),true>::call(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_RSI;
  long in_RDI;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(in_RDI + 0x18);
  plVar1 = (long *)(*(long *)(in_RDI + 0x20) + *(long *)(in_RDI + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00104240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(long), false, long&>::call()
    */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&>::call
          (Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00104274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<BetsyCompressor, Error (BetsyCompressor::*)(BetsyFormat, Image*),
   Error, BetsyFormat, Image*>::call() */

void __thiscall
CommandQueueMT::
CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>::
call(CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
     *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined4 *)(this + 0x38),*(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1)

{
  return 0x1b;
}



/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Dictionary const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Dictionary_const&>::_gen_argument_type(MethodBindT<Dictionary_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1b;
}



/* MethodBindT<Dictionary const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Dictionary_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<StringName>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<StringName>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<StringName>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<StringName>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::_gen_argument_type
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffffd) + 0x18;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::_gen_argument_type
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 0x15;
  }
  return cVar1;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<BetsyCompressor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::get_argument_count
          (CallableCustomMethodPointer<BetsyCompressor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),true>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),true> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),false>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),false> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::CommandRet<BetsyCompressor, Error (BetsyCompressor::*)(BetsyFormat, Image*),
   Error, BetsyFormat, Image*>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>::
~CommandRet(CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
            *this)

{
  operator_delete(this,0x40);
  return;
}



/* CallableCustomMethodPointer<BetsyCompressor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BetsyCompressor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122df0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122df0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122e50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122e50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122eb0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122eb0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f10;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f10;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f70;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122f70;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122fd0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00122fd0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123030;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00123030;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* BetsyCompressor::~BetsyCompressor() */

void __thiscall BetsyCompressor::~BetsyCompressor(BetsyCompressor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00122c00;
  CommandQueueMT::~CommandQueueMT((CommandQueueMT *)(this + 0x178));
  Object::~Object((Object *)this);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap
               (long param_1,long param_2,long param_3,StringName *param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  StringName *pSVar13;
  StringName *this;
  long lVar14;
  long in_FS_OFFSET;
  StringName *local_50;
  long local_48;
  long local_40;
  
  lVar11 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = param_2;
  if (lVar11 < param_3) {
    do {
      lVar9 = lVar11 + -1;
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      pSVar13 = (StringName *)(param_5 + (param_1 + lVar11) * 8);
      lVar6 = *(long *)this;
      lVar5 = *(long *)pSVar13;
      if (lVar5 == 0) {
        if (lVar6 != 0) {
          pbVar10 = *(byte **)(lVar6 + 8);
          uVar8 = 0;
          pbVar12 = &_LC0;
LAB_001047cc:
          if (pbVar10 == (byte *)0x0) {
            lVar5 = 0;
            uVar3 = **(uint **)(lVar6 + 0x10);
            if (uVar3 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00104780;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00104780;
                if (uVar3 < uVar8) break;
                uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                uVar3 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
                lVar5 = lVar5 + 1;
              } while (uVar8 != 0 || uVar3 != 0);
            }
          }
          else {
            uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
LAB_0010481e:
            if (bVar4 != 0) {
              lVar6 = 1;
              do {
                if (uVar8 == 0) goto LAB_00104780;
                if (uVar3 == 0) break;
                if (uVar8 < uVar3) goto LAB_00104780;
                if (uVar3 < uVar8) break;
                pbVar1 = pbVar12 + lVar6;
                uVar8 = (uint)(char)*pbVar1;
                pbVar2 = pbVar10 + lVar6;
                uVar3 = (uint)(char)*pbVar2;
                lVar6 = lVar6 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar5 + 8);
        if (lVar6 == 0) {
          if (pbVar12 != (byte *)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_0010481e;
          }
          uVar8 = 0;
          pbVar10 = &_LC0;
        }
        else {
          pbVar10 = *(byte **)(lVar6 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar12;
            goto LAB_001047cc;
          }
          if (pbVar10 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar6 + 0x10);
            uVar3 = **(uint **)(lVar5 + 0x10);
            if (uVar8 != 0 || uVar3 != 0) {
              do {
                if (uVar3 == 0) goto LAB_00104780;
                if (uVar8 == 0) break;
                if (uVar3 < uVar8) goto LAB_00104780;
                if (uVar8 < uVar3) break;
                uVar3 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar3 != 0 || uVar8 != 0);
            }
            goto LAB_001047a8;
          }
          uVar8 = (uint)(char)*pbVar10;
        }
        lVar6 = 0;
        uVar3 = **(uint **)(lVar5 + 0x10);
        if (uVar3 != 0 || uVar8 != 0) {
          do {
            if (uVar3 == 0) goto LAB_00104780;
            if (uVar8 == 0) break;
            if (uVar3 < uVar8) goto LAB_00104780;
            if (uVar8 < uVar3) break;
            uVar3 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
          } while (uVar3 != 0 || uVar8 != 0);
        }
      }
LAB_001047a8:
      lVar9 = lVar11;
      this = pSVar13;
      lVar11 = lVar11 + 1;
LAB_00104780:
      lVar11 = lVar11 * 2;
      StringName::operator=((StringName *)(param_5 + (lVar14 + param_1) * 8),this);
      lVar14 = lVar9;
    } while (lVar11 < param_3);
    pSVar13 = this;
    if (lVar11 == param_3) goto LAB_00104be8;
  }
  else {
    this = (StringName *)(param_5 + (param_2 + param_1) * 8);
    if (lVar11 != param_3) {
      StringName::StringName((StringName *)&local_48,param_4);
      goto LAB_001049c2;
    }
LAB_00104be8:
    lVar9 = lVar11 + -1;
    pSVar13 = (StringName *)(param_5 + (param_1 + lVar9) * 8);
    StringName::operator=(this,pSVar13);
  }
  StringName::StringName((StringName *)&local_48,param_4);
  lVar11 = (lVar9 + -1) - (lVar9 + -1 >> 0x3f);
  this = pSVar13;
  while (param_2 < lVar9) {
    lVar14 = lVar11 >> 1;
    this = (StringName *)(param_5 + (param_1 + lVar14) * 8);
    lVar11 = *(long *)this;
    if (lVar11 == 0) {
      if (local_48 != 0) {
        pbVar10 = *(byte **)(local_48 + 8);
        uVar3 = 0;
        uVar8 = 0;
        pbVar12 = &_LC0;
        if (pbVar10 != (byte *)0x0) goto LAB_00104a83;
LAB_00104a25:
        uVar8 = **(uint **)(local_48 + 0x10);
        if (uVar8 != 0 || uVar3 != 0) {
          lVar11 = 0;
          while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_001049b8;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_001049b8;
            uVar3 = (uint)(char)pbVar12[lVar11 + 1];
            uVar8 = (*(uint **)(local_48 + 0x10))[lVar11 + 1];
            lVar11 = lVar11 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_001049b8;
          }
          goto LAB_00104980;
        }
      }
LAB_001049b8:
      this = (StringName *)(param_5 + (lVar9 + param_1) * 8);
      break;
    }
    pbVar12 = *(byte **)(lVar11 + 8);
    if (local_48 == 0) {
      uVar8 = 0;
      pbVar10 = &_LC0;
      if (pbVar12 != (byte *)0x0) {
        bVar4 = *pbVar12;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar3 = 0;
        goto LAB_00104a89;
      }
LAB_00104aea:
      uVar3 = **(uint **)(lVar11 + 0x10);
      if (uVar3 == 0 && uVar8 == 0) goto LAB_001049b8;
      lVar6 = 0;
      while (uVar3 != 0) {
        if (uVar8 == 0) goto LAB_001049b8;
        if (uVar3 < uVar8) break;
        if (uVar8 < uVar3) goto LAB_001049b8;
        uVar3 = (*(uint **)(lVar11 + 0x10))[lVar6 + 1];
        uVar8 = (uint)(char)pbVar10[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar3 == 0 && uVar8 == 0) goto LAB_001049b8;
      }
    }
    else {
      pbVar10 = *(byte **)(local_48 + 8);
      if (pbVar12 == (byte *)0x0) {
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00104aea;
        }
        uVar8 = **(uint **)(local_48 + 0x10);
        uVar3 = **(uint **)(lVar11 + 0x10);
        if (uVar8 == 0 && uVar3 == 0) goto LAB_001049b8;
        lVar6 = 4;
        while (uVar3 != 0) {
          if (uVar8 == 0) goto LAB_001049b8;
          if (uVar3 < uVar8) break;
          if (uVar8 < uVar3) goto LAB_001049b8;
          uVar3 = *(uint *)((long)*(uint **)(lVar11 + 0x10) + lVar6);
          uVar8 = *(uint *)((long)*(uint **)(local_48 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar3 == 0 && uVar8 == 0) {
            this = (StringName *)(param_5 + (param_1 + lVar9) * 8);
            goto LAB_001049c2;
          }
        }
      }
      else {
        uVar3 = (uint)(char)*pbVar12;
        uVar8 = uVar3;
        if (pbVar10 == (byte *)0x0) goto LAB_00104a25;
LAB_00104a83:
        uVar3 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_00104a89:
        if (bVar4 == 0) goto LAB_001049b8;
        lVar11 = 1;
        while (uVar8 != 0) {
          if (uVar3 == 0) goto LAB_001049b8;
          if (uVar8 < uVar3) break;
          if (uVar3 < uVar8) goto LAB_001049b8;
          pbVar1 = pbVar12 + lVar11;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar11;
          uVar3 = (uint)(char)*pbVar2;
          lVar11 = lVar11 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001049b8;
        }
      }
    }
LAB_00104980:
    StringName::operator=((StringName *)(param_5 + (lVar9 + param_1) * 8),this);
    lVar11 = (lVar14 + -1) - (lVar14 + -1 >> 0x3f);
    lVar9 = lVar14;
  }
LAB_001049c2:
  local_50 = (StringName *)&local_48;
  StringName::operator=(this,local_50);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
               (long param_1,StringName *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  StringName *pSVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  pSVar3 = (StringName *)(param_3 + -8 + param_1 * 8);
  lVar6 = *(long *)pSVar3;
  lVar5 = *(long *)param_2;
  do {
    if (lVar5 == 0) {
      if (lVar6 == 0) goto LAB_00104e8b;
      pbVar10 = *(byte **)(lVar6 + 8);
      uVar8 = 0;
      pbVar11 = &_LC0;
LAB_00104d91:
      if (pbVar10 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_00104e8b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_00104e8b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_00104e8b;
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar9 == 0) goto LAB_00104e8b;
        }
      }
      else {
        uVar9 = (uint)(char)*pbVar10;
        bVar4 = (byte)uVar8 | *pbVar10;
LAB_00104dee:
        if (bVar4 == 0) goto LAB_00104e8b;
        lVar6 = 1;
        while (uVar8 != 0) {
          if (uVar9 == 0) goto LAB_00104e8b;
          if (uVar8 < uVar9) break;
          if (uVar9 < uVar8) goto LAB_00104e8b;
          pbVar1 = pbVar11 + lVar6;
          uVar8 = (uint)(char)*pbVar1;
          pbVar2 = pbVar10 + lVar6;
          uVar9 = (uint)(char)*pbVar2;
          lVar6 = lVar6 + 1;
          if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00104e8b;
        }
      }
    }
    else {
      pbVar11 = *(byte **)(lVar5 + 8);
      if (lVar6 == 0) {
        if (pbVar11 != (byte *)0x0) {
          bVar4 = *pbVar11;
          uVar8 = (uint)(char)bVar4;
          pbVar10 = &_LC0;
          uVar9 = 0;
          goto LAB_00104dee;
        }
        uVar8 = 0;
        pbVar10 = &_LC0;
LAB_00104d07:
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar9 == 0 && uVar8 == 0) goto LAB_00104e8b;
        lVar6 = 0;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_00104e8b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_00104e8b;
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar10[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_00104e8b;
        }
      }
      else {
        pbVar10 = *(byte **)(lVar6 + 8);
        if (pbVar11 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar11;
          goto LAB_00104d91;
        }
        if (pbVar10 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar10;
          goto LAB_00104d07;
        }
        uVar8 = **(uint **)(lVar6 + 0x10);
        uVar9 = **(uint **)(lVar5 + 0x10);
        if (uVar8 == 0 && uVar9 == 0) goto LAB_00104e8b;
        lVar7 = 4;
        while (uVar9 != 0) {
          if (uVar8 == 0) goto LAB_00104e8b;
          if (uVar9 < uVar8) break;
          if (uVar8 < uVar9) goto LAB_00104e8b;
          uVar9 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
          uVar8 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
          lVar7 = lVar7 + 4;
          if (uVar9 == 0 && uVar8 == 0) goto LAB_00104e8b;
        }
      }
    }
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      param_1 = 1;
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_00104e8b:
      StringName::operator=((StringName *)(param_3 + param_1 * 8),param_2);
      return;
    }
    StringName::operator=(pSVar3 + 8,pSVar3);
    lVar5 = *(long *)param_2;
    lVar6 = *(long *)(pSVar3 + -8);
    pSVar3 = pSVar3 + -8;
  } while( true );
}



/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::linear_insert
               (long param_1,long param_2,StringName *param_3)

{
  StringName *this;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  StringName *this_00;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this = param_3 + param_1 * 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_3 + param_2 * 8);
  if (local_50 == 0) {
    lVar4 = *(long *)this;
    if (lVar4 != 0) {
      pbVar8 = *(byte **)(lVar4 + 8);
      uVar6 = 0;
      pbVar9 = &_LC0;
LAB_00105068:
      if (pbVar8 == (byte *)0x0) {
        uVar7 = **(uint **)(lVar4 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 0;
          do {
            if (uVar6 == 0) goto LAB_00104fc0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00104fc0;
            if (uVar7 < uVar6) break;
            uVar6 = (uint)(char)pbVar9[lVar5 + 1];
            uVar7 = (*(uint **)(lVar4 + 0x10))[lVar5 + 1];
            lVar5 = lVar5 + 1;
          } while (uVar6 != 0 || uVar7 != 0);
        }
      }
      else {
        uVar7 = (uint)(char)*pbVar8;
        bVar3 = *pbVar8 | (byte)uVar6;
LAB_00105110:
        if (bVar3 != 0) {
          lVar4 = 1;
          do {
            if (uVar6 == 0) goto LAB_00104fc0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00104fc0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar9 + lVar4;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar8 + lVar4;
            uVar7 = (uint)(char)*pbVar2;
            lVar4 = lVar4 + 1;
          } while (*pbVar1 != 0 || *pbVar2 != 0);
        }
      }
    }
  }
  else {
    lVar4 = *(long *)this;
    pbVar9 = *(byte **)(local_50 + 8);
    if (lVar4 == 0) {
      if (pbVar9 != (byte *)0x0) {
        bVar3 = *pbVar9;
        uVar6 = (uint)(char)bVar3;
        pbVar8 = &_LC0;
        uVar7 = 0;
        goto LAB_00105110;
      }
      uVar6 = 0;
      pbVar8 = &_LC0;
    }
    else {
      pbVar8 = *(byte **)(lVar4 + 8);
      if (pbVar9 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar9;
        goto LAB_00105068;
      }
      if (pbVar8 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar4 + 0x10);
        uVar7 = **(uint **)(local_50 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar5 = 4;
          do {
            if (uVar7 == 0) goto LAB_00104fc0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00104fc0;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(local_50 + 0x10) + lVar5);
            uVar6 = *(uint *)((long)*(uint **)(lVar4 + 0x10) + lVar5);
            lVar5 = lVar5 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_001050b8;
      }
      uVar6 = (uint)(char)*pbVar8;
    }
    uVar7 = **(uint **)(local_50 + 0x10);
    if (uVar6 != 0 || uVar7 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00104fc0;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00104fc0;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(local_50 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar8[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
LAB_001050b8:
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  unguarded_linear_insert(param_2,(StringName *)&local_48,param_3);
  if (StringName::configured == '\0') goto LAB_00105006;
  if (local_48 != 0) {
    StringName::unref();
    goto LAB_00104ff2;
  }
  goto LAB_00104ff6;
LAB_00104fc0:
  this_00 = param_3 + param_2 * 8;
  if (param_1 < param_2) {
    do {
      param_2 = param_2 + -1;
      StringName::operator=(this_00,this_00 + -8);
      this_00 = this_00 + -8;
    } while (param_1 != param_2);
  }
  StringName::operator=(this,(StringName *)&local_50);
LAB_00104ff2:
  if (StringName::configured == '\0') goto LAB_00105006;
LAB_00104ff6:
  if (local_50 != 0) {
    StringName::unref();
  }
LAB_00105006:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */

StringName *
SortArray<StringName,StringName::AlphCompare,true>::median_of_3
          (StringName *param_1,StringName *param_2,StringName *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)param_1;
  lVar9 = *(long *)param_3;
  lVar13 = *(long *)param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_00105af0:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_001053be:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_001053c4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_001056b9;
LAB_00105512:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00105342:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00105430:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00105478;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00105478;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_001053a8;
        }
        goto LAB_00105af0;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00105478;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00105478;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001053a8;
      }
      if (lVar9 == 0) goto LAB_00105711;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_001053c4:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00105509;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_001059f6;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_001056a0:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_001059ff:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00105886:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_001058e8:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00105430;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_00105229:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00105478;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00105478;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_001053a8:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_001053be;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_001057a8:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00105a63;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_001056a0;
        }
LAB_001059f6:
        if (pbVar15 != (byte *)0x0) goto LAB_001058e8;
        goto LAB_001059ff;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00105ac1;
      }
LAB_00105711:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00105509:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00105512;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00105342;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_00105229;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00105618:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00105478;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00105618;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_001053a8;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_001057a8;
      }
LAB_00105ac1:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_00105a63:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_001056a0;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00105886;
  }
LAB_001056b9:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00105478:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00105567;
LAB_00105494:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00105630;
    }
LAB_00105afe:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_0010581e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00105494;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00105999;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00105630;
        }
LAB_00105999:
        if (pbVar16 == (byte *)0x0) goto LAB_0010599e;
        goto LAB_00105946;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00105567:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_00105afe;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00105630:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_0010599e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_0010581e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_00105946:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar4 == 0 && uVar12 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* CallableCustomMethodPointer<BetsyCompressor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::get_object
          (CallableCustomMethodPointer<BetsyCompressor,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00105c5d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00105c5d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00105c5d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */

long SortArray<StringName,StringName::AlphCompare,true>::partitioner
               (long param_1,long param_2,long *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte bVar12;
  byte *pbVar13;
  long *plVar14;
  
  lVar10 = *param_3;
  lVar3 = *(long *)(param_4 + param_1 * 8);
  lVar9 = param_1;
  lVar8 = param_2;
joined_r0x00105d0f:
  if (lVar3 == 0) {
    if (lVar10 == 0) goto LAB_00105e30;
    pbVar5 = *(byte **)(lVar10 + 8);
    uVar6 = 0;
    pbVar13 = &_LC0;
LAB_00105dc6:
    if (pbVar5 == (byte *)0x0) {
      uVar7 = **(uint **)(lVar10 + 0x10);
      if (uVar7 != 0 || uVar6 != 0) {
        lVar3 = 0;
        do {
          if (uVar6 == 0) goto LAB_00105d90;
          if (uVar7 == 0) break;
          if (uVar6 < uVar7) goto LAB_00105d90;
          if (uVar7 < uVar6) break;
          uVar6 = (uint)(char)pbVar13[lVar3 + 1];
          uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
          lVar3 = lVar3 + 1;
        } while (uVar6 != 0 || uVar7 != 0);
      }
      goto LAB_00105e30;
    }
    uVar7 = (uint)(char)*pbVar5;
    bVar12 = (byte)uVar6 | *pbVar5;
LAB_00106106:
    if (bVar12 != 0) {
      lVar3 = 1;
      do {
        if (uVar6 == 0) goto LAB_00105d90;
        if (uVar7 == 0) break;
        if (uVar6 < uVar7) goto LAB_00105d90;
        if (uVar7 < uVar6) break;
        pbVar1 = pbVar13 + lVar3;
        uVar6 = (uint)(char)*pbVar1;
        pbVar2 = pbVar5 + lVar3;
        uVar7 = (uint)(char)*pbVar2;
        lVar3 = lVar3 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar13 = *(byte **)(lVar3 + 8);
    if (lVar10 == 0) {
      if (pbVar13 != (byte *)0x0) {
        bVar12 = *pbVar13;
        uVar6 = (uint)(char)bVar12;
        uVar7 = 0;
        pbVar5 = &_LC0;
        goto LAB_00106106;
      }
      uVar6 = 0;
      pbVar5 = &_LC0;
    }
    else {
      pbVar5 = *(byte **)(lVar10 + 8);
      if (pbVar13 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar13;
        goto LAB_00105dc6;
      }
      if (pbVar5 == (byte *)0x0) {
        uVar6 = **(uint **)(lVar10 + 0x10);
        uVar7 = **(uint **)(lVar3 + 0x10);
        if (uVar6 != 0 || uVar7 != 0) {
          lVar4 = 4;
          do {
            if (uVar7 == 0) goto LAB_00105d90;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00105d90;
            if (uVar6 < uVar7) break;
            uVar7 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
          } while (uVar7 != 0 || uVar6 != 0);
        }
        goto LAB_00105e30;
      }
      uVar6 = (uint)(char)*pbVar5;
    }
    uVar7 = **(uint **)(lVar3 + 0x10);
    if (uVar7 != 0 || uVar6 != 0) {
      lVar4 = 0;
      do {
        if (uVar7 == 0) goto LAB_00105d90;
        if (uVar6 == 0) break;
        if (uVar7 < uVar6) goto LAB_00105d90;
        if (uVar6 < uVar7) break;
        uVar7 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
        uVar6 = (uint)(char)pbVar5[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar7 != 0 || uVar6 != 0);
    }
  }
  goto LAB_00105e30;
LAB_00105d90:
  if (param_2 + -1 == lVar9) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar10 = *param_3;
LAB_00105e30:
    plVar11 = (long *)(param_4 + -8 + lVar8 * 8);
LAB_00105e40:
    lVar8 = lVar8 + -1;
    lVar3 = *plVar11;
    if (lVar10 != 0) {
      pbVar13 = *(byte **)(lVar10 + 8);
      do {
        if (lVar3 == 0) {
          if (pbVar13 != (byte *)0x0) {
            bVar12 = *pbVar13;
            uVar7 = (uint)(char)bVar12;
            pbVar5 = &_LC0;
            uVar6 = 0;
            goto LAB_00105fee;
          }
          uVar6 = 0;
          pbVar5 = &_LC0;
LAB_00105f0a:
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar7 == 0 && uVar6 == 0) goto LAB_00106068;
          lVar3 = 0;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00106068;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00106068;
            uVar7 = (*(uint **)(lVar10 + 0x10))[lVar3 + 1];
            uVar6 = (uint)(char)pbVar5[lVar3 + 1];
            lVar3 = lVar3 + 1;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00106068;
          }
        }
        else {
          pbVar5 = *(byte **)(lVar3 + 8);
          if (pbVar13 != (byte *)0x0) goto LAB_00106030;
          if (pbVar5 != (byte *)0x0) {
            uVar6 = (uint)(char)*pbVar5;
            goto LAB_00105f0a;
          }
          uVar6 = **(uint **)(lVar3 + 0x10);
          uVar7 = **(uint **)(lVar10 + 0x10);
          if (uVar6 == 0 && uVar7 == 0) goto LAB_00106068;
          lVar4 = 4;
          while (uVar7 != 0) {
            if (uVar6 == 0) goto LAB_00106068;
            if (uVar7 < uVar6) break;
            if (uVar6 < uVar7) goto LAB_00106068;
            uVar7 = *(uint *)((long)*(uint **)(lVar10 + 0x10) + lVar4);
            uVar6 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar4);
            lVar4 = lVar4 + 4;
            if (uVar7 == 0 && uVar6 == 0) goto LAB_00106068;
          }
        }
        plVar14 = plVar11;
        if (param_1 == lVar8) goto LAB_00106040;
        lVar3 = plVar11[-1];
        lVar8 = lVar8 + -1;
        plVar11 = plVar11 + -1;
      } while( true );
    }
    if (lVar3 != 0) {
      pbVar5 = *(byte **)(lVar3 + 8);
      uVar7 = 0;
      bVar12 = 0;
      pbVar13 = &_LC0;
      goto LAB_00105f79;
    }
    goto LAB_00106068;
  }
LAB_00105d9e:
  lVar9 = lVar9 + 1;
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  goto joined_r0x00105d0f;
LAB_00106030:
  bVar12 = *pbVar13;
  uVar7 = (uint)(char)bVar12;
LAB_00105f79:
  if (pbVar5 == (byte *)0x0) {
    uVar6 = **(uint **)(lVar3 + 0x10);
    if (uVar6 == 0 && uVar7 == 0) goto LAB_00106068;
    lVar4 = 0;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00106068;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00106068;
      uVar7 = (uint)(char)pbVar13[lVar4 + 1];
      uVar6 = (*(uint **)(lVar3 + 0x10))[lVar4 + 1];
      lVar4 = lVar4 + 1;
      if (uVar7 == 0 && uVar6 == 0) goto LAB_00106068;
    }
  }
  else {
    uVar6 = (uint)(char)*pbVar5;
    bVar12 = bVar12 | *pbVar5;
LAB_00105fee:
    if (bVar12 == 0) goto LAB_00106068;
    lVar3 = 1;
    while (plVar14 = plVar11, uVar7 != 0) {
      if (uVar6 == 0) goto LAB_00106068;
      if (uVar7 < uVar6) break;
      if (uVar6 < uVar7) goto LAB_00106068;
      pbVar1 = pbVar13 + lVar3;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar5 + lVar3;
      uVar6 = (uint)(char)*pbVar2;
      lVar3 = lVar3 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00106068;
    }
  }
  plVar11 = plVar14 + -1;
  if (param_1 == lVar8) goto LAB_00106040;
  goto LAB_00105e40;
LAB_00106040:
  plVar11 = plVar14;
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00106068:
  if (lVar8 <= lVar9) {
    return lVar9;
  }
  lVar3 = *(long *)(param_4 + lVar9 * 8);
  *(undefined8 *)(param_4 + lVar9 * 8) = 0;
  if (*plVar11 != 0) {
    StringName::unref();
    *(long *)(param_4 + lVar9 * 8) = *plVar11;
    *plVar11 = 0;
  }
  if (lVar3 != 0) {
    StringName::unref();
    *plVar11 = lVar3;
  }
  lVar10 = *param_3;
  goto LAB_00105d9e;
}



/* BetsyCompressor::~BetsyCompressor() */

void __thiscall BetsyCompressor::~BetsyCompressor(BetsyCompressor *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00122c00;
  CommandQueueMT::~CommandQueueMT((CommandQueueMT *)(this + 0x178));
  Object::~Object((Object *)this);
  operator_delete(this,0x2a8);
  return;
}



/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::partial_sort
               (long param_1,long param_2,long param_3,StringName *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  StringName *pSVar13;
  long lVar14;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  lVar10 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 < 2) {
    if (param_2 <= param_3) goto LAB_0010652b;
LAB_00106316:
    lVar14 = param_3;
LAB_00106350:
    lVar6 = *(long *)(param_4 + lVar14 * 8);
    lVar5 = *(long *)(param_4 + param_1 * 8);
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        pbVar11 = *(byte **)(lVar5 + 8);
        uVar8 = 0;
        pbVar12 = &_LC0;
LAB_00106564:
        if (pbVar11 == (byte *)0x0) {
          uVar9 = **(uint **)(lVar5 + 0x10);
          if (uVar9 != 0 || uVar8 != 0) {
            lVar6 = 0;
            do {
              if (uVar8 == 0) goto LAB_001063d0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_001063d0;
              if (uVar9 < uVar8) break;
              uVar8 = (uint)(char)pbVar12[lVar6 + 1];
              uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
              lVar6 = lVar6 + 1;
            } while (uVar8 != 0 || uVar9 != 0);
          }
        }
        else {
          uVar9 = (uint)(char)*pbVar11;
          bVar4 = (byte)uVar8 | *pbVar11;
LAB_001065c6:
          if (bVar4 != 0) {
            lVar6 = 1;
            do {
              if (uVar8 == 0) goto LAB_001063d0;
              if (uVar9 == 0) break;
              if (uVar8 < uVar9) goto LAB_001063d0;
              if (uVar9 < uVar8) break;
              pbVar1 = pbVar12 + lVar6;
              uVar8 = (uint)(char)*pbVar1;
              pbVar2 = pbVar11 + lVar6;
              uVar9 = (uint)(char)*pbVar2;
              lVar6 = lVar6 + 1;
            } while (*pbVar1 != 0 || *pbVar2 != 0);
          }
        }
      }
    }
    else {
      pbVar12 = *(byte **)(lVar6 + 8);
      if (lVar5 == 0) {
        if (pbVar12 != (byte *)0x0) {
          bVar4 = *pbVar12;
          uVar8 = (uint)(char)bVar4;
          uVar9 = 0;
          pbVar11 = &_LC0;
          goto LAB_001065c6;
        }
        uVar8 = 0;
        pbVar11 = &_LC0;
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar12 != (byte *)0x0) {
          uVar8 = (uint)(char)*pbVar12;
          goto LAB_00106564;
        }
        if (pbVar11 == (byte *)0x0) {
          uVar8 = **(uint **)(lVar5 + 0x10);
          uVar9 = **(uint **)(lVar6 + 0x10);
          if (uVar8 != 0 || uVar9 != 0) {
            lVar7 = 4;
            do {
              if (uVar9 == 0) goto LAB_001063d0;
              if (uVar8 == 0) break;
              if (uVar9 < uVar8) goto LAB_001063d0;
              if (uVar8 < uVar9) break;
              uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
              uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
              lVar7 = lVar7 + 4;
            } while (uVar9 != 0 || uVar8 != 0);
          }
          goto LAB_00106458;
        }
        uVar8 = (uint)(char)*pbVar11;
      }
      uVar9 = **(uint **)(lVar6 + 0x10);
      if (uVar9 != 0 || uVar8 != 0) {
        lVar5 = 0;
        do {
          if (uVar9 == 0) goto LAB_001063d0;
          if (uVar8 == 0) break;
          if (uVar9 < uVar8) goto LAB_001063d0;
          if (uVar8 < uVar9) break;
          uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
          uVar8 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
        } while (uVar9 != 0 || uVar8 != 0);
      }
    }
    goto LAB_00106458;
  }
  lVar14 = lVar10 + -2 >> 1;
  pSVar13 = param_4 + (param_1 + lVar14) * 8;
  while( true ) {
    StringName::StringName((StringName *)&local_48,pSVar13);
    adjust_heap(param_1,lVar14,lVar10,(StringName *)&local_48,param_4);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
  }
  if (param_3 < param_2) goto LAB_00106316;
  goto LAB_0010648b;
LAB_001063d0:
  StringName::StringName((StringName *)&local_50,param_4 + lVar14 * 8);
  StringName::operator=(param_4 + lVar14 * 8,param_4 + param_1 * 8);
  StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
  adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
  if ((StringName::configured != '\0') &&
     (((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_50 != 0)))
     ) {
    StringName::unref();
  }
LAB_00106458:
  lVar14 = lVar14 + 1;
  if (param_2 <= lVar14) goto code_r0x00106465;
  goto LAB_00106350;
code_r0x00106465:
  if (lVar10 < 2) goto LAB_0010652b;
LAB_0010648b:
  pSVar13 = param_4 + param_3 * 8 + -8;
  lVar10 = (param_3 + -1) - param_1;
  do {
    StringName::StringName((StringName *)&local_50,pSVar13);
    StringName::operator=(pSVar13,param_4 + param_1 * 8);
    StringName::StringName((StringName *)&local_48,(StringName *)&local_50);
    adjust_heap(param_1,0,lVar10,(StringName *)&local_48,param_4);
    if (((StringName::configured != '\0') &&
        ((local_48 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_50 != 0)) {
      StringName::unref();
    }
    pSVar13 = pSVar13 + -8;
    bVar3 = 1 < lVar10;
    lVar10 = lVar10 + -1;
  } while (bVar3);
LAB_0010652b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::_get_class_namev() const */

undefined8 * RDShaderFile::_get_class_namev(void)

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
LAB_001067e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001067e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderFile");
      goto LAB_0010684e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RDShaderFile");
LAB_0010684e:
  return &_get_class_namev()::_class_name_static;
}



/* Object::_get_class_namev() const */

undefined8 * Object::_get_class_namev(void)

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
LAB_001068c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001068c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_0010692e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_0010692e:
  return &_get_class_namev()::_class_name_static;
}



/* RDShaderFile::get_spirv(StringName const&) const */

StringName * RDShaderFile::get_spirv(StringName *param_1)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  char cVar20;
  uint uVar21;
  int iVar22;
  long *in_RDX;
  long lVar23;
  long in_RSI;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  
  if ((*(long *)(in_RSI + 0x248) != 0) && (*(int *)(in_RSI + 0x26c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
    if (*in_RDX == 0) {
      uVar21 = StringName::get_empty_hash();
    }
    else {
      uVar21 = *(uint *)(*in_RDX + 0x20);
    }
    uVar25 = CONCAT44(0,uVar1);
    lVar28 = *(long *)(in_RSI + 0x250);
    if (uVar21 == 0) {
      uVar21 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar21 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar25;
    lVar23 = SUB168(auVar3 * auVar11,8);
    uVar24 = *(uint *)(lVar28 + lVar23 * 4);
    iVar22 = SUB164(auVar3 * auVar11,8);
    if (uVar24 != 0) {
      uVar26 = 0;
      do {
        if ((uVar24 == uVar21) &&
           (lVar23 = *(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar23 * 8) + 0x10),
           lVar23 == *in_RDX)) {
          if ((*(long *)(in_RSI + 0x248) != 0) && (*(int *)(in_RSI + 0x26c) != 0)) {
            uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
            uVar25 = CONCAT44(0,uVar1);
            lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
            if (lVar23 == 0) {
              uVar21 = StringName::get_empty_hash();
              lVar28 = *(long *)(in_RSI + 0x250);
            }
            else {
              uVar21 = *(uint *)(lVar23 + 0x20);
            }
            if (uVar21 == 0) {
              uVar21 = 1;
            }
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar21 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar25;
            lVar23 = SUB168(auVar7 * auVar15,8);
            uVar24 = *(uint *)(lVar28 + lVar23 * 4);
            uVar26 = SUB164(auVar7 * auVar15,8);
            if (uVar24 != 0) {
              uVar27 = 0;
              do {
                if ((uVar24 == uVar21) &&
                   (*(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar23 * 8) + 0x10) == *in_RDX))
                {
                  lVar2 = *(long *)(*(long *)(in_RSI + 0x248) + (ulong)uVar26 * 8);
                  *(undefined8 *)param_1 = 0;
                  lVar2 = *(long *)(lVar2 + 0x18);
                  if (lVar2 == 0) {
                    return param_1;
                  }
                  *(long *)param_1 = lVar2;
                  cVar20 = RefCounted::reference();
                  if (cVar20 != '\0') {
                    return param_1;
                  }
                  *(undefined8 *)param_1 = 0;
                  return param_1;
                }
                uVar27 = uVar27 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(uVar26 + 1) * lVar2;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar25;
                lVar23 = SUB168(auVar8 * auVar16,8);
                uVar24 = *(uint *)(lVar28 + lVar23 * 4);
                uVar26 = SUB164(auVar8 * auVar16,8);
              } while ((uVar24 != 0) &&
                      (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar24 * lVar2, auVar17._8_8_ = 0,
                      auVar17._0_8_ = uVar25, auVar10._8_8_ = 0,
                      auVar10._0_8_ = (ulong)((uVar1 + uVar26) - SUB164(auVar9 * auVar17,8)) * lVar2
                      , auVar18._8_8_ = 0, auVar18._0_8_ = uVar25,
                      uVar27 <= SUB164(auVar10 * auVar18,8)));
            }
          }
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar19 = (code *)invalidInstructionException();
          (*pcVar19)();
        }
        uVar26 = uVar26 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar22 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        lVar23 = SUB168(auVar4 * auVar12,8);
        uVar24 = *(uint *)(lVar28 + lVar23 * 4);
        iVar22 = SUB164(auVar4 * auVar12,8);
      } while ((uVar24 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar24 * lVar2, auVar13._8_8_ = 0,
              auVar13._0_8_ = uVar25, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar22) - SUB164(auVar5 * auVar13,8)) * lVar2,
              auVar14._8_8_ = 0, auVar14._0_8_ = uVar25, uVar26 <= SUB164(auVar6 * auVar14,8)));
    }
  }
  _err_print_error("get_spirv","./servers/rendering/rendering_device_binds.h",0x168,
                   "Condition \"!versions.has(p_version)\" is true. Returning: Ref<RDShaderSPIRV>()"
                   ,0,0);
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */

void SortArray<StringName,StringName::AlphCompare,true>::introsort
               (long param_1,long param_2,StringName *param_3,long param_4)

{
  long lVar1;
  StringName *pSVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long in_FS_OFFSET;
  long local_138;
  long local_120;
  long local_100;
  long local_f8;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
LAB_0010772a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    if (param_4 != 0) {
      lVar12 = param_2 * 8;
      lVar3 = param_2;
LAB_00106d72:
      param_4 = param_4 + -1;
      pSVar2 = (StringName *)
               median_of_3(param_3 + param_1 * 8,param_3 + ((lVar1 >> 1) + param_1) * 8,
                           param_3 + lVar12 + -8);
      StringName::StringName((StringName *)&local_48,pSVar2);
      param_2 = partitioner(param_1,lVar3,(StringName *)&local_48,param_3);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar1 = lVar3 - param_2;
      if (0x10 < lVar1) {
        if (param_4 != 0) {
          lVar12 = param_4;
          lVar4 = lVar3;
LAB_00106e31:
          do {
            lVar12 = lVar12 + -1;
            pSVar2 = (StringName *)
                     median_of_3(param_3 + param_2 * 8,param_3 + ((lVar1 >> 1) + param_2) * 8,
                                 param_3 + lVar4 * 8 + -8);
            StringName::StringName((StringName *)&local_48,pSVar2);
            lVar3 = partitioner(param_2,lVar4,(StringName *)&local_48,param_3);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
              if (lVar12 != 0) {
                lVar13 = lVar12;
                local_138 = lVar4;
LAB_00106ef2:
                do {
                  lVar13 = lVar13 + -1;
                  pSVar2 = (StringName *)
                           median_of_3(param_3 + lVar3 * 8,param_3 + ((lVar1 >> 1) + lVar3) * 8,
                                       param_3 + local_138 * 8 + -8);
                  StringName::StringName((StringName *)&local_48,pSVar2);
                  lVar4 = partitioner(lVar3,local_138,(StringName *)&local_48,param_3);
                  if ((StringName::configured != '\0') && (local_48 != 0)) {
                    StringName::unref();
                  }
                  lVar1 = local_138 - lVar4;
                  if (0x10 < lVar1) {
                    if (lVar13 != 0) {
                      lVar11 = lVar13;
LAB_00106fac:
                      do {
                        lVar11 = lVar11 + -1;
                        lVar9 = local_138 * 8;
                        pSVar2 = (StringName *)
                                 median_of_3(param_3 + lVar4 * 8,
                                             param_3 + ((lVar1 >> 1) + lVar4) * 8,
                                             param_3 + lVar9 + -8);
                        StringName::StringName((StringName *)&local_48,pSVar2);
                        lVar5 = partitioner(lVar4,local_138,(StringName *)&local_48,param_3);
                        if ((StringName::configured != '\0') && (local_48 != 0)) {
                          StringName::unref();
                        }
                        lVar1 = local_138 - lVar5;
                        if (0x10 < lVar1) {
                          lVar6 = local_138;
                          if (lVar11 != 0) {
                            lVar7 = local_138;
                            local_100 = lVar11;
                            do {
                              local_100 = local_100 + -1;
                              pSVar2 = (StringName *)
                                       median_of_3(param_3 + lVar5 * 8,
                                                   param_3 + ((lVar1 >> 1) + lVar5) * 8,
                                                   param_3 + lVar9 + -8);
                              StringName::StringName((StringName *)&local_48,pSVar2);
                              lVar6 = partitioner(lVar5,lVar7,(StringName *)&local_48,param_3);
                              if ((StringName::configured != '\0') && (local_48 != 0)) {
                                StringName::unref();
                              }
                              lVar1 = lVar7 - lVar6;
                              if (0x10 < lVar1) {
                                if (local_100 != 0) {
                                  lVar8 = lVar7;
                                  local_120 = local_100;
                                  do {
                                    local_120 = local_120 + -1;
                                    pSVar2 = (StringName *)
                                             median_of_3(param_3 + lVar6 * 8,
                                                         param_3 + ((lVar1 >> 1) + lVar6) * 8,
                                                         param_3 + lVar9 + -8);
                                    StringName::StringName((StringName *)&local_48,pSVar2);
                                    lVar7 = partitioner(lVar6,lVar8,(StringName *)&local_48,param_3)
                                    ;
                                    if ((StringName::configured != '\0') && (local_48 != 0)) {
                                      StringName::unref();
                                    }
                                    lVar1 = lVar8 - lVar7;
                                    if (0x10 < lVar1) {
                                      if (local_120 == 0) {
LAB_001074fe:
                                        partial_sort(lVar7,lVar8,lVar8,param_3);
                                      }
                                      else {
                                        lVar9 = lVar8;
                                        local_138 = local_120;
                                        do {
                                          while( true ) {
                                            local_138 = local_138 + -1;
                                            lVar14 = lVar9 * 8;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar7 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar7) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar8 = partitioner(lVar7,lVar9,(StringName *)&local_48,
                                                                param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (0x10 < lVar1) break;
LAB_0010746e:
                                            lVar1 = lVar8 - lVar7;
                                            if (lVar1 < 0x11) {
                                              lVar1 = lVar7 - lVar6;
                                              if (lVar1 < 0x11) goto LAB_00107420;
                                              goto LAB_001074c9;
                                            }
                                            lVar9 = lVar8;
                                            if (local_138 == 0) goto LAB_001074fe;
                                          }
                                          if (local_138 == 0) {
LAB_0010745d:
                                            partial_sort(lVar8,lVar9,lVar9,param_3);
                                            goto LAB_0010746e;
                                          }
                                          lVar10 = lVar9;
                                          local_f8 = local_138;
                                          while( true ) {
                                            local_f8 = local_f8 + -1;
                                            pSVar2 = (StringName *)
                                                     median_of_3(param_3 + lVar8 * 8,
                                                                 param_3 + ((lVar1 >> 1) + lVar8) *
                                                                           8,param_3 + lVar14 + -8);
                                            StringName::StringName((StringName *)&local_48,pSVar2);
                                            lVar9 = partitioner(lVar8,lVar10,(StringName *)&local_48
                                                                ,param_3);
                                            if ((StringName::configured != '\0') && (local_48 != 0))
                                            {
                                              StringName::unref();
                                            }
                                            lVar1 = lVar10 - lVar9;
                                            if (0x10 < lVar1) {
                                              if (local_f8 != 0) {
                                                lVar14 = local_f8;
                                                lVar15 = lVar10;
                                                do {
                                                  lVar14 = lVar14 + -1;
                                                  pSVar2 = (StringName *)
                                                           median_of_3(param_3 + lVar9 * 8,
                                                                       param_3 + ((lVar1 >> 1) +
                                                                                 lVar9) * 8,
                                                                       param_3 + lVar15 * 8 + -8);
                                                  StringName::StringName
                                                            ((StringName *)&local_48,pSVar2);
                                                  lVar10 = partitioner(lVar9,lVar15,
                                                                       (StringName *)&local_48,
                                                                       param_3);
                                                  if ((StringName::configured != '\0') &&
                                                     (local_48 != 0)) {
                                                    StringName::unref();
                                                  }
                                                  introsort(lVar10,lVar15,param_3,lVar14);
                                                  lVar1 = lVar10 - lVar9;
                                                  if (lVar1 < 0x11) {
                                                    lVar1 = lVar9 - lVar8;
                                                    if (lVar1 < 0x11) goto LAB_0010746e;
                                                    goto LAB_001073f4;
                                                  }
                                                  lVar15 = lVar10;
                                                } while (lVar14 != 0);
                                              }
                                              partial_sort(lVar9,lVar10,lVar10,param_3);
                                            }
                                            lVar1 = lVar9 - lVar8;
                                            if (lVar1 < 0x11) break;
                                            if (local_f8 == 0) goto LAB_0010745d;
LAB_001073f4:
                                            lVar14 = lVar9 * 8;
                                            lVar10 = lVar9;
                                          }
                                          lVar1 = lVar8 - lVar7;
                                          lVar9 = lVar8;
                                        } while (0x10 < lVar1);
                                      }
                                    }
                                    lVar1 = lVar7 - lVar6;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar6 - lVar5;
                                      if (lVar1 < 0x11) goto LAB_00107547;
                                      goto LAB_00107441;
                                    }
                                    if (local_120 == 0) break;
LAB_001074c9:
                                    lVar9 = lVar7 * 8;
                                    lVar8 = lVar7;
                                  } while( true );
                                }
                                partial_sort(lVar6,lVar7,lVar7,param_3);
                              }
LAB_00107420:
                              lVar1 = lVar6 - lVar5;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar5 - lVar4;
                                local_138 = lVar5;
                                if (lVar1 < 0x11) goto LAB_00107600;
                                goto LAB_00106fac;
                              }
                              if (local_100 == 0) break;
LAB_00107441:
                              lVar9 = lVar6 * 8;
                              lVar7 = lVar6;
                            } while( true );
                          }
                          partial_sort(lVar5,lVar6,lVar6,param_3);
                        }
LAB_00107547:
                        lVar1 = lVar5 - lVar4;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar4 - lVar3;
                          local_138 = lVar4;
                          if (lVar1 < 0x11) goto LAB_00107691;
                          goto LAB_00106ef2;
                        }
                        local_138 = lVar5;
                      } while (lVar11 != 0);
                    }
                    partial_sort(lVar4,local_138,local_138,param_3);
                  }
LAB_00107600:
                  lVar1 = lVar4 - lVar3;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar3 - param_2;
                    lVar4 = lVar3;
                    if (lVar1 < 0x11) goto LAB_0010771e;
                    goto LAB_00106e31;
                  }
                  local_138 = lVar4;
                } while (lVar13 != 0);
              }
              partial_sort(lVar3,lVar4,lVar4,param_3);
            }
LAB_00107691:
            lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto LAB_0010771e;
            lVar4 = lVar3;
            if (lVar12 == 0) break;
          } while( true );
        }
        partial_sort(param_2,lVar3,lVar3,param_3);
      }
      lVar1 = param_2 - param_1;
      if (0x10 < lVar1) {
        if (param_4 != 0) goto LAB_001076fd;
        goto LAB_0010775c;
      }
      goto LAB_0010772a;
    }
LAB_0010775c:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      partial_sort(param_1,param_2,param_2,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010771e:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) goto LAB_0010772a;
LAB_001076fd:
  lVar12 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_00106d72;
}



/* RDShaderFile::get_base_error() const */

void RDShaderFile::get_base_error(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x270) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x270));
  }
  return;
}



/* RDShaderFile::set_base_error(String const&) */

void __thiscall RDShaderFile::set_base_error(RDShaderFile *this,String *param_1)

{
  if (*(long *)(this + 0x270) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x270),(CowData *)param_1);
  }
  Resource::emit_changed();
  return;
}



/* Object::get_class() const */

void Object::get_class(void)

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



/* RDShaderFile::get_class() const */

void RDShaderFile::get_class(void)

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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_00107b7f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00107a93;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00107a93:
    uVar5 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
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
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_00107b7f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* MethodBindTRC<TypedArray<StringName>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<StringName>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x15);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_38);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(puVar3 + 8),false);
      if (*(long *)(puVar3 + 4) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar3 + 4) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x00107cac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x00107cac:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x1b;
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
      goto joined_r0x00107e2c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107e2c:
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
  local_48 = &_LC0;
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
      goto joined_r0x00107fac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00107fac:
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



/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00122a28;
  if (*(long *)(this + 0x270) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x270) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x270);
      *(undefined8 *)(this + 0x270) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x248);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001080f4;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_001080f4:
  Resource::~Resource((Resource *)this);
  return;
}



/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_00122a28;
  if (*(long *)(this + 0x270) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x270) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x270);
      *(undefined8 *)(this + 0x270) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  pvVar6 = *(void **)(this + 0x248);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001082a4;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_001082a4:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x278);
  return;
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
            if (lVar5 == 0) goto LAB_0010843f;
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
LAB_0010843f:
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
    if (cVar6 != '\0') goto LAB_001084f3;
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
              if (lVar5 == 0) goto LAB_001085a3;
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
LAB_001085a3:
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
      if (cVar6 != '\0') goto LAB_001084f3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001084f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::is_class(String const&) const */

undefined8 __thiscall RDShaderFile::is_class(RDShaderFile *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001086cf;
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
LAB_001086cf:
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
    if (cVar6 != '\0') goto LAB_00108783;
  }
  cVar6 = String::operator==(param_1,"RDShaderFile");
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
              if (lVar5 == 0) goto LAB_00108843;
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
LAB_00108843:
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
      if (cVar6 != '\0') goto LAB_00108783;
    }
    cVar6 = String::operator==(param_1,"Resource");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001088ec;
    }
  }
LAB_00108783:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001088ec:
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
LAB_00108a68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108a68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00108a86;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00108a86:
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
LAB_00108e68:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108e68;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108e85;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108e85:
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



/* RDShaderFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RDShaderFile::_get_property_listv(RDShaderFile *this,List *param_1,bool param_2)

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
  local_78 = "RDShaderFile";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RDShaderFile";
  local_98 = 0;
  local_70 = 0xc;
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
LAB_001092b8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001092b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001092d5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001092d5:
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
  StringName::StringName((StringName *)&local_78,"RDShaderFile",false);
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



/* CommandQueueMT::_flush() */

void __thiscall CommandQueueMT::_flush(CommandQueueMT *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x80) == 0) {
    local_40 = '\0';
    local_48 = (pthread_mutex_t *)this;
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)this);
    if (iVar3 != 0) {
LAB_00109826:
      std::__throw_system_error(iVar3);
      goto LAB_0010982d;
    }
    uVar4 = *(uint *)(this + 0x28);
    uVar8 = (ulong)uVar4;
    uVar6 = *(ulong *)(this + 0x80);
    local_40 = '\x01';
    if (uVar6 < uVar8) {
      do {
        if ((uint)uVar8 <= (uint)uVar6) {
LAB_00109735:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,uVar8,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar1 = *(long *)(*(long *)(this + 0x30) + uVar6);
        uVar5 = uVar6 + 8;
        *(ulong *)(this + 0x80) = uVar5;
        uVar6 = uVar5 & 0xffffffff;
        if ((uint)uVar8 <= (uint)uVar5) goto LAB_00109735;
        puVar9 = (undefined8 *)(uVar6 + *(long *)(this + 0x30));
        uVar4 = WorkerThreadPool::_thread_enter_unlock_allowance_zone((unique_lock *)&local_48);
        (**(code **)*puVar9)(puVar9);
        WorkerThreadPool::thread_exit_unlock_allowance_zone(uVar4);
        uVar6 = *(ulong *)(this + 0x80);
        uVar8 = (ulong)*(uint *)(this + 0x28);
        if (*(uint *)(this + 0x28) <= (uint)uVar6) {
          uVar6 = uVar6 & 0xffffffff;
          goto LAB_00109735;
        }
        plVar7 = (long *)((uVar6 & 0xffffffff) + *(long *)(this + 0x30));
        if ((char)plVar7[1] != '\0') {
          *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
          if ((local_40 != '\0') && (local_48 != (pthread_mutex_t *)0x0)) {
            pthread_mutex_unlock(local_48);
          }
          std::condition_variable::notify_all();
          local_40 = '\0';
          local_48 = (pthread_mutex_t *)this;
          iVar3 = pthread_mutex_lock((pthread_mutex_t *)this);
          if (iVar3 != 0) goto LAB_00109826;
          uVar8 = (ulong)*(uint *)(this + 0x28);
          local_40 = '\x01';
          uVar6 = *(ulong *)(this + 0x80) & 0xffffffff;
          if (*(uint *)(this + 0x28) <= (uint)*(ulong *)(this + 0x80)) goto LAB_00109735;
          plVar7 = (long *)(uVar6 + *(long *)(this + 0x30));
        }
        (**(code **)(*plVar7 + 8))();
        uVar4 = *(uint *)(this + 0x28);
        uVar8 = (ulong)uVar4;
        uVar6 = *(long *)(this + 0x80) + lVar1;
        *(ulong *)(this + 0x80) = uVar6;
      } while (uVar6 < uVar8);
    }
    if (uVar4 != 0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    LOCK();
    this[0x88] = (CommandQueueMT)0x0;
    UNLOCK();
    *(undefined8 *)(this + 0x80) = 0;
    if ((*(int *)(this + 0x68) == *(int *)(this + 0x6c)) && (*(int *)(this + 0x70) == 0)) {
      *(undefined8 *)(this + 0x68) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (pthread_mutex_t *)0x0)) {
      pthread_mutex_unlock(local_48);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010982d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Ref<RDShaderSPIRV>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Ref<RDShaderSPIRV> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
::operator[](HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  Object *pOVar5;
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
  undefined1 auVar37 [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  undefined8 uVar43;
  void *__s_00;
  undefined8 *puVar44;
  long lVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined8 *puVar57;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_40;
  
  lVar45 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar40);
  if (lVar45 == 0) {
LAB_0010a580:
    uVar47 = uVar42 * 4;
    uVar52 = uVar42 * 8;
    uVar43 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar42 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar3 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar42 != uVar47);
        goto LAB_0010a3c8;
      }
      memset(pvVar3,0,uVar47);
      memset(pvVar46,0,uVar52);
      iVar48 = *(int *)(this + 0x2c);
LAB_0010a3cc:
      if (iVar48 != 0) {
LAB_0010a3d4:
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar40);
        lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar41 = StringName::get_empty_hash();
        }
        else {
          uVar41 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar41 == 0) {
          uVar41 = 1;
        }
        uVar56 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (ulong)uVar41 * lVar45;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar47;
        lVar51 = SUB168(auVar18 * auVar34,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
        uVar55 = SUB164(auVar18 * auVar34,8);
        if (uVar54 != 0) {
          do {
            if ((uVar54 == uVar41) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar51 * 8) + 0x10) == *(long *)param_1))
            {
              puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              pOVar5 = (Object *)puVar44[3];
              if (pOVar5 != (Object *)0x0) {
                puVar44[3] = 0;
                cVar38 = RefCounted::unreference();
                if ((cVar38 != '\0') && (cVar38 = predelete_handler(pOVar5), cVar38 != '\0')) {
                  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                  Memory::free_static(pOVar5,false);
                }
                puVar44 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              }
              goto LAB_00109f9c;
            }
            uVar56 = uVar56 + 1;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = (ulong)(uVar55 + 1) * lVar45;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar47;
            lVar51 = SUB168(auVar19 * auVar35,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar51 * 4);
            uVar55 = SUB164(auVar19 * auVar35,8);
          } while ((uVar54 != 0) &&
                  (auVar20._8_8_ = 0, auVar20._0_8_ = (ulong)uVar54 * lVar45, auVar36._8_8_ = 0,
                  auVar36._0_8_ = uVar47, auVar21._8_8_ = 0,
                  auVar21._0_8_ = (ulong)((uVar40 + uVar55) - SUB164(auVar20 * auVar36,8)) * lVar45,
                  auVar37._8_8_ = 0, auVar37._0_8_ = uVar47, uVar56 <= SUB164(auVar21 * auVar37,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_00109fcf;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_00109fcf;
    if (iVar48 != 0) goto LAB_0010a3d4;
LAB_00109ff5:
    uVar40 = *(uint *)(this + 0x28);
    if (uVar40 == 0x1c) {
      puVar44 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00109f9c;
    }
    uVar42 = (ulong)(uVar40 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar41 = *(uint *)(hash_table_size_primes + (ulong)uVar40 * 4);
    if (uVar40 + 1 < 2) {
      uVar42 = 2;
    }
    uVar40 = *(uint *)(hash_table_size_primes + uVar42 * 4);
    uVar52 = (ulong)uVar40;
    *(int *)(this + 0x28) = (int)uVar42;
    pvVar46 = *(void **)(this + 8);
    uVar42 = uVar52 * 4;
    uVar47 = uVar52 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar43 = Memory::alloc_static(uVar42,false);
    *(undefined8 *)(this + 0x10) = uVar43;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar40 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar42))) {
        uVar42 = 0;
        do {
          *(undefined4 *)((long)__s + uVar42 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar42 * 8) = 0;
          uVar42 = uVar42 + 1;
        } while (uVar42 != uVar52);
      }
      else {
        memset(__s,0,uVar42);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar41 != 0) {
      uVar42 = 0;
      do {
        uVar40 = *(uint *)((long)pvVar3 + uVar42 * 4);
        if (uVar40 != 0) {
          lVar45 = *(long *)(this + 0x10);
          uVar56 = 0;
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar40 * lVar51;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar47;
          lVar49 = SUB168(auVar10 * auVar26,8);
          puVar1 = (uint *)(lVar45 + lVar49 * 4);
          iVar48 = SUB164(auVar10 * auVar26,8);
          uVar55 = *puVar1;
          uVar43 = *(undefined8 *)((long)pvVar46 + uVar42 * 8);
          while (uVar55 != 0) {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar55 * lVar51;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar47;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar11 * auVar27,8)) * lVar51;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            uVar39 = SUB164(auVar12 * auVar28,8);
            uVar53 = uVar43;
            if (uVar39 < uVar56) {
              *puVar1 = uVar40;
              puVar44 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar44;
              *puVar44 = uVar43;
              uVar40 = uVar55;
              uVar56 = uVar39;
            }
            uVar56 = uVar56 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar48 + 1) * lVar51;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar47;
            lVar49 = SUB168(auVar13 * auVar29,8);
            puVar1 = (uint *)(lVar45 + lVar49 * 4);
            iVar48 = SUB164(auVar13 * auVar29,8);
            uVar43 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar43;
          *puVar1 = uVar40;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar42 = uVar42 + 1;
      } while (uVar41 != uVar42);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar48 = *(int *)(this + 0x2c);
    if (iVar48 != 0) {
      lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar41 = StringName::get_empty_hash();
        lVar45 = *(long *)(this + 8);
      }
      else {
        uVar41 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar41 == 0) {
        uVar41 = 1;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar41 * lVar51;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar42;
      lVar49 = SUB168(auVar6 * auVar22,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      uVar55 = SUB164(auVar6 * auVar22,8);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar41 == uVar54) &&
             (*(long *)(*(long *)(lVar45 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar44 = *(undefined8 **)(lVar45 + (ulong)uVar55 * 8);
            goto LAB_00109f9c;
          }
          uVar56 = uVar56 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar55 + 1) * lVar51;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar42;
          lVar49 = SUB168(auVar7 * auVar23,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar7 * auVar23,8);
        } while ((uVar54 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar54 * lVar51, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar42, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar55 + uVar40) - SUB164(auVar8 * auVar24,8)) * lVar51,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar42, uVar56 <= SUB164(auVar9 * auVar25,8)));
      }
      uVar42 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar45 == 0) goto LAB_0010a580;
LAB_0010a3c8:
      iVar48 = *(int *)(this + 0x2c);
      goto LAB_0010a3cc;
    }
LAB_00109fcf:
    if ((float)uVar42 * __LC25 < (float)(iVar48 + 1)) goto LAB_00109ff5;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = (Object *)0x0;
  puVar44 = (undefined8 *)operator_new(0x20,"");
  *puVar44 = 0;
  puVar44[1] = 0;
  StringName::StringName((StringName *)(puVar44 + 2),(StringName *)&local_58);
  puVar44[3] = 0;
  if (local_50 != (Object *)0x0) {
    puVar44[3] = local_50;
    cVar38 = RefCounted::reference();
    if (cVar38 == '\0') {
      puVar44[3] = 0;
    }
    if (((local_50 != (Object *)0x0) &&
        (cVar38 = RefCounted::unreference(), pOVar5 = local_50, cVar38 != '\0')) &&
       (cVar38 = predelete_handler(local_50), cVar38 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar44;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 == 0) goto LAB_0010a545;
LAB_0010a2b8:
    uVar40 = *(uint *)(lVar45 + 0x20);
  }
  else {
    *puVar4 = puVar44;
    puVar44[1] = puVar4;
    lVar45 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar44;
    if (lVar45 != 0) goto LAB_0010a2b8;
LAB_0010a545:
    uVar40 = StringName::get_empty_hash();
  }
  lVar45 = *(long *)(this + 0x10);
  if (uVar40 == 0) {
    uVar40 = 1;
  }
  uVar42 = (ulong)uVar40;
  uVar55 = 0;
  uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar41);
  lVar51 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar42 * lVar51;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar47;
  lVar50 = SUB168(auVar14 * auVar30,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar45 + lVar50 * 4);
  iVar48 = SUB164(auVar14 * auVar30,8);
  uVar54 = *puVar1;
  puVar4 = puVar44;
  while (uVar54 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar54 * lVar51;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar47;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((iVar48 + uVar41) - SUB164(auVar15 * auVar31,8)) * lVar51;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar47;
    uVar40 = SUB164(auVar16 * auVar32,8);
    puVar57 = puVar4;
    if (uVar40 < uVar55) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar50 * 8);
      puVar57 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar55 = uVar40;
    }
    uVar40 = (uint)uVar42;
    uVar55 = uVar55 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar48 + 1) * lVar51;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar47;
    lVar50 = SUB168(auVar17 * auVar33,8);
    puVar1 = (uint *)(lVar45 + lVar50 * 4);
    iVar48 = SUB164(auVar17 * auVar33,8);
    puVar4 = puVar57;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar50 * 8) = puVar4;
  *puVar1 = uVar40;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00109f9c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar44 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::set_bytecode(Ref<RDShaderSPIRV> const&, StringName const&) */

void __thiscall RDShaderFile::set_bytecode(RDShaderFile *this,Ref *param_1,StringName *param_2)

{
  Object *pOVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  
  if (*(long *)param_1 != 0) {
    plVar4 = (long *)HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                     ::operator[]((HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                                   *)(this + 0x240),param_2);
    pOVar1 = *(Object **)param_1;
    pOVar2 = (Object *)*plVar4;
    if (pOVar1 != pOVar2) {
      *plVar4 = (long)pOVar1;
      if (pOVar1 != (Object *)0x0) {
        cVar3 = RefCounted::reference();
        if (cVar3 == '\0') {
          *plVar4 = 0;
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
    Resource::emit_changed();
    return;
  }
  _err_print_error("set_bytecode","./servers/rendering/rendering_device_binds.h",0x162,
                   "Condition \"p_bytecode.is_null()\" is true.",0,0);
  return;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* RDShaderFile::_set_versions(Dictionary const&) */

void __thiscall RDShaderFile::_set_versions(RDShaderFile *this,Dictionary *param_1)

{
  uint uVar1;
  void *pvVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  Object *pOVar6;
  undefined8 *puVar7;
  long lVar8;
  long in_FS_OFFSET;
  long *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x248) != 0) && (*(int *)(this + 0x26c) != 0)) {
    lVar8 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x250) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0x250) + lVar8) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0x248) + lVar8 * 2);
          if ((*(long *)((long)pvVar2 + 0x18) != 0) &&
             (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
            pOVar6 = *(Object **)((long)pvVar2 + 0x18);
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
            }
          }
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0x248) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while (lVar8 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0x26c) = 0;
    *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  }
  local_50 = (long *)0x0;
  Dictionary::get_key_list((List *)param_1);
  if ((local_50 != (long *)0x0) && (lVar8 = *local_50, lVar8 != 0)) {
    do {
      Variant::operator_cast_to_StringName((Variant *)&local_48);
      Dictionary::operator[]((Variant *)param_1);
      lVar5 = Variant::get_validated_object();
      if (((lVar5 == 0) ||
          (pOVar6 = (Object *)__dynamic_cast(lVar5,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0),
          pOVar6 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        _err_print_error("_set_versions","./servers/rendering/rendering_device_binds.h",0x1b2,
                         "Condition \"bc.is_null()\" is true. Continuing.",0,0);
      }
      else {
        puVar7 = (undefined8 *)
                 HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                 ::operator[]((HashMap<StringName,Ref<RDShaderSPIRV>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<RDShaderSPIRV>>>>
                               *)(this + 0x240),(StringName *)&local_48);
        pOVar3 = (Object *)*puVar7;
        if (pOVar6 != pOVar3) {
          *puVar7 = pOVar6;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            *puVar7 = 0;
          }
          if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
             (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar8 = *(long *)(lVar8 + 0x18);
    } while (lVar8 != 0);
  }
  Resource::emit_changed();
  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void CommandQueueMT::push_and_ret<BetsyCompressor, Error (BetsyCompressor::*)(BetsyFormat,
   Image*), Error, BetsyFormat, Image*>(BetsyCompressor*, Error (BetsyCompressor::*)(BetsyFormat,
   Image*), Error*, BetsyFormat, Image*) */

void CommandQueueMT::
     push_and_ret<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  uint uVar9;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock(param_1);
  if (iVar3 != 0) {
    std::__throw_system_error(iVar3);
LAB_0010af5a:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x48;
  if (uVar9 < 0xffffffb8) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x47 >> 1 | uVar9 + 0x47;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)((long)param_1 + 0x2c) = uVar7;
      pvVar5 = (void *)Memory::realloc_static(pvVar5,(ulong)uVar7,false);
      *(void **)((long)param_1 + 0x30) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar6 = (ulong)(uVar9 + 8);
    param_1[1].__data.__lock = uVar8;
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x40;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *puVar4 = &PTR_call_00123090;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_7;
      *(undefined4 *)(puVar4 + 7) = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC39;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC39._4_4_,uVar9)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar9);
      iVar3 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar3;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar3 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010af5a;
    }
  }
  else {
    param_1[1].__data.__lock = uVar8;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,(ulong)uVar8,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* void Ref<RDShaderFile>::instantiate<>() */

void __thiscall Ref<RDShaderFile>::instantiate<>(Ref<RDShaderFile> *this)

{
  char cVar1;
  Resource *this_00;
  long lVar2;
  Resource *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x278,"");
  pRVar3 = this_00;
  for (lVar2 = 0x4f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00122a28;
  *(undefined8 *)(this_00 + 0x268) = 2;
  *(undefined8 *)(this_00 + 0x270) = 0;
  *(undefined1 (*) [16])(this_00 + 0x248) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 600) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (Resource *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (Resource *)pOVar5) goto LAB_0010b045;
    *(Resource **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_0010b045;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (Resource *)0x0) {
    return;
  }
LAB_0010b045:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* void CommandQueueMT::push_and_sync<BetsyCompressor, void
   (BetsyCompressor::*)()>(BetsyCompressor*, void (BetsyCompressor::*)()) */

void CommandQueueMT::push_and_sync<BetsyCompressor,void(BetsyCompressor::*)()>
               (BetsyCompressor *param_1,_func_void *param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 in_RCX;
  uint uVar6;
  undefined8 in_RDX;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  uint uVar9;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar3 != 0) {
    std::__throw_system_error(iVar3);
LAB_0010b2f7:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar9 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar9;
  uVar8 = uVar9 + 0x38;
  if (uVar9 < 0xffffffc8) {
    pvVar5 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar8) {
      uVar6 = uVar9 + 0x37 >> 1 | uVar9 + 0x37;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar6;
      pvVar5 = (void *)Memory::realloc_static(pvVar5,(ulong)uVar6,false);
      *(void **)(param_1 + 0x30) = pvVar5;
      if (pvVar5 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar7 = (ulong)(uVar9 + 8);
    *(uint *)(param_1 + 0x28) = uVar8;
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x30;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar7);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_001230e0;
      puVar4[2] = param_2;
      puVar4[3] = in_RDX;
      puVar4[4] = in_RCX;
      LOCK();
      param_1[0x88] = (BetsyCompressor)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)(param_1 + 0x6c) + (int)_LC39;
      *(ulong *)(param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + _LC39._4_4_,uVar9);
      do {
        std::condition_variable::wait((unique_lock *)(param_1 + 0x38));
      } while (*(uint *)(param_1 + 0x68) < uVar9);
      iVar3 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar3 + -1;
      if ((*(uint *)(param_1 + 0x6c) == *(uint *)(param_1 + 0x68)) && (iVar3 + -1 == 0)) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      if (param_1 != (BetsyCompressor *)0x0) {
        pthread_mutex_unlock((pthread_mutex_t *)param_1);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010b2f7;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar8;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar8,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<unsigned char> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<unsigned_char>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RenderingDevice::Uniform>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write(void)

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

void FUN_0010b354(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* WARNING: Removing unreachable block (ram,0x00119888) */
/* WARNING: Removing unreachable block (ram,0x00119a1d) */
/* WARNING: Removing unreachable block (ram,0x00119a29) */
/* String vformat<int, int, int, String, unsigned long>(String const&, int const, int const, int
   const, String const, unsigned long const) */

undefined8 *
vformat<int,int,int,String,unsigned_long>
          (undefined8 *param_1,bool *param_2,int param_3,int param_4,int param_5,String *param_6,
          ulong param_7)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_4);
  iVar4 = 0;
  Variant::Variant(local_a8,param_5);
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar3 = (int)local_128;
  Array::resize(iVar3);
  pVVar2 = local_d8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  pVVar2 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RDShaderFile::print_errors(String const&) */

void RDShaderFile::print_errors(String *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x270) == 0) || (*(uint *)(*(long *)(param_1 + 0x270) + -8) < 2)) {
    for (puVar2 = *(undefined8 **)(param_1 + 600); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      lVar8 = 0;
      do {
        while( true ) {
          local_b8 = 0;
          if ((*(long *)(puVar2[3] + 0x290 + (long)(int)lVar8 * 8) != 0) &&
             (CowData<char32_t>::_ref
                        ((CowData<char32_t> *)&local_b8,(CowData *)(puVar2[3] + 0x290 + lVar8 * 8)),
             local_b8 != 0)) break;
LAB_00119b39:
          lVar8 = lVar8 + 1;
          if (lVar8 == 5) goto LAB_00119fb7;
        }
        if (*(uint *)(local_b8 + -8) < 2) {
LAB_00119b18:
          lVar4 = local_b8;
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
          goto LAB_00119b39;
        }
        local_68 = 0;
        local_58 = "\':\n\n";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        local_78 = 0;
        pcVar3 = (&print_errors(String_const&)::stage_str)[lVar8];
        sVar6 = 0;
        if (pcVar3 != (char *)0x0) {
          sVar6 = strlen(pcVar3);
        }
        local_58 = pcVar3;
        local_50 = sVar6;
        String::parse_latin1((StrRange *)&local_78);
        local_88 = 0;
        local_58 = "\', stage \'";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_88);
        lVar4 = puVar2[2];
        if (lVar4 == 0) {
LAB_00119ff9:
          local_98 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_98 = 0;
          if (pcVar3 == (char *)0x0) {
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) == 0) goto LAB_00119ff9;
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00119ff9;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
              local_98 = *(long *)(lVar4 + 0x10);
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_98);
          }
        }
        local_a8 = 0;
        local_58 = "\', version \'";
        local_50 = 0xc;
        String::parse_latin1((StrRange *)&local_a8);
        operator+((char *)&local_b0,(String *)"Error parsing shader \'");
        String::operator+((String *)&local_a0,(String *)&local_b0);
        String::operator+((String *)&local_90,(String *)&local_a0);
        String::operator+((String *)&local_80,(String *)&local_90);
        String::operator+((String *)&local_70,(String *)&local_80);
        String::operator+((String *)&local_60,(String *)&local_70);
        String::operator+((String *)&local_58,(String *)&local_60);
        print_error((String *)&local_58);
        pcVar3 = local_58;
        if (local_58 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_58 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_58 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
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
        lVar4 = local_80;
        if (local_80 != 0) {
          LOCK();
          plVar1 = (long *)(local_80 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_80 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_90;
        if (local_90 != 0) {
          LOCK();
          plVar1 = (long *)(local_90 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a0;
        if (local_a0 != 0) {
          LOCK();
          plVar1 = (long *)(local_a0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_b0;
        if (local_b0 != 0) {
          LOCK();
          plVar1 = (long *)(local_b0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b0 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_a8;
        if (local_a8 != 0) {
          LOCK();
          plVar1 = (long *)(local_a8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_a8 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_98;
        if (local_98 != 0) {
          LOCK();
          plVar1 = (long *)(local_98 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
        lVar4 = local_88;
        if (local_88 != 0) {
          LOCK();
          plVar1 = (long *)(local_88 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_88 = 0;
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
        if (local_b8 != 0) goto LAB_00119b18;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 5);
LAB_00119fb7:
    }
  }
  else {
    local_68 = 0;
    local_58 = "\':\n\n";
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    operator+((char *)&local_70,(String *)"Error parsing shader \'");
    String::operator+((String *)&local_60,(String *)&local_70);
    String::operator+((String *)&local_58,(String *)&local_60);
    _err_print_error("print_errors","./servers/rendering/rendering_device_binds.h",0x18a,
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<BetsyCompressor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::call
          (CallableCustomMethodPointer<BetsyCompressor,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011a31f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011a31f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011a3e1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011a31f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC59,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011a3e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Dictionary_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0011a439;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1b);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011a530:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011a530;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0011a439:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBind* create_method_bind<RDShaderFile, Ref<RDShaderSPIRV> const&, StringName const&>(void
   (RDShaderFile::*)(Ref<RDShaderSPIRV> const&, StringName const&)) */

MethodBind *
create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>const&,StringName_const&>
          (_func_void_Ref_ptr_StringName_ptr *param_1)

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
  *(_func_void_Ref_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122df0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Ref<RDShaderSPIRV>, StringName
   const&>(Ref<RDShaderSPIRV> (RDShaderFile::*)(StringName const&) const) */

MethodBind *
create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>,StringName_const&>
          (_func_Ref_StringName_ptr *param_1)

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
  *(_func_Ref_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122e50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, TypedArray<StringName>>(TypedArray<StringName>
   (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,TypedArray<StringName>>(_func_TypedArray *param_1)

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
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122eb0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, String const&>(void (RDShaderFile::*)(String
   const&)) */

MethodBind * create_method_bind<RDShaderFile,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122f10;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, String>(String (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,String>(_func_String *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00122f70;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Dictionary const&>(void (RDShaderFile::*)(Dictionary
   const&)) */

MethodBind * create_method_bind<RDShaderFile,Dictionary_const&>(_func_void_Dictionary_ptr *param_1)

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
  *(_func_void_Dictionary_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00122fd0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<RDShaderFile, Dictionary>(Dictionary (RDShaderFile::*)() const) */

MethodBind * create_method_bind<RDShaderFile,Dictionary>(_func_Dictionary *param_1)

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
  *(_func_Dictionary **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00123030;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RDShaderFile";
  local_30 = 0xc;
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



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* RDShaderFile::_bind_methods() */

void RDShaderFile::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined8 local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  long local_c0;
  char *local_b8;
  int local_b0;
  long local_a8;
  undefined4 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (char *)0x0;
  local_88 = 0;
  local_98 = (Variant *)0x11afaa;
  pcStack_90 = "version";
  auStack_70._8_8_ = auStack_70._0_8_;
  auStack_70._0_8_ = &pcStack_90;
  uVar5 = (uint)(Variant *)&local_78;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"set_bytecode",uVar5);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_d8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar4 = create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>const&,StringName_const&>(set_bytecode)
  ;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') &&
     (((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_d8 != (char *)0x0)))) {
    StringName::unref();
  }
  local_d8 = (char *)0x0;
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x11afb3;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"get_spirv",uVar5);
  Variant::Variant((Variant *)&local_78,(StringName *)&local_d8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar4 = create_method_bind<RDShaderFile,Ref<RDShaderSPIRV>,StringName_const&>(get_spirv);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_version_list",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<RDShaderFile,TypedArray<StringName>>(get_version_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x11afcc;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"set_base_error",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<RDShaderFile,String_const&>(set_base_error);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"get_base_error",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<RDShaderFile,String>(get_base_error);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x11aff0;
  local_78 = &local_98;
  D_METHODP((char *)&local_c8,(char ***)"_set_versions",uVar5);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<RDShaderFile,Dictionary_const&>(_set_versions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"_get_versions",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar4 = create_method_bind<RDShaderFile,Dictionary>(_get_versions);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "_versions";
  local_c0 = 9;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,0x1b);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 == 0) {
LAB_0011b6bb:
    local_a0 = 10;
    StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 10;
    if (local_b0 != 0x11) goto LAB_0011b6bb;
    StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
    if (local_b8 == local_d8) {
      if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_b8 = local_d8;
    }
  }
  local_108 = 0;
  local_d8 = "RDShaderFile";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,-1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar3 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((((StringName::configured != '\0') &&
       ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_e0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_e0,true);
  _scs_create((char *)&local_e8,true);
  local_c8 = "";
  local_f0 = 0;
  local_f8 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_c8 = "base_error";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_100);
  local_c8 = (char *)CONCAT44(local_c8._4_4_,4);
  local_c0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)&local_100);
  }
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (local_f8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_f8);
    local_a0 = 6;
    if (local_b0 == 0x11) {
      StringName::StringName((StringName *)&local_d8,(String *)&local_a8,false);
      if (local_b8 == local_d8) {
        if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_b8 = local_d8;
      }
      goto LAB_0011b932;
    }
  }
  local_a0 = 6;
  StringName::operator=((StringName *)&local_b8,(StringName *)&local_f0);
LAB_0011b932:
  local_108 = 0;
  local_d8 = "RDShaderFile";
  local_d0 = 0xc;
  String::parse_latin1((StrRange *)&local_108);
  StringName::StringName((StringName *)&local_d8,(String *)&local_108,false);
  ClassDB::add_property
            ((StringName *)&local_d8,(PropertyInfo *)&local_c8,(StringName *)&local_e8,
             (StringName *)&local_e0,-1);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  lVar3 = local_a8;
  if (local_a8 != 0) {
    LOCK();
    plVar1 = (long *)(local_a8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if (((StringName::configured != '\0') &&
      ((local_f0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_e8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_e0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RDShaderFile::_initialize_classv() */

void RDShaderFile::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      Resource::_bind_methods();
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RDShaderFile";
    local_70 = 0;
    local_50 = 0xc;
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



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011c340:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0011c340;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0011c21a:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0011c21a;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0011c1e7;
  }
  if (lVar8 == lVar5) {
LAB_0011c2bb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011c1e7:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011c29b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0011c2bb;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0011c29b:
  puVar7[-1] = param_1;
  return 0;
}



/* RDShaderFile::get_version_list() const */

void RDShaderFile::get_version_list(void)

{
  int iVar1;
  Variant *pVVar2;
  StringName *pSVar3;
  long lVar4;
  StringName *pSVar5;
  long in_RSI;
  long lVar6;
  uint uVar7;
  Array *in_RDI;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_90;
  long local_70 [2];
  StringName *local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  plVar8 = *(long **)(in_RSI + 600);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = (StringName *)0x0;
  if (plVar8 != (long *)0x0) {
    pSVar5 = (StringName *)0x0;
    do {
      StringName::StringName((StringName *)local_70,(StringName *)(plVar8 + 2));
      if (pSVar5 == (StringName *)0x0) {
        lVar6 = 1;
      }
      else {
        lVar6 = *(long *)(pSVar5 + -8) + 1;
      }
      iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)&local_60,lVar6);
      pSVar5 = local_60;
      if (iVar1 == 0) {
        if (local_60 == (StringName *)0x0) {
          lVar9 = -1;
          lVar6 = 0;
        }
        else {
          lVar6 = *(long *)(local_60 + -8);
          lVar9 = lVar6 + -1;
          if (-1 < lVar9) {
            CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60);
            pSVar5 = local_60;
            StringName::operator=(local_60 + lVar9 * 8,(StringName *)local_70);
            goto LAB_0011c4ad;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar9,lVar6,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
        pSVar5 = local_60;
      }
LAB_0011c4ad:
      if ((StringName::configured != '\0') && (local_70[0] != 0)) {
        StringName::unref();
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
    if (pSVar5 != (StringName *)0x0) {
      lVar6 = *(long *)(pSVar5 + -8);
      if ((lVar6 != 0) &&
         (CowData<StringName>::_copy_on_write((CowData<StringName> *)&local_60), pSVar5 = local_60,
         lVar6 != 1)) {
        local_90 = 0;
        lVar9 = lVar6;
        do {
          lVar9 = lVar9 >> 1;
          local_90 = local_90 + 1;
        } while (lVar9 != 1);
        local_90 = local_90 * 2;
        lVar9 = lVar6;
        lVar4 = 1;
        if (lVar6 < 0x11) {
          do {
            lVar9 = lVar4 + 1;
            SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar4,pSVar5);
            lVar4 = lVar9;
          } while (lVar6 != lVar9);
        }
        else {
          do {
            local_90 = local_90 + -1;
            pSVar3 = (StringName *)
                     SortArray<StringName,StringName::AlphCompare,true>::median_of_3
                               (pSVar5,pSVar5 + (lVar9 >> 1) * 8,pSVar5 + lVar9 * 8 + -8);
            StringName::StringName((StringName *)local_70,pSVar3);
            lVar4 = SortArray<StringName,StringName::AlphCompare,true>::partitioner
                              (0,lVar9,(StringName *)local_70,pSVar5);
            if ((StringName::configured != '\0') && (local_70[0] != 0)) {
              StringName::unref();
            }
            SortArray<StringName,StringName::AlphCompare,true>::introsort
                      (lVar4,lVar9,pSVar5,local_90);
            lVar9 = 1;
            if (lVar4 < 0x11) goto LAB_0011c7a8;
            lVar9 = lVar4;
          } while (local_90 != 0);
          SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0,lVar4,lVar4,pSVar5);
          lVar9 = 1;
LAB_0011c7a8:
          do {
            lVar4 = lVar9 + 1;
            SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0,lVar9,pSVar5);
            lVar9 = lVar4;
          } while (lVar4 != 0x10);
          do {
            StringName::StringName((StringName *)local_70,pSVar5 + lVar4 * 8);
            SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert
                      (lVar4,(StringName *)local_70,pSVar5);
            if ((StringName::configured != '\0') && (local_70[0] != 0)) {
              StringName::unref();
            }
            lVar4 = lVar4 + 1;
          } while (lVar6 != lVar4);
        }
      }
      goto LAB_0011c4ed;
    }
  }
  pSVar5 = (StringName *)0x0;
LAB_0011c4ed:
  Array::Array(in_RDI);
  local_58[0] = 0;
  local_58[1] = 0;
  local_70[0] = 0;
  local_50 = (undefined1  [16])0x0;
  uVar7 = (uint)in_RDI;
  Array::set_typed(uVar7,(StringName *)0x15,(Variant *)local_70);
  if ((StringName::configured != '\0') && (local_70[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (pSVar5 == (StringName *)0x0) {
    Array::resize(uVar7);
  }
  else {
    Array::resize(uVar7);
    if (0 < *(long *)(pSVar5 + -8)) {
      lVar6 = 0;
      do {
        while( true ) {
          Variant::Variant((Variant *)local_58,pSVar5 + lVar6 * 8);
          pVVar2 = (Variant *)Array::operator[](uVar7);
          if (pVVar2 == (Variant *)local_58) break;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar2 = 0;
          *(int *)pVVar2 = local_58[0];
          *(undefined8 *)(pVVar2 + 8) = local_50._0_8_;
          *(undefined8 *)(pVVar2 + 0x10) = local_50._8_8_;
LAB_0011c5ac:
          lVar6 = lVar6 + 1;
          if (*(long *)(pSVar5 + -8) <= lVar6) goto LAB_0011c600;
        }
        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0011c5ac;
        lVar6 = lVar6 + 1;
        Variant::_clear_internal();
      } while (lVar6 < *(long *)(pSVar5 + -8));
    }
  }
LAB_0011c600:
  CowData<StringName>::_unref((CowData<StringName> *)&local_60);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RDShaderFile::_get_versions() const */

Dictionary * RDShaderFile::_get_versions(void)

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
  code *pcVar11;
  int iVar12;
  uint uVar13;
  Variant *pVVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  long in_RSI;
  uint uVar18;
  Dictionary *in_RDI;
  uint uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  Array local_68 [8];
  long local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  iVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  get_version_list();
  Dictionary::Dictionary(in_RDI);
  iVar12 = Array::size();
  if (0 < iVar12) {
    do {
      iVar12 = (int)local_68;
      Array::operator[](iVar12);
      Variant::operator_cast_to_StringName((Variant *)&local_60);
      if ((*(long *)(in_RSI + 0x248) == 0) || (*(int *)(in_RSI + 0x26c) == 0)) {
LAB_0011ca90:
        _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                         "FATAL: Condition \"!exists\" is true.",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
      uVar20 = CONCAT44(0,uVar1);
      lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
      if (local_60 == 0) {
        uVar13 = StringName::get_empty_hash();
      }
      else {
        uVar13 = *(uint *)(local_60 + 0x20);
      }
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar20;
      lVar16 = SUB168(auVar3 * auVar7,8);
      uVar18 = *(uint *)(*(long *)(in_RSI + 0x250) + lVar16 * 4);
      uVar15 = SUB164(auVar3 * auVar7,8);
      if (uVar18 == 0) goto LAB_0011ca90;
      uVar19 = 0;
      while ((uVar18 != uVar13 ||
             (*(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar16 * 8) + 0x10) != local_60))) {
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar15 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar20;
        lVar16 = SUB168(auVar4 * auVar8,8);
        uVar18 = *(uint *)(*(long *)(in_RSI + 0x250) + lVar16 * 4);
        uVar15 = SUB164(auVar4 * auVar8,8);
        if ((uVar18 == 0) ||
           (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar20, auVar6._8_8_ = 0,
           auVar6._0_8_ = (ulong)((uVar1 + uVar15) - SUB164(auVar5 * auVar9,8)) * lVar2,
           auVar10._8_8_ = 0, auVar10._0_8_ = uVar20, SUB164(auVar6 * auVar10,8) < uVar19))
        goto LAB_0011ca90;
      }
      Variant::Variant((Variant *)local_58,
                       *(Object **)(*(long *)(*(long *)(in_RSI + 0x248) + (ulong)uVar15 * 8) + 0x18)
                      );
      Array::operator[](iVar12);
      pVVar14 = (Variant *)Dictionary::operator[]((Variant *)in_RDI);
      if (pVVar14 == (Variant *)local_58) {
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        if (Variant::needs_deinit[*(int *)pVVar14] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar14 = 0;
        *(int *)pVVar14 = local_58[0];
        *(undefined8 *)(pVVar14 + 8) = local_50;
        *(undefined8 *)(pVVar14 + 0x10) = uStack_48;
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      iVar17 = iVar17 + 1;
      iVar12 = Array::size();
    } while (iVar17 < iVar12);
  }
  Array::~Array(local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RID>::_unref() */

void __thiscall CowData<RID>::_unref(CowData<RID> *this)

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



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar7 = 0;
    lVar2 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar2 = lVar7 * 8;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011cdd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 8 - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_0011cdd0;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_0011cd5c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_0011cd01;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011cd5c;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset(puVar8 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0011cd01:
  puVar8[-1] = param_1;
  return 0;
}



/* CowData<Vector<unsigned char> >::_unref() */

void __thiscall CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 8) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 8) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 8);
              *(undefined8 *)(lVar6 + 8) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RenderingDevice::Uniform>::_unref() */

void __thiscall CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x20) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x20) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x20);
              *(undefined8 *)(lVar6 + 0x20) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x28;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref() */

void __thiscall
CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_unref
          (CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
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



/* CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_realloc
          (CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this,long param_1)

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
/* Error CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>
          (CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
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
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_0011d3f0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0011d3f0;
  if (param_1 <= lVar10) {
    puVar6 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar8) {
LAB_0011d2b1:
        if (lVar9 != lVar7) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          puVar6 = *(undefined8 **)this;
          if (puVar6 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        goto LAB_0011d357;
      }
      while (puVar6[uVar8 * 3 + 2] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar6[-1] <= uVar8) goto LAB_0011d2b1;
      }
      LOCK();
      plVar1 = (long *)(puVar6[uVar8 * 3 + 2] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = puVar6[uVar8 * 3 + 2];
        puVar6[uVar8 * 3 + 2] = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar6 = *(undefined8 **)this;
    }
    goto LAB_0011d446;
  }
  if (lVar9 == lVar7) {
LAB_0011d373:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0011d446:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar10 = puVar6[-1];
    if (param_1 <= lVar10) goto LAB_0011d357;
  }
  else {
    if (lVar10 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011d373;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  puVar4 = puVar6 + lVar10 * 3;
  do {
    *(undefined4 *)puVar4 = 5;
    puVar5 = puVar4 + 3;
    puVar4[2] = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar6 + param_1 * 3);
LAB_0011d357:
  puVar6[-1] = param_1;
  return 0;
}



/* RDShaderFile::get_spirv_stages(StringName const&) const */

StringName * RDShaderFile::get_spirv_stages(StringName *param_1)

{
  CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *this;
  long *plVar1;
  int *piVar2;
  uint uVar3;
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
  code *pcVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long *in_RDX;
  long lVar25;
  long *plVar26;
  long in_RSI;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  long lVar32;
  long in_FS_OFFSET;
  bool bVar33;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_RSI + 0x248) != 0) && (*(int *)(in_RSI + 0x26c) != 0)) {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
    lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
    if (*in_RDX == 0) {
      uVar22 = StringName::get_empty_hash();
    }
    else {
      uVar22 = *(uint *)(*in_RDX + 0x20);
    }
    uVar28 = CONCAT44(0,uVar3);
    lVar23 = *(long *)(in_RSI + 0x250);
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar22 * lVar32;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar28;
    lVar25 = SUB168(auVar4 * auVar12,8);
    uVar27 = *(uint *)(lVar23 + lVar25 * 4);
    iVar31 = SUB164(auVar4 * auVar12,8);
    if (uVar27 != 0) {
      uVar29 = 0;
      while ((uVar27 != uVar22 ||
             (lVar25 = *(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar25 * 8) + 0x10),
             lVar25 != *in_RDX))) {
        uVar29 = uVar29 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(iVar31 + 1) * lVar32;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar28;
        lVar25 = SUB168(auVar5 * auVar13,8);
        uVar27 = *(uint *)(lVar23 + lVar25 * 4);
        iVar31 = SUB164(auVar5 * auVar13,8);
        if ((uVar27 == 0) ||
           (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar27 * lVar32, auVar14._8_8_ = 0,
           auVar14._0_8_ = uVar28, auVar7._8_8_ = 0,
           auVar7._0_8_ = (ulong)((uVar3 + iVar31) - SUB164(auVar6 * auVar14,8)) * lVar32,
           auVar15._8_8_ = 0, auVar15._0_8_ = uVar28, SUB164(auVar7 * auVar15,8) < uVar29))
        goto LAB_0011d870;
      }
      if ((*(long *)(in_RSI + 0x248) == 0) || (*(int *)(in_RSI + 0x26c) == 0)) goto LAB_0011d8a0;
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x268) * 4);
      uVar28 = CONCAT44(0,uVar3);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x268) * 8);
      if (lVar25 == 0) {
        uVar22 = StringName::get_empty_hash();
        lVar23 = *(long *)(in_RSI + 0x250);
      }
      else {
        uVar22 = *(uint *)(lVar25 + 0x20);
      }
      if (uVar22 == 0) {
        uVar22 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar22 * lVar32;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar28;
      lVar25 = SUB168(auVar8 * auVar16,8);
      uVar27 = *(uint *)(lVar23 + lVar25 * 4);
      uVar29 = SUB164(auVar8 * auVar16,8);
      if (uVar27 == 0) goto LAB_0011d8a0;
      uVar30 = 0;
      while ((uVar22 != uVar27 ||
             (*(long *)(*(long *)(*(long *)(in_RSI + 0x248) + lVar25 * 8) + 0x10) != *in_RDX))) {
        uVar30 = uVar30 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar29 + 1) * lVar32;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar28;
        lVar25 = SUB168(auVar9 * auVar17,8);
        uVar27 = *(uint *)(lVar23 + lVar25 * 4);
        uVar29 = SUB164(auVar9 * auVar17,8);
        if ((uVar27 == 0) ||
           (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar27 * lVar32, auVar18._8_8_ = 0,
           auVar18._0_8_ = uVar28, auVar11._8_8_ = 0,
           auVar11._0_8_ = (ulong)((uVar3 + uVar29) - SUB164(auVar10 * auVar18,8)) * lVar32,
           auVar19._8_8_ = 0, auVar19._0_8_ = uVar28, SUB164(auVar11 * auVar19,8) < uVar30)) {
LAB_0011d8a0:
          _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                           "FATAL: Condition \"!exists\" is true.",0,0);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar20 = (code *)invalidInstructionException();
          (*pcVar20)();
        }
      }
      iVar31 = 0;
      this = (CowData<RenderingDeviceCommons::ShaderStageSPIRVData> *)(param_1 + 8);
      lVar32 = *(long *)(*(long *)(*(long *)(in_RSI + 0x248) + (ulong)uVar29 * 8) + 0x18);
      *(undefined8 *)(param_1 + 8) = 0;
      plVar26 = (long *)(lVar32 + 0x248);
      do {
        while ((lVar32 = *plVar26, lVar32 == 0 || (*(long *)(lVar32 + -8) == 0))) {
LAB_0011d6e0:
          iVar31 = iVar31 + 1;
          plVar26 = plVar26 + 2;
          if (iVar31 == 5) goto LAB_0011d840;
        }
        plVar1 = (long *)(lVar32 + -0x10);
        do {
          lVar32 = *plVar1;
          if (lVar32 == 0) goto LAB_0011d93e;
          LOCK();
          lVar23 = *plVar1;
          bVar33 = lVar32 == lVar23;
          if (bVar33) {
            *plVar1 = lVar32 + 1;
            lVar23 = lVar32;
          }
          UNLOCK();
        } while (!bVar33);
        if (lVar23 == -1) {
LAB_0011d93e:
          local_48 = 0;
          lVar32 = local_48;
LAB_0011d76d:
          local_48 = lVar32;
          lVar23 = *(long *)(param_1 + 8);
          lVar32 = local_48;
          if (lVar23 != 0) goto LAB_0011d77a;
LAB_0011d8e2:
          lVar25 = local_48;
          iVar21 = CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>(this,1);
          if (iVar21 == 0) goto LAB_0011d792;
LAB_0011d900:
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
        else {
          lVar32 = *plVar26;
          local_48 = 0;
          if (lVar32 == 0) goto LAB_0011d93e;
          plVar1 = (long *)(lVar32 + -0x10);
          do {
            lVar23 = *plVar1;
            if (lVar23 == 0) goto LAB_0011d8d0;
            LOCK();
            lVar25 = *plVar1;
            bVar33 = lVar23 == lVar25;
            if (bVar33) {
              *plVar1 = lVar23 + 1;
              lVar25 = lVar23;
            }
            UNLOCK();
          } while (!bVar33);
          if (lVar25 != -1) goto LAB_0011d76d;
LAB_0011d8d0:
          lVar23 = *(long *)(param_1 + 8);
          if (lVar23 == 0) goto LAB_0011d8e2;
LAB_0011d77a:
          lVar25 = local_48;
          iVar21 = CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::resize<false>
                             (this,*(long *)(lVar23 + -8) + 1);
          if (iVar21 != 0) goto LAB_0011d900;
LAB_0011d792:
          if (*(long *)(param_1 + 8) == 0) {
            lVar24 = -1;
            lVar23 = 0;
LAB_0011d982:
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar24,lVar23,"p_index","size()","",
                       false,false);
          }
          else {
            lVar23 = *(long *)(*(long *)(param_1 + 8) + -8);
            lVar24 = lVar23 + -1;
            if (lVar24 < 0) goto LAB_0011d982;
            CowData<RenderingDeviceCommons::ShaderStageSPIRVData>::_copy_on_write(this);
            piVar2 = (int *)(*(long *)(param_1 + 8) + lVar24 * 0x18);
            *piVar2 = iVar31;
            if (*(long *)(piVar2 + 4) != lVar25) {
              CowData<unsigned_char>::_ref
                        ((CowData<unsigned_char> *)(piVar2 + 4),(CowData *)&local_48);
            }
          }
        }
        if (lVar25 != 0) {
          LOCK();
          plVar1 = (long *)(lVar25 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
        if (lVar32 == 0) goto LAB_0011d6e0;
        plVar1 = (long *)(lVar32 + -0x10);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_0011d6e0;
        iVar31 = iVar31 + 1;
        plVar26 = plVar26 + 2;
        Memory::free_static(plVar1,false);
      } while (iVar31 != 5);
      goto LAB_0011d840;
    }
  }
LAB_0011d870:
  _err_print_error("get_spirv_stages","./servers/rendering/rendering_device_binds.h",0x16d,
                   "Condition \"!versions.has(p_version)\" is true. Returning: Vector<RD::ShaderStageSPIRVData>()"
                   ,0,0);
  *(undefined8 *)(param_1 + 8) = 0;
LAB_0011d840:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* CowData<Vector<unsigned char> >::_realloc(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::_realloc(CowData<Vector<unsigned_char>> *this,long param_1)

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
/* Error CowData<Vector<unsigned char> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<unsigned_char>>::resize<false>(CowData<Vector<unsigned_char>> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
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
    lVar8 = 0;
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
    lVar8 = lVar6 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_0011dce0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_0011dce0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar9 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar9) {
LAB_0011db92:
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar3 = uVar9 * 0x10 + lVar6;
        if (*(long *)(lVar3 + 8) != 0) break;
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar9) goto LAB_0011db92;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar3 + 8) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *(long *)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar9 = uVar9 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_0011dd36;
  }
  if (lVar10 == lVar8) {
LAB_0011dc4f:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011dd36:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar6 = puVar7[-1];
    if (param_1 <= lVar6) goto LAB_0011dc31;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011dc4f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar6 = 0;
  }
  puVar5 = puVar7 + lVar6 * 2;
  do {
    puVar5[1] = 0;
    puVar5 = puVar5 + 2;
  } while (puVar5 != puVar7 + param_1 * 2);
LAB_0011dc31:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<RenderingDevice::Uniform>::_realloc(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this,long param_1)

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
/* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */

undefined8 __thiscall
CowData<RenderingDevice::Uniform>::resize<false>
          (CowData<RenderingDevice::Uniform> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
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
    lVar8 = 0;
    lVar9 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar9 = lVar8 * 0x28;
    if (lVar9 != 0) {
      uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      lVar9 = (uVar10 | uVar10 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x28 == 0) {
LAB_0011e070:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar10 = param_1 * 0x28 - 1;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar10 = uVar10 | uVar10 >> 2;
  uVar10 = uVar10 | uVar10 >> 4;
  uVar10 = uVar10 | uVar10 >> 8;
  uVar10 = uVar10 | uVar10 >> 0x10;
  uVar10 = uVar10 | uVar10 >> 0x20;
  lVar11 = uVar10 + 1;
  if (lVar11 == 0) goto LAB_0011e070;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar10 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar10) {
LAB_0011df01:
        if (lVar11 != lVar9) {
          uVar4 = _realloc(this,lVar11);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while( true ) {
        lVar2 = lVar8 + uVar10 * 0x28;
        if (*(long *)(lVar2 + 0x20) != 0) break;
        uVar10 = uVar10 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar10) goto LAB_0011df01;
      }
      LOCK();
      plVar1 = (long *)(*(long *)(lVar2 + 0x20) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar8 = *(long *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x20) = 0;
        Memory::free_static((void *)(lVar8 + -0x10),false);
      }
      uVar10 = uVar10 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_0011e0c6;
  }
  if (lVar11 == lVar9) {
LAB_0011dfe3:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011e0c6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar8 = puVar7[-1];
    if (param_1 <= lVar8) goto LAB_0011dfc0;
  }
  else {
    if (lVar8 != 0) {
      uVar4 = _realloc(this,lVar11);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011dfe3;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar10 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar8 = 0;
  }
  uVar4 = _LC115;
  puVar5 = puVar7 + lVar8 * 5;
  do {
    *puVar5 = uVar4;
    puVar6 = puVar5 + 5;
    *(undefined1 *)(puVar5 + 1) = 0;
    puVar5[2] = 0;
    puVar5[4] = 0;
    puVar5 = puVar6;
  } while (puVar6 != puVar7 + param_1 * 5);
LAB_0011dfc0:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011e1e8) */
/* WARNING: Removing unreachable block (ram,0x0011e37d) */
/* WARNING: Removing unreachable block (ram,0x0011e389) */
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



/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Dictionary>::call
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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e590;
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
      (*(code *)pVVar2)((Dictionary *)&local_58);
      Variant::Variant((Variant *)local_48,(Dictionary *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Dictionary::~Dictionary((Dictionary *)&local_58);
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
LAB_0011e590:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Dictionary>::validated_call
          (MethodBindTRC<Dictionary> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
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
      local_48 = (Variant **)0x11e3d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011e849;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)(param_3 + 8),(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011e849:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Dictionary>::ptrcall
          (MethodBindTRC<Dictionary> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11e3d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Dictionary *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Dictionary *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011ea1a;
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
  (*pcVar1)((Dictionary *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Dictionary::operator=((Dictionary *)param_3,(Dictionary *)&local_48);
  Dictionary::~Dictionary((Dictionary *)&local_48);
LAB_0011ea1a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Dictionary_const&>::validated_call
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
      goto LAB_0011ed61;
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
                    /* WARNING: Could not recover jumptable at 0x0011ebed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011ed61:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Dictionary_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011ef41;
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
                    /* WARNING: Could not recover jumptable at 0x0011edc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011ef41:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f020;
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
      (*(code *)pVVar2)((CowData<char32_t> *)&local_58);
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
LAB_0011f020:
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
      local_48 = (Variant **)0x11e3d8;
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
      goto LAB_0011f281;
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
LAB_0011f281:
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
  void **ppvVar2;
  code *pcVar3;
  long *plVar4;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11e3d8;
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
      goto LAB_0011f46e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar2 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar2 + -2,false);
    }
  }
LAB_0011f46e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011f7a1;
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
                    /* WARNING: Could not recover jumptable at 0x0011f62d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011f7a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011f981;
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
                    /* WARNING: Could not recover jumptable at 0x0011f809. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011f981:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<StringName>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  Variant *pVVar3;
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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_58 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fa60;
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
      (*(code *)pVVar3)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
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
LAB_0011fa60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::validated_call
          (MethodBindTRC<TypedArray<StringName>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
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
      local_48 = (Variant **)0x11e3d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fcb9;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011fcb9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<StringName>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::ptrcall
          (MethodBindTRC<TypedArray<StringName>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
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
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x11e3d8;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe8a;
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
  (*pcVar1)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_0011fe8a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::ptrcall
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,Object *param_1,void **param_2,
          void *param_3)

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
      local_48 = (Object *)0x11e3d8;
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
      goto LAB_001200b7;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001200b7;
    *(undefined8 *)param_3 = 0;
    goto LAB_00120101;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00120101;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00120101:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001200b7;
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
LAB_001200b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  Variant *pVVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar6 = param_2[0x23];
      if (pVVar6 == (Variant *)0x0) {
        pVVar6 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar6 = param_2[1] + 0x20;
    }
    if (local_68 == (Object *)*(long *)pVVar6) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = (Object *)0x11e3d8;
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001203e9;
    }
    if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar7 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar7 & 1) != 0) {
    pcVar7 = *(code **)(pcVar7 + *(long *)((long)param_2 + lVar1) + -1);
  }
  lVar2 = *(long *)(param_3 + 8);
  Variant::Variant((Variant *)local_58,*(Object **)(*(long *)param_3 + 0x10));
  local_68 = (Object *)0x0;
  pOVar5 = (Object *)Variant::get_validated_object();
  pOVar3 = local_68;
  if (pOVar5 != local_68) {
    if (pOVar5 == (Object *)0x0) {
      if (local_68 != (Object *)0x0) {
        local_68 = (Object *)0x0;
LAB_001203a4:
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar3);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
      }
    }
    else {
      pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0);
      if (pOVar3 != pOVar5) {
        local_68 = pOVar5;
        if (pOVar5 != (Object *)0x0) {
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_68 = (Object *)0x0;
          }
        }
        if (pOVar3 != (Object *)0x0) goto LAB_001203a4;
      }
    }
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar7)((long *)((long)param_2 + lVar1),(StringName *)&local_68,lVar2 + 8);
  if (local_68 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_68);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001203e9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Object *pOVar3;
  char cVar4;
  long *plVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar5 = (long *)param_2[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar5 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11e3d8;
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
      goto LAB_001206b3;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  uVar2 = *(undefined8 *)((long)param_3 + 8);
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0012068c:
    local_48 = (Object *)0x0;
  }
  else {
    cVar4 = RefCounted::init_ref();
    if (cVar4 == '\0') goto LAB_0012068c;
  }
  (*pcVar6)((long *)((long)param_2 + lVar1),(StringName *)&local_48,uVar2);
  if (local_48 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar3 = local_48;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_48);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_001206b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Dictionary_const&>::call
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
  undefined8 local_40;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120a10;
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
      if (in_R8D != 1) goto LAB_00120a60;
LAB_00120a50:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120a60:
        uVar6 = 4;
        goto LAB_00120a05;
      }
      if (in_R8D == 1) goto LAB_00120a50;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1b);
    uVar4 = _LC134;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Dictionary((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    Dictionary::~Dictionary((Dictionary *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00120a05:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120a10:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
  undefined8 local_40;
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
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00120d40;
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
      if (in_R8D != 1) goto LAB_00120d90;
LAB_00120d80:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00120d90:
        uVar6 = 4;
        goto LAB_00120d35;
      }
      if (in_R8D == 1) goto LAB_00120d80;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC136;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_00120d35:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00120d40:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
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
  Object *local_70;
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
      local_70 = (Object *)0x0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001210f0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00121140;
LAB_00121130:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00121140:
        uVar7 = 4;
        goto LAB_001210e5;
      }
      if (in_R8D == 1) goto LAB_00121130;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x15);
    uVar4 = _LC137;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_68);
    (*(code *)pVVar12)(&local_70,(Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_68);
    Variant::Variant((Variant *)local_58,local_70);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    if (((local_70 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar5 = local_70, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_70), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_001210e5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_001210f0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::validated_call
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

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
      goto LAB_001213cd;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
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
LAB_001213cd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Ref<RDShaderSPIRV> const&, StringName
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Ref<RDShaderSPIRV> const&, StringName
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Ref<RDShaderSPIRV>const&,StringName_const&>
               (__UnexistingClass *param_1,_func_void_Ref_ptr_StringName_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  Object *pOVar9;
  undefined4 in_register_0000000c;
  long *plVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  long in_stack_00000008;
  long local_50;
  Object *local_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (uint)param_5;
  if (2 < uVar12) {
    uVar8 = 3;
LAB_00121765:
    *(undefined4 *)param_6 = uVar8;
    *(undefined4 *)(param_6 + 8) = 2;
    goto LAB_0012176e;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar7 = 2 - uVar12;
  if (lVar1 == 0) {
    if (iVar7 != 0) goto LAB_00121760;
    puVar14 = (undefined4 *)*plVar10;
LAB_001217ad:
    puVar15 = (undefined4 *)plVar10[1];
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar13 = (int)lVar2;
    if (iVar13 < iVar7) {
LAB_00121760:
      uVar8 = 4;
      goto LAB_00121765;
    }
    if (uVar12 == 0) {
      lVar11 = (long)(iVar13 + -2);
      if (lVar2 <= lVar11) goto LAB_00121850;
      puVar14 = (undefined4 *)(lVar1 + lVar11 * 0x18);
    }
    else {
      puVar14 = (undefined4 *)*plVar10;
      if (uVar12 == 2) goto LAB_001217ad;
    }
    lVar11 = (long)(int)((uVar12 ^ 1) + (iVar13 - iVar7));
    if (lVar2 <= lVar11) {
LAB_00121850:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar15 = (undefined4 *)(lVar1 + lVar11 * 0x18);
  }
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Ref_ptr_StringName_ptr **)
               (param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar6 = Variant::can_convert_strict(*puVar15,0x15);
  uVar4 = _LC138;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_StringName((Variant *)&local_50);
  cVar6 = Variant::can_convert_strict(*puVar14);
  uVar4 = _LC139;
  if (cVar6 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar9 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar9 != local_48) {
    if (pOVar9 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_001217d2:
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
      pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&RDShaderSPIRV::typeinfo,0);
      if (pOVar5 != pOVar9) {
        local_48 = pOVar9;
        if (pOVar9 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001217d2;
      }
    }
  }
  (*param_2)((Ref *)(param_1 + (long)param_3),(StringName *)&local_48);
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
LAB_0012176e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC59,"./core/object/method_bind.h",0x154,
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
      goto LAB_001218f6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Ref<RDShaderSPIRV>const&,StringName_const&>
            (p_Var4,(_func_void_Ref_ptr_StringName_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001218f6:
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
  if (iVar5 != param_1) goto LAB_00121b37;
  local_78 = 0;
  local_68 = &_LC0;
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
LAB_00121c35:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00121c35;
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
LAB_00121b37:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
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
  if (iVar5 != param_1) goto LAB_00121e07;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00121f05:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00121f05;
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
LAB_00121e07:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar1 = local_68._0_4_;
    *(undefined8 *)(puVar1 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar1 + 4) = local_60._8_8_;
    puVar1[6] = (undefined4)local_50;
    *(undefined8 *)(puVar1 + 8) = local_48;
    puVar1[10] = local_40;
    goto LAB_001220d5;
  }
  local_70 = 0;
  local_68 = "RDShaderSPIRV";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar1[10] = 6;
LAB_001221c7:
    StringName::StringName((StringName *)&local_68,(String *)(puVar1 + 8),false);
    if (*(char **)(puVar1 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar1 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_78);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) goto LAB_001221c7;
    StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_70);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_001220d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar7;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar7 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar7 = 0;
  iVar6 = 1;
  *(undefined4 *)(pPVar7 + 0x18) = 0;
  *(undefined8 *)(pPVar7 + 0x20) = 0;
  *(undefined4 *)(pPVar7 + 0x28) = 6;
  local_8c = 0;
  *(undefined1 (*) [16])(pPVar7 + 8) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0012227a;
  local_78 = 0;
  local_68 = "RDShaderSPIRV";
  local_80 = 0;
  local_60._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0012246d:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0012246d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar7 = local_68._0_4_;
  if (*(long *)(pPVar7 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 8));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar7 + 8) = uVar4;
  }
  if (*(long *)(pPVar7 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar7 + 0x10) = uVar4;
  }
  lVar5 = local_48;
  *(int *)(pPVar7 + 0x18) = local_50;
  if (*(long *)(pPVar7 + 0x20) == local_48) {
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar7 + 0x20));
    *(long *)(pPVar7 + 0x20) = local_48;
    *(undefined4 *)(pPVar7 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar4 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar4 + -0x10),false);
    }
  }
  iVar6 = local_8c + 1;
LAB_0012227a:
  local_8c = iVar6;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_8c,pPVar7);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar7;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RDShaderFile::~RDShaderFile() */

void __thiscall RDShaderFile::~RDShaderFile(RDShaderFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* BetsyCompressor::~BetsyCompressor() */

void __thiscall BetsyCompressor::~BetsyCompressor(BetsyCompressor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Dictionary const&>::~MethodBindT() */

void __thiscall MethodBindT<Dictionary_const&>::~MethodBindT(MethodBindT<Dictionary_const&> *this)

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
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<StringName>>::~MethodBindTRC(MethodBindTRC<TypedArray<StringName>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<RDShaderSPIRV>, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<Ref<RDShaderSPIRV>,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<RDShaderSPIRV> const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&>::~MethodBindT
          (MethodBindT<Ref<RDShaderSPIRV>const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<BetsyCompressor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<BetsyCompressor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<BetsyCompressor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<BetsyCompressor, Error (BetsyCompressor::*)(BetsyFormat, Image*),
   Error, BetsyFormat, Image*>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>::
~CommandRet(CommandRet<BetsyCompressor,Error(BetsyCompressor::*)(BetsyFormat,Image*),Error,BetsyFormat,Image*>
            *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(long),false,long&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),true>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<BetsyCompressor, void (BetsyCompressor::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<BetsyCompressor,void(BetsyCompressor::*)(),false>::~Command
          (Command<BetsyCompressor,void(BetsyCompressor::*)(),false> *this)

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


