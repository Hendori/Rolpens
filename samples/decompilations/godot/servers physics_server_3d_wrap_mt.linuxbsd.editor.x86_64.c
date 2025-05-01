
/* PhysicsServer3DWrapMT::_thread_exit() */

void __thiscall PhysicsServer3DWrapMT::_thread_exit(PhysicsServer3DWrapMT *this)

{
  this[0x220] = (PhysicsServer3DWrapMT)0x1;
  return;
}



/* PhysicsServer3DWrapMT::_assign_mt_ids(long) */

void __thiscall PhysicsServer3DWrapMT::_assign_mt_ids(PhysicsServer3DWrapMT *this,long param_1)

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



/* PhysicsServer3DWrapMT::~PhysicsServer3DWrapMT() */

void __thiscall PhysicsServer3DWrapMT::~PhysicsServer3DWrapMT(PhysicsServer3DWrapMT *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0011c4b0;
  pOVar1 = *(Object **)(this + 0x178);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  CommandQueueMT::~CommandQueueMT((CommandQueueMT *)(this + 0x180));
  PhysicsServer3D::~PhysicsServer3D((PhysicsServer3D *)this);
  return;
}



/* PhysicsServer3DWrapMT::~PhysicsServer3DWrapMT() */

void __thiscall PhysicsServer3DWrapMT::~PhysicsServer3DWrapMT(PhysicsServer3DWrapMT *this)

{
  ~PhysicsServer3DWrapMT(this);
  operator_delete(this,0x228);
  return;
}



/* PhysicsServer3DWrapMT::flush_queries() */

void __thiscall PhysicsServer3DWrapMT::flush_queries(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x710);
  if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
    if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
      if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
      if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
        if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
        if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
          if (UNRECOVERED_JUMPTABLE_00 != flush_queries) goto LAB_001001b8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x710);
          if (UNRECOVERED_JUMPTABLE_00 == flush_queries) {
                    /* WARNING: Could not recover jumptable at 0x001001a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x710))();
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



/* PhysicsServer3DWrapMT::end_sync() */

void __thiscall PhysicsServer3DWrapMT::end_sync(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x718);
  if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
    if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
      if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
      if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
        if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
        if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
          if (UNRECOVERED_JUMPTABLE_00 != end_sync) goto LAB_001002a8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x718);
          if (UNRECOVERED_JUMPTABLE_00 == end_sync) {
                    /* WARNING: Could not recover jumptable at 0x00100291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x718))();
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



/* PhysicsServer3DWrapMT::PhysicsServer3DWrapMT(PhysicsServer3D*, bool) */

void __thiscall
PhysicsServer3DWrapMT::PhysicsServer3DWrapMT
          (PhysicsServer3DWrapMT *this,PhysicsServer3D *param_1,bool param_2)

{
  PhysicsServer3D::PhysicsServer3D((PhysicsServer3D *)this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011c4b0;
  CommandQueueMT::CommandQueueMT((CommandQueueMT *)(this + 0x180));
  this[0x220] = (PhysicsServer3DWrapMT)0x0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0xffffffffffffffff;
  *(PhysicsServer3D **)(this + 0x178) = param_1;
  this[0x221] = (PhysicsServer3DWrapMT)param_2;
  return;
}



/* PhysicsServer3DWrapMT::_thread_loop() */

void __thiscall PhysicsServer3DWrapMT::_thread_loop(PhysicsServer3DWrapMT *this)

{
  if (this[0x220] == (PhysicsServer3DWrapMT)0x0) {
    do {
      WorkerThreadPool::yield();
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    } while (this[0x220] == (PhysicsServer3DWrapMT)0x0);
    return;
  }
  return;
}



/* PhysicsServer3DWrapMT::sync() */

void __thiscall PhysicsServer3DWrapMT::sync(PhysicsServer3DWrapMT *this)

{
  CommandQueueMT *this_00;
  
  this_00 = (CommandQueueMT *)(this + 0x180);
  if (this[0x221] == (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush(this_00);
  }
  else {
    CommandQueueMT::push_and_sync<CommandQueueMT,void(CommandQueueMT::*)()>
              (this_00,(_func_void *)this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x0010042b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x178) + 0x708))();
  return;
}



/* PhysicsServer3DWrapMT::finish() */

void __thiscall PhysicsServer3DWrapMT::finish(PhysicsServer3DWrapMT *this)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  plVar3 = *(long **)(this + 0x178);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x221] == (PhysicsServer3DWrapMT)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010049d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x720))(plVar3);
      return;
    }
LAB_001006f8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __mutex = (pthread_mutex_t *)(this + 0x180);
  local_48 = __mutex;
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 != 0) {
LAB_001006fd:
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar6);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar9 = (ulong)uVar2;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      puVar7[2] = plVar3;
      *(undefined1 *)(puVar7 + 1) = 0;
      *puVar7 = &PTR_call_0011d778;
      puVar7[3] = 0x721;
      puVar7[4] = 0;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
      UNLOCK();
      if (*(long *)(this + 0x1f8) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      if (local_40 != '\0') {
        std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
      }
      local_48 = __mutex;
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) goto LAB_001006fd;
      uVar1 = *(uint *)(this + 0x1a8);
      uVar8 = (ulong)uVar1;
      local_40 = '\x01';
      LocalVector<unsigned_char,unsigned_int,false,false>::resize
                ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38)
      ;
      uVar2 = *(uint *)(this + 0x1a8);
      uVar9 = (ulong)uVar2;
      if (uVar1 < uVar2) {
        lVar4 = *(long *)(this + 0x1b0);
        uVar8 = (ulong)(uVar1 + 8);
        *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x30;
        if (uVar1 + 8 < uVar2) {
          puVar7 = (undefined8 *)(lVar4 + uVar8);
          *(undefined1 *)(puVar7 + 1) = 0;
          *puVar7 = &PTR_call_0011d7a0;
          puVar7[2] = this;
          puVar7[3] = 0x100000;
          puVar7[4] = 0;
          LOCK();
          this[0x208] = (PhysicsServer3DWrapMT)0x1;
          UNLOCK();
          if (*(long *)(this + 0x1f8) != -1) {
            WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
          }
          if (local_40 != '\0') {
            std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_48);
          }
          if (*(long *)(this + 0x218) != -1) {
            WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
            *(undefined8 *)(this + 0x218) = 0xffffffffffffffff;
          }
          *(undefined8 *)(this + 0x210) = 1;
          if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_001006f8;
        }
      }
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar8,uVar9,"p_index","count","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::step(float) */

void __thiscall PhysicsServer3DWrapMT::step(PhysicsServer3DWrapMT *this,float param_1)

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
  if (this[0x221] == (PhysicsServer3DWrapMT)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x700))(plVar3);
      return;
    }
LAB_001008b0:
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
      *puVar7 = &PTR_call_0011d700;
      puVar7[2] = plVar3;
      puVar7[3] = 0x701;
      puVar7[4] = 0;
      *(float *)(puVar7 + 5) = param_1;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_001008b0;
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



/* PhysicsServer3DWrapMT::init() */

void __thiscall PhysicsServer3DWrapMT::init(PhysicsServer3DWrapMT *this)

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
  if (this[0x221] == (PhysicsServer3DWrapMT)0x0) {
    *(undefined8 *)(this + 0x210) = 1;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010092c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x6f8))();
      return;
    }
LAB_00100b5a:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_60 = 0;
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC18;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_0011cbf8;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar7 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar7;
  *(code **)(this_00 + 0x38) = _thread_loop;
  *(PhysicsServer3DWrapMT **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "PhysicsServer3DWrapMT::_thread_loop";
  Callable::Callable((Callable *)&local_58,this_00);
  __mutex = (pthread_mutex_t *)(this + 0x180);
  uVar7 = WorkerThreadPool::add_task(pCVar5,SUB81((Callable *)&local_58,0),(String *)0x1);
  Callable::~Callable((Callable *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar6 = pthread_mutex_lock(__mutex);
  if (iVar6 == 0) {
    *(undefined8 *)(this + 0x1f8) = uVar7;
    pthread_mutex_unlock(__mutex);
    local_58 = __mutex;
    iVar6 = pthread_mutex_lock(__mutex);
    if (iVar6 == 0) {
      uVar1 = *(uint *)(this + 0x1a8);
      uVar9 = (ulong)uVar1;
      local_50 = '\x01';
      LocalVector<unsigned_char,unsigned_int,false,false>::resize
                ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x38)
      ;
      uVar2 = *(uint *)(this + 0x1a8);
      if (uVar1 < uVar2) {
        lVar3 = *(long *)(this + 0x1b0);
        uVar9 = (ulong)(uVar1 + 8);
        *(undefined8 *)(lVar3 + (ulong)uVar1) = 0x30;
        if (uVar1 + 8 < uVar2) {
          puVar8 = (undefined8 *)(lVar3 + uVar9);
          *puVar8 = &PTR_call_0011d728;
          *(undefined1 *)(puVar8 + 1) = 0;
          puVar8[2] = this;
          puVar8[3] = _assign_mt_ids;
          puVar8[4] = 0;
          puVar8[5] = uVar7;
          LOCK();
          this[0x208] = (PhysicsServer3DWrapMT)0x1;
          UNLOCK();
          if (*(long *)(this + 0x1f8) != -1) {
            WorkerThreadPool::notify_yield_over((long)WorkerThreadPool::singleton);
          }
          if (local_50 != '\0') {
            std::unique_lock<std::mutex>::unlock((unique_lock<std::mutex> *)&local_58);
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            CommandQueueMT::push_and_sync<PhysicsServer3D,void(PhysicsServer3D::*)()>
                      ((PhysicsServer3D *)&__mutex->__data,*(_func_void **)(this + 0x178));
            return;
          }
          goto LAB_00100b5a;
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
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar6);
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



/* PhysicsServer3D::is_class_ptr(void*) const */

uint __thiscall PhysicsServer3D::is_class_ptr(PhysicsServer3D *this,void *param_1)

{
  return (uint)CONCAT71(0x11d7,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d7,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* PhysicsServer3D::_getv(StringName const&, Variant&) const */

undefined8 PhysicsServer3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer3D::_setv(StringName const&, Variant const&) */

undefined8 PhysicsServer3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer3D::_validate_propertyv(PropertyInfo&) const */

void PhysicsServer3D::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PhysicsServer3D::_property_can_revertv(StringName const&) const */

undefined8 PhysicsServer3D::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PhysicsServer3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicsServer3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicsServer3D::_notificationv(int, bool) */

void PhysicsServer3D::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::JointType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const, bool, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisFlag&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const, float, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisParam&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float, RID,
   PhysicsServer3D::ConeTwistJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam, float), false, RID&, PhysicsServer3D::ConeTwistJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float, RID,
   PhysicsServer3D::SliderJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam, float), false, RID&, PhysicsServer3D::SliderJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool, RID,
   PhysicsServer3D::HingeJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag, bool), false, RID&, PhysicsServer3D::HingeJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float, RID,
   PhysicsServer3D::HingeJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam, float), false, RID&, PhysicsServer3D::HingeJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&,
   Vector3 const&, RID, Vector3 const&, Vector3 const&), false, RID&, RID&, Vector3 const&, Vector3
   const&, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   RID, Transform3D const&), false, RID&, RID&, Transform3D const&, RID&, Transform3D
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float, RID, PhysicsServer3D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam, float), false, RID&, PhysicsServer3D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&, RID,
   Vector3 const&), false, RID&, RID&, Vector3 const&, RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, int) const, bool, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID, int) const,
   Vector3, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>::~CommandRet
          (CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Vector3 const&),
   false, RID&, int&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, AABB (PhysicsServer3D::*)(RID) const, AABB,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3DRenderingServerHandler*), false, RID&,
   PhysicsServer3DRenderingServerHandler*&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis) const, bool, RID, PhysicsServer3D::BodyAxis>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis, bool), false, RID&, PhysicsServer3D::BodyAxis&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID) const, Vector3,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&, Vector3
   const&), false, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&), false,
   RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>
         *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState) const, Variant, RID, PhysicsServer3D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant, RID,
   PhysicsServer3D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::BodyMode (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyMode), false, RID&, PhysicsServer3D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, unsigned int (PhysicsServer3D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID) const,
   Transform3D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant, RID,
   PhysicsServer3D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Transform3D const&),
   false, RID&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, ObjectID (PhysicsServer3D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID, int) const,
   Transform3D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>
            *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, int (PhysicsServer3D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Transform3D const&),
   false, RID&, int&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
           *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   bool), false, RID&, RID&, Transform3D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float, RID,
   PhysicsServer3D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
              *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter, float), false, RID&, PhysicsServer3D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
           *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID> *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::ShapeType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
              *this)

{
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&> *this)

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



/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this)

{
  return;
}



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(), false>::call()
    */

void CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false>::call
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
                    /* WARNING: Could not recover jumptable at 0x001010e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), false>::call() */

void CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false>::call(void)

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
                    /* WARNING: Could not recover jumptable at 0x00101110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), true>::call() */

void CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true>::call(void)

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
                    /* WARNING: Could not recover jumptable at 0x00101140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(long), false,
   long&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&>::
call(Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(float), false, float&>::call()
    */

void CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&>::call
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
                    /* WARNING: Could not recover jumptable at 0x001011a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(in_RDI + 0x28),plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(bool), false, bool&>::call()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001011d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),this[0x28],
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::JointType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::JointType, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
::call(CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
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



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const, bool, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
::call(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
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
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x34),
                    *(undefined4 *)(this + 0x30));
  *puVar1 = uVar2;
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisFlag&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x2c),this[0x28],
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const, float, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
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
                    *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x34),
                    *(undefined4 *)(this + 0x30));
  *puVar1 = uVar3;
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisParam&, float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x2c),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float, RID,
   PhysicsServer3D::ConeTwistJointParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam, float), false, RID&, PhysicsServer3D::ConeTwistJointParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float, RID, PhysicsServer3D::SliderJointParam>::call()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam, float), false, RID&, PhysicsServer3D::SliderJointParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001013ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool, RID, PhysicsServer3D::HingeJointFlag>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
::call(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag, bool), false, RID&, PhysicsServer3D::HingeJointFlag&,
   bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x2c),this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float, RID, PhysicsServer3D::HingeJointParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam, float), false, RID&, PhysicsServer3D::HingeJointParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001014cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&,
   Vector3 const&, RID, Vector3 const&, Vector3 const&), false, RID&, RID&, Vector3 const&, Vector3
   const&, RID&, Vector3 const&, Vector3 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
       *this)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(this + 0x18);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar1)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x68),
            *(undefined8 *)(this + 0x60),this + 0x54,this + 0x48,*(undefined8 *)(this + 0x40),
            this + 0x34,this + 0x28);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   RID, Transform3D const&), false, RID&, RID&, Transform3D const&, RID&, Transform3D
   const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010155b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x98),
             *(undefined8 *)(this + 0x90),this + 0x60,*(undefined8 *)(this + 0x58),this + 0x28);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float, RID, PhysicsServer3D::PinJointParam>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam, float), false, RID&, PhysicsServer3D::PinJointParam&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001015cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&, RID,
   Vector3 const&), false, RID&, RID&, Vector3 const&, RID&, Vector3 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x58),
             *(undefined8 *)(this + 0x50),this + 0x40,*(undefined8 *)(this + 0x38),this + 0x28);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, int) const, bool, RID,
   int>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int>::
call(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int> *this)

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



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID, int) const,
   Vector3, RID, int>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>::call
          (CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>
           *this)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  
  pcVar3 = *(code **)(this + 0x18);
  pauVar1 = *(undefined1 (**) [12])(this + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  auVar4 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                     *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *pauVar1 = auVar4;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Vector3 const&),
   false, RID&, int&, Vector3 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001016ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             *(undefined4 *)(this + 0x34),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, AABB (PhysicsServer3D::*)(RID) const, AABB,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID>::call
          (CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3DRenderingServerHandler*), false, RID&,
   PhysicsServer3DRenderingServerHandler*&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001017bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x50),
             this + 0x40,this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001017e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis) const, bool, RID, PhysicsServer3D::BodyAxis>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
::call(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis, bool), false, RID&, PhysicsServer3D::BodyAxis&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x2c),this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID) const, Vector3,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID>::call
          (CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID> *this)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [12];
  
  pauVar1 = *(undefined1 (**) [12])(this + 0x28);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = *(code **)(this + 0x18);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  auVar4 = (*pcVar3)((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
                     *(undefined8 *)(this + 0x30));
  *pauVar1 = auVar4;
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&, Vector3
   const&), false, RID&, Vector3 const&, Vector3 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001018fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x40),
             this + 0x34,this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&), false,
   RID&, Vector3 const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>::
call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState, Variant const&), false, RID&, PhysicsServer3D::BodyState&, Variant
   const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010195c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter, Variant const&), false, RID&, PhysicsServer3D::BodyParameter&,
   Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0010198c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::BodyMode (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::BodyMode, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
::call(CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyMode), false, RID&, PhysicsServer3D::BodyMode&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x001019e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&), false,
   RID&, Callable const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, unsigned int (PhysicsServer3D::*)(RID) const,
   unsigned int, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>::call
          (CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
           *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101a77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID) const,
   Transform3D, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>::call
          (CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(&local_48,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x30));
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar1[2] = local_38;
  puVar1[3] = uStack_30;
  puVar1[4] = local_28;
  puVar1[5] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Transform3D const&),
   false, RID&, Transform3D const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x58),
             this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter, Variant const&), false, RID&, PhysicsServer3D::AreaParameter&,
   Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x48),
             *(undefined4 *)(this + 0x40),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, ObjectID (PhysicsServer3D::*)(RID) const, ObjectID,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID>::
call(CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID), false, RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x28),
             UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID, int) const,
   Transform3D, RID, int>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>::call
          (CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>
           *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(this + 0x18);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
  (*pcVar2)(&local_48,(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
            *(undefined8 *)(this + 0x38),*(undefined4 *)(this + 0x30));
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar1[2] = local_38;
  puVar1[3] = uStack_30;
  puVar1[4] = local_28;
  puVar1[5] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID, int) const, RID, RID,
   int>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int>::call
          (CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int> *this)

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



/* CommandQueueMT::CommandRet<PhysicsServer3D, int (PhysicsServer3D::*)(RID) const, int,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID>::call
          (CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, bool), false, RID&,
   int&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x2c),this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Transform3D const&),
   false, RID&, int&, Transform3D const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x60),
             *(undefined4 *)(this + 0x58),this + 0x28,UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, RID), false, RID&,
   int&, RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x38),
             *(undefined4 *)(this + 0x30),*(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   bool), false, RID&, RID&, Transform3D const&, bool&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101da2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x68),
             *(undefined8 *)(this + 0x60),this + 0x2c,this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID) const, RID,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID>::call
          (CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID), false, RID&,
   RID&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined8 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int), false, RID&,
   int&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             *(undefined4 *)(this + 0x28),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float, RID, PhysicsServer3D::SpaceParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
::call(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter, float), false, RID&, PhysicsServer3D::SpaceParameter&,
   float&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
::call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
       *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),*(undefined4 *)(this + 0x2c),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID) const, bool,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID>::call
          (CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, bool), false, RID&,
   bool&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),*(undefined8 *)(this + 0x30),
             this[0x28],UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::ShapeType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::ShapeType, RID>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
::call(CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
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



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID) const, float,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID>::call
          (CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID> *this)

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



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, float), false, RID&,
   float&>::call() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&>::call
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined4 *)(this + 0x28),(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)),
             *(undefined8 *)(this + 0x30),UNRECOVERED_JUMPTABLE);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Variant const&), false,
   RID&, Variant const&>::call() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
call(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>
     *this)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(this + 0x18);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)(*(long *)(this + 0x20) + *(long *)(this + 0x10)) + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00101fd8. Too many branches */
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
                    /* WARNING: Could not recover jumptable at 0x00102000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,in_RSI,UNRECOVERED_JUMPTABLE);
  return;
}



/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::get_argument_count
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant, RID, PhysicsServer3D::AreaParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
::call(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
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



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::JointType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const, bool, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisFlag&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
           *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const, float, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisParam&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
           *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float, RID,
   PhysicsServer3D::ConeTwistJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam, float), false, RID&, PhysicsServer3D::ConeTwistJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float, RID,
   PhysicsServer3D::SliderJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam, float), false, RID&, PhysicsServer3D::SliderJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool, RID,
   PhysicsServer3D::HingeJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag, bool), false, RID&, PhysicsServer3D::HingeJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float, RID,
   PhysicsServer3D::HingeJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam, float), false, RID&, PhysicsServer3D::HingeJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&,
   Vector3 const&, RID, Vector3 const&, Vector3 const&), false, RID&, RID&, Vector3 const&, Vector3
   const&, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
           *this)

{
  operator_delete(this,0x70);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   RID, Transform3D const&), false, RID&, RID&, Transform3D const&, RID&, Transform3D
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
           *this)

{
  operator_delete(this,0xa0);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float, RID, PhysicsServer3D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam, float), false, RID&, PhysicsServer3D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&, RID,
   Vector3 const&), false, RID&, RID&, Vector3 const&, RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
           *this)

{
  operator_delete(this,0x60);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, int) const, bool, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int> *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID, int) const,
   Vector3, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>::~CommandRet
          (CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>
           *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Vector3 const&),
   false, RID&, int&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
           *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, AABB (PhysicsServer3D::*)(RID) const, AABB,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3DRenderingServerHandler*), false, RID&,
   PhysicsServer3DRenderingServerHandler*&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis) const, bool, RID, PhysicsServer3D::BodyAxis>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis, bool), false, RID&, PhysicsServer3D::BodyAxis&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID) const, Vector3,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&, Vector3
   const&), false, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&), false,
   RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>
         *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState) const, Variant, RID, PhysicsServer3D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant, RID,
   PhysicsServer3D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::BodyMode (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyMode), false, RID&, PhysicsServer3D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, unsigned int (PhysicsServer3D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID) const,
   Transform3D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant, RID,
   PhysicsServer3D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Transform3D const&),
   false, RID&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
           *this)

{
  operator_delete(this,0x60);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, ObjectID (PhysicsServer3D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID, int) const,
   Transform3D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>
            *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int> *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, int (PhysicsServer3D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Transform3D const&),
   false, RID&, int&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
           *this)

{
  operator_delete(this,0x68);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   bool), false, RID&, RID&, Transform3D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
           *this)

{
  operator_delete(this,0x70);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float, RID,
   PhysicsServer3D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
              *this)

{
  operator_delete(this,0x40);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter, float), false, RID&, PhysicsServer3D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
           *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::ShapeType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
              *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID> *this)

{
  operator_delete(this,0x38);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&> *this)

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



/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_0011d110;
  Callable::~Callable((Callable *)(this + 0x28));
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_0011d110;
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



/* PhysicsServer3D::_get_class_namev() const */

undefined8 * PhysicsServer3D::_get_class_namev(void)

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
LAB_001025c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001025c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsServer3D");
      goto LAB_0010262e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicsServer3D");
LAB_0010262e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::get_object
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this)

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
      goto LAB_0010275d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010275d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010275d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d318;
  Callable::~Callable((Callable *)(this + 0x40));
  if (Variant::needs_deinit[*(int *)(this + 0x28)] != '\0') {
    Variant::_clear_internal();
  }
  operator_delete(this,0x58);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter, Variant const&), false, RID&, PhysicsServer3D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d188;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState, Variant const&), false, RID&, PhysicsServer3D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d1d8;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter, Variant const&), false, RID&, PhysicsServer3D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d020;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_0011ccb0;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d318;
  Callable::~Callable((Callable *)(this + 0x40));
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    return;
  }
  Variant::_clear_internal();
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter, Variant const&), false, RID&, PhysicsServer3D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d188;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter, Variant const&), false, RID&, PhysicsServer3D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d020;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
  *(undefined ***)this = &PTR_call_0011ccb0;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x48);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x48);
  return;
}



/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState, Variant const&), false, RID&, PhysicsServer3D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
           *this)

{
  *(undefined ***)this = &PTR_call_0011d1d8;
  if (Variant::needs_deinit[*(int *)(this + 0x28)] == '\0') {
    operator_delete(this,0x50);
    return;
  }
  Variant::_clear_internal();
  operator_delete(this,0x50);
  return;
}



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID) const, Variant,
   RID>::call() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID>::call
          (CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID> *this)

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



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState) const, Variant, RID, PhysicsServer3D::BodyState>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
::call(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
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



/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant, RID, PhysicsServer3D::BodyParameter>::call() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
::call(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
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



/* PhysicsServer3DWrapMT::area_create() */

void __thiscall PhysicsServer3DWrapMT::area_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x228);
  if (UNRECOVERED_JUMPTABLE_00 == area_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
    if (UNRECOVERED_JUMPTABLE_00 == area_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
      if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_00102da8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
      if (UNRECOVERED_JUMPTABLE_00 == area_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
        if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_00102da8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
        if (UNRECOVERED_JUMPTABLE_00 == area_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
          if (UNRECOVERED_JUMPTABLE_00 != area_create) goto LAB_00102da8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x228);
          if (UNRECOVERED_JUMPTABLE_00 == area_create) {
                    /* WARNING: Could not recover jumptable at 0x00102d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x228))();
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



/* PhysicsServer3DWrapMT::space_create() */

void __thiscall PhysicsServer3DWrapMT::space_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x1e0);
  if (UNRECOVERED_JUMPTABLE_00 == space_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
    if (UNRECOVERED_JUMPTABLE_00 == space_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
      if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102e98;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
      if (UNRECOVERED_JUMPTABLE_00 == space_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
        if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102e98;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
        if (UNRECOVERED_JUMPTABLE_00 == space_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
          if (UNRECOVERED_JUMPTABLE_00 != space_create) goto LAB_00102e98;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1e0);
          if (UNRECOVERED_JUMPTABLE_00 == space_create) {
                    /* WARNING: Could not recover jumptable at 0x00102e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x1e0))();
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



/* PhysicsServer3DWrapMT::is_flushing_queries() const */

void __thiscall PhysicsServer3DWrapMT::is_flushing_queries(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x728);
  if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
    if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
      if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102f88;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
      if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
        if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102f88;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
        if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
          if (UNRECOVERED_JUMPTABLE_00 != is_flushing_queries) goto LAB_00102f88;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x728);
          if (UNRECOVERED_JUMPTABLE_00 == is_flushing_queries) {
                    /* WARNING: Could not recover jumptable at 0x00102f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x728))();
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



/* PhysicsServer3DWrapMT::body_create() */

void __thiscall PhysicsServer3DWrapMT::body_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x2f8);
  if (UNRECOVERED_JUMPTABLE_00 == body_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
    if (UNRECOVERED_JUMPTABLE_00 == body_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
      if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00103078;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
      if (UNRECOVERED_JUMPTABLE_00 == body_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
        if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00103078;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
        if (UNRECOVERED_JUMPTABLE_00 == body_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
          if (UNRECOVERED_JUMPTABLE_00 != body_create) goto LAB_00103078;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x2f8);
          if (UNRECOVERED_JUMPTABLE_00 == body_create) {
                    /* WARNING: Could not recover jumptable at 0x00103061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x2f8))();
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



/* PhysicsServer3DWrapMT::world_boundary_shape_create() */

void __thiscall PhysicsServer3DWrapMT::world_boundary_shape_create(PhysicsServer3DWrapMT *this)

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
      if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00103168;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
      if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00103168;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
        if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
          if (UNRECOVERED_JUMPTABLE_00 != world_boundary_shape_create) goto LAB_00103168;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x158);
          if (UNRECOVERED_JUMPTABLE_00 == world_boundary_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x158))();
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



/* PhysicsServer3DWrapMT::joint_create() */

void __thiscall PhysicsServer3DWrapMT::joint_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x5f0);
  if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
    if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
      if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00103258;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
      if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
        if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00103258;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
        if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
          if (UNRECOVERED_JUMPTABLE_00 != joint_create) goto LAB_00103258;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x5f0);
          if (UNRECOVERED_JUMPTABLE_00 == joint_create) {
                    /* WARNING: Could not recover jumptable at 0x00103241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x5f0))();
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



/* PhysicsServer3DWrapMT::soft_body_create() */

void __thiscall PhysicsServer3DWrapMT::soft_body_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x4e0);
  if (UNRECOVERED_JUMPTABLE_00 == soft_body_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
    if (UNRECOVERED_JUMPTABLE_00 == soft_body_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
      if (UNRECOVERED_JUMPTABLE_00 != soft_body_create) goto LAB_00103348;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
      if (UNRECOVERED_JUMPTABLE_00 == soft_body_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
        if (UNRECOVERED_JUMPTABLE_00 != soft_body_create) goto LAB_00103348;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
        if (UNRECOVERED_JUMPTABLE_00 == soft_body_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
          if (UNRECOVERED_JUMPTABLE_00 != soft_body_create) goto LAB_00103348;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x4e0);
          if (UNRECOVERED_JUMPTABLE_00 == soft_body_create) {
                    /* WARNING: Could not recover jumptable at 0x00103331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x4e0))();
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



/* PhysicsServer3DWrapMT::separation_ray_shape_create() */

void __thiscall PhysicsServer3DWrapMT::separation_ray_shape_create(PhysicsServer3DWrapMT *this)

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
      if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103438;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
      if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103438;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
        if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
          if (UNRECOVERED_JUMPTABLE_00 != separation_ray_shape_create) goto LAB_00103438;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x160);
          if (UNRECOVERED_JUMPTABLE_00 == separation_ray_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x160))();
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



/* PhysicsServer3DWrapMT::custom_shape_create() */

void __thiscall PhysicsServer3DWrapMT::custom_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x1a0);
  if (UNRECOVERED_JUMPTABLE_00 == custom_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
    if (UNRECOVERED_JUMPTABLE_00 == custom_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
      if (UNRECOVERED_JUMPTABLE_00 != custom_shape_create) goto LAB_00103528;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
      if (UNRECOVERED_JUMPTABLE_00 == custom_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
        if (UNRECOVERED_JUMPTABLE_00 != custom_shape_create) goto LAB_00103528;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
        if (UNRECOVERED_JUMPTABLE_00 == custom_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
          if (UNRECOVERED_JUMPTABLE_00 != custom_shape_create) goto LAB_00103528;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x1a0);
          if (UNRECOVERED_JUMPTABLE_00 == custom_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x1a0))();
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



/* PhysicsServer3DWrapMT::cylinder_shape_create() */

void __thiscall PhysicsServer3DWrapMT::cylinder_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x180);
  if (UNRECOVERED_JUMPTABLE_00 == cylinder_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
    if (UNRECOVERED_JUMPTABLE_00 == cylinder_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 != cylinder_shape_create) goto LAB_00103618;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
      if (UNRECOVERED_JUMPTABLE_00 == cylinder_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
        if (UNRECOVERED_JUMPTABLE_00 != cylinder_shape_create) goto LAB_00103618;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
        if (UNRECOVERED_JUMPTABLE_00 == cylinder_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
          if (UNRECOVERED_JUMPTABLE_00 != cylinder_shape_create) goto LAB_00103618;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x180);
          if (UNRECOVERED_JUMPTABLE_00 == cylinder_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x180))();
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



/* PhysicsServer3DWrapMT::box_shape_create() */

void __thiscall PhysicsServer3DWrapMT::box_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x170);
  if (UNRECOVERED_JUMPTABLE_00 == box_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
    if (UNRECOVERED_JUMPTABLE_00 == box_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
      if (UNRECOVERED_JUMPTABLE_00 != box_shape_create) goto LAB_00103708;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
      if (UNRECOVERED_JUMPTABLE_00 == box_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE_00 != box_shape_create) goto LAB_00103708;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
        if (UNRECOVERED_JUMPTABLE_00 == box_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
          if (UNRECOVERED_JUMPTABLE_00 != box_shape_create) goto LAB_00103708;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x170);
          if (UNRECOVERED_JUMPTABLE_00 == box_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x001036f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x170))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103708:
                    /* WARNING: Could not recover jumptable at 0x00103708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::concave_polygon_shape_create() */

void __thiscall PhysicsServer3DWrapMT::concave_polygon_shape_create(PhysicsServer3DWrapMT *this)

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
      if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_001037f8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
      if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
        if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_001037f8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
        if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
          if (UNRECOVERED_JUMPTABLE_00 != concave_polygon_shape_create) goto LAB_001037f8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 400);
          if (UNRECOVERED_JUMPTABLE_00 == concave_polygon_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x001037e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 400))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001037f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001037f8:
                    /* WARNING: Could not recover jumptable at 0x001037f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::sphere_shape_create() */

void __thiscall PhysicsServer3DWrapMT::sphere_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x168);
  if (UNRECOVERED_JUMPTABLE_00 == sphere_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
    if (UNRECOVERED_JUMPTABLE_00 == sphere_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
      if (UNRECOVERED_JUMPTABLE_00 != sphere_shape_create) goto LAB_001038e8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
      if (UNRECOVERED_JUMPTABLE_00 == sphere_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE_00 != sphere_shape_create) goto LAB_001038e8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
        if (UNRECOVERED_JUMPTABLE_00 == sphere_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
          if (UNRECOVERED_JUMPTABLE_00 != sphere_shape_create) goto LAB_001038e8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x168);
          if (UNRECOVERED_JUMPTABLE_00 == sphere_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x001038d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x168))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001038e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001038e8:
                    /* WARNING: Could not recover jumptable at 0x001038e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::convex_polygon_shape_create() */

void __thiscall PhysicsServer3DWrapMT::convex_polygon_shape_create(PhysicsServer3DWrapMT *this)

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
      if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_001039d8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
      if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
        if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_001039d8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
        if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
          if (UNRECOVERED_JUMPTABLE_00 != convex_polygon_shape_create) goto LAB_001039d8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x188);
          if (UNRECOVERED_JUMPTABLE_00 == convex_polygon_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x001039c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x188))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x001039d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_001039d8:
                    /* WARNING: Could not recover jumptable at 0x001039d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::capsule_shape_create() */

void __thiscall PhysicsServer3DWrapMT::capsule_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x178);
  if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
    if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
      if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103ac8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
      if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103ac8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
        if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
          if (UNRECOVERED_JUMPTABLE_00 != capsule_shape_create) goto LAB_00103ac8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x178);
          if (UNRECOVERED_JUMPTABLE_00 == capsule_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x178))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103ac8:
                    /* WARNING: Could not recover jumptable at 0x00103ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::heightmap_shape_create() */

void __thiscall PhysicsServer3DWrapMT::heightmap_shape_create(PhysicsServer3DWrapMT *this)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(this + 0x178) + 0x198);
  if (UNRECOVERED_JUMPTABLE_00 == heightmap_shape_create) {
    plVar1 = (long *)(*(long **)(this + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
    if (UNRECOVERED_JUMPTABLE_00 == heightmap_shape_create) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
      if (UNRECOVERED_JUMPTABLE_00 != heightmap_shape_create) goto LAB_00103bb8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
      if (UNRECOVERED_JUMPTABLE_00 == heightmap_shape_create) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
        if (UNRECOVERED_JUMPTABLE_00 != heightmap_shape_create) goto LAB_00103bb8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
        if (UNRECOVERED_JUMPTABLE_00 == heightmap_shape_create) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
          if (UNRECOVERED_JUMPTABLE_00 != heightmap_shape_create) goto LAB_00103bb8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x198);
          if (UNRECOVERED_JUMPTABLE_00 == heightmap_shape_create) {
                    /* WARNING: Could not recover jumptable at 0x00103ba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x198))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103bb8:
                    /* WARNING: Could not recover jumptable at 0x00103bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* PhysicsServer3DWrapMT::get_process_info(PhysicsServer3D::ProcessInfo) */

void PhysicsServer3DWrapMT::get_process_info(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(**(long **)(param_1 + 0x178) + 0x730);
  if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
    plVar1 = (long *)(*(long **)(param_1 + 0x178))[0x2f];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
    if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
      if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103ca8;
      plVar1 = (long *)plVar1[0x2f];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
      if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
        if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103ca8;
        plVar1 = (long *)plVar1[0x2f];
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
        if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
          if (UNRECOVERED_JUMPTABLE_00 != get_process_info) goto LAB_00103ca8;
          plVar1 = (long *)plVar1[0x2f];
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x730);
          if (UNRECOVERED_JUMPTABLE_00 == get_process_info) {
                    /* WARNING: Could not recover jumptable at 0x00103c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)plVar1[0x2f] + 0x730))();
            return;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00103ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
LAB_00103ca8:
                    /* WARNING: Could not recover jumptable at 0x00103ca8. Too many branches */
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



/* WARNING: Removing unreachable block (ram,0x00103ef9) */
/* WARNING: Removing unreachable block (ram,0x00103f11) */
/* WARNING: Removing unreachable block (ram,0x00103f16) */
/* WARNING: Removing unreachable block (ram,0x00103e9f) */
/* WARNING: Removing unreachable block (ram,0x00103ebb) */
/* WARNING: Removing unreachable block (ram,0x00103ec0) */
/* WARNING: Removing unreachable block (ram,0x00103e3d) */
/* WARNING: Removing unreachable block (ram,0x00103e59) */
/* WARNING: Removing unreachable block (ram,0x00103e5e) */
/* WARNING: Removing unreachable block (ram,0x00103dc3) */
/* WARNING: Removing unreachable block (ram,0x00103f50) */
/* WARNING: Removing unreachable block (ram,0x00103dd5) */
/* WARNING: Removing unreachable block (ram,0x00103df7) */
/* WARNING: Removing unreachable block (ram,0x00103dfc) */
/* WARNING: Removing unreachable block (ram,0x00103e0c) */
/* WARNING: Removing unreachable block (ram,0x00103e28) */
/* WARNING: Removing unreachable block (ram,0x00103e2d) */
/* WARNING: Removing unreachable block (ram,0x00103e6e) */
/* WARNING: Removing unreachable block (ram,0x00103e8a) */
/* WARNING: Removing unreachable block (ram,0x00103e8f) */
/* WARNING: Removing unreachable block (ram,0x00103ed0) */
/* WARNING: Removing unreachable block (ram,0x00103ee8) */
/* WARNING: Removing unreachable block (ram,0x00103eed) */
/* WARNING: Removing unreachable block (ram,0x00103f40) */
/* WARNING: Removing unreachable block (ram,0x00103f22) */
/* WARNING: Removing unreachable block (ram,0x00103f46) */
/* PhysicsServer3DWrapMT::body_get_direct_state(RID) */

void __thiscall PhysicsServer3DWrapMT::body_get_direct_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00104139) */
/* WARNING: Removing unreachable block (ram,0x00104151) */
/* WARNING: Removing unreachable block (ram,0x00104156) */
/* WARNING: Removing unreachable block (ram,0x001040df) */
/* WARNING: Removing unreachable block (ram,0x001040fb) */
/* WARNING: Removing unreachable block (ram,0x00104100) */
/* WARNING: Removing unreachable block (ram,0x0010407d) */
/* WARNING: Removing unreachable block (ram,0x00104099) */
/* WARNING: Removing unreachable block (ram,0x0010409e) */
/* WARNING: Removing unreachable block (ram,0x00104003) */
/* WARNING: Removing unreachable block (ram,0x00104190) */
/* WARNING: Removing unreachable block (ram,0x00104015) */
/* WARNING: Removing unreachable block (ram,0x00104037) */
/* WARNING: Removing unreachable block (ram,0x0010403c) */
/* WARNING: Removing unreachable block (ram,0x0010404c) */
/* WARNING: Removing unreachable block (ram,0x00104068) */
/* WARNING: Removing unreachable block (ram,0x0010406d) */
/* WARNING: Removing unreachable block (ram,0x001040ae) */
/* WARNING: Removing unreachable block (ram,0x001040ca) */
/* WARNING: Removing unreachable block (ram,0x001040cf) */
/* WARNING: Removing unreachable block (ram,0x00104110) */
/* WARNING: Removing unreachable block (ram,0x00104128) */
/* WARNING: Removing unreachable block (ram,0x0010412d) */
/* WARNING: Removing unreachable block (ram,0x00104180) */
/* WARNING: Removing unreachable block (ram,0x00104162) */
/* WARNING: Removing unreachable block (ram,0x00104186) */
/* PhysicsServer3DWrapMT::space_get_contact_count(RID) const */

void __thiscall PhysicsServer3DWrapMT::space_get_contact_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00104339) */
/* WARNING: Removing unreachable block (ram,0x00104351) */
/* WARNING: Removing unreachable block (ram,0x00104356) */
/* WARNING: Removing unreachable block (ram,0x001042df) */
/* WARNING: Removing unreachable block (ram,0x001042fb) */
/* WARNING: Removing unreachable block (ram,0x00104300) */
/* WARNING: Removing unreachable block (ram,0x0010427d) */
/* WARNING: Removing unreachable block (ram,0x00104299) */
/* WARNING: Removing unreachable block (ram,0x0010429e) */
/* WARNING: Removing unreachable block (ram,0x00104203) */
/* WARNING: Removing unreachable block (ram,0x00104390) */
/* WARNING: Removing unreachable block (ram,0x00104215) */
/* WARNING: Removing unreachable block (ram,0x00104237) */
/* WARNING: Removing unreachable block (ram,0x0010423c) */
/* WARNING: Removing unreachable block (ram,0x0010424c) */
/* WARNING: Removing unreachable block (ram,0x00104268) */
/* WARNING: Removing unreachable block (ram,0x0010426d) */
/* WARNING: Removing unreachable block (ram,0x001042ae) */
/* WARNING: Removing unreachable block (ram,0x001042ca) */
/* WARNING: Removing unreachable block (ram,0x001042cf) */
/* WARNING: Removing unreachable block (ram,0x00104310) */
/* WARNING: Removing unreachable block (ram,0x00104328) */
/* WARNING: Removing unreachable block (ram,0x0010432d) */
/* WARNING: Removing unreachable block (ram,0x00104380) */
/* WARNING: Removing unreachable block (ram,0x00104362) */
/* WARNING: Removing unreachable block (ram,0x00104386) */
/* PhysicsServer3DWrapMT::space_get_direct_state(RID) */

void __thiscall PhysicsServer3DWrapMT::space_get_direct_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001045b6) */
/* WARNING: Removing unreachable block (ram,0x001045cc) */
/* WARNING: Removing unreachable block (ram,0x001045d1) */
/* WARNING: Removing unreachable block (ram,0x0010454c) */
/* WARNING: Removing unreachable block (ram,0x00104566) */
/* WARNING: Removing unreachable block (ram,0x0010456b) */
/* WARNING: Removing unreachable block (ram,0x001044da) */
/* WARNING: Removing unreachable block (ram,0x001044f4) */
/* WARNING: Removing unreachable block (ram,0x001044f9) */
/* WARNING: Removing unreachable block (ram,0x0010444f) */
/* WARNING: Removing unreachable block (ram,0x00104461) */
/* WARNING: Removing unreachable block (ram,0x00104482) */
/* WARNING: Removing unreachable block (ram,0x00104487) */
/* WARNING: Removing unreachable block (ram,0x00104618) */
/* WARNING: Removing unreachable block (ram,0x001044a1) */
/* WARNING: Removing unreachable block (ram,0x001044bb) */
/* WARNING: Removing unreachable block (ram,0x001044c0) */
/* WARNING: Removing unreachable block (ram,0x00104513) */
/* WARNING: Removing unreachable block (ram,0x0010452d) */
/* WARNING: Removing unreachable block (ram,0x00104532) */
/* WARNING: Removing unreachable block (ram,0x00104585) */
/* WARNING: Removing unreachable block (ram,0x0010459b) */
/* WARNING: Removing unreachable block (ram,0x001045a0) */
/* WARNING: Removing unreachable block (ram,0x001045e7) */
/* WARNING: Removing unreachable block (ram,0x001045f8) */
/* PhysicsServer3DWrapMT::body_test_motion(RID, PhysicsServer3D::MotionParameters const&,
   PhysicsServer3D::MotionResult*) */

void __thiscall PhysicsServer3DWrapMT::body_test_motion(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00104818) */
/* WARNING: Removing unreachable block (ram,0x0010482e) */
/* WARNING: Removing unreachable block (ram,0x00104833) */
/* WARNING: Removing unreachable block (ram,0x001047c2) */
/* WARNING: Removing unreachable block (ram,0x001047dc) */
/* WARNING: Removing unreachable block (ram,0x001047e1) */
/* WARNING: Removing unreachable block (ram,0x00104764) */
/* WARNING: Removing unreachable block (ram,0x0010477e) */
/* WARNING: Removing unreachable block (ram,0x00104783) */
/* WARNING: Removing unreachable block (ram,0x001046ec) */
/* WARNING: Removing unreachable block (ram,0x00104890) */
/* WARNING: Removing unreachable block (ram,0x001046fe) */
/* WARNING: Removing unreachable block (ram,0x00104720) */
/* WARNING: Removing unreachable block (ram,0x00104725) */
/* WARNING: Removing unreachable block (ram,0x00104735) */
/* WARNING: Removing unreachable block (ram,0x0010474f) */
/* WARNING: Removing unreachable block (ram,0x00104754) */
/* WARNING: Removing unreachable block (ram,0x00104793) */
/* WARNING: Removing unreachable block (ram,0x001047ad) */
/* WARNING: Removing unreachable block (ram,0x001047b2) */
/* WARNING: Removing unreachable block (ram,0x001047f1) */
/* WARNING: Removing unreachable block (ram,0x00104807) */
/* WARNING: Removing unreachable block (ram,0x0010480c) */
/* WARNING: Removing unreachable block (ram,0x00104860) */
/* WARNING: Removing unreachable block (ram,0x0010483f) */
/* WARNING: Removing unreachable block (ram,0x0010486b) */
/* WARNING: Removing unreachable block (ram,0x0010487b) */
/* WARNING: Removing unreachable block (ram,0x001048bf) */
/* PhysicsServer3DWrapMT::space_get_contacts(RID) const */

void PhysicsServer3DWrapMT::space_get_contacts(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer3D::get_class() const */

void PhysicsServer3D::get_class(void)

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



/* PhysicsServer3D::is_class(String const&) const */

undefined8 __thiscall PhysicsServer3D::is_class(PhysicsServer3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104a1f;
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
LAB_00104a1f:
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
    if (cVar6 != '\0') goto LAB_00104ad3;
  }
  cVar6 = String::operator==(param_1,"PhysicsServer3D");
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
              if (lVar5 == 0) goto LAB_00104b83;
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
LAB_00104b83:
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
      if (cVar6 != '\0') goto LAB_00104ad3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00104ad3:
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
      *puVar4 = &PTR_call_0011cc88;
      puVar4[2] = param_2;
      puVar4[3] = in_RDX;
      puVar4[4] = in_RCX;
      LOCK();
      param_1[0x88] = (CommandQueueMT)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)(param_1 + 0x6c) + (int)_LC23;
      *(ulong *)(param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9);
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, float), RID&,
   float&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, float), RID&, float&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),RID&,float&>
               (PhysicsServer3D *param_1,_func_void_RID_float *param_2,RID *param_3,float *param_4)

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
      *puVar6 = &PTR_call_0011ccd8;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      *(undefined4 *)(puVar6 + 5) = uVar1;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID) const, float,
   RID>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID) const, float*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID>
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
      *puVar4 = &PTR_call_0011cd00;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, PhysicsServer3D::ShapeType
   (PhysicsServer3D::*)(RID) const, PhysicsServer3D::ShapeType, RID>(PhysicsServer3D*,
   PhysicsServer3D::ShapeType (PhysicsServer3D::*)(RID) const, PhysicsServer3D::ShapeType*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
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
      *puVar4 = &PTR_call_0011cd28;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID) const,
   Variant, RID>(PhysicsServer3D*, Variant (PhysicsServer3D::*)(RID) const, Variant*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID>
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
      *puVar4 = &PTR_call_0011cd50;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, bool), RID&,
   bool&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, bool), RID&, bool&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),RID&,bool&>
               (PhysicsServer3D *param_1,_func_void_RID_bool *param_2,RID *param_3,bool *param_4)

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
      *puVar6 = &PTR_call_0011cd78;
      *(undefined1 *)(puVar6 + 5) = uVar1;
      uVar3 = *in_R8;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, bool (PhysicsServer3D::*)(RID) const, bool,
   RID>(PhysicsServer3D*, bool (PhysicsServer3D::*)(RID) const, bool*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID>
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
      *puVar4 = &PTR_call_0011cda0;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float, RID,
   PhysicsServer3D::SpaceParameter>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float*, RID, PhysicsServer3D::SpaceParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011cdf0;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int), RID&,
   int&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, int), RID&, int&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),RID&,int&>
               (PhysicsServer3D *param_1,_func_void_RID_int *param_2,RID *param_3,int *param_4)

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
      *puVar6 = &PTR_call_0011ce18;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID), RID&,
   RID&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, RID), RID&, RID&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),RID&,RID&>
               (PhysicsServer3D *param_1,_func_void_RID_RID *param_2,RID *param_3,RID *param_4)

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
      *puVar5 = &PTR_call_0011ce40;
      puVar5[2] = param_2;
      puVar5[6] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, RID (PhysicsServer3D::*)(RID) const, RID,
   RID>(PhysicsServer3D*, RID (PhysicsServer3D::*)(RID) const, RID*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID>
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
      *puVar4 = &PTR_call_0011ce68;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, bool), RID&, int&,
   bool&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, int, bool), RID&, int&, bool&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),RID&,int&,bool&>
               (PhysicsServer3D *param_1,_func_void_RID_int_bool *param_2,RID *param_3,int *param_4,
               bool *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 *in_R9;
  uint uVar9;
  undefined1 *in_stack_00000008;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar7 = (ulong)uVar2;
  uVar9 = uVar2 + 0x40;
  if (uVar2 < 0xffffffc0) {
    pvVar6 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar2 + 0x3f | uVar2 + 0x3f >> 1;
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
    uVar7 = (ulong)(uVar2 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar6 + (ulong)uVar2) = 0x38;
    if (uVar2 + 8 < uVar9) {
      puVar5 = (undefined8 *)((long)pvVar6 + uVar7);
      *puVar5 = &PTR_call_0011cf08;
      puVar5[3] = param_3;
      puVar5[4] = param_4;
      *(undefined1 *)(puVar5 + 1) = 0;
      uVar1 = *in_stack_00000008;
      puVar5[2] = param_2;
      *(undefined1 *)(puVar5 + 5) = uVar1;
      *(undefined4 *)((long)puVar5 + 0x2c) = *in_R9;
      puVar5[6] = *(undefined8 *)param_5;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, int (PhysicsServer3D::*)(RID) const, int,
   RID>(PhysicsServer3D*, int (PhysicsServer3D::*)(RID) const, int*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID>
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
      *puVar4 = &PTR_call_0011cf30;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, RID (PhysicsServer3D::*)(RID, int) const, RID,
   RID, int>(PhysicsServer3D*, RID (PhysicsServer3D::*)(RID, int) const, RID*, RID, int) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011cf58;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID, int)
   const, Transform3D, RID, int>(PhysicsServer3D*, Transform3D (PhysicsServer3D::*)(RID, int) const,
   Transform3D*, RID, int) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011cf80;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID),
   RID&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID), RID&) */

void CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID),RID&>
               (PhysicsServer3D *param_1,_func_void_RID *param_2,RID *param_3)

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
      *puVar5 = &PTR_call_0011cfa8;
      puVar5[2] = param_2;
      puVar5[5] = uVar2;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, ObjectID (PhysicsServer3D::*)(RID) const,
   ObjectID, RID>(PhysicsServer3D*, ObjectID (PhysicsServer3D::*)(RID) const, ObjectID*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID>
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
      *puVar4 = &PTR_call_0011cff8;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant, RID,
   PhysicsServer3D::AreaParameter>(PhysicsServer3D*, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant*, RID, PhysicsServer3D::AreaParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d070;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID) const,
   Transform3D, RID>(PhysicsServer3D*, Transform3D (PhysicsServer3D::*)(RID) const, Transform3D*,
   RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>
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
      *puVar4 = &PTR_call_0011d098;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, unsigned int), RID&,
   unsigned int&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, unsigned int), RID&, unsigned
   int&) */

void CommandQueueMT::
     push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),RID&,unsigned_int&>
               (PhysicsServer3D *param_1,_func_void_RID_uint *param_2,RID *param_3,uint *param_4)

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
      *puVar6 = &PTR_call_0011d0c0;
      puVar6[2] = param_2;
      puVar6[6] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, unsigned int (PhysicsServer3D::*)(RID) const,
   unsigned int, RID>(PhysicsServer3D*, unsigned int (PhysicsServer3D::*)(RID) const, unsigned int*,
   RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>
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
      *puVar4 = &PTR_call_0011d0e8;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&), RID&,
   Callable const&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, Callable const&), RID&,
   Callable const&) */

void CommandQueueMT::
     push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),RID&,Callable_const&>
               (PhysicsServer3D *param_1,_func_void_RID_Callable_ptr *param_2,RID *param_3,
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
      *puVar8 = &PTR_call_0011d110;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = param_2;
      puVar8[3] = param_3;
      puVar8[4] = param_4;
      Callable::Callable((Callable *)(puVar8 + 5),in_R9);
      puVar8[7] = *in_R8;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, PhysicsServer3D::BodyMode
   (PhysicsServer3D::*)(RID) const, PhysicsServer3D::BodyMode, RID>(PhysicsServer3D*,
   PhysicsServer3D::BodyMode (PhysicsServer3D::*)(RID) const, PhysicsServer3D::BodyMode*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
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
      *puVar4 = &PTR_call_0011d160;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant, RID,
   PhysicsServer3D::BodyParameter>(PhysicsServer3D*, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant*, RID, PhysicsServer3D::BodyParameter) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d1b0;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState) const, Variant, RID, PhysicsServer3D::BodyState>(PhysicsServer3D*,
   Variant (PhysicsServer3D::*)(RID, PhysicsServer3D::BodyState) const, Variant*, RID,
   PhysicsServer3D::BodyState) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d200;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&), RID&,
   Vector3 const&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, Vector3 const&), RID&, Vector3
   const&) */

void CommandQueueMT::
     push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),RID&,Vector3_const&>
               (PhysicsServer3D *param_1,_func_void_RID_Vector3_ptr *param_2,RID *param_3,
               Vector3 *param_4)

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
  undefined8 *in_R9;
  uint uVar10;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar8 = (ulong)uVar1;
  uVar10 = uVar1 + 0x48;
  if (uVar1 < 0xffffffb8) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar10) {
      uVar9 = uVar1 + 0x47 | uVar1 + 0x47 >> 1;
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
    *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar10) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar8);
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      uVar3 = *in_R9;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6[5] = uVar3;
      uVar2 = *(undefined4 *)(in_R9 + 1);
      *puVar6 = &PTR_call_0011d228;
      *(undefined4 *)(puVar6 + 6) = uVar2;
      uVar3 = *in_R8;
      puVar6[2] = param_2;
      puVar6[7] = uVar3;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&, Vector3
   const&), RID&, Vector3 const&, Vector3 const&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID,
   Vector3 const&, Vector3 const&), RID&, Vector3 const&, Vector3 const&) */

void CommandQueueMT::
     push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),RID&,Vector3_const&,Vector3_const&>
               (PhysicsServer3D *param_1,_func_void_RID_Vector3_ptr_Vector3_ptr *param_2,
               RID *param_3,Vector3 *param_4,Vector3 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  uint uVar8;
  undefined8 *in_R9;
  uint uVar9;
  ulong uVar10;
  undefined8 *in_stack_00000008;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar10 = (ulong)uVar1;
  uVar9 = uVar1 + 0x50;
  if (uVar1 < 0xffffffb0) {
    pvVar7 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar9) {
      uVar8 = uVar1 + 0x4f | uVar1 + 0x4f >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar8;
      pvVar7 = (void *)Memory::realloc_static(pvVar7,(ulong)uVar8,false);
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
    uVar10 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar9;
    *(undefined8 *)((long)pvVar7 + (ulong)uVar1) = 0x48;
    if (uVar1 + 8 < uVar9) {
      puVar6 = (undefined8 *)((long)pvVar7 + uVar10);
      *puVar6 = &PTR_call_0011d250;
      puVar6[3] = param_3;
      puVar6[4] = param_4;
      uVar3 = *in_stack_00000008;
      *(undefined1 *)(puVar6 + 1) = 0;
      puVar6[5] = uVar3;
      uVar2 = *(undefined4 *)(in_stack_00000008 + 1);
      puVar6[2] = param_2;
      *(undefined4 *)(puVar6 + 6) = uVar2;
      *(undefined8 *)((long)puVar6 + 0x34) = *in_R9;
      *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)(in_R9 + 1);
      puVar6[8] = *(undefined8 *)param_5;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
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
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,(ulong)uVar9,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID) const,
   Vector3, RID>(PhysicsServer3D*, Vector3 (PhysicsServer3D::*)(RID) const, Vector3*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID>
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
      *puVar4 = &PTR_call_0011d278;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis) const, bool, RID, PhysicsServer3D::BodyAxis>(PhysicsServer3D*, bool
   (PhysicsServer3D::*)(RID, PhysicsServer3D::BodyAxis) const, bool*, RID,
   PhysicsServer3D::BodyAxis) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d2c8;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_sync<PhysicsServer3D, void (PhysicsServer3D::*)(RID, List<RID,
   DefaultAllocator>*), RID, List<RID, DefaultAllocator>*>(PhysicsServer3D*, void
   (PhysicsServer3D::*)(RID, List<RID, DefaultAllocator>*), RID, List<RID, DefaultAllocator>*) */

void CommandQueueMT::
     push_and_sync<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),RID,List<RID,DefaultAllocator>*>
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
      *puVar4 = &PTR_call_0011d2f0;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, AABB (PhysicsServer3D::*)(RID) const, AABB,
   RID>(PhysicsServer3D*, AABB (PhysicsServer3D::*)(RID) const, AABB*, RID) */

void CommandQueueMT::push_and_ret<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID>
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
      *puVar4 = &PTR_call_0011d368;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID, int) const,
   Vector3, RID, int>(PhysicsServer3D*, Vector3 (PhysicsServer3D::*)(RID, int) const, Vector3*, RID,
   int) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d3b8;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, int) const,
   bool, RID, int>(PhysicsServer3D*, bool (PhysicsServer3D::*)(RID, int) const, bool*, RID, int) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d3e0;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float, RID,
   PhysicsServer3D::PinJointParam>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float*, RID, PhysicsServer3D::PinJointParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d458;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D
   const&, RID, Transform3D const&), RID&, RID&, Transform3D const&, RID&, Transform3D
   const&>(PhysicsServer3D*, void (PhysicsServer3D::*)(RID, RID, Transform3D const&, RID,
   Transform3D const&), RID&, RID&, Transform3D const&, RID&, Transform3D const&) */

void CommandQueueMT::
     push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
               (PhysicsServer3D *param_1,
               _func_void_RID_RID_Transform3D_ptr_RID_Transform3D_ptr *param_2,RID *param_3,
               RID *param_4,Transform3D_conflict *param_5,RID *param_6,Transform3D_conflict *param_7
               )

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  iVar10 = pthread_mutex_lock((pthread_mutex_t *)param_1);
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar10);
  }
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar13 = (ulong)uVar1;
  uVar14 = uVar1 + 0xa8;
  if (uVar1 < 0xffffff58) {
    pvVar12 = *(void **)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x2c) < uVar14) {
      uVar15 = uVar1 + 0xa7 | uVar1 + 0xa7 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = (uVar15 | uVar15 >> 0x10) + 1;
      *(uint *)(param_1 + 0x2c) = uVar15;
      pvVar12 = (void *)Memory::realloc_static(pvVar12,(ulong)uVar15,false);
      *(void **)(param_1 + 0x30) = pvVar12;
      if (pvVar12 == (void *)0x0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
    }
    uVar13 = (ulong)(uVar1 + 8);
    *(uint *)(param_1 + 0x28) = uVar14;
    *(undefined8 *)((long)pvVar12 + (ulong)uVar1) = 0xa0;
    if (uVar1 + 8 < uVar14) {
      puVar11 = (undefined8 *)((long)pvVar12 + uVar13);
      *puVar11 = &PTR_call_0011d480;
      puVar11[2] = param_2;
      puVar11[3] = param_3;
      puVar11[4] = param_4;
      uVar2 = *in_stack_00000010;
      uVar4 = *in_stack_00000018;
      uVar5 = in_stack_00000018[1];
      uVar6 = in_stack_00000018[2];
      uVar7 = in_stack_00000018[3];
      *(undefined1 *)(puVar11 + 1) = 0;
      uVar8 = in_stack_00000018[4];
      uVar9 = in_stack_00000018[5];
      puVar11[0xb] = uVar2;
      uVar2 = *(undefined8 *)param_6;
      puVar11[5] = uVar4;
      puVar11[6] = uVar5;
      puVar11[7] = uVar6;
      puVar11[8] = uVar7;
      puVar11[9] = uVar8;
      puVar11[10] = uVar9;
      uVar4 = *(undefined8 *)param_7;
      uVar5 = *(undefined8 *)(param_7 + 8);
      uVar6 = *(undefined8 *)(param_7 + 0x10);
      uVar7 = *(undefined8 *)(param_7 + 0x18);
      uVar8 = *(undefined8 *)(param_7 + 0x20);
      uVar9 = *(undefined8 *)(param_7 + 0x28);
      puVar11[0x12] = uVar2;
      uVar2 = *(undefined8 *)param_5;
      puVar11[0xc] = uVar4;
      puVar11[0xd] = uVar5;
      puVar11[0xe] = uVar6;
      puVar11[0xf] = uVar7;
      puVar11[0x13] = uVar2;
      puVar11[0x10] = uVar8;
      puVar11[0x11] = uVar9;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      pthread_mutex_unlock((pthread_mutex_t *)param_1);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x28) = uVar14;
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar13,(ulong)uVar14,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float, RID,
   PhysicsServer3D::HingeJointParam>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float*, RID, PhysicsServer3D::HingeJointParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d4f8;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool, RID,
   PhysicsServer3D::HingeJointFlag>(PhysicsServer3D*, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool*, RID, PhysicsServer3D::HingeJointFlag) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d548;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float, RID,
   PhysicsServer3D::SliderJointParam>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float*, RID, PhysicsServer3D::SliderJointParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d598;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float, RID,
   PhysicsServer3D::ConeTwistJointParam>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float*, RID, PhysicsServer3D::ConeTwistJointParam)
    */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

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
      *puVar4 = &PTR_call_0011d5e8;
      *(undefined1 *)(puVar4 + 1) = 1;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)(puVar4 + 6) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, float (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const, float, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam>(PhysicsServer3D*, float (PhysicsServer3D::*)(RID,
   Vector3::Axis, PhysicsServer3D::G6DOFJointAxisParam) const, float*, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

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
      *puVar4 = &PTR_call_0011d638;
      *(undefined1 *)(puVar4 + 1) = 1;
      *(undefined4 *)(puVar4 + 6) = param_8;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)((long)puVar4 + 0x34) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const, bool, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag>(PhysicsServer3D*, bool (PhysicsServer3D::*)(RID,
   Vector3::Axis, PhysicsServer3D::G6DOFJointAxisFlag) const, bool*, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
               (pthread_mutex_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

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
      *puVar4 = &PTR_call_0011d688;
      *(undefined1 *)(puVar4 + 1) = 1;
      *(undefined4 *)(puVar4 + 6) = param_8;
      puVar4[2] = param_2;
      puVar4[3] = param_3;
      puVar4[4] = param_4;
      puVar4[5] = param_5;
      *(undefined4 *)((long)puVar4 + 0x34) = param_7;
      puVar4[7] = param_6;
      LOCK();
      *(undefined1 *)((long)param_1 + 0x88) = 1;
      UNLOCK();
      if (param_1[3].__align != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_ret<PhysicsServer3D, PhysicsServer3D::JointType
   (PhysicsServer3D::*)(RID) const, PhysicsServer3D::JointType, RID>(PhysicsServer3D*,
   PhysicsServer3D::JointType (PhysicsServer3D::*)(RID) const, PhysicsServer3D::JointType*, RID) */

void CommandQueueMT::
     push_and_ret<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
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
      *puVar4 = &PTR_call_0011d6b0;
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
      uVar9 = (int)*(undefined8 *)((long)param_1 + 0x6c) + (int)_LC23;
      *(ulong *)((long)param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)((long)param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9)
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



/* void CommandQueueMT::push_and_sync<PhysicsServer3D, void
   (PhysicsServer3D::*)()>(PhysicsServer3D*, void (PhysicsServer3D::*)()) */

void CommandQueueMT::push_and_sync<PhysicsServer3D,void(PhysicsServer3D::*)()>
               (PhysicsServer3D *param_1,_func_void *param_2)

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
      *puVar4 = &PTR_call_0011d750;
      puVar4[2] = param_2;
      puVar4[3] = in_RDX;
      puVar4[4] = in_RCX;
      LOCK();
      param_1[0x88] = (PhysicsServer3D)0x1;
      UNLOCK();
      if (*(long *)(param_1 + 0x78) != -1) {
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
      }
      uVar9 = (int)*(undefined8 *)(param_1 + 0x6c) + (int)_LC23;
      *(ulong *)(param_1 + 0x6c) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x6c) >> 0x20) + _LC23._4_4_,uVar9);
      do {
        std::condition_variable::wait((unique_lock *)(param_1 + 0x38));
      } while (*(uint *)(param_1 + 0x68) < uVar9);
      iVar3 = *(int *)(param_1 + 0x70);
      *(int *)(param_1 + 0x70) = iVar3 + -1;
      if ((*(uint *)(param_1 + 0x6c) == *(uint *)(param_1 + 0x68)) && (iVar3 + -1 == 0)) {
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      if (param_1 != (PhysicsServer3D *)0x0) {
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



/* PhysicsServer3D::_initialize_classv() */

void PhysicsServer3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_50;
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
    local_38 = "PhysicsServer3D";
    local_50 = 0;
    local_30 = 0xf;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
    if ((code *)PTR__bind_methods_00125008 != Object::_bind_methods) {
      PhysicsServer3D::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void PhysicsServer3D::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "PhysicsServer3D";
  local_88 = 0;
  local_90 = 0;
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsServer3D";
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
LAB_0010b01d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b01d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010b03f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010b03f:
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
  StringName::StringName((StringName *)&local_78,"PhysicsServer3D",false);
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



/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::call
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this,Variant **param_1,
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
      goto LAB_0010b3ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010b3ef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010b3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010b4b1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010b3ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC28,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010b4b1:
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
LAB_0010b7ea:
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    uVar8 = (ulong)*(uint *)(this + 0x28);
    uVar6 = *(ulong *)(this + 0x80);
    local_40 = '\x01';
    if (uVar6 < uVar8) {
      do {
        if ((uint)uVar8 <= (uint)uVar6) {
LAB_0010b71d:
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
        if ((uint)uVar8 <= (uint)uVar5) goto LAB_0010b71d;
        puVar9 = (undefined8 *)(uVar6 + *(long *)(this + 0x30));
        uVar4 = WorkerThreadPool::_thread_enter_unlock_allowance_zone((unique_lock *)&local_48);
        (**(code **)*puVar9)(puVar9);
        WorkerThreadPool::thread_exit_unlock_allowance_zone(uVar4);
        uVar6 = *(ulong *)(this + 0x80);
        uVar8 = (ulong)*(uint *)(this + 0x28);
        if (*(uint *)(this + 0x28) <= (uint)uVar6) {
          uVar6 = uVar6 & 0xffffffff;
          goto LAB_0010b71d;
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
          iVar3 = pthread_mutex_lock((pthread_mutex_t *)this);
          if (iVar3 != 0) goto LAB_0010b7ea;
          uVar8 = (ulong)*(uint *)(this + 0x28);
          local_40 = '\x01';
          uVar6 = *(ulong *)(this + 0x80) & 0xffffffff;
          if (*(uint *)(this + 0x28) <= (uint)*(ulong *)(this + 0x80)) goto LAB_0010b71d;
          plVar7 = (long *)(uVar6 + *(long *)(this + 0x30));
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



/* WARNING: Removing unreachable block (ram,0x0010b835) */
/* WARNING: Removing unreachable block (ram,0x0010b8c0) */
/* WARNING: Removing unreachable block (ram,0x0010b910) */
/* WARNING: Removing unreachable block (ram,0x0010b8cb) */
/* WARNING: Removing unreachable block (ram,0x0010b8e2) */
/* WARNING: Removing unreachable block (ram,0x0010b84a) */
/* WARNING: Removing unreachable block (ram,0x0010b882) */
/* WARNING: Removing unreachable block (ram,0x0010b887) */
/* WARNING: Removing unreachable block (ram,0x0010b900) */
/* WARNING: Removing unreachable block (ram,0x0010b88f) */
/* WARNING: Removing unreachable block (ram,0x0010b8ab) */
/* WARNING: Removing unreachable block (ram,0x0010b91e) */
/* PhysicsServer3DWrapMT::pin_joint_get_local_b(RID) const */

void __thiscall PhysicsServer3DWrapMT::pin_joint_get_local_b(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010b965) */
/* WARNING: Removing unreachable block (ram,0x0010b9f0) */
/* WARNING: Removing unreachable block (ram,0x0010ba40) */
/* WARNING: Removing unreachable block (ram,0x0010b9fb) */
/* WARNING: Removing unreachable block (ram,0x0010ba12) */
/* WARNING: Removing unreachable block (ram,0x0010b97a) */
/* WARNING: Removing unreachable block (ram,0x0010b9b2) */
/* WARNING: Removing unreachable block (ram,0x0010b9b7) */
/* WARNING: Removing unreachable block (ram,0x0010ba30) */
/* WARNING: Removing unreachable block (ram,0x0010b9bf) */
/* WARNING: Removing unreachable block (ram,0x0010b9db) */
/* WARNING: Removing unreachable block (ram,0x0010ba4e) */
/* PhysicsServer3DWrapMT::pin_joint_get_local_a(RID) const */

void __thiscall PhysicsServer3DWrapMT::pin_joint_get_local_a(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ba95) */
/* WARNING: Removing unreachable block (ram,0x0010bb20) */
/* WARNING: Removing unreachable block (ram,0x0010bb70) */
/* WARNING: Removing unreachable block (ram,0x0010bb2b) */
/* WARNING: Removing unreachable block (ram,0x0010bb42) */
/* WARNING: Removing unreachable block (ram,0x0010baaa) */
/* WARNING: Removing unreachable block (ram,0x0010bae2) */
/* WARNING: Removing unreachable block (ram,0x0010bae7) */
/* WARNING: Removing unreachable block (ram,0x0010bb60) */
/* WARNING: Removing unreachable block (ram,0x0010baef) */
/* WARNING: Removing unreachable block (ram,0x0010bb0b) */
/* WARNING: Removing unreachable block (ram,0x0010bb7e) */
/* PhysicsServer3DWrapMT::body_get_constant_torque(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bbc5) */
/* WARNING: Removing unreachable block (ram,0x0010bc50) */
/* WARNING: Removing unreachable block (ram,0x0010bca0) */
/* WARNING: Removing unreachable block (ram,0x0010bc5b) */
/* WARNING: Removing unreachable block (ram,0x0010bc72) */
/* WARNING: Removing unreachable block (ram,0x0010bbda) */
/* WARNING: Removing unreachable block (ram,0x0010bc12) */
/* WARNING: Removing unreachable block (ram,0x0010bc17) */
/* WARNING: Removing unreachable block (ram,0x0010bc90) */
/* WARNING: Removing unreachable block (ram,0x0010bc1f) */
/* WARNING: Removing unreachable block (ram,0x0010bc3b) */
/* WARNING: Removing unreachable block (ram,0x0010bcae) */
/* PhysicsServer3DWrapMT::body_get_constant_force(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bcf5) */
/* WARNING: Removing unreachable block (ram,0x0010bd60) */
/* WARNING: Removing unreachable block (ram,0x0010bdb0) */
/* WARNING: Removing unreachable block (ram,0x0010bd6b) */
/* WARNING: Removing unreachable block (ram,0x0010bd82) */
/* WARNING: Removing unreachable block (ram,0x0010bd0a) */
/* WARNING: Removing unreachable block (ram,0x0010bd31) */
/* WARNING: Removing unreachable block (ram,0x0010bd36) */
/* WARNING: Removing unreachable block (ram,0x0010bda0) */
/* WARNING: Removing unreachable block (ram,0x0010bd3e) */
/* WARNING: Removing unreachable block (ram,0x0010bd53) */
/* WARNING: Removing unreachable block (ram,0x0010bdbe) */
/* PhysicsServer3DWrapMT::joint_is_disabled_collisions_between_bodies(RID) const */

void __thiscall PhysicsServer3DWrapMT::joint_is_disabled_collisions_between_bodies(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010be05) */
/* WARNING: Removing unreachable block (ram,0x0010be70) */
/* WARNING: Removing unreachable block (ram,0x0010bec0) */
/* WARNING: Removing unreachable block (ram,0x0010be7b) */
/* WARNING: Removing unreachable block (ram,0x0010be92) */
/* WARNING: Removing unreachable block (ram,0x0010be1a) */
/* WARNING: Removing unreachable block (ram,0x0010be41) */
/* WARNING: Removing unreachable block (ram,0x0010be46) */
/* WARNING: Removing unreachable block (ram,0x0010beb0) */
/* WARNING: Removing unreachable block (ram,0x0010be4e) */
/* WARNING: Removing unreachable block (ram,0x0010be63) */
/* WARNING: Removing unreachable block (ram,0x0010bece) */
/* PhysicsServer3DWrapMT::body_is_omitting_force_integration(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_is_omitting_force_integration(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010bf15) */
/* WARNING: Removing unreachable block (ram,0x0010bf80) */
/* WARNING: Removing unreachable block (ram,0x0010bfd0) */
/* WARNING: Removing unreachable block (ram,0x0010bf8b) */
/* WARNING: Removing unreachable block (ram,0x0010bfa2) */
/* WARNING: Removing unreachable block (ram,0x0010bf2a) */
/* WARNING: Removing unreachable block (ram,0x0010bf51) */
/* WARNING: Removing unreachable block (ram,0x0010bf56) */
/* WARNING: Removing unreachable block (ram,0x0010bfc0) */
/* WARNING: Removing unreachable block (ram,0x0010bf5e) */
/* WARNING: Removing unreachable block (ram,0x0010bf73) */
/* WARNING: Removing unreachable block (ram,0x0010bfde) */
/* PhysicsServer3DWrapMT::body_is_continuous_collision_detection_enabled(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_is_continuous_collision_detection_enabled(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c025) */
/* WARNING: Removing unreachable block (ram,0x0010c090) */
/* WARNING: Removing unreachable block (ram,0x0010c0e0) */
/* WARNING: Removing unreachable block (ram,0x0010c09b) */
/* WARNING: Removing unreachable block (ram,0x0010c0b2) */
/* WARNING: Removing unreachable block (ram,0x0010c03a) */
/* WARNING: Removing unreachable block (ram,0x0010c061) */
/* WARNING: Removing unreachable block (ram,0x0010c066) */
/* WARNING: Removing unreachable block (ram,0x0010c0d0) */
/* WARNING: Removing unreachable block (ram,0x0010c06e) */
/* WARNING: Removing unreachable block (ram,0x0010c083) */
/* WARNING: Removing unreachable block (ram,0x0010c0ee) */
/* PhysicsServer3DWrapMT::space_is_active(RID) const */

void __thiscall PhysicsServer3DWrapMT::space_is_active(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c135) */
/* WARNING: Removing unreachable block (ram,0x0010c1a0) */
/* WARNING: Removing unreachable block (ram,0x0010c1f0) */
/* WARNING: Removing unreachable block (ram,0x0010c1ab) */
/* WARNING: Removing unreachable block (ram,0x0010c1c2) */
/* WARNING: Removing unreachable block (ram,0x0010c14a) */
/* WARNING: Removing unreachable block (ram,0x0010c171) */
/* WARNING: Removing unreachable block (ram,0x0010c176) */
/* WARNING: Removing unreachable block (ram,0x0010c1e0) */
/* WARNING: Removing unreachable block (ram,0x0010c17e) */
/* WARNING: Removing unreachable block (ram,0x0010c192) */
/* WARNING: Removing unreachable block (ram,0x0010c1fe) */
/* PhysicsServer3DWrapMT::joint_get_solver_priority(RID) const */

void __thiscall PhysicsServer3DWrapMT::joint_get_solver_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c245) */
/* WARNING: Removing unreachable block (ram,0x0010c2b0) */
/* WARNING: Removing unreachable block (ram,0x0010c300) */
/* WARNING: Removing unreachable block (ram,0x0010c2bb) */
/* WARNING: Removing unreachable block (ram,0x0010c2d2) */
/* WARNING: Removing unreachable block (ram,0x0010c25a) */
/* WARNING: Removing unreachable block (ram,0x0010c281) */
/* WARNING: Removing unreachable block (ram,0x0010c286) */
/* WARNING: Removing unreachable block (ram,0x0010c2f0) */
/* WARNING: Removing unreachable block (ram,0x0010c28e) */
/* WARNING: Removing unreachable block (ram,0x0010c2a2) */
/* WARNING: Removing unreachable block (ram,0x0010c30e) */
/* PhysicsServer3DWrapMT::soft_body_get_simulation_precision(RID) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_simulation_precision(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c355) */
/* WARNING: Removing unreachable block (ram,0x0010c3c0) */
/* WARNING: Removing unreachable block (ram,0x0010c410) */
/* WARNING: Removing unreachable block (ram,0x0010c3cb) */
/* WARNING: Removing unreachable block (ram,0x0010c3e2) */
/* WARNING: Removing unreachable block (ram,0x0010c36a) */
/* WARNING: Removing unreachable block (ram,0x0010c391) */
/* WARNING: Removing unreachable block (ram,0x0010c396) */
/* WARNING: Removing unreachable block (ram,0x0010c400) */
/* WARNING: Removing unreachable block (ram,0x0010c39e) */
/* WARNING: Removing unreachable block (ram,0x0010c3b2) */
/* WARNING: Removing unreachable block (ram,0x0010c41e) */
/* PhysicsServer3DWrapMT::body_get_max_contacts_reported(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_max_contacts_reported(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c465) */
/* WARNING: Removing unreachable block (ram,0x0010c4d0) */
/* WARNING: Removing unreachable block (ram,0x0010c520) */
/* WARNING: Removing unreachable block (ram,0x0010c4db) */
/* WARNING: Removing unreachable block (ram,0x0010c4f2) */
/* WARNING: Removing unreachable block (ram,0x0010c47a) */
/* WARNING: Removing unreachable block (ram,0x0010c4a1) */
/* WARNING: Removing unreachable block (ram,0x0010c4a6) */
/* WARNING: Removing unreachable block (ram,0x0010c510) */
/* WARNING: Removing unreachable block (ram,0x0010c4ae) */
/* WARNING: Removing unreachable block (ram,0x0010c4c2) */
/* WARNING: Removing unreachable block (ram,0x0010c52e) */
/* PhysicsServer3DWrapMT::body_get_shape_count(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_shape_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c575) */
/* WARNING: Removing unreachable block (ram,0x0010c5e0) */
/* WARNING: Removing unreachable block (ram,0x0010c630) */
/* WARNING: Removing unreachable block (ram,0x0010c5eb) */
/* WARNING: Removing unreachable block (ram,0x0010c602) */
/* WARNING: Removing unreachable block (ram,0x0010c58a) */
/* WARNING: Removing unreachable block (ram,0x0010c5b1) */
/* WARNING: Removing unreachable block (ram,0x0010c5b6) */
/* WARNING: Removing unreachable block (ram,0x0010c620) */
/* WARNING: Removing unreachable block (ram,0x0010c5be) */
/* WARNING: Removing unreachable block (ram,0x0010c5d2) */
/* WARNING: Removing unreachable block (ram,0x0010c63e) */
/* PhysicsServer3DWrapMT::area_get_shape_count(RID) const */

void __thiscall PhysicsServer3DWrapMT::area_get_shape_count(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c685) */
/* WARNING: Removing unreachable block (ram,0x0010c6f0) */
/* WARNING: Removing unreachable block (ram,0x0010c740) */
/* WARNING: Removing unreachable block (ram,0x0010c6fb) */
/* WARNING: Removing unreachable block (ram,0x0010c712) */
/* WARNING: Removing unreachable block (ram,0x0010c69a) */
/* WARNING: Removing unreachable block (ram,0x0010c6c1) */
/* WARNING: Removing unreachable block (ram,0x0010c6c6) */
/* WARNING: Removing unreachable block (ram,0x0010c730) */
/* WARNING: Removing unreachable block (ram,0x0010c6ce) */
/* WARNING: Removing unreachable block (ram,0x0010c6e2) */
/* WARNING: Removing unreachable block (ram,0x0010c74e) */
/* PhysicsServer3DWrapMT::joint_get_type(RID) const */

void __thiscall PhysicsServer3DWrapMT::joint_get_type(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c795) */
/* WARNING: Removing unreachable block (ram,0x0010c800) */
/* WARNING: Removing unreachable block (ram,0x0010c850) */
/* WARNING: Removing unreachable block (ram,0x0010c80b) */
/* WARNING: Removing unreachable block (ram,0x0010c822) */
/* WARNING: Removing unreachable block (ram,0x0010c7aa) */
/* WARNING: Removing unreachable block (ram,0x0010c7d1) */
/* WARNING: Removing unreachable block (ram,0x0010c7d6) */
/* WARNING: Removing unreachable block (ram,0x0010c840) */
/* WARNING: Removing unreachable block (ram,0x0010c7de) */
/* WARNING: Removing unreachable block (ram,0x0010c7f4) */
/* WARNING: Removing unreachable block (ram,0x0010c85e) */
/* PhysicsServer3DWrapMT::soft_body_get_drag_coefficient(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_drag_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c8a5) */
/* WARNING: Removing unreachable block (ram,0x0010c910) */
/* WARNING: Removing unreachable block (ram,0x0010c960) */
/* WARNING: Removing unreachable block (ram,0x0010c91b) */
/* WARNING: Removing unreachable block (ram,0x0010c932) */
/* WARNING: Removing unreachable block (ram,0x0010c8ba) */
/* WARNING: Removing unreachable block (ram,0x0010c8e1) */
/* WARNING: Removing unreachable block (ram,0x0010c8e6) */
/* WARNING: Removing unreachable block (ram,0x0010c950) */
/* WARNING: Removing unreachable block (ram,0x0010c8ee) */
/* WARNING: Removing unreachable block (ram,0x0010c904) */
/* WARNING: Removing unreachable block (ram,0x0010c96e) */
/* PhysicsServer3DWrapMT::soft_body_get_damping_coefficient(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_damping_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010c9b5) */
/* WARNING: Removing unreachable block (ram,0x0010ca20) */
/* WARNING: Removing unreachable block (ram,0x0010ca70) */
/* WARNING: Removing unreachable block (ram,0x0010ca2b) */
/* WARNING: Removing unreachable block (ram,0x0010ca42) */
/* WARNING: Removing unreachable block (ram,0x0010c9ca) */
/* WARNING: Removing unreachable block (ram,0x0010c9f1) */
/* WARNING: Removing unreachable block (ram,0x0010c9f6) */
/* WARNING: Removing unreachable block (ram,0x0010ca60) */
/* WARNING: Removing unreachable block (ram,0x0010c9fe) */
/* WARNING: Removing unreachable block (ram,0x0010ca14) */
/* WARNING: Removing unreachable block (ram,0x0010ca7e) */
/* PhysicsServer3DWrapMT::soft_body_get_pressure_coefficient(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_pressure_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cac5) */
/* WARNING: Removing unreachable block (ram,0x0010cb30) */
/* WARNING: Removing unreachable block (ram,0x0010cb80) */
/* WARNING: Removing unreachable block (ram,0x0010cb3b) */
/* WARNING: Removing unreachable block (ram,0x0010cb52) */
/* WARNING: Removing unreachable block (ram,0x0010cada) */
/* WARNING: Removing unreachable block (ram,0x0010cb01) */
/* WARNING: Removing unreachable block (ram,0x0010cb06) */
/* WARNING: Removing unreachable block (ram,0x0010cb70) */
/* WARNING: Removing unreachable block (ram,0x0010cb0e) */
/* WARNING: Removing unreachable block (ram,0x0010cb24) */
/* WARNING: Removing unreachable block (ram,0x0010cb8e) */
/* PhysicsServer3DWrapMT::soft_body_get_linear_stiffness(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_linear_stiffness(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cbd5) */
/* WARNING: Removing unreachable block (ram,0x0010cc40) */
/* WARNING: Removing unreachable block (ram,0x0010cc90) */
/* WARNING: Removing unreachable block (ram,0x0010cc4b) */
/* WARNING: Removing unreachable block (ram,0x0010cc62) */
/* WARNING: Removing unreachable block (ram,0x0010cbea) */
/* WARNING: Removing unreachable block (ram,0x0010cc11) */
/* WARNING: Removing unreachable block (ram,0x0010cc16) */
/* WARNING: Removing unreachable block (ram,0x0010cc80) */
/* WARNING: Removing unreachable block (ram,0x0010cc1e) */
/* WARNING: Removing unreachable block (ram,0x0010cc34) */
/* WARNING: Removing unreachable block (ram,0x0010cc9e) */
/* PhysicsServer3DWrapMT::soft_body_get_total_mass(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_total_mass(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cce5) */
/* WARNING: Removing unreachable block (ram,0x0010cd50) */
/* WARNING: Removing unreachable block (ram,0x0010cda0) */
/* WARNING: Removing unreachable block (ram,0x0010cd5b) */
/* WARNING: Removing unreachable block (ram,0x0010cd72) */
/* WARNING: Removing unreachable block (ram,0x0010ccfa) */
/* WARNING: Removing unreachable block (ram,0x0010cd21) */
/* WARNING: Removing unreachable block (ram,0x0010cd26) */
/* WARNING: Removing unreachable block (ram,0x0010cd90) */
/* WARNING: Removing unreachable block (ram,0x0010cd2e) */
/* WARNING: Removing unreachable block (ram,0x0010cd44) */
/* WARNING: Removing unreachable block (ram,0x0010cdae) */
/* PhysicsServer3DWrapMT::body_get_contacts_reported_depth_threshold(RID) const */

void PhysicsServer3DWrapMT::body_get_contacts_reported_depth_threshold(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cdf5) */
/* WARNING: Removing unreachable block (ram,0x0010ce60) */
/* WARNING: Removing unreachable block (ram,0x0010ceb0) */
/* WARNING: Removing unreachable block (ram,0x0010ce6b) */
/* WARNING: Removing unreachable block (ram,0x0010ce82) */
/* WARNING: Removing unreachable block (ram,0x0010ce0a) */
/* WARNING: Removing unreachable block (ram,0x0010ce31) */
/* WARNING: Removing unreachable block (ram,0x0010ce36) */
/* WARNING: Removing unreachable block (ram,0x0010cea0) */
/* WARNING: Removing unreachable block (ram,0x0010ce3e) */
/* WARNING: Removing unreachable block (ram,0x0010ce54) */
/* WARNING: Removing unreachable block (ram,0x0010cebe) */
/* PhysicsServer3DWrapMT::body_get_collision_priority(RID) const */

void PhysicsServer3DWrapMT::body_get_collision_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010cf05) */
/* WARNING: Removing unreachable block (ram,0x0010cf70) */
/* WARNING: Removing unreachable block (ram,0x0010cfc0) */
/* WARNING: Removing unreachable block (ram,0x0010cf7b) */
/* WARNING: Removing unreachable block (ram,0x0010cf92) */
/* WARNING: Removing unreachable block (ram,0x0010cf1a) */
/* WARNING: Removing unreachable block (ram,0x0010cf41) */
/* WARNING: Removing unreachable block (ram,0x0010cf46) */
/* WARNING: Removing unreachable block (ram,0x0010cfb0) */
/* WARNING: Removing unreachable block (ram,0x0010cf4e) */
/* WARNING: Removing unreachable block (ram,0x0010cf64) */
/* WARNING: Removing unreachable block (ram,0x0010cfce) */
/* PhysicsServer3DWrapMT::shape_get_custom_solver_bias(RID) const */

void PhysicsServer3DWrapMT::shape_get_custom_solver_bias(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d015) */
/* WARNING: Removing unreachable block (ram,0x0010d080) */
/* WARNING: Removing unreachable block (ram,0x0010d0d0) */
/* WARNING: Removing unreachable block (ram,0x0010d08b) */
/* WARNING: Removing unreachable block (ram,0x0010d0a2) */
/* WARNING: Removing unreachable block (ram,0x0010d02a) */
/* WARNING: Removing unreachable block (ram,0x0010d051) */
/* WARNING: Removing unreachable block (ram,0x0010d056) */
/* WARNING: Removing unreachable block (ram,0x0010d0c0) */
/* WARNING: Removing unreachable block (ram,0x0010d05e) */
/* WARNING: Removing unreachable block (ram,0x0010d074) */
/* WARNING: Removing unreachable block (ram,0x0010d0de) */
/* PhysicsServer3DWrapMT::shape_get_margin(RID) const */

void PhysicsServer3DWrapMT::shape_get_margin(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d125) */
/* WARNING: Removing unreachable block (ram,0x0010d190) */
/* WARNING: Removing unreachable block (ram,0x0010d1e0) */
/* WARNING: Removing unreachable block (ram,0x0010d19b) */
/* WARNING: Removing unreachable block (ram,0x0010d1b2) */
/* WARNING: Removing unreachable block (ram,0x0010d13a) */
/* WARNING: Removing unreachable block (ram,0x0010d161) */
/* WARNING: Removing unreachable block (ram,0x0010d166) */
/* WARNING: Removing unreachable block (ram,0x0010d1d0) */
/* WARNING: Removing unreachable block (ram,0x0010d16e) */
/* WARNING: Removing unreachable block (ram,0x0010d182) */
/* WARNING: Removing unreachable block (ram,0x0010d1ee) */
/* PhysicsServer3DWrapMT::soft_body_get_collision_mask(RID) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d235) */
/* WARNING: Removing unreachable block (ram,0x0010d2a0) */
/* WARNING: Removing unreachable block (ram,0x0010d2f0) */
/* WARNING: Removing unreachable block (ram,0x0010d2ab) */
/* WARNING: Removing unreachable block (ram,0x0010d2c2) */
/* WARNING: Removing unreachable block (ram,0x0010d24a) */
/* WARNING: Removing unreachable block (ram,0x0010d271) */
/* WARNING: Removing unreachable block (ram,0x0010d276) */
/* WARNING: Removing unreachable block (ram,0x0010d2e0) */
/* WARNING: Removing unreachable block (ram,0x0010d27e) */
/* WARNING: Removing unreachable block (ram,0x0010d292) */
/* WARNING: Removing unreachable block (ram,0x0010d2fe) */
/* PhysicsServer3DWrapMT::soft_body_get_collision_layer(RID) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d345) */
/* WARNING: Removing unreachable block (ram,0x0010d3b0) */
/* WARNING: Removing unreachable block (ram,0x0010d400) */
/* WARNING: Removing unreachable block (ram,0x0010d3bb) */
/* WARNING: Removing unreachable block (ram,0x0010d3d2) */
/* WARNING: Removing unreachable block (ram,0x0010d35a) */
/* WARNING: Removing unreachable block (ram,0x0010d381) */
/* WARNING: Removing unreachable block (ram,0x0010d386) */
/* WARNING: Removing unreachable block (ram,0x0010d3f0) */
/* WARNING: Removing unreachable block (ram,0x0010d38e) */
/* WARNING: Removing unreachable block (ram,0x0010d3a2) */
/* WARNING: Removing unreachable block (ram,0x0010d40e) */
/* PhysicsServer3DWrapMT::body_get_user_flags(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_user_flags(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d455) */
/* WARNING: Removing unreachable block (ram,0x0010d4c0) */
/* WARNING: Removing unreachable block (ram,0x0010d510) */
/* WARNING: Removing unreachable block (ram,0x0010d4cb) */
/* WARNING: Removing unreachable block (ram,0x0010d4e2) */
/* WARNING: Removing unreachable block (ram,0x0010d46a) */
/* WARNING: Removing unreachable block (ram,0x0010d491) */
/* WARNING: Removing unreachable block (ram,0x0010d496) */
/* WARNING: Removing unreachable block (ram,0x0010d500) */
/* WARNING: Removing unreachable block (ram,0x0010d49e) */
/* WARNING: Removing unreachable block (ram,0x0010d4b2) */
/* WARNING: Removing unreachable block (ram,0x0010d51e) */
/* PhysicsServer3DWrapMT::body_get_collision_mask(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d565) */
/* WARNING: Removing unreachable block (ram,0x0010d5d0) */
/* WARNING: Removing unreachable block (ram,0x0010d620) */
/* WARNING: Removing unreachable block (ram,0x0010d5db) */
/* WARNING: Removing unreachable block (ram,0x0010d5f2) */
/* WARNING: Removing unreachable block (ram,0x0010d57a) */
/* WARNING: Removing unreachable block (ram,0x0010d5a1) */
/* WARNING: Removing unreachable block (ram,0x0010d5a6) */
/* WARNING: Removing unreachable block (ram,0x0010d610) */
/* WARNING: Removing unreachable block (ram,0x0010d5ae) */
/* WARNING: Removing unreachable block (ram,0x0010d5c2) */
/* WARNING: Removing unreachable block (ram,0x0010d62e) */
/* PhysicsServer3DWrapMT::body_get_collision_layer(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d675) */
/* WARNING: Removing unreachable block (ram,0x0010d6e0) */
/* WARNING: Removing unreachable block (ram,0x0010d730) */
/* WARNING: Removing unreachable block (ram,0x0010d6eb) */
/* WARNING: Removing unreachable block (ram,0x0010d702) */
/* WARNING: Removing unreachable block (ram,0x0010d68a) */
/* WARNING: Removing unreachable block (ram,0x0010d6b1) */
/* WARNING: Removing unreachable block (ram,0x0010d6b6) */
/* WARNING: Removing unreachable block (ram,0x0010d720) */
/* WARNING: Removing unreachable block (ram,0x0010d6be) */
/* WARNING: Removing unreachable block (ram,0x0010d6d2) */
/* WARNING: Removing unreachable block (ram,0x0010d73e) */
/* PhysicsServer3DWrapMT::area_get_collision_mask(RID) const */

void __thiscall PhysicsServer3DWrapMT::area_get_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d785) */
/* WARNING: Removing unreachable block (ram,0x0010d7f0) */
/* WARNING: Removing unreachable block (ram,0x0010d840) */
/* WARNING: Removing unreachable block (ram,0x0010d7fb) */
/* WARNING: Removing unreachable block (ram,0x0010d812) */
/* WARNING: Removing unreachable block (ram,0x0010d79a) */
/* WARNING: Removing unreachable block (ram,0x0010d7c1) */
/* WARNING: Removing unreachable block (ram,0x0010d7c6) */
/* WARNING: Removing unreachable block (ram,0x0010d830) */
/* WARNING: Removing unreachable block (ram,0x0010d7ce) */
/* WARNING: Removing unreachable block (ram,0x0010d7e2) */
/* WARNING: Removing unreachable block (ram,0x0010d84e) */
/* PhysicsServer3DWrapMT::area_get_collision_layer(RID) const */

void __thiscall PhysicsServer3DWrapMT::area_get_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d89a) */
/* WARNING: Removing unreachable block (ram,0x0010d940) */
/* WARNING: Removing unreachable block (ram,0x0010d980) */
/* WARNING: Removing unreachable block (ram,0x0010d94b) */
/* WARNING: Removing unreachable block (ram,0x0010d8b3) */
/* WARNING: Removing unreachable block (ram,0x0010d8f9) */
/* WARNING: Removing unreachable block (ram,0x0010d8fe) */
/* WARNING: Removing unreachable block (ram,0x0010d968) */
/* WARNING: Removing unreachable block (ram,0x0010d906) */
/* WARNING: Removing unreachable block (ram,0x0010d918) */
/* WARNING: Removing unreachable block (ram,0x0010d928) */
/* WARNING: Removing unreachable block (ram,0x0010d98e) */
/* PhysicsServer3DWrapMT::soft_body_get_bounds(RID) const */

void PhysicsServer3DWrapMT::soft_body_get_bounds(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010d9d5) */
/* WARNING: Removing unreachable block (ram,0x0010da48) */
/* WARNING: Removing unreachable block (ram,0x0010daa0) */
/* WARNING: Removing unreachable block (ram,0x0010da53) */
/* WARNING: Removing unreachable block (ram,0x0010da6a) */
/* WARNING: Removing unreachable block (ram,0x0010d9ea) */
/* WARNING: Removing unreachable block (ram,0x0010da17) */
/* WARNING: Removing unreachable block (ram,0x0010da1c) */
/* WARNING: Removing unreachable block (ram,0x0010da88) */
/* WARNING: Removing unreachable block (ram,0x0010da24) */
/* WARNING: Removing unreachable block (ram,0x0010da38) */
/* WARNING: Removing unreachable block (ram,0x0010daae) */
/* PhysicsServer3DWrapMT::soft_body_get_space(RID) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010daf5) */
/* WARNING: Removing unreachable block (ram,0x0010db68) */
/* WARNING: Removing unreachable block (ram,0x0010dbc0) */
/* WARNING: Removing unreachable block (ram,0x0010db73) */
/* WARNING: Removing unreachable block (ram,0x0010db8a) */
/* WARNING: Removing unreachable block (ram,0x0010db0a) */
/* WARNING: Removing unreachable block (ram,0x0010db37) */
/* WARNING: Removing unreachable block (ram,0x0010db3c) */
/* WARNING: Removing unreachable block (ram,0x0010dba8) */
/* WARNING: Removing unreachable block (ram,0x0010db44) */
/* WARNING: Removing unreachable block (ram,0x0010db58) */
/* WARNING: Removing unreachable block (ram,0x0010dbce) */
/* PhysicsServer3DWrapMT::body_get_space(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010dc15) */
/* WARNING: Removing unreachable block (ram,0x0010dc88) */
/* WARNING: Removing unreachable block (ram,0x0010dce0) */
/* WARNING: Removing unreachable block (ram,0x0010dc93) */
/* WARNING: Removing unreachable block (ram,0x0010dcaa) */
/* WARNING: Removing unreachable block (ram,0x0010dc2a) */
/* WARNING: Removing unreachable block (ram,0x0010dc57) */
/* WARNING: Removing unreachable block (ram,0x0010dc5c) */
/* WARNING: Removing unreachable block (ram,0x0010dcc8) */
/* WARNING: Removing unreachable block (ram,0x0010dc64) */
/* WARNING: Removing unreachable block (ram,0x0010dc78) */
/* WARNING: Removing unreachable block (ram,0x0010dcee) */
/* PhysicsServer3DWrapMT::area_get_space(RID) const */

void __thiscall PhysicsServer3DWrapMT::area_get_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010dd35) */
/* WARNING: Removing unreachable block (ram,0x0010dda8) */
/* WARNING: Removing unreachable block (ram,0x0010de00) */
/* WARNING: Removing unreachable block (ram,0x0010ddb3) */
/* WARNING: Removing unreachable block (ram,0x0010ddca) */
/* WARNING: Removing unreachable block (ram,0x0010dd4a) */
/* WARNING: Removing unreachable block (ram,0x0010dd77) */
/* WARNING: Removing unreachable block (ram,0x0010dd7c) */
/* WARNING: Removing unreachable block (ram,0x0010dde8) */
/* WARNING: Removing unreachable block (ram,0x0010dd84) */
/* WARNING: Removing unreachable block (ram,0x0010dd98) */
/* WARNING: Removing unreachable block (ram,0x0010de0e) */
/* PhysicsServer3DWrapMT::body_get_object_instance_id(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010de55) */
/* WARNING: Removing unreachable block (ram,0x0010dec8) */
/* WARNING: Removing unreachable block (ram,0x0010df20) */
/* WARNING: Removing unreachable block (ram,0x0010ded3) */
/* WARNING: Removing unreachable block (ram,0x0010deea) */
/* WARNING: Removing unreachable block (ram,0x0010de6a) */
/* WARNING: Removing unreachable block (ram,0x0010de97) */
/* WARNING: Removing unreachable block (ram,0x0010de9c) */
/* WARNING: Removing unreachable block (ram,0x0010df08) */
/* WARNING: Removing unreachable block (ram,0x0010dea4) */
/* WARNING: Removing unreachable block (ram,0x0010deb8) */
/* WARNING: Removing unreachable block (ram,0x0010df2e) */
/* PhysicsServer3DWrapMT::area_get_object_instance_id(RID) const */

void __thiscall PhysicsServer3DWrapMT::area_get_object_instance_id(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010df75) */
/* WARNING: Removing unreachable block (ram,0x0010dfe0) */
/* WARNING: Removing unreachable block (ram,0x0010e030) */
/* WARNING: Removing unreachable block (ram,0x0010dfeb) */
/* WARNING: Removing unreachable block (ram,0x0010e002) */
/* WARNING: Removing unreachable block (ram,0x0010df8a) */
/* WARNING: Removing unreachable block (ram,0x0010dfb1) */
/* WARNING: Removing unreachable block (ram,0x0010dfb6) */
/* WARNING: Removing unreachable block (ram,0x0010e020) */
/* WARNING: Removing unreachable block (ram,0x0010dfbe) */
/* WARNING: Removing unreachable block (ram,0x0010dfd2) */
/* WARNING: Removing unreachable block (ram,0x0010e03e) */
/* PhysicsServer3DWrapMT::body_get_mode(RID) const */

void __thiscall PhysicsServer3DWrapMT::body_get_mode(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e08a) */
/* WARNING: Removing unreachable block (ram,0x0010e140) */
/* WARNING: Removing unreachable block (ram,0x0010e180) */
/* WARNING: Removing unreachable block (ram,0x0010e14b) */
/* WARNING: Removing unreachable block (ram,0x0010e0a3) */
/* WARNING: Removing unreachable block (ram,0x0010e0f2) */
/* WARNING: Removing unreachable block (ram,0x0010e0f7) */
/* WARNING: Removing unreachable block (ram,0x0010e168) */
/* WARNING: Removing unreachable block (ram,0x0010e0ff) */
/* WARNING: Removing unreachable block (ram,0x0010e11c) */
/* WARNING: Removing unreachable block (ram,0x0010e12c) */
/* WARNING: Removing unreachable block (ram,0x0010e18e) */
/* PhysicsServer3DWrapMT::area_get_transform(RID) const */

void PhysicsServer3DWrapMT::area_get_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e1da) */
/* WARNING: Removing unreachable block (ram,0x0010e268) */
/* WARNING: Removing unreachable block (ram,0x0010e2a0) */
/* WARNING: Removing unreachable block (ram,0x0010e273) */
/* WARNING: Removing unreachable block (ram,0x0010e1ef) */
/* WARNING: Removing unreachable block (ram,0x0010e225) */
/* WARNING: Removing unreachable block (ram,0x0010e22a) */
/* WARNING: Removing unreachable block (ram,0x0010e290) */
/* WARNING: Removing unreachable block (ram,0x0010e232) */
/* WARNING: Removing unreachable block (ram,0x0010e242) */
/* WARNING: Removing unreachable block (ram,0x0010e252) */
/* WARNING: Removing unreachable block (ram,0x0010e2ae) */
/* PhysicsServer3DWrapMT::shape_get_data(RID) const */

void PhysicsServer3DWrapMT::shape_get_data(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e2f5) */
/* WARNING: Removing unreachable block (ram,0x0010e360) */
/* WARNING: Removing unreachable block (ram,0x0010e3b0) */
/* WARNING: Removing unreachable block (ram,0x0010e36b) */
/* WARNING: Removing unreachable block (ram,0x0010e382) */
/* WARNING: Removing unreachable block (ram,0x0010e30a) */
/* WARNING: Removing unreachable block (ram,0x0010e331) */
/* WARNING: Removing unreachable block (ram,0x0010e336) */
/* WARNING: Removing unreachable block (ram,0x0010e3a0) */
/* WARNING: Removing unreachable block (ram,0x0010e33e) */
/* WARNING: Removing unreachable block (ram,0x0010e352) */
/* WARNING: Removing unreachable block (ram,0x0010e3be) */
/* PhysicsServer3DWrapMT::shape_get_type(RID) const */

void __thiscall PhysicsServer3DWrapMT::shape_get_type(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e409) */
/* WARNING: Removing unreachable block (ram,0x0010e480) */
/* WARNING: Removing unreachable block (ram,0x0010e4d0) */
/* WARNING: Removing unreachable block (ram,0x0010e48b) */
/* WARNING: Removing unreachable block (ram,0x0010e4a2) */
/* WARNING: Removing unreachable block (ram,0x0010e41e) */
/* WARNING: Removing unreachable block (ram,0x0010e44c) */
/* WARNING: Removing unreachable block (ram,0x0010e451) */
/* WARNING: Removing unreachable block (ram,0x0010e4c0) */
/* WARNING: Removing unreachable block (ram,0x0010e459) */
/* WARNING: Removing unreachable block (ram,0x0010e46f) */
/* WARNING: Removing unreachable block (ram,0x0010e4de) */
/* PhysicsServer3DWrapMT::space_get_param(RID, PhysicsServer3D::SpaceParameter) const */

void PhysicsServer3DWrapMT::space_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e529) */
/* WARNING: Removing unreachable block (ram,0x0010e5a0) */
/* WARNING: Removing unreachable block (ram,0x0010e5f0) */
/* WARNING: Removing unreachable block (ram,0x0010e5ab) */
/* WARNING: Removing unreachable block (ram,0x0010e5c2) */
/* WARNING: Removing unreachable block (ram,0x0010e53e) */
/* WARNING: Removing unreachable block (ram,0x0010e56c) */
/* WARNING: Removing unreachable block (ram,0x0010e571) */
/* WARNING: Removing unreachable block (ram,0x0010e5e0) */
/* WARNING: Removing unreachable block (ram,0x0010e579) */
/* WARNING: Removing unreachable block (ram,0x0010e58e) */
/* WARNING: Removing unreachable block (ram,0x0010e5fe) */
/* PhysicsServer3DWrapMT::soft_body_is_point_pinned(RID, int) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_is_point_pinned(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e649) */
/* WARNING: Removing unreachable block (ram,0x0010e6e0) */
/* WARNING: Removing unreachable block (ram,0x0010e738) */
/* WARNING: Removing unreachable block (ram,0x0010e6eb) */
/* WARNING: Removing unreachable block (ram,0x0010e702) */
/* WARNING: Removing unreachable block (ram,0x0010e662) */
/* WARNING: Removing unreachable block (ram,0x0010e6a1) */
/* WARNING: Removing unreachable block (ram,0x0010e6a6) */
/* WARNING: Removing unreachable block (ram,0x0010e720) */
/* WARNING: Removing unreachable block (ram,0x0010e6ae) */
/* WARNING: Removing unreachable block (ram,0x0010e6ce) */
/* WARNING: Removing unreachable block (ram,0x0010e746) */
/* PhysicsServer3DWrapMT::soft_body_get_point_global_position(RID, int) const */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_point_global_position(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e78f) */
/* WARNING: Removing unreachable block (ram,0x0010e850) */
/* WARNING: Removing unreachable block (ram,0x0010e890) */
/* WARNING: Removing unreachable block (ram,0x0010e85b) */
/* WARNING: Removing unreachable block (ram,0x0010e7a8) */
/* WARNING: Removing unreachable block (ram,0x0010e802) */
/* WARNING: Removing unreachable block (ram,0x0010e807) */
/* WARNING: Removing unreachable block (ram,0x0010e880) */
/* WARNING: Removing unreachable block (ram,0x0010e80f) */
/* WARNING: Removing unreachable block (ram,0x0010e82c) */
/* WARNING: Removing unreachable block (ram,0x0010e83c) */
/* WARNING: Removing unreachable block (ram,0x0010e89e) */
/* PhysicsServer3DWrapMT::body_get_shape_transform(RID, int) const */

void PhysicsServer3DWrapMT::body_get_shape_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010e8ef) */
/* WARNING: Removing unreachable block (ram,0x0010e9b0) */
/* WARNING: Removing unreachable block (ram,0x0010e9f0) */
/* WARNING: Removing unreachable block (ram,0x0010e9bb) */
/* WARNING: Removing unreachable block (ram,0x0010e908) */
/* WARNING: Removing unreachable block (ram,0x0010e962) */
/* WARNING: Removing unreachable block (ram,0x0010e967) */
/* WARNING: Removing unreachable block (ram,0x0010e9e0) */
/* WARNING: Removing unreachable block (ram,0x0010e96f) */
/* WARNING: Removing unreachable block (ram,0x0010e98c) */
/* WARNING: Removing unreachable block (ram,0x0010e99c) */
/* WARNING: Removing unreachable block (ram,0x0010e9fe) */
/* PhysicsServer3DWrapMT::area_get_shape_transform(RID, int) const */

void PhysicsServer3DWrapMT::area_get_shape_transform(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010ea49) */
/* WARNING: Removing unreachable block (ram,0x0010eac8) */
/* WARNING: Removing unreachable block (ram,0x0010eb20) */
/* WARNING: Removing unreachable block (ram,0x0010ead3) */
/* WARNING: Removing unreachable block (ram,0x0010eaea) */
/* WARNING: Removing unreachable block (ram,0x0010ea5e) */
/* WARNING: Removing unreachable block (ram,0x0010ea95) */
/* WARNING: Removing unreachable block (ram,0x0010ea9a) */
/* WARNING: Removing unreachable block (ram,0x0010eb10) */
/* WARNING: Removing unreachable block (ram,0x0010eaa2) */
/* WARNING: Removing unreachable block (ram,0x0010eab6) */
/* WARNING: Removing unreachable block (ram,0x0010eb2e) */
/* PhysicsServer3DWrapMT::body_get_shape(RID, int) const */

void __thiscall PhysicsServer3DWrapMT::body_get_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010eb79) */
/* WARNING: Removing unreachable block (ram,0x0010ebf8) */
/* WARNING: Removing unreachable block (ram,0x0010ec50) */
/* WARNING: Removing unreachable block (ram,0x0010ec03) */
/* WARNING: Removing unreachable block (ram,0x0010ec1a) */
/* WARNING: Removing unreachable block (ram,0x0010eb8e) */
/* WARNING: Removing unreachable block (ram,0x0010ebc5) */
/* WARNING: Removing unreachable block (ram,0x0010ebca) */
/* WARNING: Removing unreachable block (ram,0x0010ec40) */
/* WARNING: Removing unreachable block (ram,0x0010ebd2) */
/* WARNING: Removing unreachable block (ram,0x0010ebe6) */
/* WARNING: Removing unreachable block (ram,0x0010ec5e) */
/* PhysicsServer3DWrapMT::area_get_shape(RID, int) const */

void __thiscall PhysicsServer3DWrapMT::area_get_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer3DWrapMT::soft_body_pin_point(RID, int, bool) */

undefined1  [16] __thiscall
PhysicsServer3DWrapMT::soft_body_pin_point
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_18[0] = param_4;
  local_14 = param_3;
  local_10 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010ec9e)) {
    CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),RID&,int&,bool&>
              ((PhysicsServer3D *)(this + 0x180),*(_func_void_RID_int_bool **)(this + 0x178),
               (RID *)0x5e1,(int *)0x0,(bool *)&local_10);
    auVar1._8_8_ = uStack_20;
    auVar1._0_8_ = local_18;
    return auVar1;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  auVar1 = (**(code **)(**(long **)(this + 0x178) + 0x5e0))
                     (*(long **)(this + 0x178),local_10,local_14,local_18[0]);
  return auVar1;
}



/* PhysicsServer3DWrapMT::body_set_shape_disabled(RID, int, bool) */

undefined1  [16] __thiscall
PhysicsServer3DWrapMT::body_set_shape_disabled
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_18[0] = param_4;
  local_14 = param_3;
  local_10 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010ed5e)) {
    CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),RID&,int&,bool&>
              ((PhysicsServer3D *)(this + 0x180),*(_func_void_RID_int_bool **)(this + 0x178),
               (RID *)0x361,(int *)0x0,(bool *)&local_10);
    auVar1._8_8_ = uStack_20;
    auVar1._0_8_ = local_18;
    return auVar1;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  auVar1 = (**(code **)(**(long **)(this + 0x178) + 0x360))
                     (*(long **)(this + 0x178),local_10,local_14,local_18[0]);
  return auVar1;
}



/* PhysicsServer3DWrapMT::area_set_shape_disabled(RID, int, bool) */

undefined1  [16] __thiscall
PhysicsServer3DWrapMT::area_set_shape_disabled
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_18[0] = param_4;
  local_14 = param_3;
  local_10 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010ee1e)) {
    CommandQueueMT::push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),RID&,int&,bool&>
              ((PhysicsServer3D *)(this + 0x180),*(_func_void_RID_int_bool **)(this + 0x178),
               (RID *)0x281,(int *)0x0,(bool *)&local_10);
    auVar1._8_8_ = uStack_20;
    auVar1._0_8_ = local_18;
    return auVar1;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  auVar1 = (**(code **)(**(long **)(this + 0x178) + 0x280))
                     (*(long **)(this + 0x178),local_10,local_14,local_18[0]);
  return auVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010eeef) */
/* WARNING: Removing unreachable block (ram,0x0010ef90) */
/* WARNING: Removing unreachable block (ram,0x0010efd0) */
/* WARNING: Removing unreachable block (ram,0x0010ef9b) */
/* WARNING: Removing unreachable block (ram,0x0010ef08) */
/* WARNING: Removing unreachable block (ram,0x0010ef49) */
/* WARNING: Removing unreachable block (ram,0x0010ef4e) */
/* WARNING: Removing unreachable block (ram,0x0010efc0) */
/* WARNING: Removing unreachable block (ram,0x0010ef56) */
/* WARNING: Removing unreachable block (ram,0x0010ef66) */
/* WARNING: Removing unreachable block (ram,0x0010ef76) */
/* WARNING: Removing unreachable block (ram,0x0010efde) */
/* PhysicsServer3DWrapMT::area_get_param(RID, PhysicsServer3D::AreaParameter) const */

void PhysicsServer3DWrapMT::area_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f02f) */
/* WARNING: Removing unreachable block (ram,0x0010f0d0) */
/* WARNING: Removing unreachable block (ram,0x0010f110) */
/* WARNING: Removing unreachable block (ram,0x0010f0db) */
/* WARNING: Removing unreachable block (ram,0x0010f048) */
/* WARNING: Removing unreachable block (ram,0x0010f089) */
/* WARNING: Removing unreachable block (ram,0x0010f08e) */
/* WARNING: Removing unreachable block (ram,0x0010f100) */
/* WARNING: Removing unreachable block (ram,0x0010f096) */
/* WARNING: Removing unreachable block (ram,0x0010f0a6) */
/* WARNING: Removing unreachable block (ram,0x0010f0b6) */
/* WARNING: Removing unreachable block (ram,0x0010f11e) */
/* PhysicsServer3DWrapMT::body_get_param(RID, PhysicsServer3D::BodyParameter) const */

void PhysicsServer3DWrapMT::body_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f16f) */
/* WARNING: Removing unreachable block (ram,0x0010f210) */
/* WARNING: Removing unreachable block (ram,0x0010f250) */
/* WARNING: Removing unreachable block (ram,0x0010f21b) */
/* WARNING: Removing unreachable block (ram,0x0010f188) */
/* WARNING: Removing unreachable block (ram,0x0010f1c9) */
/* WARNING: Removing unreachable block (ram,0x0010f1ce) */
/* WARNING: Removing unreachable block (ram,0x0010f240) */
/* WARNING: Removing unreachable block (ram,0x0010f1d6) */
/* WARNING: Removing unreachable block (ram,0x0010f1e6) */
/* WARNING: Removing unreachable block (ram,0x0010f1f6) */
/* WARNING: Removing unreachable block (ram,0x0010f25e) */
/* PhysicsServer3DWrapMT::soft_body_get_state(RID, PhysicsServer3D::BodyState) const */

void PhysicsServer3DWrapMT::soft_body_get_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f2af) */
/* WARNING: Removing unreachable block (ram,0x0010f350) */
/* WARNING: Removing unreachable block (ram,0x0010f390) */
/* WARNING: Removing unreachable block (ram,0x0010f35b) */
/* WARNING: Removing unreachable block (ram,0x0010f2c8) */
/* WARNING: Removing unreachable block (ram,0x0010f309) */
/* WARNING: Removing unreachable block (ram,0x0010f30e) */
/* WARNING: Removing unreachable block (ram,0x0010f380) */
/* WARNING: Removing unreachable block (ram,0x0010f316) */
/* WARNING: Removing unreachable block (ram,0x0010f326) */
/* WARNING: Removing unreachable block (ram,0x0010f336) */
/* WARNING: Removing unreachable block (ram,0x0010f39e) */
/* PhysicsServer3DWrapMT::body_get_state(RID, PhysicsServer3D::BodyState) const */

void PhysicsServer3DWrapMT::body_get_state(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f3e9) */
/* WARNING: Removing unreachable block (ram,0x0010f460) */
/* WARNING: Removing unreachable block (ram,0x0010f4b0) */
/* WARNING: Removing unreachable block (ram,0x0010f46b) */
/* WARNING: Removing unreachable block (ram,0x0010f482) */
/* WARNING: Removing unreachable block (ram,0x0010f3fe) */
/* WARNING: Removing unreachable block (ram,0x0010f42c) */
/* WARNING: Removing unreachable block (ram,0x0010f431) */
/* WARNING: Removing unreachable block (ram,0x0010f4a0) */
/* WARNING: Removing unreachable block (ram,0x0010f439) */
/* WARNING: Removing unreachable block (ram,0x0010f44e) */
/* WARNING: Removing unreachable block (ram,0x0010f4be) */
/* PhysicsServer3DWrapMT::body_is_axis_locked(RID, PhysicsServer3D::BodyAxis) const */

void __thiscall PhysicsServer3DWrapMT::body_is_axis_locked(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f4f6) */
/* WARNING: Removing unreachable block (ram,0x0010f550) */
/* WARNING: Removing unreachable block (ram,0x0010f598) */
/* WARNING: Removing unreachable block (ram,0x0010f55b) */
/* WARNING: Removing unreachable block (ram,0x0010f50b) */
/* WARNING: Removing unreachable block (ram,0x0010f530) */
/* WARNING: Removing unreachable block (ram,0x0010f535) */
/* WARNING: Removing unreachable block (ram,0x0010f53d) */
/* WARNING: Removing unreachable block (ram,0x0010f580) */
/* PhysicsServer3DWrapMT::soft_body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */

void __thiscall PhysicsServer3DWrapMT::soft_body_get_collision_exceptions(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f5d6) */
/* WARNING: Removing unreachable block (ram,0x0010f630) */
/* WARNING: Removing unreachable block (ram,0x0010f678) */
/* WARNING: Removing unreachable block (ram,0x0010f63b) */
/* WARNING: Removing unreachable block (ram,0x0010f5eb) */
/* WARNING: Removing unreachable block (ram,0x0010f610) */
/* WARNING: Removing unreachable block (ram,0x0010f615) */
/* WARNING: Removing unreachable block (ram,0x0010f61d) */
/* WARNING: Removing unreachable block (ram,0x0010f660) */
/* PhysicsServer3DWrapMT::body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */

void __thiscall PhysicsServer3DWrapMT::body_get_collision_exceptions(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f6c9) */
/* WARNING: Removing unreachable block (ram,0x0010f740) */
/* WARNING: Removing unreachable block (ram,0x0010f790) */
/* WARNING: Removing unreachable block (ram,0x0010f74b) */
/* WARNING: Removing unreachable block (ram,0x0010f762) */
/* WARNING: Removing unreachable block (ram,0x0010f6de) */
/* WARNING: Removing unreachable block (ram,0x0010f70c) */
/* WARNING: Removing unreachable block (ram,0x0010f711) */
/* WARNING: Removing unreachable block (ram,0x0010f780) */
/* WARNING: Removing unreachable block (ram,0x0010f719) */
/* WARNING: Removing unreachable block (ram,0x0010f72f) */
/* WARNING: Removing unreachable block (ram,0x0010f79e) */
/* PhysicsServer3DWrapMT::pin_joint_get_param(RID, PhysicsServer3D::PinJointParam) const */

void PhysicsServer3DWrapMT::pin_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f7e9) */
/* WARNING: Removing unreachable block (ram,0x0010f860) */
/* WARNING: Removing unreachable block (ram,0x0010f8b0) */
/* WARNING: Removing unreachable block (ram,0x0010f86b) */
/* WARNING: Removing unreachable block (ram,0x0010f882) */
/* WARNING: Removing unreachable block (ram,0x0010f7fe) */
/* WARNING: Removing unreachable block (ram,0x0010f82c) */
/* WARNING: Removing unreachable block (ram,0x0010f831) */
/* WARNING: Removing unreachable block (ram,0x0010f8a0) */
/* WARNING: Removing unreachable block (ram,0x0010f839) */
/* WARNING: Removing unreachable block (ram,0x0010f84f) */
/* WARNING: Removing unreachable block (ram,0x0010f8be) */
/* PhysicsServer3DWrapMT::hinge_joint_get_param(RID, PhysicsServer3D::HingeJointParam) const */

void PhysicsServer3DWrapMT::hinge_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010f909) */
/* WARNING: Removing unreachable block (ram,0x0010f980) */
/* WARNING: Removing unreachable block (ram,0x0010f9d0) */
/* WARNING: Removing unreachable block (ram,0x0010f98b) */
/* WARNING: Removing unreachable block (ram,0x0010f9a2) */
/* WARNING: Removing unreachable block (ram,0x0010f91e) */
/* WARNING: Removing unreachable block (ram,0x0010f94c) */
/* WARNING: Removing unreachable block (ram,0x0010f951) */
/* WARNING: Removing unreachable block (ram,0x0010f9c0) */
/* WARNING: Removing unreachable block (ram,0x0010f959) */
/* WARNING: Removing unreachable block (ram,0x0010f96e) */
/* WARNING: Removing unreachable block (ram,0x0010f9de) */
/* PhysicsServer3DWrapMT::hinge_joint_get_flag(RID, PhysicsServer3D::HingeJointFlag) const */

void __thiscall PhysicsServer3DWrapMT::hinge_joint_get_flag(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010fa29) */
/* WARNING: Removing unreachable block (ram,0x0010faa0) */
/* WARNING: Removing unreachable block (ram,0x0010faf0) */
/* WARNING: Removing unreachable block (ram,0x0010faab) */
/* WARNING: Removing unreachable block (ram,0x0010fac2) */
/* WARNING: Removing unreachable block (ram,0x0010fa3e) */
/* WARNING: Removing unreachable block (ram,0x0010fa6c) */
/* WARNING: Removing unreachable block (ram,0x0010fa71) */
/* WARNING: Removing unreachable block (ram,0x0010fae0) */
/* WARNING: Removing unreachable block (ram,0x0010fa79) */
/* WARNING: Removing unreachable block (ram,0x0010fa8f) */
/* WARNING: Removing unreachable block (ram,0x0010fafe) */
/* PhysicsServer3DWrapMT::slider_joint_get_param(RID, PhysicsServer3D::SliderJointParam) const */

void PhysicsServer3DWrapMT::slider_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0010fb49) */
/* WARNING: Removing unreachable block (ram,0x0010fbc0) */
/* WARNING: Removing unreachable block (ram,0x0010fc10) */
/* WARNING: Removing unreachable block (ram,0x0010fbcb) */
/* WARNING: Removing unreachable block (ram,0x0010fbe2) */
/* WARNING: Removing unreachable block (ram,0x0010fb5e) */
/* WARNING: Removing unreachable block (ram,0x0010fb8c) */
/* WARNING: Removing unreachable block (ram,0x0010fb91) */
/* WARNING: Removing unreachable block (ram,0x0010fc00) */
/* WARNING: Removing unreachable block (ram,0x0010fb99) */
/* WARNING: Removing unreachable block (ram,0x0010fbaf) */
/* WARNING: Removing unreachable block (ram,0x0010fc1e) */
/* PhysicsServer3DWrapMT::cone_twist_joint_get_param(RID, PhysicsServer3D::ConeTwistJointParam)
   const */

void PhysicsServer3DWrapMT::cone_twist_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer3DWrapMT::joint_make_generic_6dof(RID, RID, Transform3D const&, RID, Transform3D
   const&) */

void __thiscall
PhysicsServer3DWrapMT::joint_make_generic_6dof
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,
          Transform3D_conflict *param_4,undefined8 param_5,undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010fc6a)) {
    CommandQueueMT::
    push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
              ((PhysicsServer3D *)(this + 0x180),
               *(_func_void_RID_RID_Transform3D_ptr_RID_Transform3D_ptr **)(this + 0x178),
               (RID *)0x6c1,(RID *)0x0,(Transform3D_conflict *)&local_20,(RID *)&local_28,param_4);
    return;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  (**(code **)(**(long **)(this + 0x178) + 0x6c0))
            (*(long **)(this + 0x178),local_20,local_28,param_4,param_5,param_6);
  return;
}



/* PhysicsServer3DWrapMT::joint_make_cone_twist(RID, RID, Transform3D const&, RID, Transform3D
   const&) */

void __thiscall
PhysicsServer3DWrapMT::joint_make_cone_twist
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,
          Transform3D_conflict *param_4,undefined8 param_5,undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010fd4a)) {
    CommandQueueMT::
    push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
              ((PhysicsServer3D *)(this + 0x180),
               *(_func_void_RID_RID_Transform3D_ptr_RID_Transform3D_ptr **)(this + 0x178),
               (RID *)0x6a9,(RID *)0x0,(Transform3D_conflict *)&local_20,(RID *)&local_28,param_4);
    return;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  (**(code **)(**(long **)(this + 0x178) + 0x6a8))
            (*(long **)(this + 0x178),local_20,local_28,param_4,param_5,param_6);
  return;
}



/* PhysicsServer3DWrapMT::joint_make_slider(RID, RID, Transform3D const&, RID, Transform3D const&)
    */

void __thiscall
PhysicsServer3DWrapMT::joint_make_slider
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,
          Transform3D_conflict *param_4,undefined8 param_5,undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010fe2a)) {
    CommandQueueMT::
    push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
              ((PhysicsServer3D *)(this + 0x180),
               *(_func_void_RID_RID_Transform3D_ptr_RID_Transform3D_ptr **)(this + 0x178),
               (RID *)0x691,(RID *)0x0,(Transform3D_conflict *)&local_20,(RID *)&local_28,param_4);
    return;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  (**(code **)(**(long **)(this + 0x178) + 0x690))
            (*(long **)(this + 0x178),local_20,local_28,param_4,param_5,param_6);
  return;
}



/* PhysicsServer3DWrapMT::joint_make_hinge(RID, RID, Transform3D const&, RID, Transform3D const&) */

void __thiscall
PhysicsServer3DWrapMT::joint_make_hinge
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,
          Transform3D_conflict *param_4,undefined8 param_5,undefined8 param_6)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = param_3;
  local_20 = param_2;
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam000000000010ff0a)) {
    CommandQueueMT::
    push<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
              ((PhysicsServer3D *)(this + 0x180),
               *(_func_void_RID_RID_Transform3D_ptr_RID_Transform3D_ptr **)(this + 0x178),
               (RID *)0x661,(RID *)0x0,(Transform3D_conflict *)&local_20,(RID *)&local_28,param_4);
    return;
  }
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
  (**(code **)(**(long **)(this + 0x178) + 0x660))
            (*(long **)(this + 0x178),local_20,local_28,param_4,param_5,param_6);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010ffee) */
/* WARNING: Removing unreachable block (ram,0x00110060) */
/* WARNING: Removing unreachable block (ram,0x001100c0) */
/* WARNING: Removing unreachable block (ram,0x0011006b) */
/* WARNING: Removing unreachable block (ram,0x00110082) */
/* WARNING: Removing unreachable block (ram,0x00110002) */
/* WARNING: Removing unreachable block (ram,0x0011002e) */
/* WARNING: Removing unreachable block (ram,0x00110033) */
/* WARNING: Removing unreachable block (ram,0x001100a8) */
/* WARNING: Removing unreachable block (ram,0x0011003a) */
/* WARNING: Removing unreachable block (ram,0x00110050) */
/* WARNING: Removing unreachable block (ram,0x001100ce) */
/* PhysicsServer3DWrapMT::generic_6dof_joint_get_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const */

void PhysicsServer3DWrapMT::generic_6dof_joint_get_param(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011011e) */
/* WARNING: Removing unreachable block (ram,0x00110190) */
/* WARNING: Removing unreachable block (ram,0x001101f0) */
/* WARNING: Removing unreachable block (ram,0x0011019b) */
/* WARNING: Removing unreachable block (ram,0x001101b2) */
/* WARNING: Removing unreachable block (ram,0x00110132) */
/* WARNING: Removing unreachable block (ram,0x0011015e) */
/* WARNING: Removing unreachable block (ram,0x00110163) */
/* WARNING: Removing unreachable block (ram,0x001101d8) */
/* WARNING: Removing unreachable block (ram,0x0011016a) */
/* WARNING: Removing unreachable block (ram,0x0011017f) */
/* WARNING: Removing unreachable block (ram,0x001101fe) */
/* PhysicsServer3DWrapMT::generic_6dof_joint_get_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const */

void __thiscall PhysicsServer3DWrapMT::generic_6dof_joint_get_flag(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110245) */
/* WARNING: Removing unreachable block (ram,0x001102a0) */
/* WARNING: Removing unreachable block (ram,0x00110350) */
/* WARNING: Removing unreachable block (ram,0x001102af) */
/* WARNING: Removing unreachable block (ram,0x00110340) */
/* WARNING: Removing unreachable block (ram,0x001102cc) */
/* WARNING: Removing unreachable block (ram,0x001102db) */
/* WARNING: Removing unreachable block (ram,0x0011025a) */
/* WARNING: Removing unreachable block (ram,0x001102e0) */
/* WARNING: Removing unreachable block (ram,0x00110318) */
/* WARNING: Removing unreachable block (ram,0x00110361) */
/* WARNING: Removing unreachable block (ram,0x00110323) */
/* WARNING: Removing unreachable block (ram,0x001102ee) */
/* WARNING: Removing unreachable block (ram,0x00110279) */
/* WARNING: Removing unreachable block (ram,0x0011028d) */
/* WARNING: Removing unreachable block (ram,0x0011036f) */
/* PhysicsServer3DWrapMT::soft_body_remove_all_pinned_points(RID) */

void __thiscall PhysicsServer3DWrapMT::soft_body_remove_all_pinned_points(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001103b5) */
/* WARNING: Removing unreachable block (ram,0x00110410) */
/* WARNING: Removing unreachable block (ram,0x001104c0) */
/* WARNING: Removing unreachable block (ram,0x0011041f) */
/* WARNING: Removing unreachable block (ram,0x001104b0) */
/* WARNING: Removing unreachable block (ram,0x0011043c) */
/* WARNING: Removing unreachable block (ram,0x0011044b) */
/* WARNING: Removing unreachable block (ram,0x001103ca) */
/* WARNING: Removing unreachable block (ram,0x00110450) */
/* WARNING: Removing unreachable block (ram,0x00110488) */
/* WARNING: Removing unreachable block (ram,0x001104d1) */
/* WARNING: Removing unreachable block (ram,0x00110493) */
/* WARNING: Removing unreachable block (ram,0x0011045e) */
/* WARNING: Removing unreachable block (ram,0x001103e9) */
/* WARNING: Removing unreachable block (ram,0x001103fd) */
/* WARNING: Removing unreachable block (ram,0x001104df) */
/* PhysicsServer3DWrapMT::body_clear_shapes(RID) */

void __thiscall PhysicsServer3DWrapMT::body_clear_shapes(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110525) */
/* WARNING: Removing unreachable block (ram,0x00110580) */
/* WARNING: Removing unreachable block (ram,0x00110630) */
/* WARNING: Removing unreachable block (ram,0x0011058f) */
/* WARNING: Removing unreachable block (ram,0x00110620) */
/* WARNING: Removing unreachable block (ram,0x001105ac) */
/* WARNING: Removing unreachable block (ram,0x001105bb) */
/* WARNING: Removing unreachable block (ram,0x0011053a) */
/* WARNING: Removing unreachable block (ram,0x001105c0) */
/* WARNING: Removing unreachable block (ram,0x001105f8) */
/* WARNING: Removing unreachable block (ram,0x00110641) */
/* WARNING: Removing unreachable block (ram,0x00110603) */
/* WARNING: Removing unreachable block (ram,0x001105ce) */
/* WARNING: Removing unreachable block (ram,0x00110559) */
/* WARNING: Removing unreachable block (ram,0x0011056d) */
/* WARNING: Removing unreachable block (ram,0x0011064f) */
/* PhysicsServer3DWrapMT::body_reset_mass_properties(RID) */

void __thiscall PhysicsServer3DWrapMT::body_reset_mass_properties(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110695) */
/* WARNING: Removing unreachable block (ram,0x001106f0) */
/* WARNING: Removing unreachable block (ram,0x001107a0) */
/* WARNING: Removing unreachable block (ram,0x001106ff) */
/* WARNING: Removing unreachable block (ram,0x00110790) */
/* WARNING: Removing unreachable block (ram,0x0011071c) */
/* WARNING: Removing unreachable block (ram,0x0011072b) */
/* WARNING: Removing unreachable block (ram,0x001106aa) */
/* WARNING: Removing unreachable block (ram,0x00110730) */
/* WARNING: Removing unreachable block (ram,0x00110768) */
/* WARNING: Removing unreachable block (ram,0x001107b1) */
/* WARNING: Removing unreachable block (ram,0x00110773) */
/* WARNING: Removing unreachable block (ram,0x0011073e) */
/* WARNING: Removing unreachable block (ram,0x001106c9) */
/* WARNING: Removing unreachable block (ram,0x001106dd) */
/* WARNING: Removing unreachable block (ram,0x001107bf) */
/* PhysicsServer3DWrapMT::area_clear_shapes(RID) */

void __thiscall PhysicsServer3DWrapMT::area_clear_shapes(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110805) */
/* WARNING: Removing unreachable block (ram,0x00110860) */
/* WARNING: Removing unreachable block (ram,0x00110910) */
/* WARNING: Removing unreachable block (ram,0x0011086f) */
/* WARNING: Removing unreachable block (ram,0x00110900) */
/* WARNING: Removing unreachable block (ram,0x0011088c) */
/* WARNING: Removing unreachable block (ram,0x0011089b) */
/* WARNING: Removing unreachable block (ram,0x0011081a) */
/* WARNING: Removing unreachable block (ram,0x001108a0) */
/* WARNING: Removing unreachable block (ram,0x001108d8) */
/* WARNING: Removing unreachable block (ram,0x00110921) */
/* WARNING: Removing unreachable block (ram,0x001108e3) */
/* WARNING: Removing unreachable block (ram,0x001108ae) */
/* WARNING: Removing unreachable block (ram,0x00110839) */
/* WARNING: Removing unreachable block (ram,0x0011084d) */
/* WARNING: Removing unreachable block (ram,0x0011092f) */
/* PhysicsServer3DWrapMT::free(RID) */

void __thiscall PhysicsServer3DWrapMT::free(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110975) */
/* WARNING: Removing unreachable block (ram,0x001109d0) */
/* WARNING: Removing unreachable block (ram,0x00110a80) */
/* WARNING: Removing unreachable block (ram,0x001109df) */
/* WARNING: Removing unreachable block (ram,0x00110a70) */
/* WARNING: Removing unreachable block (ram,0x001109fc) */
/* WARNING: Removing unreachable block (ram,0x00110a0b) */
/* WARNING: Removing unreachable block (ram,0x0011098a) */
/* WARNING: Removing unreachable block (ram,0x00110a10) */
/* WARNING: Removing unreachable block (ram,0x00110a48) */
/* WARNING: Removing unreachable block (ram,0x00110a91) */
/* WARNING: Removing unreachable block (ram,0x00110a53) */
/* WARNING: Removing unreachable block (ram,0x00110a1e) */
/* WARNING: Removing unreachable block (ram,0x001109a9) */
/* WARNING: Removing unreachable block (ram,0x001109bd) */
/* WARNING: Removing unreachable block (ram,0x00110a9f) */
/* PhysicsServer3DWrapMT::joint_clear(RID) */

void __thiscall PhysicsServer3DWrapMT::joint_clear(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110ae9) */
/* WARNING: Removing unreachable block (ram,0x00110b40) */
/* WARNING: Removing unreachable block (ram,0x00110c10) */
/* WARNING: Removing unreachable block (ram,0x00110b4f) */
/* WARNING: Removing unreachable block (ram,0x00110bf8) */
/* WARNING: Removing unreachable block (ram,0x00110b70) */
/* WARNING: Removing unreachable block (ram,0x00110b88) */
/* WARNING: Removing unreachable block (ram,0x00110afe) */
/* WARNING: Removing unreachable block (ram,0x00110b8d) */
/* WARNING: Removing unreachable block (ram,0x00110bc8) */
/* WARNING: Removing unreachable block (ram,0x00110c21) */
/* WARNING: Removing unreachable block (ram,0x00110bd3) */
/* WARNING: Removing unreachable block (ram,0x00110b9b) */
/* WARNING: Removing unreachable block (ram,0x00110b20) */
/* WARNING: Removing unreachable block (ram,0x00110b34) */
/* WARNING: Removing unreachable block (ram,0x00110c2f) */
/* PhysicsServer3DWrapMT::soft_body_set_space(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110c79) */
/* WARNING: Removing unreachable block (ram,0x00110cd0) */
/* WARNING: Removing unreachable block (ram,0x00110da0) */
/* WARNING: Removing unreachable block (ram,0x00110cdf) */
/* WARNING: Removing unreachable block (ram,0x00110d88) */
/* WARNING: Removing unreachable block (ram,0x00110d00) */
/* WARNING: Removing unreachable block (ram,0x00110d18) */
/* WARNING: Removing unreachable block (ram,0x00110c8e) */
/* WARNING: Removing unreachable block (ram,0x00110d1d) */
/* WARNING: Removing unreachable block (ram,0x00110d58) */
/* WARNING: Removing unreachable block (ram,0x00110db1) */
/* WARNING: Removing unreachable block (ram,0x00110d63) */
/* WARNING: Removing unreachable block (ram,0x00110d2b) */
/* WARNING: Removing unreachable block (ram,0x00110cb0) */
/* WARNING: Removing unreachable block (ram,0x00110cc4) */
/* WARNING: Removing unreachable block (ram,0x00110dbf) */
/* PhysicsServer3DWrapMT::body_set_space(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::body_set_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110e09) */
/* WARNING: Removing unreachable block (ram,0x00110e60) */
/* WARNING: Removing unreachable block (ram,0x00110f30) */
/* WARNING: Removing unreachable block (ram,0x00110e6f) */
/* WARNING: Removing unreachable block (ram,0x00110f18) */
/* WARNING: Removing unreachable block (ram,0x00110e90) */
/* WARNING: Removing unreachable block (ram,0x00110ea8) */
/* WARNING: Removing unreachable block (ram,0x00110e1e) */
/* WARNING: Removing unreachable block (ram,0x00110ead) */
/* WARNING: Removing unreachable block (ram,0x00110ee8) */
/* WARNING: Removing unreachable block (ram,0x00110f41) */
/* WARNING: Removing unreachable block (ram,0x00110ef3) */
/* WARNING: Removing unreachable block (ram,0x00110ebb) */
/* WARNING: Removing unreachable block (ram,0x00110e40) */
/* WARNING: Removing unreachable block (ram,0x00110e54) */
/* WARNING: Removing unreachable block (ram,0x00110f4f) */
/* PhysicsServer3DWrapMT::soft_body_set_mesh(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_mesh(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00110f9a) */
/* WARNING: Removing unreachable block (ram,0x00110ff0) */
/* WARNING: Removing unreachable block (ram,0x001110a8) */
/* WARNING: Removing unreachable block (ram,0x00110fff) */
/* WARNING: Removing unreachable block (ram,0x00111090) */
/* WARNING: Removing unreachable block (ram,0x0011101c) */
/* WARNING: Removing unreachable block (ram,0x0011102b) */
/* WARNING: Removing unreachable block (ram,0x00110faf) */
/* WARNING: Removing unreachable block (ram,0x00111030) */
/* WARNING: Removing unreachable block (ram,0x00111068) */
/* WARNING: Removing unreachable block (ram,0x001110b9) */
/* WARNING: Removing unreachable block (ram,0x00111073) */
/* WARNING: Removing unreachable block (ram,0x0011103e) */
/* WARNING: Removing unreachable block (ram,0x00110fd1) */
/* WARNING: Removing unreachable block (ram,0x00110fe5) */
/* WARNING: Removing unreachable block (ram,0x001110c7) */
/* PhysicsServer3DWrapMT::body_add_constant_torque(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_add_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111109) */
/* WARNING: Removing unreachable block (ram,0x00111160) */
/* WARNING: Removing unreachable block (ram,0x00111230) */
/* WARNING: Removing unreachable block (ram,0x0011116f) */
/* WARNING: Removing unreachable block (ram,0x00111218) */
/* WARNING: Removing unreachable block (ram,0x00111190) */
/* WARNING: Removing unreachable block (ram,0x001111a8) */
/* WARNING: Removing unreachable block (ram,0x0011111e) */
/* WARNING: Removing unreachable block (ram,0x001111ad) */
/* WARNING: Removing unreachable block (ram,0x001111e8) */
/* WARNING: Removing unreachable block (ram,0x00111241) */
/* WARNING: Removing unreachable block (ram,0x001111f3) */
/* WARNING: Removing unreachable block (ram,0x001111bb) */
/* WARNING: Removing unreachable block (ram,0x00111140) */
/* WARNING: Removing unreachable block (ram,0x00111154) */
/* WARNING: Removing unreachable block (ram,0x0011124f) */
/* PhysicsServer3DWrapMT::body_add_collision_exception(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::body_add_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011129a) */
/* WARNING: Removing unreachable block (ram,0x001112f0) */
/* WARNING: Removing unreachable block (ram,0x001113a8) */
/* WARNING: Removing unreachable block (ram,0x001112ff) */
/* WARNING: Removing unreachable block (ram,0x00111390) */
/* WARNING: Removing unreachable block (ram,0x0011131c) */
/* WARNING: Removing unreachable block (ram,0x0011132b) */
/* WARNING: Removing unreachable block (ram,0x001112af) */
/* WARNING: Removing unreachable block (ram,0x00111330) */
/* WARNING: Removing unreachable block (ram,0x00111368) */
/* WARNING: Removing unreachable block (ram,0x001113b9) */
/* WARNING: Removing unreachable block (ram,0x00111373) */
/* WARNING: Removing unreachable block (ram,0x0011133e) */
/* WARNING: Removing unreachable block (ram,0x001112d1) */
/* WARNING: Removing unreachable block (ram,0x001112e5) */
/* WARNING: Removing unreachable block (ram,0x001113c7) */
/* PhysicsServer3DWrapMT::body_apply_torque(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111409) */
/* WARNING: Removing unreachable block (ram,0x00111460) */
/* WARNING: Removing unreachable block (ram,0x00111530) */
/* WARNING: Removing unreachable block (ram,0x0011146f) */
/* WARNING: Removing unreachable block (ram,0x00111518) */
/* WARNING: Removing unreachable block (ram,0x00111490) */
/* WARNING: Removing unreachable block (ram,0x001114a8) */
/* WARNING: Removing unreachable block (ram,0x0011141e) */
/* WARNING: Removing unreachable block (ram,0x001114ad) */
/* WARNING: Removing unreachable block (ram,0x001114e8) */
/* WARNING: Removing unreachable block (ram,0x00111541) */
/* WARNING: Removing unreachable block (ram,0x001114f3) */
/* WARNING: Removing unreachable block (ram,0x001114bb) */
/* WARNING: Removing unreachable block (ram,0x00111440) */
/* WARNING: Removing unreachable block (ram,0x00111454) */
/* WARNING: Removing unreachable block (ram,0x0011154f) */
/* PhysicsServer3DWrapMT::soft_body_remove_collision_exception(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::soft_body_remove_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111599) */
/* WARNING: Removing unreachable block (ram,0x001115f0) */
/* WARNING: Removing unreachable block (ram,0x001116c0) */
/* WARNING: Removing unreachable block (ram,0x001115ff) */
/* WARNING: Removing unreachable block (ram,0x001116a8) */
/* WARNING: Removing unreachable block (ram,0x00111620) */
/* WARNING: Removing unreachable block (ram,0x00111638) */
/* WARNING: Removing unreachable block (ram,0x001115ae) */
/* WARNING: Removing unreachable block (ram,0x0011163d) */
/* WARNING: Removing unreachable block (ram,0x00111678) */
/* WARNING: Removing unreachable block (ram,0x001116d1) */
/* WARNING: Removing unreachable block (ram,0x00111683) */
/* WARNING: Removing unreachable block (ram,0x0011164b) */
/* WARNING: Removing unreachable block (ram,0x001115d0) */
/* WARNING: Removing unreachable block (ram,0x001115e4) */
/* WARNING: Removing unreachable block (ram,0x001116df) */
/* PhysicsServer3DWrapMT::soft_body_add_collision_exception(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::soft_body_add_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011172a) */
/* WARNING: Removing unreachable block (ram,0x00111780) */
/* WARNING: Removing unreachable block (ram,0x00111838) */
/* WARNING: Removing unreachable block (ram,0x0011178f) */
/* WARNING: Removing unreachable block (ram,0x00111820) */
/* WARNING: Removing unreachable block (ram,0x001117ac) */
/* WARNING: Removing unreachable block (ram,0x001117bb) */
/* WARNING: Removing unreachable block (ram,0x0011173f) */
/* WARNING: Removing unreachable block (ram,0x001117c0) */
/* WARNING: Removing unreachable block (ram,0x001117f8) */
/* WARNING: Removing unreachable block (ram,0x00111849) */
/* WARNING: Removing unreachable block (ram,0x00111803) */
/* WARNING: Removing unreachable block (ram,0x001117ce) */
/* WARNING: Removing unreachable block (ram,0x00111761) */
/* WARNING: Removing unreachable block (ram,0x00111775) */
/* WARNING: Removing unreachable block (ram,0x00111857) */
/* PhysicsServer3DWrapMT::body_add_constant_central_force(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_add_constant_central_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011189a) */
/* WARNING: Removing unreachable block (ram,0x001118f0) */
/* WARNING: Removing unreachable block (ram,0x001119a8) */
/* WARNING: Removing unreachable block (ram,0x001118ff) */
/* WARNING: Removing unreachable block (ram,0x00111990) */
/* WARNING: Removing unreachable block (ram,0x0011191c) */
/* WARNING: Removing unreachable block (ram,0x0011192b) */
/* WARNING: Removing unreachable block (ram,0x001118af) */
/* WARNING: Removing unreachable block (ram,0x00111930) */
/* WARNING: Removing unreachable block (ram,0x00111968) */
/* WARNING: Removing unreachable block (ram,0x001119b9) */
/* WARNING: Removing unreachable block (ram,0x00111973) */
/* WARNING: Removing unreachable block (ram,0x0011193e) */
/* WARNING: Removing unreachable block (ram,0x001118d1) */
/* WARNING: Removing unreachable block (ram,0x001118e5) */
/* WARNING: Removing unreachable block (ram,0x001119c7) */
/* PhysicsServer3DWrapMT::body_set_constant_torque(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_set_constant_torque(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111a09) */
/* WARNING: Removing unreachable block (ram,0x00111a60) */
/* WARNING: Removing unreachable block (ram,0x00111b30) */
/* WARNING: Removing unreachable block (ram,0x00111a6f) */
/* WARNING: Removing unreachable block (ram,0x00111b18) */
/* WARNING: Removing unreachable block (ram,0x00111a90) */
/* WARNING: Removing unreachable block (ram,0x00111aa8) */
/* WARNING: Removing unreachable block (ram,0x00111a1e) */
/* WARNING: Removing unreachable block (ram,0x00111aad) */
/* WARNING: Removing unreachable block (ram,0x00111ae8) */
/* WARNING: Removing unreachable block (ram,0x00111b41) */
/* WARNING: Removing unreachable block (ram,0x00111af3) */
/* WARNING: Removing unreachable block (ram,0x00111abb) */
/* WARNING: Removing unreachable block (ram,0x00111a40) */
/* WARNING: Removing unreachable block (ram,0x00111a54) */
/* WARNING: Removing unreachable block (ram,0x00111b4f) */
/* PhysicsServer3DWrapMT::area_set_space(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::area_set_space(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111b99) */
/* WARNING: Removing unreachable block (ram,0x00111bf0) */
/* WARNING: Removing unreachable block (ram,0x00111cc0) */
/* WARNING: Removing unreachable block (ram,0x00111bff) */
/* WARNING: Removing unreachable block (ram,0x00111ca8) */
/* WARNING: Removing unreachable block (ram,0x00111c20) */
/* WARNING: Removing unreachable block (ram,0x00111c38) */
/* WARNING: Removing unreachable block (ram,0x00111bae) */
/* WARNING: Removing unreachable block (ram,0x00111c3d) */
/* WARNING: Removing unreachable block (ram,0x00111c78) */
/* WARNING: Removing unreachable block (ram,0x00111cd1) */
/* WARNING: Removing unreachable block (ram,0x00111c83) */
/* WARNING: Removing unreachable block (ram,0x00111c4b) */
/* WARNING: Removing unreachable block (ram,0x00111bd0) */
/* WARNING: Removing unreachable block (ram,0x00111be4) */
/* WARNING: Removing unreachable block (ram,0x00111cdf) */
/* PhysicsServer3DWrapMT::body_remove_collision_exception(RID, RID) */

void __thiscall PhysicsServer3DWrapMT::body_remove_collision_exception(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111d2a) */
/* WARNING: Removing unreachable block (ram,0x00111d80) */
/* WARNING: Removing unreachable block (ram,0x00111e38) */
/* WARNING: Removing unreachable block (ram,0x00111d8f) */
/* WARNING: Removing unreachable block (ram,0x00111e20) */
/* WARNING: Removing unreachable block (ram,0x00111dac) */
/* WARNING: Removing unreachable block (ram,0x00111dbb) */
/* WARNING: Removing unreachable block (ram,0x00111d3f) */
/* WARNING: Removing unreachable block (ram,0x00111dc0) */
/* WARNING: Removing unreachable block (ram,0x00111df8) */
/* WARNING: Removing unreachable block (ram,0x00111e49) */
/* WARNING: Removing unreachable block (ram,0x00111e03) */
/* WARNING: Removing unreachable block (ram,0x00111dce) */
/* WARNING: Removing unreachable block (ram,0x00111d61) */
/* WARNING: Removing unreachable block (ram,0x00111d75) */
/* WARNING: Removing unreachable block (ram,0x00111e57) */
/* PhysicsServer3DWrapMT::body_set_constant_force(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_set_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00111e9a) */
/* WARNING: Removing unreachable block (ram,0x00111ef0) */
/* WARNING: Removing unreachable block (ram,0x00111fa8) */
/* WARNING: Removing unreachable block (ram,0x00111eff) */
/* WARNING: Removing unreachable block (ram,0x00111f90) */
/* WARNING: Removing unreachable block (ram,0x00111f1c) */
/* WARNING: Removing unreachable block (ram,0x00111f2b) */
/* WARNING: Removing unreachable block (ram,0x00111eaf) */
/* WARNING: Removing unreachable block (ram,0x00111f30) */
/* WARNING: Removing unreachable block (ram,0x00111f68) */
/* WARNING: Removing unreachable block (ram,0x00111fb9) */
/* WARNING: Removing unreachable block (ram,0x00111f73) */
/* WARNING: Removing unreachable block (ram,0x00111f3e) */
/* WARNING: Removing unreachable block (ram,0x00111ed1) */
/* WARNING: Removing unreachable block (ram,0x00111ee5) */
/* WARNING: Removing unreachable block (ram,0x00111fc7) */
/* PhysicsServer3DWrapMT::body_set_axis_velocity(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_set_axis_velocity(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011200a) */
/* WARNING: Removing unreachable block (ram,0x00112060) */
/* WARNING: Removing unreachable block (ram,0x00112118) */
/* WARNING: Removing unreachable block (ram,0x0011206f) */
/* WARNING: Removing unreachable block (ram,0x00112100) */
/* WARNING: Removing unreachable block (ram,0x0011208c) */
/* WARNING: Removing unreachable block (ram,0x0011209b) */
/* WARNING: Removing unreachable block (ram,0x0011201f) */
/* WARNING: Removing unreachable block (ram,0x001120a0) */
/* WARNING: Removing unreachable block (ram,0x001120d8) */
/* WARNING: Removing unreachable block (ram,0x00112129) */
/* WARNING: Removing unreachable block (ram,0x001120e3) */
/* WARNING: Removing unreachable block (ram,0x001120ae) */
/* WARNING: Removing unreachable block (ram,0x00112041) */
/* WARNING: Removing unreachable block (ram,0x00112055) */
/* WARNING: Removing unreachable block (ram,0x00112137) */
/* PhysicsServer3DWrapMT::body_apply_torque_impulse(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_torque_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011217a) */
/* WARNING: Removing unreachable block (ram,0x001121d0) */
/* WARNING: Removing unreachable block (ram,0x00112288) */
/* WARNING: Removing unreachable block (ram,0x001121df) */
/* WARNING: Removing unreachable block (ram,0x00112270) */
/* WARNING: Removing unreachable block (ram,0x001121fc) */
/* WARNING: Removing unreachable block (ram,0x0011220b) */
/* WARNING: Removing unreachable block (ram,0x0011218f) */
/* WARNING: Removing unreachable block (ram,0x00112210) */
/* WARNING: Removing unreachable block (ram,0x00112248) */
/* WARNING: Removing unreachable block (ram,0x00112299) */
/* WARNING: Removing unreachable block (ram,0x00112253) */
/* WARNING: Removing unreachable block (ram,0x0011221e) */
/* WARNING: Removing unreachable block (ram,0x001121b1) */
/* WARNING: Removing unreachable block (ram,0x001121c5) */
/* WARNING: Removing unreachable block (ram,0x001122a7) */
/* PhysicsServer3DWrapMT::pin_joint_set_local_a(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::pin_joint_set_local_a(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001122ea) */
/* WARNING: Removing unreachable block (ram,0x00112340) */
/* WARNING: Removing unreachable block (ram,0x001123f8) */
/* WARNING: Removing unreachable block (ram,0x0011234f) */
/* WARNING: Removing unreachable block (ram,0x001123e0) */
/* WARNING: Removing unreachable block (ram,0x0011236c) */
/* WARNING: Removing unreachable block (ram,0x0011237b) */
/* WARNING: Removing unreachable block (ram,0x001122ff) */
/* WARNING: Removing unreachable block (ram,0x00112380) */
/* WARNING: Removing unreachable block (ram,0x001123b8) */
/* WARNING: Removing unreachable block (ram,0x00112409) */
/* WARNING: Removing unreachable block (ram,0x001123c3) */
/* WARNING: Removing unreachable block (ram,0x0011238e) */
/* WARNING: Removing unreachable block (ram,0x00112321) */
/* WARNING: Removing unreachable block (ram,0x00112335) */
/* WARNING: Removing unreachable block (ram,0x00112417) */
/* PhysicsServer3DWrapMT::pin_joint_set_local_b(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::pin_joint_set_local_b(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011245a) */
/* WARNING: Removing unreachable block (ram,0x001124b0) */
/* WARNING: Removing unreachable block (ram,0x00112568) */
/* WARNING: Removing unreachable block (ram,0x001124bf) */
/* WARNING: Removing unreachable block (ram,0x00112550) */
/* WARNING: Removing unreachable block (ram,0x001124dc) */
/* WARNING: Removing unreachable block (ram,0x001124eb) */
/* WARNING: Removing unreachable block (ram,0x0011246f) */
/* WARNING: Removing unreachable block (ram,0x001124f0) */
/* WARNING: Removing unreachable block (ram,0x00112528) */
/* WARNING: Removing unreachable block (ram,0x00112579) */
/* WARNING: Removing unreachable block (ram,0x00112533) */
/* WARNING: Removing unreachable block (ram,0x001124fe) */
/* WARNING: Removing unreachable block (ram,0x00112491) */
/* WARNING: Removing unreachable block (ram,0x001124a5) */
/* WARNING: Removing unreachable block (ram,0x00112587) */
/* PhysicsServer3DWrapMT::area_set_area_monitor_callback(RID, Callable const&) */

void __thiscall PhysicsServer3DWrapMT::area_set_area_monitor_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001125ca) */
/* WARNING: Removing unreachable block (ram,0x00112620) */
/* WARNING: Removing unreachable block (ram,0x001126d8) */
/* WARNING: Removing unreachable block (ram,0x0011262f) */
/* WARNING: Removing unreachable block (ram,0x001126c0) */
/* WARNING: Removing unreachable block (ram,0x0011264c) */
/* WARNING: Removing unreachable block (ram,0x0011265b) */
/* WARNING: Removing unreachable block (ram,0x001125df) */
/* WARNING: Removing unreachable block (ram,0x00112660) */
/* WARNING: Removing unreachable block (ram,0x00112698) */
/* WARNING: Removing unreachable block (ram,0x001126e9) */
/* WARNING: Removing unreachable block (ram,0x001126a3) */
/* WARNING: Removing unreachable block (ram,0x0011266e) */
/* WARNING: Removing unreachable block (ram,0x00112601) */
/* WARNING: Removing unreachable block (ram,0x00112615) */
/* WARNING: Removing unreachable block (ram,0x001126f7) */
/* PhysicsServer3DWrapMT::body_set_state_sync_callback(RID, Callable const&) */

void __thiscall PhysicsServer3DWrapMT::body_set_state_sync_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011273a) */
/* WARNING: Removing unreachable block (ram,0x00112790) */
/* WARNING: Removing unreachable block (ram,0x00112848) */
/* WARNING: Removing unreachable block (ram,0x0011279f) */
/* WARNING: Removing unreachable block (ram,0x00112830) */
/* WARNING: Removing unreachable block (ram,0x001127bc) */
/* WARNING: Removing unreachable block (ram,0x001127cb) */
/* WARNING: Removing unreachable block (ram,0x0011274f) */
/* WARNING: Removing unreachable block (ram,0x001127d0) */
/* WARNING: Removing unreachable block (ram,0x00112808) */
/* WARNING: Removing unreachable block (ram,0x00112859) */
/* WARNING: Removing unreachable block (ram,0x00112813) */
/* WARNING: Removing unreachable block (ram,0x001127de) */
/* WARNING: Removing unreachable block (ram,0x00112771) */
/* WARNING: Removing unreachable block (ram,0x00112785) */
/* WARNING: Removing unreachable block (ram,0x00112867) */
/* PhysicsServer3DWrapMT::area_set_monitor_callback(RID, Callable const&) */

void __thiscall PhysicsServer3DWrapMT::area_set_monitor_callback(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001128aa) */
/* WARNING: Removing unreachable block (ram,0x00112900) */
/* WARNING: Removing unreachable block (ram,0x001129b8) */
/* WARNING: Removing unreachable block (ram,0x0011290f) */
/* WARNING: Removing unreachable block (ram,0x001129a0) */
/* WARNING: Removing unreachable block (ram,0x0011292c) */
/* WARNING: Removing unreachable block (ram,0x0011293b) */
/* WARNING: Removing unreachable block (ram,0x001128bf) */
/* WARNING: Removing unreachable block (ram,0x00112940) */
/* WARNING: Removing unreachable block (ram,0x00112978) */
/* WARNING: Removing unreachable block (ram,0x001129c9) */
/* WARNING: Removing unreachable block (ram,0x00112983) */
/* WARNING: Removing unreachable block (ram,0x0011294e) */
/* WARNING: Removing unreachable block (ram,0x001128e1) */
/* WARNING: Removing unreachable block (ram,0x001128f5) */
/* WARNING: Removing unreachable block (ram,0x001129d7) */
/* PhysicsServer3DWrapMT::body_apply_central_impulse(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_central_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00112a1a) */
/* WARNING: Removing unreachable block (ram,0x00112a70) */
/* WARNING: Removing unreachable block (ram,0x00112b28) */
/* WARNING: Removing unreachable block (ram,0x00112a7f) */
/* WARNING: Removing unreachable block (ram,0x00112b10) */
/* WARNING: Removing unreachable block (ram,0x00112a9c) */
/* WARNING: Removing unreachable block (ram,0x00112aab) */
/* WARNING: Removing unreachable block (ram,0x00112a2f) */
/* WARNING: Removing unreachable block (ram,0x00112ab0) */
/* WARNING: Removing unreachable block (ram,0x00112ae8) */
/* WARNING: Removing unreachable block (ram,0x00112b39) */
/* WARNING: Removing unreachable block (ram,0x00112af3) */
/* WARNING: Removing unreachable block (ram,0x00112abe) */
/* WARNING: Removing unreachable block (ram,0x00112a51) */
/* WARNING: Removing unreachable block (ram,0x00112a65) */
/* WARNING: Removing unreachable block (ram,0x00112b47) */
/* PhysicsServer3DWrapMT::body_apply_central_force(RID, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_central_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00112b89) */
/* WARNING: Removing unreachable block (ram,0x00112be0) */
/* WARNING: Removing unreachable block (ram,0x00112ca0) */
/* WARNING: Removing unreachable block (ram,0x00112bef) */
/* WARNING: Removing unreachable block (ram,0x00112c90) */
/* WARNING: Removing unreachable block (ram,0x00112c11) */
/* WARNING: Removing unreachable block (ram,0x00112c24) */
/* WARNING: Removing unreachable block (ram,0x00112b9e) */
/* WARNING: Removing unreachable block (ram,0x00112c29) */
/* WARNING: Removing unreachable block (ram,0x00112c60) */
/* WARNING: Removing unreachable block (ram,0x00112cb1) */
/* WARNING: Removing unreachable block (ram,0x00112c6b) */
/* WARNING: Removing unreachable block (ram,0x00112c37) */
/* WARNING: Removing unreachable block (ram,0x00112bc2) */
/* WARNING: Removing unreachable block (ram,0x00112bd6) */
/* WARNING: Removing unreachable block (ram,0x00112cbf) */
/* PhysicsServer3DWrapMT::space_set_active(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::space_set_active(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00112d09) */
/* WARNING: Removing unreachable block (ram,0x00112d60) */
/* WARNING: Removing unreachable block (ram,0x00112e30) */
/* WARNING: Removing unreachable block (ram,0x00112d6f) */
/* WARNING: Removing unreachable block (ram,0x00112e18) */
/* WARNING: Removing unreachable block (ram,0x00112d94) */
/* WARNING: Removing unreachable block (ram,0x00112da7) */
/* WARNING: Removing unreachable block (ram,0x00112d1e) */
/* WARNING: Removing unreachable block (ram,0x00112dac) */
/* WARNING: Removing unreachable block (ram,0x00112de8) */
/* WARNING: Removing unreachable block (ram,0x00112e41) */
/* WARNING: Removing unreachable block (ram,0x00112df3) */
/* WARNING: Removing unreachable block (ram,0x00112dba) */
/* WARNING: Removing unreachable block (ram,0x00112d42) */
/* WARNING: Removing unreachable block (ram,0x00112d56) */
/* WARNING: Removing unreachable block (ram,0x00112e4f) */
/* PhysicsServer3DWrapMT::soft_body_set_simulation_precision(RID, int) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_simulation_precision(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00112e99) */
/* WARNING: Removing unreachable block (ram,0x00112ef0) */
/* WARNING: Removing unreachable block (ram,0x00112fb0) */
/* WARNING: Removing unreachable block (ram,0x00112eff) */
/* WARNING: Removing unreachable block (ram,0x00112fa0) */
/* WARNING: Removing unreachable block (ram,0x00112f21) */
/* WARNING: Removing unreachable block (ram,0x00112f34) */
/* WARNING: Removing unreachable block (ram,0x00112eae) */
/* WARNING: Removing unreachable block (ram,0x00112f39) */
/* WARNING: Removing unreachable block (ram,0x00112f70) */
/* WARNING: Removing unreachable block (ram,0x00112fc1) */
/* WARNING: Removing unreachable block (ram,0x00112f7b) */
/* WARNING: Removing unreachable block (ram,0x00112f47) */
/* WARNING: Removing unreachable block (ram,0x00112ed2) */
/* WARNING: Removing unreachable block (ram,0x00112ee6) */
/* WARNING: Removing unreachable block (ram,0x00112fcf) */
/* PhysicsServer3DWrapMT::body_set_omit_force_integration(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::body_set_omit_force_integration(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113019) */
/* WARNING: Removing unreachable block (ram,0x00113070) */
/* WARNING: Removing unreachable block (ram,0x00113140) */
/* WARNING: Removing unreachable block (ram,0x0011307f) */
/* WARNING: Removing unreachable block (ram,0x00113128) */
/* WARNING: Removing unreachable block (ram,0x001130a4) */
/* WARNING: Removing unreachable block (ram,0x001130b7) */
/* WARNING: Removing unreachable block (ram,0x0011302e) */
/* WARNING: Removing unreachable block (ram,0x001130bc) */
/* WARNING: Removing unreachable block (ram,0x001130f8) */
/* WARNING: Removing unreachable block (ram,0x00113151) */
/* WARNING: Removing unreachable block (ram,0x00113103) */
/* WARNING: Removing unreachable block (ram,0x001130ca) */
/* WARNING: Removing unreachable block (ram,0x00113052) */
/* WARNING: Removing unreachable block (ram,0x00113066) */
/* WARNING: Removing unreachable block (ram,0x0011315f) */
/* PhysicsServer3DWrapMT::area_set_collision_layer(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::area_set_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001131a9) */
/* WARNING: Removing unreachable block (ram,0x00113200) */
/* WARNING: Removing unreachable block (ram,0x001132d0) */
/* WARNING: Removing unreachable block (ram,0x0011320f) */
/* WARNING: Removing unreachable block (ram,0x001132b8) */
/* WARNING: Removing unreachable block (ram,0x00113234) */
/* WARNING: Removing unreachable block (ram,0x00113247) */
/* WARNING: Removing unreachable block (ram,0x001131be) */
/* WARNING: Removing unreachable block (ram,0x0011324c) */
/* WARNING: Removing unreachable block (ram,0x00113288) */
/* WARNING: Removing unreachable block (ram,0x001132e1) */
/* WARNING: Removing unreachable block (ram,0x00113293) */
/* WARNING: Removing unreachable block (ram,0x0011325a) */
/* WARNING: Removing unreachable block (ram,0x001131e2) */
/* WARNING: Removing unreachable block (ram,0x001131f6) */
/* WARNING: Removing unreachable block (ram,0x001132ef) */
/* PhysicsServer3DWrapMT::space_set_debug_contacts(RID, int) */

void __thiscall PhysicsServer3DWrapMT::space_set_debug_contacts(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113339) */
/* WARNING: Removing unreachable block (ram,0x00113390) */
/* WARNING: Removing unreachable block (ram,0x00113450) */
/* WARNING: Removing unreachable block (ram,0x0011339f) */
/* WARNING: Removing unreachable block (ram,0x00113440) */
/* WARNING: Removing unreachable block (ram,0x001133c1) */
/* WARNING: Removing unreachable block (ram,0x001133d4) */
/* WARNING: Removing unreachable block (ram,0x0011334e) */
/* WARNING: Removing unreachable block (ram,0x001133d9) */
/* WARNING: Removing unreachable block (ram,0x00113410) */
/* WARNING: Removing unreachable block (ram,0x00113461) */
/* WARNING: Removing unreachable block (ram,0x0011341b) */
/* WARNING: Removing unreachable block (ram,0x001133e7) */
/* WARNING: Removing unreachable block (ram,0x00113372) */
/* WARNING: Removing unreachable block (ram,0x00113386) */
/* WARNING: Removing unreachable block (ram,0x0011346f) */
/* PhysicsServer3DWrapMT::body_set_enable_continuous_collision_detection(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::body_set_enable_continuous_collision_detection(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001134b9) */
/* WARNING: Removing unreachable block (ram,0x00113510) */
/* WARNING: Removing unreachable block (ram,0x001135e0) */
/* WARNING: Removing unreachable block (ram,0x0011351f) */
/* WARNING: Removing unreachable block (ram,0x001135c8) */
/* WARNING: Removing unreachable block (ram,0x00113544) */
/* WARNING: Removing unreachable block (ram,0x00113557) */
/* WARNING: Removing unreachable block (ram,0x001134ce) */
/* WARNING: Removing unreachable block (ram,0x0011355c) */
/* WARNING: Removing unreachable block (ram,0x00113598) */
/* WARNING: Removing unreachable block (ram,0x001135f1) */
/* WARNING: Removing unreachable block (ram,0x001135a3) */
/* WARNING: Removing unreachable block (ram,0x0011356a) */
/* WARNING: Removing unreachable block (ram,0x001134f2) */
/* WARNING: Removing unreachable block (ram,0x00113506) */
/* WARNING: Removing unreachable block (ram,0x001135ff) */
/* PhysicsServer3DWrapMT::joint_set_solver_priority(RID, int) */

void __thiscall PhysicsServer3DWrapMT::joint_set_solver_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113649) */
/* WARNING: Removing unreachable block (ram,0x001136a0) */
/* WARNING: Removing unreachable block (ram,0x00113770) */
/* WARNING: Removing unreachable block (ram,0x001136af) */
/* WARNING: Removing unreachable block (ram,0x00113758) */
/* WARNING: Removing unreachable block (ram,0x001136d4) */
/* WARNING: Removing unreachable block (ram,0x001136e7) */
/* WARNING: Removing unreachable block (ram,0x0011365e) */
/* WARNING: Removing unreachable block (ram,0x001136ec) */
/* WARNING: Removing unreachable block (ram,0x00113728) */
/* WARNING: Removing unreachable block (ram,0x00113781) */
/* WARNING: Removing unreachable block (ram,0x00113733) */
/* WARNING: Removing unreachable block (ram,0x001136fa) */
/* WARNING: Removing unreachable block (ram,0x00113682) */
/* WARNING: Removing unreachable block (ram,0x00113696) */
/* WARNING: Removing unreachable block (ram,0x0011378f) */
/* PhysicsServer3DWrapMT::area_set_collision_mask(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::area_set_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001137d9) */
/* WARNING: Removing unreachable block (ram,0x00113830) */
/* WARNING: Removing unreachable block (ram,0x001138f0) */
/* WARNING: Removing unreachable block (ram,0x0011383f) */
/* WARNING: Removing unreachable block (ram,0x001138e0) */
/* WARNING: Removing unreachable block (ram,0x00113861) */
/* WARNING: Removing unreachable block (ram,0x00113874) */
/* WARNING: Removing unreachable block (ram,0x001137ee) */
/* WARNING: Removing unreachable block (ram,0x00113879) */
/* WARNING: Removing unreachable block (ram,0x001138b0) */
/* WARNING: Removing unreachable block (ram,0x00113901) */
/* WARNING: Removing unreachable block (ram,0x001138bb) */
/* WARNING: Removing unreachable block (ram,0x00113887) */
/* WARNING: Removing unreachable block (ram,0x00113812) */
/* WARNING: Removing unreachable block (ram,0x00113826) */
/* WARNING: Removing unreachable block (ram,0x0011390f) */
/* PhysicsServer3DWrapMT::body_set_ray_pickable(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::body_set_ray_pickable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113959) */
/* WARNING: Removing unreachable block (ram,0x001139b0) */
/* WARNING: Removing unreachable block (ram,0x00113a80) */
/* WARNING: Removing unreachable block (ram,0x001139bf) */
/* WARNING: Removing unreachable block (ram,0x00113a68) */
/* WARNING: Removing unreachable block (ram,0x001139e4) */
/* WARNING: Removing unreachable block (ram,0x001139f7) */
/* WARNING: Removing unreachable block (ram,0x0011396e) */
/* WARNING: Removing unreachable block (ram,0x001139fc) */
/* WARNING: Removing unreachable block (ram,0x00113a38) */
/* WARNING: Removing unreachable block (ram,0x00113a91) */
/* WARNING: Removing unreachable block (ram,0x00113a43) */
/* WARNING: Removing unreachable block (ram,0x00113a0a) */
/* WARNING: Removing unreachable block (ram,0x00113992) */
/* WARNING: Removing unreachable block (ram,0x001139a6) */
/* WARNING: Removing unreachable block (ram,0x00113a9f) */
/* PhysicsServer3DWrapMT::body_remove_shape(RID, int) */

void __thiscall PhysicsServer3DWrapMT::body_remove_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113aeb) */
/* WARNING: Removing unreachable block (ram,0x00113b48) */
/* WARNING: Removing unreachable block (ram,0x00113c10) */
/* WARNING: Removing unreachable block (ram,0x00113b57) */
/* WARNING: Removing unreachable block (ram,0x00113c00) */
/* WARNING: Removing unreachable block (ram,0x00113b7e) */
/* WARNING: Removing unreachable block (ram,0x00113b93) */
/* WARNING: Removing unreachable block (ram,0x00113b00) */
/* WARNING: Removing unreachable block (ram,0x00113b98) */
/* WARNING: Removing unreachable block (ram,0x00113bd0) */
/* WARNING: Removing unreachable block (ram,0x00113c21) */
/* WARNING: Removing unreachable block (ram,0x00113bdb) */
/* WARNING: Removing unreachable block (ram,0x00113ba6) */
/* WARNING: Removing unreachable block (ram,0x00113b24) */
/* WARNING: Removing unreachable block (ram,0x00113b38) */
/* WARNING: Removing unreachable block (ram,0x00113c2f) */
/* PhysicsServer3DWrapMT::soft_body_set_total_mass(RID, float) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_total_mass(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113c7b) */
/* WARNING: Removing unreachable block (ram,0x00113cd8) */
/* WARNING: Removing unreachable block (ram,0x00113da0) */
/* WARNING: Removing unreachable block (ram,0x00113ce7) */
/* WARNING: Removing unreachable block (ram,0x00113d90) */
/* WARNING: Removing unreachable block (ram,0x00113d0e) */
/* WARNING: Removing unreachable block (ram,0x00113d23) */
/* WARNING: Removing unreachable block (ram,0x00113c90) */
/* WARNING: Removing unreachable block (ram,0x00113d28) */
/* WARNING: Removing unreachable block (ram,0x00113d60) */
/* WARNING: Removing unreachable block (ram,0x00113db1) */
/* WARNING: Removing unreachable block (ram,0x00113d6b) */
/* WARNING: Removing unreachable block (ram,0x00113d36) */
/* WARNING: Removing unreachable block (ram,0x00113cb4) */
/* WARNING: Removing unreachable block (ram,0x00113cc8) */
/* WARNING: Removing unreachable block (ram,0x00113dbf) */
/* PhysicsServer3DWrapMT::soft_body_set_linear_stiffness(RID, float) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_linear_stiffness(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113e09) */
/* WARNING: Removing unreachable block (ram,0x00113e60) */
/* WARNING: Removing unreachable block (ram,0x00113f30) */
/* WARNING: Removing unreachable block (ram,0x00113e6f) */
/* WARNING: Removing unreachable block (ram,0x00113f18) */
/* WARNING: Removing unreachable block (ram,0x00113e94) */
/* WARNING: Removing unreachable block (ram,0x00113ea7) */
/* WARNING: Removing unreachable block (ram,0x00113e1e) */
/* WARNING: Removing unreachable block (ram,0x00113eac) */
/* WARNING: Removing unreachable block (ram,0x00113ee8) */
/* WARNING: Removing unreachable block (ram,0x00113f41) */
/* WARNING: Removing unreachable block (ram,0x00113ef3) */
/* WARNING: Removing unreachable block (ram,0x00113eba) */
/* WARNING: Removing unreachable block (ram,0x00113e42) */
/* WARNING: Removing unreachable block (ram,0x00113e56) */
/* WARNING: Removing unreachable block (ram,0x00113f4f) */
/* PhysicsServer3DWrapMT::body_set_max_contacts_reported(RID, int) */

void __thiscall PhysicsServer3DWrapMT::body_set_max_contacts_reported(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00113f9b) */
/* WARNING: Removing unreachable block (ram,0x00113ff8) */
/* WARNING: Removing unreachable block (ram,0x001140c0) */
/* WARNING: Removing unreachable block (ram,0x00114007) */
/* WARNING: Removing unreachable block (ram,0x001140b0) */
/* WARNING: Removing unreachable block (ram,0x0011402e) */
/* WARNING: Removing unreachable block (ram,0x00114043) */
/* WARNING: Removing unreachable block (ram,0x00113fb0) */
/* WARNING: Removing unreachable block (ram,0x00114048) */
/* WARNING: Removing unreachable block (ram,0x00114080) */
/* WARNING: Removing unreachable block (ram,0x001140d1) */
/* WARNING: Removing unreachable block (ram,0x0011408b) */
/* WARNING: Removing unreachable block (ram,0x00114056) */
/* WARNING: Removing unreachable block (ram,0x00113fd4) */
/* WARNING: Removing unreachable block (ram,0x00113fe8) */
/* WARNING: Removing unreachable block (ram,0x001140df) */
/* PhysicsServer3DWrapMT::shape_set_custom_solver_bias(RID, float) */

void __thiscall PhysicsServer3DWrapMT::shape_set_custom_solver_bias(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114129) */
/* WARNING: Removing unreachable block (ram,0x00114180) */
/* WARNING: Removing unreachable block (ram,0x00114250) */
/* WARNING: Removing unreachable block (ram,0x0011418f) */
/* WARNING: Removing unreachable block (ram,0x00114238) */
/* WARNING: Removing unreachable block (ram,0x001141b4) */
/* WARNING: Removing unreachable block (ram,0x001141c7) */
/* WARNING: Removing unreachable block (ram,0x0011413e) */
/* WARNING: Removing unreachable block (ram,0x001141cc) */
/* WARNING: Removing unreachable block (ram,0x00114208) */
/* WARNING: Removing unreachable block (ram,0x00114261) */
/* WARNING: Removing unreachable block (ram,0x00114213) */
/* WARNING: Removing unreachable block (ram,0x001141da) */
/* WARNING: Removing unreachable block (ram,0x00114162) */
/* WARNING: Removing unreachable block (ram,0x00114176) */
/* WARNING: Removing unreachable block (ram,0x0011426f) */
/* PhysicsServer3DWrapMT::body_set_user_flags(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::body_set_user_flags(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001142b9) */
/* WARNING: Removing unreachable block (ram,0x00114310) */
/* WARNING: Removing unreachable block (ram,0x001143e0) */
/* WARNING: Removing unreachable block (ram,0x0011431f) */
/* WARNING: Removing unreachable block (ram,0x001143c8) */
/* WARNING: Removing unreachable block (ram,0x00114344) */
/* WARNING: Removing unreachable block (ram,0x00114357) */
/* WARNING: Removing unreachable block (ram,0x001142ce) */
/* WARNING: Removing unreachable block (ram,0x0011435c) */
/* WARNING: Removing unreachable block (ram,0x00114398) */
/* WARNING: Removing unreachable block (ram,0x001143f1) */
/* WARNING: Removing unreachable block (ram,0x001143a3) */
/* WARNING: Removing unreachable block (ram,0x0011436a) */
/* WARNING: Removing unreachable block (ram,0x001142f2) */
/* WARNING: Removing unreachable block (ram,0x00114306) */
/* WARNING: Removing unreachable block (ram,0x001143ff) */
/* PhysicsServer3DWrapMT::area_remove_shape(RID, int) */

void __thiscall PhysicsServer3DWrapMT::area_remove_shape(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114449) */
/* WARNING: Removing unreachable block (ram,0x001144a0) */
/* WARNING: Removing unreachable block (ram,0x00114560) */
/* WARNING: Removing unreachable block (ram,0x001144af) */
/* WARNING: Removing unreachable block (ram,0x00114550) */
/* WARNING: Removing unreachable block (ram,0x001144d1) */
/* WARNING: Removing unreachable block (ram,0x001144e4) */
/* WARNING: Removing unreachable block (ram,0x0011445e) */
/* WARNING: Removing unreachable block (ram,0x001144e9) */
/* WARNING: Removing unreachable block (ram,0x00114520) */
/* WARNING: Removing unreachable block (ram,0x00114571) */
/* WARNING: Removing unreachable block (ram,0x0011452b) */
/* WARNING: Removing unreachable block (ram,0x001144f7) */
/* WARNING: Removing unreachable block (ram,0x00114482) */
/* WARNING: Removing unreachable block (ram,0x00114496) */
/* WARNING: Removing unreachable block (ram,0x0011457f) */
/* PhysicsServer3DWrapMT::joint_disable_collisions_between_bodies(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::joint_disable_collisions_between_bodies(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001145cb) */
/* WARNING: Removing unreachable block (ram,0x00114628) */
/* WARNING: Removing unreachable block (ram,0x001146f0) */
/* WARNING: Removing unreachable block (ram,0x00114637) */
/* WARNING: Removing unreachable block (ram,0x001146e0) */
/* WARNING: Removing unreachable block (ram,0x0011465e) */
/* WARNING: Removing unreachable block (ram,0x00114673) */
/* WARNING: Removing unreachable block (ram,0x001145e0) */
/* WARNING: Removing unreachable block (ram,0x00114678) */
/* WARNING: Removing unreachable block (ram,0x001146b0) */
/* WARNING: Removing unreachable block (ram,0x00114701) */
/* WARNING: Removing unreachable block (ram,0x001146bb) */
/* WARNING: Removing unreachable block (ram,0x00114686) */
/* WARNING: Removing unreachable block (ram,0x00114604) */
/* WARNING: Removing unreachable block (ram,0x00114618) */
/* WARNING: Removing unreachable block (ram,0x0011470f) */
/* PhysicsServer3DWrapMT::soft_body_set_drag_coefficient(RID, float) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_drag_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114759) */
/* WARNING: Removing unreachable block (ram,0x001147b0) */
/* WARNING: Removing unreachable block (ram,0x00114870) */
/* WARNING: Removing unreachable block (ram,0x001147bf) */
/* WARNING: Removing unreachable block (ram,0x00114860) */
/* WARNING: Removing unreachable block (ram,0x001147e1) */
/* WARNING: Removing unreachable block (ram,0x001147f4) */
/* WARNING: Removing unreachable block (ram,0x0011476e) */
/* WARNING: Removing unreachable block (ram,0x001147f9) */
/* WARNING: Removing unreachable block (ram,0x00114830) */
/* WARNING: Removing unreachable block (ram,0x00114881) */
/* WARNING: Removing unreachable block (ram,0x0011483b) */
/* WARNING: Removing unreachable block (ram,0x00114807) */
/* WARNING: Removing unreachable block (ram,0x00114792) */
/* WARNING: Removing unreachable block (ram,0x001147a6) */
/* WARNING: Removing unreachable block (ram,0x0011488f) */
/* PhysicsServer3DWrapMT::area_set_monitorable(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::area_set_monitorable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001148d9) */
/* WARNING: Removing unreachable block (ram,0x00114930) */
/* WARNING: Removing unreachable block (ram,0x001149f0) */
/* WARNING: Removing unreachable block (ram,0x0011493f) */
/* WARNING: Removing unreachable block (ram,0x001149e0) */
/* WARNING: Removing unreachable block (ram,0x00114961) */
/* WARNING: Removing unreachable block (ram,0x00114974) */
/* WARNING: Removing unreachable block (ram,0x001148ee) */
/* WARNING: Removing unreachable block (ram,0x00114979) */
/* WARNING: Removing unreachable block (ram,0x001149b0) */
/* WARNING: Removing unreachable block (ram,0x00114a01) */
/* WARNING: Removing unreachable block (ram,0x001149bb) */
/* WARNING: Removing unreachable block (ram,0x00114987) */
/* WARNING: Removing unreachable block (ram,0x00114912) */
/* WARNING: Removing unreachable block (ram,0x00114926) */
/* WARNING: Removing unreachable block (ram,0x00114a0f) */
/* PhysicsServer3DWrapMT::soft_body_set_ray_pickable(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_ray_pickable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114a59) */
/* WARNING: Removing unreachable block (ram,0x00114ab0) */
/* WARNING: Removing unreachable block (ram,0x00114b80) */
/* WARNING: Removing unreachable block (ram,0x00114abf) */
/* WARNING: Removing unreachable block (ram,0x00114b68) */
/* WARNING: Removing unreachable block (ram,0x00114ae4) */
/* WARNING: Removing unreachable block (ram,0x00114af7) */
/* WARNING: Removing unreachable block (ram,0x00114a6e) */
/* WARNING: Removing unreachable block (ram,0x00114afc) */
/* WARNING: Removing unreachable block (ram,0x00114b38) */
/* WARNING: Removing unreachable block (ram,0x00114b91) */
/* WARNING: Removing unreachable block (ram,0x00114b43) */
/* WARNING: Removing unreachable block (ram,0x00114b0a) */
/* WARNING: Removing unreachable block (ram,0x00114a92) */
/* WARNING: Removing unreachable block (ram,0x00114aa6) */
/* WARNING: Removing unreachable block (ram,0x00114b9f) */
/* PhysicsServer3DWrapMT::body_set_collision_layer(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::body_set_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114be9) */
/* WARNING: Removing unreachable block (ram,0x00114c40) */
/* WARNING: Removing unreachable block (ram,0x00114d10) */
/* WARNING: Removing unreachable block (ram,0x00114c4f) */
/* WARNING: Removing unreachable block (ram,0x00114cf8) */
/* WARNING: Removing unreachable block (ram,0x00114c74) */
/* WARNING: Removing unreachable block (ram,0x00114c87) */
/* WARNING: Removing unreachable block (ram,0x00114bfe) */
/* WARNING: Removing unreachable block (ram,0x00114c8c) */
/* WARNING: Removing unreachable block (ram,0x00114cc8) */
/* WARNING: Removing unreachable block (ram,0x00114d21) */
/* WARNING: Removing unreachable block (ram,0x00114cd3) */
/* WARNING: Removing unreachable block (ram,0x00114c9a) */
/* WARNING: Removing unreachable block (ram,0x00114c22) */
/* WARNING: Removing unreachable block (ram,0x00114c36) */
/* WARNING: Removing unreachable block (ram,0x00114d2f) */
/* PhysicsServer3DWrapMT::body_set_collision_mask(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::body_set_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114d7b) */
/* WARNING: Removing unreachable block (ram,0x00114dd8) */
/* WARNING: Removing unreachable block (ram,0x00114ea0) */
/* WARNING: Removing unreachable block (ram,0x00114de7) */
/* WARNING: Removing unreachable block (ram,0x00114e90) */
/* WARNING: Removing unreachable block (ram,0x00114e0e) */
/* WARNING: Removing unreachable block (ram,0x00114e23) */
/* WARNING: Removing unreachable block (ram,0x00114d90) */
/* WARNING: Removing unreachable block (ram,0x00114e28) */
/* WARNING: Removing unreachable block (ram,0x00114e60) */
/* WARNING: Removing unreachable block (ram,0x00114eb1) */
/* WARNING: Removing unreachable block (ram,0x00114e6b) */
/* WARNING: Removing unreachable block (ram,0x00114e36) */
/* WARNING: Removing unreachable block (ram,0x00114db4) */
/* WARNING: Removing unreachable block (ram,0x00114dc8) */
/* WARNING: Removing unreachable block (ram,0x00114ebf) */
/* PhysicsServer3DWrapMT::soft_body_set_pressure_coefficient(RID, float) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_pressure_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00114f0b) */
/* WARNING: Removing unreachable block (ram,0x00114f68) */
/* WARNING: Removing unreachable block (ram,0x00115030) */
/* WARNING: Removing unreachable block (ram,0x00114f77) */
/* WARNING: Removing unreachable block (ram,0x00115020) */
/* WARNING: Removing unreachable block (ram,0x00114f9e) */
/* WARNING: Removing unreachable block (ram,0x00114fb3) */
/* WARNING: Removing unreachable block (ram,0x00114f20) */
/* WARNING: Removing unreachable block (ram,0x00114fb8) */
/* WARNING: Removing unreachable block (ram,0x00114ff0) */
/* WARNING: Removing unreachable block (ram,0x00115041) */
/* WARNING: Removing unreachable block (ram,0x00114ffb) */
/* WARNING: Removing unreachable block (ram,0x00114fc6) */
/* WARNING: Removing unreachable block (ram,0x00114f44) */
/* WARNING: Removing unreachable block (ram,0x00114f58) */
/* WARNING: Removing unreachable block (ram,0x0011504f) */
/* PhysicsServer3DWrapMT::soft_body_set_damping_coefficient(RID, float) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_damping_coefficient(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00115099) */
/* WARNING: Removing unreachable block (ram,0x001150f0) */
/* WARNING: Removing unreachable block (ram,0x001151c0) */
/* WARNING: Removing unreachable block (ram,0x001150ff) */
/* WARNING: Removing unreachable block (ram,0x001151a8) */
/* WARNING: Removing unreachable block (ram,0x00115124) */
/* WARNING: Removing unreachable block (ram,0x00115137) */
/* WARNING: Removing unreachable block (ram,0x001150ae) */
/* WARNING: Removing unreachable block (ram,0x0011513c) */
/* WARNING: Removing unreachable block (ram,0x00115178) */
/* WARNING: Removing unreachable block (ram,0x001151d1) */
/* WARNING: Removing unreachable block (ram,0x00115183) */
/* WARNING: Removing unreachable block (ram,0x0011514a) */
/* WARNING: Removing unreachable block (ram,0x001150d2) */
/* WARNING: Removing unreachable block (ram,0x001150e6) */
/* WARNING: Removing unreachable block (ram,0x001151df) */
/* PhysicsServer3DWrapMT::soft_body_set_collision_layer(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_collision_layer(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00115229) */
/* WARNING: Removing unreachable block (ram,0x00115280) */
/* WARNING: Removing unreachable block (ram,0x00115350) */
/* WARNING: Removing unreachable block (ram,0x0011528f) */
/* WARNING: Removing unreachable block (ram,0x00115338) */
/* WARNING: Removing unreachable block (ram,0x001152b4) */
/* WARNING: Removing unreachable block (ram,0x001152c7) */
/* WARNING: Removing unreachable block (ram,0x0011523e) */
/* WARNING: Removing unreachable block (ram,0x001152cc) */
/* WARNING: Removing unreachable block (ram,0x00115308) */
/* WARNING: Removing unreachable block (ram,0x00115361) */
/* WARNING: Removing unreachable block (ram,0x00115313) */
/* WARNING: Removing unreachable block (ram,0x001152da) */
/* WARNING: Removing unreachable block (ram,0x00115262) */
/* WARNING: Removing unreachable block (ram,0x00115276) */
/* WARNING: Removing unreachable block (ram,0x0011536f) */
/* PhysicsServer3DWrapMT::soft_body_set_collision_mask(RID, unsigned int) */

void __thiscall PhysicsServer3DWrapMT::soft_body_set_collision_mask(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001153b9) */
/* WARNING: Removing unreachable block (ram,0x00115410) */
/* WARNING: Removing unreachable block (ram,0x001154d0) */
/* WARNING: Removing unreachable block (ram,0x0011541f) */
/* WARNING: Removing unreachable block (ram,0x001154c0) */
/* WARNING: Removing unreachable block (ram,0x00115441) */
/* WARNING: Removing unreachable block (ram,0x00115454) */
/* WARNING: Removing unreachable block (ram,0x001153ce) */
/* WARNING: Removing unreachable block (ram,0x00115459) */
/* WARNING: Removing unreachable block (ram,0x00115490) */
/* WARNING: Removing unreachable block (ram,0x001154e1) */
/* WARNING: Removing unreachable block (ram,0x0011549b) */
/* WARNING: Removing unreachable block (ram,0x00115467) */
/* WARNING: Removing unreachable block (ram,0x001153f2) */
/* WARNING: Removing unreachable block (ram,0x00115406) */
/* WARNING: Removing unreachable block (ram,0x001154ef) */
/* PhysicsServer3DWrapMT::area_set_ray_pickable(RID, bool) */

void __thiscall PhysicsServer3DWrapMT::area_set_ray_pickable(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011553b) */
/* WARNING: Removing unreachable block (ram,0x00115598) */
/* WARNING: Removing unreachable block (ram,0x00115660) */
/* WARNING: Removing unreachable block (ram,0x001155a7) */
/* WARNING: Removing unreachable block (ram,0x00115650) */
/* WARNING: Removing unreachable block (ram,0x001155ce) */
/* WARNING: Removing unreachable block (ram,0x001155e3) */
/* WARNING: Removing unreachable block (ram,0x00115550) */
/* WARNING: Removing unreachable block (ram,0x001155e8) */
/* WARNING: Removing unreachable block (ram,0x00115620) */
/* WARNING: Removing unreachable block (ram,0x00115671) */
/* WARNING: Removing unreachable block (ram,0x0011562b) */
/* WARNING: Removing unreachable block (ram,0x001155f6) */
/* WARNING: Removing unreachable block (ram,0x00115574) */
/* WARNING: Removing unreachable block (ram,0x00115588) */
/* WARNING: Removing unreachable block (ram,0x0011567f) */
/* PhysicsServer3DWrapMT::body_set_contacts_reported_depth_threshold(RID, float) */

void __thiscall PhysicsServer3DWrapMT::body_set_contacts_reported_depth_threshold(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001156cb) */
/* WARNING: Removing unreachable block (ram,0x00115728) */
/* WARNING: Removing unreachable block (ram,0x001157f0) */
/* WARNING: Removing unreachable block (ram,0x00115737) */
/* WARNING: Removing unreachable block (ram,0x001157e0) */
/* WARNING: Removing unreachable block (ram,0x0011575e) */
/* WARNING: Removing unreachable block (ram,0x00115773) */
/* WARNING: Removing unreachable block (ram,0x001156e0) */
/* WARNING: Removing unreachable block (ram,0x00115778) */
/* WARNING: Removing unreachable block (ram,0x001157b0) */
/* WARNING: Removing unreachable block (ram,0x00115801) */
/* WARNING: Removing unreachable block (ram,0x001157bb) */
/* WARNING: Removing unreachable block (ram,0x00115786) */
/* WARNING: Removing unreachable block (ram,0x00115704) */
/* WARNING: Removing unreachable block (ram,0x00115718) */
/* WARNING: Removing unreachable block (ram,0x0011580f) */
/* PhysicsServer3DWrapMT::shape_set_margin(RID, float) */

void __thiscall PhysicsServer3DWrapMT::shape_set_margin(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x0011585b) */
/* WARNING: Removing unreachable block (ram,0x001158b8) */
/* WARNING: Removing unreachable block (ram,0x00115980) */
/* WARNING: Removing unreachable block (ram,0x001158c7) */
/* WARNING: Removing unreachable block (ram,0x00115970) */
/* WARNING: Removing unreachable block (ram,0x001158ee) */
/* WARNING: Removing unreachable block (ram,0x00115903) */
/* WARNING: Removing unreachable block (ram,0x00115870) */
/* WARNING: Removing unreachable block (ram,0x00115908) */
/* WARNING: Removing unreachable block (ram,0x00115940) */
/* WARNING: Removing unreachable block (ram,0x00115991) */
/* WARNING: Removing unreachable block (ram,0x0011594b) */
/* WARNING: Removing unreachable block (ram,0x00115916) */
/* WARNING: Removing unreachable block (ram,0x00115894) */
/* WARNING: Removing unreachable block (ram,0x001158a8) */
/* WARNING: Removing unreachable block (ram,0x0011599f) */
/* PhysicsServer3DWrapMT::body_set_collision_priority(RID, float) */

void __thiscall PhysicsServer3DWrapMT::body_set_collision_priority(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x001159ef) */
/* WARNING: Removing unreachable block (ram,0x00115a50) */
/* WARNING: Removing unreachable block (ram,0x00115b18) */
/* WARNING: Removing unreachable block (ram,0x00115a5f) */
/* WARNING: Removing unreachable block (ram,0x00115b00) */
/* WARNING: Removing unreachable block (ram,0x00115a80) */
/* WARNING: Removing unreachable block (ram,0x00115a8f) */
/* WARNING: Removing unreachable block (ram,0x00115a04) */
/* WARNING: Removing unreachable block (ram,0x00115a94) */
/* WARNING: Removing unreachable block (ram,0x00115ad0) */
/* WARNING: Removing unreachable block (ram,0x00115b29) */
/* WARNING: Removing unreachable block (ram,0x00115adb) */
/* WARNING: Removing unreachable block (ram,0x00115aa2) */
/* WARNING: Removing unreachable block (ram,0x00115a2d) */
/* WARNING: Removing unreachable block (ram,0x00115a41) */
/* WARNING: Removing unreachable block (ram,0x00115b37) */
/* PhysicsServer3DWrapMT::body_add_constant_force(RID, Vector3 const&, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_add_constant_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00115b7f) */
/* WARNING: Removing unreachable block (ram,0x00115be0) */
/* WARNING: Removing unreachable block (ram,0x00115ca8) */
/* WARNING: Removing unreachable block (ram,0x00115bef) */
/* WARNING: Removing unreachable block (ram,0x00115c90) */
/* WARNING: Removing unreachable block (ram,0x00115c10) */
/* WARNING: Removing unreachable block (ram,0x00115c1f) */
/* WARNING: Removing unreachable block (ram,0x00115b94) */
/* WARNING: Removing unreachable block (ram,0x00115c24) */
/* WARNING: Removing unreachable block (ram,0x00115c60) */
/* WARNING: Removing unreachable block (ram,0x00115cb9) */
/* WARNING: Removing unreachable block (ram,0x00115c6b) */
/* WARNING: Removing unreachable block (ram,0x00115c32) */
/* WARNING: Removing unreachable block (ram,0x00115bbd) */
/* WARNING: Removing unreachable block (ram,0x00115bd1) */
/* WARNING: Removing unreachable block (ram,0x00115cc7) */
/* PhysicsServer3DWrapMT::body_apply_force(RID, Vector3 const&, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_force(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* WARNING: Removing unreachable block (ram,0x00115d0f) */
/* WARNING: Removing unreachable block (ram,0x00115d70) */
/* WARNING: Removing unreachable block (ram,0x00115e38) */
/* WARNING: Removing unreachable block (ram,0x00115d7f) */
/* WARNING: Removing unreachable block (ram,0x00115e20) */
/* WARNING: Removing unreachable block (ram,0x00115da0) */
/* WARNING: Removing unreachable block (ram,0x00115daf) */
/* WARNING: Removing unreachable block (ram,0x00115d24) */
/* WARNING: Removing unreachable block (ram,0x00115db4) */
/* WARNING: Removing unreachable block (ram,0x00115df0) */
/* WARNING: Removing unreachable block (ram,0x00115e49) */
/* WARNING: Removing unreachable block (ram,0x00115dfb) */
/* WARNING: Removing unreachable block (ram,0x00115dc2) */
/* WARNING: Removing unreachable block (ram,0x00115d4d) */
/* WARNING: Removing unreachable block (ram,0x00115d61) */
/* WARNING: Removing unreachable block (ram,0x00115e57) */
/* PhysicsServer3DWrapMT::body_apply_impulse(RID, Vector3 const&, Vector3 const&) */

void __thiscall PhysicsServer3DWrapMT::body_apply_impulse(void)

{
                    /* WARNING: Subroutine does not return */
  Thread::caller_id();
}



/* PhysicsServer3DWrapMT::set_active(bool) */

void __thiscall PhysicsServer3DWrapMT::set_active(PhysicsServer3DWrapMT *this,bool param_1)

{
  pthread_mutex_t *__mutex;
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) != *(long *)(in_FS_OFFSET + lRam0000000000115e88)) {
    __mutex = (pthread_mutex_t *)(this + 0x180);
    uVar3 = *(undefined8 *)(this + 0x178);
    iVar6 = pthread_mutex_lock(__mutex);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
    }
    uVar1 = *(uint *)(this + 0x1a8);
    uVar8 = (ulong)uVar1;
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
        *puVar7 = &PTR_call_0011d6d8;
        puVar7[2] = uVar3;
        puVar7[3] = 0x6f1;
        puVar7[4] = 0;
        *(bool *)(puVar7 + 5) = param_1;
        LOCK();
        this[0x208] = (PhysicsServer3DWrapMT)0x1;
        UNLOCK();
        if (*(long *)(this + 0x1f8) == -1) {
          pthread_mutex_unlock(__mutex);
          return;
        }
        WorkerThreadPool::notify_yield_over(WorkerThreadPool::singleton);
        pthread_mutex_unlock(__mutex);
        return;
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
  if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
    CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
  }
                    /* WARNING: Could not recover jumptable at 0x00115f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x178) + 0x6f0))(*(long **)(this + 0x178),param_1);
  return;
}



/* PhysicsServer3DWrapMT::shape_set_data(RID, Variant const&) */

void __thiscall
PhysicsServer3DWrapMT::shape_set_data
          (PhysicsServer3DWrapMT *this,undefined8 param_2,Variant *param_3)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000011605f)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001161ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x1a8))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00116218:
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
      *puVar8 = &PTR_call_0011ccb0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x1a9;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_3);
      puVar8[8] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116218;
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



/* PhysicsServer3DWrapMT::space_set_param(RID, PhysicsServer3D::SpaceParameter, float) */

void __thiscall
PhysicsServer3DWrapMT::space_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000116266)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001163c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x1f8))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00116440:
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
      *puVar7 = &PTR_call_0011cdc8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x1f9;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116440;
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



/* PhysicsServer3DWrapMT::body_set_shape(RID, int, RID) */

void __thiscall
PhysicsServer3DWrapMT::body_set_shape
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000116494)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001165f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x328))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00116668:
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
      *puVar7 = &PTR_call_0011ceb8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x329;
      puVar7[4] = 0;
      puVar7[5] = param_4;
      *(undefined4 *)(puVar7 + 6) = param_3;
      puVar7[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116668;
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



/* PhysicsServer3DWrapMT::area_attach_object_instance_id(RID, ObjectID) */

void __thiscall
PhysicsServer3DWrapMT::area_attach_object_instance_id
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001166af)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001167fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x288))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00116868:
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
      *puVar7 = &PTR_call_0011cfd0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x289;
      puVar7[4] = 0;
      puVar7[5] = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116868;
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



/* PhysicsServer3DWrapMT::area_set_param(RID, PhysicsServer3D::AreaParameter, Variant const&) */

void __thiscall
PhysicsServer3DWrapMT::area_set_param
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001168b4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x298))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00116a98:
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
      *puVar8 = &PTR_call_0011d020;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x299;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116a98;
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



/* PhysicsServer3DWrapMT::area_set_transform(RID, Transform3D const&) */

void __thiscall
PhysicsServer3DWrapMT::area_set_transform
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000116adf)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116c3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x2a0))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00116ca8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar12 = pthread_mutex_lock(local_48);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x68);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x60;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x2a1;
      puVar13[4] = 0;
      uVar6 = *param_3;
      uVar7 = param_3[1];
      uVar8 = param_3[2];
      uVar9 = param_3[3];
      uVar10 = param_3[4];
      uVar11 = param_3[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011d048;
      puVar13[2] = uVar3;
      puVar13[0xb] = param_2;
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      puVar13[8] = uVar9;
      puVar13[9] = uVar10;
      puVar13[10] = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116ca8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::body_set_shape_transform(RID, int, Transform3D const&) */

void __thiscall
PhysicsServer3DWrapMT::body_set_shape_transform
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000116cf4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116e63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x330))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00116ed8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar12 = pthread_mutex_lock(local_58);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x70);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x68;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x331;
      puVar13[4] = 0;
      uVar6 = *param_4;
      uVar7 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      uVar10 = param_4[4];
      uVar11 = param_4[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011cee0;
      puVar13[2] = uVar3;
      *(undefined4 *)(puVar13 + 0xb) = param_3;
      puVar13[0xc] = param_2;
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      puVar13[8] = uVar9;
      puVar13[9] = uVar10;
      puVar13[10] = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00116ed8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::body_set_mode(RID, PhysicsServer3D::BodyMode) */

void __thiscall
PhysicsServer3DWrapMT::body_set_mode
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000116f1f)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011706e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x310))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_001170d8:
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
      *puVar7 = &PTR_call_0011d138;
      puVar7[2] = uVar3;
      puVar7[3] = 0x311;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_001170d8;
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



/* PhysicsServer3DWrapMT::body_set_param(RID, PhysicsServer3D::BodyParameter, Variant const&) */

void __thiscall
PhysicsServer3DWrapMT::body_set_param
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000117124)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x3c8))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00117308:
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
      *puVar8 = &PTR_call_0011d188;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x3c9;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117308;
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



/* PhysicsServer3DWrapMT::body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */

void __thiscall
PhysicsServer3DWrapMT::body_set_state
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000117354)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001174c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x3e0))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00117538:
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
      *puVar8 = &PTR_call_0011d1d8;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x3e1;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117538;
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



/* PhysicsServer3DWrapMT::body_set_axis_lock(RID, PhysicsServer3D::BodyAxis, bool) */

void __thiscall
PhysicsServer3DWrapMT::body_set_axis_lock
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000117583)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001176dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x460))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00117750:
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
      *puVar7 = &PTR_call_0011d2a0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x461;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_4;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117750;
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



/* PhysicsServer3DWrapMT::body_set_force_integration_callback(RID, Callable const&, Variant const&)
    */

void __thiscall
PhysicsServer3DWrapMT::body_set_force_integration_callback
          (PhysicsServer3DWrapMT *this,undefined8 param_2,Callable *param_3,Variant *param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001177a4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117923. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x4c0))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00117998:
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
      *puVar8 = &PTR_call_0011d318;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x4c1;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      Callable::Callable((Callable *)(puVar8 + 8),param_3);
      puVar8[10] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117998;
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



/* PhysicsServer3DWrapMT::soft_body_update_rendering_server(RID,
   PhysicsServer3DRenderingServerHandler*) */

void __thiscall
PhysicsServer3DWrapMT::soft_body_update_rendering_server
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001179df)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x4e8))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00117b98:
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
      *puVar7 = &PTR_call_0011d340;
      puVar7[2] = uVar3;
      puVar7[3] = 0x4e9;
      puVar7[4] = 0;
      puVar7[5] = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117b98;
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



/* PhysicsServer3DWrapMT::soft_body_move_point(RID, int, Vector3 const&) */

void __thiscall
PhysicsServer3DWrapMT::soft_body_move_point
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000117be4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x5c8))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00117db8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar4 = *(undefined8 *)(this + 0x178);
  iVar8 = pthread_mutex_lock(local_58);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar10 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x48);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar5 = *(long *)(this + 0x1b0);
    uVar10 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar5 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar2) {
      puVar9 = (undefined8 *)(lVar5 + uVar10);
      puVar9[3] = 0x5c9;
      puVar9[4] = 0;
      uVar6 = *param_4;
      *(undefined1 *)(puVar9 + 1) = 0;
      puVar9[5] = uVar6;
      uVar3 = *(undefined4 *)(param_4 + 1);
      *puVar9 = &PTR_call_0011d390;
      puVar9[2] = uVar4;
      *(undefined4 *)(puVar9 + 6) = uVar3;
      *(undefined4 *)((long)puVar9 + 0x34) = param_3;
      puVar9[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117db8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* PhysicsServer3DWrapMT::pin_joint_set_param(RID, PhysicsServer3D::PinJointParam, float) */

void __thiscall
PhysicsServer3DWrapMT::pin_joint_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000117e06)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00117f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x630))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00117fe0:
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
      *puVar7 = &PTR_call_0011d430;
      puVar7[2] = uVar3;
      puVar7[3] = 0x631;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00117fe0;
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



/* PhysicsServer3DWrapMT::hinge_joint_set_param(RID, PhysicsServer3D::HingeJointParam, float) */

void __thiscall
PhysicsServer3DWrapMT::hinge_joint_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118036)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x670))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00118210:
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
      *puVar7 = &PTR_call_0011d4d0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x671;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118210;
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



/* PhysicsServer3DWrapMT::hinge_joint_set_flag(RID, PhysicsServer3D::HingeJointFlag, bool) */

void __thiscall
PhysicsServer3DWrapMT::hinge_joint_set_flag
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined1 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118263)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001183bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x680))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00118430:
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
      *puVar7 = &PTR_call_0011d520;
      puVar7[2] = uVar3;
      puVar7[3] = 0x681;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_4;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118430;
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



/* PhysicsServer3DWrapMT::slider_joint_set_param(RID, PhysicsServer3D::SliderJointParam, float) */

void __thiscall
PhysicsServer3DWrapMT::slider_joint_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118486)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001185e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x698))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00118660:
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
      *puVar7 = &PTR_call_0011d570;
      puVar7[2] = uVar3;
      puVar7[3] = 0x699;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118660;
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



/* PhysicsServer3DWrapMT::cone_twist_joint_set_param(RID, PhysicsServer3D::ConeTwistJointParam,
   float) */

void __thiscall
PhysicsServer3DWrapMT::cone_twist_joint_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001186b6)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x6b0))
                (param_1,*(long **)(this + 0x178),param_3,param_4);
      return;
    }
LAB_00118890:
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
      *puVar7 = &PTR_call_0011d5c0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x6b1;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 5) = param_1;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      puVar7[6] = param_3;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118890;
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



/* PhysicsServer3DWrapMT::body_add_shape(RID, RID, Transform3D const&, bool) */

void __thiscall
PhysicsServer3DWrapMT::body_add_shape
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001188e7)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 800))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_00118af0:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar12 = pthread_mutex_lock(local_58);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x78);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x70;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x321;
      puVar13[4] = 0;
      uVar6 = *param_4;
      uVar7 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      uVar10 = param_4[4];
      uVar11 = param_4[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011ce90;
      puVar13[2] = uVar3;
      *(undefined1 *)(puVar13 + 5) = param_5;
      puVar13[0xc] = param_3;
      puVar13[0xd] = param_2;
      *(undefined8 *)((long)puVar13 + 0x2c) = uVar6;
      *(undefined8 *)((long)puVar13 + 0x34) = uVar7;
      *(undefined8 *)((long)puVar13 + 0x3c) = uVar8;
      *(undefined8 *)((long)puVar13 + 0x44) = uVar9;
      *(undefined8 *)((long)puVar13 + 0x4c) = uVar10;
      *(undefined8 *)((long)puVar13 + 0x54) = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118af0;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::joint_make_pin(RID, RID, Vector3 const&, RID, Vector3 const&) */

void __thiscall
PhysicsServer3DWrapMT::joint_make_pin
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118b4a)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118cda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x628))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5,param_6);
      return;
    }
LAB_00118d48:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar4 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar8 = pthread_mutex_lock(local_58);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x68);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar10 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar5 = *(long *)(this + 0x1b0);
    uVar10 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar5 + (ulong)uVar1) = 0x60;
    if (uVar1 + 8 < uVar2) {
      puVar9 = (undefined8 *)(lVar5 + uVar10);
      puVar9[3] = 0x629;
      puVar9[4] = 0;
      uVar6 = *param_6;
      *puVar9 = &PTR_call_0011d408;
      puVar9[5] = uVar6;
      uVar3 = *(undefined4 *)(param_6 + 1);
      *(undefined1 *)(puVar9 + 1) = 0;
      *(undefined4 *)(puVar9 + 6) = uVar3;
      uVar6 = *param_4;
      puVar9[2] = uVar4;
      puVar9[8] = uVar6;
      uVar3 = *(undefined4 *)(param_4 + 1);
      puVar9[7] = param_5;
      *(undefined4 *)(puVar9 + 9) = uVar3;
      puVar9[10] = param_3;
      puVar9[0xb] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118d48;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* PhysicsServer3DWrapMT::generic_6dof_joint_set_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float) */

void __thiscall
PhysicsServer3DWrapMT::generic_6dof_joint_set_param
          (undefined4 param_1,PhysicsServer3DWrapMT *this,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118d9a)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00118f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x6c8))
                (param_1,*(long **)(this + 0x178),param_3,param_4,param_5);
      return;
    }
LAB_00118f80:
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
      *puVar7 = &PTR_call_0011d610;
      puVar7[2] = uVar3;
      puVar7[3] = 0x6c9;
      puVar7[4] = 0;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_5;
      *(undefined4 *)(puVar7 + 6) = param_4;
      puVar7[7] = param_3;
      *(undefined4 *)(puVar7 + 5) = param_1;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00118f80;
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



/* PhysicsServer3DWrapMT::generic_6dof_joint_set_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool) */

void __thiscall
PhysicsServer3DWrapMT::generic_6dof_joint_set_flag
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000118fd7)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x6d8))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_001191b8:
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
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x48);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar8 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar8 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x40;
    if (uVar1 + 8 < uVar2) {
      puVar7 = (undefined8 *)(lVar4 + uVar8);
      *puVar7 = &PTR_call_0011d660;
      *(undefined1 *)(puVar7 + 1) = 0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x6d9;
      puVar7[4] = 0;
      *(undefined1 *)(puVar7 + 5) = param_5;
      *(undefined4 *)((long)puVar7 + 0x2c) = param_4;
      *(undefined4 *)(puVar7 + 6) = param_3;
      puVar7[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_001191b8;
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



/* PhysicsServer3DWrapMT::joint_make_hinge_simple(RID, RID, Vector3 const&, Vector3 const&, RID,
   Vector3 const&, Vector3 const&) */

void __thiscall
PhysicsServer3DWrapMT::joint_make_hinge_simple
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam000000000011921d)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001193ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x668))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5,param_6);
      return;
    }
LAB_00119469:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar4 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar8 = pthread_mutex_lock(local_58);
  if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar8);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x78);
  uVar2 = *(uint *)(this + 0x1a8);
  uVar10 = (ulong)uVar1;
  if (uVar1 < uVar2) {
    lVar5 = *(long *)(this + 0x1b0);
    uVar10 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar5 + (ulong)uVar1) = 0x70;
    if (uVar1 + 8 < uVar2) {
      puVar9 = (undefined8 *)(lVar5 + uVar10);
      puVar9[3] = 0x669;
      puVar9[4] = 0;
      uVar6 = *param_8;
      *puVar9 = &PTR_call_0011d4a8;
      puVar9[5] = uVar6;
      uVar3 = *(undefined4 *)(param_8 + 1);
      *(undefined1 *)(puVar9 + 1) = 0;
      *(undefined4 *)(puVar9 + 6) = uVar3;
      uVar6 = *param_7;
      puVar9[2] = uVar4;
      *(undefined8 *)((long)puVar9 + 0x34) = uVar6;
      uVar3 = *(undefined4 *)(param_7 + 1);
      puVar9[8] = param_6;
      *(undefined4 *)((long)puVar9 + 0x3c) = uVar3;
      puVar9[9] = *param_5;
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(param_5 + 1);
      *(undefined8 *)((long)puVar9 + 0x54) = *param_4;
      *(undefined4 *)((long)puVar9 + 0x5c) = *(undefined4 *)(param_4 + 1);
      puVar9[0xc] = param_3;
      puVar9[0xd] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119469;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar10,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}



/* PhysicsServer3DWrapMT::body_attach_object_instance_id(RID, ObjectID) */

void __thiscall
PhysicsServer3DWrapMT::body_attach_object_instance_id
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001194af)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001195fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x368))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00119668:
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
      *puVar7 = &PTR_call_0011cfd0;
      puVar7[2] = uVar3;
      puVar7[3] = 0x369;
      puVar7[4] = 0;
      puVar7[5] = param_3;
      puVar7[6] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119668;
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



/* PhysicsServer3DWrapMT::area_set_shape(RID, int, RID) */

void __thiscall
PhysicsServer3DWrapMT::area_set_shape
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001196b4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x248))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00119888:
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
      *puVar7 = &PTR_call_0011ceb8;
      puVar7[2] = uVar3;
      puVar7[3] = 0x249;
      puVar7[4] = 0;
      puVar7[5] = param_4;
      *(undefined4 *)(puVar7 + 6) = param_3;
      puVar7[7] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119888;
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



/* PhysicsServer3DWrapMT::soft_body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */

void __thiscall
PhysicsServer3DWrapMT::soft_body_set_state
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,Variant *param_4)

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
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam00000000001198d4)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119a43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x548))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00119ab8:
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
      *puVar8 = &PTR_call_0011d1d8;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar8[2] = uVar3;
      puVar8[3] = 0x549;
      puVar8[4] = 0;
      Variant::Variant((Variant *)(puVar8 + 5),param_4);
      *(undefined4 *)(puVar8 + 8) = param_3;
      puVar8[9] = param_2;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119ab8;
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



/* PhysicsServer3DWrapMT::area_set_shape_transform(RID, int, Transform3D const&) */

void __thiscall
PhysicsServer3DWrapMT::area_set_shape_transform
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000119b04)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x250))
                (*(long **)(this + 0x178),param_2,param_3,param_4);
      return;
    }
LAB_00119ce8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_58 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar12 = pthread_mutex_lock(local_58);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x70);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x68;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x251;
      puVar13[4] = 0;
      uVar6 = *param_4;
      uVar7 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      uVar10 = param_4[4];
      uVar11 = param_4[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011cee0;
      puVar13[2] = uVar3;
      *(undefined4 *)(puVar13 + 0xb) = param_3;
      puVar13[0xc] = param_2;
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      puVar13[8] = uVar9;
      puVar13[9] = uVar10;
      puVar13[10] = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119ce8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::soft_body_set_transform(RID, Transform3D const&) */

void __thiscall
PhysicsServer3DWrapMT::soft_body_set_transform
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_48;
  char local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000119d2f)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00119e8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x558))(*(long **)(this + 0x178),param_2,param_3);
      return;
    }
LAB_00119ef8:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  local_48 = (pthread_mutex_t *)(this + 0x180);
  uVar3 = *(undefined8 *)(this + 0x178);
  iVar12 = pthread_mutex_lock(local_48);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_40 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x68);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x60;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x559;
      puVar13[4] = 0;
      uVar6 = *param_3;
      uVar7 = param_3[1];
      uVar8 = param_3[2];
      uVar9 = param_3[3];
      uVar10 = param_3[4];
      uVar11 = param_3[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011d048;
      puVar13[2] = uVar3;
      puVar13[0xb] = param_2;
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      puVar13[8] = uVar9;
      puVar13[9] = uVar10;
      puVar13[10] = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_00119ef8;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* PhysicsServer3DWrapMT::area_add_shape(RID, RID, Transform3D const&, bool) */

void __thiscall
PhysicsServer3DWrapMT::area_add_shape
          (PhysicsServer3DWrapMT *this,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  pthread_mutex_t *local_58;
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    Thread::caller_id();
  }
  if (*(long *)(this + 0x210) == *(long *)(in_FS_OFFSET + lRam0000000000119f47)) {
    if (this[0x208] != (PhysicsServer3DWrapMT)0x0) {
      CommandQueueMT::_flush((CommandQueueMT *)(this + 0x180));
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011a0cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x178) + 0x240))
                (*(long **)(this + 0x178),param_2,param_3,param_4,param_5);
      return;
    }
LAB_0011a150:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = *(undefined8 *)(this + 0x178);
  local_58 = (pthread_mutex_t *)(this + 0x180);
  iVar12 = pthread_mutex_lock(local_58);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar12);
  }
  uVar1 = *(uint *)(this + 0x1a8);
  uVar14 = (ulong)uVar1;
  local_50 = '\x01';
  LocalVector<unsigned_char,unsigned_int,false,false>::resize
            ((LocalVector<unsigned_char,unsigned_int,false,false> *)(this + 0x1a8),uVar1 + 0x78);
  uVar2 = *(uint *)(this + 0x1a8);
  if (uVar1 < uVar2) {
    lVar4 = *(long *)(this + 0x1b0);
    uVar14 = (ulong)(uVar1 + 8);
    *(undefined8 *)(lVar4 + (ulong)uVar1) = 0x70;
    if (uVar1 + 8 < uVar2) {
      puVar13 = (undefined8 *)(lVar4 + uVar14);
      puVar13[3] = 0x241;
      puVar13[4] = 0;
      uVar6 = *param_4;
      uVar7 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      uVar10 = param_4[4];
      uVar11 = param_4[5];
      *(undefined1 *)(puVar13 + 1) = 0;
      *puVar13 = &PTR_call_0011ce90;
      puVar13[2] = uVar3;
      *(undefined1 *)(puVar13 + 5) = param_5;
      puVar13[0xc] = param_3;
      puVar13[0xd] = param_2;
      *(undefined8 *)((long)puVar13 + 0x2c) = uVar6;
      *(undefined8 *)((long)puVar13 + 0x34) = uVar7;
      *(undefined8 *)((long)puVar13 + 0x3c) = uVar8;
      *(undefined8 *)((long)puVar13 + 0x44) = uVar9;
      *(undefined8 *)((long)puVar13 + 0x4c) = uVar10;
      *(undefined8 *)((long)puVar13 + 0x54) = uVar11;
      LOCK();
      this[0x208] = (PhysicsServer3DWrapMT)0x1;
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
      goto LAB_0011a150;
    }
  }
  _err_print_index_error
            ("operator[]","./core/templates/local_vector.h",0xb2,uVar14,(ulong)uVar2,"p_index",
             "count","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Variant const&), false,
   RID&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Variant_const&),false,RID&,Variant_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter, Variant const&), false, RID&, PhysicsServer3D::AreaParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter,Variant_const&),false,RID&,PhysicsServer3D::AreaParameter&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState, Variant const&), false, RID&, PhysicsServer3D::BodyState&, Variant
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState,Variant_const&),false,RID&,PhysicsServer3D::BodyState&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter, Variant const&), false, RID&, PhysicsServer3D::BodyParameter&,
   Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter,Variant_const&),false,RID&,PhysicsServer3D::BodyParameter&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&, Variant
   const&), false, RID&, Callable const&, Variant const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&,Variant_const&),false,RID&,Callable_const&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Callable const&), false,
   RID&, Callable const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Callable_const&),false,RID&,Callable_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<PhysicsServer3DWrapMT, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicsServer3DWrapMT,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicsServer3DWrapMT,void> *this)

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
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, float), false, RID&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,float),false,RID&,float&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID) const, float,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID>::
~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID)const,float,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::ShapeType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::ShapeType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::ShapeType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::ShapeType,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID) const, Variant,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID)const,Variant,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, bool), false, RID&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,bool),false,RID&,bool&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID) const, bool,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID)const,bool,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter, float), false, RID&, PhysicsServer3D::SpaceParameter&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter,float),false,RID&,PhysicsServer3D::SpaceParameter&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SpaceParameter) const, float, RID,
   PhysicsServer3D::SpaceParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SpaceParameter)const,float,RID,PhysicsServer3D::SpaceParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int), false, RID&,
   int&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int),false,RID&,int&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID), false, RID&,
   RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID),false,RID&,RID&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID) const, RID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID)const,RID,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   bool), false, RID&, RID&, Transform3D const&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,bool),false,RID&,RID&,Transform3D_const&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, RID), false, RID&,
   int&, RID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,RID),false,RID&,int&,RID&> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Transform3D const&),
   false, RID&, int&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Transform3D_const&),false,RID&,int&,Transform3D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, bool), false, RID&,
   int&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,bool),false,RID&,int&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, int (PhysicsServer3D::*)(RID) const, int,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,int(PhysicsServer3D::*)(RID)const,int,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, RID (PhysicsServer3D::*)(RID, int) const, RID, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,RID(PhysicsServer3D::*)(RID,int)const,RID,RID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID, int) const,
   Transform3D, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID,int)const,Transform3D,RID,int>
            *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID), false, RID&>::~Command()
    */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID),false,RID&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, ObjectID), false, RID&,
   ObjectID&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,ObjectID),false,RID&,ObjectID&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, ObjectID (PhysicsServer3D::*)(RID) const, ObjectID,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID>::
~CommandRet(CommandRet<PhysicsServer3D,ObjectID(PhysicsServer3D::*)(RID)const,ObjectID,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Transform3D const&),
   false, RID&, Transform3D const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Transform3D_const&),false,RID&,Transform3D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::AreaParameter) const, Variant, RID,
   PhysicsServer3D::AreaParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::AreaParameter)const,Variant,RID,PhysicsServer3D::AreaParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Transform3D (PhysicsServer3D::*)(RID) const,
   Transform3D, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,Transform3D(PhysicsServer3D::*)(RID)const,Transform3D,RID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, unsigned int), false,
   RID&, unsigned int&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,unsigned_int),false,RID&,unsigned_int&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, unsigned int (PhysicsServer3D::*)(RID) const,
   unsigned int, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,unsigned_int(PhysicsServer3D::*)(RID)const,unsigned_int,RID>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyMode), false, RID&, PhysicsServer3D::BodyMode&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyMode),false,RID&,PhysicsServer3D::BodyMode&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::BodyMode (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::BodyMode, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::BodyMode(PhysicsServer3D::*)(RID)const,PhysicsServer3D::BodyMode,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyParameter) const, Variant, RID,
   PhysicsServer3D::BodyParameter>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyParameter)const,Variant,RID,PhysicsServer3D::BodyParameter>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Variant (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyState) const, Variant, RID, PhysicsServer3D::BodyState>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
::~CommandRet(CommandRet<PhysicsServer3D,Variant(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyState)const,Variant,RID,PhysicsServer3D::BodyState>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&), false,
   RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>::
~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&),false,RID&,Vector3_const&>
         *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3 const&, Vector3
   const&), false, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3_const&,Vector3_const&),false,RID&,Vector3_const&,Vector3_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID) const, Vector3,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID>::
~CommandRet(CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID)const,Vector3,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis, bool), false, RID&, PhysicsServer3D::BodyAxis&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis,bool),false,RID&,PhysicsServer3D::BodyAxis&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::BodyAxis) const, bool, RID, PhysicsServer3D::BodyAxis>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::BodyAxis)const,bool,RID,PhysicsServer3D::BodyAxis>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, List<RID,
   DefaultAllocator>*), true, RID, List<RID, DefaultAllocator>*>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,List<RID,DefaultAllocator>*),true,RID,List<RID,DefaultAllocator>*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3DRenderingServerHandler*), false, RID&,
   PhysicsServer3DRenderingServerHandler*&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3DRenderingServerHandler*),false,RID&,PhysicsServer3DRenderingServerHandler*&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, AABB (PhysicsServer3D::*)(RID) const, AABB,
   RID>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID>::~CommandRet
          (CommandRet<PhysicsServer3D,AABB(PhysicsServer3D::*)(RID)const,AABB,RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, int, Vector3 const&),
   false, RID&, int&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,int,Vector3_const&),false,RID&,int&,Vector3_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, Vector3 (PhysicsServer3D::*)(RID, int) const,
   Vector3, RID, int>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>::~CommandRet
          (CommandRet<PhysicsServer3D,Vector3(PhysicsServer3D::*)(RID,int)const,Vector3,RID,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, int) const, bool, RID,
   int>::~CommandRet() */

void __thiscall
CommandQueueMT::CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int>::
~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,int)const,bool,RID,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&, RID,
   Vector3 const&), false, RID&, RID&, Vector3 const&, RID&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,RID,Vector3_const&),false,RID&,RID&,Vector3_const&,RID&,Vector3_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam, float), false, RID&, PhysicsServer3D::PinJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam,float),false,RID&,PhysicsServer3D::PinJointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::PinJointParam) const, float, RID, PhysicsServer3D::PinJointParam>::~CommandRet()
    */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::PinJointParam)const,float,RID,PhysicsServer3D::PinJointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Transform3D const&,
   RID, Transform3D const&), false, RID&, RID&, Transform3D const&, RID&, Transform3D
   const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Transform3D_const&,RID,Transform3D_const&),false,RID&,RID&,Transform3D_const&,RID&,Transform3D_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, RID, Vector3 const&,
   Vector3 const&, RID, Vector3 const&, Vector3 const&), false, RID&, RID&, Vector3 const&, Vector3
   const&, RID&, Vector3 const&, Vector3 const&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,RID,Vector3_const&,Vector3_const&,RID,Vector3_const&,Vector3_const&),false,RID&,RID&,Vector3_const&,Vector3_const&,RID&,Vector3_const&,Vector3_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam, float), false, RID&, PhysicsServer3D::HingeJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam,float),false,RID&,PhysicsServer3D::HingeJointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointParam) const, float, RID,
   PhysicsServer3D::HingeJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointParam)const,float,RID,PhysicsServer3D::HingeJointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag, bool), false, RID&, PhysicsServer3D::HingeJointFlag&,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag,bool),false,RID&,PhysicsServer3D::HingeJointFlag&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID,
   PhysicsServer3D::HingeJointFlag) const, bool, RID,
   PhysicsServer3D::HingeJointFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,PhysicsServer3D::HingeJointFlag)const,bool,RID,PhysicsServer3D::HingeJointFlag>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam, float), false, RID&, PhysicsServer3D::SliderJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam,float),false,RID&,PhysicsServer3D::SliderJointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::SliderJointParam) const, float, RID,
   PhysicsServer3D::SliderJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::SliderJointParam)const,float,RID,PhysicsServer3D::SliderJointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam, float), false, RID&, PhysicsServer3D::ConeTwistJointParam&,
   float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam,float),false,RID&,PhysicsServer3D::ConeTwistJointParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID,
   PhysicsServer3D::ConeTwistJointParam) const, float, RID,
   PhysicsServer3D::ConeTwistJointParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,PhysicsServer3D::ConeTwistJointParam)const,float,RID,PhysicsServer3D::ConeTwistJointParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisParam&, float&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam,float),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisParam&,float&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, float (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const, float, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
::~CommandRet(CommandRet<PhysicsServer3D,float(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam)const,float,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisParam>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool), false, RID&, Vector3::Axis&,
   PhysicsServer3D::G6DOFJointAxisFlag&, bool&>::~Command() */

void __thiscall
CommandQueueMT::
Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
::~Command(Command<PhysicsServer3D,void(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag,bool),false,RID&,Vector3::Axis&,PhysicsServer3D::G6DOFJointAxisFlag&,bool&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, bool (PhysicsServer3D::*)(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const, bool, RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
::~CommandRet(CommandRet<PhysicsServer3D,bool(PhysicsServer3D::*)(RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag)const,bool,RID,Vector3::Axis,PhysicsServer3D::G6DOFJointAxisFlag>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::CommandRet<PhysicsServer3D, PhysicsServer3D::JointType (PhysicsServer3D::*)(RID)
   const, PhysicsServer3D::JointType, RID>::~CommandRet() */

void __thiscall
CommandQueueMT::
CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
::~CommandRet(CommandRet<PhysicsServer3D,PhysicsServer3D::JointType(PhysicsServer3D::*)(RID)const,PhysicsServer3D::JointType,RID>
              *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(bool), false,
   bool&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(bool),false,bool&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(float), false,
   float&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(float),false,float&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(long), false,
   long&>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&>::
~Command(Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(long),false,long&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), true>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),true> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3D, void (PhysicsServer3D::*)(), false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false>::~Command
          (Command<PhysicsServer3D,void(PhysicsServer3D::*)(),false> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CommandQueueMT::Command<PhysicsServer3DWrapMT, void (PhysicsServer3DWrapMT::*)(),
   false>::~Command() */

void __thiscall
CommandQueueMT::Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false>::~Command
          (Command<PhysicsServer3DWrapMT,void(PhysicsServer3DWrapMT::*)(),false> *this)

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


