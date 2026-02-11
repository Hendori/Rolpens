
/* JoltJobSystem::GetMaxConcurrency() const */

undefined4 __thiscall JoltJobSystem::GetMaxConcurrency(JoltJobSystem *this)

{
  return *(undefined4 *)(this + 0xc0);
}



/* JoltJobSystem::FreeJob(JPH::JobSystem::Job*) */

undefined1  [16] __thiscall JoltJobSystem::FreeJob(JoltJobSystem *this,Job *param_1)

{
  long lVar1;
  Job *pJVar2;
  Job *pJVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  do {
    pJVar3 = Job::completed_head;
    LOCK();
    lVar1 = *(long *)(param_1 + 0x48);
    *(Job **)(param_1 + 0x48) = Job::completed_head;
    UNLOCK();
    LOCK();
    bVar4 = pJVar3 != Job::completed_head;
    pJVar2 = param_1;
    if (bVar4) {
      pJVar3 = Job::completed_head;
      pJVar2 = Job::completed_head;
    }
    Job::completed_head = pJVar2;
    UNLOCK();
  } while (bVar4);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = pJVar3;
  return auVar5;
}



/* JoltJobSystem::Job::Job(char const*, JPH::Color, JPH::JobSystem*, std::function<void ()> const&,
   unsigned int) */

void __thiscall
JoltJobSystem::Job::Job
          (Job *this,undefined8 param_1,undefined8 param_3,undefined8 param_4,long param_5,
          undefined4 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_5 + 0x10);
  *(undefined8 *)this = param_4;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(this + 0x10,param_5,2);
    uVar2 = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(this + 0x28) = uVar2;
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = param_6;
  *(undefined8 *)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}



/* JoltJobSystem::Job::~Job() */

void __thiscall JoltJobSystem::Job::~Job(Job *this)

{
  if (*(long *)(this + 0x40) != -1) {
    WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
  }
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
    return;
  }
  return;
}



/* JoltJobSystem::Job::push_completed(JoltJobSystem::Job*) */

undefined1  [16] JoltJobSystem::Job::push_completed(Job *param_1)

{
  long lVar1;
  Job *pJVar2;
  Job *pJVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  
  do {
    pJVar3 = completed_head;
    LOCK();
    lVar1 = *(long *)(param_1 + 0x48);
    *(Job **)(param_1 + 0x48) = completed_head;
    UNLOCK();
    LOCK();
    bVar4 = pJVar3 != completed_head;
    pJVar2 = param_1;
    if (bVar4) {
      pJVar3 = completed_head;
      pJVar2 = completed_head;
    }
    completed_head = pJVar2;
    UNLOCK();
  } while (bVar4);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = pJVar3;
  return auVar5;
}



/* WARNING: Removing unreachable block (ram,0x00100144) */
/* JoltJobSystem::Job::pop_completed() */

long JoltJobSystem::Job::pop_completed(void)

{
  long lVar1;
  
  lVar1 = completed_head;
  if (lVar1 != 0) {
    LOCK();
    completed_head = *(undefined8 *)(lVar1 + 0x48);
    UNLOCK();
    return lVar1;
  }
  return 0;
}



/* JoltJobSystem::Job::queue() */

void __thiscall JoltJobSystem::Job::queue(Job *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  UNLOCK();
  if (queue()::task_name == '\0') {
    iVar2 = __cxa_guard_acquire(&queue()::task_name);
    if (iVar2 != 0) {
      queue()::task_name = 0;
      String::parse_latin1((StrRange *)&queue()::task_name);
      __cxa_atexit(String::~String,&queue()::task_name,&__dso_handle);
      __cxa_guard_release(&queue()::task_name);
    }
  }
  uVar3 = WorkerThreadPool::add_native_task
                    (WorkerThreadPool::singleton,_execute,SUB81(this,0),(String *)0x1);
  *(undefined8 *)(this + 0x40) = uVar3;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltJobSystem::QueueJob(JPH::JobSystem::Job*) */

void __thiscall JoltJobSystem::QueueJob(JoltJobSystem *this,Job *param_1)

{
  Job::queue((Job *)param_1);
  return;
}



/* JoltJobSystem::QueueJobs(JPH::JobSystem::Job**, unsigned int) */

void __thiscall JoltJobSystem::QueueJobs(JoltJobSystem *this,Job **param_1,uint param_2)

{
  Job **ppJVar1;
  Job *this_00;
  
  if (param_2 != 0) {
    ppJVar1 = param_1 + param_2;
    do {
      this_00 = (Job *)*param_1;
      param_1 = param_1 + 1;
      Job::queue(this_00);
    } while (param_1 != ppJVar1);
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001002c4) */
/* JoltJobSystem::_reclaim_jobs() */

void __thiscall JoltJobSystem::_reclaim_jobs(JoltJobSystem *this)

{
  JoltJobSystem *pJVar1;
  JoltJobSystem *pJVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  pJVar1 = this + 0xb0;
  while( true ) {
    if (Job::completed_head == 0) {
      return;
    }
    lVar6 = *(long *)(Job::completed_head + 0x48);
    LOCK();
    UNLOCK();
    if (Job::completed_head == 0) break;
    uVar5 = *(uint *)(Job::completed_head + 0x50);
    lVar3 = *(long *)(*(long *)(this + 0x58) +
                     (ulong)(uVar5 >> ((byte)*(undefined4 *)(this + 0x44) & 0x1f)) * 8) +
            (ulong)(uVar5 & *(uint *)(this + 0x48)) * 0x58;
    Job::completed_head = lVar6;
    if (*(long *)(lVar3 + 0x40) != -1) {
      WorkerThreadPool::wait_for_task_completion(WorkerThreadPool::singleton);
    }
    if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
      (**(code **)(lVar3 + 0x20))(lVar3 + 0x10,lVar3 + 0x10,3);
    }
    do {
      lVar7 = *(long *)pJVar1;
      *(int *)(lVar3 + 0x50) = (int)lVar7;
      LOCK();
      pJVar2 = this + 0xa8;
      iVar4 = *(int *)pJVar2;
      *(int *)pJVar2 = *(int *)pJVar2 + 1;
      UNLOCK();
      LOCK();
      lVar6 = *(long *)pJVar1;
      if (lVar7 == lVar6) {
        *(long *)pJVar1 = CONCAT44(iVar4,uVar5);
      }
      UNLOCK();
    } while (lVar7 != lVar6);
  }
  Job::completed_head = lVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltJobSystem::CreateJob(char const*, JPH::Color, std::function<void ()> const&, unsigned int) */

undefined8 *
JoltJobSystem::CreateJob
          (undefined8 *param_1,JoltJobSystem *param_2,undefined8 param_3,undefined8 param_4,
          long param_5,int param_6)

{
  JoltJobSystem *pJVar1;
  JoltJobSystem *pJVar2;
  pthread_mutex_t *__mutex;
  undefined8 *puVar3;
  Job *this;
  long lVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  JobSystemWithBarrier *this_00;
  uint uVar15;
  
  pJVar1 = param_2 + 0xb0;
LAB_001003a0:
  while( true ) {
    lVar7 = *(long *)pJVar1;
    uVar15 = (uint)lVar7;
    if (uVar15 == 0xffffffff) break;
    uVar5 = *(undefined4 *)
             (*(long *)(*(long *)(param_2 + 0x58) +
                       (ulong)(uVar15 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8) +
              (ulong)(uVar15 & *(uint *)(param_2 + 0x48)) * 0x58 + 0x50);
    LOCK();
    pJVar2 = param_2 + 0xa8;
    iVar12 = *(int *)pJVar2;
    *(int *)pJVar2 = *(int *)pJVar2 + 1;
    UNLOCK();
    LOCK();
    lVar4 = *(long *)pJVar1;
    if (lVar7 == lVar4) {
      *(long *)pJVar1 = CONCAT44(iVar12,uVar5);
    }
    UNLOCK();
    if (lVar7 == lVar4) {
      puVar3 = (undefined8 *)
               (*(long *)(*(long *)(param_2 + 0x58) +
                         (ulong)(uVar15 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8) +
               (ulong)(uVar15 & *(uint *)(param_2 + 0x48)) * 0x58);
      if (puVar3 != (undefined8 *)0x0) {
        pcVar8 = *(code **)(param_5 + 0x10);
        *puVar3 = param_2;
        puVar3[1] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
        if (pcVar8 != (code *)0x0) {
          (*pcVar8)(puVar3 + 2,param_5,2);
          uVar13 = *(undefined8 *)(param_5 + 0x18);
          puVar3[4] = *(undefined8 *)(param_5 + 0x10);
          puVar3[5] = uVar13;
        }
        *(undefined4 *)(puVar3 + 6) = 0;
        *(int *)((long)puVar3 + 0x34) = param_6;
        puVar3[7] = param_3;
        puVar3[8] = 0xffffffffffffffff;
        puVar3[9] = 0;
      }
      *(uint *)(puVar3 + 10) = uVar15;
LAB_0010048d:
      this = (Job *)(*(long *)(*(long *)(param_2 + 0x58) +
                              (ulong)(uVar15 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8)
                    + (ulong)(uVar15 & *(uint *)(param_2 + 0x48)) * 0x58);
      *param_1 = this;
      if (this != (Job *)0x0) {
        LOCK();
        *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
        UNLOCK();
      }
      if (param_6 == 0) {
        Job::queue(this);
      }
      return param_1;
    }
  }
  LOCK();
  pJVar2 = param_2 + 0xb8;
  uVar15 = *(uint *)pJVar2;
  *(uint *)pJVar2 = *(uint *)pJVar2 + 1;
  UNLOCK();
  if (*(uint *)(param_2 + 0x50) <= uVar15) {
    __mutex = (pthread_mutex_t *)(param_2 + 0x80);
    uVar11 = pthread_mutex_lock(__mutex);
    if (uVar11 != 0) {
      this_00 = (JobSystemWithBarrier *)(ulong)uVar11;
      std::__throw_system_error(uVar11);
      JPH::JobSystemWithBarrier::JobSystemWithBarrier(this_00,8);
      *(undefined8 *)(this_00 + 0xa0) = 0;
      *(undefined ***)this_00 = &PTR__JoltJobSystem_00101738;
      lVar7 = WorkerThreadPool::singleton;
      *(undefined1 (*) [16])(this_00 + 0x80) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this_00 + 0x90) = (undefined1  [16])0x0;
      uVar10 = _UNK_001019e8;
      uVar13 = __LC4;
      iVar12 = *(int *)(lVar7 + 0x290);
      *(undefined8 *)(this_00 + 0x58) = 0;
      *(undefined8 *)(this_00 + 0x40) = uVar13;
      *(undefined8 *)(this_00 + 0x48) = uVar10;
      if (iVar12 < 1) {
        iVar12 = 1;
      }
      *(int *)(this_00 + 0xc0) = iVar12;
      uVar13 = (*JPH::Allocate)(8);
      *(undefined4 *)(this_00 + 0x50) = 0;
      *(undefined8 *)(this_00 + 0x58) = uVar13;
      LOCK();
      *(undefined4 *)(this_00 + 0xb8) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(this_00 + 0xa8) = 1;
      UNLOCK();
      LOCK();
      puVar3 = *(undefined8 **)(this_00 + 0xb0);
      *(undefined8 *)(this_00 + 0xb0) = 0xffffffff;
      UNLOCK();
      return puVar3;
    }
    uVar11 = *(uint *)(param_2 + 0x50);
    if (uVar11 <= uVar15) {
      uVar6 = *(uint *)(param_2 + 0x40);
      while( true ) {
        uVar9 = (ulong)uVar11 / (ulong)uVar6;
        if ((int)uVar9 == *(int *)(param_2 + 0x4c)) break;
        lVar7 = *(long *)(param_2 + 0x58);
        uVar13 = (*JPH::AlignedAllocate)((ulong)uVar6 * 0x58,0x40);
        uVar6 = *(uint *)(param_2 + 0x40);
        *(undefined8 *)(lVar7 + uVar9 * 8) = uVar13;
        uVar11 = *(int *)(param_2 + 0x50) + uVar6;
        *(uint *)(param_2 + 0x50) = uVar11;
        if (uVar15 < uVar11) goto LAB_001006a0;
      }
      pthread_mutex_unlock(__mutex);
      if (CreateJob(char_const*,JPH::Color,std::function<void()>const&,unsigned_int)::first_print !=
          '\0') {
        _err_print_error("CreateJob","modules/jolt_physics/spaces/jolt_job_system.cpp",0x7d,
                         "Jolt Physics job system exceeded the maximum number of jobs. This should not happen. Please report this. Waiting for jobs to become available..."
                         ,0,1);
        CreateJob(char_const*,JPH::Color,std::function<void()>const&,unsigned_int)::first_print =
             '\0';
      }
      plVar14 = (long *)OS::get_singleton();
      (**(code **)(*plVar14 + 0x1f8))(plVar14,100);
      _reclaim_jobs(param_2);
      goto LAB_001003a0;
    }
LAB_001006a0:
    pthread_mutex_unlock(__mutex);
  }
  puVar3 = (undefined8 *)
           (*(long *)(*(long *)(param_2 + 0x58) +
                     (ulong)(uVar15 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8) +
           (ulong)(uVar15 & *(uint *)(param_2 + 0x48)) * 0x58);
  if (puVar3 != (undefined8 *)0x0) {
    pcVar8 = *(code **)(param_5 + 0x10);
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(puVar3 + 2,param_5,2);
      uVar13 = *(undefined8 *)(param_5 + 0x18);
      puVar3[4] = *(undefined8 *)(param_5 + 0x10);
      puVar3[5] = uVar13;
    }
    *(undefined4 *)(puVar3 + 6) = 0;
    *(int *)((long)puVar3 + 0x34) = param_6;
    puVar3[7] = param_3;
    puVar3[8] = 0xffffffffffffffff;
    puVar3[9] = 0;
  }
  *(uint *)(puVar3 + 10) = uVar15;
  goto LAB_0010048d;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltJobSystem::JoltJobSystem() */

undefined8 __thiscall JoltJobSystem::JoltJobSystem(JoltJobSystem *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  JPH::JobSystemWithBarrier::JobSystemWithBarrier((JobSystemWithBarrier *)this,8);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined ***)this = &PTR__JoltJobSystem_00101738;
  lVar2 = WorkerThreadPool::singleton;
  *(undefined1 (*) [16])(this + 0x80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x90) = (undefined1  [16])0x0;
  uVar1 = _UNK_001019e8;
  uVar4 = __LC4;
  iVar3 = *(int *)(lVar2 + 0x290);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x48) = uVar1;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  *(int *)(this + 0xc0) = iVar3;
  uVar4 = (*JPH::Allocate)(8);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar4;
  LOCK();
  *(undefined4 *)(this + 0xb8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(this + 0xa8) = 1;
  UNLOCK();
  LOCK();
  uVar4 = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0xffffffff;
  UNLOCK();
  return uVar4;
}



/* JoltJobSystem::pre_step() */

void JoltJobSystem::pre_step(void)

{
  return;
}



/* JoltJobSystem::post_step() */

void __thiscall JoltJobSystem::post_step(JoltJobSystem *this)

{
  _reclaim_jobs(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltJobSystem::flush_timings() */

void JoltJobSystem::flush_timings(void)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((flush_timings()::profiler_name == '\0') &&
     (iVar3 = __cxa_guard_acquire(&flush_timings()::profiler_name), iVar3 != 0)) {
    StringName::StringName((StringName *)&flush_timings()::profiler_name,"servers",false);
    __cxa_atexit(StringName::~StringName,&flush_timings()::profiler_name,&__dso_handle);
    __cxa_guard_release(&flush_timings()::profiler_name);
    cVar2 = EngineDebugger::is_profiling((StringName *)&flush_timings()::profiler_name);
  }
  else {
    cVar2 = EngineDebugger::is_profiling((StringName *)&flush_timings()::profiler_name);
  }
  puVar1 = (undefined8 *)timings_by_job._24_8_;
  if (cVar2 != '\0') {
    Array::Array(local_50);
    for (puVar1 = (undefined8 *)timings_by_job._24_8_; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      Variant::Variant((Variant *)local_48,(char *)puVar1[2]);
      Array::push_back((Variant *)local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_48,(double)(ulong)puVar1[3] / __LC7);
      Array::push_back((Variant *)local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    Variant::Variant((Variant *)local_48,"physics_3d");
    Array::push_front((Variant *)local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    EngineDebugger::profiler_add_frame_data((StringName *)&flush_timings()::profiler_name,local_50);
    Array::~Array(local_50);
    puVar1 = (undefined8 *)timings_by_job._24_8_;
  }
  for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    puVar1[3] = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltJobSystem::Job::_execute(void*) */

void JoltJobSystem::Job::_execute(void *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long in_FS_OFFSET;
  bool bVar8;
  void *local_28;
  long local_20;
  
  piVar7 = (int *)((long)param_1 + 0x34);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Time::get_singleton();
  lVar3 = Time::get_ticks_usec();
  LOCK();
  iVar1 = *piVar7;
  if (iVar1 == 0) {
    *piVar7 = -0x1f1f1f20;
  }
  UNLOCK();
  if (iVar1 == 0) {
    if (*(long *)((long)param_1 + 0x20) == 0) {
      piVar7 = (int *)std::__throw_bad_function_call();
      *piVar7 = *piVar7 + (int)piVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    (**(code **)((long)param_1 + 0x28))((long)param_1 + 0x10);
    plVar6 = *(long **)((long)param_1 + 8);
    do {
      LOCK();
      plVar4 = *(long **)((long)param_1 + 8);
      bVar8 = plVar6 == plVar4;
      if (bVar8) {
        *(long *)((long)param_1 + 8) = -1;
        plVar4 = plVar6;
      }
      UNLOCK();
      plVar6 = plVar4;
    } while (!bVar8);
    LOCK();
    if (*piVar7 == -0x1f1f1f20) {
      *piVar7 = -0x2f2f2f30;
    }
    UNLOCK();
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
    }
  }
  Time::get_singleton();
  lVar5 = Time::get_ticks_usec();
  while( true ) {
    LOCK();
    bVar8 = timings_lock == '\0';
    if (bVar8) {
      timings_lock = '\x01';
    }
    UNLOCK();
    if (bVar8) break;
    do {
    } while (timings_lock != '\0');
  }
  local_28 = *(void **)((long)param_1 + 0x38);
  plVar6 = (long *)HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
                   ::operator[]((HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
                                 *)timings_by_job,&local_28);
  *plVar6 = *plVar6 + (lVar5 - lVar3);
  timings_lock = 0;
  LOCK();
  piVar7 = (int *)((long)param_1 + 0x30);
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (*piVar7 == 0) {
                    /* WARNING: Load size is inaccurate */
    UNRECOVERED_JUMPTABLE = *(code **)(**param_1 + 0x48);
    if (UNRECOVERED_JUMPTABLE != FreeJob) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(*param_1,param_1);
        return;
      }
      goto LAB_00100b1d;
    }
    do {
      pvVar2 = completed_head;
      LOCK();
      *(void **)((long)param_1 + 0x48) = completed_head;
      UNLOCK();
      LOCK();
      bVar8 = pvVar2 != completed_head;
      pvVar2 = param_1;
      if (bVar8) {
        pvVar2 = completed_head;
      }
      completed_head = pvVar2;
      UNLOCK();
    } while (bVar8);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100b1d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* JoltJobSystem::~JoltJobSystem() */

void __thiscall JoltJobSystem::~JoltJobSystem(JoltJobSystem *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__JoltJobSystem_00101738;
  lVar5 = *(long *)(this + 0x58);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x40);
    if (uVar3 <= uVar2) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        (*JPH::AlignedFree)(*(undefined8 *)(lVar5 + lVar1));
        lVar5 = *(long *)(this + 0x58);
      } while ((uint)lVar4 < uVar2 / uVar3);
    }
    (*JPH::Free)();
  }
  JPH::JobSystemWithBarrier::~JobSystemWithBarrier((JobSystemWithBarrier *)this);
  return;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* HashMap<void const*, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<void const*>,
   DefaultTypedAllocator<HashMapElement<void const*, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
::~HashMap(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* JoltJobSystem::~JoltJobSystem() */

void __thiscall JoltJobSystem::~JoltJobSystem(JoltJobSystem *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__JoltJobSystem_00101738;
  lVar5 = *(long *)(this + 0x58);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x40);
    if (uVar3 <= uVar2) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        (*JPH::AlignedFree)(*(undefined8 *)(lVar5 + lVar1));
        lVar5 = *(long *)(this + 0x58);
      } while ((uint)lVar4 < uVar2 / uVar3);
    }
    (*JPH::Free)();
  }
  JPH::JobSystemWithBarrier::~JobSystemWithBarrier((JobSystemWithBarrier *)this);
                    /* WARNING: Could not recover jumptable at 0x00100d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*JPH::AlignedFree)(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<void const*, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<void const*>,
   DefaultTypedAllocator<HashMapElement<void const*, unsigned long> > >::operator[](void const*
   const&) */

undefined1  [16] __thiscall
HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
::operator[](HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
             *this,void **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
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
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  int iVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  uint uVar46;
  undefined8 uVar47;
  uint uVar48;
  uint uVar49;
  ulong uVar50;
  long lVar51;
  uint uVar52;
  ulong uVar53;
  ulong uVar54;
  void *pvVar55;
  undefined1 (*pauVar56) [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  long lStack_90;
  void *local_70;
  
  local_70 = *(void **)(this + 8);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  pvVar55 = *param_1;
  uVar46 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar54 = CONCAT44(0,uVar46);
  if (local_70 == (void *)0x0) {
    uVar39 = uVar54 * 4;
    uVar38 = uVar54 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    lStack_90 = 0x101522;
    local_70 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_70;
    if (uVar46 == 0) {
      iVar42 = *(int *)(this + 0x2c);
      pvVar55 = *param_1;
      if (local_70 == (void *)0x0) goto LAB_0010104b;
    }
    else {
      pvVar55 = *(void **)(this + 0x10);
      if ((pvVar55 < (void *)((long)local_70 + uVar38)) &&
         (local_70 < (void *)((long)pvVar55 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar55 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_70 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar54 != uVar39);
        iVar42 = *(int *)(this + 0x2c);
        pvVar55 = *param_1;
      }
      else {
        memset(pvVar55,0,uVar39);
        lStack_90 = 0x10156a;
        memset(local_70,0,uVar38);
        iVar42 = *(int *)(this + 0x2c);
        pvVar55 = *param_1;
      }
    }
    if (iVar42 != 0) {
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar51 = *(long *)(this + 0x10);
      goto LAB_001013f3;
    }
  }
  else {
    iVar42 = *(int *)(this + 0x2c);
    if (iVar42 != 0) {
      lVar51 = *(long *)(this + 0x10);
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = (long)pvVar55 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar53 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar53 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar53 * lVar3;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar54;
      lVar44 = SUB168(auVar4 * auVar20,8);
      uVar43 = *(uint *)(lVar51 + lVar44 * 4);
      uVar52 = SUB164(auVar4 * auVar20,8);
      if (uVar43 != 0) {
        uVar49 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar53 == uVar43) &&
             (pvVar55 == *(void **)(*(long *)((long)local_70 + lVar44 * 8) + 0x10))) {
            auVar57._0_8_ = *(long *)((long)local_70 + (ulong)uVar52 * 8) + 0x18;
            auVar57._8_8_ = lVar45;
            return auVar57;
          }
          uVar49 = uVar49 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar54;
          lVar44 = SUB168(auVar5 * auVar21,8);
          uVar43 = *(uint *)(lVar51 + lVar44 * 4);
          uVar52 = SUB164(auVar5 * auVar21,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar43 * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar54, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar52 + uVar46) - SUB164(auVar6 * auVar22,8)) * lVar3,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar54, lVar45 = SUB168(auVar7 * auVar23,8),
                uVar49 <= SUB164(auVar7 * auVar23,8)));
      }
LAB_001013f3:
      uVar50 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = (long)pvVar55 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar53 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar53 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar53 * lVar3;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar50;
      lVar44 = SUB168(auVar16 * auVar32,8);
      uVar46 = *(uint *)(lVar51 + lVar44 * 4);
      uVar43 = SUB164(auVar16 * auVar32,8);
      if (uVar46 != 0) {
        uVar52 = 0;
        lVar45 = lVar44;
        do {
          if (((uint)uVar53 == uVar46) &&
             (*(void **)(*(long *)((long)local_70 + lVar44 * 8) + 0x10) == pvVar55)) {
            pauVar41 = *(undefined1 (**) [16])((long)local_70 + (ulong)uVar43 * 8);
            *(undefined8 *)(pauVar41[1] + 8) = 0;
            lStack_90 = lVar45;
            goto LAB_001013dc;
          }
          uVar52 = uVar52 + 1;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = (ulong)(uVar43 + 1) * lVar3;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar50;
          lVar44 = SUB168(auVar17 * auVar33,8);
          uVar46 = *(uint *)(lVar51 + lVar44 * 4);
          uVar43 = SUB164(auVar17 * auVar33,8);
        } while ((uVar46 != 0) &&
                (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar46 * lVar3, auVar34._8_8_ = 0,
                auVar34._0_8_ = uVar50, auVar19._8_8_ = 0,
                auVar19._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar43) -
                            SUB164(auVar18 * auVar34,8)) * lVar3, auVar35._8_8_ = 0,
                auVar35._0_8_ = uVar50, lVar45 = SUB168(auVar19 * auVar35,8),
                uVar52 <= SUB164(auVar19 * auVar35,8)));
      }
    }
  }
LAB_0010104b:
  if ((float)uVar54 * __LC9 < (float)(iVar42 + 1)) {
    uVar46 = *(uint *)(this + 0x28);
    if (uVar46 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001013dc;
    }
    uVar39 = (ulong)(uVar46 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar43 = *(uint *)(hash_table_size_primes + (ulong)uVar46 * 4);
    if (uVar46 + 1 < 2) {
      uVar39 = 2;
    }
    uVar46 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar38 = (ulong)uVar46;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar55 = *(void **)(this + 0x10);
    uVar39 = uVar38 * 4;
    uVar54 = uVar38 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar54,false);
    *(void **)(this + 8) = __s_00;
    if (uVar46 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar54)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar54);
      }
    }
    if (uVar43 != 0) {
      uVar39 = 0;
      do {
        uVar46 = *(uint *)((long)pvVar55 + uVar39 * 4);
        if (uVar46 != 0) {
          lVar51 = *(long *)(this + 0x10);
          uVar48 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar54 = CONCAT44(0,uVar52);
          lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)uVar46 * lVar3;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar54;
          lVar44 = SUB168(auVar8 * auVar24,8);
          puVar1 = (uint *)(lVar51 + lVar44 * 4);
          iVar42 = SUB164(auVar8 * auVar24,8);
          uVar49 = *puVar1;
          uVar40 = *(undefined8 *)((long)local_70 + uVar39 * 8);
          while (uVar49 != 0) {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar49 * lVar3;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar54;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)((uVar52 + iVar42) - SUB164(auVar9 * auVar25,8)) * lVar3;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar54;
            uVar37 = SUB164(auVar10 * auVar26,8);
            uVar47 = uVar40;
            if (uVar37 < uVar48) {
              *puVar1 = uVar46;
              puVar2 = (undefined8 *)((long)__s_00 + lVar44 * 8);
              uVar47 = *puVar2;
              *puVar2 = uVar40;
              uVar46 = uVar49;
              uVar48 = uVar37;
            }
            uVar48 = uVar48 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)(iVar42 + 1) * lVar3;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar54;
            lVar44 = SUB168(auVar11 * auVar27,8);
            puVar1 = (uint *)(lVar51 + lVar44 * 4);
            iVar42 = SUB164(auVar11 * auVar27,8);
            uVar40 = uVar47;
            uVar49 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar44 * 8) = uVar40;
          *puVar1 = uVar46;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar43);
      Memory::free_static(local_70,false);
      Memory::free_static(pvVar55,false);
    }
  }
  pvVar55 = *param_1;
  pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
  *(void **)pauVar41[1] = pvVar55;
  *(undefined8 *)(pauVar41[1] + 8) = 0;
  *pauVar41 = (undefined1  [16])0x0;
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar2 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar2;
  }
  lVar51 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar39 = (long)*param_1 * 0x3ffff - 1;
  uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
  uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
  uVar39 = uVar39 >> 0x16 ^ uVar39;
  uVar54 = uVar39 & 0xffffffff;
  if ((int)uVar39 == 0) {
    uVar54 = 1;
  }
  uVar49 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar52 = (uint)uVar54;
  uVar46 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar46);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar54 * lVar3;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar39;
  lStack_90 = SUB168(auVar12 * auVar28,8);
  lVar44 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar51 + lStack_90 * 4);
  iVar42 = SUB164(auVar12 * auVar28,8);
  uVar43 = *puVar1;
  pauVar36 = pauVar41;
  while (uVar43 != 0) {
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)uVar43 * lVar3;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar39;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)((uVar46 + iVar42) - SUB164(auVar13 * auVar29,8)) * lVar3;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar39;
    uVar52 = SUB164(auVar14 * auVar30,8);
    pauVar56 = pauVar36;
    if (uVar52 < uVar49) {
      *puVar1 = (uint)uVar54;
      uVar54 = (ulong)uVar43;
      puVar2 = (undefined8 *)(lVar44 + lStack_90 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar49 = uVar52;
    }
    uVar52 = (uint)uVar54;
    uVar49 = uVar49 + 1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)(iVar42 + 1) * lVar3;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar39;
    lStack_90 = SUB168(auVar15 * auVar31,8);
    puVar1 = (uint *)(lVar51 + lStack_90 * 4);
    iVar42 = SUB164(auVar15 * auVar31,8);
    pauVar36 = pauVar56;
    uVar43 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar44 + lStack_90 * 8) = pauVar36;
  *puVar1 = uVar52;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001013dc:
  auVar58._8_8_ = lStack_90;
  auVar58._0_8_ = pauVar41[1] + 8;
  return auVar58;
}



/* JoltJobSystem::Job::_execute(void*) */

void JoltJobSystem::Job::_GLOBAL__sub_I__execute(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC16;
  }
  if (timings_by_job != '\0') {
    return;
  }
  timings_by_job = 1;
  timings_by_job._8_16_ = (undefined1  [16])0x0;
  timings_by_job._40_8_ = 2;
  timings_by_job._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
               ::~HashMap,timings_by_job,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<void const*, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<void const*>,
   DefaultTypedAllocator<HashMapElement<void const*, unsigned long> > >::~HashMap() */

void __thiscall
HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
::~HashMap(HashMap<void_const*,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<void_const*>,DefaultTypedAllocator<HashMapElement<void_const*,unsigned_long>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltJobSystem::~JoltJobSystem() */

void __thiscall JoltJobSystem::~JoltJobSystem(JoltJobSystem *this)

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


