
/* JPH::BroadPhaseQuadTree::~BroadPhaseQuadTree() */

void __thiscall JPH::BroadPhaseQuadTree::~BroadPhaseQuadTree(BroadPhaseQuadTree *this)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  QuadTree *pQVar4;
  QuadTree *this_00;
  long lVar5;
  long lVar6;
  
  *(undefined ***)this = &PTR__BroadPhaseQuadTree_00102838;
  pQVar4 = *(QuadTree **)(this + 200);
  if (pQVar4 != (QuadTree *)0x0) {
    this_00 = pQVar4 + *(long *)(pQVar4 + -8) * 0x80;
    if (pQVar4 != this_00) {
      do {
        this_00 = this_00 + -0x80;
        JPH::QuadTree::~QuadTree(this_00);
      } while (*(QuadTree **)(this + 200) != this_00);
    }
    (*AlignedFree)(this_00 + -0x40);
  }
  lVar6 = *(long *)(this + 0x58);
  if (lVar6 != 0) {
    uVar2 = *(uint *)(this + 0x50);
    uVar3 = *(uint *)(this + 0x40);
    if (uVar3 <= uVar2) {
      lVar5 = 0;
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        (*AlignedFree)(*(undefined8 *)(lVar6 + lVar1));
        lVar6 = *(long *)(this + 0x58);
      } while ((uint)lVar5 < uVar2 / uVar3);
    }
    (*Free)();
  }
  if (*(long *)(this + 0x28) != 0) {
    *(undefined8 *)(this + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x001000aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*Free)();
    return;
  }
  return;
}



/* JPH::BroadPhaseQuadTree::~BroadPhaseQuadTree() */

void __thiscall JPH::BroadPhaseQuadTree::~BroadPhaseQuadTree(BroadPhaseQuadTree *this)

{
  ~BroadPhaseQuadTree(this);
                    /* WARNING: Could not recover jumptable at 0x001000d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*AlignedFree)(this);
  return;
}



/* JPH::BroadPhaseQuadTree::UnlockModifications() */

void __thiscall JPH::BroadPhaseQuadTree::UnlockModifications(BroadPhaseQuadTree *this)

{
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0xd8));
  return;
}



/* JPH::BroadPhaseQuadTree::UpdatePrepare() */

void JPH::BroadPhaseQuadTree::UpdatePrepare(void)

{
  Array *pAVar1;
  uint uVar2;
  long in_RSI;
  undefined8 *in_RDI;
  Array *pAVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(in_RSI + 0xd0);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      pAVar3 = (Array *)((ulong)*(uint *)(in_RSI + 0x184) * 0x80 + *(long *)(in_RSI + 200));
      *(uint *)(in_RSI + 0x184) = (*(uint *)(in_RSI + 0x184) + 1) % uVar2;
      if (((*(int *)(pAVar3 + 0x40) != 0) && (pAVar3[0x50] != (Array)0x0)) &&
         (*(int *)(pAVar3 + 0x10) == 0)) {
        pAVar1 = *(Array **)(in_RSI + 8);
        *in_RDI = pAVar3;
        JPH::QuadTree::UpdatePrepare
                  (pAVar3,pAVar1,(UpdateState *)(in_RSI + 0x18),(bool)((char)in_RDI + '\b'));
        return;
      }
      uVar2 = *(uint *)(in_RSI + 0xd0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  *in_RDI = 0;
  return;
}



/* JPH::BroadPhaseQuadTree::UpdateFinalize(JPH::BroadPhase::UpdateState const&) */

void __thiscall
JPH::BroadPhaseQuadTree::UpdateFinalize(BroadPhaseQuadTree *this,UpdateState *param_1)

{
  if (*(Array **)param_1 != (Array *)0x0) {
    JPH::QuadTree::UpdateFinalize
              (*(Array **)param_1,*(Array **)(this + 8),(UpdateState *)(this + 0x18));
    LOCK();
    *(uint *)(this + 0x180) = *(uint *)(this + 0x180) ^ 1;
    UNLOCK();
  }
  return;
}



/* JPH::BroadPhaseQuadTree::AddBodiesAbort(JPH::BodyID*, int, void*) */

void __thiscall
JPH::BroadPhaseQuadTree::AddBodiesAbort
          (BroadPhaseQuadTree *this,BodyID *param_1,int param_2,void *param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  
  if (*(int *)(this + 0xd0) != 0) {
    uVar4 = 0;
    do {
      plVar3 = (long *)((ulong)(uVar4 & 0xff) * 0x40 + (long)param_3);
      if (*plVar3 != 0) {
        JPH::QuadTree::AddBodiesAbort
                  ((Array *)((ulong)(uVar4 & 0xff) * 0x80 + *(long *)(this + 200)),
                   (AddState *)(this + 0x18));
        puVar2 = (uint *)*plVar3;
        if (puVar2 < (uint *)plVar3[1]) {
          do {
            puVar1 = (undefined1 *)(*(long *)(this + 0x28) + (ulong)(*puVar2 & 0x7fffff) * 8);
            LOCK();
            *puVar1 = 0xff;
            UNLOCK();
            LOCK();
            *(undefined2 *)(puVar1 + 2) = 0xffff;
            UNLOCK();
            puVar2 = puVar2 + 1;
          } while (puVar2 < (uint *)plVar3[1]);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < *(uint *)(this + 0xd0));
  }
  if (param_3 == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00100290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)(param_3);
  return;
}



/* JPH::BroadPhaseQuadTree::CastAABoxNoLock(JPH::AABoxCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseQuadTree::CastAABoxNoLock
          (BroadPhaseQuadTree *this,AABoxCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  char cVar1;
  AABoxCast *pAVar2;
  uint uVar3;
  
  if (*(int *)(this + 0xd0) != 0) {
    uVar3 = 0;
    do {
      pAVar2 = (AABoxCast *)((ulong)(uVar3 & 0xff) * 0x80 + *(long *)(this + 200));
      if (((*(int *)(pAVar2 + 0x40) != 0) &&
          (cVar1 = (**(code **)(*(long *)param_3 + 0x10))(param_3,uVar3), cVar1 != '\0')) &&
         (JPH::QuadTree::CastAABox
                    (pAVar2,(CollisionCollector *)param_1,(ObjectLayerFilter *)param_2,
                     (Array *)param_4), *(float *)(param_2 + 8) <= _LC0)) {
        return;
      }
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xff) < *(uint *)(this + 0xd0));
  }
  return;
}



/* JPH::BroadPhaseQuadTree::LockModifications() */

void __thiscall JPH::BroadPhaseQuadTree::LockModifications(BroadPhaseQuadTree *this)

{
  int iVar1;
  
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0xd8));
  if (iVar1 != 0x23) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* JPH::BroadPhaseQuadTree::FrameSync() */

void __thiscall JPH::BroadPhaseQuadTree::FrameSync(BroadPhaseQuadTree *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 0x180);
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + (ulong)(uVar1 ^ 1) * 0x38 + 0x110));
  if (iVar2 != 0x23) {
    uVar3 = 0;
    if (*(int *)(this + 0xd0) != 0) {
      do {
        uVar3 = uVar3 + 1;
        JPH::QuadTree::DiscardOldTree();
      } while ((uVar3 & 0xff) < *(uint *)(this + 0xd0));
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + (ulong)(uVar1 ^ 1) * 0x38 + 0x110));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* JPH::BroadPhaseQuadTree::Optimize() */

void __thiscall JPH::BroadPhaseQuadTree::Optimize(BroadPhaseQuadTree *this)

{
  long lVar1;
  int iVar2;
  Array *pAVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FrameSync(this);
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(this + 0xd8));
  if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar4 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    do {
      while (pAVar3 = (Array *)(lVar4 * 0x80 + *(long *)(this + 200)), *(int *)(pAVar3 + 0x40) == 0)
      {
        lVar4 = lVar4 + 1;
        if (*(uint *)(this + 0xd0) <= (uint)lVar4) goto LAB_001004d3;
      }
      lVar4 = lVar4 + 1;
      JPH::QuadTree::UpdatePrepare(pAVar3,*(Array **)(this + 8),(UpdateState *)(this + 0x18),true);
      JPH::QuadTree::UpdateFinalize(pAVar3,*(Array **)(this + 8),(UpdateState *)(this + 0x18));
    } while ((uint)lVar4 < *(uint *)(this + 0xd0));
  }
LAB_001004d3:
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0xd8));
  *(undefined4 *)(this + 0x184) = 0;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JPH::BroadPhaseQuadTree::Init(JPH::BodyManager*, JPH::BroadPhaseLayerInterface const&) */

void __thiscall
JPH::BroadPhaseQuadTree::Init
          (BroadPhaseQuadTree *this,BodyManager *param_1,BroadPhaseLayerInterface *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  
  JPH::BroadPhase::Init((BodyManager *)this,(BroadPhaseLayerInterface *)param_1);
  lVar6 = *(long *)param_2;
  *(BroadPhaseLayerInterface **)(this + 0xc0) = param_2;
  uVar3 = (**(code **)(lVar6 + 0x10))(param_2);
  uVar16 = (ulong)*(uint *)(param_1 + 8);
  *(undefined4 *)(this + 0xd0) = uVar3;
  *(ulong *)(this + 0x10) = uVar16;
  if (uVar16 <= *(ulong *)(this + 0x20)) {
    puVar7 = *(undefined1 **)(this + 0x28);
    goto LAB_00100572;
  }
  puVar7 = (undefined1 *)(*Allocate)(uVar16 * 8);
  puVar4 = *(undefined1 **)(this + 0x28);
  if (puVar4 != (undefined1 *)0x0) {
    lVar6 = *(long *)(this + 0x18);
    if (puVar7 < puVar4) {
      puVar9 = puVar7;
      if (puVar7 < puVar7 + lVar6 * 8) {
        do {
          puVar13 = puVar9 + 8;
          *puVar9 = *puVar4;
          *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar4 + 2);
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar4 + 4);
          puVar9 = puVar13;
          puVar4 = puVar4 + 8;
        } while (puVar13 < puVar7 + lVar6 * 8);
LAB_0010072a:
        puVar4 = *(undefined1 **)(this + 0x28);
      }
    }
    else {
      uVar8 = lVar6 * 8 - 8;
      puVar9 = puVar7 + uVar8;
      puVar13 = puVar4 + uVar8;
      if (!CARRY8(uVar8,(ulong)puVar7)) {
        do {
          puVar4 = puVar9 + -8;
          *puVar9 = *puVar13;
          *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar13 + 2);
          *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar13 + 4);
          puVar9 = puVar4;
          puVar13 = puVar13 + -8;
        } while (puVar7 <= puVar4);
        goto LAB_0010072a;
      }
    }
    (*Free)(puVar4);
  }
  *(undefined1 **)(this + 0x28) = puVar7;
  *(ulong *)(this + 0x20) = uVar16;
LAB_00100572:
  for (puVar4 = puVar7 + *(long *)(this + 0x18) * 8; puVar4 < puVar7 + uVar16 * 8;
      puVar4 = puVar4 + 8) {
    *puVar4 = 0xff;
    *(undefined2 *)(puVar4 + 2) = 0xffff;
    *(undefined4 *)(puVar4 + 4) = 0xffffffff;
  }
  *(ulong *)(this + 0x18) = uVar16;
  *(undefined4 *)(this + 0x48) = 0xff;
  uVar10 = *(int *)(this + 0x10) + 1U >> 1;
  uVar10 = ((uVar10 + 2) / 3 + uVar10) * 2 + 0xff >> 8;
  *(undefined8 *)(this + 0x40) = _LC1;
  *(uint *)(this + 0x4c) = uVar10;
  uVar5 = (*Allocate)(uVar10 * 8);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar5;
  LOCK();
  *(undefined4 *)(this + 0xb8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(this + 0xa8) = 1;
  UNLOCK();
  LOCK();
  *(undefined8 *)(this + 0xb0) = 0xffffffff;
  UNLOCK();
  uVar16 = (ulong)*(uint *)(this + 0xd0);
  lVar14 = uVar16 * 0x80 + 0x40;
  lVar6 = (*AlignedAllocate)(lVar14,0x40);
  *(ulong *)(lVar6 + 0x38) = uVar16;
  uVar2 = _UNK_00102928;
  uVar1 = __LC3;
  uVar5 = _LC8;
  puVar15 = (undefined8 *)(lVar6 + 0x40);
  if (uVar16 != 0) {
    puVar11 = puVar15;
    do {
      *puVar11 = 0;
      puVar12 = puVar11 + 0x10;
      puVar11[1] = uVar5;
      *(undefined4 *)(puVar11 + 2) = 0;
      puVar11[8] = uVar1;
      puVar11[9] = uVar2;
      *(undefined1 *)(puVar11 + 10) = 0;
      puVar11 = puVar12;
    } while (puVar12 != (undefined8 *)(lVar6 + lVar14));
  }
  *(undefined8 **)(this + 200) = puVar15;
  lVar6 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    while( true ) {
      JPH::QuadTree::Init((FixedSizeFreeList *)(puVar15 + lVar6 * 0x10));
      if (*(uint *)(this + 0xd0) <= (uint)(lVar6 + 1)) break;
      puVar15 = *(undefined8 **)(this + 200);
      lVar6 = lVar6 + 1;
    }
  }
  return;
}



/* JPH::BroadPhaseQuadTree::CastAABox(JPH::AABoxCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseQuadTree::CastAABox
          (BroadPhaseQuadTree *this,AABoxCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(this + 0x180);
  do {
    iVar2 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  } while (iVar2 == 0xb);
  if (iVar2 != 0x23) {
    CastAABoxNoLock(this,param_1,param_2,param_3,param_4);
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(0x23);
}



/* JPH::BroadPhaseQuadTree::GetBounds() const */

void JPH::BroadPhaseQuadTree::GetBounds(void)

{
  pthread_rwlock_t *__rwlock;
  long lVar1;
  int iVar2;
  long in_RSI;
  undefined1 (*in_RDI) [16];
  uint uVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  __rwlock = (pthread_rwlock_t *)(in_RSI + 0x110 + (ulong)*(uint *)(in_RSI + 0x180) * 0x38);
  do {
    iVar2 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar2 == 0xb);
  if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar3 = 0;
  iVar2 = *(int *)(in_RSI + 0xd0);
  auVar4._4_4_ = _LC6;
  auVar4._0_4_ = _LC6;
  auVar4._8_4_ = _LC6;
  auVar4._12_4_ = _LC6;
  auVar5._4_4_ = _LC0;
  auVar5._0_4_ = _LC0;
  auVar5._8_4_ = _LC0;
  auVar5._12_4_ = _LC0;
  *in_RDI = auVar4;
  in_RDI[1] = auVar5;
  if (iVar2 != 0) {
    do {
      uVar3 = uVar3 + 1;
      JPH::QuadTree::GetBounds();
      auVar4 = minps(auVar4,local_58);
      auVar5 = maxps(auVar5,local_48);
      *in_RDI = auVar4;
      in_RDI[1] = auVar5;
    } while ((uVar3 & 0xff) < *(uint *)(in_RSI + 0xd0));
  }
  pthread_rwlock_unlock(__rwlock);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JPH::BroadPhaseQuadTree::CollideOrientedBox(JPH::OrientedBox const&,
   JPH::CollisionCollector<JPH::BodyID, JPH::CollisionCollectorTraitsCollideShape>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseQuadTree::CollideOrientedBox
          (BroadPhaseQuadTree *this,OrientedBox *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  OrientedBox *pOVar5;
  
  uVar1 = *(uint *)(this + 0x180);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar4 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    do {
      pOVar5 = (OrientedBox *)(*(long *)(this + 200) + (ulong)(uVar4 & 0xff) * 0x80);
      if (((*(int *)(pOVar5 + 0x40) != 0) &&
          (cVar2 = (**(code **)(*(long *)param_3 + 0x10))(param_3,uVar4), cVar2 != '\0')) &&
         (JPH::QuadTree::CollideOrientedBox
                    (pOVar5,(CollisionCollector *)param_1,(ObjectLayerFilter *)param_2,
                     (Array *)param_4), *(float *)(param_2 + 8) <= _LC0)) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < *(uint *)(this + 0xd0));
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  return;
}



/* JPH::BroadPhaseQuadTree::CastRay(JPH::RayCast const&,
   JPH::CollisionCollector<JPH::BroadPhaseCastResult, JPH::CollisionCollectorTraitsCastRay>&,
   JPH::BroadPhaseLayerFilter const&, JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseQuadTree::CastRay
          (BroadPhaseQuadTree *this,RayCast *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  RayCast *pRVar5;
  
  uVar1 = *(uint *)(this + 0x180);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar4 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    do {
      pRVar5 = (RayCast *)(*(long *)(this + 200) + (ulong)(uVar4 & 0xff) * 0x80);
      if (((*(int *)(pRVar5 + 0x40) != 0) &&
          (cVar2 = (**(code **)(*(long *)param_3 + 0x10))(param_3,uVar4), cVar2 != '\0')) &&
         (JPH::QuadTree::CastRay
                    (pRVar5,(CollisionCollector *)param_1,(ObjectLayerFilter *)param_2,
                     (Array *)param_4), *(float *)(param_2 + 8) <= 0.0)) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < *(uint *)(this + 0xd0));
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  return;
}



/* JPH::BroadPhaseQuadTree::CollideAABox(JPH::AABox const&, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void __thiscall
JPH::BroadPhaseQuadTree::CollideAABox
          (BroadPhaseQuadTree *this,AABox *param_1,CollisionCollector *param_2,
          BroadPhaseLayerFilter *param_3,ObjectLayerFilter *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  AABox *pAVar5;
  
  uVar1 = *(uint *)(this + 0x180);
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar4 = 0;
  if (*(int *)(this + 0xd0) != 0) {
    do {
      pAVar5 = (AABox *)(*(long *)(this + 200) + (ulong)(uVar4 & 0xff) * 0x80);
      if (((*(int *)(pAVar5 + 0x40) != 0) &&
          (cVar2 = (**(code **)(*(long *)param_3 + 0x10))(param_3,uVar4), cVar2 != '\0')) &&
         (JPH::QuadTree::CollideAABox
                    (pAVar5,(CollisionCollector *)param_1,(ObjectLayerFilter *)param_2,
                     (Array *)param_4), *(float *)(param_2 + 8) <= _LC0)) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < *(uint *)(this + 0xd0));
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + (ulong)uVar1 * 0x38 + 0x110));
  return;
}



/* JPH::BroadPhaseQuadTree::CollidePoint(JPH::Vec3, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void JPH::BroadPhaseQuadTree::CollidePoint
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long *param_5,
               undefined8 param_6)

{
  pthread_rwlock_t *__rwlock;
  char cVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  __rwlock = (pthread_rwlock_t *)(param_3 + 0x110 + (ulong)*(uint *)(param_3 + 0x180) * 0x38);
  do {
    iVar2 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar2 == 0xb);
  if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar4 = 0;
  if (*(int *)(param_3 + 0xd0) != 0) {
    do {
      lVar3 = (ulong)(uVar4 & 0xff) * 0x80 + *(long *)(param_3 + 200);
      if (((*(int *)(lVar3 + 0x40) != 0) &&
          (cVar1 = (**(code **)(*param_5 + 0x10))(param_5,uVar4), cVar1 != '\0')) &&
         (JPH::QuadTree::CollidePoint(param_1,param_2,lVar3,param_4,param_6,param_3 + 0x18),
         *(float *)(param_4 + 8) <= _LC0)) break;
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xff) < *(uint *)(param_3 + 0xd0));
  }
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* JPH::BroadPhaseQuadTree::CollideSphere(JPH::Vec3, float, JPH::CollisionCollector<JPH::BodyID,
   JPH::CollisionCollectorTraitsCollideShape>&, JPH::BroadPhaseLayerFilter const&,
   JPH::ObjectLayerFilter const&) const */

void JPH::BroadPhaseQuadTree::CollideSphere
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
               long *param_6,undefined8 param_7)

{
  pthread_rwlock_t *__rwlock;
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  
  __rwlock = (pthread_rwlock_t *)(param_4 + 0x110 + (ulong)*(uint *)(param_4 + 0x180) * 0x38);
  do {
    iVar2 = pthread_rwlock_rdlock(__rwlock);
  } while (iVar2 == 0xb);
  if (iVar2 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  uVar3 = 0;
  if (*(int *)(param_4 + 0xd0) != 0) {
    do {
      lVar4 = (ulong)(uVar3 & 0xff) * 0x80 + *(long *)(param_4 + 200);
      if (((*(int *)(lVar4 + 0x40) != 0) &&
          (cVar1 = (**(code **)(*param_6 + 0x10))(param_6,uVar3), cVar1 != '\0')) &&
         (JPH::QuadTree::CollideSphere(param_1,param_2,param_3,lVar4,param_5,param_7,param_4 + 0x18)
         , *(float *)(param_5 + 8) <= _LC0)) break;
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xff) < *(uint *)(param_4 + 0xd0));
  }
  pthread_rwlock_unlock(__rwlock);
  return;
}



/* JPH::BroadPhaseQuadTree::AddBodiesFinalize(JPH::BodyID*, int, void*) */

void __thiscall
JPH::BroadPhaseQuadTree::AddBodiesFinalize
          (BroadPhaseQuadTree *this,BodyID *param_1,int param_2,void *param_3)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  long *plVar5;
  uint uVar6;
  
  do {
    iVar3 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0xd8));
  } while (iVar3 == 0xb);
  if (iVar3 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar2 = *(long *)(this + 8);
  if (*(int *)(this + 0xd0) != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        plVar5 = (long *)((ulong)(uVar6 & 0xff) * 0x40 + (long)param_3);
        if (*plVar5 != 0) break;
LAB_00100e70:
        uVar6 = uVar6 + 1;
        if (*(uint *)(this + 0xd0) <= (uVar6 & 0xff)) goto LAB_00100ef7;
      }
      JPH::QuadTree::AddBodiesFinalize
                ((Array *)((ulong)(uVar6 & 0xff) * 0x80 + *(long *)(this + 200)),(int)this + 0x18,
                 (AddState *)(plVar5[1] - *plVar5 >> 2));
      puVar4 = (uint *)*plVar5;
      if ((uint *)plVar5[1] <= puVar4) goto LAB_00100e70;
      do {
        LOCK();
        pbVar1 = (byte *)(*(long *)(*(long *)(lVar2 + 0x10) + (ulong)(*puVar4 & 0x7fffff) * 8) +
                         0x79);
        *pbVar1 = *pbVar1 | 4;
        UNLOCK();
        puVar4 = puVar4 + 1;
      } while (puVar4 < (uint *)plVar5[1]);
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xff) < *(uint *)(this + 0xd0));
  }
LAB_00100ef7:
  if (param_3 != (void *)0x0) {
    (*Free)(param_3);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0xd8));
  return;
}



/* void JPH::QuickSort<JPH::BodyID*, JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*,
   int)::{lambda(JPH::BodyID, JPH::BodyID)#1}>(JPH::BodyID*, JPH::BodyID*,
   JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*, int)::{lambda(JPH::BodyID,
   JPH::BodyID)#1}) */

void JPH::
     QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  uint *puVar7;
  byte bVar8;
  long lVar9;
  
  lVar9 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar9 < 5) {
      return;
    }
    if (lVar9 < 0x81) break;
    uVar4 = *param_1;
    puVar1 = (uint *)(((lVar9 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar3 = (long)param_2 + (-4 - (long)param_1) >> 5;
    lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
    puVar2 = param_1 + lVar3;
    puVar5 = param_1 + lVar3 * 2;
    bVar6 = *(byte *)(lVar9 + 0x77);
    if (*(byte *)(*(long *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) + 0x77) < bVar6) {
      *param_1 = *puVar2;
      *puVar2 = uVar4;
      uVar4 = *param_1;
      lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
      bVar6 = *(byte *)(lVar9 + 0x77);
    }
    bVar8 = *(byte *)(*(long *)(param_3 + (ulong)(*puVar5 & 0x7fffff) * 8) + 0x77);
    if (bVar8 < bVar6) {
      *param_1 = *puVar5;
      *puVar5 = uVar4;
      bVar8 = *(byte *)(lVar9 + 0x77);
    }
    uVar4 = *puVar2;
    if (bVar8 < *(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77)) {
      *puVar2 = *puVar5;
      *puVar5 = uVar4;
    }
    puVar5 = puVar1 + lVar3;
    puVar7 = puVar1 + -lVar3;
    uVar4 = *puVar7;
    lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
    bVar6 = *(byte *)(lVar9 + 0x77);
    if (*(byte *)(*(long *)(param_3 + (ulong)(*puVar1 & 0x7fffff) * 8) + 0x77) < bVar6) {
      *puVar7 = *puVar1;
      *puVar1 = uVar4;
      uVar4 = *puVar7;
      lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
      bVar6 = *(byte *)(lVar9 + 0x77);
    }
    bVar8 = *(byte *)(*(long *)(param_3 + (ulong)(*puVar5 & 0x7fffff) * 8) + 0x77);
    if (bVar8 < bVar6) {
      *puVar7 = *puVar5;
      *puVar5 = uVar4;
      bVar8 = *(byte *)(lVar9 + 0x77);
    }
    uVar4 = *puVar1;
    if (bVar8 < *(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77)) {
      *puVar1 = *puVar5;
      *puVar5 = uVar4;
    }
    puVar5 = param_2 + (-1 - lVar3);
    puVar7 = param_2 + lVar3 * -2 + -1;
    uVar4 = *puVar7;
    lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
    bVar6 = *(byte *)(lVar9 + 0x77);
    if (*(byte *)(*(long *)(param_3 + (ulong)(*puVar5 & 0x7fffff) * 8) + 0x77) < bVar6) {
      *puVar7 = *puVar5;
      *puVar5 = uVar4;
      uVar4 = *puVar7;
      lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
      bVar6 = *(byte *)(lVar9 + 0x77);
    }
    bVar8 = *(byte *)(*(long *)(param_3 + (ulong)(param_2[-1] & 0x7fffff) * 8) + 0x77);
    if (bVar8 < bVar6) {
      *puVar7 = param_2[-1];
      param_2[-1] = uVar4;
      bVar8 = *(byte *)(lVar9 + 0x77);
    }
    uVar4 = *puVar5;
    if (bVar8 < *(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77)) {
      *puVar5 = param_2[-1];
      param_2[-1] = uVar4;
    }
    uVar4 = *puVar2;
    lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
    bVar6 = *(byte *)(lVar9 + 0x77);
    if (*(byte *)(*(long *)(param_3 + (ulong)(*puVar1 & 0x7fffff) * 8) + 0x77) < bVar6) {
      *puVar2 = *puVar1;
      *puVar1 = uVar4;
      uVar4 = *puVar2;
      lVar9 = *(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8);
      bVar6 = *(byte *)(lVar9 + 0x77);
    }
    bVar8 = *(byte *)(*(long *)(param_3 + (ulong)(*puVar5 & 0x7fffff) * 8) + 0x77);
    if (bVar8 < bVar6) {
      *puVar2 = *puVar5;
      *puVar5 = uVar4;
      bVar8 = *(byte *)(lVar9 + 0x77);
    }
    uVar4 = *puVar1;
    bVar6 = *(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77);
    puVar2 = param_2;
    puVar7 = param_1;
    if (bVar8 < bVar6) {
      *puVar1 = *puVar5;
      *puVar5 = uVar4;
      bVar6 = *(byte *)(*(long *)(param_3 + (ulong)(*puVar1 & 0x7fffff) * 8) + 0x77);
    }
    while( true ) {
      do {
        puVar5 = puVar7;
        uVar4 = *puVar5;
        puVar7 = puVar5 + 1;
      } while (*(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77) < bVar6);
      do {
        puVar1 = puVar2;
        puVar2 = puVar1 + -1;
      } while (bVar6 < *(byte *)(*(long *)(param_3 + (ulong)(puVar1[-1] & 0x7fffff) * 8) + 0x77));
      if (puVar2 <= puVar5) break;
      *puVar5 = puVar1[-1];
      *puVar2 = uVar4;
    }
    lVar9 = (long)puVar1 - (long)param_1;
    if (lVar9 < (long)param_2 - (long)puVar1) {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (param_1,puVar1,param_3);
      lVar9 = (long)param_2 - (long)puVar1;
      param_1 = puVar1;
    }
    else {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (puVar1,param_2,param_3);
      param_2 = puVar1;
    }
  }
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1 + 1;
  if (puVar2 == param_2) {
    return;
  }
  lVar9 = 0;
  do {
    uVar4 = *puVar2;
    bVar6 = *(byte *)(*(long *)(param_3 + (ulong)(uVar4 & 0x7fffff) * 8) + 0x77);
    if (bVar6 < *(byte *)(*(long *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8) + 0x77)) {
      if (param_1 != puVar2) {
        memmove((void *)((long)puVar2 + lVar9),param_1,4 - lVar9);
      }
      *param_1 = uVar4;
    }
    else {
      puVar5 = puVar2 + -1;
      if (bVar6 < *(byte *)(*(long *)(param_3 + (ulong)(puVar2[-1] & 0x7fffff) * 8) + 0x77)) {
        do {
          puVar1 = puVar5;
          puVar1[1] = *puVar1;
          puVar5 = puVar1 + -1;
        } while (bVar6 < *(byte *)(*(long *)(param_3 + (ulong)(puVar1[-1] & 0x7fffff) * 8) + 0x77));
        *puVar1 = uVar4;
      }
      else {
        *puVar2 = uVar4;
      }
    }
    lVar9 = lVar9 + -4;
    puVar2 = puVar2 + 1;
  } while (puVar2 != param_2);
  return;
}



/* JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*, int) */

undefined8 * __thiscall
JPH::BroadPhaseQuadTree::AddBodiesPrepare(BroadPhaseQuadTree *this,BodyID *param_1,int param_2)

{
  BodyID *pBVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  Array *pAVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  BodyID *pBVar14;
  ulong uVar15;
  
  uVar15 = (ulong)*(uint *)(this + 0xd0);
  pAVar5 = *(Array **)(this + 8);
  puVar9 = (undefined8 *)(*Allocate)(uVar15 * 0x40);
  uVar8 = _LC6;
  uVar7 = _LC0;
  if (uVar15 != 0) {
    puVar10 = puVar9;
    do {
      *puVar10 = 0;
      puVar11 = puVar10 + 8;
      *(undefined4 *)(puVar10 + 2) = 0xffffffff;
      *(undefined4 *)(puVar10 + 4) = uVar8;
      *(undefined4 *)((long)puVar10 + 0x24) = uVar8;
      *(undefined4 *)(puVar10 + 5) = uVar8;
      *(undefined4 *)((long)puVar10 + 0x2c) = uVar8;
      *(undefined4 *)(puVar10 + 6) = uVar7;
      *(undefined4 *)((long)puVar10 + 0x34) = uVar7;
      *(undefined4 *)(puVar10 + 7) = uVar7;
      *(undefined4 *)((long)puVar10 + 0x3c) = uVar7;
      puVar10 = puVar11;
    } while (puVar11 != puVar9 + uVar15 * 8);
  }
  lVar6 = *(long *)(pAVar5 + 0x10);
  pBVar1 = param_1 + (long)param_2 * 4;
  QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::AddBodiesPrepare(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
            (param_1,pBVar1,lVar6);
  if (param_1 < pBVar1) {
    do {
      bVar3 = *(byte *)(*(long *)(*(long *)(pAVar5 + 0x10) +
                                 (ulong)(*(uint *)param_1 & 0x7fffff) * 8) + 0x77);
      lVar12 = (long)pBVar1 - (long)param_1 >> 2;
      pBVar14 = param_1;
      while (lVar13 = lVar12, 0 < lVar12) {
        while( true ) {
          lVar12 = lVar13 >> 1;
          if (bVar3 < *(byte *)(*(long *)(lVar6 + (ulong)(*(uint *)(pBVar14 + lVar12 * 4) & 0x7fffff
                                                         ) * 8) + 0x77)) break;
          pBVar14 = pBVar14 + lVar12 * 4 + 4;
          lVar13 = (lVar13 - lVar12) + -1;
          if (lVar13 < 1) goto LAB_00101476;
        }
      }
LAB_00101476:
      lVar12 = *(long *)(this + 200);
      puVar9[(ulong)bVar3 * 8] = param_1;
      (puVar9 + (ulong)bVar3 * 8)[1] = pBVar14;
      JPH::QuadTree::AddBodiesPrepare
                ((Array *)((ulong)bVar3 * 0x80 + lVar12),pAVar5,(BodyID *)(this + 0x18),(int)param_1
                 ,(AddState *)((long)pBVar14 - (long)param_1 >> 2));
      for (; param_1 < pBVar14; param_1 = param_1 + 4) {
        uVar4 = *(uint *)param_1;
        pbVar2 = (byte *)(*(long *)(this + 0x28) + (ulong)(uVar4 & 0x7fffff) * 8);
        LOCK();
        *pbVar2 = bVar3;
        UNLOCK();
        LOCK();
        *(undefined2 *)(pbVar2 + 2) =
             *(undefined2 *)
              (*(long *)(*(long *)(pAVar5 + 0x10) + (ulong)(uVar4 & 0x7fffff) * 8) + 0x74);
        UNLOCK();
      }
      param_1 = pBVar14;
    } while (pBVar14 < pBVar1);
  }
  return puVar9;
}



/* void JPH::QuickSort<JPH::BodyID*, JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*,
   int, bool)::{lambda(JPH::BodyID, JPH::BodyID)#1}>(JPH::BodyID*, JPH::BodyID*,
   JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*, int, bool)::{lambda(JPH::BodyID,
   JPH::BodyID)#1}) */

void JPH::
     QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*,int,bool)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  
  lVar5 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar5 < 5) {
      return;
    }
    if (lVar5 < 0x81) break;
    puVar2 = (uint *)(((lVar5 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar5 = (long)param_2 + (-4 - (long)param_1) >> 5;
    puVar3 = param_1 + lVar5;
    puVar4 = param_1 + lVar5 * 2;
    if (*(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar6 = *param_1;
      *param_1 = *puVar3;
      *puVar3 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar6 = *param_1;
      *param_1 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar6;
    }
    puVar4 = puVar2 + lVar5;
    puVar7 = puVar2 + -lVar5;
    if (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8)) {
      uVar6 = *puVar2;
      *puVar2 = *puVar4;
      *puVar4 = uVar6;
    }
    puVar4 = param_2 + (-1 - lVar5);
    puVar7 = param_2 + lVar5 * -2 + -1;
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar4;
      *puVar4 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(param_2[-1] & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = param_2[-1];
      param_2[-1] = uVar6;
    }
    else {
      uVar6 = param_2[-1];
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8)) {
      uVar6 = *puVar4;
      *puVar4 = param_2[-1];
      param_2[-1] = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar2;
      *puVar2 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8)) {
      uVar6 = *puVar2;
      *puVar2 = *puVar4;
      *puVar4 = uVar6;
    }
    pbVar1 = (byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8);
    puVar3 = param_2;
    puVar4 = param_1;
    while( true ) {
      do {
        puVar2 = puVar4;
        puVar4 = puVar2 + 1;
      } while (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) < *pbVar1);
      do {
        puVar7 = puVar3;
        puVar3 = puVar7 + -1;
      } while (*pbVar1 < *(byte *)(param_3 + (ulong)(puVar7[-1] & 0x7fffff) * 8));
      if (puVar3 <= puVar2) break;
      uVar6 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar6;
    }
    lVar5 = (long)puVar7 - (long)param_1;
    if (lVar5 < (long)param_2 - (long)puVar7) {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*,int,bool)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (param_1,puVar7,param_3);
      lVar5 = (long)param_2 - (long)puVar7;
      param_1 = puVar7;
    }
    else {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*,int,bool)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (puVar7,param_2,param_3);
      param_2 = puVar7;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar3 = param_1 + 1;
  if (puVar3 == param_2) {
    return;
  }
  lVar5 = 0;
  do {
    uVar6 = *puVar3;
    pbVar1 = (byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8);
    puVar4 = puVar3;
    if (*pbVar1 < *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      if (param_1 != puVar3) {
        memmove((void *)((long)puVar3 + lVar5),param_1,4 - lVar5);
      }
      *param_1 = uVar6;
    }
    else {
      while (*pbVar1 < *(byte *)(param_3 + (ulong)(puVar4[-1] & 0x7fffff) * 8)) {
        *puVar4 = puVar4[-1];
        puVar4 = puVar4 + -1;
      }
      *puVar4 = uVar6;
    }
    lVar5 = lVar5 + -4;
    puVar3 = puVar3 + 1;
  } while (puVar3 != param_2);
  return;
}



/* JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*, int, bool) */

void __thiscall
JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged
          (BroadPhaseQuadTree *this,BodyID *param_1,int param_2,bool param_3)

{
  BodyID *pBVar1;
  byte bVar2;
  long lVar3;
  Array *pAVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  BodyID *pBVar8;
  
  if (param_3) {
    do {
      iVar5 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0xd8));
    } while (iVar5 == 0xb);
    if (iVar5 == 0x23) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(0x23);
    }
  }
  lVar3 = *(long *)(this + 0x28);
  pBVar1 = param_1 + (long)param_2 * 4;
  pAVar4 = *(Array **)(this + 8);
  QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::NotifyBodiesAABBChanged(JPH::BodyID*,int,bool)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
            (param_1,pBVar1,lVar3);
  if (param_1 < pBVar1) {
    do {
      bVar2 = *(byte *)(lVar3 + (ulong)(*(uint *)param_1 & 0x7fffff) * 8);
      lVar6 = (long)pBVar1 - (long)param_1 >> 2;
      pBVar8 = param_1;
      do {
        while( true ) {
          lVar7 = lVar6 >> 1;
          if (*(byte *)(lVar3 + (ulong)(*(uint *)(pBVar8 + lVar7 * 4) & 0x7fffff) * 8) <= bVar2)
          break;
          lVar6 = lVar7;
          if (lVar7 < 1) goto LAB_00101a2c;
        }
        pBVar8 = pBVar8 + lVar7 * 4 + 4;
        lVar6 = (lVar6 - lVar7) + -1;
      } while (0 < lVar6);
LAB_00101a2c:
      JPH::QuadTree::NotifyBodiesAABBChanged
                ((Array *)((ulong)bVar2 * 0x80 + *(long *)(this + 200)),pAVar4,
                 (BodyID *)(this + 0x18),(int)param_1);
      param_1 = pBVar8;
    } while (pBVar8 < pBVar1);
  }
  if (param_3) {
    pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0xd8));
    return;
  }
  return;
}



/* void JPH::QuickSort<JPH::BodyID*, JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*,
   int)::{lambda(JPH::BodyID, JPH::BodyID)#1}>(JPH::BodyID*, JPH::BodyID*,
   JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*, int)::{lambda(JPH::BodyID, JPH::BodyID)#1})
    */

void JPH::
     QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  
  lVar5 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar5 < 5) {
      return;
    }
    if (lVar5 < 0x81) break;
    puVar2 = (uint *)(((lVar5 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar5 = (long)param_2 + (-4 - (long)param_1) >> 5;
    puVar3 = param_1 + lVar5;
    puVar4 = param_1 + lVar5 * 2;
    if (*(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar6 = *param_1;
      *param_1 = *puVar3;
      *puVar3 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar6 = *param_1;
      *param_1 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar6;
    }
    puVar4 = puVar2 + lVar5;
    puVar7 = puVar2 + -lVar5;
    if (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar2;
      *puVar2 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8)) {
      uVar6 = *puVar2;
      *puVar2 = *puVar4;
      *puVar4 = uVar6;
    }
    puVar4 = param_2 + (-1 - lVar5);
    puVar7 = param_2 + lVar5 * -2 + -1;
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = *puVar4;
      *puVar4 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(param_2[-1] & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar7 & 0x7fffff) * 8)) {
      uVar6 = *puVar7;
      *puVar7 = param_2[-1];
      param_2[-1] = uVar6;
    }
    else {
      uVar6 = param_2[-1];
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8)) {
      uVar6 = *puVar4;
      *puVar4 = param_2[-1];
      param_2[-1] = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar2;
      *puVar2 = uVar6;
    }
    if (*(byte *)(param_3 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar6 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar6;
    }
    else {
      uVar6 = *puVar4;
    }
    if (*(byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8) <
        *(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8)) {
      uVar6 = *puVar2;
      *puVar2 = *puVar4;
      *puVar4 = uVar6;
    }
    pbVar1 = (byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8);
    puVar3 = param_2;
    puVar4 = param_1;
    while( true ) {
      do {
        puVar2 = puVar4;
        puVar4 = puVar2 + 1;
      } while (*(byte *)(param_3 + (ulong)(*puVar2 & 0x7fffff) * 8) < *pbVar1);
      do {
        puVar7 = puVar3;
        puVar3 = puVar7 + -1;
      } while (*pbVar1 < *(byte *)(param_3 + (ulong)(puVar7[-1] & 0x7fffff) * 8));
      if (puVar3 <= puVar2) break;
      uVar6 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar6;
    }
    lVar5 = (long)puVar7 - (long)param_1;
    if (lVar5 < (long)param_2 - (long)puVar7) {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (param_1,puVar7,param_3);
      lVar5 = (long)param_2 - (long)puVar7;
      param_1 = puVar7;
    }
    else {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (puVar7,param_2,param_3);
      param_2 = puVar7;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar3 = param_1 + 1;
  if (puVar3 == param_2) {
    return;
  }
  lVar5 = 0;
  do {
    uVar6 = *puVar3;
    pbVar1 = (byte *)(param_3 + (ulong)(uVar6 & 0x7fffff) * 8);
    puVar4 = puVar3;
    if (*pbVar1 < *(byte *)(param_3 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      if (param_1 != puVar3) {
        memmove((void *)((long)puVar3 + lVar5),param_1,4 - lVar5);
      }
      *param_1 = uVar6;
    }
    else {
      while (*pbVar1 < *(byte *)(param_3 + (ulong)(puVar4[-1] & 0x7fffff) * 8)) {
        *puVar4 = puVar4[-1];
        puVar4 = puVar4 + -1;
      }
      *puVar4 = uVar6;
    }
    lVar5 = lVar5 + -4;
    puVar3 = puVar3 + 1;
  } while (puVar3 != param_2);
  return;
}



/* JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*, int) */

void __thiscall
JPH::BroadPhaseQuadTree::RemoveBodies(BroadPhaseQuadTree *this,BodyID *param_1,int param_2)

{
  byte *pbVar1;
  BodyID *pBVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  Array *pAVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  BodyID *pBVar11;
  
  do {
    iVar8 = pthread_rwlock_rdlock((pthread_rwlock_t *)(this + 0xd8));
  } while (iVar8 == 0xb);
  if (iVar8 == 0x23) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(0x23);
  }
  lVar6 = *(long *)(this + 0x28);
  pBVar2 = param_1 + (long)param_2 * 4;
  pAVar7 = *(Array **)(this + 8);
  QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::RemoveBodies(JPH::BodyID*,int)::_lambda(JPH::BodyID,JPH::BodyID)_1_>
            (param_1,pBVar2,lVar6);
  if (param_1 < pBVar2) {
    do {
      bVar4 = *(byte *)(*(long *)(this + 0x28) + (ulong)(*(uint *)param_1 & 0x7fffff) * 8);
      lVar9 = (long)pBVar2 - (long)param_1 >> 2;
      pBVar11 = param_1;
      do {
        while( true ) {
          lVar10 = lVar9 >> 1;
          if (*(byte *)(lVar6 + (ulong)(*(uint *)(pBVar11 + lVar10 * 4) & 0x7fffff) * 8) <= bVar4)
          break;
          lVar9 = lVar10;
          if (lVar10 < 1) goto LAB_00101ff5;
        }
        pBVar11 = pBVar11 + lVar10 * 4 + 4;
        lVar9 = (lVar9 - lVar10) + -1;
      } while (0 < lVar9);
LAB_00101ff5:
      JPH::QuadTree::RemoveBodies
                ((Array *)((ulong)bVar4 * 0x80 + *(long *)(this + 200)),pAVar7,
                 (BodyID *)(this + 0x18),(int)param_1);
      for (; param_1 < pBVar11; param_1 = param_1 + 4) {
        uVar5 = *(uint *)param_1;
        puVar3 = (undefined1 *)(lVar6 + (ulong)(uVar5 & 0x7fffff) * 8);
        LOCK();
        *puVar3 = 0xff;
        UNLOCK();
        LOCK();
        *(undefined2 *)(puVar3 + 2) = 0xffff;
        UNLOCK();
        LOCK();
        pbVar1 = (byte *)(*(long *)(*(long *)(pAVar7 + 0x10) + (ulong)(uVar5 & 0x7fffff) * 8) + 0x79
                         );
        *pbVar1 = *pbVar1 & 0xfb;
        UNLOCK();
      }
      param_1 = pBVar11;
    } while (pBVar11 < pBVar2);
  }
  pthread_rwlock_unlock((pthread_rwlock_t *)(this + 0xd8));
  return;
}



/* JPH::BroadPhaseQuadTree::NotifyBodiesLayerChanged(JPH::BodyID*, int) */

void __thiscall
JPH::BroadPhaseQuadTree::NotifyBodiesLayerChanged
          (BroadPhaseQuadTree *this,BodyID *param_1,int param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  BodyID *pBVar8;
  BodyID *pBVar9;
  BodyID *pBVar10;
  
  uVar4 = (ulong)param_2;
  uVar1 = uVar4 * 4 - 4;
  lVar3 = *(long *)(this + 8);
  pBVar8 = param_1 + uVar1;
  if (!CARRY8((ulong)param_1,uVar1)) {
    pBVar9 = pBVar8;
    do {
      while( true ) {
        param_2 = (int)uVar4;
        uVar5 = (ulong)(*(uint *)pBVar9 & 0x7fffff);
        lVar6 = *(long *)(*(long *)(lVar3 + 0x10) + uVar5 * 8);
        if (*(char *)(*(long *)(this + 0x28) + uVar5 * 8) != *(char *)(lVar6 + 0x77)) break;
        LOCK();
        *(undefined2 *)(*(long *)(this + 0x28) + 2 + uVar5 * 8) = *(undefined2 *)(lVar6 + 0x74);
        UNLOCK();
        uVar2 = *(uint *)pBVar9;
        lVar6 = (long)param_2;
        pBVar10 = pBVar9 + -4;
        param_2 = param_2 - 1;
        uVar4 = (ulong)(uint)param_2;
        *(uint *)pBVar9 = *(uint *)(param_1 + lVar6 * 4 + -4);
        *(uint *)(param_1 + lVar6 * 4 + -4) = uVar2;
        pBVar9 = pBVar10;
        if (pBVar10 == pBVar8 + (uVar1 ^ 0xfffffffffffffffc)) goto LAB_00102138;
      }
      pBVar9 = pBVar9 + -4;
    } while (pBVar9 != pBVar8 + (uVar1 ^ 0xfffffffffffffffc));
  }
LAB_00102138:
  if (param_2 < 1) {
    return;
  }
  RemoveBodies(this,param_1,param_2);
  pvVar7 = (void *)AddBodiesPrepare(this,param_1,param_2);
  AddBodiesFinalize(this,param_1,param_2,pvVar7);
  return;
}



/* void JPH::QuickSort<JPH::BodyID*, JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*, int,
   float, JPH::ObjectVsBroadPhaseLayerFilter const&, JPH::ObjectLayerPairFilter const&,
   JPH::CollisionCollector<JPH::BodyPair, JPH::CollisionCollectorTraitsCollideShape>&)
   const::{lambda(JPH::BodyID, JPH::BodyID)#1}>(JPH::BodyID*, JPH::BodyID*,
   JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*, int, float,
   JPH::ObjectVsBroadPhaseLayerFilter const&, JPH::ObjectLayerPairFilter const&,
   JPH::CollisionCollector<JPH::BodyPair, JPH::CollisionCollectorTraitsCollideShape>&)
   const::{lambda(JPH::BodyID, JPH::BodyID)#1}) */

void JPH::
     QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*,int,float,JPH::ObjectVsBroadPhaseLayerFilter_const&,JPH::ObjectLayerPairFilter_const&,JPH::CollisionCollector<JPH::BodyPair,JPH::CollisionCollectorTraitsCollideShape>&)const::_lambda(JPH::BodyID,JPH::BodyID)_1_>
               (uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ushort *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  
  lVar6 = (long)param_2 - (long)param_1;
  while( true ) {
    if (lVar6 < 5) {
      return;
    }
    if (lVar6 < 0x81) break;
    puVar3 = (uint *)(((lVar6 >> 2) * 2 - 2U & 0xfffffffffffffffc) + (long)param_1);
    lVar6 = (long)param_2 + (-4 - (long)param_1) >> 5;
    puVar4 = param_1 + lVar6;
    puVar5 = param_1 + lVar6 * 2;
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar4 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar7 = *param_1;
      *param_1 = *puVar4;
      *puVar4 = uVar7;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar5 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      uVar7 = *param_1;
      *param_1 = *puVar5;
      *puVar5 = uVar7;
    }
    else {
      uVar7 = *puVar5;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(uVar7 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar4 & 0x7fffff) * 8)) {
      uVar7 = *puVar4;
      *puVar4 = *puVar5;
      *puVar5 = uVar7;
    }
    puVar5 = puVar3 + lVar6;
    puVar8 = puVar3 + -lVar6;
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar8 & 0x7fffff) * 8)) {
      uVar7 = *puVar8;
      *puVar8 = *puVar3;
      *puVar3 = uVar7;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar5 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar8 & 0x7fffff) * 8)) {
      uVar7 = *puVar8;
      *puVar8 = *puVar5;
      *puVar5 = uVar7;
    }
    else {
      uVar7 = *puVar5;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(uVar7 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar7 = *puVar3;
      *puVar3 = *puVar5;
      *puVar5 = uVar7;
    }
    puVar5 = param_2 + (-1 - lVar6);
    puVar8 = param_2 + lVar6 * -2 + -1;
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar5 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar8 & 0x7fffff) * 8)) {
      uVar7 = *puVar8;
      *puVar8 = *puVar5;
      *puVar5 = uVar7;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(param_2[-1] & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar8 & 0x7fffff) * 8)) {
      uVar7 = *puVar8;
      *puVar8 = param_2[-1];
      param_2[-1] = uVar7;
    }
    else {
      uVar7 = param_2[-1];
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(uVar7 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar5 & 0x7fffff) * 8)) {
      uVar7 = *puVar5;
      *puVar5 = param_2[-1];
      param_2[-1] = uVar7;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar4 & 0x7fffff) * 8)) {
      uVar7 = *puVar4;
      *puVar4 = *puVar3;
      *puVar3 = uVar7;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(*puVar5 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar4 & 0x7fffff) * 8)) {
      uVar7 = *puVar4;
      *puVar4 = *puVar5;
      *puVar5 = uVar7;
    }
    else {
      uVar7 = *puVar5;
    }
    if (*(ushort *)(param_3 + 2 + (ulong)(uVar7 & 0x7fffff) * 8) <
        *(ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8)) {
      uVar7 = *puVar3;
      *puVar3 = *puVar5;
      *puVar5 = uVar7;
    }
    puVar2 = (ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8);
    puVar4 = param_2;
    puVar5 = param_1;
    while( true ) {
      do {
        puVar3 = puVar5;
        puVar5 = puVar3 + 1;
      } while (*(ushort *)(param_3 + 2 + (ulong)(*puVar3 & 0x7fffff) * 8) < *puVar2);
      do {
        puVar8 = puVar4;
        puVar4 = puVar8 + -1;
      } while (*puVar2 < *(ushort *)(param_3 + 2 + (ulong)(puVar8[-1] & 0x7fffff) * 8));
      if (puVar4 <= puVar3) break;
      uVar7 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar7;
    }
    lVar6 = (long)puVar8 - (long)param_1;
    if (lVar6 < (long)param_2 - (long)puVar8) {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*,int,float,JPH::ObjectVsBroadPhaseLayerFilter_const&,JPH::ObjectLayerPairFilter_const&,JPH::CollisionCollector<JPH::BodyPair,JPH::CollisionCollectorTraitsCollideShape>&)const::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (param_1,puVar8,param_3);
      lVar6 = (long)param_2 - (long)puVar8;
      param_1 = puVar8;
    }
    else {
      QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*,int,float,JPH::ObjectVsBroadPhaseLayerFilter_const&,JPH::ObjectLayerPairFilter_const&,JPH::CollisionCollector<JPH::BodyPair,JPH::CollisionCollectorTraitsCollideShape>&)const::_lambda(JPH::BodyID,JPH::BodyID)_1_>
                (puVar8,param_2,param_3);
      param_2 = puVar8;
    }
  }
  if (param_2 == param_1) {
    return;
  }
  puVar4 = param_1 + 1;
  if (puVar4 == param_2) {
    return;
  }
  lVar6 = 0;
  do {
    uVar7 = *puVar4;
    lVar1 = param_3 + (ulong)(uVar7 & 0x7fffff) * 8;
    puVar5 = puVar4;
    if (*(ushort *)(lVar1 + 2) < *(ushort *)(param_3 + 2 + (ulong)(*param_1 & 0x7fffff) * 8)) {
      if (param_1 != puVar4) {
        memmove((void *)((long)puVar4 + lVar6),param_1,4 - lVar6);
      }
      *param_1 = uVar7;
    }
    else {
      while (*(ushort *)(lVar1 + 2) < *(ushort *)(param_3 + 2 + (ulong)(puVar5[-1] & 0x7fffff) * 8))
      {
        *puVar5 = puVar5[-1];
        puVar5 = puVar5 + -1;
      }
      *puVar5 = uVar7;
    }
    lVar6 = lVar6 + -4;
    puVar4 = puVar4 + 1;
  } while (puVar4 != param_2);
  return;
}



/* JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*, int, float,
   JPH::ObjectVsBroadPhaseLayerFilter const&, JPH::ObjectLayerPairFilter const&,
   JPH::CollisionCollector<JPH::BodyPair, JPH::CollisionCollectorTraitsCollideShape>&) const */

void __thiscall
JPH::BroadPhaseQuadTree::FindCollidingPairs
          (BroadPhaseQuadTree *this,BodyID *param_1,int param_2,float param_3,
          ObjectVsBroadPhaseLayerFilter *param_4,ObjectLayerPairFilter *param_5,
          CollisionCollector *param_6)

{
  BodyID *pBVar1;
  ushort uVar2;
  long lVar3;
  BodyID *pBVar4;
  char cVar5;
  BodyID *pBVar6;
  Array *pAVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  pBVar1 = param_1 + (long)param_2 * 4;
  lVar3 = *(long *)(this + 0x28);
  pBVar4 = *(BodyID **)(this + 8);
  QuickSort<JPH::BodyID*,JPH::BroadPhaseQuadTree::FindCollidingPairs(JPH::BodyID*,int,float,JPH::ObjectVsBroadPhaseLayerFilter_const&,JPH::ObjectLayerPairFilter_const&,JPH::CollisionCollector<JPH::BodyPair,JPH::CollisionCollectorTraitsCollideShape>&)const::_lambda(JPH::BodyID,JPH::BodyID)_1_>
            (param_1,pBVar1,lVar3);
  if (param_1 < pBVar1) {
    do {
      uVar2 = *(ushort *)(lVar3 + 2 + (ulong)(*(uint *)param_1 & 0x7fffff) * 8);
      pBVar6 = param_1;
      lVar8 = (long)pBVar1 - (long)param_1 >> 2;
      do {
        while( true ) {
          lVar9 = lVar8 >> 1;
          if (*(ushort *)(lVar3 + 2 + (ulong)(*(uint *)(pBVar6 + lVar9 * 4) & 0x7fffff) * 8) <=
              uVar2) break;
          lVar8 = lVar9;
          if (lVar9 < 1) goto LAB_001026bd;
        }
        pBVar6 = pBVar6 + lVar9 * 4 + 4;
        lVar8 = (lVar8 - lVar9) + -1;
      } while (0 < lVar8);
LAB_001026bd:
      if (*(int *)(this + 0xd0) != 0) {
        uVar11 = 0;
        do {
          pAVar7 = (Array *)((uVar11 & 0xff) * 0x80 + *(long *)(this + 200));
          if ((*(int *)(pAVar7 + 0x40) != 0) &&
             ((*(code **)(*(long *)param_4 + 0x10) == ObjectVsBroadPhaseLayerFilter::ShouldCollide
              || (cVar5 = (**(code **)(*(long *)param_4 + 0x10))(param_4,uVar2,uVar11),
                 cVar5 != '\0')))) {
            JPH::QuadTree::FindCollidingPairs
                      (pAVar7,pBVar4,(int)param_1,param_3,
                       (CollisionCollector *)((long)pBVar6 - (long)param_1 >> 2 & 0xffffffff),
                       (ObjectLayerPairFilter *)param_6);
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulong)uVar10;
        } while ((uVar10 & 0xff) < *(uint *)(this + 0xd0));
      }
      param_1 = pBVar6;
    } while (pBVar6 < pBVar1);
  }
  return;
}



/* JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(unsigned short, JPH::BroadPhaseLayer) const */

undefined8 JPH::ObjectVsBroadPhaseLayerFilter::ShouldCollide(void)

{
  return 1;
}



/* JPH::BroadPhaseQuadTree::~BroadPhaseQuadTree() */

void JPH::BroadPhaseQuadTree::_GLOBAL__sub_I__BroadPhaseQuadTree(void)

{
  if (DVec3::cTrue == '\0') {
    DVec3::cTrue = '\x01';
    DVec3::cTrue = _LC8;
  }
  return;
}


