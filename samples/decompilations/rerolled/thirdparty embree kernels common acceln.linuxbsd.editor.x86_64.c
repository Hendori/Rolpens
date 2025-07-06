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
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar1 = *(long *)param_1;
  lVar4 = *(long *)(lVar1 + 0x178);
  lVar5 = *(long *)(lVar1 + 0x170);
  if (lVar4 != lVar5) {
    uVar6 = 0;
    uVar7 = 0;
    do {
      lVar2 = *(long *)(lVar5 + uVar6 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        uVar3 = (**(code **)(lVar2 + 0x88))(lVar2 + 0x58,param_2,param_3);
        lVar4 = *(long *)(lVar1 + 0x178);
        lVar5 = *(long *)(lVar1 + 0x170);
        uVar7 = uVar7 | uVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar4 - lVar5 >> 3));
    return uVar7;
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
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(lVar1 + 0x178);
  lVar4 = *(long *)(lVar1 + 0x170);
  if (lVar3 != lVar4) {
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x78))(lVar2 + 0x58,param_2,param_3);
        lVar3 = *(long *)(lVar1 + 0x178);
        lVar4 = *(long *)(lVar1 + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
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
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)param_2;
  uVar5 = 0;
  lVar3 = *(long *)(lVar1 + 0x178);
  lVar4 = *(long *)(lVar1 + 0x170);
  if (lVar3 != lVar4) {
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x98))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x178);
        lVar4 = *(long *)(lVar1 + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
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
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)param_2;
  uVar5 = 0;
  lVar3 = *(long *)(lVar1 + 0x178);
  lVar4 = *(long *)(lVar1 + 0x170);
  if (lVar3 != lVar4) {
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0xe0))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x178);
        lVar4 = *(long *)(lVar1 + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
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
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)param_2;
  uVar5 = 0;
  lVar3 = *(long *)(lVar1 + 0x178);
  lVar4 = *(long *)(lVar1 + 0x170);
  if (lVar3 != lVar4) {
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) <= __LC0) {
        (**(code **)(lVar2 + 0x128))(param_1,lVar2 + 0x58,param_3,param_4);
        lVar3 = *(long *)(lVar1 + 0x178);
        lVar4 = *(long *)(lVar1 + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
  }
  return;
}



/* embree::AccelN::occluded(embree::Accel::Intersectors*, RTCRay&, embree::RayQueryContext*) */

void embree::AccelN::occluded(Intersectors *param_1,RTCRay *param_2,RayQueryContext *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)param_1;
  lVar3 = *(long *)(lVar1 + 0x178);
  lVar4 = *(long *)(lVar1 + 0x170);
  if (lVar3 != lVar4) {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(lVar4 + uVar5 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        (**(code **)(lVar2 + 0x80))(lVar2 + 0x58,param_2,param_3);
        if (*(float *)(param_2 + 0x20) <= 0.0 && *(float *)(param_2 + 0x20) != 0.0) {
          return;
        }
        lVar3 = *(long *)(lVar1 + 0x178);
        lVar4 = *(long *)(lVar1 + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
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
  long lVar7;
  ulong uVar8;
  
  lVar1 = *(long *)param_2;
  lVar6 = *(long *)(lVar1 + 0x178);
  lVar7 = *(long *)(lVar1 + 0x170);
  if (lVar6 != lVar7) {
    uVar8 = 0;
    do {
      lVar2 = *(long *)(lVar7 + uVar8 * 8);
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
        lVar6 = *(long *)(lVar1 + 0x178);
        lVar7 = *(long *)(lVar1 + 0x170);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(lVar6 - lVar7 >> 3));
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
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar1 = *(long *)param_2;
  lVar6 = *(long *)(lVar1 + 0x178);
  lVar7 = *(long *)(lVar1 + 0x170);
  if (lVar6 != lVar7) {
    uVar8 = 0;
    do {
      lVar2 = *(long *)(lVar7 + uVar8 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        uVar4 = (**(code **)(lVar2 + 0xe8))(param_1,lVar2 + 0x58,param_3,param_4);
                    /* WARNING: Load size is inaccurate */
        auVar9._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x100)) & *param_1;
        auVar9._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x104)) & *(uint *)((long)param_1 + 4);
        auVar9._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x108)) & *(uint *)((long)param_1 + 8);
        auVar9._12_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x10c)) & *(uint *)((long)param_1 + 0xc)
        ;
        auVar3._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x114)) & *(uint *)((long)param_1 + 0x14)
        ;
        auVar3._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x110)) & *(uint *)((long)param_1 + 0x10)
        ;
        auVar3._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x118)) & *(uint *)((long)param_1 + 0x18)
        ;
        auVar3._12_4_ =
             -(uint)(0.0 <= *(float *)(param_3 + 0x11c)) & *(uint *)((long)param_1 + 0x1c);
        iVar5 = movmskps(uVar4,auVar9 | auVar3);
        if (iVar5 == 0) {
          return;
        }
        lVar6 = *(long *)(lVar1 + 0x178);
        lVar7 = *(long *)(lVar1 + 0x170);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (ulong)(lVar6 - lVar7 >> 3));
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
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  lVar1 = *(long *)param_2;
  lVar8 = *(long *)(lVar1 + 0x178);
  lVar9 = *(long *)(lVar1 + 0x170);
  if (lVar8 != lVar9) {
    uVar10 = 0;
    do {
      lVar2 = *(long *)(lVar9 + uVar10 * 8);
      if (*(float *)(lVar2 + 0x10) != _LC1) {
        uVar6 = (**(code **)(lVar2 + 0x130))(param_1,lVar2 + 0x58,param_3,param_4);
                    /* WARNING: Load size is inaccurate */
        auVar11._0_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x200)) & *param_1;
        auVar11._4_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x204)) & *(uint *)((long)param_1 + 4);
        auVar11._8_4_ = -(uint)(0.0 <= *(float *)(param_3 + 0x208)) & *(uint *)((long)param_1 + 8);
        auVar11._12_4_ =
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
        iVar7 = movmskps(uVar6,auVar11 | auVar5 | auVar4 | auVar3);
        if (iVar7 == 0) {
          return;
        }
        lVar8 = *(long *)(lVar1 + 0x178);
        lVar9 = *(long *)(lVar1 + 0x170);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)(lVar8 - lVar9 >> 3));
  }
  return;
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  long lVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  _lambda___1_ *p_Var21;
  undefined7 in_register_00000009;
  Ref *pRVar22;
  ulong uVar23;
  Thread *pTVar24;
  long in_FS_OFFSET;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  Thread *pTStack_98;
  _lambda___1_ *p_Stack_90;
  _lambda___1_ *p_Stack_88;
  undefined *puStack_80;
  TaskGroupContext *local_70;
  undefined8 local_68;
  TaskGroupContext *local_60;
  long local_50;
  Thread *local_48;
  long local_40;
  
  local_68 = CONCAT71(in_register_00000009,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_80 = (undefined *)0x1005b3;
  local_70 = param_2;
  embree::TaskScheduler::startThreads();
  puStack_80 = (undefined *)0x1005bb;
  lVar14 = embree::TaskScheduler::allocThreadIndex();
  puStack_80 = (undefined *)0x1005cd;
  pTVar15 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      puStack_80 = (undefined *)0x100a23;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  *(long *)pTVar15 = lVar14;
  pTVar24 = pTVar15 + 0x40;
  pTVar16 = pTVar24;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar17 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar17;
  } while (pTVar15 + 0x40040 != pTVar17);
  *(undefined8 *)(pTVar15 + 0x40040) = 0;
  *(undefined8 *)(pTVar15 + 0x40080) = 0;
  *(undefined8 *)(pTVar15 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar15 + 0xc0100) = 0;
  *(_lambda___1_ **)(pTVar15 + 0xc0108) = param_1;
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      puStack_80 = (undefined *)0x100a37;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
    if (*(code **)(*(long *)param_1 + 0x18) == RefCount::refDec) {
      LOCK();
      p_Var21 = param_1 + 8;
      *(long *)p_Var21 = *(long *)p_Var21 + -1;
      UNLOCK();
      if (*(long *)p_Var21 == 0) {
        puStack_80 = (undefined *)0x100a04;
        (**(code **)(*(long *)param_1 + 8))(param_1);
      }
    }
    else {
      puStack_80 = (undefined *)0x100a6d;
      (**(code **)(*(long *)param_1 + 0x18))(param_1);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(param_1 + 0x10) + lVar14 * 8) = pTVar15;
  UNLOCK();
  puStack_80 = (undefined *)0x1006c5;
  local_60 = local_70;
  local_48 = pTVar15;
  local_70 = (TaskGroupContext *)embree::TaskScheduler::swapThread(pTVar15);
  if (0xfff < *(ulong *)(pTVar15 + 0x40080)) {

    embree_TaskScheduler_spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
    :
                    /* WARNING: Subroutine does not return */
    puStack_80 = &UNK_00102187;
    abort();
  }
  lVar19 = *(long *)(pTVar15 + 0xc00c0);
  uVar3 = lVar19 + 0x30 + (ulong)(-(int)lVar19 & 0x3f);
  if (0x80000 < uVar3)
  goto 
  embree_TaskScheduler_spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
  ;
  *(ulong *)(pTVar15 + 0xc00c0) = uVar3;
  pTVar16 = pTVar15 + uVar3 + 0x40090;
  uVar9 = *(undefined8 *)local_60;
  uVar10 = *(undefined8 *)(local_60 + 8);
  *(undefined ***)pTVar16 = &PTR_execute_001024a0;
  uVar6 = *(undefined8 *)(local_60 + 0x20);
  uVar11 = *(undefined8 *)(local_60 + 0x10);
  uVar12 = *(undefined8 *)(local_60 + 0x18);
  *(undefined8 *)(pTVar16 + 8) = uVar9;
  *(undefined8 *)(pTVar16 + 0x10) = uVar10;
  *(undefined8 *)(pTVar16 + 0x28) = uVar6;
  *(undefined8 *)(pTVar16 + 0x18) = uVar11;
  *(undefined8 *)(pTVar16 + 0x20) = uVar12;
  lVar18 = *(long *)(pTVar15 + 0x40080) * 0x40;
  lVar7 = *(long *)(pTVar15 + 0xc0100);
  *(undefined4 *)(pTVar15 + lVar18 + 0x44) = 1;
  pTVar15[lVar18 + 0x48] = (Thread)0x1;
  *(Thread **)(pTVar15 + lVar18 + 0x50) = pTVar16;
  *(long *)(pTVar15 + lVar18 + 0x58) = lVar7;
  *(ulong *)(pTVar15 + lVar18 + 0x60) = param_3;
  *(long *)(pTVar15 + lVar18 + 0x68) = lVar19;
  *(undefined8 *)(pTVar15 + lVar18 + 0x70) = local_68;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    UNLOCK();
  }
  LOCK();
  if (*(int *)(pTVar24 + lVar18) == 0) {
    *(undefined4 *)(pTVar24 + lVar18) = 1;
  }
  UNLOCK();
  LOCK();
  *(long *)(pTVar15 + 0x40080) = *(long *)(pTVar15 + 0x40080) + 1;
  UNLOCK();
  if (*(long *)(pTVar15 + 0x40080) - 1U <= *(ulong *)(pTVar15 + 0x40040)) {
    LOCK();
    *(long *)(pTVar15 + 0x40040) = *(long *)(pTVar15 + 0x40080) + -1;
    UNLOCK();
  }
  puStack_80 = (undefined *)0x1007be;
  embree::MutexSys::lock();
  LOCK();
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
  UNLOCK();
  LOCK();
  param_1[0x38] = (_lambda___1_)0x1;
  UNLOCK();
  puStack_80 = (undefined *)0x1007d5;
  embree::ConditionSys::notify_all();
  puStack_80 = (undefined *)0x1007dd;
  embree::MutexSys::unlock();
  local_48 = (Thread *)param_1;
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      puStack_80 = (undefined *)0x100a57;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  pRVar22 = (Ref *)&local_48;
  puStack_80 = (undefined *)0x100812;
  embree::TaskScheduler::addScheduler(pRVar22);
  if (local_48 != (Thread *)0x0) {
    if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
      LOCK();
      p_Var21 = (_lambda___1_ *)(local_48 + 8);
      *(long *)p_Var21 = *(long *)p_Var21 + -1;
      UNLOCK();
      if (*(long *)p_Var21 == 0) {
        puStack_80 = (undefined *)0x100841;
        (**(code **)(*(long *)local_48 + 8))();
      }
    }
    else {
      puStack_80 = (undefined *)0x100a5e;
      (**(code **)(*(long *)local_48 + 0x18))();
    }
  }
  do {
    puStack_80 = (undefined *)0x100855;
    cVar13 = embree::TaskScheduler::TaskQueue::execute_local(pTVar24,(Task *)pTVar15);
  } while (cVar13 != '\0');
  LOCK();
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
  UNLOCK();
  local_48 = (Thread *)param_1;
  if (param_1 != (_lambda___1_ *)0x0) {
    if (*(code **)(*(long *)param_1 + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 1;
      UNLOCK();
    }
    else {
      puStack_80 = (undefined *)0x100a46;
      (**(code **)(*(long *)param_1 + 0x10))(param_1);
    }
  }
  puStack_80 = (undefined *)0x10088f;
  embree::TaskScheduler::removeScheduler(pRVar22);
  if (local_48 != (Thread *)0x0) {
    if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
      LOCK();
      p_Var21 = (_lambda___1_ *)(local_48 + 8);
      *(long *)p_Var21 = *(long *)p_Var21 + -1;
      UNLOCK();
      if (*(long *)p_Var21 == 0) {
        puStack_80 = (undefined *)0x1009f0;
        (**(code **)(*(long *)local_48 + 8))();
      }
    }
    else {
      puStack_80 = (undefined *)0x100a4d;
      (**(code **)(*(long *)local_48 + 0x18))();
    }
  }
  local_48 = (Thread *)0x0;
  LOCK();
  *(undefined8 *)(lVar14 * 8 + *(long *)(param_1 + 0x10)) = 0;
  UNLOCK();
  puStack_80 = (undefined *)0x1008dc;
  embree::TaskScheduler::swapThread((Thread *)local_70);
  pTVar24 = *(Thread **)param_3;
  if (pTVar24 != (Thread *)0x0) {
    puStack_80 = (undefined *)0x1008f1;
    local_48 = pTVar24;
    std::__exception_ptr::exception_ptr::_M_addref();
    pTVar24 = local_48;
  }
  p_Var21 = param_1 + 0x28;
  LOCK();
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  UNLOCK();
  while (*(long *)p_Var21 != 0) {
    puStack_80 = (undefined *)0x10090d;
    embree::yield();
  }
  local_48 = (Thread *)0x0;
  local_50 = *(long *)param_3;
  *(undefined8 *)param_3 = 0;
  if (local_50 != 0) {
    puStack_80 = (undefined *)0x10093d;
    std::__exception_ptr::exception_ptr::_M_release();
    if (local_48 != (Thread *)0x0) {
      puStack_80 = (undefined *)0x10094d;
      std::__exception_ptr::exception_ptr::_M_release();
    }
  }
  if (pTVar24 == (Thread *)0x0) {
    if (pTVar15 == (Thread *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      plVar8 = *(long **)(pTVar15 + 0xc0108);
      if (plVar8 != (long *)0x0) {
        if (*(code **)(*plVar8 + 0x18) == RefCount::refDec) {
          LOCK();
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            puStack_80 = (undefined *)0x100a14;
            (**(code **)(*plVar8 + 8))();
          }
        }
        else {
          puStack_80 = (undefined *)0x100a79;
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        embree::alignedFree(pTVar15);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    puStack_80 = (undefined *)0x100a83;
    __stack_chk_fail();
  }
  puStack_80 = (undefined *)0x100a90;
  local_48 = pTVar24;
  std::__exception_ptr::exception_ptr::_M_addref();
  puStack_80 = (undefined *)0x100a98;
  std::rethrow_exception();
  lStack_a8 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = *(long *)(pRVar22 + 0x10);
  pTStack_98 = pTVar15;
  p_Stack_90 = param_1;
  p_Stack_88 = p_Var21;
  puStack_80 = pTVar24;
  if (*(ulong *)(pRVar22 + 0x18) < (ulong)(*(long *)(pRVar22 + 8) - lVar14)) {
    uVar3 = *(ulong *)(pRVar22 + 0x28);
    uVar23 = (ulong)(*(long *)(pRVar22 + 8) + lVar14) >> 1;
    uStack_d0 = uVar23;
    lStack_c8 = lVar14;
    uStack_c0 = *(ulong *)(pRVar22 + 0x18);
    plStack_b8 = *(long **)(pRVar22 + 0x20);
    uStack_b0 = uVar3;
    lVar19 = embree::TaskScheduler::thread();
    if (lVar19 == 0) {
      p_Var21 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var21,(TaskGroupContext *)&uStack_d0,uVar3,SUB81(uVar23 - lVar14,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar19 + 0x40080))
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      lVar7 = *(long *)(lVar19 + 0xc00c0);
      uVar4 = lVar7 + 0x30 + (ulong)(-(int)lVar7 & 0x3f);
      if (0x80000 < uVar4)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar19 + 0xc00c0) = uVar4;
      puVar5 = (undefined8 *)(lVar19 + 0x40090 + uVar4);
      *puVar5 = &PTR_execute_001024a0;
      puVar5[1] = uStack_d0;
      puVar5[2] = lStack_c8;
      puVar5[5] = uStack_b0;
      puVar5[3] = uStack_c0;
      puVar5[4] = plStack_b8;
      lVar20 = *(long *)(lVar19 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar19 + 0x40 + lVar20);
      lVar18 = *(long *)(lVar19 + 0xc0100);
      *(undefined4 *)(lVar19 + 0x44 + lVar20) = 1;
      *(undefined1 *)(lVar19 + 0x48 + lVar20) = 1;
      lVar20 = lVar20 + lVar19;
      *(undefined8 **)(lVar20 + 0x50) = puVar5;
      *(long *)(lVar20 + 0x58) = lVar18;
      *(ulong *)(lVar20 + 0x60) = uVar3;
      *(long *)(lVar20 + 0x68) = lVar7;
      *(ulong *)(lVar20 + 0x70) = uVar23 - lVar14;
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar19 + 0x40080) = *(long *)(lVar19 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar19 + 0x40080) - 1U <= *(ulong *)(lVar19 + 0x40040)) {
        LOCK();
        *(long *)(lVar19 + 0x40040) = *(long *)(lVar19 + 0x40080) + -1;
        UNLOCK();
      }
    }
    lStack_100 = *(long *)(pRVar22 + 8);
    uStack_e8 = *(undefined8 *)(pRVar22 + 0x20);
    uVar3 = *(ulong *)(pRVar22 + 0x28);
    uStack_f0 = *(undefined8 *)(pRVar22 + 0x18);
    lVar14 = lStack_100 - uVar23;
    uStack_f8 = uVar23;
    uStack_e0 = uVar3;
    lVar19 = embree::TaskScheduler::thread();
    if (lVar19 == 0) {
      p_Var21 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var21,(TaskGroupContext *)&lStack_100,uVar3,SUB81(lVar14,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar19 + 0x40080)) {

        embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
        :
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = *(long *)(lVar19 + 0xc00c0);
      uVar23 = lVar7 + 0x30 + (ulong)(-(int)lVar7 & 0x3f);
      if (0x80000 < uVar23)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar19 + 0xc00c0) = uVar23;
      puVar5 = (undefined8 *)(lVar19 + 0x40090 + uVar23);
      *puVar5 = &PTR_execute_001024a0;
      puVar5[1] = lStack_100;
      puVar5[2] = uStack_f8;
      puVar5[5] = uStack_e0;
      puVar5[3] = uStack_f0;
      puVar5[4] = uStack_e8;
      lVar20 = *(long *)(lVar19 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar19 + 0x40 + lVar20);
      lVar18 = *(long *)(lVar19 + 0xc0100);
      *(undefined4 *)(lVar19 + 0x44 + lVar20) = 1;
      *(undefined1 *)(lVar19 + 0x48 + lVar20) = 1;
      lVar20 = lVar20 + lVar19;
      *(undefined8 **)(lVar20 + 0x50) = puVar5;
      *(long *)(lVar20 + 0x58) = lVar18;
      *(ulong *)(lVar20 + 0x60) = uVar3;
      *(long *)(lVar20 + 0x68) = lVar7;
      *(long *)(lVar20 + 0x70) = lVar14;
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar19 + 0x40080) = *(long *)(lVar19 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar19 + 0x40080) - 1U <= *(ulong *)(lVar19 + 0x40040)) {
        LOCK();
        *(long *)(lVar19 + 0x40040) = *(long *)(lVar19 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (lStack_a8 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else if (lStack_a8 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(**(long **)(pRVar22 + 0x20) + 0x170) + lVar14 * 8) + 0x38))()
    ;
    return;
  }
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
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  _lambda___1_ *p_Var10;
  ulong uVar11;
  long in_FS_OFFSET;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  long *plStack_40;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar9)) {
    uVar4 = *(ulong *)(this + 0x28);
    uVar11 = (ulong)(*(long *)(this + 8) + lVar9) >> 1;
    local_58 = uVar11;
    lStack_50 = lVar9;
    local_48 = *(ulong *)(this + 0x18);
    plStack_40 = *(long **)(this + 0x20);
    local_38 = uVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      p_Var10 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var10,(TaskGroupContext *)&local_58,uVar4,SUB81(uVar11 - lVar9,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080))
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar2 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar2)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar7 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar7 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001024a0;
      puVar3[1] = local_58;
      puVar3[2] = lStack_50;
      puVar3[5] = local_38;
      puVar3[3] = local_48;
      puVar3[4] = plStack_40;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(ulong *)(lVar8 + 0x60) = uVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(ulong *)(lVar8 + 0x70) = uVar11 - lVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_88 = *(long *)(this + 8);
    uStack_70 = *(undefined8 *)(this + 0x20);
    uVar4 = *(ulong *)(this + 0x28);
    local_78 = *(undefined8 *)(this + 0x18);
    lVar9 = local_88 - uVar11;
    uStack_80 = uVar11;
    local_68 = uVar4;
    lVar7 = embree::TaskScheduler::thread();
    if (lVar7 == 0) {
      p_Var10 = (_lambda___1_ *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var10,(TaskGroupContext *)&local_88,uVar4,SUB81(lVar9,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar7 + 0x40080)) {

        embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
        :
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar7 + 0xc00c0);
      uVar11 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar11)
      goto 
      embree_TaskScheduler_ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>_execute
      ;
      *(ulong *)(lVar7 + 0xc00c0) = uVar11;
      puVar3 = (undefined8 *)(lVar7 + 0x40090 + uVar11);
      *puVar3 = &PTR_execute_001024a0;
      puVar3[1] = local_88;
      puVar3[2] = uStack_80;
      puVar3[5] = local_68;
      puVar3[3] = local_78;
      puVar3[4] = uStack_70;
      lVar8 = *(long *)(lVar7 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar7 + 0x40 + lVar8);
      lVar6 = *(long *)(lVar7 + 0xc0100);
      *(undefined4 *)(lVar7 + 0x44 + lVar8) = 1;
      *(undefined1 *)(lVar7 + 0x48 + lVar8) = 1;
      lVar8 = lVar8 + lVar7;
      *(undefined8 **)(lVar8 + 0x50) = puVar3;
      *(long *)(lVar8 + 0x58) = lVar6;
      *(ulong *)(lVar8 + 0x60) = uVar4;
      *(long *)(lVar8 + 0x68) = lVar5;
      *(long *)(lVar8 + 0x70) = lVar9;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar7 + 0x40080) = *(long *)(lVar7 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar7 + 0x40080) - 1U <= *(ulong *)(lVar7 + 0x40040)) {
        LOCK();
        *(long *)(lVar7 + 0x40040) = *(long *)(lVar7 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(*(long *)(**(long **)(this + 0x20) + 0x170) + lVar9 * 8) + 0x38))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::AccelN::AccelN() */

void __thiscall embree::AccelN::AccelN(AccelN *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = _LC7;
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
  *(undefined **)this = &DAT_00102450;
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
  void *pvVar3;
  ulong uVar4;
  
  *(undefined **)this = &DAT_00102450;
  pvVar3 = *(void **)(this + 0x178);
  pvVar2 = *(void **)(this + 0x170);
  if (pvVar3 != pvVar2) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)((long)pvVar2 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        pvVar3 = *(void **)(this + 0x178);
        pvVar2 = *(void **)(this + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)((long)pvVar3 - (long)pvVar2 >> 3));
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
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  
  *(undefined **)this = &DAT_00102450;
  pvVar3 = *(void **)(this + 0x178);
  pvVar2 = *(void **)(this + 0x170);
  if (pvVar3 != pvVar2) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)((long)pvVar2 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        pvVar2 = *(void **)(this + 0x170);
        pvVar3 = *(void **)(this + 0x178);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)((long)pvVar3 - (long)pvVar2 >> 3));
  }
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2,*(long *)(this + 0x180) - (long)pvVar2);
  }
  embree::alignedFree(this);
  return;
}



/* embree::AccelN::accels_add(embree::Accel*) */

void __thiscall embree::AccelN::accels_add(AccelN *this,Accel *param_1)

{
  undefined8 *puVar1;
  undefined8 *__src;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  size_t __n;
  
  puVar1 = *(undefined8 **)(this + 0x178);
  if (puVar1 != *(undefined8 **)(this + 0x180)) {
    *puVar1 = param_1;
    *(long *)(this + 0x178) = *(long *)(this + 0x178) + 8;
    return;
  }
  __src = *(undefined8 **)(this + 0x170);
  __n = (long)puVar1 - (long)__src;
  uVar5 = (long)__n >> 3;
  if (uVar5 == 0xfffffffffffffff) {
    pcVar7 = "vector::_M_realloc_insert";
    std::__throw_length_error("vector::_M_realloc_insert");
    uVar5 = 0;
    lVar6 = *(long *)(pcVar7 + 0x178);
    lVar4 = *(long *)(pcVar7 + 0x170);
    if (lVar6 != lVar4) {
      do {
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar6 = *(long *)(pcVar7 + 0x178);
          lVar4 = *(long *)(pcVar7 + 0x170);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)(lVar6 - lVar4 >> 3));
      if (lVar4 != lVar6) {
        *(long *)(pcVar7 + 0x178) = lVar4;
      }
    }
    return;
  }
  if (puVar1 == __src) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00101210;
    uVar3 = 0xfffffffffffffff;
    if (uVar5 + 1 < 0x1000000000000000) {
      uVar3 = uVar5 + 1;
    }
    uVar3 = uVar3 << 3;
  }
  else {
    uVar3 = uVar5 * 2;
    if (uVar3 < uVar5) {
LAB_00101210:
      uVar3 = 0x7ffffffffffffff8;
    }
    else {
      if (uVar3 == 0) {
        lVar6 = 0;
        __dest = (void *)0x0;
        goto LAB_00101177;
      }
      if (0xfffffffffffffff < uVar3) {
        uVar3 = 0xfffffffffffffff;
      }
      uVar3 = uVar3 * 8;
    }
  }
  __dest = operator_new(uVar3);
  lVar6 = uVar3 + (long)__dest;
LAB_00101177:
  *(Accel **)((long)__dest + __n) = param_1;
  if (0 < (long)__n) {
    memmove(__dest,__src,__n);
  }
  if (__src != (undefined8 *)0x0) {
    operator_delete(__src,*(long *)(this + 0x180) - (long)__src);
  }
  *(void **)(this + 0x170) = __dest;
  *(size_t *)(this + 0x178) = (long)__dest + __n + 8;
  *(long *)(this + 0x180) = lVar6;
  return;
}



/* embree::AccelN::accels_init() */

void __thiscall embree::AccelN::accels_init(AccelN *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = 0;
  lVar3 = *(long *)(this + 0x178);
  lVar2 = *(long *)(this + 0x170);
  if (lVar3 != lVar2) {
    do {
      plVar1 = *(long **)(lVar2 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(this + 0x178);
        lVar2 = *(long *)(this + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar3 - lVar2 >> 3));
    if (lVar2 != lVar3) {
      *(long *)(this + 0x178) = lVar2;
    }
  }
  return;
}



/* embree::AccelN::accels_print(unsigned long) */

void __thiscall embree::AccelN::accels_print(AccelN *this,ulong param_1)

{
  long *plVar1;
  char *pcVar2;
  code *pcVar3;
  ostream *poVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  ostream *poVar8;
  ulong uVar9;
  long lVar10;
  ulong local_48;
  
  if (*(long *)(this + 0x170) == *(long *)(this + 0x178)) {
    return;
  }
  lVar6 = param_1 + 2;
  local_48 = 0;
  while( true ) {
    uVar9 = 0;
    if (param_1 != 0) {
      do {
        uVar9 = uVar9 + 1;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
      } while (param_1 != uVar9);
    }
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"accels[",7);
    poVar4 = std::ostream::_M_insert<unsigned_long>(0x1030c8);
    poVar8 = poVar4;
    std::__ostream_insert<char,std::char_traits<char>>(poVar4,"]",1);
    plVar1 = *(long **)(poVar4 + *(long *)(*(long *)poVar4 + -0x18) + 0xf0);
    if (plVar1 == (long *)0x0) break;
    if ((char)plVar1[7] == '\0') {
      std::ctype<char>::_M_widen_init();
      if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
        (**(code **)(*plVar1 + 0x30))(plVar1,10);
      }
    }
    std::ostream::put((char)poVar4);
    std::ostream::flush();
    lVar7 = *(long *)(*(long *)(this + 0x170) + local_48 * 8);
    if (*(long *)(lVar7 + 0x70) != 0) {
      lVar10 = 0;
      if (param_1 != 0xfffffffffffffffe) {
        do {
          lVar10 = lVar10 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (lVar6 != lVar10);
      }
      std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,"collider  = ",0xc);
      pcVar2 = *(char **)(lVar7 + 0x70);
      if (pcVar2 == (char *)0x0) {
        poVar8 = (ostream *)((long)&std::cout + *(long *)(std::cout + -0x18));
        std::ios::clear(poVar8,*(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
      }
      else {
        sVar5 = strlen(pcVar2);
        poVar8 = (ostream *)&std::cout;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1031b8);
      if (plVar1 == (long *)0x0) break;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
    }
    if (*(long *)(lVar7 + 0x90) != 0) {
      lVar10 = 0;
      if (param_1 != 0xfffffffffffffffe) {
        do {
          lVar10 = lVar10 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (lVar6 != lVar10);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector1  = ",0x10);
      pcVar2 = *(char **)(lVar7 + 0x90);
      if (pcVar2 == (char *)0x0) {
        poVar8 = (ostream *)((long)&std::cout + *(long *)(std::cout + -0x18));
        std::ios::clear(poVar8,*(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
      }
      else {
        sVar5 = strlen(pcVar2);
        poVar8 = (ostream *)&std::cout;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1031b8);
      if (plVar1 == (long *)0x0) break;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
    }
    if (*(long *)(lVar7 + 0xa8) != 0) {
      lVar10 = 0;
      if (param_1 != 0xfffffffffffffffe) {
        do {
          lVar10 = lVar10 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (lVar6 != lVar10);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector4  = ",0x10);
      pcVar2 = *(char **)(lVar7 + 0xa8);
      if (pcVar2 == (char *)0x0) {
        poVar8 = (ostream *)((long)&std::cout + *(long *)(std::cout + -0x18));
        std::ios::clear(poVar8,*(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
      }
      else {
        sVar5 = strlen(pcVar2);
        poVar8 = (ostream *)&std::cout;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1031b8);
      if (plVar1 == (long *)0x0) break;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
    }
    if (*(long *)(lVar7 + 0xf0) != 0) {
      lVar10 = 0;
      if (param_1 != 0xfffffffffffffffe) {
        do {
          lVar10 = lVar10 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (lVar6 != lVar10);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector8  = ",0x10);
      pcVar2 = *(char **)(lVar7 + 0xf0);
      if (pcVar2 == (char *)0x0) {
        poVar8 = (ostream *)((long)&std::cout + *(long *)(std::cout + -0x18));
        std::ios::clear(poVar8,*(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
      }
      else {
        sVar5 = strlen(pcVar2);
        poVar8 = (ostream *)&std::cout;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1031b8);
      if (plVar1 == (long *)0x0) break;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
    }
    if (*(long *)(lVar7 + 0x138) != 0) {
      lVar10 = 0;
      if (param_1 != 0xfffffffffffffffe) {
        do {
          lVar10 = lVar10 + 1;
          std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout," ",1);
        } while (lVar6 != lVar10);
      }
      std::__ostream_insert<char,std::char_traits<char>>
                ((ostream *)&std::cout,"intersector16 = ",0x10);
      pcVar2 = *(char **)(lVar7 + 0x138);
      if (pcVar2 == (char *)0x0) {
        poVar8 = (ostream *)((long)&std::cout + *(long *)(std::cout + -0x18));
        std::ios::clear(poVar8,*(uint *)(std::ostream::flush + *(long *)(std::cout + -0x18)) | 1);
      }
      else {
        sVar5 = strlen(pcVar2);
        poVar8 = (ostream *)&std::cout;
        std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cout,pcVar2,sVar5);
      }
      plVar1 = *(long **)(*(long *)(std::cout + -0x18) + 0x1031b8);
      if (plVar1 == (long *)0x0) break;
      if ((char)plVar1[7] == '\0') {
        std::ctype<char>::_M_widen_init();
        if (*(code **)(*plVar1 + 0x30) != std::ctype<char>::do_widen) {
          (**(code **)(*plVar1 + 0x30))(plVar1,10);
        }
      }
      std::ostream::put(-0x38);
      std::ostream::flush();
    }
    local_48 = local_48 + 1;
    if ((ulong)(*(long *)(this + 0x178) - *(long *)(this + 0x170) >> 3) <= local_48) {
      return;
    }
  }
  std::__throw_bad_cast();
  lVar6 = *(long *)(poVar8 + 0x178);
  uVar9 = 0;
  lVar7 = *(long *)(poVar8 + 0x170);
  if (lVar6 != lVar7) {
    do {
      pcVar3 = *(code **)(**(long **)(lVar7 + uVar9 * 8) + 0x30);
      if (pcVar3 != Accel::immutable) {
        (*pcVar3)();
        lVar6 = *(long *)(poVar8 + 0x178);
        lVar7 = *(long *)(poVar8 + 0x170);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(lVar6 - lVar7 >> 3));
  }
  return;
}



/* embree::AccelN::accels_immutable() */

void __thiscall embree::AccelN::accels_immutable(AccelN *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x178);
  uVar4 = 0;
  lVar3 = *(long *)(this + 0x170);
  if (lVar2 != lVar3) {
    do {
      pcVar1 = *(code **)(**(long **)(lVar3 + uVar4 * 8) + 0x30);
      if (pcVar1 != Accel::immutable) {
        (*pcVar1)();
        lVar2 = *(long *)(this + 0x178);
        lVar3 = *(long *)(this + 0x170);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar2 - lVar3 >> 3));
  }
  return;
}



/* embree::AccelN::accels_build() */

void __thiscall embree::AccelN::accels_build(AccelN *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  _lambda___1_ *p_Var17;
  ulong uVar18;
  undefined8 *puVar19;
  AccelN *pAVar20;
  ulong uVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  AccelN *local_68;
  long local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *puStack_40;
  long *local_38;
  long local_30;
  
  bVar23 = 0;
  plVar14 = *(long **)(this + 0x170);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar12 = *(long *)(this + 0x178) - (long)plVar14 >> 3;
  local_68 = this;
  if (lVar12 == 0) {
LAB_001019e0:
    *(AccelN **)(this + 0x58) = this;
    uVar21 = 0;
    bVar5 = true;
    *(code **)(this + 0x78) = intersect;
    *(code **)(this + 0x80) = occluded;
    *(undefined8 *)(this + 0x88) = 0x100000;
    *(char **)(this + 0x90) = "AccelN::intersector1";
    *(code **)(this + 0x98) = intersect4;
    *(code **)(this + 0xa0) = occluded4;
    *(undefined4 *)(this + 0x50) = 1;
    *(char **)(this + 0xa8) = "AccelN::intersector4";
LAB_00101a52:
    pcVar22 = "AccelN::intersector8";
LAB_00101a59:
    uVar10 = _LC1;
    *(code **)(this + 0xe0) = intersect8;
    uVar11 = _LC7;
    *(code **)(this + 0xe8) = occluded8;
    pcVar13 = "AccelN::intersector16";
    auVar24._0_8_ = CONCAT44(uVar10,uVar10);
    auVar24._8_4_ = uVar10;
    auVar24._12_4_ = uVar10;
    if (!bVar5) {
      pcVar13 = (char *)0x0;
    }
    auVar25._0_8_ = CONCAT44(uVar11,uVar11);
    auVar25._8_4_ = uVar11;
    auVar25._12_4_ = uVar11;
    *(char **)(this + 0xf0) = pcVar22;
    *(code **)(this + 0x128) = intersect16;
    *(code **)(this + 0x130) = occluded16;
    *(char **)(this + 0x138) = pcVar13;
    *(undefined1 (*) [16])(this + 0x10) = auVar24;
    *(undefined1 (*) [16])(this + 0x20) = auVar25;
    *(undefined1 (*) [16])(this + 0x30) = auVar24;
    *(undefined1 (*) [16])(this + 0x40) = auVar25;
    if (uVar21 != 0) {
      plVar1 = plVar14 + uVar21;
      auVar27._8_4_ = uVar11;
      auVar27._0_8_ = auVar25._0_8_;
      auVar27._12_4_ = uVar11;
      auVar26._8_4_ = uVar10;
      auVar26._0_8_ = auVar24._0_8_;
      auVar26._12_4_ = uVar10;
      do {
        lVar12 = *plVar14;
        plVar14 = plVar14 + 1;
        auVar24 = minps(auVar24,*(undefined1 (*) [16])(lVar12 + 0x10));
        *(undefined1 (*) [16])(this + 0x10) = auVar24;
        auVar27 = maxps(auVar27,*(undefined1 (*) [16])(lVar12 + 0x20));
        *(undefined1 (*) [16])(this + 0x20) = auVar27;
        auVar26 = minps(auVar26,*(undefined1 (*) [16])(lVar12 + 0x30));
        *(undefined1 (*) [16])(this + 0x30) = auVar26;
        auVar25 = maxps(auVar25,*(undefined1 (*) [16])(lVar12 + 0x40));
        *(undefined1 (*) [16])(this + 0x40) = auVar25;
      } while (plVar1 != plVar14);
    }
  }
  else {
    local_60 = 0;
    uStack_50 = 0;
    local_48 = 1;
    local_58 = lVar12;
    puStack_40 = (undefined1 *)&local_68;
    local_38 = &local_60;
    lVar15 = embree::TaskScheduler::thread();
    if (lVar15 == 0) {
      p_Var17 = (_lambda___1_ *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (p_Var17,(TaskGroupContext *)&local_58,(ulong)&local_60,SUB81(lVar12,0));
    }
    else {
      if (0xfff < *(ulong *)(lVar15 + 0x40080)) {
embree_AccelN_accels_build:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(lVar15 + 0xc00c0);
      uVar21 = lVar3 + 0x30 + (ulong)(-(int)lVar3 & 0x3f);
      if (0x80000 < uVar21) goto embree_AccelN_accels_build;
      *(ulong *)(lVar15 + 0xc00c0) = uVar21;
      puVar19 = (undefined8 *)(lVar15 + 0x40090 + uVar21);
      *puVar19 = &PTR_execute_001024a0;
      puVar19[1] = local_58;
      puVar19[2] = uStack_50;
      puVar19[3] = local_48;
      puVar19[4] = puStack_40;
      puVar19[5] = local_38;
      lVar16 = *(long *)(lVar15 + 0x40080) * 0x40;
      piVar2 = (int *)(lVar15 + 0x40 + lVar16);
      lVar4 = *(long *)(lVar15 + 0xc0100);
      *(undefined4 *)(lVar15 + 0x44 + lVar16) = 1;
      *(undefined1 *)(lVar15 + 0x48 + lVar16) = 1;
      lVar16 = lVar16 + lVar15;
      *(undefined8 **)(lVar16 + 0x50) = puVar19;
      *(long *)(lVar16 + 0x58) = lVar4;
      *(long **)(lVar16 + 0x60) = &local_60;
      *(long *)(lVar16 + 0x68) = lVar3;
      *(long *)(lVar16 + 0x70) = lVar12;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar2 == 0) {
        *piVar2 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar15 + 0x40080) = *(long *)(lVar15 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar15 + 0x40080) - 1U <= *(ulong *)(lVar15 + 0x40040)) {
        LOCK();
        *(long *)(lVar15 + 0x40040) = *(long *)(lVar15 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_60 != 0) {
      local_58 = local_60;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_58);
      goto LAB_00101e32;
    }
    plVar14 = *(long **)(this + 0x170);
    lVar12 = *(long *)(this + 0x178) - (long)plVar14;
    uVar21 = lVar12 >> 3;
    if (lVar12 == 0) goto LAB_001019e0;
    uVar18 = 0;
    bVar5 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    do {
      lVar15 = plVar14[uVar18];
      bVar7 = (bool)(bVar7 & *(long *)(lVar15 + 0x90) != 0);
      bVar8 = (bool)(bVar8 & *(long *)(lVar15 + 0xa8) != 0);
      bVar9 = (bool)(bVar9 & *(long *)(lVar15 + 0xf0) != 0);
      uVar18 = uVar18 + 1;
      bVar5 = (bool)(bVar5 & *(long *)(lVar15 + 0x138) != 0);
    } while (uVar18 < uVar21);
    if (lVar12 != 8) {
      *(undefined4 *)(this + 0x50) = 1;
      pcVar22 = "AccelN::intersector1";
      if (!bVar7) {
        pcVar22 = (char *)0x0;
      }
      *(AccelN **)(this + 0x58) = this;
      *(code **)(this + 0x78) = intersect;
      *(char **)(this + 0x90) = pcVar22;
      pcVar22 = "AccelN::intersector4";
      if (!bVar8) {
        pcVar22 = (char *)0x0;
      }
      *(code **)(this + 0x80) = occluded;
      *(code **)(this + 0x98) = intersect4;
      *(undefined8 *)(this + 0x88) = 0x100000;
      *(code **)(this + 0xa0) = occluded4;
      *(char **)(this + 0xa8) = pcVar22;
      pcVar22 = (char *)0x0;
      if (bVar9) goto LAB_00101a52;
      goto LAB_00101a59;
    }
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(*plVar14 + 0x50);
    lVar12 = *plVar14;
    uVar6 = *(undefined8 *)(lVar12 + 0x18);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    *(undefined8 *)(this + 0x18) = uVar6;
    uVar6 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(lVar12 + 0x20);
    *(undefined8 *)(this + 0x28) = uVar6;
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(lVar12 + 0x30);
    *(undefined8 *)(this + 0x38) = uVar6;
    uVar6 = *(undefined8 *)(lVar12 + 0x48);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(lVar12 + 0x40);
    *(undefined8 *)(this + 0x48) = uVar6;
    puVar19 = (undefined8 *)(*plVar14 + 0x58);
    pAVar20 = this + 0x58;
    for (lVar12 = 0x23; lVar12 != 0; lVar12 = lVar12 + -1) {
      *(undefined8 *)pAVar20 = *puVar19;
      puVar19 = puVar19 + (ulong)bVar23 * -2 + 1;
      pAVar20 = pAVar20 + (ulong)bVar23 * -0x10 + 8;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00101e32:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::AccelN::accels_select(bool) */

void __thiscall embree::AccelN::accels_select(AccelN *this,bool param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(this + 0x178);
  lVar4 = *(long *)(this + 0x170);
  if (lVar5 != lVar4) {
    uVar3 = 0;
    if (!param_1) {
      do {
        lVar1 = *(long *)(lVar4 + uVar3 * 8);
        lVar2 = *(long *)(lVar1 + 0x150);
        if (*(long *)(lVar1 + 0xc0) == 0) {
          if (*(long *)(lVar1 + 0x108) == 0) {
            if (lVar2 == 0) goto LAB_00101ee7;
          }
          else {
LAB_00101e96:
            *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(lVar1 + 0x110);
            *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar1 + 0x118);
            *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(lVar1 + 0x120);
            if (lVar2 == 0) goto LAB_00102001;
          }
LAB_00101ebc:
          *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x168);
          *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x158);
          *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x160);
          lVar5 = *(long *)(this + 0x178);
          lVar4 = *(long *)(this + 0x170);
        }
        else {
          *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 200);
          *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xd0);
          *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar1 + 0xd8);
          if (*(long *)(lVar1 + 0x108) != 0) goto LAB_00101e96;
          if (lVar2 != 0) goto LAB_00101ebc;
LAB_00102001:
          lVar5 = *(long *)(this + 0x178);
          lVar4 = *(long *)(this + 0x170);
        }
LAB_00101ee7:
        uVar3 = uVar3 + 1;
        if ((ulong)(lVar5 - lVar4 >> 3) <= uVar3) {
          return;
        }
      } while( true );
    }
    do {
      lVar1 = *(long *)(lVar4 + uVar3 * 8);
      lVar2 = *(long *)(lVar1 + 0x150);
      if (*(long *)(lVar1 + 0xc0) == 0) {
        if (*(long *)(lVar1 + 0x108) == 0) {
          if (lVar2 == 0) goto LAB_00101fa7;
        }
        else {
LAB_00101f56:
          *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(lVar1 + 0xf8);
          *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(lVar1 + 0x100);
          *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(lVar1 + 0x108);
          if (lVar2 == 0) goto LAB_00102021;
        }
LAB_00101f7c:
        *(undefined8 *)(lVar1 + 0x138) = *(undefined8 *)(lVar1 + 0x150);
        *(undefined8 *)(lVar1 + 0x128) = *(undefined8 *)(lVar1 + 0x140);
        *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar1 + 0x148);
        lVar5 = *(long *)(this + 0x178);
        lVar4 = *(long *)(this + 0x170);
      }
      else {
        *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0xb0);
        *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(lVar1 + 0xb8);
        *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar1 + 0xc0);
        if (*(long *)(lVar1 + 0x108) != 0) goto LAB_00101f56;
        if (lVar2 != 0) goto LAB_00101f7c;
LAB_00102021:
        lVar5 = *(long *)(this + 0x178);
        lVar4 = *(long *)(this + 0x170);
      }
LAB_00101fa7:
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar5 - lVar4 >> 3));
  }
  return;
}



/* embree::AccelN::accels_deleteGeometry(unsigned long) */

void __thiscall embree::AccelN::accels_deleteGeometry(AccelN *this,ulong param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = 0;
  lVar3 = *(long *)(this + 0x178);
  lVar4 = *(long *)(this + 0x170);
  if (lVar3 != lVar4) {
    do {
      plVar1 = *(long **)(lVar4 + uVar5 * 8);
      pcVar2 = *(code **)(*plVar1 + 0x20);
      if (pcVar2 != AccelData::deleteGeometry) {
        (*pcVar2)(plVar1,param_1);
        lVar3 = *(long *)(this + 0x178);
        lVar4 = *(long *)(this + 0x170);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(lVar3 - lVar4 >> 3));
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
                    /* WARNING: Could not recover jumptable at 0x00102179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) [clone .constprop.0] [clone .cold]
    */

void embree::TaskScheduler::
     spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_>(unsigned_long,embree::AccelN::accels_build()::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
               (_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,bool param_4)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1}>(unsigned long, unsigned long, unsigned
   long, embree::parallel_for<unsigned long, embree::AccelN::accels_build()::{lambda(unsigned
   long)#1}>(unsigned long, embree::AccelN::accels_build()::{lambda(unsigned long)#1}
   const&)::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() [clone .cold] */

void embree::TaskScheduler::
     ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}>(unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}>(unsigned_long,embree::AccelN::accels_build()::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
     ::execute(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::AccelN::accels_build() [clone .cold] */

void embree::AccelN::accels_build(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



