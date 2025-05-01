
/* embree::BarrierSys::BarrierSys(unsigned long) */

void __thiscall embree::BarrierSys::BarrierSys(BarrierSys *this,ulong param_1)

{
  MutexSys *this_00;
  
  this_00 = (MutexSys *)operator_new(0x20);
  embree::MutexSys::MutexSys(this_00);
  embree::ConditionSys::ConditionSys((ConditionSys *)(this_00 + 8));
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(MutexSys **)this = this_00;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(ulong *)(this_00 + 0x18) = param_1;
  return;
}



/* embree::BarrierSys::~BarrierSys() */

void __thiscall embree::BarrierSys::~BarrierSys(BarrierSys *this)

{
  MutexSys *this_00;
  
  this_00 = *(MutexSys **)this;
  if (this_00 != (MutexSys *)0x0) {
    embree::ConditionSys::~ConditionSys((ConditionSys *)(this_00 + 8));
    embree::MutexSys::~MutexSys(this_00);
    operator_delete(this_00,0x20);
    return;
  }
  return;
}



/* embree::BarrierSys::init(unsigned long) */

void __thiscall embree::BarrierSys::init(BarrierSys *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(ulong *)(lVar1 + 0x18) = param_1;
  return;
}



/* embree::BarrierSys::wait() */

void __thiscall embree::BarrierSys::wait(BarrierSys *this)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  embree::MutexSys::lock();
  *(long *)(lVar1 + 0x10) = *(long *)(lVar1 + 0x10) + 1;
  if (*(long *)(lVar1 + 0x10) != *(long *)(lVar1 + 0x18)) {
    embree::ConditionSys::wait((MutexSys *)(lVar1 + 8));
    embree::MutexSys::unlock();
    return;
  }
  *(undefined8 *)(lVar1 + 0x10) = 0;
  embree::ConditionSys::notify_all();
  embree::MutexSys::unlock();
  return;
}



/* embree::LinearBarrierActive::LinearBarrierActive(unsigned long) */

void __thiscall
embree::LinearBarrierActive::LinearBarrierActive(LinearBarrierActive *this,ulong param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_1 == 0) {
    uVar1 = embree::getNumberOfLogicalThreads();
    uVar6 = *(ulong *)(this + 0x20);
    param_1 = (ulong)uVar1;
    if (param_1 != uVar6) {
      *(ulong *)(this + 0x20) = param_1;
      if (*(void **)this != (void *)0x0) {
        operator_delete__(*(void **)this);
      }
      goto LAB_00100174;
    }
  }
  else {
    if (param_1 == *(ulong *)(this + 0x20)) {
      *(undefined4 *)(this + 0x10) = 0;
      puVar4 = (undefined1 *)0x0;
      puVar5 = (undefined1 *)0x0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
      goto LAB_001001ba;
    }
    *(ulong *)(this + 0x20) = param_1;
LAB_00100174:
    pvVar2 = operator_new__(param_1);
    *(void **)this = pvVar2;
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
    }
    pvVar2 = operator_new__(param_1);
    *(void **)(this + 8) = pvVar2;
    uVar6 = param_1;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (uVar6 == 0) {
    return;
  }
  puVar5 = *(undefined1 **)this;
  puVar4 = *(undefined1 **)(this + 8);
  param_1 = uVar6;
LAB_001001ba:
  puVar3 = puVar5 + param_1;
  if ((param_1 & 1) == 0) goto LAB_001001d0;
  *puVar5 = 0;
  for (puVar5 = puVar5 + 1; puVar5 != puVar3; puVar5 = puVar5 + 2) {
LAB_001001d0:
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  puVar5 = puVar4;
  if ((param_1 & 1) != 0) {
    *puVar4 = 0;
    puVar5 = puVar4 + 1;
    if (puVar4 + 1 == puVar4 + param_1) {
      return;
    }
  }
  do {
    *puVar5 = 0;
    puVar3 = puVar5 + 2;
    puVar5[1] = 0;
    puVar5 = puVar3;
  } while (puVar3 != puVar4 + param_1);
  return;
}



/* embree::LinearBarrierActive::~LinearBarrierActive() */

void __thiscall embree::LinearBarrierActive::~LinearBarrierActive(LinearBarrierActive *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}



/* embree::LinearBarrierActive::init(unsigned long) */

void __thiscall embree::LinearBarrierActive::init(LinearBarrierActive *this,ulong param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  if (*(ulong *)(this + 0x20) != param_1) {
    *(ulong *)(this + 0x20) = param_1;
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    pvVar1 = operator_new__(param_1);
    *(void **)this = pvVar1;
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
    }
    pvVar1 = operator_new__(param_1);
    *(void **)(this + 8) = pvVar1;
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (param_1 != 0) {
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      *(undefined1 *)(*(long *)this + uVar2) = 0;
      uVar3 = uVar2 + 1;
    } while (param_1 != uVar2 + 1);
    uVar3 = 0;
    do {
      *(undefined1 *)(*(long *)(this + 8) + uVar3) = 0;
      bVar4 = uVar2 != uVar3;
      uVar3 = uVar3 + 1;
    } while (bVar4);
  }
  return;
}



/* embree::LinearBarrierActive::wait(unsigned long) */

void __thiscall embree::LinearBarrierActive::wait(LinearBarrierActive *this,ulong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(this + 0x10) == 0) {
    if (param_1 == 0) {
      uVar4 = 0;
      if (*(long *)(this + 0x20) != 0) {
        do {
          puVar2 = (undefined1 *)(*(long *)(this + 8) + uVar4);
          uVar4 = uVar4 + 1;
          *puVar2 = 0;
        } while (uVar4 < *(ulong *)(this + 0x20));
      }
      if (1 < *(ulong *)(this + 0x20)) {
        lVar3 = *(long *)this;
        uVar4 = 1;
        do {
          while (*(char *)(lVar3 + uVar4) == '\0') {
            lVar3 = *(long *)this;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)(this + 0x20));
      }
      *(undefined4 *)(this + 0x10) = 1;
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x14) = 1;
      return;
    }
    *(undefined1 *)(param_1 + *(long *)this) = 1;
    if (*(int *)(this + 0x14) == 0) {
      do {
      } while (*(int *)(this + 0x14) == 0);
      return;
    }
  }
  else {
    if (param_1 == 0) {
      if (*(long *)(this + 0x20) != 0) {
        uVar4 = 0;
        do {
          puVar2 = (undefined1 *)(*(long *)this + uVar4);
          uVar4 = uVar4 + 1;
          *puVar2 = 0;
        } while (uVar4 < *(ulong *)(this + 0x20));
      }
      if (1 < *(ulong *)(this + 0x20)) {
        lVar3 = *(long *)(this + 8);
        uVar4 = 1;
        do {
          while (*(char *)(lVar3 + uVar4) == '\0') {
            lVar3 = *(long *)(this + 8);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulong *)(this + 0x20));
      }
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 1;
      return;
    }
    *(undefined1 *)(param_1 + *(long *)(this + 8)) = 1;
    iVar1 = *(int *)(this + 0x18);
    while (iVar1 == 0) {
      iVar1 = *(int *)(this + 0x18);
    }
  }
  return;
}



/* embree::barrier_sys_regression_test::~barrier_sys_regression_test() */

void __thiscall
embree::barrier_sys_regression_test::~barrier_sys_regression_test(barrier_sys_regression_test *this)

{
  void *pvVar1;
  MutexSys *this_00;
  
  *(undefined ***)this = &PTR_run_00100fc8;
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1,*(long *)(this + 0x50) - (long)pvVar1);
  }
  this_00 = *(MutexSys **)(this + 0x28);
  if (this_00 != (MutexSys *)0x0) {
    embree::ConditionSys::~ConditionSys((ConditionSys *)(this_00 + 8));
    embree::MutexSys::~MutexSys(this_00);
    operator_delete(this_00,0x20);
  }
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100fb0;
  if (*(barrier_sys_regression_test **)(this + 8) != this + 0x18) {
    operator_delete(*(barrier_sys_regression_test **)(this + 8),*(long *)(this + 0x18) + 1);
    return;
  }
  return;
}



/* embree::barrier_sys_regression_test::thread_alloc(embree::barrier_sys_regression_test*) */

void embree::barrier_sys_regression_test::thread_alloc(barrier_sys_regression_test *param_1)

{
  barrier_sys_regression_test *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  LOCK();
  pbVar1 = param_1 + 0x30;
  lVar2 = *(long *)pbVar1;
  *(long *)pbVar1 = *(long *)pbVar1 + 1;
  UNLOCK();
  lVar4 = 1000;
  do {
    while( true ) {
      lVar3 = *(long *)(param_1 + 0x28);
      embree::MutexSys::lock();
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      if (*(long *)(lVar3 + 0x10) == *(long *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x10) = 0;
        embree::ConditionSys::notify_all();
        embree::MutexSys::unlock();
      }
      else {
        embree::ConditionSys::wait((MutexSys *)(lVar3 + 8));
        embree::MutexSys::unlock();
      }
      *(long *)(*(long *)(param_1 + 0x40) + lVar2 * 8) = lVar2;
      lVar3 = *(long *)(param_1 + 0x28);
      embree::MutexSys::lock();
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      if (*(long *)(lVar3 + 0x10) != *(long *)(lVar3 + 0x18)) break;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      lVar4 = lVar4 + -1;
      if (lVar4 == 0) {
        return;
      }
    }
    embree::ConditionSys::wait((MutexSys *)(lVar3 + 8));
    embree::MutexSys::unlock();
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00100902) overlaps instruction at (ram,0x00100901)
    */
/* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */

void std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  undefined8 *in_RCX;
  undefined8 *__s;
  void *__src;
  long lVar5;
  undefined8 *unaff_RBP;
  ulong in_RSI;
  ulong uVar6;
  undefined8 *puVar7;
  size_t sVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  byte *local_48;
  undefined8 *local_40;
  
  if (in_RSI == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(param_1 + 8);
  pvVar3 = *(void **)param_1;
  if (in_RSI <= (ulong)(*(long *)(param_1 + 0x10) - (long)puVar7 >> 3)) {
    *puVar7 = 0;
    __s = puVar7 + 1;
    if (in_RSI - 1 != 0) {
      sVar8 = (long)__s + ((in_RSI - 1) * 8 - (long)puVar7) + -8;
      pvVar3 = memset(__s,0,sVar8);
      __s = (undefined8 *)((long)pvVar3 + sVar8);
    }
    *(undefined8 **)(param_1 + 8) = __s;
    return;
  }
  __src = (void *)((long)puVar7 - (long)pvVar3);
  uVar1 = (long)__src >> 3;
  bVar9 = 0xfffffffffffffff - uVar1 < in_RSI;
  bVar10 = 0xfffffffffffffff - uVar1 == in_RSI;
  if (bVar9) {
    auVar11 = std::__throw_length_error("vector::_M_default_append");
    pbVar4 = auVar11._8_8_;
    uVar1 = auVar11._0_8_;
    if (!bVar9 && !bVar10) {
      if ((byte)(in_RSI >> 8) < *pbVar4) {
        *(char *)(uVar1 + 0x39) = *(char *)(uVar1 + 0x39) + (char)in_RCX;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((int)unaff_RBP == (int)&local_48) {
      if (0xfffffffffffffffe < uVar1) goto LAB_00100990;
      uVar6 = 0xfffffffffffffff;
      if (uVar1 + 1 < 0x1000000000000000) {
        uVar6 = uVar1 + 1;
      }
      uVar6 = uVar6 << 3;
    }
    else {
      uVar6 = uVar1 * 2;
      if (uVar6 < uVar1) {
LAB_00100990:
        uVar6 = 0x7ffffffffffffff8;
      }
      else {
        if (uVar6 == 0) {
          lVar5 = 0;
          pvVar2 = (void *)0x0;
          goto LAB_00100919;
        }
        if (0xfffffffffffffff < uVar6) {
          uVar6 = 0xfffffffffffffff;
        }
        uVar6 = uVar6 * 8;
      }
    }
    local_48 = pbVar4;
    local_40 = in_RCX;
    pvVar2 = operator_new(uVar6);
    lVar5 = uVar6 + (long)pvVar2;
    in_RCX = local_40;
    pbVar4 = local_48;
LAB_00100919:
    *(undefined8 *)((long)pvVar2 + (long)pbVar4) = *in_RCX;
    if (0 < (long)pbVar4) {
      local_48 = pbVar4;
      memmove(pvVar2,__src,(size_t)pbVar4);
      pbVar4 = local_48;
    }
    sVar8 = (long)pvVar3 - param_1;
    pbVar4 = pbVar4 + (long)pvVar2 + 8;
    if (0 < (long)sVar8) {
      pbVar4 = (byte *)memmove(pbVar4,(void *)param_1,sVar8);
    }
    if (__src != (void *)0x0) {
      operator_delete(__src,unaff_RBP[2] - (long)__src);
    }
    *unaff_RBP = pvVar2;
    unaff_RBP[1] = pbVar4 + sVar8;
    unaff_RBP[2] = lVar5;
    return;
  }
  local_40 = (undefined8 *)(in_RSI - 1);
  local_48 = (byte *)(in_RSI + uVar1);
  if (uVar1 < in_RSI) {
    pbVar4 = (byte *)0xfffffffffffffff;
    if (local_48 < (byte *)0x1000000000000000) {
      pbVar4 = local_48;
    }
    uVar1 = (long)pbVar4 * 8;
    pvVar2 = operator_new(uVar1);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)__src);
    *puVar7 = 0;
    if (local_40 != (undefined8 *)0x0) goto LAB_00100785;
LAB_00100799:
    if (__src == (void *)0x0) goto LAB_001007a2;
  }
  else {
    uVar1 = uVar1 * 2;
    if (0xfffffffffffffff < uVar1) {
      uVar1 = 0xfffffffffffffff;
    }
    uVar1 = uVar1 * 8;
    pvVar2 = operator_new(uVar1);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)__src);
    *puVar7 = 0;
    if (in_RSI != 1) {
LAB_00100785:
      memset(puVar7 + 1,0,(long)local_40 << 3);
      goto LAB_00100799;
    }
  }
  memmove(pvVar2,pvVar3,(size_t)__src);
LAB_001007a2:
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(param_1 + 0x10) - (long)pvVar3);
  }
  *(void **)param_1 = pvVar2;
  *(void **)(param_1 + 8) = (void *)((long)pvVar2 + (long)local_48 * 8);
  *(ulong *)(param_1 + 0x10) = (long)pvVar2 + uVar1;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<embree::opaque_thread_t*, std::allocator<embree::opaque_thread_t*>
   >::_M_realloc_insert<embree::opaque_thread_t*>(__gnu_cxx::__normal_iterator<embree::opaque_thread_t**,
   std::vector<embree::opaque_thread_t*, std::allocator<embree::opaque_thread_t*> > >,
   embree::opaque_thread_t*&&) */

void __thiscall
std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::
_M_realloc_insert<embree::opaque_thread_t*>
          (vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>> *this,
          void *param_2,undefined8 *param_3)

{
  void *__src;
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  ulong uVar4;
  size_t __n_00;
  
  pvVar2 = *(void **)(this + 8);
  __src = *(void **)this;
  uVar1 = (long)pvVar2 - (long)__src >> 3;
  if (uVar1 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  __n = (long)param_2 - (long)__src;
  if (__src == pvVar2) {
    if (0xfffffffffffffffe < uVar1) goto LAB_00100990;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00100990:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00100919;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00100919:
  *(undefined8 *)((long)__dest + __n) = *param_3;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  __n_00 = (long)pvVar2 - (long)param_2;
  pvVar2 = (void *)((long)__dest + __n + 8);
  if (0 < (long)__n_00) {
    pvVar2 = memmove(pvVar2,param_2,__n_00);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src,*(long *)(this + 0x10) - (long)__src);
  }
  *(void **)this = __dest;
  *(size_t *)(this + 8) = __n_00 + (long)pvVar2;
  *(long *)(this + 0x10) = lVar3;
  return;
}



/* embree::barrier_sys_regression_test::run() */

ulong __thiscall embree::barrier_sys_regression_test::run(barrier_sys_regression_test *this)

{
  barrier_sys_regression_test *pbVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_60;
  void *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LOCK();
  *(undefined8 *)(this + 0x30) = 0;
  UNLOCK();
  pbVar1 = this + 0x38;
  LOCK();
  *(long *)pbVar1 = 0;
  UNLOCK();
  uVar6 = embree::getNumberOfLogicalThreads();
  uVar8 = (ulong)uVar6;
  uVar7 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
  if (uVar7 < uVar8) {
    std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
              ((ulong)(this + 0x40));
    lVar9 = *(long *)(this + 0x28);
    *(undefined8 *)(lVar9 + 0x10) = 0;
    *(ulong *)(lVar9 + 0x18) = uVar8 + 1;
  }
  else {
    if ((uVar8 < uVar7) &&
       (lVar9 = *(long *)(this + 0x40) + uVar8 * 8, *(long *)(this + 0x48) != lVar9)) {
      *(long *)(this + 0x48) = lVar9;
    }
    lVar9 = *(long *)(this + 0x28);
    local_58 = (void *)0x0;
    local_50 = (undefined8 *)0x0;
    *(undefined8 *)(lVar9 + 0x10) = 0;
    local_48 = (undefined8 *)0x0;
    *(ulong *)(lVar9 + 0x18) = uVar8 + 1;
    if (uVar8 == 0) {
      lVar9 = 1000;
      goto LAB_00100b3d;
    }
  }
  local_48 = (undefined8 *)0x0;
  local_50 = (undefined8 *)0x0;
  local_58 = (void *)0x0;
  lVar9 = 0;
  while( true ) {
    puVar5 = local_48;
    puVar4 = local_50;
    local_60 = embree::createThread(thread_alloc,this,0,-1);
    if (puVar4 == puVar5) {
      std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::
      _M_realloc_insert<embree::opaque_thread_t*>
                ((vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>> *)
                 &local_58,puVar4,&local_60);
    }
    else {
      *puVar4 = local_60;
      local_50 = puVar4 + 1;
    }
    if (uVar8 == lVar9 + 1U) break;
    lVar9 = lVar9 + 1;
  }
  lVar9 = 1000;
  do {
    uVar7 = 0;
    do {
      *(undefined8 *)(*(long *)(this + 0x40) + uVar7 * 8) = 0;
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
LAB_00100b3d:
    while( true ) {
      lVar2 = *(long *)(this + 0x28);
      embree::MutexSys::lock();
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
      if (*(long *)(lVar2 + 0x10) == *(long *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        embree::ConditionSys::notify_all();
        embree::MutexSys::unlock();
      }
      else {
        embree::ConditionSys::wait((MutexSys *)(lVar2 + 8));
        embree::MutexSys::unlock();
      }
      lVar2 = *(long *)(this + 0x28);
      embree::MutexSys::lock();
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
      if (*(long *)(lVar2 + 0x10) == *(long *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        embree::ConditionSys::notify_all();
        embree::MutexSys::unlock();
        pvVar3 = local_58;
      }
      else {
        embree::ConditionSys::wait((MutexSys *)(lVar2 + 8));
        embree::MutexSys::unlock();
        pvVar3 = local_58;
      }
      local_58 = pvVar3;
      if (uVar8 != 0) break;
      lVar9 = lVar9 + -1;
      if (lVar9 == 0) goto LAB_00100c05;
    }
    uVar7 = 0;
    do {
      LOCK();
      *(ulong *)pbVar1 =
           *(long *)pbVar1 + (ulong)(*(ulong *)(*(long *)(this + 0x40) + uVar7 * 8) != uVar7);
      UNLOCK();
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar7);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar7 = 0;
  do {
    lVar9 = uVar7 * 8;
    uVar7 = uVar7 + 1;
    embree::join(*(opaque_thread_t **)((long)pvVar3 + lVar9));
  } while (uVar8 != uVar7);
LAB_00100c05:
  lVar9 = *(long *)(this + 0x38);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58,(long)local_48 - (long)local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT71((int7)((ulong)this >> 8),lVar9 == 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::BarrierSys::BarrierSys(unsigned long) */

void embree::BarrierSys::_GLOBAL__sub_I_BarrierSys(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong __n;
  ulong *__src;
  MutexSys *this;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0x1b;
  local_58 = local_48;
  __src = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
  __n = local_60;
  uVar1 = _UNK_00100fd8;
  local_48[0] = local_60;
  *__src = __LC2;
  __src[1] = uVar1;
  uVar2 = _UNK_00100fe8;
  *(undefined8 *)((long)__src + 0xb) = __LC3;
  *(undefined8 *)((long)__src + 0x13) = uVar2;
  local_50 = local_60;
  *(undefined1 *)((long)__src + local_60) = 0;
  barrier_sys_regression_test._0_8_ = &PTR___cxa_pure_virtual_00100fb0;
  barrier_sys_regression_test._8_8_ = 0x1004d8;
  local_58 = __src;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      barrier_sys_regression_test[0x18] = (char)*__src;
      goto LAB_00100dd8;
    }
    if (local_60 == 0) goto LAB_00100dd8;
  }
  else {
    barrier_sys_regression_test._8_8_ =
         std::__cxx11::string::_M_create
                   ((ulong *)(barrier_sys_regression_test + 8),(ulong)&local_60);
    barrier_sys_regression_test._24_8_ = local_60;
  }
  memcpy((void *)barrier_sys_regression_test._8_8_,__src,__n);
LAB_00100dd8:
  barrier_sys_regression_test._16_8_ = local_60;
  *(undefined1 *)(barrier_sys_regression_test._8_8_ + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  barrier_sys_regression_test._0_8_ = &PTR_run_00100fc8;
  this = (MutexSys *)operator_new(0x20);
  embree::MutexSys::MutexSys(this);
  embree::ConditionSys::ConditionSys((ConditionSys *)(this + 8));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  barrier_sys_regression_test._48_8_ = 0;
  barrier_sys_regression_test._56_8_ = 0;
  barrier_sys_regression_test._64_8_ = 0;
  barrier_sys_regression_test._72_8_ = 0;
  barrier_sys_regression_test._80_8_ = 0;
  barrier_sys_regression_test._40_8_ = this;
  embree::registerRegressionTest((RegressionTest *)barrier_sys_regression_test);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __cxa_atexit(barrier_sys_regression_test::~barrier_sys_regression_test,barrier_sys_regression_test
               ,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::barrier_sys_regression_test::~barrier_sys_regression_test() */

void __thiscall
embree::barrier_sys_regression_test::~barrier_sys_regression_test(barrier_sys_regression_test *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


