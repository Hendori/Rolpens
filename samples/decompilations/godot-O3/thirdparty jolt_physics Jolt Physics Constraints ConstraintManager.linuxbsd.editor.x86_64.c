
/* void JPH::QuickSort<unsigned int*, JPH::ConstraintManager::sSortConstraints(JPH::Constraint**,
   unsigned int*, unsigned int*)::{lambda(unsigned int, unsigned int)#1}>(unsigned int*, unsigned
   int*, JPH::ConstraintManager::sSortConstraints(JPH::Constraint**, unsigned int*, unsigned
   int*)::{lambda(unsigned int, unsigned int)#1}) */

void JPH::
     QuickSort<unsigned_int*,JPH::ConstraintManager::sSortConstraints(JPH::Constraint**,unsigned_int*,unsigned_int*)::_lambda(unsigned_int,unsigned_int)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  
  lVar11 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar11 < 5) {
      return;
    }
    if (lVar11 < 0x81) break;
    uVar7 = *param_1;
    lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
    puVar4 = (uint *)(((lVar11 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar3 = (long)param_2 + (-4 - (long)param_1) >> 5;
    uVar8 = *(uint *)(lVar6 + 0x14);
    puVar2 = param_1 + lVar3;
    puVar5 = param_1 + lVar3 * 2;
    lVar11 = *(long *)(param_3 + (ulong)*puVar2 * 8);
    uVar10 = *(uint *)(lVar11 + 0x14);
    bVar12 = uVar10 < uVar8;
    if (uVar10 == uVar8) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    if (bVar12) {
      *param_1 = *puVar2;
      *puVar2 = uVar7;
      uVar7 = *param_1;
      lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
      uVar8 = *(uint *)(lVar6 + 0x14);
    }
    uVar10 = *puVar5;
    lVar11 = *(long *)(param_3 + (ulong)uVar10 * 8);
    uVar1 = *(uint *)(lVar11 + 0x14);
    bVar12 = uVar1 < uVar8;
    if (uVar1 == uVar8) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    if (bVar12) {
      *param_1 = uVar10;
      *puVar5 = uVar7;
      uVar1 = *(uint *)(lVar6 + 0x14);
      lVar11 = lVar6;
      uVar10 = uVar7;
    }
    uVar7 = *puVar2;
    lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
    uVar8 = *(uint *)(lVar6 + 0x14);
    if (uVar8 == uVar1) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    else {
      bVar12 = uVar1 < uVar8;
    }
    if (bVar12) {
      *puVar2 = uVar10;
      *puVar5 = uVar7;
    }
    puVar5 = puVar4 + lVar3;
    puVar9 = puVar4 + -lVar3;
    uVar7 = *puVar9;
    lVar11 = *(long *)(param_3 + (ulong)*puVar4 * 8);
    lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
    uVar8 = *(uint *)(lVar6 + 0x14);
    uVar10 = *(uint *)(lVar11 + 0x14);
    bVar12 = uVar10 < uVar8;
    if (uVar10 == uVar8) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    if (bVar12) {
      *puVar9 = *puVar4;
      *puVar4 = uVar7;
      uVar7 = *puVar9;
      lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
      uVar8 = *(uint *)(lVar6 + 0x14);
    }
    uVar10 = *puVar5;
    lVar11 = *(long *)(param_3 + (ulong)uVar10 * 8);
    uVar1 = *(uint *)(lVar11 + 0x14);
    bVar12 = uVar1 < uVar8;
    if (uVar1 == uVar8) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    if (bVar12) {
      *puVar9 = uVar10;
      *puVar5 = uVar7;
      uVar1 = *(uint *)(lVar6 + 0x14);
      lVar11 = lVar6;
      uVar10 = uVar7;
    }
    uVar7 = *puVar4;
    lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
    uVar8 = *(uint *)(lVar6 + 0x14);
    if (uVar8 == uVar1) {
      bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
    }
    else {
      bVar12 = uVar1 < uVar8;
    }
    if (bVar12) {
      *puVar4 = uVar10;
      *puVar5 = uVar7;
    }
    puVar9 = param_2 + (-1 - lVar3);
    puVar5 = param_2 + lVar3 * -2 + -1;
    uVar7 = *puVar5;
    lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
    lVar6 = *(long *)(param_3 + (ulong)*puVar9 * 8);
    uVar8 = *(uint *)(lVar11 + 0x14);
    uVar10 = *(uint *)(lVar6 + 0x14);
    bVar12 = uVar10 < uVar8;
    if (uVar10 == uVar8) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    if (bVar12) {
      *puVar5 = *puVar9;
      *puVar9 = uVar7;
      uVar7 = *puVar5;
      lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
      uVar8 = *(uint *)(lVar11 + 0x14);
    }
    uVar10 = param_2[-1];
    lVar6 = *(long *)(param_3 + (ulong)uVar10 * 8);
    uVar1 = *(uint *)(lVar6 + 0x14);
    bVar12 = uVar1 < uVar8;
    if (uVar1 == uVar8) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    if (bVar12) {
      *puVar5 = uVar10;
      param_2[-1] = uVar7;
      uVar1 = *(uint *)(lVar11 + 0x14);
      lVar6 = lVar11;
      uVar10 = uVar7;
    }
    uVar7 = *puVar9;
    lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
    uVar8 = *(uint *)(lVar11 + 0x14);
    if (uVar8 == uVar1) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    else {
      bVar12 = uVar1 < uVar8;
    }
    if (bVar12) {
      *puVar9 = uVar10;
      param_2[-1] = uVar7;
    }
    uVar7 = *puVar2;
    lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
    lVar6 = *(long *)(param_3 + (ulong)*puVar4 * 8);
    uVar8 = *(uint *)(lVar11 + 0x14);
    uVar10 = *(uint *)(lVar6 + 0x14);
    bVar12 = uVar10 < uVar8;
    if (uVar10 == uVar8) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    if (bVar12) {
      *puVar2 = *puVar4;
      *puVar4 = uVar7;
      uVar7 = *puVar2;
      lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
      uVar8 = *(uint *)(lVar11 + 0x14);
    }
    uVar10 = *puVar9;
    lVar6 = *(long *)(param_3 + (ulong)uVar10 * 8);
    uVar1 = *(uint *)(lVar6 + 0x14);
    bVar12 = uVar1 < uVar8;
    if (uVar1 == uVar8) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    if (bVar12) {
      *puVar2 = uVar10;
      *puVar9 = uVar7;
      uVar1 = *(uint *)(lVar11 + 0x14);
      lVar6 = lVar11;
      uVar10 = uVar7;
    }
    uVar7 = *puVar4;
    lVar11 = *(long *)(param_3 + (ulong)uVar7 * 8);
    uVar8 = *(uint *)(lVar11 + 0x14);
    if (uVar8 == uVar1) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
    }
    else {
      bVar12 = uVar1 < uVar8;
    }
    puVar2 = param_2;
    puVar5 = param_1;
    if (bVar12) {
      *puVar4 = uVar10;
      *puVar9 = uVar7;
      lVar11 = *(long *)(param_3 + (ulong)*puVar4 * 8);
      uVar8 = *(uint *)(lVar11 + 0x14);
    }
    while( true ) {
      do {
        puVar4 = puVar5;
        uVar7 = *puVar4;
        lVar6 = *(long *)(param_3 + (ulong)uVar7 * 8);
        uVar10 = *(uint *)(lVar6 + 0x14);
        bVar12 = uVar10 < uVar8;
        if (uVar10 == uVar8) {
          bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar11 + 0x10);
        }
        puVar5 = puVar4 + 1;
      } while (bVar12);
      do {
        puVar9 = puVar2;
        puVar2 = puVar9 + -1;
        lVar6 = *(long *)(param_3 + (ulong)puVar9[-1] * 8);
        uVar10 = *(uint *)(lVar6 + 0x14);
        if (uVar10 == uVar8) {
          bVar12 = *(uint *)(lVar11 + 0x10) < *(uint *)(lVar6 + 0x10);
        }
        else {
          bVar12 = uVar8 < uVar10;
        }
      } while (bVar12);
      if (puVar2 <= puVar4) break;
      *puVar4 = puVar9[-1];
      *puVar2 = uVar7;
      uVar8 = *(uint *)(lVar11 + 0x14);
    }
    lVar11 = (long)puVar9 - (long)param_1;
    if (lVar11 < (long)param_2 - (long)puVar9) {
      QuickSort<unsigned_int*,JPH::ConstraintManager::sSortConstraints(JPH::Constraint**,unsigned_int*,unsigned_int*)::_lambda(unsigned_int,unsigned_int)_1_>
                (param_1,puVar9,param_3);
      lVar11 = (long)param_2 - (long)puVar9;
      param_1 = puVar9;
    }
    else {
      QuickSort<unsigned_int*,JPH::ConstraintManager::sSortConstraints(JPH::Constraint**,unsigned_int*,unsigned_int*)::_lambda(unsigned_int,unsigned_int)_1_>
                (puVar9,param_2,param_3);
      param_2 = puVar9;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar2 = param_1 + 1;
  if (puVar2 == param_2) {
    return;
  }
  lVar11 = 0;
  do {
    uVar8 = *puVar2;
    lVar6 = *(long *)(param_3 + (ulong)uVar8 * 8);
    lVar3 = *(long *)(param_3 + (ulong)*param_1 * 8);
    uVar10 = *(uint *)(lVar6 + 0x14);
    uVar7 = *(uint *)(lVar3 + 0x14);
    bVar12 = uVar10 < uVar7;
    if (uVar10 == uVar7) {
      bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar3 + 0x10);
    }
    puVar5 = puVar2;
    if (bVar12) {
      if (puVar2 != param_1) {
        memmove((void *)((long)puVar2 + lVar11),param_1,4 - lVar11);
      }
      *param_1 = uVar8;
    }
    else {
      while( true ) {
        lVar3 = *(long *)(param_3 + (ulong)puVar5[-1] * 8);
        uVar7 = *(uint *)(lVar3 + 0x14);
        if (uVar7 == uVar10) {
          bVar12 = *(uint *)(lVar6 + 0x10) < *(uint *)(lVar3 + 0x10);
        }
        else {
          bVar12 = uVar10 < uVar7;
        }
        if (!bVar12) break;
        *puVar5 = puVar5[-1];
        uVar10 = *(uint *)(lVar6 + 0x14);
        puVar5 = puVar5 + -1;
      }
      *puVar5 = uVar8;
    }
    puVar2 = puVar2 + 1;
    lVar11 = lVar11 + -4;
  } while (puVar2 != param_2);
  return;
}



/* JPH::ConstraintManager::Add(JPH::Constraint**, int) */

void __thiscall
JPH::ConstraintManager::Add(ConstraintManager *this,Constraint **param_1,int param_2)

{
  Constraint **ppCVar1;
  Constraint *pCVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  iVar5 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar5);
  }
  uVar11 = *(long *)this + (long)param_2;
  if (*(ulong *)(this + 8) < uVar11) {
    puVar9 = (undefined8 *)(*Allocate)(uVar11 * 8);
    puVar6 = *(undefined8 **)(this + 0x10);
    if (puVar6 != (undefined8 *)0x0) {
      lVar10 = *(long *)this;
      if (puVar9 < puVar6) {
        for (puVar7 = puVar9; puVar7 < puVar9 + lVar10; puVar7 = puVar7 + 1) {
          uVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          *puVar7 = uVar3;
        }
      }
      else {
        puVar6 = puVar6 + lVar10 + -1;
        puVar7 = puVar9 + lVar10 + -1;
        if (!CARRY8(lVar10 * 8 - 8,(ulong)puVar9)) {
          do {
            uVar3 = *puVar6;
            puVar8 = puVar7 + -1;
            puVar6 = puVar6 + -1;
            *puVar7 = uVar3;
            puVar7 = puVar8;
          } while (puVar9 <= puVar8);
        }
      }
      (*Free)();
    }
    *(undefined8 **)(this + 0x10) = puVar9;
    *(ulong *)(this + 8) = uVar11;
  }
  ppCVar1 = param_1 + param_2;
  if (param_1 < ppCVar1) {
    uVar11 = *(ulong *)this;
    do {
      pCVar2 = *param_1;
      *(int *)(pCVar2 + 0x10) = (int)uVar11;
      LOCK();
      *(int *)(pCVar2 + 8) = *(int *)(pCVar2 + 8) + 1;
      UNLOCK();
      lVar10 = *(long *)this;
      uVar11 = lVar10 + 1;
      if (*(ulong *)(this + 8) < uVar11) {
        uVar4 = *(ulong *)(this + 8) * 2;
        if (uVar11 <= uVar4) {
          uVar11 = uVar4;
        }
        puVar6 = (undefined8 *)(*Allocate)(uVar11 * 8);
        puVar9 = *(undefined8 **)(this + 0x10);
        if (puVar9 != (undefined8 *)0x0) {
          lVar10 = *(long *)this;
          if (puVar6 < puVar9) {
            for (puVar7 = puVar6; puVar7 < puVar6 + lVar10; puVar7 = puVar7 + 1) {
              uVar3 = *puVar9;
              puVar9 = puVar9 + 1;
              *puVar7 = uVar3;
            }
          }
          else {
            puVar9 = puVar9 + lVar10 + -1;
            puVar7 = puVar6 + lVar10 + -1;
            if (!CARRY8(lVar10 * 8 - 8,(ulong)puVar6)) {
              do {
                uVar3 = *puVar9;
                puVar8 = puVar7 + -1;
                puVar9 = puVar9 + -1;
                *puVar7 = uVar3;
                puVar7 = puVar8;
              } while (puVar6 <= puVar8);
              (*Free)();
              goto LAB_00100600;
            }
          }
          (*Free)();
        }
LAB_00100600:
        lVar10 = *(long *)this;
        *(undefined8 **)(this + 0x10) = puVar6;
        *(ulong *)(this + 8) = uVar11;
        uVar11 = lVar10 + 1;
      }
      else {
        puVar6 = *(undefined8 **)(this + 0x10);
      }
      param_1 = param_1 + 1;
      *(ulong *)this = uVar11;
      puVar6[lVar10] = pCVar2;
    } while (param_1 < ppCVar1);
  }
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}



/* JPH::ConstraintManager::Remove(JPH::Constraint**, int) */

void __thiscall
JPH::ConstraintManager::Remove(ConstraintManager *this,Constraint **param_1,int param_2)

{
  long *plVar1;
  Constraint **ppCVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  iVar7 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar7);
  }
  ppCVar2 = param_1 + param_2;
  if (param_1 < ppCVar2) {
    do {
      while( true ) {
        lVar10 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(*param_1 + 0x10);
        *(undefined4 *)(*param_1 + 0x10) = 0xffffffff;
        lVar8 = *(long *)this;
        uVar9 = (int)lVar8 - 1;
        if (uVar4 < uVar9) {
          plVar3 = (long *)(lVar10 + (ulong)uVar4 * 8);
          plVar5 = *(long **)(lVar10 + (ulong)uVar9 * 8);
          plVar6 = (long *)*plVar3;
          *(uint *)(plVar5 + 2) = uVar4;
          if (plVar5 != plVar6) {
            if (plVar6 != (long *)0x0) {
              LOCK();
              plVar1 = plVar6 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)(*plVar6 + 8))();
              }
            }
            *plVar3 = (long)plVar5;
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            lVar10 = *(long *)(this + 0x10);
            lVar8 = *(long *)this;
          }
        }
        plVar3 = *(long **)(lVar10 + (lVar8 + -1) * 8);
        *(long *)this = lVar8 + -1;
        if (plVar3 != (long *)0x0) break;
LAB_00100748:
        param_1 = param_1 + 1;
        if (ppCVar2 <= param_1) goto LAB_001007af;
      }
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) goto LAB_00100748;
      param_1 = param_1 + 1;
      (**(code **)(*plVar3 + 8))();
    } while (param_1 < ppCVar2);
  }
LAB_001007af:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}



/* JPH::ConstraintManager::GetConstraints() const */

void JPH::ConstraintManager::GetConstraints(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *in_RSI;
  undefined1 (*in_RDI) [16];
  long lVar10;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(in_RSI + 3));
  if (iVar4 == 0) {
    lVar2 = *in_RSI;
    plVar9 = (long *)in_RSI[2];
    *(undefined8 *)in_RDI[1] = 0;
    *in_RDI = (undefined1  [16])0x0;
    lVar10 = lVar2 * 8;
    plVar1 = plVar9 + lVar2;
    if (lVar10 != 0) {
      puVar5 = (undefined8 *)(*Allocate)();
      puVar8 = *(undefined8 **)in_RDI[1];
      if (puVar8 != (undefined8 *)0x0) {
        lVar2 = *(long *)*in_RDI;
        if (puVar5 < puVar8) {
          for (puVar6 = puVar5; puVar6 < puVar5 + lVar2; puVar6 = puVar6 + 1) {
            uVar3 = *puVar8;
            puVar8 = puVar8 + 1;
            *puVar6 = uVar3;
          }
        }
        else {
          puVar8 = puVar8 + lVar2 + -1;
          puVar6 = puVar5 + lVar2 + -1;
          if (!CARRY8(lVar2 * 8 - 8,(ulong)puVar5)) {
            do {
              uVar3 = *puVar8;
              puVar7 = puVar6 + -1;
              puVar8 = puVar8 + -1;
              *puVar6 = uVar3;
              puVar6 = puVar7;
            } while (puVar5 <= puVar7);
          }
        }
        (*Free)();
      }
      *(undefined8 **)in_RDI[1] = puVar5;
      *(long *)(*in_RDI + 8) = lVar10 >> 3;
      if (plVar9 != plVar1) {
        while( true ) {
          lVar2 = *(long *)*in_RDI;
          *(long *)*in_RDI = lVar2 + 1;
          lVar10 = *plVar9;
          puVar5[lVar2] = lVar10;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          plVar9 = plVar9 + 1;
          if (plVar1 == plVar9) break;
          puVar5 = *(undefined8 **)in_RDI[1];
        }
      }
    }
    pthread_mutex_unlock((pthread_mutex_t *)(in_RSI + 3));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar4);
}



/* JPH::ConstraintManager::GetActiveConstraints(unsigned int, unsigned int, JPH::Constraint**,
   unsigned int&) const */

void __thiscall
JPH::ConstraintManager::GetActiveConstraints
          (ConstraintManager *this,uint param_1,uint param_2,Constraint **param_3,uint *param_4)

{
  Constraint *pCVar1;
  Constraint CVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1 < param_2) {
    lVar3 = (ulong)param_1 * 8;
    uVar4 = 0;
    do {
      pCVar1 = *(Constraint **)(*(long *)(this + 0x10) + lVar3);
      if (*(code **)(*(long *)pCVar1 + 0x30) == Constraint::IsActive) {
        CVar2 = pCVar1[0x1a];
      }
      else {
        CVar2 = (Constraint)(**(code **)(*(long *)pCVar1 + 0x30))(pCVar1);
      }
      if (CVar2 != (Constraint)0x0) {
        *param_3 = pCVar1;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + 1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != ((ulong)param_1 + 1 + (ulong)((param_2 - 1) - param_1)) * 8);
  }
  else {
    uVar4 = 0;
  }
  *param_4 = uVar4;
  return;
}



/* JPH::ConstraintManager::sBuildIslands(JPH::Constraint**, unsigned int, JPH::IslandBuilder&,
   JPH::BodyManager&) */

void JPH::ConstraintManager::sBuildIslands
               (Constraint **param_1,uint param_2,IslandBuilder *param_3,BodyManager *param_4)

{
  Constraint **ppCVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      ppCVar1 = param_1 + uVar2;
      uVar3 = uVar2 & 0xffffffff;
      uVar2 = uVar2 + 1;
      (**(code **)(*(long *)*ppCVar1 + 0x58))(*ppCVar1,uVar3,param_3,param_4);
    } while (param_2 != uVar2);
    return;
  }
  return;
}



/* JPH::ConstraintManager::sSortConstraints(JPH::Constraint**, unsigned int*, unsigned int*) */

void JPH::ConstraintManager::sSortConstraints(Constraint **param_1,uint *param_2,uint *param_3)

{
  QuickSort<unsigned_int*,JPH::ConstraintManager::sSortConstraints(JPH::Constraint**,unsigned_int*,unsigned_int*)::_lambda(unsigned_int,unsigned_int)_1_>
            (param_2,param_3,param_1);
  return;
}



/* JPH::ConstraintManager::sSetupVelocityConstraints(JPH::Constraint**, unsigned int, float) */

void JPH::ConstraintManager::sSetupVelocityConstraints
               (Constraint **param_1,uint param_2,float param_3)

{
  Constraint **ppCVar1;
  Constraint *pCVar2;
  
  ppCVar1 = param_1 + param_2;
  if (param_1 < ppCVar1) {
    do {
      pCVar2 = *param_1;
      param_1 = param_1 + 1;
      (**(code **)(*(long *)pCVar2 + 0x38))(param_3);
    } while (param_1 < ppCVar1);
  }
  return;
}



/* JPH::ConstraintManager::sSolveVelocityConstraints(JPH::Constraint**, unsigned int const*,
   unsigned int const*, float) */

uint JPH::ConstraintManager::sSolveVelocityConstraints
               (Constraint **param_1,uint *param_2,uint *param_3,float param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < param_3) {
    uVar2 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar1 = (**(code **)(*(long *)param_1[uVar1] + 0x48))(param_4);
      uVar2 = uVar2 | uVar1;
    } while (param_2 < param_3);
    return uVar2;
  }
  return 0;
}



/* JPH::ConstraintManager::sSolvePositionConstraints(JPH::Constraint**, unsigned int const*,
   unsigned int const*, float, float) */

uint JPH::ConstraintManager::sSolvePositionConstraints
               (Constraint **param_1,uint *param_2,uint *param_3,float param_4,float param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < param_3) {
    uVar2 = 0;
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      uVar1 = (**(code **)(*(long *)param_1[uVar1] + 0x50))(param_4);
      uVar2 = uVar2 | uVar1;
    } while (param_2 < param_3);
    return uVar2;
  }
  return 0;
}



/* JPH::ConstraintManager::DrawConstraints(JPH::DebugRenderer*) const */

void __thiscall
JPH::ConstraintManager::DrawConstraints(ConstraintManager *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar2 == 0) {
    puVar3 = *(undefined8 **)(this + 0x10);
    puVar1 = puVar3 + *(long *)this;
    for (; puVar1 != puVar3; puVar3 = puVar3 + 1) {
      (**(code **)(*(long *)*puVar3 + 0x68))((long *)*puVar3,param_1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* JPH::ConstraintManager::DrawConstraintLimits(JPH::DebugRenderer*) const */

void __thiscall
JPH::ConstraintManager::DrawConstraintLimits(ConstraintManager *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  puVar5 = *(undefined8 **)(this + 0x10);
  puVar1 = puVar5 + *(long *)this;
  for (; puVar1 != puVar5; puVar5 = puVar5 + 1) {
    while( true ) {
      plVar2 = (long *)*puVar5;
      pcVar3 = *(code **)(*plVar2 + 0x70);
      if (pcVar3 == Constraint::DrawConstraintLimits) break;
      puVar5 = puVar5 + 1;
      (*pcVar3)(plVar2,param_1);
      if (puVar1 == puVar5) goto LAB_00100c36;
    }
  }
LAB_00100c36:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}



/* JPH::ConstraintManager::DrawConstraintReferenceFrame(JPH::DebugRenderer*) const */

void __thiscall
JPH::ConstraintManager::DrawConstraintReferenceFrame(ConstraintManager *this,DebugRenderer *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  puVar5 = *(undefined8 **)(this + 0x10);
  puVar1 = puVar5 + *(long *)this;
  for (; puVar1 != puVar5; puVar5 = puVar5 + 1) {
    while( true ) {
      plVar2 = (long *)*puVar5;
      pcVar3 = *(code **)(*plVar2 + 0x78);
      if (pcVar3 == Constraint::DrawConstraintReferenceFrame) break;
      puVar5 = puVar5 + 1;
      (*pcVar3)(plVar2,param_1);
      if (puVar1 == puVar5) goto LAB_00100cb6;
    }
  }
LAB_00100cb6:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  return;
}



/* JPH::ConstraintManager::SaveState(JPH::StateRecorder&, JPH::StateRecorderFilter const*) const */

void __thiscall
JPH::ConstraintManager::SaveState
          (ConstraintManager *this,StateRecorder *param_1,StateRecorderFilter *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar4);
  }
  uVar10 = *(ulong *)this;
  if (param_2 == (StateRecorderFilter *)0x0) {
    local_44 = (undefined4)uVar10;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,&local_44,4);
    plVar7 = *(long **)(this + 0x10);
    plVar5 = plVar7 + *(long *)this;
    for (; plVar5 != plVar7; plVar7 = plVar7 + 1) {
      (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,*plVar7 + 0x10,4);
      (**(code **)(*(long *)*plVar7 + 0x80))((long *)*plVar7,param_1);
    }
    goto LAB_00100d59;
  }
  plVar5 = (long *)0x0;
  if (uVar10 == 0) {
LAB_00100d28:
    local_44 = 0;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,&local_44,4);
  }
  else {
    plVar5 = (long *)(*Reallocate)(0,0,uVar10 * 8);
    plVar6 = *(long **)(this + 0x10);
    plVar7 = plVar6 + *(long *)this;
    if (plVar6 == plVar7) goto LAB_00100d28;
    uVar9 = 0;
    do {
      lVar11 = *plVar6;
      if (*(code **)(*(long *)param_2 + 0x18) == StateRecorderFilter::ShouldSaveConstraint) {
LAB_00100dc0:
        uVar8 = uVar9 + 1;
        if (uVar10 < uVar8) {
          uVar2 = uVar10 * 2;
          lVar1 = uVar10 * 8;
          uVar10 = uVar2;
          if (uVar2 < uVar8) {
            uVar10 = uVar8;
          }
          plVar5 = (long *)(*Reallocate)(plVar5,lVar1,uVar10 * 8);
        }
        plVar5[uVar9] = lVar11;
      }
      else {
        cVar3 = (**(code **)(*(long *)param_2 + 0x18))(param_2,lVar11);
        uVar8 = uVar9;
        if (cVar3 != '\0') {
          lVar11 = *plVar6;
          goto LAB_00100dc0;
        }
      }
      plVar6 = plVar6 + 1;
      uVar9 = uVar8;
    } while (plVar7 != plVar6);
    local_44 = (undefined4)uVar8;
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,&local_44,4);
    for (plVar7 = plVar5; plVar5 + uVar8 != plVar7; plVar7 = plVar7 + 1) {
      plVar6 = (long *)*plVar7;
      (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1 + 8,plVar6 + 2,4);
      (**(code **)(*plVar6 + 0x80))(plVar6,param_1);
    }
  }
  if (plVar5 != (long *)0x0) {
    (*Free)(plVar5);
  }
LAB_00100d59:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::ConstraintManager::RestoreState(JPH::StateRecorder&) */

undefined8 __thiscall
JPH::ConstraintManager::RestoreState(ConstraintManager *this,StateRecorder *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  uint uVar6;
  long in_FS_OFFSET;
  uint local_38;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  if (param_1[0x10] == (StateRecorder)0x0) {
    local_38 = 0;
    uVar6 = 0;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_38,4);
    if (local_38 != 0) {
      do {
        (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
        if (*(ulong *)this <= (ulong)local_34) goto LAB_00101038;
        uVar6 = uVar6 + 1;
        plVar2 = *(long **)(*(long *)(this + 0x10) + (ulong)local_34 * 8);
        (**(code **)(*plVar2 + 0x88))(plVar2,param_1);
      } while (uVar6 < local_38);
    }
  }
  else {
    local_38 = (uint)*(undefined8 *)this;
    (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_38,4);
    if ((ulong)local_38 != *(ulong *)this) {
LAB_00101038:
      uVar4 = 0;
      goto LAB_0010103a;
    }
    plVar5 = *(long **)(this + 0x10);
    plVar2 = plVar5 + local_38;
    for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
      local_34 = *(uint *)(*plVar5 + 0x10);
      (**(code **)(*(long *)param_1 + 0x10))(param_1,&local_34,4);
      plVar1 = (long *)*plVar5;
      if (*(uint *)(plVar1 + 2) != local_34) goto LAB_00101038;
      (**(code **)(*plVar1 + 0x88))(plVar1,param_1);
    }
  }
  uVar4 = 1;
LAB_0010103a:
  pthread_mutex_unlock((pthread_mutex_t *)(this + 0x18));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::Constraint::IsActive() const */

Constraint __thiscall JPH::Constraint::IsActive(Constraint *this)

{
  return this[0x1a];
}



/* JPH::Constraint::DrawConstraintLimits(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintLimits(DebugRenderer *param_1)

{
  return;
}



/* JPH::Constraint::DrawConstraintReferenceFrame(JPH::DebugRenderer*) const */

void JPH::Constraint::DrawConstraintReferenceFrame(DebugRenderer *param_1)

{
  return;
}



/* JPH::StateRecorderFilter::ShouldSaveConstraint(JPH::Constraint const&) const */

undefined8 JPH::StateRecorderFilter::ShouldSaveConstraint(Constraint *param_1)

{
  return 1;
}



/* void 
   JPH::ConstraintManager::sWarmStartVelocityConstraints<JPH::CalculateSolverSteps>(JPH::Constraint**,
   unsigned int const*, unsigned int const*, float, JPH::CalculateSolverSteps&) */

void JPH::ConstraintManager::sWarmStartVelocityConstraints<JPH::CalculateSolverSteps>
               (Constraint **param_1,uint *param_2,uint *param_3,float param_4,
               CalculateSolverSteps *param_5)

{
  Constraint CVar1;
  Constraint CVar2;
  Constraint *pCVar3;
  long lVar4;
  uint uVar5;
  
  if (param_3 <= param_2) {
    return;
  }
  do {
    pCVar3 = param_1[*param_2];
    CVar1 = pCVar3[0x18];
    uVar5 = *(uint *)(param_5 + 8);
    if (*(uint *)(param_5 + 8) < (uint)(byte)CVar1) {
      uVar5 = (uint)(byte)CVar1;
    }
    *(uint *)(param_5 + 8) = uVar5;
    CVar2 = pCVar3[0x19];
    uVar5 = *(uint *)(param_5 + 0xc);
    if (*(uint *)(param_5 + 0xc) < (uint)(byte)CVar2) {
      uVar5 = (uint)(byte)CVar2;
    }
    *(uint *)(param_5 + 0xc) = uVar5;
    param_2 = param_2 + 1;
    lVar4 = *(long *)pCVar3;
    *(ushort *)(param_5 + 0x10) =
         *(ushort *)(param_5 + 0x10) | CONCAT11(CVar2 == (Constraint)0x0,CVar1 == (Constraint)0x0);
    (**(code **)(lVar4 + 0x40))(param_4);
  } while (param_2 < param_3);
  return;
}



/* void 
   JPH::ConstraintManager::sWarmStartVelocityConstraints<JPH::DummyCalculateSolverSteps>(JPH::Constraint**,
   unsigned int const*, unsigned int const*, float, JPH::DummyCalculateSolverSteps&) */

void JPH::ConstraintManager::sWarmStartVelocityConstraints<JPH::DummyCalculateSolverSteps>
               (Constraint **param_1,uint *param_2,uint *param_3,float param_4,
               DummyCalculateSolverSteps *param_5)

{
  uint uVar1;
  
  if (param_3 <= param_2) {
    return;
  }
  do {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    (**(code **)(*(long *)param_1[uVar1] + 0x40))(param_4);
  } while (param_2 < param_3);
  return;
}



/* JPH::ConstraintManager::Add(JPH::Constraint**, int) */

void JPH::ConstraintManager::_GLOBAL__sub_I_Add(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC0;
  }
  return;
}


