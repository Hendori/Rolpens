
/* PhysicsServer2DWrapMT::_thread_exit() */

void __thiscall PhysicsServer2DWrapMT::_thread_exit(PhysicsServer2DWrapMT *this)

{
  this[0x220] = (PhysicsServer2DWrapMT)0x1;
  return;
}



/* PhysicsServer2DWrapMT::_assign_mt_ids(long) */

void __thiscall PhysicsServer2DWrapMT::_assign_mt_ids(PhysicsServer2DWrapMT *this,long param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  uVar1 = *(undefined8 *)(in_FS_OFFSET + lRam0000000000100036);
  *(long *)(this + 0x218) = param_1;
  *(undefined8 *)(this + 0x210) = uVar1;
  return;
}



/* PhysicsServer2DWrapMT::~PhysicsServer2DWrapMT() */

void __thiscall PhysicsServer2DWrapMT::~PhysicsServer2DWrapMT(PhysicsServer2DWrapMT *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00116650;
  pOVar1 = *(Object **)(this + 0x178);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  CommandQueueMT::~CommandQueueMT((CommandQueueMT *)(this + 0x180));
  PhysicsServer2D::~PhysicsServer2D((PhysicsServer2D *)this);
  return;
}



/* PhysicsServer2DWrapMT::~PhysicsServer2DWrapMT() */

void __thiscall PhysicsServer2DWrapMT::~PhysicsServer2DWrapMT(PhysicsServer2DWrapMT *this)

{
  ~PhysicsServer2DWrapMT(this);
  operator_delete(this,0x228);
  return;
}



/* PhysicsServer2DWrapMT::flush_queries() */

void __thiscall PhysicsServer2DWrapMT::flush_queries(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x580);
  if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
    if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
      if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
      if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
        if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
        if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
          if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x580);
          if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
                    /* WARNING: Could not recover jumptable at 0x001001a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x580))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001001b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001001b8:
                    /* WARNING: Could not recover jumptable at 0x001001b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::end_sync() */

void __thiscall PhysicsServer2DWrapMT::end_sync(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x588);
  if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
    if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
      if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
      if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
        if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
        if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
          if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x588);
          if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
                    /* WARNING: Could not recover jumptable at 0x00100291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x588))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001002a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001002a8:
                    /* WARNING: Could not recover jumptable at 0x001002a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
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



/* PhysicsServer2DWrapMT::PhysicsServer2DWrapMT(PhysicsServer2D*, bool) */

void __thiscall
PhysicsServer2DWrapMT::PhysicsServer2DWrapMT
          (PhysicsServer2DWrapMT *this,PhysicsServer2D *param_1,bool param_2)

{
  PhysicsServer2D::PhysicsServer2D((PhysicsServer2D *)this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00116650;
  CommandQueueMT::CommandQueueMT((CommandQueueMT *)(this + 0x180));
  this[0x220] = (PhysicsServer2DWrapMT)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0xffffffffffffffff;
  *(PhysicsServer2D **)(this + 0x178) = param_1;
  this[0x221] = (PhysicsServer2DWrapMT)param_2;
  return;
}



/* PhysicsServer2DWrapMT::_thread_loop() */

void __thiscall PhysicsServer2DWrapMT::_thread_loop(PhysicsServer2DWrapMT *this)

{
  if (this[0x220] == (PhysicsServer2DWrapMT)0x0) {
    do {
      WorkerThreadPool::yield();
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    } while (this[0x220] == (PhysicsServer2DWrapMT)0x0);
    return;
  }
  return;
}



/* PhysicsServer2DWrapMT::sync() */

void __thiscall PhysicsServer2DWrapMT::sync(PhysicsServer2DWrapMT *this)

{
  CommandQueueMT *this_00;
  
  this_00 = (CommandQueueMT *)(this + 0x180);
  if (this[0x221] == (PhysicsServer2DWrapMT)0x0) {
    CommandQueueMT::_flush(this_00);
  }
  else {
    CommandQueueMT::push_and_sync<CommandQueueMT,void(CommandQueueMT::*)()>
              (this_00,(_func_void *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x0010042b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x178) + 0x578))();
  return;
}



/* PhysicsServer2DWrapMT::finish() */

void __thiscall PhysicsServer2DWrapMT::finish(PhysicsServer2DWrapMT *this)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  PhysicsServer2DWrapMT *local_58;
  char local_50;
  long local_40;
  
  plVar3 = *(long **)(this + 0x178);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x221] == (PhysicsServer2DWrapMT)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001004a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x590))(plVar3);
      return;
    }
LAB_0010073f:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_50 = 0;
  local_58 = this + 0x180;
  std::unique_lock<std::mutex>::lock((unique_lock<std::mutex> *)&local_58);
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar2;
  if (uVar2 <= uVar1) {
    _err_print_index_error
              ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar1,uVar8,"p_index",
               "count","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar4 = *(long *)(this + 0x1b0);
  uVar7 = (ulong)(uVar1 + 8);
  *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
  if (uVar1 + 8 < uVar2) {
    puVar6 = (undefined8 *)(lVar4 + uVar7);
    puVar6[2] = plVar3;
    *(undefined1 *)(puVar6 + 1) = 0;
    *puVar6 = &PTR_call_00117620;
    puVar6[3] = 0x591;
    puVar6[4] = 0;
    LOCK();
    this[0x208] = (PhysicsServer2DWrapMT)0x1;
    UNLOCK();
    if (*(long *)(this + 0x1f8) != -1) {
      WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
    }
    if (local_50 != '\0') {
      std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
    }
    local_50 = 0;
    local_58 = this + 0x180;
    std::unique_lock<std::mutex>::lock((unique_lock<std::mutex> *)&local_58);
    uVar1 = *(uint *)(this + 0x1a8);
    uVar7 = (ulong)uVar1;
    local_50 = '\x01';
    LocalVector<unsigned_char,unsigned_int,false,false>::resize
              ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
    uVar2 = *(uint *)(this + 0x1a8);
    uVar8 = (ulong)uVar2;
    if (uVar1 < uVar2) {
      lVar4 = *(long *)(this + 0x1b0);
      uVar7 = (ulong)(uVar1 + 8);
      *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
      if (uVar1 + 8 < uVar2) {
        puVar6 = (undefined8 *)(lVar4 + uVar7);
        *(undefined1 *)(puVar6 + 1) = 0;
        *puVar6 = &PTR_call_00117648;
        puVar6[2] = this;
        puVar6[3] = 0x100000;
        puVar6[4] = 0;
        LOCK();
        this[0x208] = (PhysicsServer2DWrapMT)0x1;
        UNLOCK();
        if (*(long *)(this + 0x1f8) != -1) {
          WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
        }
        if (local_50 != '\0') {
          std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
        }
        if (*(long *)(this + 0x218) != -1) {
          WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
          *(undefined8 *)(this + 0x218) = 0xffffffffffffffff;
        }
        *(undefined8 *)(this + 0x210) = 1;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010073f;
      }
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,uVar8,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::step(float) */

void __thiscall PhysicsServer2DWrapMT::step(PhysicsServer2DWrapMT *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_38;
  char local_30;
  long local_20;
  
  plVar3 = *(long **)(this + 0x178);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x221] == (PhysicsServer2DWrapMT)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001007a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x570))(plVar3);
      return;
    }
LAB_001008f0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_38 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_38);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_30 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_001175a8;
      puVar7[2] = plVar3;
      puVar7[3] = 0x571;
      puVar7[4] = 0;
      *(float *)(puVar7 + 5) = param_1;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_30 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_38);
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001008f0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::init() */

void __thiscall PhysicsServer2DWrapMT::init(PhysicsServer2DWrapMT *this)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  Callable *pCVar5;
  int iVar6;
  CallableCustom *this_00;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 local_60;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  pCVar5 = WorkerThreadPool::singleton;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x221] == (PhysicsServer2DWrapMT)0x0) {
    *(undefined8 *)(this + 0x210) = 1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010096c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x568))();
      return;
    }
LAB_00100b9a:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_60 = 0;
  __mutex = (pthread_mutex_t *)(this + 0x180);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC19;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00116c08;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar7 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar7;
  *(code **)(this_00 + 0x38) = _thread_loop;
  *(PhysicsServer2DWrapMT **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "PhysicsServer2DWrapMT::_thread_loop";
  Callable::Callable((Callable *)&local_58,this_00);
  uVar7 = WorkerThreadPool::add_task(pCVar5,SUB81((Callable *)&local_58,0),(String *)0x1);
  Callable::~Callable((Callable *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  *(undefined8 *)(this + 0x1f8) = uVar7;
  pthread_mutex_unlock(__mutex);
  local_50 = 0;
  local_58 = __mutex;
  std::unique_lock<std::mutex>::lock((unique_lock<std::mutex> *)&local_58);
  uVar1 = *(uint *)(this + 0x1a8);
  uVar9 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar3 = *(long *)(this + 0x1b0);
    uVar9 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar3 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar3 + uVar9);
      *puVar8 = &PTR_call_001175d0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = this;
      puVar8[3] = _assign_mt_ids;
      puVar8[4] = 0;
      puVar8[5] = uVar7;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over((long)WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CommandQueueMT::push_and_sync<PhysicsServer2D,void(PhysicsServer2D::*)()>
                  ((PhysicsServer2D *)&__mutex->__data,*(_func_void **)(this + 0x178));
        return;
      }
      goto LAB_00100b9a;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
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



/* CommandQueueMT::_no_op() */

void CommandQueueMT::_no_op(void)

{
  return;
}



/* PhysicsServer2D::is_class_ptr(void*) const */

uint __thiscall PhysicsServer2D::is_class_ptr(PhysicsServer2D *this,void *param_1)

{
  return (uint)CONCAT71(0x1176,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1176,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* PhysicsServer2D::_getv(StringName const&, Variant&) const */

undefined8 PhysicsServer2D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer2D::_setv(StringName const&, Variant const&) */

undefined8 PhysicsServer2D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer2D::_validate_propertyv(PropertyInfo&) const */

void PhysicsServer2D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PhysicsServer2D::_property_can_revertv(StringName const&) const */

undefined8 PhysicsServer2D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicsServer2D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicsServer2D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer2D::_notificationv(int, bool) */

void PhysicsServer2D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::JointType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float, RID,
   PhysicsServer2D::DampedSpringParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam, float), false, RID&, PhysicsServer2D::DampedSpringParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag) const, bool, RID, PhysicsServer2D::PinJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
::~CommandRet(CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag, bool), false, RID&, PhysicsServer2D::PinJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float, RID, PhysicsServer2D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam, float), false, RID&, PhysicsServer2D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, Vector2 const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, Vector2 const&,
   RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, RID,
   RID), false, RID&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&, bool
   const&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam) const, float, RID, PhysicsServer2D::JointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam, float), false, RID&, PhysicsServer2D::JointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Vector2 (PhysicsServer2D::*)(RID) const, Vector2,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&), false, RID&, Vector2 const&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&), false,
   RID&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>
         *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState) const, Variant, RID, PhysicsServer2D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant, RID,
   PhysicsServer2D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::CCDMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::CCDMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::CCDMode), false, RID&, PhysicsServer2D::CCDMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool, float), false,
   RID&, int&, bool&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>
         *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::BodyMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyMode), false, RID&, PhysicsServer2D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, unsigned int (PhysicsServer2D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID) const,
   Transform2D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant, RID,
   PhysicsServer2D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Transform2D const&),
   false, RID&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, ObjectID (PhysicsServer2D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID, int) const,
   Transform2D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>
            *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, int (PhysicsServer2D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, Transform2D const&),
   false, RID&, int&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID, Transform2D const&,
   bool), false, RID&, RID&, Transform2D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float, RID,
   PhysicsServer2D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter, float), false, RID&, PhysicsServer2D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::ShapeType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&> *this)

{
  return;
}



/* CommandQueueMT::Command<CommandQueueMT, void (CommandQueueMT::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<CommandQueueMT,void(CommandQueueMT::*)(),true>::~Command
          (Command<CommandQueueMT,void(CommandQueueMT::*)(),true> *this)

{
  return;
}



/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(), false>::call()
    */

void CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false>::call
               (void)

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
                    /* WARNING: Could not recover jumptable at 0x00101090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), false>::call() */

void CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false>::call(void)

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
                    /* WARNING: Could not recover jumptable at 0x001010c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), true>::call() */

void CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true>::call(void)

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
                    /* WARNING: Could not recover jumptable at 0x001010f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(long), false,
   long&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&>::
call(Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(float), false, float&>::call()
    */

void CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&>::call
               (void)

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
                    /* WARNING: Could not recover jumptable at 0x00101155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(in_RDI + 0x28),plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(bool), false, bool&>::call()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),this[0x28],
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::JointType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::JointType, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
::call(CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float, RID,
   PhysicsServer2D::DampedSpringParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
::call(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
       *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam, float), false, RID&, PhysicsServer2D::DampedSpringParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag) const, bool, RID, PhysicsServer2D::PinJointFlag>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
::call(CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
       *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined1 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag, bool), false, RID&, PhysicsServer2D::PinJointFlag&, bool&>::call()
    */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010129c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x2c),this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float, RID, PhysicsServer2D::PinJointParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
::call(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
       *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam, float), false, RID&, PhysicsServer2D::PinJointParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, RID&, RID&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             this + 0x40,this + 0x38,*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x28));
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, Vector2 const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, Vector2 const&,
   RID&, RID&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
       *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(this + 0x18);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar1)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x50),
            this + 0x48,this + 0x40,this + 0x38,*(undefined8 *)(this + 0x30),
            *(undefined8 *)(this + 0x28));
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, RID,
   RID), false, RID&, Vector2 const&, RID&, RID&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001013d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x40),
             this + 0x38,*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&, bool
   const&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&>::
call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam) const, float, RID, PhysicsServer2D::JointParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
::call(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
       *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam, float), false, RID&, PhysicsServer2D::JointParam&, float&>::call()
    */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010147c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001014ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x50),
             this + 0x40,this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001014d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Vector2 (PhysicsServer2D::*)(RID) const, Vector2,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID>::call
          (CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID> *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&), false, RID&, Vector2 const&, Vector2 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010154d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             this + 0x30,this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&), false,
   RID&, Vector2 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>::
call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState, Variant const&), false, RID&, PhysicsServer2D::BodyState&, Variant
   const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001015ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter, Variant const&), false, RID&, PhysicsServer2D::BodyParameter&,
   Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001015dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::CCDMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::CCDMode, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
::call(CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::CCDMode), false, RID&, PhysicsServer2D::CCDMode&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool, float), false,
   RID&, int&, bool&, float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>::
call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30),this[0x2c],
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::BodyMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::BodyMode, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
::call(CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyMode), false, RID&, PhysicsServer2D::BodyMode&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001016d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&), false,
   RID&, Callable const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, unsigned int (PhysicsServer2D::*)(RID) const,
   unsigned int, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>::call
          (CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>
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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
           *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID) const,
   Transform2D, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>::call
          (CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(&local_28,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x30));
  puVar1[2] = local_18;
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Transform2D const&),
   false, RID&, Transform2D const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x40),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter, Variant const&), false, RID&, PhysicsServer2D::AreaParameter&,
   Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010183c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, ObjectID (PhysicsServer2D::*)(RID) const, ObjectID,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID>::
call(CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID> *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID), false, RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001018c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID, int) const,
   Transform2D, RID, int>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>::call
          (CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(&local_28,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  puVar1[2] = local_18;
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID, int) const, RID, RID,
   int>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int>::call
          (CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int> *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, int (PhysicsServer2D::*)(RID) const, int,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID>::call
          (CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID> *this)

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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool), false, RID&,
   int&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001019dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x2c),this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, Transform2D const&),
   false, RID&, int&, Transform2D const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, RID), false, RID&,
   int&, RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             *(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID, Transform2D const&,
   bool), false, RID&, RID&, Transform2D const&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x50),
             *(undefined8 *)(this + 0x48),this + 0x2c,this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID) const, RID,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID>::call
          (CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID> *this)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined8 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID), false, RID&,
   RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int), false, RID&,
   int&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float, RID, PhysicsServer2D::SpaceParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
::call(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
       *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter, float), false, RID&, PhysicsServer2D::SpaceParameter&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
::call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID) const, bool,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID>::call
          (CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID> *this)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(this + 0x18);
  puVar1 = *(undefined1 **)(this + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar2 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&,
   bool&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID) const, float,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID>::call
          (CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID> *this)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = *(code **)(this + 0x18);
  puVar1 = *(undefined4 **)(this + 0x28);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  uVar3 = (*pcVar2)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::ShapeType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::ShapeType, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
::call(CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
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
                    *(undefined8 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, float), false, RID&,
   float&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&>::call
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101c79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Variant const&), false,
   RID&, Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
call(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x40),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<CommandQueueMT, void (CommandQueueMT::*)(), true>::call() */

void CommandQueueMT::Command<CommandQueueMT,void(CommandQueueMT::*)(),true>::call(void)

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
                    /* WARNING: Could not recover jumptable at 0x00101cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::get_argument_count
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant, RID, PhysicsServer2D::AreaParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
::call(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
       *this)

{
  int *piVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(local_38,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 == local_38) {
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*piVar1] != '\0') {
      Variant::_clear_internal();
    }
    *piVar1 = 0;
    *piVar1 = local_38[0];
    *(undefined8 *)(piVar1 + 2) = local_30;
    *(undefined8 *)(piVar1 + 4) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::JointType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float, RID,
   PhysicsServer2D::DampedSpringParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam, float), false, RID&, PhysicsServer2D::DampedSpringParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag) const, bool, RID, PhysicsServer2D::PinJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
::~CommandRet(CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag, bool), false, RID&, PhysicsServer2D::PinJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float, RID, PhysicsServer2D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam, float), false, RID&, PhysicsServer2D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, Vector2 const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, Vector2 const&,
   RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
  operator_delete(this,0x58);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, RID,
   RID), false, RID&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&, bool
   const&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam) const, float, RID, PhysicsServer2D::JointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam, float), false, RID&, PhysicsServer2D::JointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Vector2 (PhysicsServer2D::*)(RID) const, Vector2,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&), false, RID&, Vector2 const&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
           *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&), false,
   RID&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>
         *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState) const, Variant, RID, PhysicsServer2D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant, RID,
   PhysicsServer2D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::CCDMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::CCDMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::CCDMode), false, RID&, PhysicsServer2D::CCDMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool, float), false,
   RID&, int&, bool&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>
         *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::BodyMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyMode), false, RID&, PhysicsServer2D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, unsigned int (PhysicsServer2D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID) const,
   Transform2D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant, RID,
   PhysicsServer2D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Transform2D const&),
   false, RID&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, ObjectID (PhysicsServer2D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID, int) const,
   Transform2D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>
            *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int> *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, int (PhysicsServer2D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, Transform2D const&),
   false, RID&, int&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
           *this)

{
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID, Transform2D const&,
   bool), false, RID&, RID&, Transform2D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
           *this)

{
  operator_delete(this,0x58);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float, RID,
   PhysicsServer2D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter, float), false, RID&, PhysicsServer2D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::ShapeType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<CommandQueueMT, void (CommandQueueMT::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<CommandQueueMT,void(CommandQueueMT::*)(),true>::~Command
          (Command<CommandQueueMT,void(CommandQueueMT::*)(),true> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_00117120;
  Callable::~Callable((Callable *)(this + 0x28));
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_00117120;
  Callable::~Callable((Callable *)(this + 0x28));
  operator_delete(this,0x40);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* PhysicsServer2D::_get_class_namev() const */

undefined8 * PhysicsServer2D::_get_class_namev(void)

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
LAB_00102203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsServer2D");
      goto LAB_0010226e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsServer2D");
LAB_0010226e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::get_object
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this)

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
      goto LAB_0010239d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010239d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010239d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117350;
  Callable::~Callable((Callable *)(this + 0x40));
  if (Variant::needs_deinit[*(int *)(this + 0x28)] != '\0') {
    Variant::_clear_internal();
  }
  operator_delete(this,0x58);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter, Variant const&), false, RID&, PhysicsServer2D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117210;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState, Variant const&), false, RID&, PhysicsServer2D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117260;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter, Variant const&), false, RID&, PhysicsServer2D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117030;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_00116cc0;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117350;
  Callable::~Callable((Callable *)(this + 0x40));
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter, Variant const&), false, RID&, PhysicsServer2D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117210;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState, Variant const&), false, RID&, PhysicsServer2D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117260;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_00116cc0;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x48);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter, Variant const&), false, RID&, PhysicsServer2D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_00117030;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID) const, Variant,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID>::call
          (CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID> *this)

{
  int *piVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(local_38,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x30));
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 == local_38) {
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*piVar1] != '\0') {
      Variant::_clear_internal();
    }
    *piVar1 = 0;
    *piVar1 = local_38[0];
    *(undefined8 *)(piVar1 + 2) = local_30;
    *(undefined8 *)(piVar1 + 4) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState) const, Variant, RID, PhysicsServer2D::BodyState>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
::call(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
       *this)

{
  int *piVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(local_38,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 == local_38) {
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*piVar1] != '\0') {
      Variant::_clear_internal();
    }
    *piVar1 = 0;
    *piVar1 = local_38[0];
    *(undefined8 *)(piVar1 + 2) = local_30;
    *(undefined8 *)(piVar1 + 4) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant, RID, PhysicsServer2D::BodyParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
::call(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
       *this)

{
  int *piVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(local_38,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  piVar1 = *(int **)(this + 0x28);
  if (piVar1 == local_38) {
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    if (Variant::needs_deinit[*piVar1] != '\0') {
      Variant::_clear_internal();
    }
    *piVar1 = 0;
    *piVar1 = local_38[0];
    *(undefined8 *)(piVar1 + 2) = local_30;
    *(undefined8 *)(piVar1 + 4) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsServer2DWrapMT::area_create() */

void __thiscall PhysicsServer2DWrapMT::area_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x210);
  if (UNRECOVERED_JUMPTABLE_00 == area_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
    if (UNRECOVERED_JUMPTABLE_00 == area_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
      if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_001029e8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
      if (UNRECOVERED_JUMPTABLE_00 == area_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
        if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_001029e8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
        if (UNRECOVERED_JUMPTABLE_00 == area_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
          if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_001029e8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x210);
          if (UNRECOVERED_JUMPTABLE_00 == area_create) {
                    /* WARNING: Could not recover jumptable at 0x001029d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x210))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001029e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001029e8:
                    /* WARNING: Could not recover jumptable at 0x001029e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::joint_create() */

void __thiscall PhysicsServer2DWrapMT::joint_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x4d8);
  if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
    if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
      if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00102ad8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
      if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
        if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00102ad8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
        if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
          if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00102ad8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4d8);
          if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
                    /* WARNING: Could not recover jumptable at 0x00102ac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x4d8))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102ad8:
                    /* WARNING: Could not recover jumptable at 0x00102ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::body_create() */

void __thiscall PhysicsServer2DWrapMT::body_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x2f0);
  if (UNRECOVERED_JUMPTABLE_00 == body_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
    if (UNRECOVERED_JUMPTABLE_00 == body_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
      if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00102bc8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
      if (UNRECOVERED_JUMPTABLE_00 == body_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
        if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00102bc8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
        if (UNRECOVERED_JUMPTABLE_00 == body_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
          if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00102bc8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f0);
          if (UNRECOVERED_JUMPTABLE_00 == body_create) {
                    /* WARNING: Could not recover jumptable at 0x00102bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x2f0))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102bc8:
                    /* WARNING: Could not recover jumptable at 0x00102bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::is_flushing_queries() const */

void __thiscall PhysicsServer2DWrapMT::is_flushing_queries(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x598);
  if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
    if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
      if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102cb8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
      if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
        if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102cb8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
        if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
          if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102cb8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x598);
          if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
                    /* WARNING: Could not recover jumptable at 0x00102ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x598))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102cb8:
                    /* WARNING: Could not recover jumptable at 0x00102cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::rectangle_shape_create() */

void __thiscall PhysicsServer2DWrapMT::rectangle_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x178);
  if (UNRECOVERED_JUMPTABLE_00 == rectangle_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
    if (UNRECOVERED_JUMPTABLE_00 == rectangle_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
      if (UNRECOVERED_JUMPTABLE_00 != rectangle_shape_create) goto LAB_00102da8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
      if (UNRECOVERED_JUMPTABLE_00 == rectangle_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE_00 != rectangle_shape_create) goto LAB_00102da8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE_00 == rectangle_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
          if (UNRECOVERED_JUMPTABLE_00 != rectangle_shape_create) goto LAB_00102da8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
          if (UNRECOVERED_JUMPTABLE_00 == rectangle_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00102d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x178))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102da8:
                    /* WARNING: Could not recover jumptable at 0x00102da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::world_boundary_shape_create() */

void __thiscall PhysicsServer2DWrapMT::world_boundary_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x158);
  if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
    if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
      if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00102e98;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
      if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00102e98;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
          if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00102e98;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
          if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00102e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x158))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102e98:
                    /* WARNING: Could not recover jumptable at 0x00102e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::space_create() */

void __thiscall PhysicsServer2DWrapMT::space_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x1c8);
  if (UNRECOVERED_JUMPTABLE_00 == space_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
    if (UNRECOVERED_JUMPTABLE_00 == space_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
      if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102f88;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
      if (UNRECOVERED_JUMPTABLE_00 == space_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
        if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102f88;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
        if (UNRECOVERED_JUMPTABLE_00 == space_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
          if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102f88;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1c8);
          if (UNRECOVERED_JUMPTABLE_00 == space_create) {
                    /* WARNING: Could not recover jumptable at 0x00102f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x1c8))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00102f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00102f88:
                    /* WARNING: Could not recover jumptable at 0x00102f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::convex_polygon_shape_create() */

void __thiscall PhysicsServer2DWrapMT::convex_polygon_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x188);
  if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
    if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
      if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_00103078;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
      if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
        if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_00103078;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
        if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
          if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_00103078;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
          if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x188))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103078:
                    /* WARNING: Could not recover jumptable at 0x00103078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::segment_shape_create() */

void __thiscall PhysicsServer2DWrapMT::segment_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x168);
  if (UNRECOVERED_JUMPTABLE_00 == segment_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
    if (UNRECOVERED_JUMPTABLE_00 == segment_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
      if (UNRECOVERED_JUMPTABLE_00 != segment_shape_create) goto LAB_00103168;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
      if (UNRECOVERED_JUMPTABLE_00 == segment_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE_00 != segment_shape_create) goto LAB_00103168;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE_00 == segment_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
          if (UNRECOVERED_JUMPTABLE_00 != segment_shape_create) goto LAB_00103168;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
          if (UNRECOVERED_JUMPTABLE_00 == segment_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x168))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103168:
                    /* WARNING: Could not recover jumptable at 0x00103168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::capsule_shape_create() */

void __thiscall PhysicsServer2DWrapMT::capsule_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x180);
  if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
    if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103258;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
        if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103258;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
        if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
          if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103258;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
          if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x180))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103258:
                    /* WARNING: Could not recover jumptable at 0x00103258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::separation_ray_shape_create() */

void __thiscall PhysicsServer2DWrapMT::separation_ray_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x160);
  if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
    if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
      if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103348;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
      if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103348;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
          if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103348;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
          if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x160))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103348:
                    /* WARNING: Could not recover jumptable at 0x00103348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::concave_polygon_shape_create() */

void __thiscall PhysicsServer2DWrapMT::concave_polygon_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 400);
  if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
    if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
      if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_00103438;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
      if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
        if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_00103438;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
        if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
          if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_00103438;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
          if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 400))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103438:
                    /* WARNING: Could not recover jumptable at 0x00103438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::circle_shape_create() */

void __thiscall PhysicsServer2DWrapMT::circle_shape_create(PhysicsServer2DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x170);
  if (UNRECOVERED_JUMPTABLE_00 == circle_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
    if (UNRECOVERED_JUMPTABLE_00 == circle_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
      if (UNRECOVERED_JUMPTABLE_00 != circle_shape_create) goto LAB_00103528;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
      if (UNRECOVERED_JUMPTABLE_00 == circle_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE_00 != circle_shape_create) goto LAB_00103528;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE_00 == circle_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
          if (UNRECOVERED_JUMPTABLE_00 != circle_shape_create) goto LAB_00103528;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
          if (UNRECOVERED_JUMPTABLE_00 == circle_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x170))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103528:
                    /* WARNING: Could not recover jumptable at 0x00103528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer2DWrapMT::get_process_info(PhysicsServer2D::ProcessInfo) */

void PhysicsServer2DWrapMT::get_process_info(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x178) + 0x5a0);
  if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
    plVar1 = (long *)(*(long **)(param_1 + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
    if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
      if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103618;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
      if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
        if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103618;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
        if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
          if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103618;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5a0);
          if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
                    /* WARNING: Could not recover jumptable at 0x00103601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x5a0))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103618:
                    /* WARNING: Could not recover jumptable at 0x00103618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
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



/* PhysicsServer2DWrapMT::body_collide_shape(RID, int, RID, Transform2D const&, Vector2 const&,
   Vector2*, int, int&) */

void PhysicsServer2DWrapMT::body_collide_shape(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x178) + 0x4b8);
  if (UNRECOVERED_JUMPTABLE == body_collide_shape) {
    plVar1 = (long *)(*(long **)(param_1 + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
    if (UNRECOVERED_JUMPTABLE != body_collide_shape) {
LAB_001037a0:
                    /* WARNING: Could not recover jumptable at 0x001037b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    plVar1 = (long *)plVar1[0x2f];
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
    if (UNRECOVERED_JUMPTABLE == body_collide_shape) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
      if (UNRECOVERED_JUMPTABLE != body_collide_shape) goto LAB_001037a0;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
      if (UNRECOVERED_JUMPTABLE == body_collide_shape) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
        if (UNRECOVERED_JUMPTABLE != body_collide_shape) goto LAB_001037a0;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
        if (UNRECOVERED_JUMPTABLE != body_collide_shape) {
                    /* WARNING: Could not recover jumptable at 0x001037e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x4b8);
        if (UNRECOVERED_JUMPTABLE == body_collide_shape) {
                    /* WARNING: Could not recover jumptable at 0x00103794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)plVar1[0x2f] + 0x4b8))();
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001037ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* WARNING: Removing unreachable block (ram,0x001039c9) */
/* WARNING: Removing unreachable block (ram,0x001039e1) */
/* WARNING: Removing unreachable block (ram,0x001039e6) */
/* WARNING: Removing unreachable block (ram,0x0010396f) */
/* WARNING: Removing unreachable block (ram,0x0010398b) */
/* WARNING: Removing unreachable block (ram,0x00103990) */
/* WARNING: Removing unreachable block (ram,0x0010390d) */
/* WARNING: Removing unreachable block (ram,0x00103929) */
/* WARNING: Removing unreachable block (ram,0x0010392e) */
/* WARNING: Removing unreachable block (ram,0x00103893) */
/* WARNING: Removing unreachable block (ram,0x00103a20) */
/* WARNING: Removing unreachable block (ram,0x001038a5) */
/* WARNING: Removing unreachable block (ram,0x001038c7) */
/* WARNING: Removing unreachable block (ram,0x001038cc) */
/* WARNING: Removing unreachable block (ram,0x001038dc) */
/* WARNING: Removing unreachable block (ram,0x001038f8) */
/* WARNING: Removing unreachable block (ram,0x001038fd) */
/* WARNING: Removing unreachable block (ram,0x0010393e) */
/* WARNING: Removing unreachable block (ram,0x0010395a) */
/* WARNING: Removing unreachable block (ram,0x0010395f) */
/* WARNING: Removing unreachable block (ram,0x001039a0) */
/* WARNING: Removing unreachable block (ram,0x001039b8) */
/* WARNING: Removing unreachable block (ram,0x001039bd) */
/* WARNING: Removing unreachable block (ram,0x00103a10) */
/* WARNING: Removing unreachable block (ram,0x001039f2) */
/* WARNING: Removing unreachable block (ram,0x00103a16) */
/* PhysicsServer2DWrapMT::space_get_contact_count(RID) const */

void __thiscall PhysicsServer2DWrapMT::space_get_contact_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00103c09) */
/* WARNING: Removing unreachable block (ram,0x00103c21) */
/* WARNING: Removing unreachable block (ram,0x00103c26) */
/* WARNING: Removing unreachable block (ram,0x00103baf) */
/* WARNING: Removing unreachable block (ram,0x00103bcb) */
/* WARNING: Removing unreachable block (ram,0x00103bd0) */
/* WARNING: Removing unreachable block (ram,0x00103b4d) */
/* WARNING: Removing unreachable block (ram,0x00103b69) */
/* WARNING: Removing unreachable block (ram,0x00103b6e) */
/* WARNING: Removing unreachable block (ram,0x00103ad3) */
/* WARNING: Removing unreachable block (ram,0x00103c60) */
/* WARNING: Removing unreachable block (ram,0x00103ae5) */
/* WARNING: Removing unreachable block (ram,0x00103b07) */
/* WARNING: Removing unreachable block (ram,0x00103b0c) */
/* WARNING: Removing unreachable block (ram,0x00103b1c) */
/* WARNING: Removing unreachable block (ram,0x00103b38) */
/* WARNING: Removing unreachable block (ram,0x00103b3d) */
/* WARNING: Removing unreachable block (ram,0x00103b7e) */
/* WARNING: Removing unreachable block (ram,0x00103b9a) */
/* WARNING: Removing unreachable block (ram,0x00103b9f) */
/* WARNING: Removing unreachable block (ram,0x00103be0) */
/* WARNING: Removing unreachable block (ram,0x00103bf8) */
/* WARNING: Removing unreachable block (ram,0x00103bfd) */
/* WARNING: Removing unreachable block (ram,0x00103c50) */
/* WARNING: Removing unreachable block (ram,0x00103c32) */
/* WARNING: Removing unreachable block (ram,0x00103c56) */
/* PhysicsServer2DWrapMT::body_get_direct_state(RID) */

void __thiscall PhysicsServer2DWrapMT::body_get_direct_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00103e09) */
/* WARNING: Removing unreachable block (ram,0x00103e21) */
/* WARNING: Removing unreachable block (ram,0x00103e26) */
/* WARNING: Removing unreachable block (ram,0x00103daf) */
/* WARNING: Removing unreachable block (ram,0x00103dcb) */
/* WARNING: Removing unreachable block (ram,0x00103dd0) */
/* WARNING: Removing unreachable block (ram,0x00103d4d) */
/* WARNING: Removing unreachable block (ram,0x00103d69) */
/* WARNING: Removing unreachable block (ram,0x00103d6e) */
/* WARNING: Removing unreachable block (ram,0x00103cd3) */
/* WARNING: Removing unreachable block (ram,0x00103e60) */
/* WARNING: Removing unreachable block (ram,0x00103ce5) */
/* WARNING: Removing unreachable block (ram,0x00103d07) */
/* WARNING: Removing unreachable block (ram,0x00103d0c) */
/* WARNING: Removing unreachable block (ram,0x00103d1c) */
/* WARNING: Removing unreachable block (ram,0x00103d38) */
/* WARNING: Removing unreachable block (ram,0x00103d3d) */
/* WARNING: Removing unreachable block (ram,0x00103d7e) */
/* WARNING: Removing unreachable block (ram,0x00103d9a) */
/* WARNING: Removing unreachable block (ram,0x00103d9f) */
/* WARNING: Removing unreachable block (ram,0x00103de0) */
/* WARNING: Removing unreachable block (ram,0x00103df8) */
/* WARNING: Removing unreachable block (ram,0x00103dfd) */
/* WARNING: Removing unreachable block (ram,0x00103e50) */
/* WARNING: Removing unreachable block (ram,0x00103e32) */
/* WARNING: Removing unreachable block (ram,0x00103e56) */
/* PhysicsServer2DWrapMT::space_get_direct_state(RID) */

void __thiscall PhysicsServer2DWrapMT::space_get_direct_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00104086) */
/* WARNING: Removing unreachable block (ram,0x0010409c) */
/* WARNING: Removing unreachable block (ram,0x001040a1) */
/* WARNING: Removing unreachable block (ram,0x0010401c) */
/* WARNING: Removing unreachable block (ram,0x00104036) */
/* WARNING: Removing unreachable block (ram,0x0010403b) */
/* WARNING: Removing unreachable block (ram,0x00103faa) */
/* WARNING: Removing unreachable block (ram,0x00103fc4) */
/* WARNING: Removing unreachable block (ram,0x00103fc9) */
/* WARNING: Removing unreachable block (ram,0x00103f1f) */
/* WARNING: Removing unreachable block (ram,0x00103f31) */
/* WARNING: Removing unreachable block (ram,0x00103f52) */
/* WARNING: Removing unreachable block (ram,0x00103f57) */
/* WARNING: Removing unreachable block (ram,0x001040e8) */
/* WARNING: Removing unreachable block (ram,0x00103f71) */
/* WARNING: Removing unreachable block (ram,0x00103f8b) */
/* WARNING: Removing unreachable block (ram,0x00103f90) */
/* WARNING: Removing unreachable block (ram,0x00103fe3) */
/* WARNING: Removing unreachable block (ram,0x00103ffd) */
/* WARNING: Removing unreachable block (ram,0x00104002) */
/* WARNING: Removing unreachable block (ram,0x00104055) */
/* WARNING: Removing unreachable block (ram,0x0010406b) */
/* WARNING: Removing unreachable block (ram,0x00104070) */
/* WARNING: Removing unreachable block (ram,0x001040b7) */
/* WARNING: Removing unreachable block (ram,0x001040c8) */
/* PhysicsServer2DWrapMT::body_test_motion(RID, PhysicsServer2D::MotionParameters const&,
   PhysicsServer2D::MotionResult*) */

void __thiscall PhysicsServer2DWrapMT::body_test_motion(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001042e8) */
/* WARNING: Removing unreachable block (ram,0x001042fe) */
/* WARNING: Removing unreachable block (ram,0x00104303) */
/* WARNING: Removing unreachable block (ram,0x00104292) */
/* WARNING: Removing unreachable block (ram,0x001042ac) */
/* WARNING: Removing unreachable block (ram,0x001042b1) */
/* WARNING: Removing unreachable block (ram,0x00104234) */
/* WARNING: Removing unreachable block (ram,0x0010424e) */
/* WARNING: Removing unreachable block (ram,0x00104253) */
/* WARNING: Removing unreachable block (ram,0x001041bc) */
/* WARNING: Removing unreachable block (ram,0x00104360) */
/* WARNING: Removing unreachable block (ram,0x001041ce) */
/* WARNING: Removing unreachable block (ram,0x001041f0) */
/* WARNING: Removing unreachable block (ram,0x001041f5) */
/* WARNING: Removing unreachable block (ram,0x00104205) */
/* WARNING: Removing unreachable block (ram,0x0010421f) */
/* WARNING: Removing unreachable block (ram,0x00104224) */
/* WARNING: Removing unreachable block (ram,0x00104263) */
/* WARNING: Removing unreachable block (ram,0x0010427d) */
/* WARNING: Removing unreachable block (ram,0x00104282) */
/* WARNING: Removing unreachable block (ram,0x001042c1) */
/* WARNING: Removing unreachable block (ram,0x001042d7) */
/* WARNING: Removing unreachable block (ram,0x001042dc) */
/* WARNING: Removing unreachable block (ram,0x00104330) */
/* WARNING: Removing unreachable block (ram,0x0010430f) */
/* WARNING: Removing unreachable block (ram,0x0010433b) */
/* WARNING: Removing unreachable block (ram,0x0010434b) */
/* WARNING: Removing unreachable block (ram,0x0010438f) */
/* PhysicsServer2DWrapMT::space_get_contacts(RID) const */

void PhysicsServer2DWrapMT::space_get_contacts(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001045a1) */
/* WARNING: Removing unreachable block (ram,0x001045b7) */
/* WARNING: Removing unreachable block (ram,0x001045bc) */
/* WARNING: Removing unreachable block (ram,0x00104521) */
/* WARNING: Removing unreachable block (ram,0x0010453b) */
/* WARNING: Removing unreachable block (ram,0x00104540) */
/* WARNING: Removing unreachable block (ram,0x001044a1) */
/* WARNING: Removing unreachable block (ram,0x001044bb) */
/* WARNING: Removing unreachable block (ram,0x001044c0) */
/* WARNING: Removing unreachable block (ram,0x00104408) */
/* WARNING: Removing unreachable block (ram,0x00104678) */
/* WARNING: Removing unreachable block (ram,0x0010441a) */
/* WARNING: Removing unreachable block (ram,0x0010443b) */
/* WARNING: Removing unreachable block (ram,0x00104440) */
/* WARNING: Removing unreachable block (ram,0x00104461) */
/* WARNING: Removing unreachable block (ram,0x0010447b) */
/* WARNING: Removing unreachable block (ram,0x00104480) */
/* WARNING: Removing unreachable block (ram,0x001044e1) */
/* WARNING: Removing unreachable block (ram,0x001044fb) */
/* WARNING: Removing unreachable block (ram,0x00104500) */
/* WARNING: Removing unreachable block (ram,0x00104561) */
/* WARNING: Removing unreachable block (ram,0x0010457b) */
/* WARNING: Removing unreachable block (ram,0x00104580) */
/* WARNING: Removing unreachable block (ram,0x00104630) */
/* WARNING: Removing unreachable block (ram,0x001045dd) */
/* PhysicsServer2DWrapMT::shape_collide(RID, Transform2D const&, Vector2 const&, RID, Transform2D
   const&, Vector2 const&, Vector2*, int, int&) */

void PhysicsServer2DWrapMT::shape_collide(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2D::get_class() const */

void PhysicsServer2D::get_class(void)

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



/* PhysicsServer2D::is_class(String const&) const */

undefined8 __thiscall PhysicsServer2D::is_class(PhysicsServer2D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001047ff;
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
LAB_001047ff:
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
    if (cVar6 != '\0') goto LAB_001048b3;
  }
  cVar6 = String::operator==(param_1,"PhysicsServer2D");
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
              if (lVar5 == 0) goto LAB_00104963;
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
LAB_00104963:
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
      if (cVar6 != '\0') goto LAB_001048b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001048b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void CommandQueueMT::push_and_sync<CommandQueueMT, void (CommandQueueMT::*)()>(CommandQueueMT*,
   void (CommandQueueMT::*)()) */

void CommandQueueMT::push_and_sync<CommandQueueMT,void(CommandQueueMT::*)()>
               (CommandQueueMT *param_1,_func_void *param_2)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
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
      *puVar4 = &PTR_call_00116c98;
      puVar4[2] = param_2;
      puVar4[3] = in_RDX;
      puVar4[4] = in_RCX;
      LOCK();
      param_1[0x88] = (CommandQueueMT)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)(param_1 + 0x6c) + (int)_LC24;
      *(ulong *)(param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9);
      do {
        std::condition_variable::wait((unique_lock *)(param_1 + 0x38));
      } while (*(uint *)(param_1 + 0x68) < uVar9);
      iVar3 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar3 + -1;
      if ((*(uint *)(param_1 + 0x6c) == *(uint *)(param_1 + 0x68)) && (iVar3 + -1 == 0)) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      if (param_1 != (CommandQueueMT *)0x0) {
        pthread_mutex_unlock((pthread_mutex_t *)param_1);
      }
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, float), RID&,
   float&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, float), RID&, float&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),RID&,float&>
               (PhysicsServer2D *param_1,_func_void_RID_float *param_2,RID *param_3,float *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *in_R8;
  undefined4 *in_R9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar8 = (ulong)uVar2;
  uVar10 = uVar2 + 0x40;
  if (uVar2 < 0xffffffc0) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar10) {
      uVar9 = uVar2 + 0x3f | uVar2 + 0x3f >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
      *(void **)(param_1 + 0x30) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    uVar8 = (ulong)(uVar2 + 8);
    *(uint *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar2) = 0x38;
    if (uVar2 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      uVar3 = *in_R8;
      uVar1 = *in_R9;
      *(undefined1 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_call_00116ce8;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      *(undefined4 *)(puVar6 + 5) = uVar1;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar10;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, PhysicsServer2D::ShapeType
   (PhysicsServer2D::*)(RID) const, PhysicsServer2D::ShapeType, RID>(PhysicsServer2D*,
   PhysicsServer2D::ShapeType (PhysicsServer2D::*)(RID) const, PhysicsServer2D::ShapeType*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00116d10;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID) const,
   Variant, RID>(PhysicsServer2D*, Variant (PhysicsServer2D::*)(RID) const, Variant*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00116d38;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), RID&,
   bool&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, bool), RID&, bool&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),RID&,bool&>
               (PhysicsServer2D *param_1,_func_void_RID_bool *param_2,RID *param_3,bool *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *in_R8;
  undefined1 *in_R9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar8 = (ulong)uVar2;
  uVar10 = uVar2 + 0x40;
  if (uVar2 < 0xffffffc0) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar10) {
      uVar9 = uVar2 + 0x3f | uVar2 + 0x3f >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
      *(void **)(param_1 + 0x30) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    uVar8 = (ulong)(uVar2 + 8);
    *(uint *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar2) = 0x38;
    if (uVar2 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      *(undefined1 *)(puVar6 + 1) = 0;
      uVar1 = *in_R9;
      *puVar6 = &PTR_call_00116d88;
      *(undefined1 *)(puVar6 + 5) = uVar1;
      uVar3 = *in_R8;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar10;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, bool (PhysicsServer2D::*)(RID) const, bool,
   RID>(PhysicsServer2D*, bool (PhysicsServer2D::*)(RID) const, bool*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00116db0;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int), RID&,
   int&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, int), RID&, int&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),RID&,int&>
               (PhysicsServer2D *param_1,_func_void_RID_int *param_2,RID *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *in_R8;
  undefined4 *in_R9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar8 = (ulong)uVar1;
  uVar10 = uVar1 + 0x40;
  if (uVar1 < 0xffffffc0) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar10) {
      uVar9 = uVar1 + 0x3f | uVar1 + 0x3f >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
      *(void **)(param_1 + 0x30) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    uVar8 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      uVar2 = *in_R9;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar6 + 5) = uVar2;
      uVar3 = *in_R8;
      *puVar6 = &PTR_call_00116e28;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar10;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID), RID&,
   RID&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, RID), RID&, RID&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),RID&,RID&>
               (PhysicsServer2D *param_1,_func_void_RID_RID *param_2,RID *param_3,RID *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *in_R8;
  undefined8 *in_R9;
  uint uVar9;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar1;
  uVar9 = uVar1 + 0x40;
  if (uVar1 < 0xffffffc0) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x3f | uVar1 + 0x3f >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,(ulong)uVar8,false);
      *(void **)(param_1 + 0x30) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      puVar5[3] = param_3;
      puVar5[4] = param_4;
      uVar2 = *in_R9;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[5] = uVar2;
      uVar2 = *in_R8;
      *puVar5 = &PTR_call_00116e50;
      puVar5[2] = param_2;
      puVar5[6] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar9;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, RID (PhysicsServer2D::*)(RID) const, RID,
   RID>(PhysicsServer2D*, RID (PhysicsServer2D::*)(RID) const, RID*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00116e78;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, int (PhysicsServer2D::*)(RID) const, int,
   RID>(PhysicsServer2D*, int (PhysicsServer2D::*)(RID) const, int*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00116f40;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID),
   RID&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID), RID&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID),RID&>
               (PhysicsServer2D *param_1,_func_void_RID *param_2,RID *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 in_RCX;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *in_R8;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar1;
  uVar9 = uVar1 + 0x38;
  if (uVar1 < 0xffffffc8) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x37 | uVar1 + 0x37 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,(ulong)uVar8,false);
      *(void **)(param_1 + 0x30) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      puVar5[3] = param_3;
      puVar5[4] = in_RCX;
      uVar2 = *in_R8;
      *(undefined1 *)(puVar5 + 1) = 0;
      *puVar5 = &PTR_call_00116fb8;
      puVar5[2] = param_2;
      puVar5[5] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar9;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, ObjectID), RID&,
   ObjectID&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, ObjectID), RID&, ObjectID&) */

void CommandQueueMT::push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),RID&,ObjectID&>
               (PhysicsServer2D *param_1,_func_void_RID_ObjectID *param_2,RID *param_3,
               ObjectID_conflict *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *in_R8;
  undefined8 *in_R9;
  uint uVar9;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar1;
  uVar9 = uVar1 + 0x40;
  if (uVar1 < 0xffffffc0) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x3f | uVar1 + 0x3f >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,(ulong)uVar8,false);
      *(void **)(param_1 + 0x30) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      puVar5[3] = param_3;
      puVar5[4] = param_4;
      uVar2 = *in_R9;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[5] = uVar2;
      uVar2 = *in_R8;
      *puVar5 = &PTR_call_00116fe0;
      puVar5[2] = param_2;
      puVar5[6] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar9;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, ObjectID (PhysicsServer2D::*)(RID) const,
   ObjectID, RID>(PhysicsServer2D*, ObjectID (PhysicsServer2D::*)(RID) const, ObjectID*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00117008;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, unsigned int), RID&,
   unsigned int&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, unsigned int), RID&, unsigned
   int&) */

void CommandQueueMT::
     push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),RID&,unsigned_int&>
               (PhysicsServer2D *param_1,_func_void_RID_uint *param_2,RID *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *in_R8;
  undefined4 *in_R9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar8 = (ulong)uVar1;
  uVar10 = uVar1 + 0x40;
  if (uVar1 < 0xffffffc0) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar10) {
      uVar9 = uVar1 + 0x3f | uVar1 + 0x3f >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = (uVar9 | uVar9 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar9;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar9,false);
      *(void **)(param_1 + 0x30) = pvVar7;
      if (pvVar7 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    uVar8 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar10;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      uVar2 = *in_R9;
      *(undefined1 *)(puVar6 + 1) = 0;
      *(undefined4 *)(puVar6 + 5) = uVar2;
      uVar3 = *in_R8;
      *puVar6 = &PTR_call_001170d0;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar10;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar10,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, unsigned int (PhysicsServer2D::*)(RID) const,
   unsigned int, RID>(PhysicsServer2D*, unsigned int (PhysicsServer2D::*)(RID) const, unsigned int*,
   RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_001170f8;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&), RID&,
   Callable const&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, Callable const&), RID&,
   Callable const&) */

void CommandQueueMT::
     push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),RID&,Callable_const&>
               (PhysicsServer2D *param_1,_func_void_RID_Callable_ptr *param_2,RID *param_3,
               Callable *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *in_R8;
  Callable *in_R9;
  undefined8 *puVar8;
  
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar5 = (ulong)uVar1;
  uVar7 = uVar1 + 0x48;
  if (uVar1 < 0xffffffb8) {
    pvVar4 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar7) {
      uVar6 = uVar1 + 0x47 | uVar1 + 0x47 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = (uVar6 | uVar6 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar6;
      pvVar4 = (void *)Memory::realloc_static(pvVar4,(ulong)uVar6,false);
      *(void **)(param_1 + 0x30) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    uVar5 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar7;
    *(undefined8 *)((long)pvVar4 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar7) {
      puVar8 = (undefined8 *)((long)pvVar4 + uVar5);
      *puVar8 = &PTR_call_00117120;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = param_2;
      puVar8[3] = param_3;
      puVar8[4] = param_4;
      Callable::Callable((Callable *)(puVar8 + 5),in_R9);
      puVar8[7] = *in_R8;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar7;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar5,(ulong)uVar7,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, PhysicsServer2D::BodyMode
   (PhysicsServer2D::*)(RID) const, PhysicsServer2D::BodyMode, RID>(PhysicsServer2D*,
   PhysicsServer2D::BodyMode (PhysicsServer2D::*)(RID) const, PhysicsServer2D::BodyMode*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00117170;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, PhysicsServer2D::CCDMode
   (PhysicsServer2D::*)(RID) const, PhysicsServer2D::CCDMode, RID>(PhysicsServer2D*,
   PhysicsServer2D::CCDMode (PhysicsServer2D::*)(RID) const, PhysicsServer2D::CCDMode*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_001171e8;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&), RID&,
   Vector2 const&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID, Vector2 const&), RID&, Vector2
   const&) */

void CommandQueueMT::
     push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),RID&,Vector2_const&>
               (PhysicsServer2D *param_1,_func_void_RID_Vector2_ptr *param_2,RID *param_3,
               Vector2 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *in_R8;
  undefined8 *in_R9;
  uint uVar9;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar1;
  uVar9 = uVar1 + 0x40;
  if (uVar1 < 0xffffffc0) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x3f | uVar1 + 0x3f >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,(ulong)uVar8,false);
      *(void **)(param_1 + 0x30) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      puVar5[3] = param_3;
      puVar5[4] = param_4;
      uVar2 = *in_R9;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[5] = uVar2;
      uVar2 = *in_R8;
      *puVar5 = &PTR_call_001172b0;
      puVar5[2] = param_2;
      puVar5[6] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar9;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&), RID&, Vector2 const&, Vector2 const&>(PhysicsServer2D*, void (PhysicsServer2D::*)(RID,
   Vector2 const&, Vector2 const&), RID&, Vector2 const&, Vector2 const&) */

void CommandQueueMT::
     push<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),RID&,Vector2_const&,Vector2_const&>
               (PhysicsServer2D *param_1,_func_void_RID_Vector2_ptr_Vector2_ptr *param_2,
               RID *param_3,Vector2 *param_4,Vector2 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *in_R9;
  uint uVar9;
  undefined8 *in_stack_00000008;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar1;
  uVar9 = uVar1 + 0x48;
  if (uVar1 < 0xffffffb8) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x47 | uVar1 + 0x47 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar6 = (void *)Memory::realloc_static(pvVar6,(ulong)uVar8,false);
      *(void **)(param_1 + 0x30) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar7 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      *puVar5 = &PTR_call_001172d8;
      puVar5[3] = param_3;
      puVar5[4] = param_4;
      uVar2 = *in_stack_00000008;
      *(undefined1 *)(puVar5 + 1) = 0;
      puVar5[5] = uVar2;
      uVar2 = *in_R9;
      puVar5[2] = param_2;
      puVar5[6] = uVar2;
      puVar5[7] = *(undefined8 *)param_5;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar9;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Vector2 (PhysicsServer2D::*)(RID) const,
   Vector2, RID>(PhysicsServer2D*, Vector2 (PhysicsServer2D::*)(RID) const, Vector2*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00117300;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      puVar4[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push_and_sync<PhysicsServer2D, void (PhysicsServer2D::*)(RID, List<RID,
   DefaultAllocator>*), RID, List<RID, DefaultAllocator>*>(PhysicsServer2D*, void
   (PhysicsServer2D::*)(RID, List<RID, DefaultAllocator>*), RID, List<RID, DefaultAllocator>*) */

void CommandQueueMT::
     push_and_sync<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),RID,List<RID,DefaultAllocator>*>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  uVar9 = param_1[1].__data.__lock;
  uVar6 = (ulong)uVar9;
  uVar8 = uVar9 + 0x40;
  if (uVar9 < 0xffffffc0) {
    pvVar5 = *(void **)((long)param_1 + 0x30);
    if (*(uint *)((long)param_1 + 0x2c) < uVar8) {
      uVar7 = uVar9 + 0x3f >> 1 | uVar9 + 0x3f;
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
    *(undefined8 *)((long)pvVar5 + (ulong)uVar9) = 0x38;
    if (uVar9 + 8 < uVar8) {
      puVar4 = (undefined8 *)((long)pvVar5 + uVar6);
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_call_00117328;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_6;
      puVar4[6] = param_5;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9)
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
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* void CommandQueueMT::push_and_sync<PhysicsServer2D, void
   (PhysicsServer2D::*)()>(PhysicsServer2D*, void (PhysicsServer2D::*)()) */

void CommandQueueMT::push_and_sync<PhysicsServer2D,void(PhysicsServer2D::*)()>
               (PhysicsServer2D *param_1,_func_void *param_2)

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
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
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
      *puVar4 = &PTR_call_001175f8;
      puVar4[2] = param_2;
      puVar4[3] = in_RDX;
      puVar4[4] = in_RCX;
      LOCK();
      param_1[0x88] = (PhysicsServer2D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)(param_1 + 0x6c) + (int)_LC24;
      *(ulong *)(param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar9);
      do {
        std::condition_variable::wait((unique_lock *)(param_1 + 0x38));
      } while (*(uint *)(param_1 + 0x68) < uVar9);
      iVar3 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar3 + -1;
      if ((*(uint *)(param_1 + 0x6c) == *(uint *)(param_1 + 0x68)) && (iVar3 + -1 == 0)) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      if (param_1 != (PhysicsServer2D *)0x0) {
        pthread_mutex_unlock((pthread_mutex_t *)param_1);
      }
      if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
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



/* PhysicsServer2D::_initialize_classv() */

void PhysicsServer2D::_initialize_classv(void)

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
    local_48 = "PhysicsServer2D";
    local_60 = 0;
    local_40 = 0xf;
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
    if ((code *)PTR__bind_methods_0011e008 != Object::_bind_methods) {
      PhysicsServer2D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsServer2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void PhysicsServer2D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "PhysicsServer2D";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsServer2D";
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
LAB_00107e3d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107e3d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00107e5f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00107e5f:
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
  StringName::StringName((StringName *)&local_78,"PhysicsServer2D",false);
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



/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::call
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010820f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010820f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001081e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001082d1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010820f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC29,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001082d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::unique_lock<std::mutex>::unlock() */

void __thiscall std::unique_lock<std::mutex>::unlock(unique_lock<std::mutex> *this)

{
  if (this[8] != (unique_lock<std::mutex>)0x0) {
    if (*(pthread_mutex_t **)this != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t **)this);
      this[8] = (unique_lock<std::mutex>)0x0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(1);
}



/* std::unique_lock<std::mutex>::lock() */

void __thiscall std::unique_lock<std::mutex>::lock(unique_lock<std::mutex> *this)

{
  int iVar1;
  
  if (*(pthread_mutex_t **)this == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  if (this[8] == (unique_lock<std::mutex>)0x0) {
    iVar1 = pthread_mutex_lock(*(pthread_mutex_t **)this);
    if (iVar1 == 0) {
      this[8] = (unique_lock<std::mutex>)0x1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* LocalVector<unsigned char, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<unsigned_char,unsigned_int,false,false>::resize
          (LocalVector<unsigned_char,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  long lVar2;
  uint uVar3;
  
  if (*(uint *)this <= param_1) {
    if (param_1 <= *(uint *)this) {
      return;
    }
    if (*(uint *)(this + 4) < param_1) {
      uVar3 = param_1 - 1 | param_1 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar2 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar3,false);
      *(long *)(this + 8) = lVar2;
      if (lVar2 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  *(uint *)this = param_1;
  return;
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
  CommandQueueMT *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x80) == 0) {
    local_40 = 0;
    local_48 = this;
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)this);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    uVar8 = (ulong)*(uint *)(this + 0x28);
    uVar6 = *(ulong *)(this + 0x80);
    local_40 = '\x01';
    if (uVar6 < uVar8) {
      do {
        if ((uint)uVar8 <= (uint)uVar6) goto LAB_001085bd;
        lVar1 = *(long *)(*(long *)(this + 0x30) + uVar6);
        uVar5 = uVar6 + 8;
        *(ulong *)(this + 0x80) = uVar5;
        uVar6 = uVar5 & 0xffffffff;
        if ((uint)uVar8 <= (uint)uVar5) goto LAB_001085bd;
        puVar9 = (undefined8 *)(uVar6 + *(long *)(this + 0x30));
        uVar4 = WorkerThreadPool::_thread_enter_unlock_allowance_zone((unique_lock *)&local_48);
        (**(code **)*puVar9)(puVar9);
        WorkerThreadPool::thread_exit_unlock_allowance_zone(uVar4);
        uVar6 = *(ulong *)(this + 0x80);
        uVar4 = *(uint *)(this + 0x28);
        if (uVar4 <= (uint)uVar6) {
LAB_001085a0:
          uVar8 = (ulong)uVar4;
          uVar6 = uVar6 & 0xffffffff;
LAB_001085bd:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar6,uVar8,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        plVar7 = (long *)((uVar6 & 0xffffffff) + *(long *)(this + 0x30));
        if ((char)plVar7[1] != '\0') {
          *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
          if (local_40 != '\0') {
            std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
          }
          std::condition_variable::notify_all();
          local_40 = 0;
          local_48 = this;
          std::unique_lock<std::mutex>::lock((unique_lock<std::mutex> *)&local_48);
          uVar6 = *(ulong *)(this + 0x80);
          uVar4 = *(uint *)(this + 0x28);
          local_40 = '\x01';
          if (uVar4 <= (uint)uVar6) goto LAB_001085a0;
          plVar7 = (long *)((uVar6 & 0xffffffff) + *(long *)(this + 0x30));
        }
        (**(code **)(*plVar7 + 8))();
        uVar8 = (ulong)*(uint *)(this + 0x28);
        uVar6 = *(long *)(this + 0x80) + lVar1;
        *(ulong *)(this + 0x80) = uVar6;
      } while (uVar6 < uVar8);
    }
    LocalVector<unsigned_char,unsigned_int,false,false>::resize
              ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x28),0);
    LOCK();
    this[0x88] = (CommandQueueMT)0x0;
    UNLOCK();
    *(undefined8 *)(this + 0x80) = 0;
    if ((*(int *)(this + 0x68) == *(int *)(this + 0x6c)) && (*(int *)(this + 0x70) == 0)) {
      *(undefined8 *)(this + 0x68) = 0;
    }
    if (local_40 != '\0') {
      std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00108675) */
/* WARNING: Removing unreachable block (ram,0x001086e0) */
/* WARNING: Removing unreachable block (ram,0x00108730) */
/* WARNING: Removing unreachable block (ram,0x001086eb) */
/* WARNING: Removing unreachable block (ram,0x00108702) */
/* WARNING: Removing unreachable block (ram,0x0010868a) */
/* WARNING: Removing unreachable block (ram,0x001086b1) */
/* WARNING: Removing unreachable block (ram,0x001086b6) */
/* WARNING: Removing unreachable block (ram,0x00108720) */
/* WARNING: Removing unreachable block (ram,0x001086be) */
/* WARNING: Removing unreachable block (ram,0x001086d3) */
/* WARNING: Removing unreachable block (ram,0x0010873e) */
/* PhysicsServer2DWrapMT::joint_is_disabled_collisions_between_bodies(RID) const */

void __thiscall PhysicsServer2DWrapMT::joint_is_disabled_collisions_between_bodies(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108785) */
/* WARNING: Removing unreachable block (ram,0x001087f0) */
/* WARNING: Removing unreachable block (ram,0x00108840) */
/* WARNING: Removing unreachable block (ram,0x001087fb) */
/* WARNING: Removing unreachable block (ram,0x00108812) */
/* WARNING: Removing unreachable block (ram,0x0010879a) */
/* WARNING: Removing unreachable block (ram,0x001087c1) */
/* WARNING: Removing unreachable block (ram,0x001087c6) */
/* WARNING: Removing unreachable block (ram,0x00108830) */
/* WARNING: Removing unreachable block (ram,0x001087ce) */
/* WARNING: Removing unreachable block (ram,0x001087e3) */
/* WARNING: Removing unreachable block (ram,0x0010884e) */
/* PhysicsServer2DWrapMT::body_is_omitting_force_integration(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_is_omitting_force_integration(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108895) */
/* WARNING: Removing unreachable block (ram,0x00108900) */
/* WARNING: Removing unreachable block (ram,0x00108950) */
/* WARNING: Removing unreachable block (ram,0x0010890b) */
/* WARNING: Removing unreachable block (ram,0x00108922) */
/* WARNING: Removing unreachable block (ram,0x001088aa) */
/* WARNING: Removing unreachable block (ram,0x001088d1) */
/* WARNING: Removing unreachable block (ram,0x001088d6) */
/* WARNING: Removing unreachable block (ram,0x00108940) */
/* WARNING: Removing unreachable block (ram,0x001088de) */
/* WARNING: Removing unreachable block (ram,0x001088f3) */
/* WARNING: Removing unreachable block (ram,0x0010895e) */
/* PhysicsServer2DWrapMT::space_is_active(RID) const */

void __thiscall PhysicsServer2DWrapMT::space_is_active(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001089a5) */
/* WARNING: Removing unreachable block (ram,0x00108a10) */
/* WARNING: Removing unreachable block (ram,0x00108a60) */
/* WARNING: Removing unreachable block (ram,0x00108a1b) */
/* WARNING: Removing unreachable block (ram,0x00108a32) */
/* WARNING: Removing unreachable block (ram,0x001089ba) */
/* WARNING: Removing unreachable block (ram,0x001089e1) */
/* WARNING: Removing unreachable block (ram,0x001089e6) */
/* WARNING: Removing unreachable block (ram,0x00108a50) */
/* WARNING: Removing unreachable block (ram,0x001089ee) */
/* WARNING: Removing unreachable block (ram,0x00108a02) */
/* WARNING: Removing unreachable block (ram,0x00108a6e) */
/* PhysicsServer2DWrapMT::body_get_max_contacts_reported(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_max_contacts_reported(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108ab5) */
/* WARNING: Removing unreachable block (ram,0x00108b20) */
/* WARNING: Removing unreachable block (ram,0x00108b70) */
/* WARNING: Removing unreachable block (ram,0x00108b2b) */
/* WARNING: Removing unreachable block (ram,0x00108b42) */
/* WARNING: Removing unreachable block (ram,0x00108aca) */
/* WARNING: Removing unreachable block (ram,0x00108af1) */
/* WARNING: Removing unreachable block (ram,0x00108af6) */
/* WARNING: Removing unreachable block (ram,0x00108b60) */
/* WARNING: Removing unreachable block (ram,0x00108afe) */
/* WARNING: Removing unreachable block (ram,0x00108b12) */
/* WARNING: Removing unreachable block (ram,0x00108b7e) */
/* PhysicsServer2DWrapMT::body_get_shape_count(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_shape_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108bc5) */
/* WARNING: Removing unreachable block (ram,0x00108c30) */
/* WARNING: Removing unreachable block (ram,0x00108c80) */
/* WARNING: Removing unreachable block (ram,0x00108c3b) */
/* WARNING: Removing unreachable block (ram,0x00108c52) */
/* WARNING: Removing unreachable block (ram,0x00108bda) */
/* WARNING: Removing unreachable block (ram,0x00108c01) */
/* WARNING: Removing unreachable block (ram,0x00108c06) */
/* WARNING: Removing unreachable block (ram,0x00108c70) */
/* WARNING: Removing unreachable block (ram,0x00108c0e) */
/* WARNING: Removing unreachable block (ram,0x00108c22) */
/* WARNING: Removing unreachable block (ram,0x00108c8e) */
/* PhysicsServer2DWrapMT::area_get_shape_count(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_shape_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108cd5) */
/* WARNING: Removing unreachable block (ram,0x00108d48) */
/* WARNING: Removing unreachable block (ram,0x00108da0) */
/* WARNING: Removing unreachable block (ram,0x00108d53) */
/* WARNING: Removing unreachable block (ram,0x00108d6a) */
/* WARNING: Removing unreachable block (ram,0x00108cea) */
/* WARNING: Removing unreachable block (ram,0x00108d17) */
/* WARNING: Removing unreachable block (ram,0x00108d1c) */
/* WARNING: Removing unreachable block (ram,0x00108d88) */
/* WARNING: Removing unreachable block (ram,0x00108d24) */
/* WARNING: Removing unreachable block (ram,0x00108d39) */
/* WARNING: Removing unreachable block (ram,0x00108dae) */
/* PhysicsServer2DWrapMT::body_get_constant_force(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108df5) */
/* WARNING: Removing unreachable block (ram,0x00108e60) */
/* WARNING: Removing unreachable block (ram,0x00108eb0) */
/* WARNING: Removing unreachable block (ram,0x00108e6b) */
/* WARNING: Removing unreachable block (ram,0x00108e82) */
/* WARNING: Removing unreachable block (ram,0x00108e0a) */
/* WARNING: Removing unreachable block (ram,0x00108e31) */
/* WARNING: Removing unreachable block (ram,0x00108e36) */
/* WARNING: Removing unreachable block (ram,0x00108ea0) */
/* WARNING: Removing unreachable block (ram,0x00108e3e) */
/* WARNING: Removing unreachable block (ram,0x00108e52) */
/* WARNING: Removing unreachable block (ram,0x00108ebe) */
/* PhysicsServer2DWrapMT::body_get_collision_mask(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00108f05) */
/* WARNING: Removing unreachable block (ram,0x00108f70) */
/* WARNING: Removing unreachable block (ram,0x00108fc0) */
/* WARNING: Removing unreachable block (ram,0x00108f7b) */
/* WARNING: Removing unreachable block (ram,0x00108f92) */
/* WARNING: Removing unreachable block (ram,0x00108f1a) */
/* WARNING: Removing unreachable block (ram,0x00108f41) */
/* WARNING: Removing unreachable block (ram,0x00108f46) */
/* WARNING: Removing unreachable block (ram,0x00108fb0) */
/* WARNING: Removing unreachable block (ram,0x00108f4e) */
/* WARNING: Removing unreachable block (ram,0x00108f62) */
/* WARNING: Removing unreachable block (ram,0x00108fce) */
/* PhysicsServer2DWrapMT::body_get_collision_layer(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109015) */
/* WARNING: Removing unreachable block (ram,0x00109080) */
/* WARNING: Removing unreachable block (ram,0x001090d0) */
/* WARNING: Removing unreachable block (ram,0x0010908b) */
/* WARNING: Removing unreachable block (ram,0x001090a2) */
/* WARNING: Removing unreachable block (ram,0x0010902a) */
/* WARNING: Removing unreachable block (ram,0x00109051) */
/* WARNING: Removing unreachable block (ram,0x00109056) */
/* WARNING: Removing unreachable block (ram,0x001090c0) */
/* WARNING: Removing unreachable block (ram,0x0010905e) */
/* WARNING: Removing unreachable block (ram,0x00109072) */
/* WARNING: Removing unreachable block (ram,0x001090de) */
/* PhysicsServer2DWrapMT::area_get_collision_mask(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109125) */
/* WARNING: Removing unreachable block (ram,0x00109190) */
/* WARNING: Removing unreachable block (ram,0x001091e0) */
/* WARNING: Removing unreachable block (ram,0x0010919b) */
/* WARNING: Removing unreachable block (ram,0x001091b2) */
/* WARNING: Removing unreachable block (ram,0x0010913a) */
/* WARNING: Removing unreachable block (ram,0x00109161) */
/* WARNING: Removing unreachable block (ram,0x00109166) */
/* WARNING: Removing unreachable block (ram,0x001091d0) */
/* WARNING: Removing unreachable block (ram,0x0010916e) */
/* WARNING: Removing unreachable block (ram,0x00109182) */
/* WARNING: Removing unreachable block (ram,0x001091ee) */
/* PhysicsServer2DWrapMT::area_get_collision_layer(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109235) */
/* WARNING: Removing unreachable block (ram,0x001092a0) */
/* WARNING: Removing unreachable block (ram,0x001092f0) */
/* WARNING: Removing unreachable block (ram,0x001092ab) */
/* WARNING: Removing unreachable block (ram,0x001092c2) */
/* WARNING: Removing unreachable block (ram,0x0010924a) */
/* WARNING: Removing unreachable block (ram,0x00109271) */
/* WARNING: Removing unreachable block (ram,0x00109276) */
/* WARNING: Removing unreachable block (ram,0x001092e0) */
/* WARNING: Removing unreachable block (ram,0x0010927e) */
/* WARNING: Removing unreachable block (ram,0x00109292) */
/* WARNING: Removing unreachable block (ram,0x001092fe) */
/* PhysicsServer2DWrapMT::body_get_continuous_collision_detection_mode(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_continuous_collision_detection_mode(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109345) */
/* WARNING: Removing unreachable block (ram,0x001093b8) */
/* WARNING: Removing unreachable block (ram,0x00109410) */
/* WARNING: Removing unreachable block (ram,0x001093c3) */
/* WARNING: Removing unreachable block (ram,0x001093da) */
/* WARNING: Removing unreachable block (ram,0x0010935a) */
/* WARNING: Removing unreachable block (ram,0x00109387) */
/* WARNING: Removing unreachable block (ram,0x0010938c) */
/* WARNING: Removing unreachable block (ram,0x001093f8) */
/* WARNING: Removing unreachable block (ram,0x00109394) */
/* WARNING: Removing unreachable block (ram,0x001093a8) */
/* WARNING: Removing unreachable block (ram,0x0010941e) */
/* PhysicsServer2DWrapMT::body_get_canvas_instance_id(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_canvas_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109465) */
/* WARNING: Removing unreachable block (ram,0x001094d8) */
/* WARNING: Removing unreachable block (ram,0x00109530) */
/* WARNING: Removing unreachable block (ram,0x001094e3) */
/* WARNING: Removing unreachable block (ram,0x001094fa) */
/* WARNING: Removing unreachable block (ram,0x0010947a) */
/* WARNING: Removing unreachable block (ram,0x001094a7) */
/* WARNING: Removing unreachable block (ram,0x001094ac) */
/* WARNING: Removing unreachable block (ram,0x00109518) */
/* WARNING: Removing unreachable block (ram,0x001094b4) */
/* WARNING: Removing unreachable block (ram,0x001094c8) */
/* WARNING: Removing unreachable block (ram,0x0010953e) */
/* PhysicsServer2DWrapMT::body_get_object_instance_id(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109585) */
/* WARNING: Removing unreachable block (ram,0x001095f8) */
/* WARNING: Removing unreachable block (ram,0x00109650) */
/* WARNING: Removing unreachable block (ram,0x00109603) */
/* WARNING: Removing unreachable block (ram,0x0010961a) */
/* WARNING: Removing unreachable block (ram,0x0010959a) */
/* WARNING: Removing unreachable block (ram,0x001095c7) */
/* WARNING: Removing unreachable block (ram,0x001095cc) */
/* WARNING: Removing unreachable block (ram,0x00109638) */
/* WARNING: Removing unreachable block (ram,0x001095d4) */
/* WARNING: Removing unreachable block (ram,0x001095e8) */
/* WARNING: Removing unreachable block (ram,0x0010965e) */
/* PhysicsServer2DWrapMT::area_get_canvas_instance_id(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_canvas_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001096a5) */
/* WARNING: Removing unreachable block (ram,0x00109718) */
/* WARNING: Removing unreachable block (ram,0x00109770) */
/* WARNING: Removing unreachable block (ram,0x00109723) */
/* WARNING: Removing unreachable block (ram,0x0010973a) */
/* WARNING: Removing unreachable block (ram,0x001096ba) */
/* WARNING: Removing unreachable block (ram,0x001096e7) */
/* WARNING: Removing unreachable block (ram,0x001096ec) */
/* WARNING: Removing unreachable block (ram,0x00109758) */
/* WARNING: Removing unreachable block (ram,0x001096f4) */
/* WARNING: Removing unreachable block (ram,0x00109708) */
/* WARNING: Removing unreachable block (ram,0x0010977e) */
/* PhysicsServer2DWrapMT::area_get_object_instance_id(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001097c5) */
/* WARNING: Removing unreachable block (ram,0x00109830) */
/* WARNING: Removing unreachable block (ram,0x00109880) */
/* WARNING: Removing unreachable block (ram,0x0010983b) */
/* WARNING: Removing unreachable block (ram,0x00109852) */
/* WARNING: Removing unreachable block (ram,0x001097da) */
/* WARNING: Removing unreachable block (ram,0x00109801) */
/* WARNING: Removing unreachable block (ram,0x00109806) */
/* WARNING: Removing unreachable block (ram,0x00109870) */
/* WARNING: Removing unreachable block (ram,0x0010980e) */
/* WARNING: Removing unreachable block (ram,0x00109822) */
/* WARNING: Removing unreachable block (ram,0x0010988e) */
/* PhysicsServer2DWrapMT::body_get_mode(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_mode(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001098d5) */
/* WARNING: Removing unreachable block (ram,0x00109948) */
/* WARNING: Removing unreachable block (ram,0x001099a0) */
/* WARNING: Removing unreachable block (ram,0x00109953) */
/* WARNING: Removing unreachable block (ram,0x0010996a) */
/* WARNING: Removing unreachable block (ram,0x001098ea) */
/* WARNING: Removing unreachable block (ram,0x00109917) */
/* WARNING: Removing unreachable block (ram,0x0010991c) */
/* WARNING: Removing unreachable block (ram,0x00109988) */
/* WARNING: Removing unreachable block (ram,0x00109924) */
/* WARNING: Removing unreachable block (ram,0x00109938) */
/* WARNING: Removing unreachable block (ram,0x001099ae) */
/* PhysicsServer2DWrapMT::body_get_space(RID) const */

void __thiscall PhysicsServer2DWrapMT::body_get_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001099f5) */
/* WARNING: Removing unreachable block (ram,0x00109a68) */
/* WARNING: Removing unreachable block (ram,0x00109ac0) */
/* WARNING: Removing unreachable block (ram,0x00109a73) */
/* WARNING: Removing unreachable block (ram,0x00109a8a) */
/* WARNING: Removing unreachable block (ram,0x00109a0a) */
/* WARNING: Removing unreachable block (ram,0x00109a37) */
/* WARNING: Removing unreachable block (ram,0x00109a3c) */
/* WARNING: Removing unreachable block (ram,0x00109aa8) */
/* WARNING: Removing unreachable block (ram,0x00109a44) */
/* WARNING: Removing unreachable block (ram,0x00109a58) */
/* WARNING: Removing unreachable block (ram,0x00109ace) */
/* PhysicsServer2DWrapMT::area_get_space(RID) const */

void __thiscall PhysicsServer2DWrapMT::area_get_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109b1a) */
/* WARNING: Removing unreachable block (ram,0x00109ba8) */
/* WARNING: Removing unreachable block (ram,0x00109be0) */
/* WARNING: Removing unreachable block (ram,0x00109bb3) */
/* WARNING: Removing unreachable block (ram,0x00109b2f) */
/* WARNING: Removing unreachable block (ram,0x00109b65) */
/* WARNING: Removing unreachable block (ram,0x00109b6a) */
/* WARNING: Removing unreachable block (ram,0x00109bd0) */
/* WARNING: Removing unreachable block (ram,0x00109b72) */
/* WARNING: Removing unreachable block (ram,0x00109b82) */
/* WARNING: Removing unreachable block (ram,0x00109b92) */
/* WARNING: Removing unreachable block (ram,0x00109bee) */
/* PhysicsServer2DWrapMT::shape_get_data(RID) const */

void PhysicsServer2DWrapMT::shape_get_data(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109c35) */
/* WARNING: Removing unreachable block (ram,0x00109ca0) */
/* WARNING: Removing unreachable block (ram,0x00109cf0) */
/* WARNING: Removing unreachable block (ram,0x00109cab) */
/* WARNING: Removing unreachable block (ram,0x00109cc2) */
/* WARNING: Removing unreachable block (ram,0x00109c4a) */
/* WARNING: Removing unreachable block (ram,0x00109c71) */
/* WARNING: Removing unreachable block (ram,0x00109c76) */
/* WARNING: Removing unreachable block (ram,0x00109ce0) */
/* WARNING: Removing unreachable block (ram,0x00109c7e) */
/* WARNING: Removing unreachable block (ram,0x00109c92) */
/* WARNING: Removing unreachable block (ram,0x00109cfe) */
/* PhysicsServer2DWrapMT::shape_get_type(RID) const */

void __thiscall PhysicsServer2DWrapMT::shape_get_type(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109d36) */
/* WARNING: Removing unreachable block (ram,0x00109d90) */
/* WARNING: Removing unreachable block (ram,0x00109dd8) */
/* WARNING: Removing unreachable block (ram,0x00109d9b) */
/* WARNING: Removing unreachable block (ram,0x00109d4b) */
/* WARNING: Removing unreachable block (ram,0x00109d70) */
/* WARNING: Removing unreachable block (ram,0x00109d75) */
/* WARNING: Removing unreachable block (ram,0x00109d7d) */
/* WARNING: Removing unreachable block (ram,0x00109dc0) */
/* PhysicsServer2DWrapMT::body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */

void __thiscall PhysicsServer2DWrapMT::body_get_collision_exceptions(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109e25) */
/* WARNING: Removing unreachable block (ram,0x00109e80) */
/* WARNING: Removing unreachable block (ram,0x00109f30) */
/* WARNING: Removing unreachable block (ram,0x00109e8f) */
/* WARNING: Removing unreachable block (ram,0x00109f20) */
/* WARNING: Removing unreachable block (ram,0x00109eac) */
/* WARNING: Removing unreachable block (ram,0x00109ebb) */
/* WARNING: Removing unreachable block (ram,0x00109e3a) */
/* WARNING: Removing unreachable block (ram,0x00109ec0) */
/* WARNING: Removing unreachable block (ram,0x00109ef8) */
/* WARNING: Removing unreachable block (ram,0x00109f41) */
/* WARNING: Removing unreachable block (ram,0x00109f03) */
/* WARNING: Removing unreachable block (ram,0x00109ece) */
/* WARNING: Removing unreachable block (ram,0x00109e59) */
/* WARNING: Removing unreachable block (ram,0x00109e6d) */
/* WARNING: Removing unreachable block (ram,0x00109f4f) */
/* PhysicsServer2DWrapMT::body_clear_shapes(RID) */

void __thiscall PhysicsServer2DWrapMT::body_clear_shapes(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00109f95) */
/* WARNING: Removing unreachable block (ram,0x00109ff0) */
/* WARNING: Removing unreachable block (ram,0x0010a0a0) */
/* WARNING: Removing unreachable block (ram,0x00109fff) */
/* WARNING: Removing unreachable block (ram,0x0010a090) */
/* WARNING: Removing unreachable block (ram,0x0010a01c) */
/* WARNING: Removing unreachable block (ram,0x0010a02b) */
/* WARNING: Removing unreachable block (ram,0x00109faa) */
/* WARNING: Removing unreachable block (ram,0x0010a030) */
/* WARNING: Removing unreachable block (ram,0x0010a068) */
/* WARNING: Removing unreachable block (ram,0x0010a0b1) */
/* WARNING: Removing unreachable block (ram,0x0010a073) */
/* WARNING: Removing unreachable block (ram,0x0010a03e) */
/* WARNING: Removing unreachable block (ram,0x00109fc9) */
/* WARNING: Removing unreachable block (ram,0x00109fdd) */
/* WARNING: Removing unreachable block (ram,0x0010a0bf) */
/* PhysicsServer2DWrapMT::joint_clear(RID) */

void __thiscall PhysicsServer2DWrapMT::joint_clear(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a105) */
/* WARNING: Removing unreachable block (ram,0x0010a160) */
/* WARNING: Removing unreachable block (ram,0x0010a210) */
/* WARNING: Removing unreachable block (ram,0x0010a16f) */
/* WARNING: Removing unreachable block (ram,0x0010a200) */
/* WARNING: Removing unreachable block (ram,0x0010a18c) */
/* WARNING: Removing unreachable block (ram,0x0010a19b) */
/* WARNING: Removing unreachable block (ram,0x0010a11a) */
/* WARNING: Removing unreachable block (ram,0x0010a1a0) */
/* WARNING: Removing unreachable block (ram,0x0010a1d8) */
/* WARNING: Removing unreachable block (ram,0x0010a221) */
/* WARNING: Removing unreachable block (ram,0x0010a1e3) */
/* WARNING: Removing unreachable block (ram,0x0010a1ae) */
/* WARNING: Removing unreachable block (ram,0x0010a139) */
/* WARNING: Removing unreachable block (ram,0x0010a14d) */
/* WARNING: Removing unreachable block (ram,0x0010a22f) */
/* PhysicsServer2DWrapMT::body_reset_mass_properties(RID) */

void __thiscall PhysicsServer2DWrapMT::body_reset_mass_properties(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a275) */
/* WARNING: Removing unreachable block (ram,0x0010a2d0) */
/* WARNING: Removing unreachable block (ram,0x0010a380) */
/* WARNING: Removing unreachable block (ram,0x0010a2df) */
/* WARNING: Removing unreachable block (ram,0x0010a370) */
/* WARNING: Removing unreachable block (ram,0x0010a2fc) */
/* WARNING: Removing unreachable block (ram,0x0010a30b) */
/* WARNING: Removing unreachable block (ram,0x0010a28a) */
/* WARNING: Removing unreachable block (ram,0x0010a310) */
/* WARNING: Removing unreachable block (ram,0x0010a348) */
/* WARNING: Removing unreachable block (ram,0x0010a391) */
/* WARNING: Removing unreachable block (ram,0x0010a353) */
/* WARNING: Removing unreachable block (ram,0x0010a31e) */
/* WARNING: Removing unreachable block (ram,0x0010a2a9) */
/* WARNING: Removing unreachable block (ram,0x0010a2bd) */
/* WARNING: Removing unreachable block (ram,0x0010a39f) */
/* PhysicsServer2DWrapMT::free(RID) */

void __thiscall PhysicsServer2DWrapMT::free(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a3e5) */
/* WARNING: Removing unreachable block (ram,0x0010a440) */
/* WARNING: Removing unreachable block (ram,0x0010a4f0) */
/* WARNING: Removing unreachable block (ram,0x0010a44f) */
/* WARNING: Removing unreachable block (ram,0x0010a4e0) */
/* WARNING: Removing unreachable block (ram,0x0010a46c) */
/* WARNING: Removing unreachable block (ram,0x0010a47b) */
/* WARNING: Removing unreachable block (ram,0x0010a3fa) */
/* WARNING: Removing unreachable block (ram,0x0010a480) */
/* WARNING: Removing unreachable block (ram,0x0010a4b8) */
/* WARNING: Removing unreachable block (ram,0x0010a501) */
/* WARNING: Removing unreachable block (ram,0x0010a4c3) */
/* WARNING: Removing unreachable block (ram,0x0010a48e) */
/* WARNING: Removing unreachable block (ram,0x0010a419) */
/* WARNING: Removing unreachable block (ram,0x0010a42d) */
/* WARNING: Removing unreachable block (ram,0x0010a50f) */
/* PhysicsServer2DWrapMT::area_clear_shapes(RID) */

void __thiscall PhysicsServer2DWrapMT::area_clear_shapes(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a55a) */
/* WARNING: Removing unreachable block (ram,0x0010a5b0) */
/* WARNING: Removing unreachable block (ram,0x0010a668) */
/* WARNING: Removing unreachable block (ram,0x0010a5bf) */
/* WARNING: Removing unreachable block (ram,0x0010a650) */
/* WARNING: Removing unreachable block (ram,0x0010a5dc) */
/* WARNING: Removing unreachable block (ram,0x0010a5eb) */
/* WARNING: Removing unreachable block (ram,0x0010a56f) */
/* WARNING: Removing unreachable block (ram,0x0010a5f0) */
/* WARNING: Removing unreachable block (ram,0x0010a628) */
/* WARNING: Removing unreachable block (ram,0x0010a679) */
/* WARNING: Removing unreachable block (ram,0x0010a633) */
/* WARNING: Removing unreachable block (ram,0x0010a5fe) */
/* WARNING: Removing unreachable block (ram,0x0010a591) */
/* WARNING: Removing unreachable block (ram,0x0010a5a5) */
/* WARNING: Removing unreachable block (ram,0x0010a687) */
/* PhysicsServer2DWrapMT::area_set_monitor_callback(RID, Callable const&) */

void __thiscall PhysicsServer2DWrapMT::area_set_monitor_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a6ca) */
/* WARNING: Removing unreachable block (ram,0x0010a720) */
/* WARNING: Removing unreachable block (ram,0x0010a7d8) */
/* WARNING: Removing unreachable block (ram,0x0010a72f) */
/* WARNING: Removing unreachable block (ram,0x0010a7c0) */
/* WARNING: Removing unreachable block (ram,0x0010a74c) */
/* WARNING: Removing unreachable block (ram,0x0010a75b) */
/* WARNING: Removing unreachable block (ram,0x0010a6df) */
/* WARNING: Removing unreachable block (ram,0x0010a760) */
/* WARNING: Removing unreachable block (ram,0x0010a798) */
/* WARNING: Removing unreachable block (ram,0x0010a7e9) */
/* WARNING: Removing unreachable block (ram,0x0010a7a3) */
/* WARNING: Removing unreachable block (ram,0x0010a76e) */
/* WARNING: Removing unreachable block (ram,0x0010a701) */
/* WARNING: Removing unreachable block (ram,0x0010a715) */
/* WARNING: Removing unreachable block (ram,0x0010a7f7) */
/* PhysicsServer2DWrapMT::body_add_constant_central_force(RID, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_add_constant_central_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a83a) */
/* WARNING: Removing unreachable block (ram,0x0010a890) */
/* WARNING: Removing unreachable block (ram,0x0010a948) */
/* WARNING: Removing unreachable block (ram,0x0010a89f) */
/* WARNING: Removing unreachable block (ram,0x0010a930) */
/* WARNING: Removing unreachable block (ram,0x0010a8bc) */
/* WARNING: Removing unreachable block (ram,0x0010a8cb) */
/* WARNING: Removing unreachable block (ram,0x0010a84f) */
/* WARNING: Removing unreachable block (ram,0x0010a8d0) */
/* WARNING: Removing unreachable block (ram,0x0010a908) */
/* WARNING: Removing unreachable block (ram,0x0010a959) */
/* WARNING: Removing unreachable block (ram,0x0010a913) */
/* WARNING: Removing unreachable block (ram,0x0010a8de) */
/* WARNING: Removing unreachable block (ram,0x0010a871) */
/* WARNING: Removing unreachable block (ram,0x0010a885) */
/* WARNING: Removing unreachable block (ram,0x0010a967) */
/* PhysicsServer2DWrapMT::body_apply_central_impulse(RID, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_apply_central_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010a9a9) */
/* WARNING: Removing unreachable block (ram,0x0010aa00) */
/* WARNING: Removing unreachable block (ram,0x0010aad0) */
/* WARNING: Removing unreachable block (ram,0x0010aa0f) */
/* WARNING: Removing unreachable block (ram,0x0010aab8) */
/* WARNING: Removing unreachable block (ram,0x0010aa30) */
/* WARNING: Removing unreachable block (ram,0x0010aa48) */
/* WARNING: Removing unreachable block (ram,0x0010a9be) */
/* WARNING: Removing unreachable block (ram,0x0010aa4d) */
/* WARNING: Removing unreachable block (ram,0x0010aa88) */
/* WARNING: Removing unreachable block (ram,0x0010aae1) */
/* WARNING: Removing unreachable block (ram,0x0010aa93) */
/* WARNING: Removing unreachable block (ram,0x0010aa5b) */
/* WARNING: Removing unreachable block (ram,0x0010a9e0) */
/* WARNING: Removing unreachable block (ram,0x0010a9f4) */
/* WARNING: Removing unreachable block (ram,0x0010aaef) */
/* PhysicsServer2DWrapMT::area_attach_object_instance_id(RID, ObjectID) */

void __thiscall PhysicsServer2DWrapMT::area_attach_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ab3a) */
/* WARNING: Removing unreachable block (ram,0x0010ab90) */
/* WARNING: Removing unreachable block (ram,0x0010ac48) */
/* WARNING: Removing unreachable block (ram,0x0010ab9f) */
/* WARNING: Removing unreachable block (ram,0x0010ac30) */
/* WARNING: Removing unreachable block (ram,0x0010abbc) */
/* WARNING: Removing unreachable block (ram,0x0010abcb) */
/* WARNING: Removing unreachable block (ram,0x0010ab4f) */
/* WARNING: Removing unreachable block (ram,0x0010abd0) */
/* WARNING: Removing unreachable block (ram,0x0010ac08) */
/* WARNING: Removing unreachable block (ram,0x0010ac59) */
/* WARNING: Removing unreachable block (ram,0x0010ac13) */
/* WARNING: Removing unreachable block (ram,0x0010abde) */
/* WARNING: Removing unreachable block (ram,0x0010ab71) */
/* WARNING: Removing unreachable block (ram,0x0010ab85) */
/* WARNING: Removing unreachable block (ram,0x0010ac67) */
/* PhysicsServer2DWrapMT::body_set_constant_force(RID, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_set_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010aca9) */
/* WARNING: Removing unreachable block (ram,0x0010ad00) */
/* WARNING: Removing unreachable block (ram,0x0010add0) */
/* WARNING: Removing unreachable block (ram,0x0010ad0f) */
/* WARNING: Removing unreachable block (ram,0x0010adb8) */
/* WARNING: Removing unreachable block (ram,0x0010ad30) */
/* WARNING: Removing unreachable block (ram,0x0010ad48) */
/* WARNING: Removing unreachable block (ram,0x0010acbe) */
/* WARNING: Removing unreachable block (ram,0x0010ad4d) */
/* WARNING: Removing unreachable block (ram,0x0010ad88) */
/* WARNING: Removing unreachable block (ram,0x0010ade1) */
/* WARNING: Removing unreachable block (ram,0x0010ad93) */
/* WARNING: Removing unreachable block (ram,0x0010ad5b) */
/* WARNING: Removing unreachable block (ram,0x0010ace0) */
/* WARNING: Removing unreachable block (ram,0x0010acf4) */
/* WARNING: Removing unreachable block (ram,0x0010adef) */
/* PhysicsServer2DWrapMT::body_set_space(RID, RID) */

void __thiscall PhysicsServer2DWrapMT::body_set_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ae3a) */
/* WARNING: Removing unreachable block (ram,0x0010ae90) */
/* WARNING: Removing unreachable block (ram,0x0010af48) */
/* WARNING: Removing unreachable block (ram,0x0010ae9f) */
/* WARNING: Removing unreachable block (ram,0x0010af30) */
/* WARNING: Removing unreachable block (ram,0x0010aebc) */
/* WARNING: Removing unreachable block (ram,0x0010aecb) */
/* WARNING: Removing unreachable block (ram,0x0010ae4f) */
/* WARNING: Removing unreachable block (ram,0x0010aed0) */
/* WARNING: Removing unreachable block (ram,0x0010af08) */
/* WARNING: Removing unreachable block (ram,0x0010af59) */
/* WARNING: Removing unreachable block (ram,0x0010af13) */
/* WARNING: Removing unreachable block (ram,0x0010aede) */
/* WARNING: Removing unreachable block (ram,0x0010ae71) */
/* WARNING: Removing unreachable block (ram,0x0010ae85) */
/* WARNING: Removing unreachable block (ram,0x0010af67) */
/* PhysicsServer2DWrapMT::body_apply_central_force(RID, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_apply_central_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010afaa) */
/* WARNING: Removing unreachable block (ram,0x0010b000) */
/* WARNING: Removing unreachable block (ram,0x0010b0b8) */
/* WARNING: Removing unreachable block (ram,0x0010b00f) */
/* WARNING: Removing unreachable block (ram,0x0010b0a0) */
/* WARNING: Removing unreachable block (ram,0x0010b02c) */
/* WARNING: Removing unreachable block (ram,0x0010b03b) */
/* WARNING: Removing unreachable block (ram,0x0010afbf) */
/* WARNING: Removing unreachable block (ram,0x0010b040) */
/* WARNING: Removing unreachable block (ram,0x0010b078) */
/* WARNING: Removing unreachable block (ram,0x0010b0c9) */
/* WARNING: Removing unreachable block (ram,0x0010b083) */
/* WARNING: Removing unreachable block (ram,0x0010b04e) */
/* WARNING: Removing unreachable block (ram,0x0010afe1) */
/* WARNING: Removing unreachable block (ram,0x0010aff5) */
/* WARNING: Removing unreachable block (ram,0x0010b0d7) */
/* PhysicsServer2DWrapMT::area_set_area_monitor_callback(RID, Callable const&) */

void __thiscall PhysicsServer2DWrapMT::area_set_area_monitor_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b119) */
/* WARNING: Removing unreachable block (ram,0x0010b170) */
/* WARNING: Removing unreachable block (ram,0x0010b240) */
/* WARNING: Removing unreachable block (ram,0x0010b17f) */
/* WARNING: Removing unreachable block (ram,0x0010b228) */
/* WARNING: Removing unreachable block (ram,0x0010b1a0) */
/* WARNING: Removing unreachable block (ram,0x0010b1b8) */
/* WARNING: Removing unreachable block (ram,0x0010b12e) */
/* WARNING: Removing unreachable block (ram,0x0010b1bd) */
/* WARNING: Removing unreachable block (ram,0x0010b1f8) */
/* WARNING: Removing unreachable block (ram,0x0010b251) */
/* WARNING: Removing unreachable block (ram,0x0010b203) */
/* WARNING: Removing unreachable block (ram,0x0010b1cb) */
/* WARNING: Removing unreachable block (ram,0x0010b150) */
/* WARNING: Removing unreachable block (ram,0x0010b164) */
/* WARNING: Removing unreachable block (ram,0x0010b25f) */
/* PhysicsServer2DWrapMT::body_attach_object_instance_id(RID, ObjectID) */

void __thiscall PhysicsServer2DWrapMT::body_attach_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b2aa) */
/* WARNING: Removing unreachable block (ram,0x0010b300) */
/* WARNING: Removing unreachable block (ram,0x0010b3b8) */
/* WARNING: Removing unreachable block (ram,0x0010b30f) */
/* WARNING: Removing unreachable block (ram,0x0010b3a0) */
/* WARNING: Removing unreachable block (ram,0x0010b32c) */
/* WARNING: Removing unreachable block (ram,0x0010b33b) */
/* WARNING: Removing unreachable block (ram,0x0010b2bf) */
/* WARNING: Removing unreachable block (ram,0x0010b340) */
/* WARNING: Removing unreachable block (ram,0x0010b378) */
/* WARNING: Removing unreachable block (ram,0x0010b3c9) */
/* WARNING: Removing unreachable block (ram,0x0010b383) */
/* WARNING: Removing unreachable block (ram,0x0010b34e) */
/* WARNING: Removing unreachable block (ram,0x0010b2e1) */
/* WARNING: Removing unreachable block (ram,0x0010b2f5) */
/* WARNING: Removing unreachable block (ram,0x0010b3d7) */
/* PhysicsServer2DWrapMT::body_set_axis_velocity(RID, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_set_axis_velocity(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b419) */
/* WARNING: Removing unreachable block (ram,0x0010b470) */
/* WARNING: Removing unreachable block (ram,0x0010b540) */
/* WARNING: Removing unreachable block (ram,0x0010b47f) */
/* WARNING: Removing unreachable block (ram,0x0010b528) */
/* WARNING: Removing unreachable block (ram,0x0010b4a0) */
/* WARNING: Removing unreachable block (ram,0x0010b4b8) */
/* WARNING: Removing unreachable block (ram,0x0010b42e) */
/* WARNING: Removing unreachable block (ram,0x0010b4bd) */
/* WARNING: Removing unreachable block (ram,0x0010b4f8) */
/* WARNING: Removing unreachable block (ram,0x0010b551) */
/* WARNING: Removing unreachable block (ram,0x0010b503) */
/* WARNING: Removing unreachable block (ram,0x0010b4cb) */
/* WARNING: Removing unreachable block (ram,0x0010b450) */
/* WARNING: Removing unreachable block (ram,0x0010b464) */
/* WARNING: Removing unreachable block (ram,0x0010b55f) */
/* PhysicsServer2DWrapMT::area_attach_canvas_instance_id(RID, ObjectID) */

void __thiscall PhysicsServer2DWrapMT::area_attach_canvas_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b5a9) */
/* WARNING: Removing unreachable block (ram,0x0010b600) */
/* WARNING: Removing unreachable block (ram,0x0010b6d0) */
/* WARNING: Removing unreachable block (ram,0x0010b60f) */
/* WARNING: Removing unreachable block (ram,0x0010b6b8) */
/* WARNING: Removing unreachable block (ram,0x0010b630) */
/* WARNING: Removing unreachable block (ram,0x0010b648) */
/* WARNING: Removing unreachable block (ram,0x0010b5be) */
/* WARNING: Removing unreachable block (ram,0x0010b64d) */
/* WARNING: Removing unreachable block (ram,0x0010b688) */
/* WARNING: Removing unreachable block (ram,0x0010b6e1) */
/* WARNING: Removing unreachable block (ram,0x0010b693) */
/* WARNING: Removing unreachable block (ram,0x0010b65b) */
/* WARNING: Removing unreachable block (ram,0x0010b5e0) */
/* WARNING: Removing unreachable block (ram,0x0010b5f4) */
/* WARNING: Removing unreachable block (ram,0x0010b6ef) */
/* PhysicsServer2DWrapMT::body_attach_canvas_instance_id(RID, ObjectID) */

void __thiscall PhysicsServer2DWrapMT::body_attach_canvas_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b73a) */
/* WARNING: Removing unreachable block (ram,0x0010b790) */
/* WARNING: Removing unreachable block (ram,0x0010b848) */
/* WARNING: Removing unreachable block (ram,0x0010b79f) */
/* WARNING: Removing unreachable block (ram,0x0010b830) */
/* WARNING: Removing unreachable block (ram,0x0010b7bc) */
/* WARNING: Removing unreachable block (ram,0x0010b7cb) */
/* WARNING: Removing unreachable block (ram,0x0010b74f) */
/* WARNING: Removing unreachable block (ram,0x0010b7d0) */
/* WARNING: Removing unreachable block (ram,0x0010b808) */
/* WARNING: Removing unreachable block (ram,0x0010b859) */
/* WARNING: Removing unreachable block (ram,0x0010b813) */
/* WARNING: Removing unreachable block (ram,0x0010b7de) */
/* WARNING: Removing unreachable block (ram,0x0010b771) */
/* WARNING: Removing unreachable block (ram,0x0010b785) */
/* WARNING: Removing unreachable block (ram,0x0010b867) */
/* PhysicsServer2DWrapMT::body_set_state_sync_callback(RID, Callable const&) */

void __thiscall PhysicsServer2DWrapMT::body_set_state_sync_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b8a9) */
/* WARNING: Removing unreachable block (ram,0x0010b900) */
/* WARNING: Removing unreachable block (ram,0x0010b9d0) */
/* WARNING: Removing unreachable block (ram,0x0010b90f) */
/* WARNING: Removing unreachable block (ram,0x0010b9b8) */
/* WARNING: Removing unreachable block (ram,0x0010b930) */
/* WARNING: Removing unreachable block (ram,0x0010b948) */
/* WARNING: Removing unreachable block (ram,0x0010b8be) */
/* WARNING: Removing unreachable block (ram,0x0010b94d) */
/* WARNING: Removing unreachable block (ram,0x0010b988) */
/* WARNING: Removing unreachable block (ram,0x0010b9e1) */
/* WARNING: Removing unreachable block (ram,0x0010b993) */
/* WARNING: Removing unreachable block (ram,0x0010b95b) */
/* WARNING: Removing unreachable block (ram,0x0010b8e0) */
/* WARNING: Removing unreachable block (ram,0x0010b8f4) */
/* WARNING: Removing unreachable block (ram,0x0010b9ef) */
/* PhysicsServer2DWrapMT::body_add_collision_exception(RID, RID) */

void __thiscall PhysicsServer2DWrapMT::body_add_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ba39) */
/* WARNING: Removing unreachable block (ram,0x0010ba90) */
/* WARNING: Removing unreachable block (ram,0x0010bb60) */
/* WARNING: Removing unreachable block (ram,0x0010ba9f) */
/* WARNING: Removing unreachable block (ram,0x0010bb48) */
/* WARNING: Removing unreachable block (ram,0x0010bac0) */
/* WARNING: Removing unreachable block (ram,0x0010bad8) */
/* WARNING: Removing unreachable block (ram,0x0010ba4e) */
/* WARNING: Removing unreachable block (ram,0x0010badd) */
/* WARNING: Removing unreachable block (ram,0x0010bb18) */
/* WARNING: Removing unreachable block (ram,0x0010bb71) */
/* WARNING: Removing unreachable block (ram,0x0010bb23) */
/* WARNING: Removing unreachable block (ram,0x0010baeb) */
/* WARNING: Removing unreachable block (ram,0x0010ba70) */
/* WARNING: Removing unreachable block (ram,0x0010ba84) */
/* WARNING: Removing unreachable block (ram,0x0010bb7f) */
/* PhysicsServer2DWrapMT::area_set_space(RID, RID) */

void __thiscall PhysicsServer2DWrapMT::area_set_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bbc9) */
/* WARNING: Removing unreachable block (ram,0x0010bc20) */
/* WARNING: Removing unreachable block (ram,0x0010bcf0) */
/* WARNING: Removing unreachable block (ram,0x0010bc2f) */
/* WARNING: Removing unreachable block (ram,0x0010bcd8) */
/* WARNING: Removing unreachable block (ram,0x0010bc50) */
/* WARNING: Removing unreachable block (ram,0x0010bc68) */
/* WARNING: Removing unreachable block (ram,0x0010bbde) */
/* WARNING: Removing unreachable block (ram,0x0010bc6d) */
/* WARNING: Removing unreachable block (ram,0x0010bca8) */
/* WARNING: Removing unreachable block (ram,0x0010bd01) */
/* WARNING: Removing unreachable block (ram,0x0010bcb3) */
/* WARNING: Removing unreachable block (ram,0x0010bc7b) */
/* WARNING: Removing unreachable block (ram,0x0010bc00) */
/* WARNING: Removing unreachable block (ram,0x0010bc14) */
/* WARNING: Removing unreachable block (ram,0x0010bd0f) */
/* PhysicsServer2DWrapMT::body_remove_collision_exception(RID, RID) */

void __thiscall PhysicsServer2DWrapMT::body_remove_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bd59) */
/* WARNING: Removing unreachable block (ram,0x0010bdb0) */
/* WARNING: Removing unreachable block (ram,0x0010be80) */
/* WARNING: Removing unreachable block (ram,0x0010bdbf) */
/* WARNING: Removing unreachable block (ram,0x0010be68) */
/* WARNING: Removing unreachable block (ram,0x0010bde4) */
/* WARNING: Removing unreachable block (ram,0x0010bdf7) */
/* WARNING: Removing unreachable block (ram,0x0010bd6e) */
/* WARNING: Removing unreachable block (ram,0x0010bdfc) */
/* WARNING: Removing unreachable block (ram,0x0010be38) */
/* WARNING: Removing unreachable block (ram,0x0010be91) */
/* WARNING: Removing unreachable block (ram,0x0010be43) */
/* WARNING: Removing unreachable block (ram,0x0010be0a) */
/* WARNING: Removing unreachable block (ram,0x0010bd92) */
/* WARNING: Removing unreachable block (ram,0x0010bda6) */
/* WARNING: Removing unreachable block (ram,0x0010be9f) */
/* PhysicsServer2DWrapMT::area_set_collision_layer(RID, unsigned int) */

void __thiscall PhysicsServer2DWrapMT::area_set_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bee9) */
/* WARNING: Removing unreachable block (ram,0x0010bf40) */
/* WARNING: Removing unreachable block (ram,0x0010c010) */
/* WARNING: Removing unreachable block (ram,0x0010bf4f) */
/* WARNING: Removing unreachable block (ram,0x0010bff8) */
/* WARNING: Removing unreachable block (ram,0x0010bf74) */
/* WARNING: Removing unreachable block (ram,0x0010bf87) */
/* WARNING: Removing unreachable block (ram,0x0010befe) */
/* WARNING: Removing unreachable block (ram,0x0010bf8c) */
/* WARNING: Removing unreachable block (ram,0x0010bfc8) */
/* WARNING: Removing unreachable block (ram,0x0010c021) */
/* WARNING: Removing unreachable block (ram,0x0010bfd3) */
/* WARNING: Removing unreachable block (ram,0x0010bf9a) */
/* WARNING: Removing unreachable block (ram,0x0010bf22) */
/* WARNING: Removing unreachable block (ram,0x0010bf36) */
/* WARNING: Removing unreachable block (ram,0x0010c02f) */
/* PhysicsServer2DWrapMT::area_set_collision_mask(RID, unsigned int) */

void __thiscall PhysicsServer2DWrapMT::area_set_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c079) */
/* WARNING: Removing unreachable block (ram,0x0010c0d0) */
/* WARNING: Removing unreachable block (ram,0x0010c190) */
/* WARNING: Removing unreachable block (ram,0x0010c0df) */
/* WARNING: Removing unreachable block (ram,0x0010c180) */
/* WARNING: Removing unreachable block (ram,0x0010c101) */
/* WARNING: Removing unreachable block (ram,0x0010c114) */
/* WARNING: Removing unreachable block (ram,0x0010c08e) */
/* WARNING: Removing unreachable block (ram,0x0010c119) */
/* WARNING: Removing unreachable block (ram,0x0010c150) */
/* WARNING: Removing unreachable block (ram,0x0010c1a1) */
/* WARNING: Removing unreachable block (ram,0x0010c15b) */
/* WARNING: Removing unreachable block (ram,0x0010c127) */
/* WARNING: Removing unreachable block (ram,0x0010c0b2) */
/* WARNING: Removing unreachable block (ram,0x0010c0c6) */
/* WARNING: Removing unreachable block (ram,0x0010c1af) */
/* PhysicsServer2DWrapMT::body_set_pickable(RID, bool) */

void __thiscall PhysicsServer2DWrapMT::body_set_pickable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c1f9) */
/* WARNING: Removing unreachable block (ram,0x0010c250) */
/* WARNING: Removing unreachable block (ram,0x0010c310) */
/* WARNING: Removing unreachable block (ram,0x0010c25f) */
/* WARNING: Removing unreachable block (ram,0x0010c300) */
/* WARNING: Removing unreachable block (ram,0x0010c281) */
/* WARNING: Removing unreachable block (ram,0x0010c294) */
/* WARNING: Removing unreachable block (ram,0x0010c20e) */
/* WARNING: Removing unreachable block (ram,0x0010c299) */
/* WARNING: Removing unreachable block (ram,0x0010c2d0) */
/* WARNING: Removing unreachable block (ram,0x0010c321) */
/* WARNING: Removing unreachable block (ram,0x0010c2db) */
/* WARNING: Removing unreachable block (ram,0x0010c2a7) */
/* WARNING: Removing unreachable block (ram,0x0010c232) */
/* WARNING: Removing unreachable block (ram,0x0010c246) */
/* WARNING: Removing unreachable block (ram,0x0010c32f) */
/* PhysicsServer2DWrapMT::space_set_active(RID, bool) */

void __thiscall PhysicsServer2DWrapMT::space_set_active(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c379) */
/* WARNING: Removing unreachable block (ram,0x0010c3d0) */
/* WARNING: Removing unreachable block (ram,0x0010c4a0) */
/* WARNING: Removing unreachable block (ram,0x0010c3df) */
/* WARNING: Removing unreachable block (ram,0x0010c488) */
/* WARNING: Removing unreachable block (ram,0x0010c404) */
/* WARNING: Removing unreachable block (ram,0x0010c417) */
/* WARNING: Removing unreachable block (ram,0x0010c38e) */
/* WARNING: Removing unreachable block (ram,0x0010c41c) */
/* WARNING: Removing unreachable block (ram,0x0010c458) */
/* WARNING: Removing unreachable block (ram,0x0010c4b1) */
/* WARNING: Removing unreachable block (ram,0x0010c463) */
/* WARNING: Removing unreachable block (ram,0x0010c42a) */
/* WARNING: Removing unreachable block (ram,0x0010c3b2) */
/* WARNING: Removing unreachable block (ram,0x0010c3c6) */
/* WARNING: Removing unreachable block (ram,0x0010c4bf) */
/* PhysicsServer2DWrapMT::area_remove_shape(RID, int) */

void __thiscall PhysicsServer2DWrapMT::area_remove_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c509) */
/* WARNING: Removing unreachable block (ram,0x0010c560) */
/* WARNING: Removing unreachable block (ram,0x0010c630) */
/* WARNING: Removing unreachable block (ram,0x0010c56f) */
/* WARNING: Removing unreachable block (ram,0x0010c618) */
/* WARNING: Removing unreachable block (ram,0x0010c594) */
/* WARNING: Removing unreachable block (ram,0x0010c5a7) */
/* WARNING: Removing unreachable block (ram,0x0010c51e) */
/* WARNING: Removing unreachable block (ram,0x0010c5ac) */
/* WARNING: Removing unreachable block (ram,0x0010c5e8) */
/* WARNING: Removing unreachable block (ram,0x0010c641) */
/* WARNING: Removing unreachable block (ram,0x0010c5f3) */
/* WARNING: Removing unreachable block (ram,0x0010c5ba) */
/* WARNING: Removing unreachable block (ram,0x0010c542) */
/* WARNING: Removing unreachable block (ram,0x0010c556) */
/* WARNING: Removing unreachable block (ram,0x0010c64f) */
/* PhysicsServer2DWrapMT::body_remove_shape(RID, int) */

void __thiscall PhysicsServer2DWrapMT::body_remove_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c699) */
/* WARNING: Removing unreachable block (ram,0x0010c6f0) */
/* WARNING: Removing unreachable block (ram,0x0010c7c0) */
/* WARNING: Removing unreachable block (ram,0x0010c6ff) */
/* WARNING: Removing unreachable block (ram,0x0010c7a8) */
/* WARNING: Removing unreachable block (ram,0x0010c724) */
/* WARNING: Removing unreachable block (ram,0x0010c737) */
/* WARNING: Removing unreachable block (ram,0x0010c6ae) */
/* WARNING: Removing unreachable block (ram,0x0010c73c) */
/* WARNING: Removing unreachable block (ram,0x0010c778) */
/* WARNING: Removing unreachable block (ram,0x0010c7d1) */
/* WARNING: Removing unreachable block (ram,0x0010c783) */
/* WARNING: Removing unreachable block (ram,0x0010c74a) */
/* WARNING: Removing unreachable block (ram,0x0010c6d2) */
/* WARNING: Removing unreachable block (ram,0x0010c6e6) */
/* WARNING: Removing unreachable block (ram,0x0010c7df) */
/* PhysicsServer2DWrapMT::space_set_debug_contacts(RID, int) */

void __thiscall PhysicsServer2DWrapMT::space_set_debug_contacts(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c829) */
/* WARNING: Removing unreachable block (ram,0x0010c880) */
/* WARNING: Removing unreachable block (ram,0x0010c940) */
/* WARNING: Removing unreachable block (ram,0x0010c88f) */
/* WARNING: Removing unreachable block (ram,0x0010c930) */
/* WARNING: Removing unreachable block (ram,0x0010c8b1) */
/* WARNING: Removing unreachable block (ram,0x0010c8c4) */
/* WARNING: Removing unreachable block (ram,0x0010c83e) */
/* WARNING: Removing unreachable block (ram,0x0010c8c9) */
/* WARNING: Removing unreachable block (ram,0x0010c900) */
/* WARNING: Removing unreachable block (ram,0x0010c951) */
/* WARNING: Removing unreachable block (ram,0x0010c90b) */
/* WARNING: Removing unreachable block (ram,0x0010c8d7) */
/* WARNING: Removing unreachable block (ram,0x0010c862) */
/* WARNING: Removing unreachable block (ram,0x0010c876) */
/* WARNING: Removing unreachable block (ram,0x0010c95f) */
/* PhysicsServer2DWrapMT::body_set_omit_force_integration(RID, bool) */

void __thiscall PhysicsServer2DWrapMT::body_set_omit_force_integration(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c9ab) */
/* WARNING: Removing unreachable block (ram,0x0010ca08) */
/* WARNING: Removing unreachable block (ram,0x0010cad0) */
/* WARNING: Removing unreachable block (ram,0x0010ca17) */
/* WARNING: Removing unreachable block (ram,0x0010cac0) */
/* WARNING: Removing unreachable block (ram,0x0010ca3e) */
/* WARNING: Removing unreachable block (ram,0x0010ca53) */
/* WARNING: Removing unreachable block (ram,0x0010c9c0) */
/* WARNING: Removing unreachable block (ram,0x0010ca58) */
/* WARNING: Removing unreachable block (ram,0x0010ca90) */
/* WARNING: Removing unreachable block (ram,0x0010cae1) */
/* WARNING: Removing unreachable block (ram,0x0010ca9b) */
/* WARNING: Removing unreachable block (ram,0x0010ca66) */
/* WARNING: Removing unreachable block (ram,0x0010c9e4) */
/* WARNING: Removing unreachable block (ram,0x0010c9f8) */
/* WARNING: Removing unreachable block (ram,0x0010caef) */
/* PhysicsServer2DWrapMT::body_set_contacts_reported_depth_threshold(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_set_contacts_reported_depth_threshold(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cb3b) */
/* WARNING: Removing unreachable block (ram,0x0010cb98) */
/* WARNING: Removing unreachable block (ram,0x0010cc60) */
/* WARNING: Removing unreachable block (ram,0x0010cba7) */
/* WARNING: Removing unreachable block (ram,0x0010cc50) */
/* WARNING: Removing unreachable block (ram,0x0010cbce) */
/* WARNING: Removing unreachable block (ram,0x0010cbe3) */
/* WARNING: Removing unreachable block (ram,0x0010cb50) */
/* WARNING: Removing unreachable block (ram,0x0010cbe8) */
/* WARNING: Removing unreachable block (ram,0x0010cc20) */
/* WARNING: Removing unreachable block (ram,0x0010cc71) */
/* WARNING: Removing unreachable block (ram,0x0010cc2b) */
/* WARNING: Removing unreachable block (ram,0x0010cbf6) */
/* WARNING: Removing unreachable block (ram,0x0010cb74) */
/* WARNING: Removing unreachable block (ram,0x0010cb88) */
/* WARNING: Removing unreachable block (ram,0x0010cc7f) */
/* PhysicsServer2DWrapMT::body_set_constant_torque(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_set_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cccb) */
/* WARNING: Removing unreachable block (ram,0x0010cd28) */
/* WARNING: Removing unreachable block (ram,0x0010cdf0) */
/* WARNING: Removing unreachable block (ram,0x0010cd37) */
/* WARNING: Removing unreachable block (ram,0x0010cde0) */
/* WARNING: Removing unreachable block (ram,0x0010cd5e) */
/* WARNING: Removing unreachable block (ram,0x0010cd73) */
/* WARNING: Removing unreachable block (ram,0x0010cce0) */
/* WARNING: Removing unreachable block (ram,0x0010cd78) */
/* WARNING: Removing unreachable block (ram,0x0010cdb0) */
/* WARNING: Removing unreachable block (ram,0x0010ce01) */
/* WARNING: Removing unreachable block (ram,0x0010cdbb) */
/* WARNING: Removing unreachable block (ram,0x0010cd86) */
/* WARNING: Removing unreachable block (ram,0x0010cd04) */
/* WARNING: Removing unreachable block (ram,0x0010cd18) */
/* WARNING: Removing unreachable block (ram,0x0010ce0f) */
/* PhysicsServer2DWrapMT::body_set_collision_priority(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_set_collision_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ce59) */
/* WARNING: Removing unreachable block (ram,0x0010ceb0) */
/* WARNING: Removing unreachable block (ram,0x0010cf70) */
/* WARNING: Removing unreachable block (ram,0x0010cebf) */
/* WARNING: Removing unreachable block (ram,0x0010cf60) */
/* WARNING: Removing unreachable block (ram,0x0010cee1) */
/* WARNING: Removing unreachable block (ram,0x0010cef4) */
/* WARNING: Removing unreachable block (ram,0x0010ce6e) */
/* WARNING: Removing unreachable block (ram,0x0010cef9) */
/* WARNING: Removing unreachable block (ram,0x0010cf30) */
/* WARNING: Removing unreachable block (ram,0x0010cf81) */
/* WARNING: Removing unreachable block (ram,0x0010cf3b) */
/* WARNING: Removing unreachable block (ram,0x0010cf07) */
/* WARNING: Removing unreachable block (ram,0x0010ce92) */
/* WARNING: Removing unreachable block (ram,0x0010cea6) */
/* WARNING: Removing unreachable block (ram,0x0010cf8f) */
/* PhysicsServer2DWrapMT::area_set_monitorable(RID, bool) */

void __thiscall PhysicsServer2DWrapMT::area_set_monitorable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cfd9) */
/* WARNING: Removing unreachable block (ram,0x0010d030) */
/* WARNING: Removing unreachable block (ram,0x0010d100) */
/* WARNING: Removing unreachable block (ram,0x0010d03f) */
/* WARNING: Removing unreachable block (ram,0x0010d0e8) */
/* WARNING: Removing unreachable block (ram,0x0010d064) */
/* WARNING: Removing unreachable block (ram,0x0010d077) */
/* WARNING: Removing unreachable block (ram,0x0010cfee) */
/* WARNING: Removing unreachable block (ram,0x0010d07c) */
/* WARNING: Removing unreachable block (ram,0x0010d0b8) */
/* WARNING: Removing unreachable block (ram,0x0010d111) */
/* WARNING: Removing unreachable block (ram,0x0010d0c3) */
/* WARNING: Removing unreachable block (ram,0x0010d08a) */
/* WARNING: Removing unreachable block (ram,0x0010d012) */
/* WARNING: Removing unreachable block (ram,0x0010d026) */
/* WARNING: Removing unreachable block (ram,0x0010d11f) */
/* PhysicsServer2DWrapMT::body_set_collision_layer(RID, unsigned int) */

void __thiscall PhysicsServer2DWrapMT::body_set_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d16b) */
/* WARNING: Removing unreachable block (ram,0x0010d1c8) */
/* WARNING: Removing unreachable block (ram,0x0010d290) */
/* WARNING: Removing unreachable block (ram,0x0010d1d7) */
/* WARNING: Removing unreachable block (ram,0x0010d280) */
/* WARNING: Removing unreachable block (ram,0x0010d1fe) */
/* WARNING: Removing unreachable block (ram,0x0010d213) */
/* WARNING: Removing unreachable block (ram,0x0010d180) */
/* WARNING: Removing unreachable block (ram,0x0010d218) */
/* WARNING: Removing unreachable block (ram,0x0010d250) */
/* WARNING: Removing unreachable block (ram,0x0010d2a1) */
/* WARNING: Removing unreachable block (ram,0x0010d25b) */
/* WARNING: Removing unreachable block (ram,0x0010d226) */
/* WARNING: Removing unreachable block (ram,0x0010d1a4) */
/* WARNING: Removing unreachable block (ram,0x0010d1b8) */
/* WARNING: Removing unreachable block (ram,0x0010d2af) */
/* PhysicsServer2DWrapMT::shape_set_custom_solver_bias(RID, float) */

void __thiscall PhysicsServer2DWrapMT::shape_set_custom_solver_bias(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d2fb) */
/* WARNING: Removing unreachable block (ram,0x0010d358) */
/* WARNING: Removing unreachable block (ram,0x0010d420) */
/* WARNING: Removing unreachable block (ram,0x0010d367) */
/* WARNING: Removing unreachable block (ram,0x0010d410) */
/* WARNING: Removing unreachable block (ram,0x0010d38e) */
/* WARNING: Removing unreachable block (ram,0x0010d3a3) */
/* WARNING: Removing unreachable block (ram,0x0010d310) */
/* WARNING: Removing unreachable block (ram,0x0010d3a8) */
/* WARNING: Removing unreachable block (ram,0x0010d3e0) */
/* WARNING: Removing unreachable block (ram,0x0010d431) */
/* WARNING: Removing unreachable block (ram,0x0010d3eb) */
/* WARNING: Removing unreachable block (ram,0x0010d3b6) */
/* WARNING: Removing unreachable block (ram,0x0010d334) */
/* WARNING: Removing unreachable block (ram,0x0010d348) */
/* WARNING: Removing unreachable block (ram,0x0010d43f) */
/* PhysicsServer2DWrapMT::body_apply_torque_impulse(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_apply_torque_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d489) */
/* WARNING: Removing unreachable block (ram,0x0010d4e0) */
/* WARNING: Removing unreachable block (ram,0x0010d5a0) */
/* WARNING: Removing unreachable block (ram,0x0010d4ef) */
/* WARNING: Removing unreachable block (ram,0x0010d590) */
/* WARNING: Removing unreachable block (ram,0x0010d511) */
/* WARNING: Removing unreachable block (ram,0x0010d524) */
/* WARNING: Removing unreachable block (ram,0x0010d49e) */
/* WARNING: Removing unreachable block (ram,0x0010d529) */
/* WARNING: Removing unreachable block (ram,0x0010d560) */
/* WARNING: Removing unreachable block (ram,0x0010d5b1) */
/* WARNING: Removing unreachable block (ram,0x0010d56b) */
/* WARNING: Removing unreachable block (ram,0x0010d537) */
/* WARNING: Removing unreachable block (ram,0x0010d4c2) */
/* WARNING: Removing unreachable block (ram,0x0010d4d6) */
/* WARNING: Removing unreachable block (ram,0x0010d5bf) */
/* PhysicsServer2DWrapMT::area_set_pickable(RID, bool) */

void __thiscall PhysicsServer2DWrapMT::area_set_pickable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d609) */
/* WARNING: Removing unreachable block (ram,0x0010d660) */
/* WARNING: Removing unreachable block (ram,0x0010d730) */
/* WARNING: Removing unreachable block (ram,0x0010d66f) */
/* WARNING: Removing unreachable block (ram,0x0010d718) */
/* WARNING: Removing unreachable block (ram,0x0010d694) */
/* WARNING: Removing unreachable block (ram,0x0010d6a7) */
/* WARNING: Removing unreachable block (ram,0x0010d61e) */
/* WARNING: Removing unreachable block (ram,0x0010d6ac) */
/* WARNING: Removing unreachable block (ram,0x0010d6e8) */
/* WARNING: Removing unreachable block (ram,0x0010d741) */
/* WARNING: Removing unreachable block (ram,0x0010d6f3) */
/* WARNING: Removing unreachable block (ram,0x0010d6ba) */
/* WARNING: Removing unreachable block (ram,0x0010d642) */
/* WARNING: Removing unreachable block (ram,0x0010d656) */
/* WARNING: Removing unreachable block (ram,0x0010d74f) */
/* PhysicsServer2DWrapMT::body_set_max_contacts_reported(RID, int) */

void __thiscall PhysicsServer2DWrapMT::body_set_max_contacts_reported(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d79b) */
/* WARNING: Removing unreachable block (ram,0x0010d7f8) */
/* WARNING: Removing unreachable block (ram,0x0010d8c0) */
/* WARNING: Removing unreachable block (ram,0x0010d807) */
/* WARNING: Removing unreachable block (ram,0x0010d8b0) */
/* WARNING: Removing unreachable block (ram,0x0010d82e) */
/* WARNING: Removing unreachable block (ram,0x0010d843) */
/* WARNING: Removing unreachable block (ram,0x0010d7b0) */
/* WARNING: Removing unreachable block (ram,0x0010d848) */
/* WARNING: Removing unreachable block (ram,0x0010d880) */
/* WARNING: Removing unreachable block (ram,0x0010d8d1) */
/* WARNING: Removing unreachable block (ram,0x0010d88b) */
/* WARNING: Removing unreachable block (ram,0x0010d856) */
/* WARNING: Removing unreachable block (ram,0x0010d7d4) */
/* WARNING: Removing unreachable block (ram,0x0010d7e8) */
/* WARNING: Removing unreachable block (ram,0x0010d8df) */
/* PhysicsServer2DWrapMT::body_apply_torque(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_apply_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d929) */
/* WARNING: Removing unreachable block (ram,0x0010d980) */
/* WARNING: Removing unreachable block (ram,0x0010da50) */
/* WARNING: Removing unreachable block (ram,0x0010d98f) */
/* WARNING: Removing unreachable block (ram,0x0010da38) */
/* WARNING: Removing unreachable block (ram,0x0010d9b4) */
/* WARNING: Removing unreachable block (ram,0x0010d9c7) */
/* WARNING: Removing unreachable block (ram,0x0010d93e) */
/* WARNING: Removing unreachable block (ram,0x0010d9cc) */
/* WARNING: Removing unreachable block (ram,0x0010da08) */
/* WARNING: Removing unreachable block (ram,0x0010da61) */
/* WARNING: Removing unreachable block (ram,0x0010da13) */
/* WARNING: Removing unreachable block (ram,0x0010d9da) */
/* WARNING: Removing unreachable block (ram,0x0010d962) */
/* WARNING: Removing unreachable block (ram,0x0010d976) */
/* WARNING: Removing unreachable block (ram,0x0010da6f) */
/* PhysicsServer2DWrapMT::body_set_collision_mask(RID, unsigned int) */

void __thiscall PhysicsServer2DWrapMT::body_set_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010dabb) */
/* WARNING: Removing unreachable block (ram,0x0010db18) */
/* WARNING: Removing unreachable block (ram,0x0010dbe0) */
/* WARNING: Removing unreachable block (ram,0x0010db27) */
/* WARNING: Removing unreachable block (ram,0x0010dbd0) */
/* WARNING: Removing unreachable block (ram,0x0010db4e) */
/* WARNING: Removing unreachable block (ram,0x0010db63) */
/* WARNING: Removing unreachable block (ram,0x0010dad0) */
/* WARNING: Removing unreachable block (ram,0x0010db68) */
/* WARNING: Removing unreachable block (ram,0x0010dba0) */
/* WARNING: Removing unreachable block (ram,0x0010dbf1) */
/* WARNING: Removing unreachable block (ram,0x0010dbab) */
/* WARNING: Removing unreachable block (ram,0x0010db76) */
/* WARNING: Removing unreachable block (ram,0x0010daf4) */
/* WARNING: Removing unreachable block (ram,0x0010db08) */
/* WARNING: Removing unreachable block (ram,0x0010dbff) */
/* PhysicsServer2DWrapMT::body_add_constant_torque(RID, float) */

void __thiscall PhysicsServer2DWrapMT::body_add_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010dc4f) */
/* WARNING: Removing unreachable block (ram,0x0010dcb0) */
/* WARNING: Removing unreachable block (ram,0x0010dd78) */
/* WARNING: Removing unreachable block (ram,0x0010dcbf) */
/* WARNING: Removing unreachable block (ram,0x0010dd60) */
/* WARNING: Removing unreachable block (ram,0x0010dce0) */
/* WARNING: Removing unreachable block (ram,0x0010dcef) */
/* WARNING: Removing unreachable block (ram,0x0010dc64) */
/* WARNING: Removing unreachable block (ram,0x0010dcf4) */
/* WARNING: Removing unreachable block (ram,0x0010dd30) */
/* WARNING: Removing unreachable block (ram,0x0010dd89) */
/* WARNING: Removing unreachable block (ram,0x0010dd3b) */
/* WARNING: Removing unreachable block (ram,0x0010dd02) */
/* WARNING: Removing unreachable block (ram,0x0010dc8d) */
/* WARNING: Removing unreachable block (ram,0x0010dca1) */
/* WARNING: Removing unreachable block (ram,0x0010dd97) */
/* PhysicsServer2DWrapMT::body_apply_force(RID, Vector2 const&, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_apply_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010dddf) */
/* WARNING: Removing unreachable block (ram,0x0010de40) */
/* WARNING: Removing unreachable block (ram,0x0010df08) */
/* WARNING: Removing unreachable block (ram,0x0010de4f) */
/* WARNING: Removing unreachable block (ram,0x0010def0) */
/* WARNING: Removing unreachable block (ram,0x0010de70) */
/* WARNING: Removing unreachable block (ram,0x0010de7f) */
/* WARNING: Removing unreachable block (ram,0x0010ddf4) */
/* WARNING: Removing unreachable block (ram,0x0010de84) */
/* WARNING: Removing unreachable block (ram,0x0010dec0) */
/* WARNING: Removing unreachable block (ram,0x0010df19) */
/* WARNING: Removing unreachable block (ram,0x0010decb) */
/* WARNING: Removing unreachable block (ram,0x0010de92) */
/* WARNING: Removing unreachable block (ram,0x0010de1d) */
/* WARNING: Removing unreachable block (ram,0x0010de31) */
/* WARNING: Removing unreachable block (ram,0x0010df27) */
/* PhysicsServer2DWrapMT::body_apply_impulse(RID, Vector2 const&, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_apply_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010df6f) */
/* WARNING: Removing unreachable block (ram,0x0010dfd0) */
/* WARNING: Removing unreachable block (ram,0x0010e098) */
/* WARNING: Removing unreachable block (ram,0x0010dfdf) */
/* WARNING: Removing unreachable block (ram,0x0010e080) */
/* WARNING: Removing unreachable block (ram,0x0010e000) */
/* WARNING: Removing unreachable block (ram,0x0010e00f) */
/* WARNING: Removing unreachable block (ram,0x0010df84) */
/* WARNING: Removing unreachable block (ram,0x0010e014) */
/* WARNING: Removing unreachable block (ram,0x0010e050) */
/* WARNING: Removing unreachable block (ram,0x0010e0a9) */
/* WARNING: Removing unreachable block (ram,0x0010e05b) */
/* WARNING: Removing unreachable block (ram,0x0010e022) */
/* WARNING: Removing unreachable block (ram,0x0010dfad) */
/* WARNING: Removing unreachable block (ram,0x0010dfc1) */
/* WARNING: Removing unreachable block (ram,0x0010e0b7) */
/* PhysicsServer2DWrapMT::body_add_constant_force(RID, Vector2 const&, Vector2 const&) */

void __thiscall PhysicsServer2DWrapMT::body_add_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, PhysicsServer2D::JointType
   (PhysicsServer2D::*)(RID) const, PhysicsServer2D::JointType, RID>(PhysicsServer2D*,
   PhysicsServer2D::JointType (PhysicsServer2D::*)(RID) const, PhysicsServer2D::JointType*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x40)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x38;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)((ulong)uVar8 + lVar3);
      *puVar6 = &PTR_call_00117558;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      puVar6[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010e2c5) */
/* WARNING: Removing unreachable block (ram,0x0010e330) */
/* WARNING: Removing unreachable block (ram,0x0010e380) */
/* WARNING: Removing unreachable block (ram,0x0010e33b) */
/* WARNING: Removing unreachable block (ram,0x0010e352) */
/* WARNING: Removing unreachable block (ram,0x0010e2da) */
/* WARNING: Removing unreachable block (ram,0x0010e301) */
/* WARNING: Removing unreachable block (ram,0x0010e306) */
/* WARNING: Removing unreachable block (ram,0x0010e370) */
/* WARNING: Removing unreachable block (ram,0x0010e30e) */
/* WARNING: Removing unreachable block (ram,0x0010e322) */
/* WARNING: Removing unreachable block (ram,0x0010e38e) */
/* PhysicsServer2DWrapMT::joint_get_type(RID) const */

void __thiscall PhysicsServer2DWrapMT::joint_get_type(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, float (PhysicsServer2D::*)(RID) const, float,
   RID>(PhysicsServer2D*, float (PhysicsServer2D::*)(RID) const, float*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x40)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x38;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)((ulong)uVar8 + lVar3);
      *puVar6 = &PTR_call_00116d60;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      puVar6[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010e5a5) */
/* WARNING: Removing unreachable block (ram,0x0010e610) */
/* WARNING: Removing unreachable block (ram,0x0010e660) */
/* WARNING: Removing unreachable block (ram,0x0010e61b) */
/* WARNING: Removing unreachable block (ram,0x0010e632) */
/* WARNING: Removing unreachable block (ram,0x0010e5ba) */
/* WARNING: Removing unreachable block (ram,0x0010e5e1) */
/* WARNING: Removing unreachable block (ram,0x0010e5e6) */
/* WARNING: Removing unreachable block (ram,0x0010e650) */
/* WARNING: Removing unreachable block (ram,0x0010e5ee) */
/* WARNING: Removing unreachable block (ram,0x0010e604) */
/* WARNING: Removing unreachable block (ram,0x0010e66e) */
/* PhysicsServer2DWrapMT::body_get_contacts_reported_depth_threshold(RID) const */

void PhysicsServer2DWrapMT::body_get_contacts_reported_depth_threshold(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e6b5) */
/* WARNING: Removing unreachable block (ram,0x0010e720) */
/* WARNING: Removing unreachable block (ram,0x0010e770) */
/* WARNING: Removing unreachable block (ram,0x0010e72b) */
/* WARNING: Removing unreachable block (ram,0x0010e742) */
/* WARNING: Removing unreachable block (ram,0x0010e6ca) */
/* WARNING: Removing unreachable block (ram,0x0010e6f1) */
/* WARNING: Removing unreachable block (ram,0x0010e6f6) */
/* WARNING: Removing unreachable block (ram,0x0010e760) */
/* WARNING: Removing unreachable block (ram,0x0010e6fe) */
/* WARNING: Removing unreachable block (ram,0x0010e714) */
/* WARNING: Removing unreachable block (ram,0x0010e77e) */
/* PhysicsServer2DWrapMT::body_get_constant_torque(RID) const */

void PhysicsServer2DWrapMT::body_get_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e7c5) */
/* WARNING: Removing unreachable block (ram,0x0010e830) */
/* WARNING: Removing unreachable block (ram,0x0010e880) */
/* WARNING: Removing unreachable block (ram,0x0010e83b) */
/* WARNING: Removing unreachable block (ram,0x0010e852) */
/* WARNING: Removing unreachable block (ram,0x0010e7da) */
/* WARNING: Removing unreachable block (ram,0x0010e801) */
/* WARNING: Removing unreachable block (ram,0x0010e806) */
/* WARNING: Removing unreachable block (ram,0x0010e870) */
/* WARNING: Removing unreachable block (ram,0x0010e80e) */
/* WARNING: Removing unreachable block (ram,0x0010e824) */
/* WARNING: Removing unreachable block (ram,0x0010e88e) */
/* PhysicsServer2DWrapMT::body_get_collision_priority(RID) const */

void PhysicsServer2DWrapMT::body_get_collision_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e8d5) */
/* WARNING: Removing unreachable block (ram,0x0010e940) */
/* WARNING: Removing unreachable block (ram,0x0010e990) */
/* WARNING: Removing unreachable block (ram,0x0010e94b) */
/* WARNING: Removing unreachable block (ram,0x0010e962) */
/* WARNING: Removing unreachable block (ram,0x0010e8ea) */
/* WARNING: Removing unreachable block (ram,0x0010e911) */
/* WARNING: Removing unreachable block (ram,0x0010e916) */
/* WARNING: Removing unreachable block (ram,0x0010e980) */
/* WARNING: Removing unreachable block (ram,0x0010e91e) */
/* WARNING: Removing unreachable block (ram,0x0010e934) */
/* WARNING: Removing unreachable block (ram,0x0010e99e) */
/* PhysicsServer2DWrapMT::shape_get_custom_solver_bias(RID) const */

void PhysicsServer2DWrapMT::shape_get_custom_solver_bias(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID) const,
   Transform2D, RID>(PhysicsServer2D*, Transform2D (PhysicsServer2D::*)(RID) const, Transform2D*,
   RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x40)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x38;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)((ulong)uVar8 + lVar3);
      *puVar6 = &PTR_call_001170a8;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      puVar6[6] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010ebba) */
/* WARNING: Removing unreachable block (ram,0x0010ec60) */
/* WARNING: Removing unreachable block (ram,0x0010ec97) */
/* WARNING: Removing unreachable block (ram,0x0010ec6b) */
/* WARNING: Removing unreachable block (ram,0x0010ebd3) */
/* WARNING: Removing unreachable block (ram,0x0010ec18) */
/* WARNING: Removing unreachable block (ram,0x0010ec1d) */
/* WARNING: Removing unreachable block (ram,0x0010ec88) */
/* WARNING: Removing unreachable block (ram,0x0010ec25) */
/* WARNING: Removing unreachable block (ram,0x0010ec37) */
/* WARNING: Removing unreachable block (ram,0x0010ec47) */
/* WARNING: Removing unreachable block (ram,0x0010eca5) */
/* PhysicsServer2DWrapMT::area_get_transform(RID) const */

void PhysicsServer2DWrapMT::area_get_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::set_active(bool) */

void __thiscall PhysicsServer2DWrapMT::set_active(PhysicsServer2DWrapMT *this,bool param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000010ecea)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ee2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x560))(*(long **)(this + 0x178),param_1);
      return;
    }
LAB_0010ee98:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117580;
      puVar7[2] = uVar3;
      puVar7[3] = 0x561;
      puVar7[4] = 0;
      *(bool *)(puVar7 + 5) = param_1;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ee98;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::shape_set_data(RID, Variant const&) */

void __thiscall
PhysicsServer2DWrapMT::shape_set_data
          (PhysicsServer2DWrapMT *this,undefined8 param_2,Variant *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000010ef0f)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f05e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x198))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_0010f0c8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar7 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x50);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar7 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x48;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(uVar7 + lVar4);
      *puVar8 = &PTR_call_00116cc0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x199;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_3);
      puVar8[8] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f0c8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::space_set_param(RID, PhysicsServer2D::SpaceParameter, float) */

void __thiscall
PhysicsServer2DWrapMT::space_set_param
          (undefined4 param_1,PhysicsServer2DWrapMT *this,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000010f116)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f275. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x1e0))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_0010f2f0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00116dd8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x1e1;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010f2f0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float, RID,
   PhysicsServer2D::SpaceParameter>(PhysicsServer2D*, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float*, RID, PhysicsServer2D::SpaceParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00116e00;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010f519) */
/* WARNING: Removing unreachable block (ram,0x0010f590) */
/* WARNING: Removing unreachable block (ram,0x0010f5e0) */
/* WARNING: Removing unreachable block (ram,0x0010f59b) */
/* WARNING: Removing unreachable block (ram,0x0010f5b2) */
/* WARNING: Removing unreachable block (ram,0x0010f52e) */
/* WARNING: Removing unreachable block (ram,0x0010f55c) */
/* WARNING: Removing unreachable block (ram,0x0010f561) */
/* WARNING: Removing unreachable block (ram,0x0010f5d0) */
/* WARNING: Removing unreachable block (ram,0x0010f569) */
/* WARNING: Removing unreachable block (ram,0x0010f57f) */
/* WARNING: Removing unreachable block (ram,0x0010f5ee) */
/* PhysicsServer2DWrapMT::space_get_param(RID, PhysicsServer2D::SpaceParameter) const */

void PhysicsServer2DWrapMT::space_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID, int)
   const, Transform2D, RID, int>(PhysicsServer2D*, Transform2D (PhysicsServer2D::*)(RID, int) const,
   Transform2D*, RID, int) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00116f90;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010f81f) */
/* WARNING: Removing unreachable block (ram,0x0010f8d0) */
/* WARNING: Removing unreachable block (ram,0x0010f90f) */
/* WARNING: Removing unreachable block (ram,0x0010f8db) */
/* WARNING: Removing unreachable block (ram,0x0010f838) */
/* WARNING: Removing unreachable block (ram,0x0010f888) */
/* WARNING: Removing unreachable block (ram,0x0010f88d) */
/* WARNING: Removing unreachable block (ram,0x0010f900) */
/* WARNING: Removing unreachable block (ram,0x0010f895) */
/* WARNING: Removing unreachable block (ram,0x0010f8a7) */
/* WARNING: Removing unreachable block (ram,0x0010f8b7) */
/* WARNING: Removing unreachable block (ram,0x0010f91d) */
/* PhysicsServer2DWrapMT::body_get_shape_transform(RID, int) const */

void PhysicsServer2DWrapMT::body_get_shape_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f96f) */
/* WARNING: Removing unreachable block (ram,0x0010fa20) */
/* WARNING: Removing unreachable block (ram,0x0010fa5f) */
/* WARNING: Removing unreachable block (ram,0x0010fa2b) */
/* WARNING: Removing unreachable block (ram,0x0010f988) */
/* WARNING: Removing unreachable block (ram,0x0010f9d8) */
/* WARNING: Removing unreachable block (ram,0x0010f9dd) */
/* WARNING: Removing unreachable block (ram,0x0010fa50) */
/* WARNING: Removing unreachable block (ram,0x0010f9e5) */
/* WARNING: Removing unreachable block (ram,0x0010f9f7) */
/* WARNING: Removing unreachable block (ram,0x0010fa07) */
/* WARNING: Removing unreachable block (ram,0x0010fa6d) */
/* PhysicsServer2DWrapMT::area_get_shape_transform(RID, int) const */

void PhysicsServer2DWrapMT::area_get_shape_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, RID (PhysicsServer2D::*)(RID, int) const, RID,
   RID, int>(PhysicsServer2D*, RID (PhysicsServer2D::*)(RID, int) const, RID*, RID, int) */

void CommandQueueMT::push_and_ret<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00116f68;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x0010fc99) */
/* WARNING: Removing unreachable block (ram,0x0010fd18) */
/* WARNING: Removing unreachable block (ram,0x0010fd70) */
/* WARNING: Removing unreachable block (ram,0x0010fd23) */
/* WARNING: Removing unreachable block (ram,0x0010fd3a) */
/* WARNING: Removing unreachable block (ram,0x0010fcae) */
/* WARNING: Removing unreachable block (ram,0x0010fce5) */
/* WARNING: Removing unreachable block (ram,0x0010fcea) */
/* WARNING: Removing unreachable block (ram,0x0010fd60) */
/* WARNING: Removing unreachable block (ram,0x0010fcf2) */
/* WARNING: Removing unreachable block (ram,0x0010fd06) */
/* WARNING: Removing unreachable block (ram,0x0010fd7e) */
/* PhysicsServer2DWrapMT::body_get_shape(RID, int) const */

void __thiscall PhysicsServer2DWrapMT::body_get_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010fdc9) */
/* WARNING: Removing unreachable block (ram,0x0010fe48) */
/* WARNING: Removing unreachable block (ram,0x0010fea0) */
/* WARNING: Removing unreachable block (ram,0x0010fe53) */
/* WARNING: Removing unreachable block (ram,0x0010fe6a) */
/* WARNING: Removing unreachable block (ram,0x0010fdde) */
/* WARNING: Removing unreachable block (ram,0x0010fe15) */
/* WARNING: Removing unreachable block (ram,0x0010fe1a) */
/* WARNING: Removing unreachable block (ram,0x0010fe90) */
/* WARNING: Removing unreachable block (ram,0x0010fe22) */
/* WARNING: Removing unreachable block (ram,0x0010fe36) */
/* WARNING: Removing unreachable block (ram,0x0010feae) */
/* PhysicsServer2DWrapMT::area_get_shape(RID, int) const */

void __thiscall PhysicsServer2DWrapMT::area_get_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::body_set_shape(RID, int, RID) */

void __thiscall
PhysicsServer2DWrapMT::body_set_shape
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000010ff04)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 800))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001100d8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x48);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00116ec8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x321;
      puVar7[4] = 0;
      puVar7[5] = param_4;
      *(undefined4 *)(puVar7 + 6) = param_3;
      puVar7[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001100d8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::body_set_shape_disabled(RID, int, bool) */

void __thiscall
PhysicsServer2DWrapMT::body_set_shape_disabled
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000110123)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011027c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x348))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001102f0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00116f18;
      puVar7[2] = uVar3;
      puVar7[3] = 0x349;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_4;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001102f0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::area_set_param(RID, PhysicsServer2D::AreaParameter, Variant const&) */

void __thiscall
PhysicsServer2DWrapMT::area_set_param
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000110344)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001104b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x290))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00110528:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar7 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar7 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar7);
      *puVar8 = &PTR_call_00117030;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x291;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110528;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::area_set_shape_transform(RID, int, Transform2D const&) */

void __thiscall
PhysicsServer2DWrapMT::area_set_shape_transform
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000110574)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001106db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x238))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00110750:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar9 = pthread_mutex_lock(local_58);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar11 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar11 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar10 = (undefined8 *)(lVar4 + uVar11);
      puVar10[3] = 0x239;
      puVar10[4] = 0;
      uVar5 = param_4[2];
      uVar7 = *param_4;
      uVar8 = param_4[1];
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR_call_00116ef0;
      puVar10[2] = uVar3;
      puVar10[7] = uVar5;
      *(undefined4 *)(puVar10 + 8) = param_3;
      puVar10[9] = param_2;
      puVar10[5] = uVar7;
      puVar10[6] = uVar8;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110750;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* PhysicsServer2DWrapMT::area_set_transform(RID, Transform2D const&) */

void __thiscall
PhysicsServer2DWrapMT::area_set_transform
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000011079f)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001108fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x298))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00110970:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar9 = pthread_mutex_lock(local_48);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar11 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x50);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar11 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x48;
    if (uVar1 + 8 < uVar2) {
      puVar10 = (undefined8 *)(lVar4 + uVar11);
      puVar10[3] = 0x299;
      puVar10[4] = 0;
      uVar5 = param_3[2];
      uVar7 = *param_3;
      uVar8 = param_3[1];
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR_call_00117058;
      puVar10[2] = uVar3;
      puVar10[7] = uVar5;
      puVar10[8] = param_2;
      puVar10[5] = uVar7;
      puVar10[6] = uVar8;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110970;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant, RID,
   PhysicsServer2D::AreaParameter>(PhysicsServer2D*, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant*, RID, PhysicsServer2D::AreaParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00117080;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x00110b9f) */
/* WARNING: Removing unreachable block (ram,0x00110c40) */
/* WARNING: Removing unreachable block (ram,0x00110c80) */
/* WARNING: Removing unreachable block (ram,0x00110c4b) */
/* WARNING: Removing unreachable block (ram,0x00110bb8) */
/* WARNING: Removing unreachable block (ram,0x00110bf9) */
/* WARNING: Removing unreachable block (ram,0x00110bfe) */
/* WARNING: Removing unreachable block (ram,0x00110c70) */
/* WARNING: Removing unreachable block (ram,0x00110c06) */
/* WARNING: Removing unreachable block (ram,0x00110c16) */
/* WARNING: Removing unreachable block (ram,0x00110c26) */
/* WARNING: Removing unreachable block (ram,0x00110c8e) */
/* PhysicsServer2DWrapMT::area_get_param(RID, PhysicsServer2D::AreaParameter) const */

void PhysicsServer2DWrapMT::area_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::body_set_mode(RID, PhysicsServer2D::BodyMode) */

void __thiscall
PhysicsServer2DWrapMT::body_set_mode
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000110cdf)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110e2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x308))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00110e98:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117148;
      puVar7[2] = uVar3;
      puVar7[3] = 0x309;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00110e98;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::body_set_continuous_collision_detection_mode(RID,
   PhysicsServer2D::CCDMode) */

void __thiscall
PhysicsServer2DWrapMT::body_set_continuous_collision_detection_mode
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000110edf)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011102e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x388))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00111098:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_001171c0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x389;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00111098;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::body_set_param(RID, PhysicsServer2D::BodyParameter, Variant const&) */

void __thiscall
PhysicsServer2DWrapMT::body_set_param
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001110e4)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x3c8))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001112c8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar7 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar7 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar7);
      *puVar8 = &PTR_call_00117210;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x3c9;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001112c8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant, RID,
   PhysicsServer2D::BodyParameter>(PhysicsServer2D*, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant*, RID, PhysicsServer2D::BodyParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00117238;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x001114ef) */
/* WARNING: Removing unreachable block (ram,0x00111590) */
/* WARNING: Removing unreachable block (ram,0x001115d0) */
/* WARNING: Removing unreachable block (ram,0x0011159b) */
/* WARNING: Removing unreachable block (ram,0x00111508) */
/* WARNING: Removing unreachable block (ram,0x00111549) */
/* WARNING: Removing unreachable block (ram,0x0011154e) */
/* WARNING: Removing unreachable block (ram,0x001115c0) */
/* WARNING: Removing unreachable block (ram,0x00111556) */
/* WARNING: Removing unreachable block (ram,0x00111566) */
/* WARNING: Removing unreachable block (ram,0x00111576) */
/* WARNING: Removing unreachable block (ram,0x001115de) */
/* PhysicsServer2DWrapMT::body_get_param(RID, PhysicsServer2D::BodyParameter) const */

void PhysicsServer2DWrapMT::body_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::body_set_state(RID, PhysicsServer2D::BodyState, Variant const&) */

void __thiscall
PhysicsServer2DWrapMT::body_set_state
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000111634)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001117a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x3e0))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00111818:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar7 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar7 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar7);
      *puVar8 = &PTR_call_00117260;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x3e1;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00111818;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState) const, Variant, RID, PhysicsServer2D::BodyState>(PhysicsServer2D*,
   Variant (PhysicsServer2D::*)(RID, PhysicsServer2D::BodyState) const, Variant*, RID,
   PhysicsServer2D::BodyState) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00117288;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x00111a3f) */
/* WARNING: Removing unreachable block (ram,0x00111ae0) */
/* WARNING: Removing unreachable block (ram,0x00111b20) */
/* WARNING: Removing unreachable block (ram,0x00111aeb) */
/* WARNING: Removing unreachable block (ram,0x00111a58) */
/* WARNING: Removing unreachable block (ram,0x00111a99) */
/* WARNING: Removing unreachable block (ram,0x00111a9e) */
/* WARNING: Removing unreachable block (ram,0x00111b10) */
/* WARNING: Removing unreachable block (ram,0x00111aa6) */
/* WARNING: Removing unreachable block (ram,0x00111ab6) */
/* WARNING: Removing unreachable block (ram,0x00111ac6) */
/* WARNING: Removing unreachable block (ram,0x00111b2e) */
/* PhysicsServer2DWrapMT::body_get_state(RID, PhysicsServer2D::BodyState) const */

void PhysicsServer2DWrapMT::body_get_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::body_set_force_integration_callback(RID, Callable const&, Variant const&)
    */

void __thiscall
PhysicsServer2DWrapMT::body_set_force_integration_callback
          (PhysicsServer2DWrapMT *this,undefined8 param_2,Callable *param_3,Variant *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000111b84)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111d03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x4b0))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00111d78:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x60);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar7 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar7 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x58;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar7);
      *puVar8 = &PTR_call_00117350;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x4b1;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      Callable::Callable((Callable *)(puVar8 + 8),param_3);
      puVar8[10] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00111d78;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar7,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::joint_set_param(RID, PhysicsServer2D::JointParam, float) */

void __thiscall
PhysicsServer2DWrapMT::joint_set_param
          (undefined4 param_1,PhysicsServer2DWrapMT *this,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000111dc6)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111f25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x4e8))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00111fa0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117378;
      puVar7[2] = uVar3;
      puVar7[3] = 0x4e9;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00111fa0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam) const, float, RID, PhysicsServer2D::JointParam>(PhysicsServer2D*,
   float (PhysicsServer2D::*)(RID, PhysicsServer2D::JointParam) const, float*, RID,
   PhysicsServer2D::JointParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_001173a0;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x001121c9) */
/* WARNING: Removing unreachable block (ram,0x00112240) */
/* WARNING: Removing unreachable block (ram,0x00112290) */
/* WARNING: Removing unreachable block (ram,0x0011224b) */
/* WARNING: Removing unreachable block (ram,0x00112262) */
/* WARNING: Removing unreachable block (ram,0x001121de) */
/* WARNING: Removing unreachable block (ram,0x0011220c) */
/* WARNING: Removing unreachable block (ram,0x00112211) */
/* WARNING: Removing unreachable block (ram,0x00112280) */
/* WARNING: Removing unreachable block (ram,0x00112219) */
/* WARNING: Removing unreachable block (ram,0x0011222f) */
/* WARNING: Removing unreachable block (ram,0x0011229e) */
/* PhysicsServer2DWrapMT::joint_get_param(RID, PhysicsServer2D::JointParam) const */

void PhysicsServer2DWrapMT::joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::joint_disable_collisions_between_bodies(RID, bool) */

void __thiscall
PhysicsServer2DWrapMT::joint_disable_collisions_between_bodies
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001122ef)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011243f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x4f8))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_001124b8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_48);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_001173c8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x4f9;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001124b8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::joint_make_pin(RID, Vector2 const&, RID, RID) */

void __thiscall
PhysicsServer2DWrapMT::joint_make_pin
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000112507)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x508))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_001126e8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar7 = pthread_mutex_lock(local_58);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x50);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar9 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar9 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x48;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar9);
      *puVar8 = &PTR_call_001173f0;
      puVar8[3] = 0x509;
      puVar8[4] = 0;
      uVar5 = *param_3;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[5] = param_5;
      puVar8[6] = param_4;
      puVar8[7] = uVar5;
      puVar8[8] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001126e8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* PhysicsServer2DWrapMT::joint_make_damped_spring(RID, Vector2 const&, Vector2 const&, RID, RID) */

void __thiscall
PhysicsServer2DWrapMT::joint_make_damped_spring
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000011273a)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001128ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x518))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5,param_6);
      return;
    }
LAB_00112928:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar7 = pthread_mutex_lock(local_58);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar9 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar9 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar8 = (undefined8 *)(lVar4 + uVar9);
      puVar8[3] = 0x519;
      puVar8[4] = 0;
      *puVar8 = &PTR_call_00117440;
      uVar5 = *param_4;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[7] = uVar5;
      uVar5 = *param_3;
      puVar8[2] = uVar3;
      puVar8[5] = param_6;
      puVar8[6] = param_5;
      puVar8[8] = uVar5;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112928;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar9,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* PhysicsServer2DWrapMT::joint_make_groove(RID, Vector2 const&, Vector2 const&, Vector2 const&,
   RID, RID) */

void __thiscall
PhysicsServer2DWrapMT::joint_make_groove
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000112984)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x510))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5,param_6);
      return;
    }
LAB_00112b88:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x60);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x58;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      puVar7[3] = 0x511;
      puVar7[4] = 0;
      puVar7[2] = uVar3;
      uVar3 = *param_5;
      *puVar7 = &PTR_call_00117418;
      puVar7[7] = uVar3;
      uVar3 = *param_4;
      *(undefined1 *)(puVar7 + 1) = 0;
      puVar7[8] = uVar3;
      uVar3 = *param_3;
      puVar7[5] = param_7;
      puVar7[6] = param_6;
      puVar7[9] = uVar3;
      puVar7[10] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112b88;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::pin_joint_set_param(RID, PhysicsServer2D::PinJointParam, float) */

void __thiscall
PhysicsServer2DWrapMT::pin_joint_set_param
          (undefined4 param_1,PhysicsServer2DWrapMT *this,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000112bd6)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x520))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00112db0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117468;
      puVar7[2] = uVar3;
      puVar7[3] = 0x521;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00112db0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float, RID,
   PhysicsServer2D::PinJointParam>(PhysicsServer2D*, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float*, RID, PhysicsServer2D::PinJointParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00117490;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x00112fd9) */
/* WARNING: Removing unreachable block (ram,0x00113050) */
/* WARNING: Removing unreachable block (ram,0x001130a0) */
/* WARNING: Removing unreachable block (ram,0x0011305b) */
/* WARNING: Removing unreachable block (ram,0x00113072) */
/* WARNING: Removing unreachable block (ram,0x00112fee) */
/* WARNING: Removing unreachable block (ram,0x0011301c) */
/* WARNING: Removing unreachable block (ram,0x00113021) */
/* WARNING: Removing unreachable block (ram,0x00113090) */
/* WARNING: Removing unreachable block (ram,0x00113029) */
/* WARNING: Removing unreachable block (ram,0x0011303f) */
/* WARNING: Removing unreachable block (ram,0x001130ae) */
/* PhysicsServer2DWrapMT::pin_joint_get_param(RID, PhysicsServer2D::PinJointParam) const */

void PhysicsServer2DWrapMT::pin_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::pin_joint_set_flag(RID, PhysicsServer2D::PinJointFlag, bool) */

void __thiscall
PhysicsServer2DWrapMT::pin_joint_set_flag
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000113103)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x530))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001132d0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_001174b8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x531;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_4;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001132d0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, bool (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag) const, bool, RID, PhysicsServer2D::PinJointFlag>(PhysicsServer2D*,
   bool (PhysicsServer2D::*)(RID, PhysicsServer2D::PinJointFlag) const, bool*, RID,
   PhysicsServer2D::PinJointFlag) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_001174e0;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x001134f9) */
/* WARNING: Removing unreachable block (ram,0x00113570) */
/* WARNING: Removing unreachable block (ram,0x001135c0) */
/* WARNING: Removing unreachable block (ram,0x0011357b) */
/* WARNING: Removing unreachable block (ram,0x00113592) */
/* WARNING: Removing unreachable block (ram,0x0011350e) */
/* WARNING: Removing unreachable block (ram,0x0011353c) */
/* WARNING: Removing unreachable block (ram,0x00113541) */
/* WARNING: Removing unreachable block (ram,0x001135b0) */
/* WARNING: Removing unreachable block (ram,0x00113549) */
/* WARNING: Removing unreachable block (ram,0x0011355e) */
/* WARNING: Removing unreachable block (ram,0x001135ce) */
/* PhysicsServer2DWrapMT::pin_joint_get_flag(RID, PhysicsServer2D::PinJointFlag) const */

void __thiscall PhysicsServer2DWrapMT::pin_joint_get_flag(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::damped_spring_joint_set_param(RID, PhysicsServer2D::DampedSpringParam,
   float) */

void __thiscall
PhysicsServer2DWrapMT::damped_spring_joint_set_param
          (undefined4 param_1,PhysicsServer2DWrapMT *this,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000113626)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x540))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00113800:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117508;
      puVar7[2] = uVar3;
      puVar7[3] = 0x541;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113800;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float, RID,
   PhysicsServer2D::DampedSpringParam>(PhysicsServer2D*, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float*, RID, PhysicsServer2D::DampedSpringParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  uint uVar8;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = pthread_mutex_lock(param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar8 = param_1[1].__data.__lock;
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)&param_1[1].__data,uVar8 + 0x48)
  ;
  uVar1 = param_1[1].__data.__lock;
  if (uVar8 < uVar1) {
    lVar3 = *(long *)((long)param_1 + 0x30);
    uVar7 = (ulong)uVar8;
    uVar8 = uVar8 + 8;
    *(undefined8 *)(lVar3 + uVar7) = 0x40;
    if (uVar8 < uVar1) {
      puVar6 = (undefined8 *)(lVar3 + (ulong)uVar8);
      *puVar6 = &PTR_call_00117530;
      *(undefined1 *)(puVar6 + 1) = 1;
      puVar6[2] = param_2;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      puVar6[5] = param_5;
      *(undefined4 *)(puVar6 + 6) = param_7;
      puVar6[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar8 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC24;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC24._4_4_,uVar8)
      ;
      do {
        std::condition_variable::wait((unique_lock *)((long)param_1 + 0x38));
      } while (*(uint *)((long)param_1 + 0x68) < uVar8);
      iVar5 = *(int *)((long)param_1 + 0x70) + -1;
      *(int *)((long)param_1 + 0x70) = iVar5;
      if ((*(uint *)((long)param_1 + 0x6c) == *(uint *)((long)param_1 + 0x68)) && (iVar5 == 0)) {
        *(undefined8 *)((long)param_1 + 0x68) = 0;
      }
      if (param_1 != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(param_1);
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,(ulong)uVar8,(ulong)uVar1,"p_index"
             ,"count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* WARNING: Removing unreachable block (ram,0x00113a29) */
/* WARNING: Removing unreachable block (ram,0x00113aa0) */
/* WARNING: Removing unreachable block (ram,0x00113af0) */
/* WARNING: Removing unreachable block (ram,0x00113aab) */
/* WARNING: Removing unreachable block (ram,0x00113ac2) */
/* WARNING: Removing unreachable block (ram,0x00113a3e) */
/* WARNING: Removing unreachable block (ram,0x00113a6c) */
/* WARNING: Removing unreachable block (ram,0x00113a71) */
/* WARNING: Removing unreachable block (ram,0x00113ae0) */
/* WARNING: Removing unreachable block (ram,0x00113a79) */
/* WARNING: Removing unreachable block (ram,0x00113a8f) */
/* WARNING: Removing unreachable block (ram,0x00113afe) */
/* PhysicsServer2DWrapMT::damped_spring_joint_get_param(RID, PhysicsServer2D::DampedSpringParam)
   const */

void PhysicsServer2DWrapMT::damped_spring_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer2DWrapMT::area_add_shape(RID, RID, Transform2D const&, bool) */

void __thiscall
PhysicsServer2DWrapMT::area_add_shape
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000113b57)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x228))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_00113d48:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar9 = pthread_mutex_lock(local_58);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x60);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar11 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar11 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x58;
    if (uVar1 + 8 < uVar2) {
      puVar10 = (undefined8 *)(lVar4 + uVar11);
      puVar10[3] = 0x229;
      puVar10[4] = 0;
      uVar7 = *param_4;
      uVar8 = param_4[1];
      *puVar10 = &PTR_call_00116ea0;
      uVar5 = param_4[2];
      *(undefined1 *)(puVar10 + 1) = 0;
      puVar10[2] = uVar3;
      *(undefined1 *)(puVar10 + 5) = param_5;
      *(undefined8 *)((long)puVar10 + 0x3c) = uVar5;
      puVar10[9] = param_3;
      puVar10[10] = param_2;
      *(undefined8 *)((long)puVar10 + 0x2c) = uVar7;
      *(undefined8 *)((long)puVar10 + 0x34) = uVar8;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113d48;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* PhysicsServer2DWrapMT::body_set_shape_as_one_way_collision(RID, int, bool, float) */

void __thiscall
PhysicsServer2DWrapMT::body_set_shape_as_one_way_collision
          (undefined4 param_1,PhysicsServer2DWrapMT *this,undefined8 param_3,undefined4 param_4,
          undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000113d99)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00113f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x350))
                (param_1,*(long **)(this + 0x178),param_3,param_4,param_5);
      return;
    }
LAB_00113f80:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x48);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00117198;
      puVar7[2] = uVar3;
      puVar7[3] = 0x351;
      puVar7[4] = 0;
      *(undefined1 *)((long)puVar7 + 0x2c) = param_5;
      *(undefined4 *)(puVar7 + 6) = param_4;
      puVar7[7] = param_3;
      *(undefined4 *)(puVar7 + 5) = param_1;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00113f80;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::area_set_shape_disabled(RID, int, bool) */

void __thiscall
PhysicsServer2DWrapMT::area_set_shape_disabled
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000113fd3)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011412c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x268))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001141a0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x40);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x38;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00116f18;
      puVar7[2] = uVar3;
      puVar7[3] = 0x269;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_4;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001141a0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::area_set_shape(RID, int, RID) */

void __thiscall
PhysicsServer2DWrapMT::area_set_shape
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001141f4)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x230))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001143c8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar6 = pthread_mutex_lock(local_58);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x48);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_00116ec8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x231;
      puVar7[4] = 0;
      puVar7[5] = param_4;
      *(undefined4 *)(puVar7 + 6) = param_3;
      puVar7[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001143c8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer2DWrapMT::body_set_shape_transform(RID, int, Transform2D const&) */

void __thiscall
PhysicsServer2DWrapMT::body_set_shape_transform
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000114414)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011457b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x328))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_001145f0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar9 = pthread_mutex_lock(local_58);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar11 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x58);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar11 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x50;
    if (uVar1 + 8 < uVar2) {
      puVar10 = (undefined8 *)(lVar4 + uVar11);
      puVar10[3] = 0x329;
      puVar10[4] = 0;
      uVar5 = param_4[2];
      uVar7 = *param_4;
      uVar8 = param_4[1];
      *(undefined1 *)(puVar10 + 1) = 0;
      *puVar10 = &PTR_call_00116ef0;
      puVar10[2] = uVar3;
      puVar10[7] = uVar5;
      *(undefined4 *)(puVar10 + 8) = param_3;
      puVar10[9] = param_2;
      puVar10[5] = uVar7;
      puVar10[6] = uVar8;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001145f0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* PhysicsServer2DWrapMT::body_add_shape(RID, RID, Transform2D const&, bool) */

void __thiscall
PhysicsServer2DWrapMT::body_add_shape
          (PhysicsServer2DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000114647)) {
    if (this[0x208] != (PhysicsServer2DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001147c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x318))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_00114838:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar9 = pthread_mutex_lock(local_58);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x60);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar11 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar11 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x58;
    if (uVar1 + 8 < uVar2) {
      puVar10 = (undefined8 *)(lVar4 + uVar11);
      puVar10[3] = 0x319;
      puVar10[4] = 0;
      uVar7 = *param_4;
      uVar8 = param_4[1];
      *puVar10 = &PTR_call_00116ea0;
      uVar5 = param_4[2];
      *(undefined1 *)(puVar10 + 1) = 0;
      puVar10[2] = uVar3;
      *(undefined1 *)(puVar10 + 5) = param_5;
      *(undefined8 *)((long)puVar10 + 0x3c) = uVar5;
      puVar10[9] = param_3;
      puVar10[10] = param_2;
      *(undefined8 *)((long)puVar10 + 0x2c) = uVar7;
      *(undefined8 *)((long)puVar10 + 0x34) = uVar8;
      LOCK();
      this[0x208] = (PhysicsServer2DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_50 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00114838;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar11,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter, Variant const&), false, RID&, PhysicsServer2D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter,Variant_const&),false,RID&,PhysicsServer2D::AreaParameter&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState, Variant const&), false, RID&, PhysicsServer2D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState,Variant_const&),false,RID&,PhysicsServer2D::BodyState&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter, Variant const&), false, RID&, PhysicsServer2D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter,Variant_const&),false,RID&,PhysicsServer2D::BodyParameter&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<PhysicsServer2DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer2DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer2DWrapMT,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<CommandQueueMT, void (CommandQueueMT::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<CommandQueueMT,void(CommandQueueMT::*)(),true>::~Command
          (Command<CommandQueueMT,void(CommandQueueMT::*)(),true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,float),false,RID&,float&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::ShapeType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::ShapeType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::ShapeType,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID)const,Variant,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID)const,float,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID)const,bool,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter, float), false, RID&, PhysicsServer2D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter,float),false,RID&,PhysicsServer2D::SpaceParameter&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::SpaceParameter) const, float, RID,
   PhysicsServer2D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::SpaceParameter)const,float,RID,PhysicsServer2D::SpaceParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int),false,RID&,int&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID),false,RID&,RID&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID)const,RID,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, RID, Transform2D const&,
   bool), false, RID&, RID&, Transform2D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,RID,Transform2D_const&,bool),false,RID&,RID&,Transform2D_const&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, Transform2D const&),
   false, RID&, int&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,Transform2D_const&),false,RID&,int&,Transform2D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, int (PhysicsServer2D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,int(PhysicsServer2D::*)(RID)const,int,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, RID (PhysicsServer2D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,RID(PhysicsServer2D::*)(RID,int)const,RID,RID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID, int) const,
   Transform2D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>::
~CommandRet(CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID,int)const,Transform2D,RID,int>
            *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID),false,RID&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, ObjectID (PhysicsServer2D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer2D,ObjectID(PhysicsServer2D::*)(RID)const,ObjectID,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Transform2D const&),
   false, RID&, Transform2D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Transform2D_const&),false,RID&,Transform2D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::AreaParameter) const, Variant, RID,
   PhysicsServer2D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::AreaParameter)const,Variant,RID,PhysicsServer2D::AreaParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Transform2D (PhysicsServer2D::*)(RID) const,
   Transform2D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,Transform2D(PhysicsServer2D::*)(RID)const,Transform2D,RID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, unsigned int (PhysicsServer2D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer2D,unsigned_int(PhysicsServer2D::*)(RID)const,unsigned_int,RID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyMode), false, RID&, PhysicsServer2D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyMode),false,RID&,PhysicsServer2D::BodyMode&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::BodyMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::BodyMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::BodyMode,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, int, bool, float), false,
   RID&, int&, bool&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,int,bool,float),false,RID&,int&,bool&,float&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::CCDMode), false, RID&, PhysicsServer2D::CCDMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::CCDMode),false,RID&,PhysicsServer2D::CCDMode&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::CCDMode (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::CCDMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::CCDMode(PhysicsServer2D::*)(RID)const,PhysicsServer2D::CCDMode,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyParameter) const, Variant, RID,
   PhysicsServer2D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyParameter)const,Variant,RID,PhysicsServer2D::BodyParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Variant (PhysicsServer2D::*)(RID,
   PhysicsServer2D::BodyState) const, Variant, RID, PhysicsServer2D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
::~CommandRet(CommandRet<PhysicsServer2D,Variant(PhysicsServer2D::*)(RID,PhysicsServer2D::BodyState)const,Variant,RID,PhysicsServer2D::BodyState>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&), false,
   RID&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&),false,RID&,Vector2_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&), false, RID&, Vector2 const&, Vector2 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&),false,RID&,Vector2_const&,Vector2_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, Vector2 (PhysicsServer2D::*)(RID) const, Vector2,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID>::
~CommandRet(CommandRet<PhysicsServer2D,Vector2(PhysicsServer2D::*)(RID)const,Vector2,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam, float), false, RID&, PhysicsServer2D::JointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam,float),false,RID&,PhysicsServer2D::JointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::JointParam) const, float, RID, PhysicsServer2D::JointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::JointParam)const,float,RID,PhysicsServer2D::JointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, bool), false, RID&, bool
   const&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&>::
~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,bool),false,RID&,bool_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, RID,
   RID), false, RID&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,RID,RID),false,RID&,Vector2_const&,RID&,RID&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, Vector2 const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, Vector2 const&,
   RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID, Vector2 const&, Vector2
   const&, RID, RID), false, RID&, Vector2 const&, Vector2 const&, RID&, RID&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,Vector2_const&,Vector2_const&,RID,RID),false,RID&,Vector2_const&,Vector2_const&,RID&,RID&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam, float), false, RID&, PhysicsServer2D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam,float),false,RID&,PhysicsServer2D::PinJointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointParam) const, float, RID, PhysicsServer2D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointParam)const,float,RID,PhysicsServer2D::PinJointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag, bool), false, RID&, PhysicsServer2D::PinJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag,bool),false,RID&,PhysicsServer2D::PinJointFlag&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, bool (PhysicsServer2D::*)(RID,
   PhysicsServer2D::PinJointFlag) const, bool, RID, PhysicsServer2D::PinJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
::~CommandRet(CommandRet<PhysicsServer2D,bool(PhysicsServer2D::*)(RID,PhysicsServer2D::PinJointFlag)const,bool,RID,PhysicsServer2D::PinJointFlag>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam, float), false, RID&, PhysicsServer2D::DampedSpringParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
::~Command(Command<PhysicsServer2D,void(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam,float),false,RID&,PhysicsServer2D::DampedSpringParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, float (PhysicsServer2D::*)(RID,
   PhysicsServer2D::DampedSpringParam) const, float, RID,
   PhysicsServer2D::DampedSpringParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
::~CommandRet(CommandRet<PhysicsServer2D,float(PhysicsServer2D::*)(RID,PhysicsServer2D::DampedSpringParam)const,float,RID,PhysicsServer2D::DampedSpringParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer2D, PhysicsServer2D::JointType (PhysicsServer2D::*)(RID)
   const, PhysicsServer2D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer2D,PhysicsServer2D::JointType(PhysicsServer2D::*)(RID)const,PhysicsServer2D::JointType,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(bool),false,bool&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(float),false,float&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(long),false,long&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2D, void (PhysicsServer2D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false>::~Command
          (Command<PhysicsServer2D,void(PhysicsServer2D::*)(),false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer2DWrapMT, void (PhysicsServer2DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer2DWrapMT,void(PhysicsServer2DWrapMT::*)(),false> *this)

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


