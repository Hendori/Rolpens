
/* tvg::TaskScheduler::init(unsigned int) */

void tvg::TaskScheduler::init(uint param_1)

{
  TaskSchedulerImpl *this;
  
  if (inst != (TaskSchedulerImpl *)0x0) {
    return;
  }
  this = (TaskSchedulerImpl *)operator_new(0x28);
  TaskSchedulerImpl::TaskSchedulerImpl(this,param_1);
  inst = this;
  return;
}



/* tvg::TaskScheduler::term() */

ulong tvg::TaskScheduler::term(void)

{
  pthread_mutex_t *__mutex;
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  code *pcVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  ulong in_RAX;
  long *plVar8;
  ulong extraout_RAX;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  char *in_FS_OFFSET;
  
  puVar5 = inst;
  if (inst == (ulong *)0x0) {
    inst = (ulong *)0x0;
    return in_RAX;
  }
  plVar8 = (long *)inst[2];
  if (plVar8 < plVar8 + (uint)inst[3]) {
    do {
      lVar2 = *plVar8;
      __mutex = (pthread_mutex_t *)(lVar2 + 0x10);
      uVar6 = pthread_mutex_lock(__mutex);
      if (uVar6 != 0) {
        plVar8 = (long *)(ulong)uVar6;
        uVar9 = std::__throw_system_error(uVar6);
        puVar5 = inst;
        if (inst == (ulong *)0x0) {
          return uVar9;
        }
        if (((int)inst[1] == 0) || (*in_FS_OFFSET == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00100211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,0);
          return uVar9;
        }
        *(undefined2 *)(plVar8 + 0xc) = 0x100;
        LOCK();
        puVar1 = puVar5 + 4;
        uVar9 = *puVar1;
        *(uint *)puVar1 = (uint)*puVar1 + 1;
        UNLOCK();
        uVar6 = (uint)puVar5[1];
        if (uVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar13 = 0;
        goto LAB_00100250;
      }
      *(undefined1 *)(lVar2 + 0x68) = 1;
      plVar8 = plVar8 + 1;
      pthread_mutex_unlock(__mutex);
      std::condition_variable::notify_all();
      uVar9 = (ulong)(uint)puVar5[3];
      plVar10 = (long *)puVar5[2] + uVar9;
    } while (plVar8 < plVar10);
    puVar11 = (undefined8 *)*puVar5;
    plVar8 = (long *)puVar5[2];
    if (puVar11 < puVar11 + (uint)puVar5[1]) goto LAB_001000d0;
  }
  else {
    puVar11 = (undefined8 *)*inst;
    if (puVar11 + (uint)inst[1] <= puVar11) goto LAB_00100156;
LAB_001000d0:
    do {
      std::thread::join();
      plVar8 = (long *)*puVar11;
      if (plVar8 != (long *)0x0) {
        if (*plVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        operator_delete(plVar8,8);
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 < (undefined8 *)(*puVar5 + (ulong)(uint)puVar5[1] * 8));
    plVar8 = (long *)puVar5[2];
    uVar9 = (ulong)(uint)puVar5[3];
    plVar10 = plVar8 + uVar9;
  }
  plVar12 = plVar8;
  if (plVar8 < plVar10) {
    do {
      pvVar3 = (void *)*plVar12;
      if (pvVar3 != (void *)0x0) {
        std::condition_variable::~condition_variable((condition_variable *)((long)pvVar3 + 0x38));
        operator_delete(pvVar3,0x70);
        plVar8 = (long *)puVar5[2];
        uVar9 = (ulong)(uint)puVar5[3];
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 < plVar8 + uVar9);
  }
LAB_00100156:
  free(plVar8);
  free((void *)*puVar5);
  operator_delete(puVar5,0x28);
  inst = (ulong *)0x0;
  return extraout_RAX;
  while( true ) {
    uVar6 = (uint)puVar5[1];
    uVar13 = uVar13 + 1;
    if (uVar6 <= uVar13) break;
LAB_00100250:
    puVar11 = *(undefined8 **)(puVar5[2] + ((ulong)((uint)uVar9 + uVar13) % (ulong)uVar6) * 8);
    iVar7 = pthread_mutex_trylock((pthread_mutex_t *)(puVar11 + 2));
    if (iVar7 == 0) {
      if (puVar11[1] == 0) {
        *puVar11 = plVar8;
        puVar11[1] = plVar8;
        *(undefined1 (*) [16])(plVar8 + 0xd) = (undefined1  [16])0x0;
      }
      else {
        *(long **)(puVar11[1] + 0x70) = plVar8;
        lVar2 = puVar11[1];
        plVar8[0xe] = 0;
        plVar8[0xd] = lVar2;
        puVar11[1] = plVar8;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(puVar11 + 2));
      goto LAB_001002a7;
    }
  }
  puVar11 = *(undefined8 **)(puVar5[2] + ((ulong)(uint)uVar9 % (ulong)uVar6) * 8);
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)(puVar11 + 2));
  if (iVar7 != 0) {
    std::__throw_system_error(iVar7);
    uVar9 = 0;
    if (inst != (ulong *)0x0) {
      uVar9 = (ulong)(uint)inst[1];
    }
    return uVar9;
  }
  if (puVar11[1] == 0) {
    *puVar11 = plVar8;
    puVar11[1] = plVar8;
    *(undefined1 (*) [16])(plVar8 + 0xd) = (undefined1  [16])0x0;
  }
  else {
    *(long **)(puVar11[1] + 0x70) = plVar8;
    lVar2 = puVar11[1];
    plVar8[0xe] = 0;
    plVar8[0xd] = lVar2;
    puVar11[1] = plVar8;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(puVar11 + 2));
LAB_001002a7:
  uVar9 = std::condition_variable::notify_one();
  return uVar9;
}



/* tvg::TaskScheduler::request(tvg::Task*) */

ulong tvg::TaskScheduler::request(Task *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  ulong in_RAX;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  char *in_FS_OFFSET;
  
  lVar6 = inst;
  if (inst == 0) {
    return in_RAX;
  }
  if ((*(int *)(inst + 8) == 0) || (*in_FS_OFFSET == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00100211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar8 = (**(code **)(*(long *)param_1 + 0x10))(param_1,0);
    return uVar8;
  }
  *(undefined2 *)(param_1 + 0x60) = 0x100;
  LOCK();
  puVar1 = (uint *)(lVar6 + 0x20);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar9 = *(uint *)(lVar6 + 8);
  if (uVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar10 = 0;
  do {
    puVar3 = *(undefined8 **)
              (*(long *)(lVar6 + 0x10) + ((ulong)(uVar2 + uVar10) % (ulong)uVar9) * 8);
    iVar7 = pthread_mutex_trylock((pthread_mutex_t *)(puVar3 + 2));
    if (iVar7 == 0) {
      if (puVar3[1] == 0) {
        *puVar3 = param_1;
        puVar3[1] = param_1;
        *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
      }
      else {
        *(Task **)(puVar3[1] + 0x70) = param_1;
        uVar4 = puVar3[1];
        *(undefined8 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x68) = uVar4;
        puVar3[1] = param_1;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(puVar3 + 2));
      goto LAB_001002a7;
    }
    uVar9 = *(uint *)(lVar6 + 8);
    uVar10 = uVar10 + 1;
  } while (uVar10 < uVar9);
  puVar3 = *(undefined8 **)(*(long *)(lVar6 + 0x10) + ((ulong)uVar2 % (ulong)uVar9) * 8);
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)(puVar3 + 2));
  if (iVar7 != 0) {
    std::__throw_system_error(iVar7);
    uVar8 = 0;
    if (inst != 0) {
      uVar8 = (ulong)*(uint *)(inst + 8);
    }
    return uVar8;
  }
  if (puVar3[1] == 0) {
    *puVar3 = param_1;
    puVar3[1] = param_1;
    *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
  }
  else {
    *(Task **)(puVar3[1] + 0x70) = param_1;
    uVar4 = puVar3[1];
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    puVar3[1] = param_1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(puVar3 + 2));
LAB_001002a7:
  uVar8 = std::condition_variable::notify_one();
  return uVar8;
}



/* tvg::TaskScheduler::threads() */

undefined4 tvg::TaskScheduler::threads(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (inst != 0) {
    uVar1 = *(undefined4 *)(inst + 8);
  }
  return uVar1;
}



/* tvg::TaskScheduler::async(bool) */

void tvg::TaskScheduler::async(bool param_1)

{
  undefined8 in_FS_OFFSET;
  
  *(bool *)in_FS_OFFSET = param_1;
  return;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned
   int)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_00100928;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned
   int)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_00100928;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x18);
  return;
}



/* tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned int) */

void __thiscall tvg::TaskSchedulerImpl::TaskSchedulerImpl(TaskSchedulerImpl *this,uint param_1)

{
  size_t __size;
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 (*pauVar4) [16];
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  long local_50;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  if (param_1 != 0) {
    *(uint *)(this + 0xc) = param_1;
    __size = (ulong)param_1 * 8;
    uVar6 = 0;
    pvVar2 = malloc(__size);
    *(uint *)(this + 0x1c) = param_1;
    *(void **)this = pvVar2;
    pvVar2 = malloc(__size);
    *(void **)(this + 0x10) = pvVar2;
    do {
      while( true ) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x70);
        *(undefined8 *)pauVar4[3] = 0;
        *pauVar4 = (undefined1  [16])0x0;
        pauVar4[1] = (undefined1  [16])0x0;
        pauVar4[2] = (undefined1  [16])0x0;
        std::condition_variable::condition_variable((condition_variable *)(pauVar4[3] + 8));
        uVar8 = *(uint *)(this + 0x18);
        pauVar4[6][8] = 0;
        uVar7 = uVar8 + 1;
        if (*(uint *)(this + 0x1c) < uVar7) {
          uVar8 = (uVar8 + 2 >> 1) + uVar8;
          *(uint *)(this + 0x1c) = uVar8;
          pvVar2 = realloc(*(void **)(this + 0x10),(ulong)uVar8 << 3);
          uVar8 = *(uint *)(this + 0x18);
          *(void **)(this + 0x10) = pvVar2;
          uVar7 = uVar8 + 1;
        }
        else {
          pvVar2 = *(void **)(this + 0x10);
        }
        *(uint *)(this + 0x18) = uVar7;
        *(undefined1 (**) [16])((long)pvVar2 + (ulong)uVar8 * 8) = pauVar4;
        puVar3 = (undefined8 *)operator_new(8);
        uVar8 = *(uint *)(this + 8);
        *puVar3 = 0;
        if (*(uint *)(this + 0xc) < uVar8 + 1) break;
        uVar6 = uVar6 + 1;
        *(uint *)(this + 8) = uVar8 + 1;
        *(undefined8 **)(*(long *)this + (ulong)uVar8 * 8) = puVar3;
        if (param_1 == uVar6) goto LAB_001005a7;
      }
      uVar6 = uVar6 + 1;
      uVar8 = (uVar8 + 2 >> 1) + uVar8;
      *(uint *)(this + 0xc) = uVar8;
      pvVar2 = realloc(*(void **)this,(ulong)uVar8 << 3);
      uVar8 = *(uint *)(this + 8);
      *(void **)this = pvVar2;
      *(uint *)(this + 8) = uVar8 + 1;
      *(undefined8 **)((long)pvVar2 + (ulong)uVar8 * 8) = puVar3;
    } while (param_1 != uVar6);
LAB_001005a7:
    uVar5 = 0;
    do {
      local_50 = 0;
      local_48 = (long *)operator_new(0x18);
      *local_48 = (long)&PTR___State_impl_00100928;
      *(int *)(local_48 + 1) = (int)uVar5;
      local_48[2] = (long)this;
      std::thread::_M_start_thread(&local_50,&local_48,std::thread::_M_thread_deps_never_run);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 8))();
      }
      plVar1 = *(long **)(*(long *)this + uVar5 * 8);
      if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      uVar5 = uVar5 + 1;
      *plVar1 = local_50;
    } while (param_1 != uVar5);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* tvg::TaskSchedulerImpl::run(unsigned int) */

void __thiscall tvg::TaskSchedulerImpl::run(TaskSchedulerImpl *this,uint param_1)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    uVar6 = *(uint *)(this + 8);
    uVar8 = 0;
    if ((uVar6 & 0x7fffffff) != 0) {
      do {
        while( true ) {
          plVar3 = *(long **)(*(long *)(this + 0x10) + ((ulong)(param_1 + uVar8) % (ulong)uVar6) * 8
                             );
          ppVar1 = (pthread_mutex_t *)(plVar3 + 2);
          iVar5 = pthread_mutex_trylock(ppVar1);
          if (iVar5 == 0) break;
          uVar6 = *(uint *)(this + 8);
          uVar8 = uVar8 + 1;
          if (uVar6 * 2 <= uVar8) goto LAB_0010072b;
        }
        plVar7 = (long *)*plVar3;
        if (plVar7 != (long *)0x0) {
          lVar4 = plVar7[0xe];
          *plVar3 = lVar4;
          if (lVar4 == 0) {
            plVar3[1] = 0;
          }
          pthread_mutex_unlock(ppVar1);
          goto LAB_001006ae;
        }
        uVar8 = uVar8 + 1;
        pthread_mutex_unlock(ppVar1);
        uVar6 = *(uint *)(this + 8);
      } while (uVar8 < uVar6 * 2);
    }
LAB_0010072b:
    plVar3 = *(long **)(*(long *)(this + 0x10) + (ulong)param_1 * 8);
    ppVar1 = (pthread_mutex_t *)(plVar3 + 2);
    iVar5 = pthread_mutex_lock(ppVar1);
    if (iVar5 != 0) {
LAB_00100860:
      std::__throw_system_error(iVar5);
LAB_00100867:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    plVar7 = (long *)*plVar3;
    if (plVar7 == (long *)0x0) {
      do {
        if ((char)plVar3[0xd] != '\0') {
          if (ppVar1 != (pthread_mutex_t *)0x0) {
            pthread_mutex_unlock(ppVar1);
          }
          if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
          goto LAB_00100867;
        }
        std::condition_variable::wait((unique_lock *)(plVar3 + 7));
        plVar7 = (long *)*plVar3;
      } while (plVar7 == (long *)0x0);
      lVar4 = plVar7[0xe];
      *plVar3 = lVar4;
      if (lVar4 == 0) {
        plVar3[1] = 0;
      }
    }
    else {
      lVar4 = plVar7[0xe];
      *plVar3 = lVar4;
      if (lVar4 == 0) {
        plVar3[1] = 0;
      }
    }
    if (ppVar1 != (pthread_mutex_t *)0x0) {
      pthread_mutex_unlock(ppVar1);
    }
LAB_001006ae:
    (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + 1);
    iVar5 = pthread_mutex_lock((pthread_mutex_t *)(plVar7 + 1));
    if (iVar5 != 0) goto LAB_00100860;
    *(undefined1 *)(plVar7 + 0xc) = 1;
    std::condition_variable::notify_one();
    pthread_mutex_unlock((pthread_mutex_t *)(plVar7 + 1));
  } while( true );
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned
   int)::{lambda()#1}> > >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::{lambda()#1}>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::_lambda()_1_>>>
         *this)

{
  tvg::TaskSchedulerImpl::run(*(TaskSchedulerImpl **)(this + 0x10),*(uint *)(this + 8));
  return;
}



/* tvg::TaskScheduler::request(tvg::Task*) [clone .cold] */

void tvg::TaskScheduler::request(Task *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Control flow encountered bad instruction data */
/* tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned int) */

void __thiscall tvg::TaskSchedulerImpl::TaskSchedulerImpl(TaskSchedulerImpl *this,uint param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned
   int)::{lambda()#1}> > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<tvg::TaskSchedulerImpl::TaskSchedulerImpl(unsigned_int)::_lambda()_1_>>>
               *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


