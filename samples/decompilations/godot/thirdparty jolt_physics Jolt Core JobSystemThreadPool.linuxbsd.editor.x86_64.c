
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>
   > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001013b8;
  std::thread::_State::~_State((_State *)this);
  return;
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>
   > >::~_State_impl() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>>>
::~_State_impl(_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::_lambda()_1_>>>
               *this)

{
  *(undefined ***)this = &PTR___State_impl_001013b8;
  std::thread::_State::~_State((_State *)this);
  operator_delete(this,0x18);
  return;
}



/* JPH::JobSystemThreadPool::StopThreads() [clone .part.0] */

ulong __thiscall JPH::JobSystemThreadPool::StopThreads(JobSystemThreadPool *this)

{
  JobSystemThreadPool *pJVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  JobSystemThreadPool *pJVar10;
  JobSystemThreadPool *pJVar11;
  long lVar12;
  uint uVar13;
  JobSystemThreadPool *pJVar14;
  JobSystemThreadPool *pJVar15;
  JobSystemThreadPool *pJVar16;
  bool bVar17;
  
  LOCK();
  this[0x21a8] = (JobSystemThreadPool)0x1;
  UNLOCK();
  pJVar14 = (JobSystemThreadPool *)(ulong)*(uint *)(this + 0x100);
  pJVar15 = this + 0x2148;
  JPH::Semaphore::Release((uint)pJVar15);
  pJVar10 = *(JobSystemThreadPool **)(this + 0x110);
  lVar12 = *(long *)(this + 0x100);
  pJVar1 = pJVar10 + lVar12 * 8;
  if (pJVar10 != pJVar1) {
    do {
      while (*(long *)pJVar10 != 0) {
        pJVar11 = pJVar10 + 8;
        pJVar15 = pJVar10;
        std::thread::join();
        pJVar10 = pJVar11;
        if (pJVar1 == pJVar11) goto LAB_001000c0;
      }
      pJVar10 = pJVar10 + 8;
    } while (pJVar1 != pJVar10);
LAB_001000c0:
    lVar12 = *(long *)(this + 0x100);
  }
  if (lVar12 != 0) {
    plVar8 = *(long **)(this + 0x110);
    plVar2 = plVar8 + lVar12;
    for (; plVar8 < plVar2; plVar8 = plVar8 + 1) {
      if (*plVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
  }
  uVar13 = 0;
  pJVar1 = this + 0x2140;
  *(undefined8 *)(this + 0x100) = 0;
  do {
    if (uVar13 == *(uint *)pJVar1) {
      (*Free)(*(undefined8 *)(this + 0x2118));
      *(undefined8 *)(this + 0x2118) = 0;
      LOCK();
      uVar13 = *(uint *)pJVar1;
      *(uint *)pJVar1 = 0;
      UNLOCK();
      return (ulong)uVar13;
    }
    LOCK();
    pJVar10 = *(JobSystemThreadPool **)(this + ((ulong)(uVar13 & 0x3ff) + 0x23) * 8);
    *(long *)(this + ((ulong)(uVar13 & 0x3ff) + 0x23) * 8) = 0;
    UNLOCK();
    if (pJVar10 != (JobSystemThreadPool *)0x0) {
      pJVar11 = pJVar10 + 0x34;
      LOCK();
      iVar3 = *(int *)pJVar11;
      if (iVar3 == 0) {
        *(int *)pJVar11 = -0x1f1f1f20;
      }
      UNLOCK();
      if (iVar3 == 0) {
        if (*(long *)(pJVar10 + 0x20) == 0) {
          std::__throw_bad_function_call();
          uVar13 = *(uint *)(pJVar14 + 0x38);
          lVar12 = (ulong)(uVar13 & *(uint *)(pJVar15 + 0x88)) * 0x40 +
                   *(long *)(*(long *)(pJVar15 + 0x98) +
                            (ulong)(uVar13 >> ((byte)*(undefined4 *)(pJVar15 + 0x84) & 0x1f)) * 8);
          if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
            (**(code **)(lVar12 + 0x20))(lVar12 + 0x10,lVar12 + 0x10,3);
          }
          pJVar14 = pJVar15 + 0xf0;
          do {
            uVar7 = *(ulong *)pJVar14;
            *(int *)(lVar12 + 0x38) = (int)uVar7;
            LOCK();
            pJVar1 = pJVar15 + 0xe8;
            iVar3 = *(int *)pJVar1;
            *(int *)pJVar1 = *(int *)pJVar1 + 1;
            UNLOCK();
            LOCK();
            uVar9 = *(ulong *)pJVar14;
            bVar17 = uVar7 == uVar9;
            if (bVar17) {
              *(long *)pJVar14 = CONCAT44(iVar3,uVar13);
              uVar9 = uVar7;
            }
            UNLOCK();
          } while (!bVar17);
          return uVar9;
        }
        (**(code **)(pJVar10 + 0x28))(pJVar10 + 0x10);
        pJVar14 = (JobSystemThreadPool *)0xffffffffffffffff;
        pJVar16 = *(JobSystemThreadPool **)(pJVar10 + 8);
        do {
          LOCK();
          pJVar15 = *(JobSystemThreadPool **)(pJVar10 + 8);
          bVar17 = pJVar16 == pJVar15;
          if (bVar17) {
            *(long *)(pJVar10 + 8) = -1;
            pJVar15 = pJVar16;
          }
          UNLOCK();
          pJVar16 = pJVar15;
        } while (!bVar17);
        LOCK();
        if (*(int *)pJVar11 == -0x1f1f1f20) {
          *(int *)pJVar11 = -0x2f2f2f30;
        }
        UNLOCK();
        if (pJVar15 != (JobSystemThreadPool *)0x0) {
          pJVar14 = pJVar10;
          (**(code **)(*(long *)pJVar15 + 0x20))();
        }
      }
      LOCK();
      pJVar11 = pJVar10 + 0x30;
      *(int *)pJVar11 = *(int *)pJVar11 + -1;
      UNLOCK();
      if (*(int *)pJVar11 == 0) {
        pJVar11 = *(JobSystemThreadPool **)pJVar10;
        if (*(code **)(*(long *)pJVar11 + 0x48) == FreeJob) {
          uVar5 = *(uint *)(pJVar10 + 0x38);
          lVar12 = (ulong)(uVar5 & *(uint *)(pJVar11 + 0x88)) * 0x40 +
                   *(long *)(*(long *)(pJVar11 + 0x98) +
                            (ulong)(uVar5 >> ((byte)*(undefined4 *)(pJVar11 + 0x84) & 0x1f)) * 8);
          if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
            pJVar14 = (JobSystemThreadPool *)(lVar12 + 0x10);
            pJVar15 = pJVar14;
            (**(code **)(lVar12 + 0x20))(pJVar14,pJVar14,3);
          }
          pJVar10 = pJVar11 + 0xf0;
          do {
            lVar6 = *(long *)pJVar10;
            *(int *)(lVar12 + 0x38) = (int)lVar6;
            LOCK();
            pJVar16 = pJVar11 + 0xe8;
            iVar3 = *(int *)pJVar16;
            *(int *)pJVar16 = *(int *)pJVar16 + 1;
            UNLOCK();
            LOCK();
            lVar4 = *(long *)pJVar10;
            if (lVar6 == lVar4) {
              *(long *)pJVar10 = CONCAT44(iVar3,uVar5);
            }
            UNLOCK();
          } while (lVar6 != lVar4);
        }
        else {
          (**(code **)(*(long *)pJVar11 + 0x48))();
          pJVar14 = pJVar10;
          pJVar15 = pJVar11;
        }
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



/* JPH::JobSystemThreadPool::FreeJob(JPH::JobSystem::Job*) */

long __thiscall JPH::JobSystemThreadPool::FreeJob(JobSystemThreadPool *this,Job *param_1)

{
  JobSystemThreadPool *pJVar1;
  JobSystemThreadPool *pJVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  lVar7 = (ulong)(uVar4 & *(uint *)(this + 0x88)) * 0x40 +
          *(long *)(*(long *)(this + 0x98) +
                   (ulong)(uVar4 >> ((byte)*(undefined4 *)(this + 0x84) & 0x1f)) * 8);
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(lVar7 + 0x10,lVar7 + 0x10,3);
  }
  pJVar1 = this + 0xf0;
  do {
    lVar5 = *(long *)pJVar1;
    *(int *)(lVar7 + 0x38) = (int)lVar5;
    LOCK();
    pJVar2 = this + 0xe8;
    iVar3 = *(int *)pJVar2;
    *(int *)pJVar2 = *(int *)pJVar2 + 1;
    UNLOCK();
    LOCK();
    lVar6 = *(long *)pJVar1;
    bVar8 = lVar5 == lVar6;
    if (bVar8) {
      *(long *)pJVar1 = CONCAT44(iVar3,uVar4);
      lVar6 = lVar5;
    }
    UNLOCK();
  } while (!bVar8);
  return lVar6;
}



/* JPH::JobSystemThreadPool::~JobSystemThreadPool() */

void __thiscall JPH::JobSystemThreadPool::~JobSystemThreadPool(JobSystemThreadPool *this)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *(undefined ***)this = &PTR__JobSystemThreadPool_00101358;
  if (*(long *)(this + 0x100) != 0) {
    StopThreads(this);
  }
  JPH::Semaphore::~Semaphore((Semaphore *)(this + 0x2148));
  plVar5 = *(long **)(this + 0x110);
  if (plVar5 != (long *)0x0) {
    if (*(long *)(this + 0x100) != 0) {
      plVar2 = plVar5 + *(long *)(this + 0x100);
      for (; plVar5 < plVar2; plVar5 = plVar5 + 1) {
        if (*plVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
      }
    }
    *(undefined8 *)(this + 0x100) = 0;
    (*Free)();
  }
  lVar7 = *(long *)(this + 0x98);
  if (lVar7 != 0) {
    uVar3 = *(uint *)(this + 0x90);
    uVar4 = *(uint *)(this + 0x80);
    if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 * 8;
        lVar6 = lVar6 + 1;
        (*AlignedFree)(*(undefined8 *)(lVar7 + lVar1));
        lVar7 = *(long *)(this + 0x98);
      } while ((uint)lVar6 < uVar3 / uVar4);
    }
    (*Free)();
  }
  if (*(code **)(this + 0x48) != (code *)0x0) {
    (**(code **)(this + 0x48))(this + 0x38,this + 0x38,3);
  }
  if (*(code **)(this + 0x28) != (code *)0x0) {
    (**(code **)(this + 0x28))(this + 0x18,this + 0x18,3);
  }
  JPH::JobSystemWithBarrier::~JobSystemWithBarrier((JobSystemWithBarrier *)this);
  return;
}



/* JPH::JobSystemThreadPool::~JobSystemThreadPool() */

void __thiscall JPH::JobSystemThreadPool::~JobSystemThreadPool(JobSystemThreadPool *this)

{
  ~JobSystemThreadPool(this);
                    /* WARNING: Could not recover jumptable at 0x00100441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AlignedFree)(this);
  return;
}



/* JPH::JobSystemThreadPool::StartThreads(int) */

void __thiscall JPH::JobSystemThreadPool::StartThreads(JobSystemThreadPool *this,int param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    iVar9 = std::thread::hardware_concurrency();
    param_1 = iVar9 + -1;
  }
  if (param_1 == 0) goto LAB_00100485;
  LOCK();
  this[0x21a8] = (JobSystemThreadPool)0x0;
  UNLOCK();
  uVar10 = (ulong)param_1;
  lVar3 = (*Allocate)(uVar10 * 4);
  *(long *)(this + 0x2118) = lVar3;
  if (param_1 < 1) {
    if (uVar10 <= *(ulong *)(this + 0x108)) goto LAB_00100485;
LAB_00100690:
    puVar5 = (undefined8 *)(*Allocate)(uVar10 * 8);
    puVar4 = *(undefined8 **)(this + 0x110);
    if (puVar4 != (undefined8 *)0x0) {
      lVar3 = *(long *)(this + 0x100);
      if (puVar5 < puVar4) {
        for (puVar7 = puVar5; puVar7 < puVar5 + lVar3; puVar7 = puVar7 + 1) {
          *puVar7 = 0;
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar7 = uVar1;
        }
      }
      else {
        puVar4 = puVar4 + lVar3 + -1;
        puVar7 = puVar5 + lVar3 + -1;
        if (!CARRY8(lVar3 * 8 - 8,(ulong)puVar5)) {
          do {
            *puVar7 = 0;
            uVar1 = *puVar4;
            puVar8 = puVar7 + -1;
            puVar4 = puVar4 + -1;
            *puVar7 = uVar1;
            puVar7 = puVar8;
          } while (puVar5 <= puVar8);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x110) = puVar5;
    *(ulong *)(this + 0x108) = uVar10;
    if (param_1 < 1) goto LAB_00100485;
  }
  else {
    lVar6 = 0;
    while( true ) {
      LOCK();
      *(undefined4 *)(lVar3 + lVar6) = 0;
      UNLOCK();
      lVar6 = lVar6 + 4;
      if (uVar10 * 4 - lVar6 == 0) break;
      lVar3 = *(long *)(this + 0x2118);
    }
    if (*(ulong *)(this + 0x108) < uVar10) goto LAB_00100690;
  }
  iVar9 = 0;
  do {
    lVar3 = *(long *)(this + 0x100);
    uVar10 = lVar3 + 1;
    if (*(ulong *)(this + 0x108) < uVar10) {
      uVar2 = *(ulong *)(this + 0x108) * 2;
      if (uVar10 <= uVar2) {
        uVar10 = uVar2;
      }
      puVar4 = (undefined8 *)(*Allocate)(uVar10 * 8);
      puVar5 = *(undefined8 **)(this + 0x110);
      if (puVar5 != (undefined8 *)0x0) {
        lVar3 = *(long *)(this + 0x100);
        if (puVar4 < puVar5) {
          for (puVar7 = puVar4; puVar7 < puVar4 + lVar3; puVar7 = puVar7 + 1) {
            *puVar7 = 0;
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar7 = uVar1;
          }
        }
        else {
          puVar5 = puVar5 + lVar3 + -1;
          puVar7 = puVar4 + lVar3 + -1;
          if (!CARRY8(lVar3 * 8 - 8,(ulong)puVar4)) {
            do {
              *puVar7 = 0;
              uVar1 = *puVar5;
              puVar8 = puVar7 + -1;
              puVar5 = puVar5 + -1;
              *puVar7 = uVar1;
              puVar7 = puVar8;
            } while (puVar4 <= puVar8);
            (*Free)();
            goto LAB_00100610;
          }
        }
        (*Free)();
      }
LAB_00100610:
      lVar3 = *(long *)(this + 0x100);
      *(ulong *)(this + 0x108) = uVar10;
      *(undefined8 **)(this + 0x110) = puVar4;
      uVar10 = lVar3 + 1;
    }
    else {
      puVar4 = *(undefined8 **)(this + 0x110);
    }
    *(ulong *)(this + 0x100) = uVar10;
    puVar4[lVar3] = 0;
    local_48 = (long *)operator_new(0x18);
    *local_48 = (long)&PTR___State_impl_001013b8;
    local_48[1] = (long)this;
    *(int *)(local_48 + 2) = iVar9;
    std::thread::_M_start_thread(puVar4 + lVar3,&local_48,std::thread::_M_thread_deps_never_run);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    iVar9 = iVar9 + 1;
  } while (param_1 != iVar9);
LAB_00100485:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::JobSystemThreadPool::Init(unsigned int, unsigned int, int) */

void __thiscall
JPH::JobSystemThreadPool::Init(JobSystemThreadPool *this,uint param_1,uint param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  JobSystemThreadPool *pJVar5;
  
  JPH::JobSystemWithBarrier::Init((uint)this);
  uVar1 = (ulong)(param_1 * 2 - 1) / (ulong)param_1;
  *(uint *)(this + 0x80) = param_1;
  iVar2 = 0;
  for (uVar3 = param_1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    iVar2 = iVar2 + 1;
  }
  if (param_1 == 0) {
    iVar2 = 0x20;
  }
  *(uint *)(this + 0x88) = param_1 - 1;
  *(int *)(this + 0x84) = iVar2;
  *(int *)(this + 0x8c) = (int)uVar1;
  uVar4 = (*Allocate)(uVar1 * 8);
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = uVar4;
  LOCK();
  *(undefined4 *)(this + 0xf8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(this + 0xe8) = 1;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0xf0) = 0xffffffff;
  UNLOCK();
  pJVar5 = this + 0x118;
  do {
    LOCK();
    *(undefined8 *)pJVar5 = 0;
    UNLOCK();
    pJVar5 = pJVar5 + 8;
  } while (pJVar5 != this + 0x2118);
  StartThreads(this,param_3);
  return;
}



/* JPH::JobSystemThreadPool::JobSystemThreadPool(unsigned int, unsigned int, int) */

void __thiscall
JPH::JobSystemThreadPool::JobSystemThreadPool
          (JobSystemThreadPool *this,uint param_1,uint param_2,int param_3)

{
  *(undefined ***)this = &PTR__JobSystemThreadPool_00101358;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(code **)(this + 0x28) =
       std::
       _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::
       _M_manager;
  *(code **)(this + 0x30) =
       std::
       _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::
       _M_invoke;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x2118) = 0;
  *(undefined4 *)(this + 0x2140) = 0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xd0) = (undefined1  [16])0x0;
  *(code **)(this + 0x48) =
       std::
       _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::
       _M_manager;
  *(code **)(this + 0x50) =
       std::
       _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::
       _M_invoke;
  *(undefined1 (*) [16])(this + 0x100) = (undefined1  [16])0x0;
  JPH::Semaphore::Semaphore((Semaphore *)(this + 0x2148));
  this[0x21a8] = (JobSystemThreadPool)0x0;
  Init(this,param_1,param_2,param_3);
  return;
}



/* JPH::JobSystemThreadPool::StopThreads() */

void __thiscall JPH::JobSystemThreadPool::StopThreads(JobSystemThreadPool *this)

{
  if (*(long *)(this + 0x100) == 0) {
    return;
  }
  StopThreads(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::JobSystemThreadPool::CreateJob(char const*, JPH::Color, std::function<void ()> const&,
   unsigned int) */

undefined8 *
JPH::JobSystemThreadPool::CreateJob
          (undefined8 *param_1,timespec *param_2,undefined8 param_3,undefined8 param_4,long param_5,
          int param_6)

{
  timespec *ptVar1;
  long *plVar2;
  pthread_mutex_t *__mutex;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  __time_t *p_Var8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  int *piVar13;
  uint extraout_EDX;
  undefined8 *puVar14;
  Job *pJVar15;
  timespec *ptVar16;
  JobSystemThreadPool *this;
  uint uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  timespec local_58;
  long local_40;
  
  ptVar1 = param_2 + 0xf;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ptVar16 = param_2;
LAB_00100990:
  do {
    lVar5 = ptVar1->tv_sec;
    uVar17 = (uint)lVar5;
    if (uVar17 == 0xffffffff) {
      LOCK();
      plVar2 = &param_2[0xf].tv_nsec;
      uVar17 = (uint)*plVar2;
      *(int *)plVar2 = (int)*plVar2 + 1;
      UNLOCK();
      if ((uint)param_2[9].tv_sec <= uVar17) {
        __mutex = (pthread_mutex_t *)(param_2 + 0xc);
        uVar10 = pthread_mutex_lock(__mutex);
        if (uVar10 != 0) {
          this = (JobSystemThreadPool *)(ulong)uVar10;
          std::__throw_system_error(uVar10);
          if (*(undefined8 **)(this + 0x100) != (undefined8 *)0x0) {
            p_Var8 = &ptVar16->tv_sec;
            for (; ptVar16 < (timespec *)(p_Var8 + extraout_EDX);
                ptVar16 = (timespec *)&ptVar16->tv_nsec) {
              QueueJobInternal(this,(Job *)ptVar16->tv_sec);
            }
            puVar14 = (undefined8 *)JPH::Semaphore::Release((int)this + 0x2148);
            return puVar14;
          }
          return *(undefined8 **)(this + 0x100);
        }
        uVar10 = (uint)param_2[9].tv_sec;
        if (uVar10 <= uVar17) {
          uVar4 = (uint)param_2[8].tv_sec;
          while( true ) {
            uVar7 = (ulong)uVar10 / (ulong)uVar4;
            if ((int)uVar7 == *(int *)((long)&param_2[8].tv_nsec + 4)) break;
            lVar5 = param_2[9].tv_nsec;
            uVar12 = (*AlignedAllocate)((ulong)uVar4 << 6,0x40);
            uVar4 = (uint)param_2[8].tv_sec;
            *(undefined8 *)(lVar5 + uVar7 * 8) = uVar12;
            uVar10 = (int)param_2[9].tv_sec + uVar4;
            *(uint *)&param_2[9].tv_sec = uVar10;
            if (uVar17 < uVar10) goto LAB_00100c3c;
          }
          pthread_mutex_unlock(__mutex);
          local_58.tv_sec = __LC0;
          local_58.tv_nsec = _UNK_001013e8;
          do {
            ptVar16 = &local_58;
            iVar11 = nanosleep(&local_58,&local_58);
            if (iVar11 != -1) break;
            piVar13 = __errno_location();
          } while (*piVar13 == 4);
          goto LAB_00100990;
        }
LAB_00100c3c:
        pthread_mutex_unlock(__mutex);
      }
      puVar14 = (undefined8 *)
                ((ulong)(uVar17 & (uint)param_2[8].tv_nsec) * 0x40 +
                *(long *)(param_2[9].tv_nsec +
                         (ulong)(uVar17 >>
                                ((byte)*(undefined4 *)((long)&param_2[8].tv_sec + 4) & 0x1f)) * 8));
      if (puVar14 != (undefined8 *)0x0) {
        pcVar6 = *(code **)(param_5 + 0x10);
        *puVar14 = param_2;
        puVar14[1] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(puVar14 + 2,param_5,2);
          uVar12 = *(undefined8 *)(param_5 + 0x18);
          puVar14[4] = *(undefined8 *)(param_5 + 0x10);
          puVar14[5] = uVar12;
        }
        *(undefined4 *)(puVar14 + 6) = 0;
        *(int *)((long)puVar14 + 0x34) = param_6;
      }
      *(uint *)(puVar14 + 7) = uVar17;
      goto LAB_00100a69;
    }
    uVar3 = *(undefined4 *)
             ((ulong)(uVar17 & (uint)param_2[8].tv_nsec) * 0x40 +
              *(long *)(param_2[9].tv_nsec +
                       (ulong)(uVar17 >>
                              ((byte)*(undefined4 *)((long)&param_2[8].tv_sec + 4) & 0x1f)) * 8) +
             0x38);
    LOCK();
    plVar2 = &param_2[0xe].tv_nsec;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    LOCK();
    bVar18 = lVar5 == ptVar1->tv_sec;
    if (bVar18) {
      ptVar1->tv_sec = CONCAT44((int)lVar9,uVar3);
    }
    UNLOCK();
    if (bVar18) {
      puVar14 = (undefined8 *)
                ((ulong)(uVar17 & (uint)param_2[8].tv_nsec) * 0x40 +
                *(long *)(param_2[9].tv_nsec +
                         (ulong)(uVar17 >>
                                ((byte)*(undefined4 *)((long)&param_2[8].tv_sec + 4) & 0x1f)) * 8));
      if (puVar14 != (undefined8 *)0x0) {
        pcVar6 = *(code **)(param_5 + 0x10);
        *puVar14 = param_2;
        puVar14[1] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        *(undefined1 (*) [16])(puVar14 + 2) = (undefined1  [16])0x0;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(puVar14 + 2,param_5,2);
          uVar12 = *(undefined8 *)(param_5 + 0x18);
          puVar14[4] = *(undefined8 *)(param_5 + 0x10);
          puVar14[5] = uVar12;
        }
        *(undefined4 *)(puVar14 + 6) = 0;
        *(int *)((long)puVar14 + 0x34) = param_6;
      }
      *(uint *)(puVar14 + 7) = uVar17;
LAB_00100a69:
      pJVar15 = (Job *)((ulong)(uVar17 & (uint)param_2[8].tv_nsec) * 0x40 +
                       *(long *)(param_2[9].tv_nsec +
                                (ulong)(uVar17 >>
                                       ((byte)*(undefined4 *)((long)&param_2[8].tv_sec + 4) & 0x1f))
                                * 8));
      *param_1 = pJVar15;
      if (pJVar15 != (Job *)0x0) {
        LOCK();
        *(int *)(pJVar15 + 0x30) = *(int *)(pJVar15 + 0x30) + 1;
        UNLOCK();
      }
      if ((param_6 == 0) && (param_2[0x10].tv_sec != 0)) {
        QueueJobInternal((JobSystemThreadPool *)param_2,pJVar15);
        JPH::Semaphore::Release((int)param_2 + 0x2148);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* JPH::JobSystemThreadPool::QueueJobs(JPH::JobSystem::Job**, unsigned int) */

void __thiscall
JPH::JobSystemThreadPool::QueueJobs(JobSystemThreadPool *this,Job **param_1,uint param_2)

{
  Job **ppJVar1;
  Job *pJVar2;
  
  if (*(long *)(this + 0x100) == 0) {
    return;
  }
  ppJVar1 = param_1 + param_2;
  if (param_1 < ppJVar1) {
    do {
      pJVar2 = *param_1;
      param_1 = param_1 + 1;
      QueueJobInternal(this,pJVar2);
    } while (param_1 < ppJVar1);
  }
  JPH::Semaphore::Release((int)this + 0x2148);
  return;
}



/* JPH::JobSystemThreadPool::QueueJob(JPH::JobSystem::Job*) */

void __thiscall JPH::JobSystemThreadPool::QueueJob(JobSystemThreadPool *this,Job *param_1)

{
  if (*(long *)(this + 0x100) == 0) {
    return;
  }
  QueueJobInternal(this,param_1);
  JPH::Semaphore::Release((int)this + 0x2148);
  return;
}



/* JPH::JobSystemThreadPool::ThreadMain(int) */

void __thiscall JPH::JobSystemThreadPool::ThreadMain(JobSystemThreadPool *this,int param_1)

{
  int *piVar1;
  uint *puVar2;
  JobSystemThreadPool *pJVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_90;
  int local_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __snprintf_chk(local_88,0x40,2,0x40,"Worker %d",param_1 + 1);
  prctl(0xf,local_88,0,0,0);
  local_90 = param_1;
  if (*(long *)(this + 0x28) != 0) {
    (**(code **)(this + 0x30))(this + 0x18,&local_90);
    puVar2 = (uint *)(*(long *)(this + 0x2118) + (long)param_1 * 4);
    while (this[0x21a8] == (JobSystemThreadPool)0x0) {
      JPH::Semaphore::Acquire((int)this + 0x2148);
      while (*(uint *)(this + 0x2140) != *puVar2) {
        pJVar3 = this + (ulong)(*puVar2 & 0x3ff) * 8 + 0x118;
        if (*(long *)pJVar3 != 0) {
          LOCK();
          plVar5 = *(long **)pJVar3;
          *(long *)pJVar3 = 0;
          UNLOCK();
          if (plVar5 != (long *)0x0) {
            piVar1 = (int *)((long)plVar5 + 0x34);
            LOCK();
            iVar4 = *piVar1;
            if (iVar4 == 0) {
              *piVar1 = -0x1f1f1f20;
            }
            UNLOCK();
            if (iVar4 == 0) {
              if (plVar5[4] == 0) goto LAB_00100f73;
              (*(code *)plVar5[5])(plVar5 + 2);
              plVar12 = (long *)plVar5[1];
              do {
                LOCK();
                plVar10 = (long *)plVar5[1];
                bVar13 = plVar12 == plVar10;
                if (bVar13) {
                  plVar5[1] = -1;
                  plVar10 = plVar12;
                }
                UNLOCK();
                plVar12 = plVar10;
              } while (!bVar13);
              LOCK();
              if (*piVar1 == -0x1f1f1f20) {
                *piVar1 = -0x2f2f2f30;
              }
              UNLOCK();
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x20))(plVar10,plVar5);
              }
            }
            LOCK();
            plVar12 = plVar5 + 6;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
              plVar12 = (long *)*plVar5;
              if (*(code **)(*plVar12 + 0x48) == FreeJob) {
                uVar7 = *(uint *)(plVar5 + 7);
                lVar11 = (ulong)(uVar7 & *(uint *)(plVar12 + 0x11)) * 0x40 +
                         *(long *)(plVar12[0x13] +
                                  (ulong)(uVar7 >> ((byte)*(undefined4 *)((long)plVar12 + 0x84) &
                                                   0x1f)) * 8);
                if (*(code **)(lVar11 + 0x20) != (code *)0x0) {
                  (**(code **)(lVar11 + 0x20))(lVar11 + 0x10,lVar11 + 0x10,3);
                }
                plVar5 = plVar12 + 0x1e;
                do {
                  lVar8 = *plVar5;
                  *(int *)(lVar11 + 0x38) = (int)lVar8;
                  LOCK();
                  plVar10 = plVar12 + 0x1d;
                  lVar9 = *plVar10;
                  *(int *)plVar10 = (int)*plVar10 + 1;
                  UNLOCK();
                  LOCK();
                  lVar6 = *plVar5;
                  if (lVar8 == lVar6) {
                    *plVar5 = CONCAT44((int)lVar9,uVar7);
                  }
                  UNLOCK();
                } while (lVar8 != lVar6);
              }
              else {
                (**(code **)(*plVar12 + 0x48))(plVar12,plVar5);
              }
            }
          }
        }
        LOCK();
        *puVar2 = *puVar2 + 1;
        UNLOCK();
      }
    }
    local_8c = param_1;
    if (*(long *)(this + 0x48) != 0) {
      (**(code **)(this + 0x50))(this + 0x38,&local_8c);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100f78;
    }
  }
LAB_00100f73:
  std::__throw_bad_function_call();
LAB_00100f78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>
   > >::_M_run() */

void __thiscall
std::thread::
_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::{lambda()#1}>>>
::_M_run(_State_impl<std::thread::_Invoker<std::tuple<JPH::JobSystemThreadPool::StartThreads(int)::_lambda()_1_>>>
         *this)

{
  JPH::JobSystemThreadPool::ThreadMain(*(JobSystemThreadPool **)(this + 8),*(int *)(this + 0x10));
  return;
}



/* std::thread::_M_thread_deps_never_run() */

void std::thread::_M_thread_deps_never_run(void)

{
  return;
}



/* JPH::JobSystemThreadPool::GetMaxConcurrency() const */

int __thiscall JPH::JobSystemThreadPool::GetMaxConcurrency(JobSystemThreadPool *this)

{
  return (int)*(undefined8 *)(this + 0x100) + 1;
}



/* std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::_M_invoke(std::_Any_data const&,
   int&&) */

void std::
     _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::
     _M_invoke(_Any_data *param_1,int *param_2)

{
  return;
}



/* std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::_M_invoke(std::_Any_data const&,
   int&&) */

void std::
     _Function_handler<void(int),JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::
     _M_invoke(_Any_data *param_1,int *param_2)

{
  return;
}



/* std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::_M_manager(std::_Any_data&,
   std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}> const&, std::_Manager_operation)
    */

undefined8
std::_Function_handler<void(int),JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}>::
_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &JPH::JobSystemThreadPool::mThreadInitFunction::{lambda(int)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::_M_manager(std::_Any_data&,
   std::_Function_handler<void (int),
   JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}> const&, std::_Manager_operation)
    */

undefined8
std::_Function_handler<void(int),JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}>::
_M_manager(undefined8 *param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 0) {
    *param_1 = &JPH::JobSystemThreadPool::mThreadExitFunction::{lambda(int)#1}::typeinfo;
    return 0;
  }
  if (param_3 != 1) {
    return 0;
  }
  *param_1 = param_2;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::JobSystemThreadPool::QueueJobInternal(JPH::JobSystem::Job*) */

void __thiscall JPH::JobSystemThreadPool::QueueJobInternal(JobSystemThreadPool *this,Job *param_1)

{
  JobSystemThreadPool *pJVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  uint uVar6;
  long in_FS_OFFSET;
  bool bVar7;
  timespec local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  LOCK();
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  UNLOCK();
  uVar6 = *(uint *)(this + 0x2140);
  pJVar1 = this + 0x2140;
  if (*(long *)(this + 0x100) != 0) {
    do {
      uVar2 = *(uint *)(*(long *)(this + 0x2118) + uVar4 * 4);
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(this + 0x100));
  }
LAB_00101097:
  do {
    uVar2 = *(uint *)pJVar1;
    if (0x3ff < uVar2 - uVar6) {
      uVar6 = *(uint *)pJVar1;
      if (*(long *)(this + 0x100) != 0) {
        uVar4 = 0;
        do {
          uVar2 = *(uint *)(*(long *)(this + 0x2118) + uVar4 * 4);
          if (uVar2 < uVar6) {
            uVar6 = uVar2;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)(this + 0x100));
      }
      uVar2 = *(uint *)pJVar1;
      if (0x3ff < uVar2 - uVar6) {
        JPH::Semaphore::Release((int)this + 0x2148);
        local_58.tv_sec = __LC0;
        local_58.tv_nsec = _UNK_001013e8;
        do {
          iVar3 = nanosleep(&local_58,&local_58);
          if (iVar3 != -1) break;
          piVar5 = __errno_location();
        } while (*piVar5 == 4);
        goto LAB_00101097;
      }
    }
    LOCK();
    bVar7 = *(long *)(this + ((ulong)(uVar2 & 0x3ff) + 0x23) * 8) == 0;
    if (bVar7) {
      *(Job **)(this + ((ulong)(uVar2 & 0x3ff) + 0x23) * 8) = param_1;
    }
    UNLOCK();
    LOCK();
    if (uVar2 == *(uint *)pJVar1) {
      *(uint *)pJVar1 = uVar2 + 1;
    }
    UNLOCK();
    if (bVar7) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* JPH::JobSystemThreadPool::Init(unsigned int, unsigned int, int) */

void JPH::JobSystemThreadPool::_GLOBAL__sub_I_Init(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC3;
  }
  return;
}


