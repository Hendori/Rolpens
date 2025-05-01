
/* JPH::JobSystemSingleThreaded::CreateBarrier() */

JobSystemSingleThreaded * __thiscall
JPH::JobSystemSingleThreaded::CreateBarrier(JobSystemSingleThreaded *this)

{
  return this + 8;
}



/* JPH::JobSystemSingleThreaded::WaitForJobs(JPH::JobSystem::Barrier*) */

void JPH::JobSystemSingleThreaded::WaitForJobs(Barrier *param_1)

{
  return;
}



/* JPH::JobSystemSingleThreaded::FreeJob(JPH::JobSystem::Job*) */

long __thiscall JPH::JobSystemSingleThreaded::FreeJob(JobSystemSingleThreaded *this,Job *param_1)

{
  JobSystemSingleThreaded *pJVar1;
  JobSystemSingleThreaded *pJVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  lVar7 = (ulong)(uVar4 & *(uint *)(this + 0x48)) * 0x40 +
          *(long *)(*(long *)(this + 0x58) +
                   (ulong)(uVar4 >> ((byte)*(undefined4 *)(this + 0x44) & 0x1f)) * 8);
  if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
    (**(code **)(lVar7 + 0x20))(lVar7 + 0x10,lVar7 + 0x10,3);
  }
  pJVar1 = this + 0xb0;
  do {
    lVar5 = *(long *)pJVar1;
    *(int *)(lVar7 + 0x38) = (int)lVar5;
    LOCK();
    pJVar2 = this + 0xa8;
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



/* JPH::JobSystemSingleThreaded::CreateJob(char const*, JPH::Color, std::function<void ()> const&,
   unsigned int) */

code * JPH::JobSystemSingleThreaded::CreateJob
                 (code *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  uint *puVar1;
  int *piVar2;
  pthread_mutex_t *__mutex;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auVar19 [12];
  
  plVar15 = (long *)(param_2 + 0xb0);
  do {
    lVar13 = *plVar15;
    uVar17 = (uint)lVar13;
    if (uVar17 == 0xffffffff) {
      LOCK();
      puVar1 = (uint *)(param_2 + 0xb8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (uVar4 < *(uint *)(param_2 + 0x50)) goto LAB_00100259;
      __mutex = (pthread_mutex_t *)(param_2 + 0x80);
      uVar9 = pthread_mutex_lock(__mutex);
      if (uVar9 != 0) goto LAB_00100384;
      uVar9 = *(uint *)(param_2 + 0x50);
      if (uVar4 < uVar9) goto LAB_00100368;
      uVar7 = *(uint *)(param_2 + 0x40);
      goto LAB_0010034c;
    }
    uVar6 = *(undefined4 *)
             ((ulong)(uVar17 & *(uint *)(param_2 + 0x48)) * 0x40 +
              *(long *)(*(long *)(param_2 + 0x58) +
                       (ulong)(uVar17 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8) + 0x38
             );
    LOCK();
    piVar2 = (int *)(param_2 + 0xa8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar15;
    if (lVar13 == lVar5) {
      *plVar15 = CONCAT44(iVar3,uVar6);
    }
    UNLOCK();
  } while (lVar13 != lVar5);
  plVar15 = (long *)((ulong)(uVar17 & *(uint *)(param_2 + 0x48)) * 0x40 +
                    *(long *)(*(long *)(param_2 + 0x58) +
                             (ulong)(uVar17 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8))
  ;
  if (plVar15 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x10);
    *plVar15 = param_2;
    plVar15[1] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    *(undefined1 (*) [16])(plVar15 + 2) = (undefined1  [16])0x0;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(plVar15 + 2,param_5,2);
      lVar13 = *(long *)(param_5 + 0x18);
      plVar15[4] = *(long *)(param_5 + 0x10);
      plVar15[5] = lVar13;
    }
    *(undefined4 *)(plVar15 + 6) = 0;
    *(int *)((long)plVar15 + 0x34) = param_6;
  }
  *(uint *)(plVar15 + 7) = uVar17;
  goto LAB_00100185;
  while( true ) {
    lVar13 = *(long *)(param_2 + 0x58);
    uVar10 = (*AlignedAllocate)((ulong)uVar7 << 6,0x40);
    uVar7 = *(uint *)(param_2 + 0x40);
    *(undefined8 *)(lVar13 + uVar8 * 8) = uVar10;
    uVar9 = *(int *)(param_2 + 0x50) + uVar7;
    *(uint *)(param_2 + 0x50) = uVar9;
    if (uVar4 < uVar9) break;
LAB_0010034c:
    uVar8 = (ulong)uVar9 / (ulong)uVar7;
    if ((int)uVar8 == *(int *)(param_2 + 0x4c)) {
      pthread_mutex_unlock(__mutex);
      goto LAB_00100185;
    }
  }
LAB_00100368:
  pthread_mutex_unlock(__mutex);
LAB_00100259:
  plVar15 = (long *)((ulong)(uVar4 & *(uint *)(param_2 + 0x48)) * 0x40 +
                    *(long *)(*(long *)(param_2 + 0x58) +
                             (ulong)(uVar4 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8));
  if (plVar15 != (long *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_5 + 0x10);
    *plVar15 = param_2;
    plVar15[1] = 0;
    plVar15[4] = 0;
    plVar15[5] = 0;
    *(undefined1 (*) [16])(plVar15 + 2) = (undefined1  [16])0x0;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (*UNRECOVERED_JUMPTABLE)(plVar15 + 2,param_5,2);
      lVar13 = *(long *)(param_5 + 0x18);
      plVar15[4] = *(long *)(param_5 + 0x10);
      plVar15[5] = lVar13;
    }
    *(undefined4 *)(plVar15 + 6) = 0;
    *(int *)((long)plVar15 + 0x34) = param_6;
  }
  *(uint *)(plVar15 + 7) = uVar4;
  uVar17 = uVar4;
LAB_00100185:
  plVar15 = (long *)(ulong)(uVar17 & *(uint *)(param_2 + 0x48));
  lVar13 = (long)plVar15 * 0x40 +
           *(long *)(*(long *)(param_2 + 0x58) +
                    (ulong)(uVar17 >> ((byte)*(undefined4 *)(param_2 + 0x44) & 0x1f)) * 8);
  *(long *)param_1 = lVar13;
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 1;
    UNLOCK();
  }
  if (param_6 == 0) {
    piVar2 = (int *)(lVar13 + 0x34);
    LOCK();
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      *piVar2 = -0x1f1f1f20;
    }
    UNLOCK();
    if (iVar3 == 0) {
      if (*(long *)(lVar13 + 0x20) == 0) {
        uVar9 = std::__throw_bad_function_call();
LAB_00100384:
        plVar11 = (long *)(ulong)uVar9;
        auVar19 = std::__throw_system_error(uVar9);
        if (auVar19._8_4_ == 0) {
          return auVar19._0_8_;
        }
        plVar12 = plVar15 + auVar19._8_4_;
        plVar16 = plVar15;
        do {
          plVar14 = (long *)*plVar16;
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          puVar1 = (uint *)((long)plVar14 + 0x34);
          LOCK();
          uVar17 = *puVar1;
          if (uVar17 == 0) {
            *puVar1 = 0xe0e0e0e0;
          }
          else {
            UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar17;
          }
          UNLOCK();
          if (uVar17 == 0) {
            if (plVar14[4] == 0) {
              std::__throw_bad_function_call();
              UNRECOVERED_JUMPTABLE = (code *)0x0;
              puVar1 = (uint *)((long)plVar15 + 0x34);
              LOCK();
              uVar17 = *puVar1;
              if (uVar17 == 0) {
                *puVar1 = 0xe0e0e0e0;
              }
              else {
                UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar17;
              }
              UNLOCK();
              if (uVar17 == 0) {
                if (plVar15[4] == 0) {
                  std::__throw_bad_function_call();
                  uVar4 = (uint)plVar15;
                  uVar8 = (ulong)(uVar4 * 2 - 1) / ((ulong)plVar15 & 0xffffffff);
                  *(uint *)(plVar11 + 8) = uVar4;
                  iVar3 = 0;
                  for (uVar17 = uVar4; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
                    iVar3 = iVar3 + 1;
                  }
                  if (uVar4 == 0) {
                    iVar3 = 0x20;
                  }
                  *(uint *)(plVar11 + 9) = uVar4 - 1;
                  *(int *)((long)plVar11 + 0x44) = iVar3;
                  *(int *)((long)plVar11 + 0x4c) = (int)uVar8;
                  lVar13 = (*Allocate)(uVar8 * 8);
                  *(undefined4 *)(plVar11 + 10) = 0;
                  plVar11[0xb] = lVar13;
                  LOCK();
                  *(undefined4 *)(plVar11 + 0x17) = 0;
                  UNLOCK();
                  LOCK();
                  *(undefined4 *)(plVar11 + 0x15) = 1;
                  UNLOCK();
                  LOCK();
                  UNRECOVERED_JUMPTABLE = (code *)plVar11[0x16];
                  plVar11[0x16] = 0xffffffff;
                  UNLOCK();
                  return UNRECOVERED_JUMPTABLE;
                }
                (*(code *)plVar15[5])(plVar15 + 2);
                plVar11 = (long *)plVar15[1];
                do {
                  LOCK();
                  plVar12 = (long *)plVar15[1];
                  bVar18 = plVar11 == plVar12;
                  if (bVar18) {
                    plVar15[1] = -1;
                    plVar12 = plVar11;
                  }
                  UNLOCK();
                  plVar11 = plVar12;
                } while (!bVar18);
                UNRECOVERED_JUMPTABLE = (code *)0xe0e0e0e0;
                LOCK();
                if (*puVar1 == 0xe0e0e0e0) {
                  *puVar1 = 0xd0d0d0d0;
                }
                else {
                  UNRECOVERED_JUMPTABLE = (code *)(ulong)*puVar1;
                }
                UNLOCK();
                if ((plVar12 != (long *)0x0) &&
                   (UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x20),
                   UNRECOVERED_JUMPTABLE != BarrierImpl::OnJobFinished)) {
                    /* WARNING: Could not recover jumptable at 0x001004d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)(plVar12,plVar15);
                  return UNRECOVERED_JUMPTABLE;
                }
              }
              return UNRECOVERED_JUMPTABLE;
            }
            (*(code *)plVar14[5])(plVar14 + 2);
            plVar15 = (long *)plVar14[1];
            do {
              LOCK();
              plVar11 = (long *)plVar14[1];
              bVar18 = plVar15 == plVar11;
              if (bVar18) {
                plVar14[1] = -1;
                plVar11 = plVar15;
              }
              UNLOCK();
              plVar15 = plVar11;
            } while (!bVar18);
            UNRECOVERED_JUMPTABLE = (code *)0xe0e0e0e0;
            LOCK();
            if (*puVar1 == 0xe0e0e0e0) {
              *puVar1 = 0xd0d0d0d0;
            }
            else {
              UNRECOVERED_JUMPTABLE = (code *)(ulong)*puVar1;
            }
            UNLOCK();
            plVar15 = (long *)0xffffffffffffffff;
            if ((plVar11 != (long *)0x0) &&
               (UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x20),
               UNRECOVERED_JUMPTABLE != BarrierImpl::OnJobFinished)) {
              UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
              plVar15 = plVar14;
            }
          }
          plVar16 = plVar16 + 1;
          if (plVar16 == plVar12) {
            return UNRECOVERED_JUMPTABLE;
          }
        } while( true );
      }
      (**(code **)(lVar13 + 0x28))(lVar13 + 0x10);
      plVar15 = *(long **)(lVar13 + 8);
      do {
        LOCK();
        plVar11 = *(long **)(lVar13 + 8);
        bVar18 = plVar15 == plVar11;
        if (bVar18) {
          *(long *)(lVar13 + 8) = -1;
          plVar11 = plVar15;
        }
        UNLOCK();
        plVar15 = plVar11;
      } while (!bVar18);
      LOCK();
      if (*piVar2 == -0x1f1f1f20) {
        *piVar2 = -0x2f2f2f30;
      }
      UNLOCK();
      if ((plVar11 != (long *)0x0) && (*(code **)(*plVar11 + 0x20) != BarrierImpl::OnJobFinished)) {
        (**(code **)(*plVar11 + 0x20))(plVar11,lVar13);
      }
    }
  }
  return param_1;
}



/* JPH::JobSystemSingleThreaded::QueueJobs(JPH::JobSystem::Job**, unsigned int) */

code * __thiscall
JPH::JobSystemSingleThreaded::QueueJobs(JobSystemSingleThreaded *this,Job **param_1,uint param_2)

{
  Job *pJVar1;
  Job **ppJVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  code *in_RAX;
  code *UNRECOVERED_JUMPTABLE;
  Job *pJVar7;
  long lVar8;
  Job *pJVar9;
  Job **ppJVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    return in_RAX;
  }
  ppJVar2 = param_1 + param_2;
  ppJVar10 = param_1;
  do {
    pJVar9 = *ppJVar10;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    pJVar1 = pJVar9 + 0x34;
    LOCK();
    uVar3 = *(uint *)pJVar1;
    if (uVar3 == 0) {
      *(uint *)pJVar1 = 0xe0e0e0e0;
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar3;
    }
    UNLOCK();
    if (uVar3 == 0) {
      if (*(Job **)(pJVar9 + 0x20) == (Job *)0x0) {
        std::__throw_bad_function_call();
        UNRECOVERED_JUMPTABLE = (code *)0x0;
        pJVar1 = (Job *)((long)param_1 + 0x34);
        LOCK();
        uVar3 = *(uint *)pJVar1;
        if (uVar3 == 0) {
          *(uint *)pJVar1 = 0xe0e0e0e0;
        }
        else {
          UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar3;
        }
        UNLOCK();
        if (uVar3 == 0) {
          if (*(Job **)((long)param_1 + 0x20) == (Job *)0x0) {
            std::__throw_bad_function_call();
            uVar6 = (uint)param_1;
            uVar4 = (ulong)(uVar6 * 2 - 1) / ((ulong)param_1 & 0xffffffff);
            *(uint *)((Job *)this + 0x40) = uVar6;
            iVar5 = 0;
            for (uVar3 = uVar6; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            if (uVar6 == 0) {
              iVar5 = 0x20;
            }
            *(uint *)((Job *)this + 0x48) = uVar6 - 1;
            *(int *)((Job *)this + 0x44) = iVar5;
            *(int *)((Job *)this + 0x4c) = (int)uVar4;
            lVar8 = (*Allocate)(uVar4 * 8);
            *(undefined4 *)((Job *)this + 0x50) = 0;
            *(long *)((Job *)this + 0x58) = lVar8;
            LOCK();
            *(undefined4 *)((Job *)this + 0xb8) = 0;
            UNLOCK();
            LOCK();
            *(undefined4 *)((Job *)this + 0xa8) = 1;
            UNLOCK();
            LOCK();
            UNRECOVERED_JUMPTABLE = *(code **)((Job *)this + 0xb0);
            *(long *)((Job *)this + 0xb0) = 0xffffffff;
            UNLOCK();
            return UNRECOVERED_JUMPTABLE;
          }
          (*(code *)*(Job **)((long)param_1 + 0x28))((Job *)((long)param_1 + 0x10));
          pJVar9 = *(Job **)((long)param_1 + 8);
          do {
            LOCK();
            pJVar7 = *(Job **)((long)param_1 + 8);
            bVar11 = pJVar9 == pJVar7;
            if (bVar11) {
              *(Job **)((long)param_1 + 8) = (Job *)0xffffffffffffffff;
              pJVar7 = pJVar9;
            }
            UNLOCK();
            pJVar9 = pJVar7;
          } while (!bVar11);
          UNRECOVERED_JUMPTABLE = (code *)0xe0e0e0e0;
          LOCK();
          if (*(uint *)pJVar1 == 0xe0e0e0e0) {
            *(uint *)pJVar1 = 0xd0d0d0d0;
          }
          else {
            UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)pJVar1;
          }
          UNLOCK();
          if ((pJVar7 != (Job *)0x0) &&
             (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pJVar7 + 0x20),
             UNRECOVERED_JUMPTABLE != BarrierImpl::OnJobFinished)) {
                    /* WARNING: Could not recover jumptable at 0x001004d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)(pJVar7,param_1);
            return UNRECOVERED_JUMPTABLE;
          }
        }
        return UNRECOVERED_JUMPTABLE;
      }
      (*(code *)*(Job **)(pJVar9 + 0x28))(pJVar9 + 0x10);
      pJVar7 = *(Job **)(pJVar9 + 8);
      do {
        LOCK();
        this = *(JobSystemSingleThreaded **)(pJVar9 + 8);
        bVar11 = pJVar7 == (Job *)this;
        if (bVar11) {
          *(Job **)(pJVar9 + 8) = (Job *)0xffffffffffffffff;
          this = (JobSystemSingleThreaded *)pJVar7;
        }
        UNLOCK();
        pJVar7 = (Job *)this;
      } while (!bVar11);
      UNRECOVERED_JUMPTABLE = (code *)0xe0e0e0e0;
      LOCK();
      if (*(uint *)pJVar1 == 0xe0e0e0e0) {
        *(uint *)pJVar1 = 0xd0d0d0d0;
      }
      else {
        UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)pJVar1;
      }
      UNLOCK();
      param_1 = (Job **)(Job *)0xffffffffffffffff;
      if ((this != (JobSystemSingleThreaded *)0x0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x20),
         UNRECOVERED_JUMPTABLE != BarrierImpl::OnJobFinished)) {
        UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)();
        param_1 = (Job **)pJVar9;
      }
    }
    ppJVar10 = ppJVar10 + 1;
    if (ppJVar10 == ppJVar2) {
      return UNRECOVERED_JUMPTABLE;
    }
  } while( true );
}



/* JPH::JobSystemSingleThreaded::QueueJob(JPH::JobSystem::Job*) */

code * __thiscall JPH::JobSystemSingleThreaded::QueueJob(JobSystemSingleThreaded *this,Job *param_1)

{
  Job *pJVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  long *plVar8;
  bool bVar9;
  
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  pJVar1 = param_1 + 0x34;
  LOCK();
  uVar2 = *(uint *)pJVar1;
  if (uVar2 == 0) {
    *(uint *)pJVar1 = 0xe0e0e0e0;
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(ulong)uVar2;
  }
  UNLOCK();
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      std::__throw_bad_function_call();
      uVar5 = (uint)param_1;
      uVar3 = (ulong)(uVar5 * 2 - 1) / ((ulong)param_1 & 0xffffffff);
      *(uint *)(this + 0x40) = uVar5;
      iVar4 = 0;
      for (uVar2 = uVar5; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
        iVar4 = iVar4 + 1;
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      *(uint *)(this + 0x48) = uVar5 - 1;
      *(int *)(this + 0x44) = iVar4;
      *(int *)(this + 0x4c) = (int)uVar3;
      uVar7 = (*Allocate)(uVar3 * 8);
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined8 *)(this + 0x58) = uVar7;
      LOCK();
      *(undefined4 *)(this + 0xb8) = 0;
      UNLOCK();
      LOCK();
      *(undefined4 *)(this + 0xa8) = 1;
      UNLOCK();
      LOCK();
      UNRECOVERED_JUMPTABLE = *(code **)(this + 0xb0);
      *(undefined8 *)(this + 0xb0) = 0xffffffff;
      UNLOCK();
      return UNRECOVERED_JUMPTABLE;
    }
    (**(code **)(param_1 + 0x28))(param_1 + 0x10);
    plVar8 = *(long **)(param_1 + 8);
    do {
      LOCK();
      plVar6 = *(long **)(param_1 + 8);
      bVar9 = plVar8 == plVar6;
      if (bVar9) {
        *(long *)(param_1 + 8) = -1;
        plVar6 = plVar8;
      }
      UNLOCK();
      plVar8 = plVar6;
    } while (!bVar9);
    UNRECOVERED_JUMPTABLE = (code *)0xe0e0e0e0;
    LOCK();
    if (*(uint *)pJVar1 == 0xe0e0e0e0) {
      *(uint *)pJVar1 = 0xd0d0d0d0;
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(ulong)*(uint *)pJVar1;
    }
    UNLOCK();
    if ((plVar6 != (long *)0x0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x20),
       UNRECOVERED_JUMPTABLE != BarrierImpl::OnJobFinished)) {
                    /* WARNING: Could not recover jumptable at 0x001004d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)(*UNRECOVERED_JUMPTABLE)(plVar6,param_1);
      return UNRECOVERED_JUMPTABLE;
    }
  }
  return UNRECOVERED_JUMPTABLE;
}



/* JPH::JobSystemSingleThreaded::Init(unsigned int) */

undefined8 __thiscall JPH::JobSystemSingleThreaded::Init(JobSystemSingleThreaded *this,uint param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = (ulong)(param_1 * 2 - 1) / (ulong)param_1;
  *(uint *)(this + 0x40) = param_1;
  iVar2 = 0;
  for (uVar3 = param_1; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    iVar2 = iVar2 + 1;
  }
  if (param_1 == 0) {
    iVar2 = 0x20;
  }
  *(uint *)(this + 0x48) = param_1 - 1;
  *(int *)(this + 0x44) = iVar2;
  *(int *)(this + 0x4c) = (int)uVar1;
  uVar4 = (*Allocate)(uVar1 * 8);
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



/* JPH::JobSystemSingleThreaded::GetMaxConcurrency() const */

undefined8 JPH::JobSystemSingleThreaded::GetMaxConcurrency(void)

{
  return 1;
}



/* JPH::JobSystemSingleThreaded::BarrierImpl::OnJobFinished(JPH::JobSystem::Job*) */

void JPH::JobSystemSingleThreaded::BarrierImpl::OnJobFinished(Job *param_1)

{
  return;
}



/* JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded() */

void __thiscall
JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded(JobSystemSingleThreaded *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__JobSystemSingleThreaded_00100728;
  lVar5 = *(long *)(this + 0x58);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x40);
    if (uVar3 <= uVar2) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        (*AlignedFree)(*(undefined8 *)(lVar5 + lVar1));
        lVar5 = *(long *)(this + 0x58);
      } while ((uint)lVar4 < uVar2 / uVar3);
    }
    (*Free)();
  }
                    /* WARNING: Could not recover jumptable at 0x001005cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AlignedFree)(this);
  return;
}



/* JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded() */

void __thiscall
JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded(JobSystemSingleThreaded *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *(undefined ***)this = &PTR__JobSystemSingleThreaded_00100728;
  lVar5 = *(long *)(this + 0x58);
  if (lVar5 != 0) {
    uVar2 = *(uint *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x40);
    if (uVar3 <= uVar2) {
      lVar4 = 0;
      do {
        lVar1 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        (*AlignedFree)(*(undefined8 *)(lVar5 + lVar1));
        lVar5 = *(long *)(this + 0x58);
      } while ((uint)lVar4 < uVar2 / uVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00100633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::JobSystemSingleThreaded::Init(unsigned int) */

void JPH::JobSystemSingleThreaded::_GLOBAL__sub_I_Init(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded() */

void __thiscall
JPH::JobSystemSingleThreaded::~JobSystemSingleThreaded(JobSystemSingleThreaded *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


