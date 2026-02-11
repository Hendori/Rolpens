
/* JPH::JobSystemWithBarrier::BarrierImpl::~BarrierImpl() */

void __thiscall JPH::JobSystemWithBarrier::BarrierImpl::~BarrierImpl(BarrierImpl *this)

{
  *(undefined ***)this = &PTR_AddJob_00100978;
  JPH::Semaphore::~Semaphore((Semaphore *)(this + 0x4088));
  return;
}



/* JPH::JobSystemWithBarrier::BarrierImpl::~BarrierImpl() */

void __thiscall JPH::JobSystemWithBarrier::BarrierImpl::~BarrierImpl(BarrierImpl *this)

{
  *(undefined ***)this = &PTR_AddJob_00100978;
  JPH::Semaphore::~Semaphore((Semaphore *)(this + 0x4088));
                    /* WARNING: Could not recover jumptable at 0x00100046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AlignedFree)(this);
  return;
}



/* JPH::JobSystemWithBarrier::BarrierImpl::OnJobFinished(JPH::JobSystem::Job*) */

void JPH::JobSystemWithBarrier::BarrierImpl::OnJobFinished(Job *param_1)

{
  JPH::Semaphore::Release((int)param_1 + 0x4088);
  return;
}



/* JPH::JobSystemWithBarrier::CreateBarrier() */

long __thiscall JPH::JobSystemWithBarrier::CreateBarrier(JobSystemWithBarrier *this)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 8) != 0) {
    lVar3 = 0;
    do {
      pcVar1 = (char *)(*(long *)(this + 0x10) + 8 + lVar3 * 0x4100);
      LOCK();
      bVar4 = *pcVar1 == '\0';
      if (bVar4) {
        *pcVar1 = '\x01';
      }
      UNLOCK();
      if (bVar4) {
        lVar3 = *(long *)(this + 0x10) + lVar3 * 0x4100;
        goto LAB_001000c5;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)(this + 8));
  }
  lVar3 = 0;
LAB_001000c5:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::JobSystemWithBarrier::BarrierImpl::AddJob(JPH::JobSystem::JobHandle const&) */

void __thiscall JPH::JobSystemWithBarrier::BarrierImpl::AddJob(BarrierImpl *this,JobHandle *param_1)

{
  BarrierImpl *pBVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  bool bVar6;
  timespec local_48;
  long local_30;
  
  lVar3 = *(long *)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  bVar6 = *(long *)(lVar3 + 8) == 0;
  if (bVar6) {
    *(long *)(lVar3 + 8) = (long)this;
  }
  UNLOCK();
  if (bVar6) {
    LOCK();
    *(int *)(this + 0x4084) = *(int *)(this + 0x4084) + 1;
    UNLOCK();
    bVar6 = *(int *)(lVar3 + 0x34) == 0;
    if (bVar6) {
      LOCK();
      *(int *)(this + 0x4084) = *(int *)(this + 0x4084) + 1;
      UNLOCK();
    }
    LOCK();
    *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
    UNLOCK();
    LOCK();
    pBVar1 = this + 0x4080;
    uVar2 = *(uint *)pBVar1;
    *(uint *)pBVar1 = *(uint *)pBVar1 + 1;
    UNLOCK();
LAB_00100160:
    if (0x7ff < uVar2 - *(int *)(this + 0x4040)) {
      local_48.tv_sec = __LC0;
      local_48.tv_nsec = _UNK_00100a18;
      do {
        iVar4 = nanosleep(&local_48,&local_48);
        if (iVar4 != -1) break;
        piVar5 = __errno_location();
      } while (*piVar5 == 4);
      goto LAB_00100160;
    }
    LOCK();
    *(long *)(this + ((ulong)(uVar2 & 0x7ff) + 2) * 8) = lVar3;
    UNLOCK();
    if (bVar6) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        JPH::Semaphore::Release((int)this + 0x4088);
        return;
      }
      goto LAB_00100213;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100213:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::JobSystemWithBarrier::DestroyBarrier(JPH::JobSystem::Barrier*) */

void __thiscall
JPH::JobSystemWithBarrier::DestroyBarrier(JobSystemWithBarrier *this,Barrier *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  if (param_1[8] == (Barrier)0x1) {
    param_1[8] = (Barrier)0x0;
  }
  UNLOCK();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::JobSystemWithBarrier::BarrierImpl::AddJobs(JPH::JobSystem::JobHandle const*, unsigned int)
    */

void __thiscall
JPH::JobSystemWithBarrier::BarrierImpl::AddJobs(BarrierImpl *this,JobHandle *param_1,uint param_2)

{
  BarrierImpl *pBVar1;
  JobHandle *pJVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  long in_FS_OFFSET;
  bool bVar8;
  timespec local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pJVar2 = param_1 + (ulong)param_2 * 8;
  if (param_1 < pJVar2) {
    bVar5 = false;
    do {
      lVar4 = *(long *)param_1;
      LOCK();
      bVar8 = *(long *)(lVar4 + 8) == 0;
      if (bVar8) {
        *(long *)(lVar4 + 8) = (long)this;
      }
      UNLOCK();
      if (bVar8) {
        LOCK();
        *(int *)(this + 0x4084) = *(int *)(this + 0x4084) + 1;
        UNLOCK();
        if (bVar5) {
LAB_001002d2:
          bVar5 = true;
        }
        else if (*(int *)(lVar4 + 0x34) == 0) {
          LOCK();
          *(int *)(this + 0x4084) = *(int *)(this + 0x4084) + 1;
          UNLOCK();
          goto LAB_001002d2;
        }
        LOCK();
        *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
        UNLOCK();
        LOCK();
        pBVar1 = this + 0x4080;
        uVar3 = *(uint *)pBVar1;
        *(uint *)pBVar1 = *(uint *)pBVar1 + 1;
        UNLOCK();
LAB_001002f0:
        if (0x7ff < uVar3 - *(int *)(this + 0x4040)) {
          local_58.tv_sec = __LC0;
          local_58.tv_nsec = _UNK_00100a18;
          do {
            iVar6 = nanosleep(&local_58,&local_58);
            if (iVar6 != -1) break;
            piVar7 = __errno_location();
          } while (*piVar7 == 4);
          goto LAB_001002f0;
        }
        LOCK();
        *(long *)(this + ((ulong)(uVar3 & 0x7ff) + 2) * 8) = lVar4;
        UNLOCK();
      }
      param_1 = param_1 + 8;
    } while (param_1 < pJVar2);
    if (bVar5) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        JPH::Semaphore::Release((int)this + 0x4088);
        return;
      }
      goto LAB_001003bf;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001003bf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::JobSystemWithBarrier::BarrierImpl::BarrierImpl() */

void __thiscall JPH::JobSystemWithBarrier::BarrierImpl::BarrierImpl(BarrierImpl *this)

{
  BarrierImpl *pBVar1;
  
  *(undefined ***)this = &PTR_AddJob_00100978;
  this[8] = (BarrierImpl)0x0;
  *(undefined4 *)(this + 0x4040) = 0;
  *(undefined8 *)(this + 0x4080) = 0;
  JPH::Semaphore::Semaphore((Semaphore *)(this + 0x4088));
  pBVar1 = this + 0x10;
  do {
    LOCK();
    *(undefined8 *)pBVar1 = 0;
    UNLOCK();
    pBVar1 = pBVar1 + 8;
  } while (pBVar1 != this + 0x4010);
  return;
}



/* JPH::JobSystemWithBarrier::BarrierImpl::Wait() */

void __thiscall JPH::JobSystemWithBarrier::BarrierImpl::Wait(BarrierImpl *this)

{
  int *piVar1;
  BarrierImpl *pBVar2;
  BarrierImpl *pBVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  BarrierImpl *this_00;
  long *plVar9;
  bool bVar10;
  
  pBVar2 = this + 0x4084;
  pBVar3 = this + 0x4040;
  iVar4 = *(int *)pBVar2;
joined_r0x00100464:
  if (iVar4 < 1) {
    while (*(uint *)pBVar3 < *(uint *)(this + 0x4080)) {
      uVar8 = *(uint *)pBVar3;
      puVar5 = *(undefined8 **)(this + (ulong)(uVar8 & 0x7ff) * 8 + 0x10);
      LOCK();
      piVar1 = (int *)(puVar5 + 6);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(long *)*puVar5 + 0x48))();
      }
      LOCK();
      *(long *)(this + (ulong)(uVar8 & 0x7ff) * 8 + 0x10) = 0;
      UNLOCK();
      LOCK();
      *(uint *)pBVar3 = *(uint *)pBVar3 + 1;
      UNLOCK();
    }
    return;
  }
LAB_0010048a:
  do {
    if (*(uint *)pBVar3 < *(uint *)(this + 0x4080)) {
      uVar8 = *(uint *)pBVar3;
      puVar5 = *(undefined8 **)(this + (ulong)(uVar8 & 0x7ff) * 8 + 0x10);
      if ((puVar5 != (undefined8 *)0x0) && (*(int *)((long)puVar5 + 0x34) == -0x2f2f2f30)) {
        LOCK();
        piVar1 = (int *)(puVar5 + 6);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(long *)*puVar5 + 0x48))();
        }
        LOCK();
        *(long *)(this + (ulong)(uVar8 & 0x7ff) * 8 + 0x10) = 0;
        UNLOCK();
        LOCK();
        *(uint *)pBVar3 = *(uint *)pBVar3 + 1;
        UNLOCK();
        goto LAB_0010048a;
      }
    }
    uVar8 = *(uint *)pBVar3;
    while( true ) {
      if (*(uint *)(this + 0x4080) <= uVar8) {
        iVar4 = *(int *)(this + 0x40e0);
        if (*(int *)(this + 0x40e0) < 1) {
          iVar4 = 1;
        }
        JPH::Semaphore::Acquire((int)this + 0x4088);
        LOCK();
        *(int *)pBVar2 = *(int *)pBVar2 - iVar4;
        UNLOCK();
        iVar4 = *(int *)pBVar2;
        goto joined_r0x00100464;
      }
      lVar6 = *(long *)(this + ((ulong)(uVar8 & 0x7ff) + 2) * 8);
      if ((lVar6 != 0) && (this_00 = (BarrierImpl *)(lVar6 + 0x34), *(int *)(lVar6 + 0x34) == 0))
      break;
      uVar8 = uVar8 + 1;
    }
    LOCK();
    iVar4 = *(int *)this_00;
    if (iVar4 == 0) {
      *(int *)this_00 = -0x1f1f1f20;
    }
    UNLOCK();
    if (iVar4 == 0) {
      if (*(long *)(lVar6 + 0x20) == 0) {
        std::__throw_bad_function_call();
        Wait(this_00);
        return;
      }
      (**(code **)(lVar6 + 0x28))(lVar6 + 0x10);
      plVar9 = *(long **)(lVar6 + 8);
      do {
        LOCK();
        plVar7 = *(long **)(lVar6 + 8);
        bVar10 = plVar9 == plVar7;
        if (bVar10) {
          *(long *)(lVar6 + 8) = -1;
          plVar7 = plVar9;
        }
        UNLOCK();
        plVar9 = plVar7;
      } while (!bVar10);
      LOCK();
      if (*(int *)this_00 == -0x1f1f1f20) {
        *(int *)this_00 = -0x2f2f2f30;
      }
      UNLOCK();
      if (plVar7 != (long *)0x0) {
        if (*(code **)(*plVar7 + 0x20) == OnJobFinished) {
          JPH::Semaphore::Release((int)plVar7 + 0x4088);
        }
        else {
          (**(code **)(*plVar7 + 0x20))(plVar7,lVar6);
        }
      }
    }
  } while( true );
}



/* JPH::JobSystemWithBarrier::WaitForJobs(JPH::JobSystem::Barrier*) */

void __thiscall JPH::JobSystemWithBarrier::WaitForJobs(JobSystemWithBarrier *this,Barrier *param_1)

{
  BarrierImpl::Wait((BarrierImpl *)param_1);
  return;
}



/* JPH::JobSystemWithBarrier::Init(unsigned int) */

void __thiscall JPH::JobSystemWithBarrier::Init(JobSystemWithBarrier *this,uint param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar1 = (ulong)param_1;
  *(uint *)(this + 8) = param_1;
  lVar2 = (*AlignedAllocate)(uVar1 * 0x4100 + 0x40,0x40);
  *(ulong *)(lVar2 + 0x38) = uVar1;
  if (param_1 != 0) {
    lVar5 = uVar1 - 1;
    puVar4 = (undefined8 *)(lVar2 + 0x4050);
    do {
      puVar4[-0x802] = &PTR_AddJob_00100978;
      puVar3 = puVar4 + -0x800;
      *(undefined1 *)(puVar4 + -0x801) = 0;
      *(undefined4 *)(puVar4 + 6) = 0;
      *(undefined4 *)(puVar4 + 0xe) = 0;
      *(undefined4 *)((long)puVar4 + 0x74) = 0;
      JPH::Semaphore::Semaphore((Semaphore *)(puVar4 + 0xf));
      do {
        LOCK();
        *puVar3 = 0;
        UNLOCK();
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar4);
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 0x820;
    } while (lVar5 != -1);
  }
  *(long *)(this + 0x10) = lVar2 + 0x40;
  return;
}



/* JPH::JobSystemWithBarrier::JobSystemWithBarrier(unsigned int) */

void __thiscall
JPH::JobSystemWithBarrier::JobSystemWithBarrier(JobSystemWithBarrier *this,uint param_1)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = &DAT_001009b0;
  *(undefined8 *)(this + 0x10) = 0;
  Init(this,param_1);
  return;
}



/* JPH::JobSystemWithBarrier::~JobSystemWithBarrier() */

void __thiscall JPH::JobSystemWithBarrier::~JobSystemWithBarrier(JobSystemWithBarrier *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined **)this = &DAT_001009b0;
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = puVar1 + puVar1[-1] * 0x820;
  puVar2 = puVar3;
  if (puVar1 != puVar3) {
    do {
      while( true ) {
        puVar3 = puVar2 + -0x820;
        if (*(code **)(puVar2[-0x820] + 0x10) == BarrierImpl::~BarrierImpl) break;
        (**(code **)(puVar2[-0x820] + 0x10))(puVar3);
        puVar2 = puVar3;
        if (*(undefined8 **)(this + 0x10) == puVar3) goto LAB_001007bf;
      }
      *puVar3 = &PTR_AddJob_00100978;
      JPH::Semaphore::~Semaphore((Semaphore *)(puVar2 + -0xf));
      puVar2 = puVar3;
    } while (*(undefined8 **)(this + 0x10) != puVar3);
  }
LAB_001007bf:
                    /* WARNING: Could not recover jumptable at 0x001007cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AlignedFree)(puVar3 + -8);
  return;
}



/* JPH::JobSystemWithBarrier::~JobSystemWithBarrier() */

void __thiscall JPH::JobSystemWithBarrier::~JobSystemWithBarrier(JobSystemWithBarrier *this)

{
  ~JobSystemWithBarrier(this);
                    /* WARNING: Could not recover jumptable at 0x001007f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(this);
  return;
}



/* JPH::JobSystemWithBarrier::BarrierImpl::BarrierImpl() */

void JPH::JobSystemWithBarrier::BarrierImpl::_GLOBAL__sub_I_BarrierImpl(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC1;
  }
  return;
}


