
/* std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
::~vector(vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
          *this)

{
  undefined8 *puVar1;
  MutexSys *this_00;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)this;
  if (puVar1 != puVar2) {
    do {
      this_00 = (MutexSys *)*puVar2;
      if (this_00 != (MutexSys *)0x0) {
        embree::MutexSys::~MutexSys(this_00);
        embree::alignedFree(this_00);
      }
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,*(long *)(this + 0x10) - (long)puVar2);
    return;
  }
  return;
}



/* embree::FastAllocator::~FastAllocator() */

void __thiscall embree::FastAllocator::~FastAllocator(FastAllocator *this)

{
  long *plVar1;
  FastAllocator FVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  FastAllocator *pFVar7;
  ulong uVar8;
  FastAllocator *pFVar9;
  MutexSys *this_00;
  MutexSys *pMVar10;
  ulong *puVar11;
  ulong *puVar12;
  long *plVar13;
  
  pFVar9 = this + 0xf8;
  pFVar7 = this + 0xb8;
  do {
    while (*(long *)pFVar7 != 0) {
      lVar4 = *(long *)(*(long *)pFVar7 + 0x18);
      *(long *)(*(long *)pFVar7 + 0x18) = *(long *)pFVar9;
      LOCK();
      *(long *)pFVar9 = *(long *)pFVar7;
      UNLOCK();
      LOCK();
      *(long *)pFVar7 = lVar4;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar7 = 0;
    UNLOCK();
    pFVar7 = pFVar7 + 8;
  } while (pFVar7 != pFVar9);
  plVar13 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != plVar13) {
    do {
      while( true ) {
        lVar4 = *plVar13;
        if (this != *(FastAllocator **)(lVar4 + 8)) break;
        embree::MutexSys::lock();
        if (this == *(FastAllocator **)(lVar4 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xa8) + *(long *)(lVar4 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar4 + 0x98) + *(long *)(lVar4 + 0x58)) -
                               *(long *)(lVar4 + 0x50)) - *(long *)(lVar4 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar4 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar4 + 0xb0) + *(long *)(lVar4 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar4 + 0x48) = 0;
          *(undefined8 *)(lVar4 + 0x58) = 0;
          *(undefined8 *)(lVar4 + 0x50) = 0;
          *(undefined8 *)(lVar4 + 0x68) = 0;
          *(undefined8 *)(lVar4 + 0x70) = 0;
          *(undefined8 *)(lVar4 + 0x60) = 0;
          *(undefined8 *)(lVar4 + 0x88) = 0;
          *(undefined8 *)(lVar4 + 0x98) = 0;
          *(undefined8 *)(lVar4 + 0x90) = 0;
          *(undefined8 *)(lVar4 + 0xa8) = 0;
          *(undefined8 *)(lVar4 + 0xb0) = 0;
          *(undefined8 *)(lVar4 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar4 + 8) = 0;
          UNLOCK();
        }
        plVar13 = plVar13 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar13) goto LAB_00100278;
      }
      plVar13 = plVar13 + 1;
    } while (plVar3 != plVar13);
LAB_00100278:
    if (*(long *)(this + 0x138) != *(long *)(this + 0x130)) {
      *(long *)(this + 0x138) = *(long *)(this + 0x130);
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x118) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x120) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x128) = 0;
  UNLOCK();
  if (*(long *)(this + 0xf8) != 0) {
    puVar11 = *(ulong **)(this + 0xf8);
    FVar2 = this[0x108];
    plVar13 = *(long **)this;
LAB_001002e0:
    puVar12 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      do {
        puVar11 = (ulong *)puVar12[3];
        uVar5 = puVar12[4];
        uVar8 = *puVar12;
        if (*puVar12 < puVar12[1]) {
          uVar8 = puVar12[1];
        }
        if (puVar12[2] < uVar8) {
          uVar8 = puVar12[2];
        }
        if ((int)puVar12[5] == 0) {
          if (FVar2 == (FastAllocator)0x0) {
            embree::alignedFree(puVar12);
          }
          else {
            (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
          }
        }
        else {
          if ((int)puVar12[5] != 1) goto LAB_001002e0;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
        }
        if (plVar13 == (long *)0x0) goto LAB_001002e0;
        (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar5 + 0x40 + uVar8),1);
        puVar12 = puVar11;
        if (puVar11 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(long *)pFVar9 = 0;
  UNLOCK();
  if (*(long *)(this + 0x100) != 0) {
    puVar11 = *(ulong **)(this + 0x100);
    FVar2 = this[0x108];
    plVar13 = *(long **)this;
LAB_00100390:
    puVar12 = puVar11;
    if (puVar11 != (ulong *)0x0) {
      do {
        puVar11 = (ulong *)puVar12[3];
        uVar5 = puVar12[4];
        uVar8 = *puVar12;
        if (*puVar12 < puVar12[1]) {
          uVar8 = puVar12[1];
        }
        if (puVar12[2] < uVar8) {
          uVar8 = puVar12[2];
        }
        if ((int)puVar12[5] == 0) {
          if (FVar2 == (FastAllocator)0x0) {
            embree::alignedFree(puVar12);
          }
          else {
            (**(code **)(*plVar13 + 0x40))(plVar13,puVar12);
          }
        }
        else {
          if ((int)puVar12[5] != 1) goto LAB_00100390;
          embree::os_free(puVar12,puVar12[2] + 0x40,*(bool *)((long)puVar12 + 0x2c));
        }
        if (plVar13 == (long *)0x0) goto LAB_00100390;
        (**(code **)(*plVar13 + 0x20))(plVar13,-(uVar5 + 0x40 + uVar8),1);
        puVar12 = puVar11;
        if (puVar11 == (ulong *)0x0) break;
      } while( true );
    }
  }
  LOCK();
  *(undefined8 *)(this + 0x100) = 0;
  UNLOCK();
  pFVar9 = this + 0x78;
  do {
    LOCK();
    *(long *)pFVar9 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pFVar9 + 0x40) = 0;
    UNLOCK();
    pFVar9 = pFVar9 + 8;
  } while (pFVar9 != this + 0xb8);
  pvVar6 = *(void **)(this + 0x170);
  lVar4 = *(long *)(this + 0x168);
  if (pvVar6 != (void *)0x0) {
    if ((ulong)(lVar4 << 5) < 0x1c00000) {
      embree::alignedFree(pvVar6);
    }
    else {
      embree::os_free(pvVar6,lVar4 << 5,(bool)this[0x158]);
    }
  }
  if (lVar4 != 0) {
    (**(code **)**(undefined8 **)(this + 0x150))(*(undefined8 **)(this + 0x150),lVar4 * -0x20,1);
  }
  pvVar6 = *(void **)(this + 0x130);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6,*(long *)(this + 0x140) - (long)pvVar6);
  }
  this_00 = (MutexSys *)(this + 0x70);
  if (this != (FastAllocator *)0xffffffffffffffc8) {
    do {
      pMVar10 = this_00 + -8;
      embree::MutexSys::~MutexSys(this_00);
      this_00 = pMVar10;
    } while ((MutexSys *)(this + 0x30) != pMVar10);
  }
  embree::MutexSys::~MutexSys((MutexSys *)(this + 0x30));
  return;
}



/* embree::fast_allocator_regression_test::~fast_allocator_regression_test() */

void __thiscall
embree::fast_allocator_regression_test::~fast_allocator_regression_test
          (fast_allocator_regression_test *this)

{
  FastAllocator *this_00;
  
  this_00 = *(FastAllocator **)(this + 0x38);
  *(undefined ***)this = &PTR_run_00101cd0;
  if (this_00 != (FastAllocator *)0x0) {
    FastAllocator::~FastAllocator(this_00);
    operator_delete(this_00,0x178);
  }
  embree::BarrierSys::~BarrierSys((BarrierSys *)(this + 0x28));
  *(undefined ***)this = &PTR___cxa_pure_virtual_00101cb8;
  if (*(fast_allocator_regression_test **)(this + 8) != this + 0x18) {
    operator_delete(*(fast_allocator_regression_test **)(this + 8),*(long *)(this + 0x18) + 1);
    return;
  }
  return;
}



/* embree::FastAllocator::reset() */

void __thiscall embree::FastAllocator::reset(FastAllocator *this)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  FastAllocator *pFVar4;
  long lVar5;
  FastAllocator *pFVar6;
  ulong uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  pFVar6 = this + 0xf8;
  plVar8 = &local_48;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pFVar4 = this + 0xb8;
  do {
    while (*(long *)pFVar4 != 0) {
      lVar5 = *(long *)(*(long *)pFVar4 + 0x18);
      *(long *)(*(long *)pFVar4 + 0x18) = *(long *)pFVar6;
      LOCK();
      *(long *)pFVar6 = *(long *)pFVar4;
      UNLOCK();
      LOCK();
      *(long *)pFVar4 = lVar5;
      UNLOCK();
    }
    LOCK();
    *(long *)pFVar4 = 0;
    UNLOCK();
    pFVar4 = pFVar4 + 8;
  } while (pFVar4 != pFVar6);
  LOCK();
  *(undefined8 *)(this + 0x118) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x120) = 0;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0x128) = 0;
  UNLOCK();
  pFVar4 = this + 0x100;
  while (*(long *)pFVar6 != 0) {
    puVar2 = *(ulong **)pFVar6;
    uVar7 = *puVar2;
    if (*puVar2 < puVar2[1]) {
      uVar7 = puVar2[1];
    }
    LOCK();
    puVar2[1] = uVar7;
    UNLOCK();
    LOCK();
    *puVar2 = 0;
    UNLOCK();
    lVar5 = *(long *)(*(long *)pFVar6 + 0x18);
    *(long *)(*(long *)pFVar6 + 0x18) = *(long *)pFVar4;
    LOCK();
    *(long *)pFVar4 = *(long *)pFVar6;
    UNLOCK();
    LOCK();
    *(long *)pFVar6 = lVar5;
    UNLOCK();
  }
  lVar5 = *(long *)(this + 0x100);
  local_48 = lVar5;
  for (; lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
    while (*(int *)(lVar5 + 0x28) != 2) {
      plVar8 = (long *)(lVar5 + 0x18);
      lVar5 = *(long *)(lVar5 + 0x18);
      if (lVar5 == 0) goto LAB_001006e7;
    }
    *plVar8 = *(undefined8 *)(lVar5 + 0x18);
  }
LAB_001006e7:
  LOCK();
  *(long *)pFVar4 = local_48;
  UNLOCK();
  pFVar6 = this + 0x78;
  do {
    LOCK();
    *(long *)pFVar6 = 0;
    UNLOCK();
    LOCK();
    *(long *)(pFVar6 + 0x40) = 0;
    UNLOCK();
    pFVar6 = pFVar6 + 8;
  } while (pFVar6 != this + 0xb8);
  plVar8 = *(long **)(this + 0x130);
  plVar3 = *(long **)(this + 0x138);
  if (plVar3 != plVar8) {
    do {
      while( true ) {
        lVar5 = *plVar8;
        if (this != *(FastAllocator **)(lVar5 + 8)) break;
        embree::MutexSys::lock();
        if (this == *(FastAllocator **)(lVar5 + 8)) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xa8) + *(long *)(lVar5 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar5 + 0x98) + *(long *)(lVar5 + 0x58)) -
                               *(long *)(lVar5 + 0x50)) - *(long *)(lVar5 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar5 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar5 + 0xb0) + *(long *)(lVar5 + 0x70);
          UNLOCK();
          *(undefined8 *)(lVar5 + 0x48) = 0;
          *(undefined8 *)(lVar5 + 0x58) = 0;
          *(undefined8 *)(lVar5 + 0x50) = 0;
          *(undefined8 *)(lVar5 + 0x68) = 0;
          *(undefined8 *)(lVar5 + 0x70) = 0;
          *(undefined8 *)(lVar5 + 0x60) = 0;
          *(undefined8 *)(lVar5 + 0x88) = 0;
          *(undefined8 *)(lVar5 + 0x98) = 0;
          *(undefined8 *)(lVar5 + 0x90) = 0;
          *(undefined8 *)(lVar5 + 0xa8) = 0;
          *(undefined8 *)(lVar5 + 0xb0) = 0;
          *(undefined8 *)(lVar5 + 0xa0) = 0;
          LOCK();
          *(undefined8 *)(lVar5 + 8) = 0;
          UNLOCK();
        }
        plVar8 = plVar8 + 1;
        embree::MutexSys::unlock();
        if (plVar3 == plVar8) goto LAB_00100838;
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
LAB_00100838:
    if (*(long *)(this + 0x130) != *(long *)(this + 0x138)) {
      *(long *)(this + 0x138) = *(long *)(this + 0x130);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::FastAllocator::Block::create(embree::Device*, bool, unsigned long, unsigned long,
   embree::FastAllocator::Block*, embree::FastAllocator::AllocationType) */

undefined8 *
embree::FastAllocator::Block::create
          (long *param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  bool local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 1) {
    if (0x1fffbf < param_3) {
      uVar2 = param_3 + 0x103f & 0xfffffffffffff000;
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,uVar2,0);
      }
      uVar4 = param_4 + 0x103fU & 0xfffffffffffff000;
      puVar1 = (undefined8 *)embree::os_malloc(uVar4,&local_31);
      *puVar1 = 0;
      puVar1[1] = uVar2 - 0x40;
      puVar1[2] = uVar4 - 0x40;
      puVar1[3] = param_5;
      puVar1[4] = 0;
      *(undefined4 *)(puVar1 + 5) = 1;
      *(bool *)((long)puVar1 + 0x2c) = local_31;
      goto LAB_00100920;
    }
  }
  else {
    puVar1 = (undefined8 *)0x0;
    if (param_6 != 0) goto LAB_00100920;
    if (param_3 == 0x3fffc0) {
      if (param_1 != (long *)0x0) {
        (**(code **)(*param_1 + 0x20))(param_1,0x400040,0);
      }
      if (param_2 == '\0') {
        puVar1 = (undefined8 *)embree::alignedMalloc(0x400000,0x40);
      }
      else {
        puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,0x400000,0x40);
      }
      pvVar3 = (void *)((ulong)puVar1 & 0xffffffffffe00000);
      embree::os_advise(pvVar3,0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x200000),0x200000);
      embree::os_advise((void *)((long)pvVar3 + 0x400000),0x200000);
      *puVar1 = 0;
      puVar1[1] = 0x3fffc0;
      puVar1[2] = 0x3fffc0;
      puVar1[3] = param_5;
      puVar1[4] = 0x40;
      *(undefined4 *)(puVar1 + 5) = 0;
      *(undefined1 *)((long)puVar1 + 0x2c) = 0;
      goto LAB_00100920;
    }
  }
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x20))(param_1,param_3 + 0x80,0);
  }
  if (param_2 == '\0') {
    puVar1 = (undefined8 *)embree::alignedMalloc(param_3 + 0x40,0x40);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x38))(param_1,param_3 + 0x40,0x40);
  }
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = param_3;
  puVar1[3] = param_5;
  puVar1[4] = 0x40;
  *(undefined4 *)(puVar1 + 5) = 0;
  *(undefined1 *)((long)puVar1 + 0x2c) = 0;
LAB_00100920:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar1;
}



/* embree::FastAllocator::malloc(unsigned long&, unsigned long, bool) */

void __thiscall
embree::FastAllocator::malloc(FastAllocator *this,ulong *param_1,ulong param_2,bool param_3)

{
  FastAllocator *pFVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  FastAllocator *pFVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  
  do {
    uVar4 = embree::TaskScheduler::threadID();
    lVar2 = (uVar4 & *(ulong *)(this + 8)) * 8;
    pFVar1 = this + lVar2 + 0x78;
    puVar3 = *(ulong **)pFVar1;
    if (puVar3 != (ulong *)0x0) {
      puVar9 = *(undefined8 **)this;
      if (puVar9 != (undefined8 *)0x0) {
        puVar9 = puVar9 + 0xa9;
      }
      uVar4 = -param_2 & (param_2 - 1) + *param_1;
      if (puVar3[2] < *puVar3 + uVar4) {
        if (param_3) {
          LOCK();
          uVar6 = *puVar3;
          *puVar3 = *puVar3 + uVar4;
          UNLOCK();
          goto LAB_00100b6a;
        }
      }
      else {
        LOCK();
        uVar6 = *puVar3;
        *puVar3 = *puVar3 + uVar4;
        UNLOCK();
        if ((uVar4 + uVar6 <= puVar3[2]) || (param_3)) {
LAB_00100b6a:
          if (uVar6 <= puVar3[2]) {
            uVar5 = puVar3[2] - uVar6;
            if (uVar4 < puVar3[2] - uVar6) {
              uVar5 = uVar4;
            }
            *param_1 = uVar5;
            if ((puVar9 != (undefined8 *)0x0) && (puVar3[1] < uVar5 + uVar6)) {
              uVar4 = puVar3[1];
              if (puVar3[1] <= uVar6) {
                uVar4 = uVar6;
              }
              (**(code **)*puVar9)(puVar9,(uVar5 + uVar6) - uVar4,1);
            }
            if ((long)puVar3 + uVar6 + 0x40 != 0) {
              return;
            }
          }
        }
      }
      if (this[0x109] == (FastAllocator)0x0) {
LAB_00100d7a:
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    if (0x1fffc0 < *param_1) goto LAB_00100d7a;
    if (*(long *)(this + 0x100) == 0) {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        pFVar8 = this + lVar2 + 0xb8;
        uVar10 = *(undefined4 *)(this + 0x148);
        uVar4 = (param_2 - 1) + *param_1 & -param_2;
        uVar6 = *(ulong *)(this + 0x28);
        if (*(ulong *)(this + 0x20) < *(ulong *)(this + 0x28)) {
          uVar6 = *(ulong *)(this + 0x20);
        }
        uVar7 = *(undefined8 *)pFVar8;
        if (uVar4 < uVar6) {
          uVar4 = uVar6;
        }
LAB_00100c44:
        uVar7 = Block::create(*(undefined8 *)this,this[0x108],uVar4,uVar4,uVar7,uVar10);
        LOCK();
        *(undefined8 *)pFVar1 = uVar7;
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar8 = uVar7;
        UNLOCK();
      }
    }
    else {
      embree::MutexSys::lock();
      if (puVar3 == *(ulong **)pFVar1) {
        if (*(long *)(this + 0x100) == 0) {
          LOCK();
          pFVar8 = this + 0x110;
          lVar2 = *(long *)pFVar8;
          *(long *)pFVar8 = *(long *)pFVar8 + 1;
          UNLOCK();
          uVar10 = *(undefined4 *)(this + 0x148);
          uVar7 = *(undefined8 *)(this + 0xf8);
          pFVar8 = this + 0xf8;
          uVar4 = 0x10;
          if (lVar2 + 1U < 0x11) {
            uVar4 = lVar2 + 1U;
          }
          uVar4 = *(long *)(this + 0x20) << ((byte)uVar4 & 0x3f);
          if (*(ulong *)(this + 0x28) < uVar4) {
            uVar4 = *(ulong *)(this + 0x28);
          }
          goto LAB_00100c44;
        }
        uVar7 = *(undefined8 *)(*(long *)(this + 0x100) + 0x18);
        *(undefined8 *)(*(long *)(this + 0x100) + 0x18) = *(undefined8 *)(this + 0xf8);
        LOCK();
        *(undefined8 *)(this + 0xf8) = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)pFVar1 = *(undefined8 *)(this + 0x100);
        UNLOCK();
        LOCK();
        *(undefined8 *)(this + 0x100) = uVar7;
        UNLOCK();
      }
    }
    embree::MutexSys::unlock();
  } while( true );
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > >
   >::_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >*,
   std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > > >,
   std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >&&) */

void __thiscall
std::
vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
::
_M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
          (vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
           *this,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  puVar5 = *(undefined8 **)(this + 8);
  puVar1 = *(undefined8 **)this;
  uVar3 = (long)puVar5 - (long)puVar1 >> 3;
  if (uVar3 == 0xfffffffffffffff) {
    std::__throw_length_error("vector::_M_realloc_insert");
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (puVar1 == puVar5) {
    if (0xfffffffffffffffe < uVar3) goto LAB_00100eb0;
    uVar8 = 0xfffffffffffffff;
    if (uVar3 + 1 < 0x1000000000000000) {
      uVar8 = uVar3 + 1;
    }
    uVar8 = uVar8 << 3;
LAB_00100eba:
    puVar7 = (undefined8 *)operator_new(uVar8);
    lVar10 = uVar8 + (long)puVar7;
    *(undefined8 *)((long)puVar7 + ((long)param_2 - (long)puVar1)) = *param_3;
    puVar4 = puVar7 + 1;
    *param_3 = 0;
    if (param_2 != puVar1) {
LAB_00100e21:
      puVar4 = puVar1;
      puVar9 = puVar7;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar4 != param_2);
      puVar4 = (undefined8 *)((long)puVar7 + (long)param_2 + (8 - (long)puVar1));
    }
    if (param_2 == puVar5) goto LAB_00100e74;
  }
  else {
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar3) {
LAB_00100eb0:
      uVar8 = 0x7ffffffffffffff8;
      goto LAB_00100eba;
    }
    if (uVar8 != 0) {
      if (0xfffffffffffffff < uVar8) {
        uVar8 = 0xfffffffffffffff;
      }
      uVar8 = uVar8 * 8;
      goto LAB_00100eba;
    }
    lVar10 = 0;
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)((long)param_2 - (long)puVar1) = *param_3;
    puVar4 = (undefined8 *)&DAT_00000008;
    *param_3 = 0;
    if (param_2 != puVar1) goto LAB_00100e21;
  }
  puVar9 = (undefined8 *)(((long)puVar5 - (long)param_2) + (long)puVar4);
  puVar5 = puVar4;
  do {
    uVar2 = *param_2;
    puVar6 = puVar5 + 1;
    param_2 = param_2 + 1;
    *puVar5 = uVar2;
    puVar5 = puVar6;
    puVar4 = puVar9;
  } while (puVar6 != puVar9);
LAB_00100e74:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,*(long *)(this + 0x10) - (long)puVar1);
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar4;
  *(long *)(this + 0x10) = lVar10;
  return;
}



/* embree::fast_allocator_regression_test::thread_alloc(embree::fast_allocator_regression_test*) */

void embree::fast_allocator_regression_test::thread_alloc(fast_allocator_regression_test *param_1)

{
  long *plVar1;
  FastAllocator *this;
  long lVar2;
  long *__src;
  MutexSys *pMVar3;
  undefined8 uVar4;
  void *__dest;
  undefined8 *puVar5;
  ulong uVar6;
  MutexSys *this_00;
  ulong uVar7;
  MutexSys *pMVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  long lVar11;
  long *in_FS_OFFSET;
  MutexSys *local_1f98;
  MutexSys *local_1f90;
  undefined8 local_1f88 [1000];
  undefined8 local_48;
  long local_40;
  
  this = *(FastAllocator **)(param_1 + 0x38);
  local_40 = in_FS_OFFSET[5];
  this_00 = (MutexSys *)*in_FS_OFFSET;
  if (this_00 == (MutexSys *)0x0) {
    this_00 = (MutexSys *)embree::alignedMalloc(0xc0,0x40);
    embree::MutexSys::MutexSys(this_00);
    *(undefined8 *)(this_00 + 8) = 0;
    *(MutexSys **)(this_00 + 0x40) = this_00;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(MutexSys **)(this_00 + 0x80) = this_00;
    *(undefined8 *)(this_00 + 0x88) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x98) = 0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined8 *)(this_00 + 0xa8) = 0;
    *(undefined8 *)(this_00 + 0xb0) = 0;
    *in_FS_OFFSET = (long)this_00;
    embree::MutexSys::lock();
    local_1f90 = this_00;
    if (FastAllocator::s_thread_local_allocators._8_8_ ==
        FastAllocator::s_thread_local_allocators._16_8_) {
      std::
      vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
      ::
      _M_realloc_insert<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>
                ((vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
                  *)FastAllocator::s_thread_local_allocators,
                 FastAllocator::s_thread_local_allocators._8_8_,&local_1f90);
      pMVar8 = local_1f90;
      if (local_1f90 != (MutexSys *)0x0) {
        embree::MutexSys::~MutexSys(local_1f90);
        embree::alignedFree(pMVar8);
      }
    }
    else {
      *(MutexSys **)FastAllocator::s_thread_local_allocators._8_8_ = this_00;
      FastAllocator::s_thread_local_allocators._8_8_ =
           FastAllocator::s_thread_local_allocators._8_8_ + 8;
    }
    embree::MutexSys::unlock();
  }
  lVar9 = 1000;
  do {
    lVar11 = 0;
    embree::BarrierSys::wait();
    do {
      lVar2 = *(long *)(this_00 + 0x40);
      local_1f98 = (MutexSys *)((ulong)((uint)lVar11 & 0x1f) + 8);
      if (this != *(FastAllocator **)(lVar2 + 8)) {
        embree::MutexSys::lock();
        if (*(long *)(lVar2 + 8) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(lVar2 + 8) + 0x118);
          *plVar1 = *plVar1 + *(long *)(lVar2 + 0xa8) + *(long *)(lVar2 + 0x68);
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar2 + 8) + 0x120);
          *plVar1 = *plVar1 + (((*(long *)(lVar2 + 0x98) + *(long *)(lVar2 + 0x58)) -
                               *(long *)(lVar2 + 0x50)) - *(long *)(lVar2 + 0x90));
          UNLOCK();
          LOCK();
          plVar1 = (long *)(*(long *)(lVar2 + 8) + 0x128);
          *plVar1 = *plVar1 + *(long *)(lVar2 + 0xb0) + *(long *)(lVar2 + 0x70);
          UNLOCK();
        }
        *(undefined8 *)(lVar2 + 0x48) = 0;
        *(undefined8 *)(lVar2 + 0x58) = 0;
        *(undefined8 *)(lVar2 + 0x50) = 0;
        *(undefined8 *)(lVar2 + 0x68) = 0;
        *(undefined8 *)(lVar2 + 0x70) = 0;
        *(undefined8 *)(lVar2 + 0x60) = 0;
        if (this == (FastAllocator *)0x0) {
          *(undefined8 *)(lVar2 + 0x88) = 0;
          uVar4 = 0;
          *(undefined8 *)(lVar2 + 0x98) = 0;
          *(undefined8 *)(lVar2 + 0x90) = 0;
          *(undefined8 *)(lVar2 + 0xa8) = 0;
          *(undefined8 *)(lVar2 + 0xb0) = 0;
        }
        else {
          uVar4 = *(undefined8 *)(this + 0x10);
          *(undefined8 *)(lVar2 + 0x88) = 0;
          *(undefined8 *)(lVar2 + 0x98) = 0;
          *(undefined8 *)(lVar2 + 0x60) = uVar4;
          *(undefined8 *)(lVar2 + 0x90) = 0;
          *(undefined8 *)(lVar2 + 0xa8) = 0;
          *(undefined8 *)(lVar2 + 0xb0) = 0;
          *(undefined8 *)(lVar2 + 0xa0) = 0;
          uVar4 = *(undefined8 *)(this + 0x10);
        }
        *(undefined8 *)(lVar2 + 0xa0) = uVar4;
        LOCK();
        *(FastAllocator **)(lVar2 + 8) = this;
        UNLOCK();
        embree::MutexSys::lock();
        plVar1 = *(long **)(this + 0x138);
        if (plVar1 == *(long **)(this + 0x140)) {
          __src = *(long **)(this + 0x130);
          __n = (long)plVar1 - (long)__src;
          uVar7 = (long)__n >> 3;
          if (uVar7 == 0xfffffffffffffff) {
            std::__throw_length_error("vector::_M_realloc_insert");
            goto LAB_0010158b;
          }
          if (plVar1 == __src) {
            if (0xfffffffffffffffe < uVar7) goto LAB_001013c0;
            uVar6 = 0xfffffffffffffff;
            if (uVar7 + 1 < 0x1000000000000000) {
              uVar6 = uVar7 + 1;
            }
            uVar6 = uVar6 << 3;
LAB_00101396:
            __dest = operator_new(uVar6);
            lVar10 = uVar6 + (long)__dest;
          }
          else {
            uVar6 = uVar7 * 2;
            if (uVar6 < uVar7) {
LAB_001013c0:
              uVar6 = 0x7ffffffffffffff8;
              goto LAB_00101396;
            }
            lVar10 = 0;
            __dest = (void *)0x0;
            if (uVar6 != 0) {
              if (0xfffffffffffffff < uVar6) {
                uVar6 = 0xfffffffffffffff;
              }
              uVar6 = uVar6 * 8;
              goto LAB_00101396;
            }
          }
          *(long *)((long)__dest + __n) = lVar2;
          if (0 < (long)__n) {
            __dest = memmove(__dest,__src,__n);
          }
          if (__src != (long *)0x0) {
            operator_delete(__src,*(long *)(this + 0x140) - (long)__src);
          }
          *(void **)(this + 0x130) = __dest;
          *(size_t *)(this + 0x138) = (long)__dest + __n + 8;
          *(long *)(this + 0x140) = lVar10;
        }
        else {
          *plVar1 = lVar2;
          *(long *)(this + 0x138) = *(long *)(this + 0x138) + 8;
        }
        embree::MutexSys::unlock();
        embree::MutexSys::unlock();
      }
      pMVar8 = local_1f98;
      lVar2 = *(long *)(this_00 + 0x50);
      *(MutexSys **)(this_00 + 0x68) = local_1f98 + *(long *)(this_00 + 0x68);
      uVar7 = (ulong)(-(int)lVar2 & 0xf);
      pMVar3 = local_1f98 + uVar7 + lVar2;
      *(MutexSys **)(this_00 + 0x50) = pMVar3;
      if (*(MutexSys **)(this_00 + 0x58) < pMVar3) {
        *(long *)(this_00 + 0x50) = lVar2;
        if (*(MutexSys **)(this_00 + 0x60) < (MutexSys *)((long)local_1f98 * 4)) {
          pMVar3 = (MutexSys *)FastAllocator::malloc(this,(ulong *)&local_1f98,0x40,false);
        }
        else {
          local_1f90 = *(MutexSys **)(this_00 + 0x60);
          pMVar3 = (MutexSys *)FastAllocator::malloc(this,(ulong *)&local_1f90,0x40,true);
          *(MutexSys **)(this_00 + 0x48) = pMVar3;
          *(long *)(this_00 + 0x70) =
               (*(long *)(this_00 + 0x58) + *(long *)(this_00 + 0x70)) - *(long *)(this_00 + 0x50);
          *(MutexSys **)(this_00 + 0x50) = pMVar8;
          *(MutexSys **)(this_00 + 0x58) = local_1f90;
          if (local_1f90 < pMVar8) {
            *(undefined8 *)(this_00 + 0x50) = 0;
            local_1f90 = *(MutexSys **)(this_00 + 0x60);
            pMVar3 = (MutexSys *)FastAllocator::malloc(this,(ulong *)&local_1f90,0x40,false);
            *(MutexSys **)(this_00 + 0x48) = pMVar3;
            *(long *)(this_00 + 0x70) =
                 (*(long *)(this_00 + 0x58) + *(long *)(this_00 + 0x70)) - *(long *)(this_00 + 0x50)
            ;
            *(MutexSys **)(this_00 + 0x50) = pMVar8;
            *(MutexSys **)(this_00 + 0x58) = local_1f90;
            if (local_1f90 < pMVar8) {
              *(undefined8 *)(this_00 + 0x50) = 0;
              pMVar3 = (MutexSys *)0x0;
            }
          }
        }
      }
      else {
        *(ulong *)(this_00 + 0x70) = *(long *)(this_00 + 0x70) + uVar7;
        pMVar3 = pMVar3 + (*(long *)(this_00 + 0x48) - (long)local_1f98);
      }
      puVar5 = local_1f88;
      pMVar8 = this_00 + 0x40 + lVar11;
      puVar5[lVar11] = pMVar3;
      lVar11 = lVar11 + 1;
      *(MutexSys **)pMVar3 = pMVar8;
    } while (lVar11 != 1000);
    pMVar8 = this_00 + 0x40;
    do {
      if (*(MutexSys **)*puVar5 != pMVar8) {
        LOCK();
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
        UNLOCK();
      }
      puVar5 = puVar5 + 1;
      pMVar8 = pMVar8 + 1;
    } while (&local_48 != puVar5);
    embree::BarrierSys::wait();
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (local_40 == in_FS_OFFSET[5]) {
    return;
  }
LAB_0010158b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (0xfffffffffffffffe < uVar1) goto LAB_00101670;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00101670:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_001015f9;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_001015f9:
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



/* embree::fast_allocator_regression_test::run() */

ulong __thiscall embree::fast_allocator_regression_test::run(fast_allocator_regression_test *this)

{
  FastAllocator *pFVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  MutexSys *this_00;
  MutexSys *pMVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 local_60;
  void *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = (undefined8 *)operator_new(0x178);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0x1000;
  puVar5[3] = 0;
  puVar5[4] = 0x1000;
  puVar5[5] = 0x1fffc0;
  embree::MutexSys::MutexSys((MutexSys *)(puVar5 + 6));
  this_00 = (MutexSys *)(puVar5 + 7);
  do {
    pMVar6 = this_00 + 8;
    embree::MutexSys::MutexSys(this_00);
    this_00 = pMVar6;
  } while (pMVar6 != (MutexSys *)(puVar5 + 0xf));
  *(undefined1 *)((long)puVar5 + 0x10a) = 0;
  puVar5[0x1f] = 0;
  puVar5[0x20] = 0;
  puVar5[0x22] = 0;
  puVar5[0x23] = 0;
  puVar5[0x24] = 0;
  puVar5[0x25] = 0;
  puVar5[0x26] = 0;
  puVar5[0x27] = 0;
  puVar5[0x28] = 0;
  *(undefined4 *)(puVar5 + 0x29) = 0;
  puVar5[0x2a] = 0;
  *(undefined1 *)(puVar5 + 0x2b) = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = 0;
  puVar5[0x2e] = 0;
  *(undefined2 *)(puVar5 + 0x21) = 0x100;
  do {
    LOCK();
    *(undefined8 *)pMVar6 = 0;
    UNLOCK();
    LOCK();
    *(undefined8 *)(pMVar6 + 0x40) = 0;
    UNLOCK();
    pMVar6 = pMVar6 + 8;
  } while (pMVar6 != (MutexSys *)(puVar5 + 0x17));
  pFVar1 = *(FastAllocator **)(this + 0x38);
  *(undefined8 **)(this + 0x38) = puVar5;
  if (pFVar1 != (FastAllocator *)0x0) {
    FastAllocator::~FastAllocator(pFVar1);
    operator_delete(pFVar1,0x178);
  }
  LOCK();
  *(undefined8 *)(this + 0x30) = 0;
  UNLOCK();
  uVar4 = embree::getNumberOfLogicalThreads();
  uVar9 = (ulong)uVar4;
  embree::BarrierSys::init((ulong)(this + 0x28));
  local_58 = (void *)0x0;
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    lVar7 = 0;
    while( true ) {
      puVar3 = local_48;
      puVar5 = local_50;
      local_60 = embree::createThread(thread_alloc,this,0,-1);
      if (puVar3 == puVar5) {
        std::vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>>::
        _M_realloc_insert<embree::opaque_thread_t*>
                  ((vector<embree::opaque_thread_t*,std::allocator<embree::opaque_thread_t*>> *)
                   &local_58,puVar3,&local_60);
      }
      else {
        local_50 = puVar5 + 1;
        *puVar5 = local_60;
      }
      if (uVar9 == lVar7 + 1U) break;
      lVar7 = lVar7 + 1;
    }
  }
  lVar7 = 1000;
  do {
    FastAllocator::reset(*(FastAllocator **)(this + 0x38));
    embree::BarrierSys::wait();
    embree::BarrierSys::wait();
    pvVar2 = local_58;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (uVar9 != 0) {
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      embree::join(*(opaque_thread_t **)((long)pvVar2 + lVar7));
    } while (uVar9 != uVar8);
  }
  pFVar1 = *(FastAllocator **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pFVar1 != (FastAllocator *)0x0) {
    FastAllocator::~FastAllocator(pFVar1);
    operator_delete(pFVar1,0x178);
  }
  lVar7 = *(long *)(this + 0x30);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58,(long)local_48 - (long)local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT71((int7)((ulong)pFVar1 >> 8),lVar7 == 0) & 0xffffffff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::FastAllocator::thread_local_allocator2 */

void embree::FastAllocator::_GLOBAL__sub_I_thread_local_allocator2(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong __n;
  ulong *__src;
  long in_FS_OFFSET;
  ulong local_60;
  ulong *local_58;
  ulong local_50;
  ulong local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  embree::MutexSys::MutexSys((MutexSys *)&s_thread_local_allocators_lock);
  __cxa_atexit(embree::MutexSys::~MutexSys,&s_thread_local_allocators_lock,&__dso_handle);
  s_thread_local_allocators._0_8_ = 0;
  s_thread_local_allocators._8_8_ = 0;
  s_thread_local_allocators._16_8_ = 0;
  __cxa_atexit(std::
               vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
               ::~vector,s_thread_local_allocators,&__dso_handle);
  local_60 = 0x1e;
  local_58 = local_48;
  __src = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
  __n = local_60;
  uVar1 = _UNK_00101ce8;
  local_48[0] = local_60;
  *__src = __LC1;
  __src[1] = uVar1;
  uVar2 = _UNK_00101cf8;
  *(undefined8 *)((long)__src + 0xe) = __LC2;
  *(undefined8 *)((long)__src + 0x16) = uVar2;
  local_50 = local_60;
  *(undefined1 *)((long)__src + local_60) = 0;
  fast_allocator_regression._0_8_ = &PTR___cxa_pure_virtual_00101cb8;
  fast_allocator_regression._8_8_ = 0x100018;
  local_58 = __src;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      fast_allocator_regression[0x18] = (char)*__src;
      goto LAB_00101b28;
    }
    if (local_60 == 0) goto LAB_00101b28;
  }
  else {
    fast_allocator_regression._8_8_ =
         std::__cxx11::string::_M_create((ulong *)(fast_allocator_regression + 8),(ulong)&local_60);
    fast_allocator_regression._24_8_ = local_60;
  }
  memcpy((void *)fast_allocator_regression._8_8_,__src,__n);
LAB_00101b28:
  fast_allocator_regression._16_8_ = local_60;
  *(undefined1 *)(fast_allocator_regression._8_8_ + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  fast_allocator_regression._0_8_ = &PTR_run_00101cd0;
  embree::BarrierSys::BarrierSys((BarrierSys *)(fast_allocator_regression + 0x28),0);
  fast_allocator_regression._48_8_ = 0;
  fast_allocator_regression._56_8_ = 0;
  embree::registerRegressionTest((RegressionTest *)fast_allocator_regression);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __cxa_atexit(fast_allocator_regression_test::~fast_allocator_regression_test,0x100000,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::fast_allocator_regression_test::~fast_allocator_regression_test() */

void __thiscall
embree::fast_allocator_regression_test::~fast_allocator_regression_test
          (fast_allocator_regression_test *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::FastAllocator::~FastAllocator() */

void __thiscall embree::FastAllocator::~FastAllocator(FastAllocator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* std::vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> >,
   std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,
   std::default_delete<embree::FastAllocator::ThreadLocal2> > > >::~vector() */

void __thiscall
std::
vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
::~vector(vector<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>,std::allocator<std::unique_ptr<embree::FastAllocator::ThreadLocal2,std::default_delete<embree::FastAllocator::ThreadLocal2>>>>
          *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


