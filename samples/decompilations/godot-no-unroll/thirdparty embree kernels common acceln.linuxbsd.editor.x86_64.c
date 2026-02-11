
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::AccelN::pointQuery(embree::Accel::Intersectors*, embree::PointQueryK<1>*,
   embree::PointQueryContext*) */

uint embree::AccelN::pointQuery
               (Intersectors *param_1,PointQueryK *param_2,PointQueryContext *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar1 = *(long *)param_1;
  lVar4 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar4) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        uVar3 = (**(code **)(lVar2 + 0x88))(lVar2 + 0x58,param_2,param_3);
        lVar4 = *(long *)(lVar1 + 0x170);
        uVar6 = uVar6 | uVar3;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(*(long *)(lVar1 + 0x178) - lVar4 >> 3));
    return uVar6;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::AccelN::intersect(embree::Accel::Intersectors*, RTCRayHit&, embree::RayQueryContext*) */

void embree::AccelN::intersect(Intersectors *param_1,RTCRayHit *param_2,RayQueryContext *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar3 + uVar4 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x78))(lVar2 + 0x58,param_2,param_3);
        lVar3 = *(long *)(lVar1 + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(lVar1 + 0x178) - lVar3 >> 3));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::AccelN::intersect4(void const*, embree::Accel::Intersectors*, RTCRayHit4&,
   embree::RayQueryContext*) */

void embree::AccelN::intersect4
               (void *param_1,Intersectors *param_2,RTCRayHit4 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_2;
  lVar3 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar3 + uVar4 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x98))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(lVar1 + 0x178) - lVar3 >> 3));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::AccelN::intersect8(void const*, embree::Accel::Intersectors*, RTCRayHit8&,
   embree::RayQueryContext*) */

void embree::AccelN::intersect8
               (void *param_1,Intersectors *param_2,RTCRayHit8 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_2;
  lVar3 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar3 + uVar4 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0xe0))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(lVar1 + 0x178) - lVar3 >> 3));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::AccelN::intersect16(void const*, embree::Accel::Intersectors*, RTCRayHit16&,
   embree::RayQueryContext*) */

void embree::AccelN::intersect16
               (void *param_1,Intersectors *param_2,RTCRayHit16 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_2;
  lVar3 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar3 + uVar4 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x128))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(lVar1 + 0x178) - lVar3 >> 3));
  }
  return;
}



/* embree::AccelN::occluded(embree::Accel::Intersectors*, RTCRay&, embree::RayQueryContext*) */

void embree::AccelN::occluded(Intersectors *param_1,RTCRay *param_2,RayQueryContext *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(lVar3 + uVar4 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        (**(code **)(lVar2 + 0x80))(lVar2 + 0x58,param_2,param_3);
        if (*(float *)(param_2 + 0x20) <= 0.0 && *(float *)(param_2 + 0x20) != 0.0) {
          return;
        }
        lVar3 = *(long *)(lVar1 + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(lVar1 + 0x178) - lVar3 >> 3));
  }
  return;
}



/* embree::AccelN::occluded4(void const*, embree::Accel::Intersectors*, RTCRay4&,
   embree::RayQueryContext*) */

void embree::AccelN::occluded4
               (void *param_1,Intersectors *param_2,RTCRay4 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  lVar1 = *(long *)param_2;
  lVar6 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar6) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(lVar6 + uVar7 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        uVar4 = (**(code **)(lVar2 + 0xa0))(param_1,lVar2 + 0x58,param_3,param_4);
                    /* WARNING: Load size is inaccurate */
        auVar3._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x84)) & *(uint *)((long)param_1 + 4);
        auVar3._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x80)) & *param_1;
        auVar3._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x88)) & *(uint *)((long)param_1 + 8);
        auVar3._12_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x8c)) & *(uint *)((long)param_1 + 0xc);
        iVar5 = movmskps(uVar4,auVar3);
        if (iVar5 == 0) {
          return;
        }
        lVar6 = *(long *)(lVar1 + 0x170);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(*(long *)(lVar1 + 0x178) - lVar6 >> 3));
  }
  return;
}



/* embree::AccelN::occluded8(void const*, embree::Accel::Intersectors*, RTCRay8&,
   embree::RayQueryContext*) */

void embree::AccelN::occluded8
               (void *param_1,Intersectors *param_2,RTCRay8 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar1 = *(long *)param_2;
  lVar6 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar6) {
    uVar7 = 0;
    do {
      lVar2 = *(long *)(lVar6 + uVar7 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        uVar4 = (**(code **)(lVar2 + 0xe8))(param_1,lVar2 + 0x58,param_3,param_4);
                    /* WARNING: Load size is inaccurate */
        auVar8._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x100)) & *param_1;
        auVar8._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x104)) & *(uint *)((long)param_1 + 4);
        auVar8._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x108)) & *(uint *)((long)param_1 + 8);
        auVar8._12_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x10c)) & *(uint *)((long)param_1 + 0xc)
        ;
        auVar3._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x114)) & *(uint *)((long)param_1 + 0x14)
        ;
        auVar3._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x110)) & *(uint *)((long)param_1 + 0x10)
        ;
        auVar3._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x118)) & *(uint *)((long)param_1 + 0x18)
        ;
        auVar3._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x11c)) & *(uint *)((long)param_1 + 0x1c);
        iVar5 = movmskps(uVar4,auVar8 | auVar3);
        if (iVar5 == 0) {
          return;
        }
        lVar6 = *(long *)(lVar1 + 0x170);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(*(long *)(lVar1 + 0x178) - lVar6 >> 3));
  }
  return;
}



/* embree::AccelN::occluded16(void const*, embree::Accel::Intersectors*, RTCRay16&,
   embree::RayQueryContext*) */

void embree::AccelN::occluded16
               (void *param_1,Intersectors *param_2,RTCRay16 *param_3,RayQueryContext *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  lVar1 = *(long *)param_2;
  lVar8 = *(long *)(lVar1 + 0x170);
  if (*(long *)(lVar1 + 0x178) != lVar8) {
    uVar9 = 0;
    do {
      lVar2 = *(long *)(lVar8 + uVar9 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        uVar6 = (**(code **)(lVar2 + 0x130))(param_1,lVar2 + 0x58,param_3,param_4);
                    /* WARNING: Load size is inaccurate */
        auVar10._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x200)) & *param_1;
        auVar10._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x204)) & *(uint *)((long)param_1 + 4);
        auVar10._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x208)) & *(uint *)((long)param_1 + 8);
        auVar10._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x20c)) & *(uint *)((long)param_1 + 0xc);
        auVar5._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x214)) & *(uint *)((long)param_1 + 0x14)
        ;
        auVar5._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x210)) & *(uint *)((long)param_1 + 0x10)
        ;
        auVar5._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x218)) & *(uint *)((long)param_1 + 0x18)
        ;
        auVar5._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x21c)) & *(uint *)((long)param_1 + 0x1c);
        auVar4._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x224)) & *(uint *)((long)param_1 + 0x24)
        ;
        auVar4._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x220)) & *(uint *)((long)param_1 + 0x20)
        ;
        auVar4._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x228)) & *(uint *)((long)param_1 + 0x28)
        ;
        auVar4._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x22c)) & *(uint *)((long)param_1 + 0x2c);
        auVar3._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x234)) & *(uint *)((long)param_1 + 0x34)
        ;
        auVar3._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x230)) & *(uint *)((long)param_1 + 0x30)
        ;
        auVar3._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x238)) & *(uint *)((long)param_1 + 0x38)
        ;
        auVar3._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x23c)) & *(uint *)((long)param_1 + 0x3c);
        iVar7 = movmskps(uVar6,auVar10 | auVar5 | auVar4 | auVar3);
        if (iVar7 == 0) {
          return;
        }
        lVar8 = *(long *)(lVar1 + 0x170);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(lVar1 + 0x178) - lVar8 >> 3));
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100a5b) */
/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1}>(unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}>(unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  Thread *pTVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  Thread *pTVar12;
  Thread *pTVar13;
  Thread *pTVar14;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = embree::TaskScheduler::thread();
  if (lVar9 == 0) {
    plVar11 = (long *)embree::TaskScheduler::instance();
    embree::TaskScheduler::startThreads();
    lVar9 = embree::TaskScheduler::allocThreadIndex();
    pTVar12 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
    if (plVar11 != (long *)0x0) {
      if (*(code **)(*plVar11 + 0x10) == RefCount::refInc) {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    *(long *)pTVar12 = lVar9;
    pTVar14 = pTVar12 + 0x40;
    pTVar13 = pTVar14;
    do {
      *(undefined4 *)pTVar13 = 0;
      pTVar13 = pTVar13 + 0x40;
    } while (pTVar13 != pTVar12 + 0x40040);
    *(undefined8 *)(pTVar12 + 0x40040) = 0;
    *(undefined8 *)(pTVar12 + 0x40080) = 0;
    *(undefined8 *)(pTVar12 + 0xc00c0) = 0;
    *(undefined8 *)(pTVar12 + 0xc0100) = 0;
    *(long **)(pTVar12 + 0xc0108) = plVar11;
    if (plVar11 != (long *)0x0) {
      if (*(code **)(*plVar11 + 0x10) == RefCount::refInc) {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (*(code **)(*plVar11 + 0x18) == RefCount::refDec) {
        LOCK();
        plVar1 = plVar11 + 1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      else {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    LOCK();
    *(Thread **)(plVar11[2] + lVar9 * 8) = pTVar12;
    UNLOCK();
    local_48 = pTVar12;
    pTVar13 = (Thread *)embree::TaskScheduler::swapThread(pTVar12);
    if (0xfff < *(ulong *)(pTVar12 + 0x40080))
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    lVar6 = *(long *)(pTVar12 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(pTVar12 + 0xc00c0) = uVar3;
    pTVar5 = pTVar12 + uVar3 + 0x40090;
    *(undefined ***)pTVar5 = &PTR_execute_00102160;
    *(ulong *)(pTVar5 + 8) = param_2;
    *(ulong *)(pTVar5 + 0x10) = param_1;
    *(ulong *)(pTVar5 + 0x18) = param_3;
    *(_lambda_embree__range<unsigned_long>_const___1_ **)(pTVar5 + 0x20) = param_4;
    *(TaskGroupContext **)(pTVar5 + 0x28) = param_5;
    lVar10 = *(long *)(pTVar12 + 0x40080) * 0x40;
    lVar7 = *(long *)(pTVar12 + 0xc0100);
    *(undefined4 *)(pTVar12 + lVar10 + 0x44) = 1;
    pTVar12[lVar10 + 0x48] = (Thread)0x1;
    *(long *)(pTVar12 + lVar10 + 0x68) = lVar6;
    *(Thread **)(pTVar12 + lVar10 + 0x50) = pTVar5;
    *(long *)(pTVar12 + lVar10 + 0x58) = lVar7;
    *(TaskGroupContext **)(pTVar12 + lVar10 + 0x60) = param_5;
    *(ulong *)(pTVar12 + lVar10 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*(int *)(pTVar14 + lVar10) == 0) {
      *(undefined4 *)(pTVar14 + lVar10) = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(pTVar12 + 0x40080) = *(long *)(pTVar12 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(pTVar12 + 0x40080) - 1U <= *(ulong *)(pTVar12 + 0x40040)) {
      LOCK();
      *(long *)(pTVar12 + 0x40040) = *(long *)(pTVar12 + 0x40080) + -1;
      UNLOCK();
    }
    embree::MutexSys::lock();
    LOCK();
    plVar11[6] = plVar11[6] + 1;
    UNLOCK();
    LOCK();
    *(undefined1 *)(plVar11 + 7) = 1;
    UNLOCK();
    embree::ConditionSys::notify_all();
    embree::MutexSys::unlock();
    local_48 = (Thread *)plVar11;
    if (plVar11 != (long *)0x0) {
      if (*(code **)(*plVar11 + 0x10) == RefCount::refInc) {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    embree::TaskScheduler::addScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
        LOCK();
        plVar1 = (long *)((long)local_48 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*(long *)local_48 + 8))();
        }
      }
      else {
        (**(code **)(*(long *)local_48 + 0x18))();
      }
    }
    do {
      cVar8 = embree::TaskScheduler::TaskQueue::execute_local(pTVar14,(Task *)pTVar12);
    } while (cVar8 != '\0');
    LOCK();
    plVar11[6] = plVar11[6] + -1;
    UNLOCK();
    local_48 = (Thread *)plVar11;
    if (plVar11 != (long *)0x0) {
      if (*(code **)(*plVar11 + 0x10) == RefCount::refInc) {
        LOCK();
        plVar11[1] = plVar11[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    embree::TaskScheduler::removeScheduler((Ref *)&local_48);
    if (local_48 != (Thread *)0x0) {
      if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
        LOCK();
        plVar1 = (long *)((long)local_48 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (**(code **)(*(long *)local_48 + 8))();
        }
      }
      else {
        (**(code **)(*(long *)local_48 + 0x18))();
      }
    }
    local_48 = (Thread *)0x0;
    LOCK();
    *(undefined8 *)(lVar9 * 8 + plVar11[2]) = 0;
    UNLOCK();
    embree::TaskScheduler::swapThread(pTVar13);
    pTVar14 = *(Thread **)param_5;
    if (pTVar14 != (Thread *)0x0) {
      local_48 = pTVar14;
      std::__exception_ptr::exception_ptr::_M_addref();
      pTVar14 = local_48;
    }
    LOCK();
    plVar11[5] = plVar11[5] + -1;
    UNLOCK();
    while (plVar11[5] != 0) {
      embree::yield();
    }
    local_48 = *(Thread **)param_5;
    *(undefined8 *)param_5 = 0;
    if (local_48 != (Thread *)0x0) {
      std::__exception_ptr::exception_ptr::_M_release();
    }
    if (pTVar14 != (Thread *)0x0) {
      local_48 = pTVar14;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception((Ref *)&local_48);
      goto LAB_00100b78;
    }
    if (pTVar12 != (Thread *)0x0) {
      plVar11 = *(long **)(pTVar12 + 0xc0108);
      if (plVar11 != (long *)0x0) {
        if (*(code **)(*plVar11 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar11 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        else {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::alignedFree(pTVar12);
        return;
      }
      goto LAB_00100b78;
    }
  }
  else {
    if (0xfff < *(ulong *)(lVar9 + 0x40080)) {

      embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
      :
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = *(long *)(lVar9 + 0xc00c0);
    uVar3 = lVar6 + 0x30 + (ulong)(-(int)lVar6 & 0x3f);
    if (0x80000 < uVar3)
    goto 
    embree_TaskScheduler_spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
    ;
    *(ulong *)(lVar9 + 0xc00c0) = uVar3;
    puVar4 = (undefined8 *)(lVar9 + 0x40090 + uVar3);
    puVar4[5] = param_5;
    *puVar4 = &PTR_execute_00102160;
    puVar4[1] = param_2;
    puVar4[2] = param_1;
    puVar4[3] = param_3;
    puVar4[4] = param_4;
    lVar10 = *(long *)(lVar9 + 0x40080) * 0x40;
    piVar2 = (int *)(lVar9 + 0x40 + lVar10);
    lVar7 = *(long *)(lVar9 + 0xc0100);
    *(undefined4 *)(lVar9 + 0x44 + lVar10) = 1;
    *(undefined1 *)(lVar9 + 0x48 + lVar10) = 1;
    lVar10 = lVar10 + lVar9;
    *(TaskGroupContext **)(lVar10 + 0x60) = param_5;
    *(undefined8 **)(lVar10 + 0x50) = puVar4;
    *(long *)(lVar10 + 0x58) = lVar7;
    *(long *)(lVar10 + 0x68) = lVar6;
    *(ulong *)(lVar10 + 0x70) = param_2 - param_1;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      UNLOCK();
    }
    LOCK();
    if (*piVar2 == 0) {
      *piVar2 = 1;
    }
    UNLOCK();
    LOCK();
    *(long *)(lVar9 + 0x40080) = *(long *)(lVar9 + 0x40080) + 1;
    UNLOCK();
    if (*(long *)(lVar9 + 0x40080) - 1U <= *(ulong *)(lVar9 + 0x40040)) {
      LOCK();
      *(long *)(lVar9 + 0x40040) = *(long *)(lVar9 + 0x40080) + -1;
      UNLOCK();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100b78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}>(unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}>(unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar2 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar2,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar2,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100bff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(**(long **)(this + 0x20) + 0x170) + uVar1 * 8) + 0x38))();
  return;
}



/* embree::AccelN::AccelN() */

void __thiscall embree::AccelN::AccelN(AccelN *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _LC12;
  uVar1 = _LC1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar2;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x38) = uVar1;
  *(undefined4 *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = uVar2;
  *(undefined4 *)(this + 0x44) = uVar2;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(undefined4 *)(this + 0x4c) = uVar2;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined **)this = &DAT_00102110;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  return;
}



/* embree::AccelN::~AccelN() */

void __thiscall embree::AccelN::~AccelN(AccelN *this)

{
  long *plVar1;
  void *pvVar2;
  ulong uVar3;
  
  *(undefined **)this = &DAT_00102110;
  pvVar2 = *(void **)(this + 0x170);
  if (*(void **)(this + 0x178) != pvVar2) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)((long)pvVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        pvVar2 = *(void **)(this + 0x170);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x178) - (long)pvVar2 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x180) - (long)pvVar2);
    return;
  }
  return;
}



/* embree::AccelN::~AccelN() */

void __thiscall embree::AccelN::~AccelN(AccelN *this)

{
  ~AccelN(this);
  embree::alignedFree(this);
  return;
}



/* embree::AccelN::accels_init() */

void __thiscall embree::AccelN::accels_init(AccelN *this)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x170);
  if (lVar2 != *(long *)(this + 0x178)) {
    uVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar2 = *(long *)(this + 0x170);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x178) - lVar2 >> 3));
    if (*(long *)(this + 0x178) != lVar2) {
      *(long *)(this + 0x178) = lVar2;
    }
    return;
  }
  return;
}



/* embree::AccelN::accels_print(unsigned long) */

void __thiscall embree::AccelN::accels_print(AccelN *this,ulong param_1)

{
  code *pcVar1;
  ostream *poVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(long *)(this + 0x170) != *(long *)(this + 0x178)) {
    uVar5 = 0;
    do {
      uVar6 = 0;
      if (param_1 != 0) {
        do {
          uVar6 = uVar6 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (param_1 != uVar6);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"accels[",7);
      poVar2 = std::ostream::_M_insert<unsigned_long>(0x1030a8);
      std::__ostream_insert<char,std::char_traits<char>>(poVar2,"]",1);
      plVar4 = *(long **)(poVar2 + *(long *)(*(long *)poVar2 + -0x18) + 0xf0);
      if (plVar4 == (long *)0x0) {
        std::__throw_bad_cast();
        lVar3 = plVar4[0x2e];
        if (plVar4[0x2f] == lVar3) {
          return;
        }
        uVar5 = 0;
        do {
          pcVar1 = *(code **)(**(long **)(lVar3 + uVar5 * 8) + 0x30);
          if (pcVar1 != Accel::immutable) {
            (*pcVar1)();
            lVar3 = plVar4[0x2e];
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (ulong)(plVar4[0x2f] - lVar3 >> 3));
        return;
      }
      if ((char)plVar4[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar4 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar4 + 0x30))(plVar4,10);
        }
      }
      std::ostream::put((char)poVar2);
      std::ostream::flush();
      lVar3 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      Accel::Intersectors::print
                ((Intersectors *)(*(long *)(*(long *)(this + 0x170) + lVar3) + 0x58),param_1 + 2);
    } while (uVar5 < (ulong)(*(long *)(this + 0x178) - *(long *)(this + 0x170) >> 3));
  }
  return;
}



/* embree::AccelN::accels_immutable() */

void __thiscall embree::AccelN::accels_immutable(AccelN *this)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x170);
  if (*(long *)(this + 0x178) != lVar2) {
    uVar3 = 0;
    do {
      pcVar1 = *(code **)(**(long **)(lVar2 + uVar3 * 8) + 0x30);
      if (pcVar1 != Accel::immutable) {
        (*pcVar1)();
        lVar2 = *(long *)(this + 0x170);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(*(long *)(this + 0x178) - lVar2 >> 3));
    return;
  }
  return;
}



/* embree::AccelN::accels_build() */

void __thiscall embree::AccelN::accels_build(AccelN *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  bool bVar15;
  char cVar16;
  ulong uVar17;
  undefined8 *puVar18;
  AccelN *pAVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  AccelN *local_48;
  long local_40;
  long local_38;
  long local_30;
  
  bVar21 = 0;
  plVar12 = *(long **)(this + 0x170);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(long *)(this + 0x178) - (long)plVar12 >> 3;
  local_48 = this;
  if (uVar17 == 0) {
LAB_00101120:
    *(AccelN **)(this + 0x58) = this;
    uVar17 = 0;
    bVar15 = true;
    *(code **)(this + 0x78) = intersect;
    *(code **)(this + 0x80) = occluded;
    *(undefined8 *)(this + 0x88) = 0x100000;
    *(char **)(this + 0x90) = "AccelN::intersector1";
    *(code **)(this + 0x98) = intersect4;
    *(code **)(this + 0xa0) = occluded4;
    *(undefined4 *)(this + 0x50) = 1;
    *(char **)(this + 0xa8) = "AccelN::intersector4";
LAB_00101192:
    pcVar20 = "AccelN::intersector8";
  }
  else {
    local_40 = 0;
    TaskScheduler::
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,uVar17,1,(_lambda_embree__range<unsigned_long>_const___1_ *)&local_48,
               (TaskGroupContext *)&local_40);
    cVar16 = (char)uVar17;
    embree::TaskScheduler::wait();
    if (local_40 != 0) {
      plVar12 = &local_38;
      local_38 = local_40;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception();
      lVar14 = plVar12[0x2e];
      uVar17 = 0;
      if (plVar12[0x2f] == lVar14) {
        return;
      }
      do {
        lVar2 = *(long *)(lVar14 + uVar17 * 8);
        lVar3 = *(long *)(lVar2 + 0x108);
        lVar4 = *(long *)(lVar2 + 0x150);
        if (*(long *)(lVar2 + 0xc0) == 0) {
          if (lVar3 != 0) {
            if (cVar16 == '\0') goto LAB_00101532;
LAB_00101486:
            *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0xf8);
            *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x100);
            *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(lVar2 + 0x108);
            goto joined_r0x0010159b;
          }
          if (lVar4 != 0) {
            if (cVar16 == '\0') goto LAB_00101554;
            goto LAB_001014ac;
          }
        }
        else {
          if (cVar16 == '\0') {
            *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 200);
            *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xd0);
            *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0xd8);
            if (lVar3 != 0) {
LAB_00101532:
              *(undefined8 *)(lVar2 + 0xf0) = *(undefined8 *)(lVar2 + 0x120);
              *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0x110);
              *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x118);
            }
            if (lVar4 != 0) {
LAB_00101554:
              *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0x168);
              *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0x158);
              *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0x160);
            }
          }
          else {
            *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 0xb0);
            *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0xb8);
            *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0xc0);
            if (lVar3 != 0) goto LAB_00101486;
joined_r0x0010159b:
            if (lVar4 != 0) {
LAB_001014ac:
              *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0x150);
              *(undefined8 *)(lVar2 + 0x128) = *(undefined8 *)(lVar2 + 0x140);
              *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0x148);
              lVar14 = plVar12[0x2e];
              goto LAB_001014d0;
            }
          }
          lVar14 = plVar12[0x2e];
        }
LAB_001014d0:
        uVar17 = uVar17 + 1;
        if ((ulong)(plVar12[0x2f] - lVar14 >> 3) <= uVar17) {
          return;
        }
      } while( true );
    }
    plVar12 = *(long **)(this + 0x170);
    lVar14 = *(long *)(this + 0x178) - (long)plVar12;
    uVar17 = lVar14 >> 3;
    if (lVar14 == 0) goto LAB_00101120;
    uVar13 = 0;
    bVar15 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    do {
      lVar2 = plVar12[uVar13];
      bVar6 = (bool)(bVar6 & *(long *)(lVar2 + 0x90) != 0);
      bVar7 = (bool)(bVar7 & *(long *)(lVar2 + 0xa8) != 0);
      bVar8 = (bool)(bVar8 & *(long *)(lVar2 + 0xf0) != 0);
      uVar13 = uVar13 + 1;
      bVar15 = (bool)(bVar15 & *(long *)(lVar2 + 0x138) != 0);
    } while (uVar13 < uVar17);
    if (lVar14 == 8) {
      *(undefined4 *)(this + 0x50) = *(undefined4 *)(*plVar12 + 0x50);
      lVar14 = *plVar12;
      uVar5 = *(undefined8 *)(lVar14 + 0x18);
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar14 + 0x10);
      *(undefined8 *)(this + 0x18) = uVar5;
      uVar5 = *(undefined8 *)(lVar14 + 0x28);
      *(undefined8 *)(this + 0x20) = *(undefined8 *)(lVar14 + 0x20);
      *(undefined8 *)(this + 0x28) = uVar5;
      uVar5 = *(undefined8 *)(lVar14 + 0x38);
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar14 + 0x30);
      *(undefined8 *)(this + 0x38) = uVar5;
      uVar5 = *(undefined8 *)(lVar14 + 0x48);
      *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar14 + 0x40);
      *(undefined8 *)(this + 0x48) = uVar5;
      puVar18 = (undefined8 *)(*plVar12 + 0x58);
      pAVar19 = this + 0x58;
      for (lVar14 = 0x23; lVar14 != 0; lVar14 = lVar14 + -1) {
        *(undefined8 *)pAVar19 = *puVar18;
        puVar18 = puVar18 + (ulong)bVar21 * -2 + 1;
        pAVar19 = pAVar19 + (ulong)bVar21 * -0x10 + 8;
      }
      goto LAB_0010125c;
    }
    *(undefined4 *)(this + 0x50) = 1;
    pcVar20 = "AccelN::intersector1";
    if (!bVar6) {
      pcVar20 = (char *)0x0;
    }
    *(AccelN **)(this + 0x58) = this;
    *(code **)(this + 0x78) = intersect;
    *(char **)(this + 0x90) = pcVar20;
    pcVar20 = "AccelN::intersector4";
    if (!bVar7) {
      pcVar20 = (char *)0x0;
    }
    *(code **)(this + 0x80) = occluded;
    *(code **)(this + 0x98) = intersect4;
    *(undefined8 *)(this + 0x88) = 0x100000;
    *(code **)(this + 0xa0) = occluded4;
    *(char **)(this + 0xa8) = pcVar20;
    pcVar20 = (char *)0x0;
    if (bVar8) goto LAB_00101192;
  }
  uVar9 = _LC1;
  *(code **)(this + 0xe0) = intersect8;
  uVar10 = _LC12;
  *(code **)(this + 0xe8) = occluded8;
  pcVar11 = "AccelN::intersector16";
  auVar22._0_8_ = CONCAT44(uVar9,uVar9);
  auVar22._8_4_ = uVar9;
  auVar22._12_4_ = uVar9;
  if (!bVar15) {
    pcVar11 = (char *)0x0;
  }
  auVar23._0_8_ = CONCAT44(uVar10,uVar10);
  auVar23._8_4_ = uVar10;
  auVar23._12_4_ = uVar10;
  *(undefined1 (*) [16])(this + 0x10) = auVar22;
  *(code **)(this + 0x128) = intersect16;
  *(char **)(this + 0xf0) = pcVar20;
  *(code **)(this + 0x130) = occluded16;
  *(char **)(this + 0x138) = pcVar11;
  *(undefined1 (*) [16])(this + 0x20) = auVar23;
  *(undefined1 (*) [16])(this + 0x30) = auVar22;
  *(undefined1 (*) [16])(this + 0x40) = auVar23;
  if (uVar17 != 0) {
    plVar1 = plVar12 + uVar17;
    auVar25._8_4_ = uVar10;
    auVar25._0_8_ = auVar23._0_8_;
    auVar25._12_4_ = uVar10;
    auVar24._8_4_ = uVar9;
    auVar24._0_8_ = auVar22._0_8_;
    auVar24._12_4_ = uVar9;
    do {
      lVar14 = *plVar12;
      plVar12 = plVar12 + 1;
      auVar22 = minps(auVar22,*(undefined1 (*) [16])(lVar14 + 0x10));
      *(undefined1 (*) [16])(this + 0x10) = auVar22;
      auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar14 + 0x20));
      *(undefined1 (*) [16])(this + 0x20) = auVar25;
      auVar24 = minps(auVar24,*(undefined1 (*) [16])(lVar14 + 0x30));
      *(undefined1 (*) [16])(this + 0x30) = auVar24;
      auVar23 = maxps(auVar23,*(undefined1 (*) [16])(lVar14 + 0x40));
      *(undefined1 (*) [16])(this + 0x40) = auVar23;
    } while (plVar1 != plVar12);
  }
LAB_0010125c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::AccelN::accels_select(bool) */

void __thiscall embree::AccelN::accels_select(AccelN *this,bool param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(this + 0x170);
  uVar5 = 0;
  if (*(long *)(this + 0x178) == lVar4) {
    return;
  }
  do {
    lVar1 = *(long *)(lVar4 + uVar5 * 8);
    lVar2 = *(long *)(lVar1 + 0x108);
    lVar3 = *(long *)(lVar1 + 0x150);
    if (*(long *)(lVar1 + 0xc0) == 0) {
      if (lVar2 != 0) {
        if (!param_1) goto LAB_00101532;
LAB_00101486:
        *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(lVar1 + 0xf8);
        *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar1 + 0x100);
        *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(lVar1 + 0x108);
        goto joined_r0x0010159b;
      }
      if (lVar3 != 0) {
        if (!param_1) goto LAB_00101554;
        goto LAB_001014ac;
      }
    }
    else {
      if (param_1) {
        *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0xb0);
        *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xb8);
        *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar1 + 0xc0);
        if (lVar2 != 0) goto LAB_00101486;
joined_r0x0010159b:
        if (lVar3 != 0) {
LAB_001014ac:
          *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x150);
          *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x140);
          *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x148);
          lVar4 = *(long *)(this + 0x170);
          goto LAB_001014d0;
        }
      }
      else {
        *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 200);
        *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xd0);
        *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar1 + 0xd8);
        if (lVar2 != 0) {
LAB_00101532:
          *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(lVar1 + 0x120);
          *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(lVar1 + 0x110);
          *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar1 + 0x118);
        }
        if (lVar3 != 0) {
LAB_00101554:
          *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x168);
          *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x158);
          *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x160);
        }
      }
      lVar4 = *(long *)(this + 0x170);
    }
LAB_001014d0:
    uVar5 = uVar5 + 1;
    if ((ulong)(*(long *)(this + 0x178) - lVar4 >> 3) <= uVar5) {
      return;
    }
  } while( true );
}



/* embree::AccelN::accels_deleteGeometry(unsigned long) */

void __thiscall embree::AccelN::accels_deleteGeometry(AccelN *this,ulong param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(this + 0x170);
  if (*(long *)(this + 0x178) != lVar3) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      pcVar2 = *(code **)(*plVar1 + 0x20);
      if (pcVar2 != AccelData::deleteGeometry) {
        (*pcVar2)(plVar1,param_1);
        lVar3 = *(long *)(this + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 0x178) - lVar3 >> 3));
    return;
  }
  return;
}



/* embree::AccelN::accels_clear() */

void __thiscall embree::AccelN::accels_clear(AccelN *this)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(this + 0x170);
  if (*(long *)(this + 0x178) != lVar2) {
    uVar3 = 0;
    do {
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      (**(code **)(**(long **)(lVar2 + lVar1) + 0x28))();
      lVar2 = *(long *)(this + 0x170);
    } while (uVar3 < (ulong)(*(long *)(this + 0x178) - lVar2 >> 3));
    return;
  }
  return;
}



/* embree::AccelN::accels_add(embree::Accel*) */

void __thiscall embree::AccelN::accels_add(AccelN *this,Accel *param_1)

{
  undefined8 *puVar1;
  Accel *local_10 [2];
  
  puVar1 = *(undefined8 **)(this + 0x178);
  if (puVar1 != *(undefined8 **)(this + 0x180)) {
    *puVar1 = param_1;
    *(long *)(this + 0x178) = *(long *)(this + 0x178) + 8;
    return;
  }
  local_10[0] = param_1;
  std::vector<embree::Accel*,std::allocator<embree::Accel*>>::
  _M_realloc_insert<embree::Accel*const&>
            ((vector<embree::Accel*,std::allocator<embree::Accel*>> *)(this + 0x170),puVar1,local_10
            );
  return;
}



/* std::ctype<char>::do_widen(char) const */

undefined4 __thiscall std::ctype<char>::do_widen(ctype<char> *this,char param_1)

{
  undefined3 in_register_00000031;
  
  return CONCAT31(in_register_00000031,param_1);
}



/* embree::AccelData::deleteGeometry(unsigned long) */

void embree::AccelData::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::Accel::immutable() */

void embree::Accel::immutable(void)

{
  return;
}



/* embree::RefCount::refInc() */

RefCount * __thiscall embree::RefCount::refInc(RefCount *this)

{
  LOCK();
  *(long *)(this + 8) = *(long *)(this + 8) + 1;
  UNLOCK();
  return this;
}



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00101759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1}>(unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned
   long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}>(unsigned long,
   embree::AccelN::accels_build()::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned
   long> const&)#1} const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::Accel::Intersectors::print(unsigned long) */

void __thiscall embree::Accel::Intersectors::print(Intersectors *this,ulong param_1)

{
  char *pcVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x18) != 0) {
    uVar4 = 0;
    if (param_1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      } while (param_1 != uVar4);
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"collider  = ",0xc);
    pcVar1 = *(char **)(this + 0x18);
    if (pcVar1 == (char *)0x0) {
      std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                      *(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
    }
    else {
      sVar3 = strlen(pcVar1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar1,sVar3);
    }
    plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x103198);
    if (plVar2 == (long *)0x0) goto LAB_00101d31;
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put(-0x58);
    std::ostream::flush();
  }
  if (*(long *)(this + 0x38) != 0) {
    uVar4 = 0;
    if (param_1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      } while (param_1 != uVar4);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"intersector1  = ",0x10);
    pcVar1 = *(char **)(this + 0x38);
    if (pcVar1 == (char *)0x0) {
      std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                      *(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
    }
    else {
      sVar3 = strlen(pcVar1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar1,sVar3);
    }
    plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x103198);
    if (plVar2 == (long *)0x0) goto LAB_00101d31;
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put(-0x58);
    std::ostream::flush();
  }
  if (*(long *)(this + 0x50) != 0) {
    uVar4 = 0;
    if (param_1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      } while (param_1 != uVar4);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"intersector4  = ",0x10);
    pcVar1 = *(char **)(this + 0x50);
    if (pcVar1 == (char *)0x0) {
      std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                      *(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
    }
    else {
      sVar3 = strlen(pcVar1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar1,sVar3);
    }
    plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x103198);
    if (plVar2 == (long *)0x0) goto LAB_00101d31;
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put(-0x58);
    std::ostream::flush();
  }
  if (*(long *)(this + 0x98) != 0) {
    uVar4 = 0;
    if (param_1 != 0) {
      do {
        uVar4 = uVar4 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      } while (param_1 != uVar4);
    }
    std::__ostream_insert<char,std::char_traits<char>>
              ((ostream *)&std::cout,"intersector8  = ",0x10);
    pcVar1 = *(char **)(this + 0x98);
    if (pcVar1 == (char *)0x0) {
      std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                      *(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
    }
    else {
      sVar3 = strlen(pcVar1);
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar1,sVar3);
    }
    plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x103198);
    if (plVar2 == (long *)0x0) goto LAB_00101d31;
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put(-0x58);
    std::ostream::flush();
  }
  if (*(long *)(this + 0xe0) == 0) {
    return;
  }
  uVar4 = 0;
  if (param_1 != 0) {
    do {
      uVar4 = uVar4 + 1;
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
    } while (param_1 != uVar4);
  }
  std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"intersector16 = ",0x10);
  pcVar1 = *(char **)(this + 0xe0);
  if (pcVar1 == (char *)0x0) {
    std::ios::clear((long)&std::cout + *(long *)(std::cout + -0x18),
                    *(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
  }
  else {
    sVar3 = strlen(pcVar1);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar1,sVar3);
  }
  plVar2 = *(long **)(*(long *)(std::cout + -0x18) + 0x103198);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar2 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar2 + 0x30))(plVar2,10);
      }
    }
    std::ostream::put(-0x58);
    std::ostream::flush();
    return;
  }
LAB_00101d31:
  std::__throw_bad_cast();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* void std::vector<embree::Accel*, std::allocator<embree::Accel*>
   >::_M_realloc_insert<embree::Accel* const&>(__gnu_cxx::__normal_iterator<embree::Accel**,
   std::vector<embree::Accel*, std::allocator<embree::Accel*> > >, embree::Accel* const&) */

void __thiscall
std::vector<embree::Accel*,std::allocator<embree::Accel*>>::_M_realloc_insert<embree::Accel*const&>
          (vector<embree::Accel*,std::allocator<embree::Accel*>> *this,void *param_2,
          undefined8 *param_3)

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
    if (0xfffffffffffffffe < uVar1) goto LAB_00101e90;
    uVar4 = 0xfffffffffffffff;
    if (uVar1 + 1 < 0x1000000000000000) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar4 << 3;
  }
  else {
    uVar4 = uVar1 * 2;
    if (uVar4 < uVar1) {
LAB_00101e90:
      uVar4 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar4 == 0) {
        lVar3 = 0;
        __dest = (void *)0x0;
        goto LAB_00101e19;
      }
      if (0xfffffffffffffff < uVar4) {
        uVar4 = 0xfffffffffffffff;
      }
      uVar4 = uVar4 * 8;
    }
  }
  __dest = operator_new(uVar4);
  lVar3 = uVar4 + (long)__dest;
LAB_00101e19:
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


