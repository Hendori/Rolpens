
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



/* embree::LinearBarrierActive::LinearBarrierActive(unsigned long) */

void __thiscall
embree::LinearBarrierActive::LinearBarrierActive(LinearBarrierActive *this,ulong param_1)

{
  uint uVar1;
  
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  if (param_1 != 0) {
    init(this,param_1);
    return;
  }
  uVar1 = embree::getNumberOfLogicalThreads();
  init(this,(ulong)uVar1);
  return;
}



/* embree::LinearBarrierActive::wait(unsigned long) */

void __thiscall embree::LinearBarrierActive::wait(LinearBarrierActive *this,ulong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  if (*(int *)(this + 0x10) == 0) {
    if (param_1 == 0) {
      uVar3 = 0;
      if (*(long *)(this + 0x20) != 0) {
        do {
          puVar2 = (undefined1 *)(*(long *)(this + 8) + uVar3);
          uVar3 = uVar3 + 1;
          *puVar2 = 0;
        } while (uVar3 < *(ulong *)(this + 0x20));
      }
      uVar3 = 1;
      if (*(ulong *)(this + 0x20) < 2) {
LAB_001002db:
        *(undefined4 *)(this + 0x10) = 1;
        *(undefined4 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 0x14) = 1;
        return;
      }
      do {
        while (*(char *)(*(long *)this + uVar3) != '\0') {
          uVar3 = uVar3 + 1;
          if (*(ulong *)(this + 0x20) <= uVar3) goto LAB_001002db;
        }
      } while( true );
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
        uVar3 = 0;
        do {
          puVar2 = (undefined1 *)(*(long *)this + uVar3);
          uVar3 = uVar3 + 1;
          *puVar2 = 0;
        } while (uVar3 < *(ulong *)(this + 0x20));
      }
      uVar3 = 1;
      if (*(ulong *)(this + 0x20) < 2) {
LAB_001003bc:
        *(undefined4 *)(this + 0x10) = 0;
        *(undefined4 *)(this + 0x14) = 0;
        *(undefined4 *)(this + 0x18) = 1;
        return;
      }
      do {
        while (*(char *)(*(long *)(this + 8) + uVar3) != '\0') {
          uVar3 = uVar3 + 1;
          if (*(ulong *)(this + 0x20) <= uVar3) goto LAB_001003bc;
        }
      } while( true );
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
  
  *(undefined ***)this = &PTR_run_00100da8;
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
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100d90;
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
  
  LOCK();
  pbVar1 = param_1 + 0x30;
  lVar2 = *(long *)pbVar1;
  *(long *)pbVar1 = *(long *)pbVar1 + 1;
  UNLOCK();
  lVar3 = 1000;
  do {
    BarrierSys::wait((BarrierSys *)(param_1 + 0x28));
    *(long *)(*(long *)(param_1 + 0x40) + lVar2 * 8) = lVar2;
    BarrierSys::wait((BarrierSys *)(param_1 + 0x28));
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0010078e) overlaps instruction at (ram,0x0010078d)
    */
/* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */

void std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(ulong param_1)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  byte *pbVar6;
  void *__dest;
  undefined8 *in_RCX;
  undefined8 *__s;
  void *__src;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 *unaff_RBP;
  void *in_RSI;
  undefined8 *puVar10;
  char *pcVar11;
  size_t sVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  ulong local_48;
  long local_40;
  undefined1 auStack_38 [8];
  
  if (in_RSI == (void *)0x0) {
    return;
  }
  puVar8 = &local_48;
  puVar9 = &local_48;
  puVar10 = *(undefined8 **)(param_1 + 8);
  pvVar4 = *(void **)param_1;
  if (in_RSI <= (void *)(*(long *)(param_1 + 0x10) - (long)puVar10 >> 3)) {
    *puVar10 = 0;
    __s = puVar10 + 1;
    if ((long)in_RSI - 1U != 0) {
      sVar12 = (long)__s + (((long)in_RSI - 1U) * 8 - (long)puVar10) + -8;
      pvVar4 = memset(__s,0,sVar12);
      __s = (undefined8 *)((long)pvVar4 + sVar12);
    }
    *(undefined8 **)(param_1 + 8) = __s;
    return;
  }
  __src = (void *)((long)puVar10 - (long)pvVar4);
  pvVar2 = (void *)((long)__src >> 3);
  bVar13 = (void *)(0xfffffffffffffffU - (long)pvVar2) < in_RSI;
  bVar14 = (void *)(0xfffffffffffffffU - (long)pvVar2) == in_RSI;
  if (bVar13) {
    pcVar11 = "vector::_M_default_append";
    pvVar2 = in_RSI;
    auVar15 = std::__throw_length_error("vector::_M_default_append");
    pbVar6 = auVar15._8_8_;
    pcVar5 = auVar15._0_8_;
    if (bVar13 || bVar14) {
      pbVar6 = pbVar6 + -(long)__src;
      if (__src != pvVar4) {
        pcVar11 = (char *)((long)pcVar5 * 2);
        goto code_r0x00100792;
      }
      if ((char *)0xfffffffffffffffe < pcVar5) goto LAB_00100820;
      pcVar11 = (char *)0xfffffffffffffff;
      if (pcVar5 + 1 < (char *)0x1000000000000000) {
        pcVar11 = pcVar5 + 1;
      }
      uVar3 = (long)pcVar11 << 3;
      puVar8 = &local_48;
    }
    else {
      pcVar11 = (char *)(ulong)*(uint *)(pcVar11 + (long)unaff_RBP * 2 + 0x72);
      puVar8 = (ulong *)auStack_38;
      if (*pbVar6 <= (byte)((ulong)in_RSI >> 8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *pcVar5 = *pcVar5 + auVar15[0];
      pcVar5[-0x73] = pcVar5[-0x73] + (char)in_RCX;
      pvVar2 = (void *)param_1;
code_r0x00100792:
      puVar9 = puVar8;
      if (pcVar11 < pcVar5) {
LAB_00100820:
        uVar3 = 0x7ffffffffffffff8;
        puVar8 = puVar9;
      }
      else {
        if (pcVar11 == (char *)0x0) {
          lVar7 = 0;
          __dest = (void *)0x0;
          goto LAB_001007a9;
        }
        if ((char *)0xfffffffffffffff < pcVar11) {
          pcVar11 = (char *)0xfffffffffffffff;
        }
        uVar3 = (long)pcVar11 * 8;
      }
    }
    puVar8[1] = (ulong)in_RCX;
    *puVar8 = (ulong)pbVar6;
    puVar8[-1] = 0x10083b;
    __dest = operator_new(uVar3);
    pbVar6 = (byte *)*puVar8;
    in_RCX = (undefined8 *)puVar8[1];
    lVar7 = uVar3 + (long)__dest;
LAB_001007a9:
    *(undefined8 *)((long)__dest + (long)pbVar6) = *in_RCX;
    if (0 < (long)pbVar6) {
      *puVar8 = (ulong)pbVar6;
      puVar8[-1] = 0x1007c4;
      memmove(__dest,__src,(size_t)pbVar6);
      pbVar6 = (byte *)*puVar8;
    }
    sVar12 = (long)pvVar4 - (long)pvVar2;
    pbVar6 = pbVar6 + (long)__dest + 8;
    if (0 < (long)sVar12) {
      puVar8[-1] = 0x1007e3;
      pbVar6 = (byte *)memmove(pbVar6,pvVar2,sVar12);
    }
    if (__src != (void *)0x0) {
      lVar1 = unaff_RBP[2];
      puVar8[-1] = 0x1007fd;
      operator_delete(__src,lVar1 - (long)__src);
    }
    *unaff_RBP = __dest;
    unaff_RBP[1] = pbVar6 + sVar12;
    unaff_RBP[2] = lVar7;
    return;
  }
  local_40 = (long)in_RSI - 1;
  local_48 = (long)in_RSI + (long)pvVar2;
  if (pvVar2 < in_RSI) {
    uVar3 = 0xfffffffffffffff;
    if (local_48 < 0x1000000000000000) {
      uVar3 = local_48;
    }
    uVar3 = uVar3 * 8;
    pvVar2 = operator_new(uVar3);
    puVar10 = (undefined8 *)((long)pvVar2 + (long)__src);
    *puVar10 = 0;
    if (local_40 != 0) goto LAB_00100605;
LAB_00100619:
    if (__src == (void *)0x0) goto LAB_00100622;
  }
  else {
    uVar3 = (long)pvVar2 * 2;
    if (0xfffffffffffffff < uVar3) {
      uVar3 = 0xfffffffffffffff;
    }
    uVar3 = uVar3 * 8;
    pvVar2 = operator_new(uVar3);
    puVar10 = (undefined8 *)((long)pvVar2 + (long)__src);
    *puVar10 = 0;
    if (in_RSI != (void *)0x1) {
LAB_00100605:
      memset(puVar10 + 1,0,local_40 << 3);
      goto LAB_00100619;
    }
  }
  memmove(pvVar2,pvVar4,(size_t)__src);
LAB_00100622:
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4,*(long *)(param_1 + 0x10) - (long)pvVar4);
  }
  *(void **)param_1 = pvVar2;
  *(void **)(param_1 + 8) = (void *)((long)pvVar2 + local_48 * 8);
  *(ulong *)(param_1 + 0x10) = (long)pvVar2 + uVar3;
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00100820;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00100820:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_001007a9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_001007a9:
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
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  bool bVar10;
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
  uVar4 = embree::getNumberOfLogicalThreads();
  uVar9 = (ulong)uVar4;
  uVar5 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
  if (uVar5 < uVar9) {
    std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append
              ((ulong)(this + 0x40));
    lVar8 = *(long *)(this + 0x28);
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(ulong *)(lVar8 + 0x18) = uVar9 + 1;
LAB_00100937:
    local_48 = (undefined8 *)0x0;
    local_50 = (undefined8 *)0x0;
    local_58 = (void *)0x0;
    lVar8 = 0;
    while( true ) {
      puVar3 = local_48;
      puVar2 = local_50;
      local_60 = embree::createThread(thread_alloc,this,0,-1);
      if (puVar2 == puVar3) {
        std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::
        _M_realloc_insert<embree::opaque_thread_t*>
                  ((vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>> *)
                   &local_58,puVar2,&local_60);
      }
      else {
        *puVar2 = local_60;
        local_50 = puVar2 + 1;
      }
      if (uVar9 == lVar8 + 1U) break;
      lVar8 = lVar8 + 1;
    }
    if (uVar9 != 0) {
      lVar8 = 1000;
      do {
        uVar5 = 0;
        do {
          uVar6 = uVar5;
          *(undefined8 *)(*(long *)(this + 0x40) + uVar6 * 8) = 0;
          uVar5 = uVar6 + 1;
        } while (uVar9 != uVar6 + 1);
        BarrierSys::wait((BarrierSys *)(this + 0x28));
        BarrierSys::wait((BarrierSys *)(this + 0x28));
        pvVar7 = local_58;
        uVar5 = 0;
        do {
          LOCK();
          *(ulong *)pbVar1 =
               *(long *)pbVar1 + (ulong)(*(ulong *)(*(long *)(this + 0x40) + uVar5 * 8) != uVar5);
          UNLOCK();
          bVar10 = uVar5 != uVar6;
          uVar5 = uVar5 + 1;
        } while (bVar10);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      uVar5 = 0;
      do {
        lVar8 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        embree::join(*(opaque_thread_t **)((long)pvVar7 + lVar8));
      } while (uVar9 != uVar5);
      goto LAB_00100a33;
    }
  }
  else {
    if ((uVar9 < uVar5) &&
       (lVar8 = *(long *)(this + 0x40) + uVar9 * 8, *(long *)(this + 0x48) != lVar8)) {
      *(long *)(this + 0x48) = lVar8;
    }
    lVar8 = *(long *)(this + 0x28);
    local_58 = (void *)0x0;
    local_50 = (undefined8 *)0x0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    local_48 = (undefined8 *)0x0;
    *(ulong *)(lVar8 + 0x18) = uVar9 + 1;
    if (uVar9 != 0) goto LAB_00100937;
  }
  lVar8 = 1000;
  do {
    BarrierSys::wait((BarrierSys *)(this + 0x28));
    BarrierSys::wait((BarrierSys *)(this + 0x28));
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  pvVar7 = (void *)0x0;
LAB_00100a33:
  lVar8 = *(long *)(this + 0x38);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58,(long)local_48 - (long)local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)pvVar7 >> 8),lVar8 == 0) & 0xffffffff;
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
  uVar1 = _UNK_00100db8;
  local_48[0] = local_60;
  *__src = __LC2;
  __src[1] = uVar1;
  uVar2 = _UNK_00100dc8;
  *(undefined8 *)((long)__src + 0xb) = __LC3;
  *(undefined8 *)((long)__src + 0x13) = uVar2;
  local_50 = local_60;
  *(undefined1 *)((long)__src + local_60) = 0;
  barrier_sys_regression_test._0_8_ = &PTR___cxa_pure_virtual_00100d90;
  barrier_sys_regression_test._8_8_ = 0x1003f8;
  local_58 = __src;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      barrier_sys_regression_test[0x18] = (char)*__src;
      goto LAB_00100bc8;
    }
    if (local_60 == 0) goto LAB_00100bc8;
  }
  else {
    barrier_sys_regression_test._8_8_ =
         std::__cxx11::string::_M_create
                   ((ulong *)(barrier_sys_regression_test + 8),(ulong)&local_60);
    barrier_sys_regression_test._24_8_ = local_60;
  }
  memcpy((void *)barrier_sys_regression_test._8_8_,__src,__n);
LAB_00100bc8:
  barrier_sys_regression_test._16_8_ = local_60;
  *(undefined1 *)(barrier_sys_regression_test._8_8_ + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  barrier_sys_regression_test._0_8_ = &PTR_run_00100da8;
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


