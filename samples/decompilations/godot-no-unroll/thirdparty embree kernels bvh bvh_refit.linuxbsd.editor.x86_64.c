
/* embree::sse2::BVH4Triangle4MeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4MeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4MeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00101f48;
  puVar1[2] = &DAT_00101f98;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* embree::sse2::BVH4Triangle4vMeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4vMeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4vMeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00101fb0;
  puVar1[2] = &DAT_00102000;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* embree::sse2::BVH4Triangle4iMeshRefitSAH(void*, embree::TriangleMesh*, unsigned int, unsigned
   long) */

undefined8 *
embree::sse2::BVH4Triangle4iMeshRefitSAH
          (void *param_1,TriangleMesh *param_2,uint param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  uVar2 = embree::sse2::BVH4Triangle4iMeshBuilderSAH(param_1,param_2,param_3,param_4);
  puVar1[3] = param_1;
  puVar1[1] = 0;
  *puVar1 = &PTR__BVHNRefitT_00102018;
  puVar1[2] = &DAT_00102068;
  puVar1[4] = uVar2;
  puVar3 = (undefined8 *)operator_new(0x818);
  puVar1[6] = param_2;
  *puVar3 = param_1;
  puVar3[1] = puVar1 + 2;
  puVar3[2] = 0;
  puVar1[5] = puVar3;
  *(undefined4 *)(puVar1 + 7) = 0;
  return puVar1;
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void __thiscall
embree::TaskScheduler::
spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
          (TaskScheduler *this,ulong param_1,ulong param_2,ulong param_3,
          _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this_00;
  long in_FS_OFFSET;
  ulong local_58;
  TaskScheduler *pTStack_50;
  ulong local_48;
  ulong uStack_40;
  _lambda_embree__range<unsigned_long>_const___1_ *local_38;
  TaskGroupContext *pTStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_1;
  pTStack_50 = this;
  local_48 = param_2;
  uStack_40 = param_3;
  local_38 = param_4;
  pTStack_30 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this_00,(_lambda___1_ *)&local_58,param_5,param_1 - (long)this,true);
LAB_001002e2:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x38 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40088 + uVar2);
      *puVar3 = &PTR_execute_00102080;
      puVar3[1] = local_58;
      puVar3[2] = pTStack_50;
      puVar3[3] = local_48;
      puVar3[4] = uStack_40;
      puVar3[5] = local_38;
      puVar3[6] = pTStack_30;
      lVar7 = *(long *)(lVar6 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar6 + 0x40 + lVar7);
      lVar5 = *(long *)(lVar6 + 0xc0100);
      *(undefined4 *)(lVar6 + 0x44 + lVar7) = 1;
      *(undefined1 *)(lVar6 + 0x48 + lVar7) = 1;
      lVar7 = lVar7 + lVar6;
      *(undefined8 **)(lVar7 + 0x50) = puVar3;
      *(long *)(lVar7 + 0x58) = lVar5;
      *(TaskGroupContext **)(lVar7 + 0x60) = param_5;
      *(long *)(lVar7 + 0x68) = lVar4;
      *(ulong *)(lVar7 + 0x70) = param_1 - (long)this;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar6 + 0x40080) = *(long *)(lVar6 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar6 + 0x40080) - 1U <= *(ulong *)(lVar6 + 0x40040)) {
        LOCK();
        *(long *)(lVar6 + 0x40040) = *(long *)(lVar6 + 0x40080) + -1;
        UNLOCK();
      }
      goto LAB_001002e2;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::Builder::deleteGeometry(unsigned long) */

void embree::Builder::deleteGeometry(ulong param_1)

{
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::clear() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::clear
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001003a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x30))();
    return;
  }
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



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong *in_RDX;
  ulong uVar9;
  long lVar10;
  long in_RSI;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar7 = _LC1;
  uVar3 = *in_RDX;
  uVar9 = (ulong)((uint)uVar3 & 0xf);
  uVar11 = uVar3 & 0xfffffffffffffff0;
  if (uVar3 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 8) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    uVar7 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 0x18) = uVar7;
    *(undefined4 *)(param_1 + 0x1c) = uVar7;
    return param_1;
  }
  if (uVar9 == 8) {
    auVar19._4_4_ = _LC1;
    auVar19._0_4_ = _LC1;
    auVar19._8_4_ = _LC1;
    auVar19._12_4_ = _LC1;
    auVar18._4_4_ = _LC3;
    auVar18._0_4_ = _LC3;
    auVar18._8_4_ = _LC3;
    auVar18._12_4_ = _LC3;
  }
  else {
    lVar4 = *(long *)(in_RSI + 0x30);
    lVar1 = uVar11 - 0x280;
    auVar19._4_4_ = _LC1;
    auVar19._0_4_ = _LC1;
    auVar19._8_4_ = _LC1;
    auVar19._12_4_ = _LC1;
    auVar18._4_4_ = _LC3;
    auVar18._0_4_ = _LC3;
    auVar18._8_4_ = _LC3;
    auVar18._12_4_ = _LC3;
    do {
      auVar16._4_4_ = _LC1;
      auVar16._0_4_ = _LC1;
      auVar16._8_4_ = _LC1;
      auVar16._12_4_ = _LC1;
      auVar15._4_4_ = _LC3;
      auVar15._0_4_ = _LC3;
      auVar15._8_4_ = _LC3;
      auVar15._12_4_ = _LC3;
      lVar10 = 0;
      do {
        uVar2 = *(uint *)(uVar11 + 0x40 + lVar10 * 4);
        if (uVar2 == 0xffffffff) break;
        puVar8 = (uint *)((ulong)uVar2 * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
        lVar10 = lVar10 + 1;
        lVar5 = *(long *)(lVar4 + 0x90);
        lVar6 = *(long *)(lVar4 + 0x88);
        auVar12 = *(undefined1 (*) [16])(lVar6 + (ulong)*puVar8 * lVar5);
        auVar13 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar8[1] * lVar5);
        auVar14 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar8[2] * lVar5);
        auVar17 = maxps(auVar13,auVar14);
        auVar13 = minps(auVar13,auVar14);
        auVar14 = maxps(auVar12,auVar17);
        auVar12 = minps(auVar12,auVar13);
        auVar15 = maxps(auVar15,auVar14);
        auVar16 = minps(auVar16,auVar12);
      } while (lVar10 != 4);
      uVar11 = uVar11 + 0x50;
      auVar19 = minps(auVar19,auVar16);
      auVar18 = maxps(auVar18,auVar15);
    } while (lVar1 + uVar9 * 0x50 != uVar11);
  }
  *(undefined1 (*) [16])param_1 = auVar19;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar18;
  return param_1;
}



/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> * __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this,NodeRefPtr *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  uint *puVar8;
  ulong *in_RDX;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar7 = _LC1;
  uVar3 = *in_RDX;
  uVar9 = (ulong)((uint)uVar3 & 0xf);
  uVar11 = uVar3 & 0xfffffffffffffff0;
  if (uVar3 == 8) {
    *(undefined4 *)this = _LC1;
    *(undefined4 *)(this + 4) = uVar7;
    *(undefined4 *)(this + 8) = uVar7;
    *(undefined4 *)(this + 0xc) = uVar7;
    uVar7 = _LC3;
    *(undefined4 *)(this + 0x10) = _LC3;
    *(undefined4 *)(this + 0x14) = uVar7;
    *(undefined4 *)(this + 0x18) = uVar7;
    *(undefined4 *)(this + 0x1c) = uVar7;
    return this;
  }
  if (uVar9 == 8) {
    auVar18._4_4_ = _LC3;
    auVar18._0_4_ = _LC3;
    auVar18._8_4_ = _LC3;
    auVar18._12_4_ = _LC3;
    auVar19._4_4_ = _LC1;
    auVar19._0_4_ = _LC1;
    auVar19._8_4_ = _LC1;
    auVar19._12_4_ = _LC1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    lVar1 = uVar11 - 0x280;
    auVar18._4_4_ = _LC3;
    auVar18._0_4_ = _LC3;
    auVar18._8_4_ = _LC3;
    auVar18._12_4_ = _LC3;
    auVar19._4_4_ = _LC1;
    auVar19._0_4_ = _LC1;
    auVar19._8_4_ = _LC1;
    auVar19._12_4_ = _LC1;
    do {
      auVar15._4_4_ = _LC3;
      auVar15._0_4_ = _LC3;
      auVar15._8_4_ = _LC3;
      auVar15._12_4_ = _LC3;
      auVar16._4_4_ = _LC1;
      auVar16._0_4_ = _LC1;
      auVar16._8_4_ = _LC1;
      auVar16._12_4_ = _LC1;
      lVar10 = 0;
      do {
        uVar2 = *(uint *)(uVar11 + 0x40 + lVar10 * 4);
        if (uVar2 == 0xffffffff) break;
        puVar8 = (uint *)((ulong)uVar2 * *(long *)(lVar4 + 0x60) + *(long *)(lVar4 + 0x58));
        lVar10 = lVar10 + 1;
        lVar5 = *(long *)(lVar4 + 0x90);
        lVar6 = *(long *)(lVar4 + 0x88);
        auVar12 = *(undefined1 (*) [16])(lVar6 + (ulong)*puVar8 * lVar5);
        auVar13 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar8[1] * lVar5);
        auVar14 = *(undefined1 (*) [16])(lVar6 + (ulong)puVar8[2] * lVar5);
        auVar17 = maxps(auVar13,auVar14);
        auVar13 = minps(auVar13,auVar14);
        auVar14 = maxps(auVar12,auVar17);
        auVar12 = minps(auVar12,auVar13);
        auVar15 = maxps(auVar15,auVar14);
        auVar16 = minps(auVar16,auVar12);
      } while (lVar10 != 4);
      uVar11 = uVar11 + 0x50;
      auVar19 = minps(auVar19,auVar16);
      auVar18 = maxps(auVar18,auVar15);
    } while (uVar11 != lVar1 + uVar9 * 0x50);
  }
  *(undefined1 (*) [16])this = auVar19;
  *(undefined1 (*) [16])(this + 0x10) = auVar18;
  return this;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong *in_RDX;
  long lVar16;
  long in_RSI;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint local_f8 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  uVar11 = _LC3;
  uVar10 = _LC1;
  uVar6 = *in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (ulong)((uint)uVar6 & 0xf);
  if (uVar6 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar10;
    *(undefined4 *)(param_1 + 8) = uVar10;
    *(undefined4 *)(param_1 + 0xc) = uVar10;
    uVar10 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar10;
    *(undefined4 *)(param_1 + 0x18) = uVar10;
    *(undefined4 *)(param_1 + 0x1c) = uVar10;
  }
  else {
    if (uVar12 == 8) {
      auVar21._4_4_ = _LC1;
      auVar21._0_4_ = _LC1;
      auVar21._8_4_ = _LC1;
      auVar21._12_4_ = _LC1;
      auVar20._4_4_ = _LC3;
      auVar20._0_4_ = _LC3;
      auVar20._8_4_ = _LC3;
      auVar20._12_4_ = _LC3;
    }
    else {
      auVar21._4_4_ = _LC1;
      auVar21._0_4_ = _LC1;
      auVar21._8_4_ = _LC1;
      auVar21._12_4_ = _LC1;
      auVar20._4_4_ = _LC3;
      auVar20._0_4_ = _LC3;
      auVar20._8_4_ = _LC3;
      auVar20._12_4_ = _LC3;
      puVar14 = (undefined8 *)(uVar6 & 0xfffffffffffffff0);
      do {
        lVar7 = *(long *)(in_RSI + 0x30);
        local_f8[0] = 0xffffffff;
        local_f8[1] = 0xffffffff;
        local_f8[2] = 0xffffffff;
        local_f8[3] = 0xffffffff;
        local_f8[4] = 0xffffffff;
        local_f8[5] = 0xffffffff;
        local_f8[6] = 0xffffffff;
        local_f8[7] = 0xffffffff;
        auVar23._4_4_ = uVar10;
        auVar23._0_4_ = uVar10;
        auVar23._8_4_ = uVar10;
        auVar23._12_4_ = uVar10;
        auVar22._4_4_ = uVar11;
        auVar22._0_4_ = uVar11;
        auVar22._8_4_ = uVar11;
        auVar22._12_4_ = uVar11;
        local_d8 = (undefined1  [16])0x0;
        lVar16 = 0;
        local_c8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        local_a8 = (undefined1  [16])0x0;
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        puVar17 = (undefined4 *)local_78;
        puVar18 = (undefined4 *)local_a8;
        puVar19 = (undefined4 *)local_d8;
        do {
          uVar4 = *(uint *)((long)puVar14 + lVar16 * 4 + 0xa0);
          if (uVar4 == 0xffffffff) break;
          puVar13 = (uint *)((ulong)uVar4 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
          uVar5 = *puVar13;
          local_f8[lVar16 + 4] = uVar4;
          lVar8 = *(long *)(lVar7 + 0x90);
          lVar9 = *(long *)(lVar7 + 0x88);
          auVar1 = *(undefined1 (*) [16])(lVar9 + (ulong)uVar5 * lVar8);
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          *puVar19 = auVar1._0_4_;
          puVar19[8] = auVar1._8_4_;
          auVar2 = *(undefined1 (*) [16])(lVar9 + (ulong)uVar4 * lVar8);
          auVar3 = *(undefined1 (*) [16])(lVar9 + (ulong)uVar5 * lVar8);
          uVar4 = *(uint *)((long)puVar14 + lVar16 * 4 + 0x90);
          *puVar18 = auVar2._0_4_;
          auVar24 = maxps(auVar2,auVar3);
          auVar25 = minps(auVar2,auVar3);
          local_f8[lVar16] = uVar4;
          *puVar17 = auVar3._0_4_;
          lVar16 = lVar16 + 1;
          puVar17[4] = auVar3._4_4_;
          auVar24 = maxps(auVar1,auVar24);
          puVar18[4] = auVar2._4_4_;
          auVar25 = minps(auVar1,auVar25);
          puVar17[8] = auVar3._8_4_;
          auVar22 = maxps(auVar22,auVar24);
          puVar18[8] = auVar2._8_4_;
          auVar23 = minps(auVar23,auVar25);
          puVar19[4] = auVar1._4_4_;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar16 != 4);
        auVar21 = minps(auVar21,auVar23);
        auVar20 = maxps(auVar20,auVar22);
        puVar15 = puVar14 + 0x16;
        *puVar14 = local_d8._0_8_;
        puVar14[1] = local_d8._8_8_;
        puVar14[2] = local_c8._0_8_;
        puVar14[3] = local_c8._8_8_;
        puVar14[4] = local_b8._0_8_;
        puVar14[5] = local_b8._8_8_;
        puVar14[6] = local_a8._0_8_;
        puVar14[7] = local_a8._8_8_;
        puVar14[8] = local_98._0_8_;
        puVar14[9] = local_98._8_8_;
        puVar14[10] = local_88._0_8_;
        puVar14[0xb] = local_88._8_8_;
        puVar14[0xc] = local_78._0_8_;
        puVar14[0xd] = local_78._8_8_;
        puVar14[0xe] = local_68._0_8_;
        puVar14[0xf] = local_68._8_8_;
        puVar14[0x10] = local_58._0_8_;
        puVar14[0x11] = local_58._8_8_;
        puVar14[0x12] = CONCAT44(local_f8[1],local_f8[0]);
        puVar14[0x13] = CONCAT44(local_f8[3],local_f8[2]);
        puVar14[0x14] = CONCAT44(local_f8[5],local_f8[4]);
        puVar14[0x15] = CONCAT44(local_f8[7],local_f8[6]);
        puVar14 = puVar15;
      } while (puVar15 != (undefined8 *)(uVar6 & 0xfffffffffffffff0) + uVar12 * 0x16 + -0xb0);
    }
    *(undefined1 (*) [16])param_1 = auVar21;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar20;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this,NodeRefPtr *param_1)

{
  leafBounds((NodeRefPtr *)this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

NodeRefPtr *
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::leafBounds
          (NodeRefPtr *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  ulong *in_RDX;
  float *pfVar15;
  float *pfVar16;
  long in_RSI;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float local_f8 [8];
  undefined1 local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  uVar11 = _LC1;
  uVar7 = *in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar12 = (ulong)((uint)uVar7 & 0xf);
  if (uVar7 == 8) {
    *(undefined4 *)param_1 = _LC1;
    *(undefined4 *)(param_1 + 4) = uVar11;
    *(undefined4 *)(param_1 + 8) = uVar11;
    *(undefined4 *)(param_1 + 0xc) = uVar11;
    uVar11 = _LC3;
    *(undefined4 *)(param_1 + 0x10) = _LC3;
    *(undefined4 *)(param_1 + 0x14) = uVar11;
    *(undefined4 *)(param_1 + 0x18) = uVar11;
    *(undefined4 *)(param_1 + 0x1c) = uVar11;
  }
  else {
    if (uVar12 == 8) {
      auVar25._4_4_ = _LC1;
      auVar25._0_4_ = _LC1;
      auVar25._8_4_ = _LC1;
      auVar25._12_4_ = _LC1;
      auVar24._4_4_ = _LC3;
      auVar24._0_4_ = _LC3;
      auVar24._8_4_ = _LC3;
      auVar24._12_4_ = _LC3;
    }
    else {
      auVar24._4_12_ = _UNK_00102094;
      auVar24._0_4_ = _LC3;
      auVar25._4_4_ = _LC1;
      auVar25._0_4_ = _LC1;
      auVar25._8_4_ = _LC1;
      auVar25._12_4_ = _LC1;
      pfVar15 = (float *)(uVar7 & 0xfffffffffffffff0);
      do {
        lVar8 = *(long *)(in_RSI + 0x30);
        local_f8[0] = -NAN;
        local_f8[1] = -NAN;
        local_f8[2] = -NAN;
        local_f8[3] = -NAN;
        local_f8[4] = -NAN;
        local_f8[5] = -NAN;
        local_f8[6] = -NAN;
        local_f8[7] = -NAN;
        auVar21._4_4_ = uVar11;
        auVar21._0_4_ = uVar11;
        auVar21._8_4_ = uVar11;
        auVar21._12_4_ = uVar11;
        lVar14 = 0;
        auVar20._4_12_ = _UNK_00102094;
        auVar20._0_4_ = _LC3;
        _local_d8 = (undefined1  [16])0x0;
        _local_c8 = (undefined1  [16])0x0;
        _local_b8 = (undefined1  [16])0x0;
        _local_a8 = (undefined1  [16])0x0;
        _local_98 = (undefined1  [16])0x0;
        _local_88 = (undefined1  [16])0x0;
        _local_78 = (undefined1  [16])0x0;
        _local_68 = (undefined1  [16])0x0;
        _local_58 = (undefined1  [16])0x0;
        puVar17 = (undefined4 *)local_78;
        puVar18 = (undefined4 *)local_a8;
        puVar19 = (undefined4 *)local_d8;
        do {
          if (pfVar15[lVar14 + 0x24] == -NAN) break;
          fVar4 = pfVar15[lVar14 + 0x28];
          lVar9 = *(long *)(lVar8 + 0x60);
          local_f8[lVar14] = pfVar15[lVar14 + 0x24];
          puVar13 = (uint *)((ulong)(uint)fVar4 * lVar9 + *(long *)(lVar8 + 0x58));
          lVar9 = *(long *)(lVar8 + 0x90);
          lVar10 = *(long *)(lVar8 + 0x88);
          auVar1 = *(undefined1 (*) [16])(lVar10 + (ulong)*puVar13 * lVar9);
          uVar5 = puVar13[1];
          uVar6 = puVar13[2];
          *puVar19 = auVar1._0_4_;
          auVar2 = *(undefined1 (*) [16])(lVar10 + (ulong)uVar5 * lVar9);
          auVar3 = *(undefined1 (*) [16])(lVar10 + (ulong)uVar6 * lVar9);
          fVar4 = pfVar15[lVar14 + 0x28];
          *puVar18 = auVar2._0_4_;
          auVar22 = maxps(auVar2,auVar3);
          auVar23 = minps(auVar2,auVar3);
          *puVar17 = auVar3._0_4_;
          local_f8[lVar14 + 4] = fVar4;
          lVar14 = lVar14 + 1;
          auVar22 = maxps(auVar1,auVar22);
          auVar23 = minps(auVar1,auVar23);
          auVar20 = maxps(auVar20,auVar22);
          puVar19[4] = auVar1._4_4_;
          auVar21 = minps(auVar21,auVar23);
          puVar19[8] = auVar1._8_4_;
          puVar18[4] = auVar2._4_4_;
          puVar18[8] = auVar2._8_4_;
          puVar17[4] = auVar3._4_4_;
          puVar17[8] = auVar3._8_4_;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
          puVar19 = puVar19 + 1;
        } while (lVar14 != 4);
        pfVar16 = pfVar15 + 0x2c;
        auVar25 = minps(auVar25,auVar21);
        auVar24 = maxps(auVar24,auVar20);
        pfVar15[8] = (float)local_b8._0_4_;
        pfVar15[9] = (float)local_b8._4_4_;
        pfVar15[10] = fStack_b0;
        pfVar15[0xb] = fStack_ac;
        *pfVar15 = (float)local_d8._0_4_;
        pfVar15[1] = (float)local_d8._4_4_;
        pfVar15[2] = fStack_d0;
        pfVar15[3] = fStack_cc;
        pfVar15[0x20] = (float)local_58._0_4_ - (float)local_b8._0_4_;
        pfVar15[0x21] = (float)local_58._4_4_ - (float)local_b8._4_4_;
        pfVar15[0x22] = fStack_50 - fStack_b0;
        pfVar15[0x23] = fStack_4c - fStack_ac;
        pfVar15[4] = (float)local_c8._0_4_;
        pfVar15[5] = (float)local_c8._4_4_;
        pfVar15[6] = fStack_c0;
        pfVar15[7] = fStack_bc;
        pfVar15[0xc] = (float)local_d8._0_4_ - (float)local_a8._0_4_;
        pfVar15[0xd] = (float)local_d8._4_4_ - (float)local_a8._4_4_;
        pfVar15[0xe] = fStack_d0 - fStack_a0;
        pfVar15[0xf] = fStack_cc - fStack_9c;
        pfVar15[0x10] = (float)local_c8._0_4_ - (float)local_98._0_4_;
        pfVar15[0x11] = (float)local_c8._4_4_ - (float)local_98._4_4_;
        pfVar15[0x12] = fStack_c0 - fStack_90;
        pfVar15[0x13] = fStack_bc - fStack_8c;
        pfVar15[0x14] = (float)local_b8._0_4_ - (float)local_88._0_4_;
        pfVar15[0x15] = (float)local_b8._4_4_ - (float)local_88._4_4_;
        pfVar15[0x16] = fStack_b0 - fStack_80;
        pfVar15[0x17] = fStack_ac - fStack_7c;
        pfVar15[0x18] = (float)local_78._0_4_ - (float)local_d8._0_4_;
        pfVar15[0x19] = (float)local_78._4_4_ - (float)local_d8._4_4_;
        pfVar15[0x1a] = fStack_70 - fStack_d0;
        pfVar15[0x1b] = fStack_6c - fStack_cc;
        pfVar15[0x1c] = (float)local_68._0_4_ - (float)local_c8._0_4_;
        pfVar15[0x1d] = (float)local_68._4_4_ - (float)local_c8._4_4_;
        pfVar15[0x1e] = fStack_60 - fStack_c0;
        pfVar15[0x1f] = fStack_5c - fStack_bc;
        *(ulong *)(pfVar15 + 0x24) = CONCAT44(local_f8[1],local_f8[0]);
        *(ulong *)(pfVar15 + 0x26) = CONCAT44(local_f8[3],local_f8[2]);
        *(ulong *)(pfVar15 + 0x28) = CONCAT44(local_f8[5],local_f8[4]);
        *(ulong *)(pfVar15 + 0x2a) = CONCAT44(local_f8[7],local_f8[6]);
        pfVar15 = pfVar16;
      } while (pfVar16 != (float *)(uVar7 & 0xfffffffffffffff0) + uVar12 * 0x2c + -0x160);
    }
    *(undefined1 (*) [16])param_1 = auVar25;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar24;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* non-virtual thunk to embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4>
   >::leafBounds(embree::NodeRefPtr<4>&) const */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::leafBounds
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this,NodeRefPtr *param_1)

{
  leafBounds((NodeRefPtr *)this);
  return;
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
                    /* WARNING: Could not recover jumptable at 0x00100cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00101f48;
  *(undefined **)(this + 0x10) = &DAT_00101f98;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00101f48;
  *(undefined **)(this + 0x10) = &DAT_00101f98;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100d6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00102018;
  *(undefined **)(this + 0x10) = &DAT_00102068;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100dbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00101fb0;
  *(undefined **)(this + 0x10) = &DAT_00102000;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 8))();
    return;
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00101fb0;
  *(undefined **)(this + 0x10) = &DAT_00102000;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  *(undefined ***)this = &PTR__BVHNRefitT_00102018;
  *(undefined **)(this + 0x10) = &DAT_00102068;
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x28),0x818);
  }
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 8))();
  }
  operator_delete(this,0x40);
  return;
}



/* embree::sse2::BVHNRefitter<4>::BVHNRefitter(embree::BVHN<4>*,
   embree::sse2::BVHNRefitter<4>::LeafBoundsInterface const&) */

void __thiscall
embree::sse2::BVHNRefitter<4>::BVHNRefitter
          (BVHNRefitter<4> *this,BVHN *param_1,LeafBoundsInterface *param_2)

{
  *(BVHN **)this = param_1;
  *(LeafBoundsInterface **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* embree::sse2::BVHNRefitter<4>::gather_subtree_refs(embree::NodeRefPtr<4>&, unsigned long&,
   unsigned long) */

void __thiscall
embree::sse2::BVHNRefitter<4>::gather_subtree_refs
          (BVHNRefitter<4> *this,NodeRefPtr *param_1,ulong *param_2,ulong param_3)

{
  NodeRefPtr *pNVar1;
  ulong uVar2;
  NodeRefPtr *pNVar3;
  
  if (param_3 < 4) {
    pNVar3 = *(NodeRefPtr **)param_1;
    if (((ulong)pNVar3 & 0xf) == 0) {
      pNVar1 = pNVar3 + 0x20;
      do {
        if (*(long *)pNVar3 != 8) {
          gather_subtree_refs(this,pNVar3,param_2,param_3 + 1);
        }
        pNVar3 = pNVar3 + 8;
      } while (pNVar3 != pNVar1);
    }
    return;
  }
  uVar2 = *param_2;
  *param_2 = uVar2 + 1;
  *(undefined8 *)(this + uVar2 * 8 + 0x18) = *(undefined8 *)param_1;
  return;
}



/* embree::sse2::BVHNRefitter<4>::refit_toplevel(embree::NodeRefPtr<4>&, unsigned long&,
   embree::BBox<embree::Vec3fa> const*, unsigned long) */

NodeRefPtr *
embree::sse2::BVHNRefitter<4>::refit_toplevel
          (NodeRefPtr *param_1,ulong *param_2,BBox *param_3,ulong param_4)

{
  BBox *pBVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  BBox *pBVar4;
  long in_R8;
  ulong in_R9;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_R9 < 4) {
    pBVar1 = *(BBox **)param_3;
    if (((ulong)pBVar1 & 0xf) == 0) {
      puVar3 = (undefined8 *)local_c8;
      pBVar4 = pBVar1;
      do {
        if (*(long *)pBVar4 == 8) {
          *(undefined4 *)puVar3 = _LC1;
          *(undefined4 *)((long)puVar3 + 4) = _LC1;
          *(undefined4 *)(puVar3 + 1) = _LC1;
          *(undefined4 *)((long)puVar3 + 0xc) = _LC1;
          *(undefined4 *)(puVar3 + 2) = _LC3;
          *(undefined4 *)((long)puVar3 + 0x14) = _LC3;
          *(undefined4 *)(puVar3 + 3) = _LC3;
          *(undefined4 *)((long)puVar3 + 0x1c) = _LC3;
        }
        else {
          refit_toplevel((NodeRefPtr *)&local_e8,param_2,pBVar4,param_4);
          *puVar3 = local_e8;
          puVar3[1] = uStack_e0;
          puVar3[2] = local_d8;
          puVar3[3] = uStack_d0;
        }
        puVar3 = puVar3 + 4;
        pBVar4 = pBVar4 + 8;
      } while (&local_48 != puVar3);
      auVar6 = minps(local_c8,local_a8);
      auVar8 = minps(local_88,local_68);
      *(int *)(pBVar1 + 0x20) = local_c8._0_4_;
      *(int *)(pBVar1 + 0x24) = local_a8._0_4_;
      *(int *)(pBVar1 + 0x28) = local_88._0_4_;
      *(int *)(pBVar1 + 0x2c) = local_68._0_4_;
      auVar5 = maxps(local_b8,local_98);
      *(int *)(pBVar1 + 0x40) = local_c8._4_4_;
      *(int *)(pBVar1 + 0x44) = local_a8._4_4_;
      *(int *)(pBVar1 + 0x48) = local_88._4_4_;
      *(int *)(pBVar1 + 0x4c) = local_68._4_4_;
      auVar7 = maxps(local_78,local_58);
      *(int *)(pBVar1 + 0x60) = local_c8._8_4_;
      *(int *)(pBVar1 + 100) = local_a8._8_4_;
      *(int *)(pBVar1 + 0x68) = local_88._8_4_;
      *(int *)(pBVar1 + 0x6c) = local_68._8_4_;
      auVar6 = minps(auVar6,auVar8);
      *(int *)(pBVar1 + 0x70) = local_b8._8_4_;
      *(int *)(pBVar1 + 0x74) = local_98._8_4_;
      *(int *)(pBVar1 + 0x78) = local_78._8_4_;
      *(int *)(pBVar1 + 0x7c) = local_58._8_4_;
      auVar5 = maxps(auVar5,auVar7);
      *(int *)(pBVar1 + 0x30) = local_b8._0_4_;
      *(int *)(pBVar1 + 0x34) = local_98._0_4_;
      *(int *)(pBVar1 + 0x38) = local_78._0_4_;
      *(int *)(pBVar1 + 0x3c) = local_58._0_4_;
      *(int *)(pBVar1 + 0x50) = local_b8._4_4_;
      *(int *)(pBVar1 + 0x54) = local_98._4_4_;
      *(int *)(pBVar1 + 0x58) = local_78._4_4_;
      *(int *)(pBVar1 + 0x5c) = local_58._4_4_;
      *(undefined1 (*) [16])param_1 = auVar6;
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
    }
    else {
      (*(code *)**(undefined8 **)param_2[1])();
    }
  }
  else {
    puVar3 = (undefined8 *)(*(long *)param_4 * 0x20 + in_R8);
    *(long *)param_4 = *(long *)param_4 + 1;
    uVar2 = puVar3[1];
    *(undefined8 *)param_1 = *puVar3;
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar2 = puVar3[3];
    *(undefined8 *)(param_1 + 0x10) = puVar3[2];
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* embree::sse2::BVHNRefitter<4>::recurse_bottom(embree::NodeRefPtr<4>&) */

NodeRefPtr * embree::sse2::BVHNRefitter<4>::recurse_bottom(NodeRefPtr *param_1)

{
  long *plVar1;
  ulong *in_RDX;
  undefined8 *puVar2;
  long *plVar3;
  long in_RSI;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  plVar1 = (long *)*in_RDX;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (undefined8 *)local_c8;
  plVar3 = plVar1;
  if (((ulong)plVar1 & 8) == 0) {
    do {
      if (*plVar3 == 8) {
        *(undefined4 *)puVar2 = _LC1;
        *(undefined4 *)((long)puVar2 + 4) = _LC1;
        *(undefined4 *)(puVar2 + 1) = _LC1;
        *(undefined4 *)((long)puVar2 + 0xc) = _LC1;
        *(undefined4 *)(puVar2 + 2) = _LC3;
        *(undefined4 *)((long)puVar2 + 0x14) = _LC3;
        *(undefined4 *)(puVar2 + 3) = _LC3;
        *(undefined4 *)((long)puVar2 + 0x1c) = _LC3;
      }
      else {
        recurse_bottom((NodeRefPtr *)&local_e8);
        *puVar2 = local_e8;
        puVar2[1] = uStack_e0;
        puVar2[2] = local_d8;
        puVar2[3] = uStack_d0;
      }
      puVar2 = puVar2 + 4;
      plVar3 = plVar3 + 1;
    } while (&local_48 != puVar2);
    auVar7 = minps(local_88,local_68);
    auVar5 = minps(local_c8,local_a8);
    auVar4 = maxps(local_b8,local_98);
    *(int *)(plVar1 + 4) = local_c8._0_4_;
    *(int *)((long)plVar1 + 0x24) = local_a8._0_4_;
    *(int *)(plVar1 + 5) = local_88._0_4_;
    *(int *)((long)plVar1 + 0x2c) = local_68._0_4_;
    auVar6 = maxps(local_78,local_58);
    *(int *)(plVar1 + 8) = local_c8._4_4_;
    *(int *)((long)plVar1 + 0x44) = local_a8._4_4_;
    *(int *)(plVar1 + 9) = local_88._4_4_;
    *(int *)((long)plVar1 + 0x4c) = local_68._4_4_;
    auVar5 = minps(auVar5,auVar7);
    *(int *)(plVar1 + 0xc) = local_c8._8_4_;
    *(int *)((long)plVar1 + 100) = local_a8._8_4_;
    *(int *)(plVar1 + 0xd) = local_88._8_4_;
    *(int *)((long)plVar1 + 0x6c) = local_68._8_4_;
    auVar4 = maxps(auVar4,auVar6);
    *(int *)(plVar1 + 6) = local_b8._0_4_;
    *(int *)((long)plVar1 + 0x34) = local_98._0_4_;
    *(int *)(plVar1 + 7) = local_78._0_4_;
    *(int *)((long)plVar1 + 0x3c) = local_58._0_4_;
    *(int *)(plVar1 + 10) = local_b8._4_4_;
    *(int *)((long)plVar1 + 0x54) = local_98._4_4_;
    *(int *)(plVar1 + 0xb) = local_78._4_4_;
    *(int *)((long)plVar1 + 0x5c) = local_58._4_4_;
    *(int *)(plVar1 + 0xe) = local_b8._8_4_;
    *(int *)((long)plVar1 + 0x74) = local_98._8_4_;
    *(int *)(plVar1 + 0xf) = local_78._8_4_;
    *(int *)((long)plVar1 + 0x7c) = local_58._8_4_;
    *(undefined1 (*) [16])param_1 = auVar5;
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar4;
  }
  else {
    (**(code **)**(undefined8 **)(in_RSI + 8))();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101725) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  Thread *pTVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  long lVar15;
  Thread *pTVar16;
  Thread *pTVar17;
  long lVar18;
  Thread *pTVar19;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar15 = embree::TaskScheduler::allocThreadIndex();
  pTVar16 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
  }
  *(long *)pTVar16 = lVar15;
  pTVar19 = pTVar16 + 0x40;
  pTVar17 = pTVar19;
  do {
    *(undefined4 *)pTVar17 = 0;
    pTVar17 = pTVar17 + 0x40;
  } while (pTVar16 + 0x40040 != pTVar17);
  *(undefined8 *)(pTVar16 + 0x40040) = 0;
  *(undefined8 *)(pTVar16 + 0x40080) = 0;
  *(undefined8 *)(pTVar16 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar16 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar16 + 0xc0108) = this;
  if (this != (TaskScheduler *)0x0) {
    if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
      LOCK();
      *(long *)(this + 8) = *(long *)(this + 8) + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*(long *)this + 0x10))(this);
    }
    if (*(code **)(*(long *)this + 0x18) == RefCount::refDec) {
      LOCK();
      pTVar1 = this + 8;
      *(long *)pTVar1 = *(long *)pTVar1 + -1;
      UNLOCK();
      if (*(long *)pTVar1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
    }
    else {
      (**(code **)(*(long *)this + 0x18))(this);
    }
  }
  LOCK();
  *(Thread **)(*(long *)(this + 0x10) + lVar15 * 8) = pTVar16;
  UNLOCK();
  local_48 = pTVar16;
  pTVar17 = (Thread *)embree::TaskScheduler::swapThread(pTVar16);
  if (*(ulong *)(pTVar16 + 0x40080) < 0x1000) {
    lVar5 = *(long *)(pTVar16 + 0xc00c0);
    uVar3 = lVar5 + 0x38 + (ulong)(-(int)lVar5 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar16 + 0xc00c0) = uVar3;
      pTVar4 = pTVar16 + uVar3 + 0x40088;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      *(undefined ***)pTVar4 = &PTR_execute_00102080;
      *(undefined8 *)(pTVar4 + 8) = uVar8;
      *(undefined8 *)(pTVar4 + 0x10) = uVar9;
      *(undefined8 *)(pTVar4 + 0x18) = uVar10;
      *(undefined8 *)(pTVar4 + 0x20) = uVar11;
      *(undefined8 *)(pTVar4 + 0x28) = uVar12;
      *(undefined8 *)(pTVar4 + 0x30) = uVar13;
      lVar18 = *(long *)(pTVar16 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar16 + 0xc0100);
      pTVar16[lVar18 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar16 + lVar18 + 0x44) = 1;
      *(Thread **)(pTVar16 + lVar18 + 0x50) = pTVar4;
      *(long *)(pTVar16 + lVar18 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar16 + lVar18 + 0x60) = param_2;
      *(long *)(pTVar16 + lVar18 + 0x68) = lVar5;
      *(ulong *)(pTVar16 + lVar18 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar19 + lVar18) == 0) {
        *(undefined4 *)(pTVar19 + lVar18) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar16 + 0x40080) = *(long *)(pTVar16 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar16 + 0x40080) - 1U <= *(ulong *)(pTVar16 + 0x40040)) {
        LOCK();
        *(long *)(pTVar16 + 0x40040) = *(long *)(pTVar16 + 0x40080) + -1;
        UNLOCK();
      }
      embree::MutexSys::lock();
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + 1;
      UNLOCK();
      LOCK();
      this[0x38] = (TaskScheduler)0x1;
      UNLOCK();
      embree::ConditionSys::notify_all();
      embree::MutexSys::unlock();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::addScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar4 = local_48 + 8;
            *(long *)pTVar4 = *(long *)pTVar4 + -1;
            UNLOCK();
            if (*(long *)pTVar4 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar14 = embree::TaskScheduler::TaskQueue::execute_local(pTVar19,(Task *)pTVar16);
      } while (cVar14 != '\0');
      LOCK();
      *(long *)(this + 0x30) = *(long *)(this + 0x30) + -1;
      UNLOCK();
      if (param_4) {
        local_48 = (Thread *)this;
        if (this != (TaskScheduler *)0x0) {
          if (*(code **)(*(long *)this + 0x10) == RefCount::refInc) {
            LOCK();
            *(long *)(this + 8) = *(long *)(this + 8) + 1;
            UNLOCK();
          }
          else {
            (**(code **)(*(long *)this + 0x10))(this);
          }
        }
        embree::TaskScheduler::removeScheduler((Ref *)&local_48);
        if (local_48 != (Thread *)0x0) {
          if (*(code **)(*(long *)local_48 + 0x18) == RefCount::refDec) {
            LOCK();
            pTVar1 = (TaskScheduler *)(local_48 + 8);
            *(long *)pTVar1 = *(long *)pTVar1 + -1;
            UNLOCK();
            if (*(long *)pTVar1 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      local_48 = (Thread *)0x0;
      LOCK();
      *(undefined8 *)(lVar15 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar17);
      pTVar19 = *(Thread **)param_2;
      if (pTVar19 != (Thread *)0x0) {
        local_48 = pTVar19;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar19 = local_48;
      }
      LOCK();
      *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
      UNLOCK();
      while (*(long *)(this + 0x28) != 0) {
        embree::yield();
      }
      local_48 = *(Thread **)param_2;
      *(undefined8 *)param_2 = 0;
      if (local_48 != (Thread *)0x0) {
        std::__exception_ptr::exception_ptr::_M_release();
      }
      if (pTVar19 == (Thread *)0x0) {
        if (pTVar16 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar16 + 0xc0108);
          if (plVar7 != (long *)0x0) {
            if (*(code **)(*plVar7 + 0x18) == RefCount::refDec) {
              LOCK();
              plVar2 = plVar7 + 1;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                (**(code **)(*plVar7 + 8))();
              }
            }
            else {
              (**(code **)(*plVar7 + 0x18))();
            }
          }
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            embree::alignedFree(pTVar16);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar19;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1}>(unsigned
   long, unsigned long, unsigned long,
   embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned long> const&)#1} const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  TaskScheduler *pTVar1;
  undefined8 *puVar2;
  TaskScheduler *this_00;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  pTVar1 = *(TaskScheduler **)(this + 8);
  this_00 = *(TaskScheduler **)(this + 0x10);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(this + 0x18) < (ulong)((long)pTVar1 - (long)this_00)) {
    spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
              (this_00,(ulong)(pTVar1 + (long)this_00) >> 1,*(ulong *)(this + 0x18),
               *(ulong *)(this + 0x20),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x28),
               *(TaskGroupContext **)(this + 0x30));
    spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
              ((TaskScheduler *)((ulong)(pTVar1 + (long)this_00) >> 1),*(ulong *)(this + 8),
               *(ulong *)(this + 0x18),*(ulong *)(this + 0x20),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x28),
               *(TaskGroupContext **)(this + 0x30));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    for (; this_00 < pTVar1; this_00 = this_00 + 1) {
      sse2::BVHNRefitter<4>::recurse_bottom((NodeRefPtr *)&local_58);
      puVar2 = (undefined8 *)((long)this_00 * 0x20 + *(long *)(this + 0x28));
      *puVar2 = local_58;
      puVar2[1] = uStack_50;
      puVar2[2] = local_48;
      puVar2[3] = uStack_40;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitter<4>::refit() */

void __thiscall embree::sse2::BVHNRefitter<4>::refit(BVHNRefitter<4> *this)

{
  NodeRefPtr *pNVar1;
  NodeRefPtr *pNVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_2060;
  undefined8 local_2058;
  undefined4 uStack_2050;
  undefined4 uStack_204c;
  undefined4 local_2048;
  undefined4 uStack_2044;
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  _lambda_embree__range<unsigned_long>_const___1_ local_2038 [8200];
  long local_30;
  
  lVar3 = *(long *)this;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ulong *)(lVar3 + 0x1f0) < 0x1001) {
    recurse_bottom((NodeRefPtr *)&local_2058);
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    pNVar2 = *(NodeRefPtr **)(lVar3 + 0x70);
    if (((ulong)pNVar2 & 0xf) == 0) {
      pNVar1 = pNVar2 + 0x20;
      do {
        if (*(long *)pNVar2 != 8) {
          gather_subtree_refs(this,pNVar2,(ulong *)(this + 0x10),1);
        }
        pNVar2 = pNVar2 + 8;
      } while (pNVar2 != pNVar1);
      if (*(ulong *)(this + 0x10) != 0) {
        local_2060 = 0;
        TaskScheduler::
        spawn<unsigned_long,embree::sse2::BVHNRefitter<4>::refit()::_lambda(embree::range<unsigned_long>const&)_1_>
                  ((TaskScheduler *)0x0,*(ulong *)(this + 0x10),1,(ulong)this,local_2038,
                   (TaskGroupContext *)&local_2060);
        embree::TaskScheduler::wait();
        if (local_2060 != 0) {
          local_2058 = local_2060;
          std::__exception_ptr::exception_ptr::_M_addref();
          std::rethrow_exception(&local_2058);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar3 = *(long *)this;
      }
    }
    *(undefined8 *)(this + 0x10) = 0;
    refit_toplevel((NodeRefPtr *)&local_2058,(ulong *)this,(BBox *)(lVar3 + 0x70),
                   (ulong)(this + 0x10));
  }
  lVar3 = *(long *)this;
  *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_2058;
  *(undefined4 *)(lVar3 + 0x14) = local_2058._4_4_;
  *(undefined4 *)(lVar3 + 0x18) = uStack_2050;
  *(undefined4 *)(lVar3 + 0x1c) = uStack_204c;
  *(undefined4 *)(lVar3 + 0x20) = local_2048;
  *(undefined4 *)(lVar3 + 0x24) = uStack_2044;
  *(undefined4 *)(lVar3 + 0x28) = uStack_2040;
  *(undefined4 *)(lVar3 + 0x2c) = uStack_203c;
  *(undefined4 *)(lVar3 + 0x30) = (undefined4)local_2058;
  *(undefined4 *)(lVar3 + 0x34) = local_2058._4_4_;
  *(undefined4 *)(lVar3 + 0x38) = uStack_2050;
  *(undefined4 *)(lVar3 + 0x3c) = uStack_204c;
  *(undefined4 *)(lVar3 + 0x40) = local_2048;
  *(undefined4 *)(lVar3 + 0x44) = uStack_2044;
  *(undefined4 *)(lVar3 + 0x48) = uStack_2040;
  *(undefined4 *)(lVar3 + 0x4c) = uStack_203c;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x00101b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x00101b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::build() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::build
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
  if (*(uint *)(this + 0x38) < *(uint *)(*(long *)(this + 0x30) + 0x74)) {
    *(uint *)(this + 0x38) = *(uint *)(*(long *)(this + 0x30) + 0x74);
                    /* WARNING: Could not recover jumptable at 0x00101b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
    return;
  }
  BVHNRefitter<4>::refit(*(BVHNRefitter<4> **)(this + 0x28));
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitter<4>::BVHNRefitter(embree::BVHN<4>*,
   embree::sse2::BVHNRefitter<4>::LeafBoundsInterface const&) */

void embree::sse2::BVHNRefitter<4>::BVHNRefitter(BVHN *param_1,LeafBoundsInterface *param_2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMv<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMv<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleMi<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleMi<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::BVHNRefitT<4, embree::TriangleMesh, embree::TriangleM<4> >::~BVHNRefitT() */

void __thiscall
embree::sse2::BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>>::~BVHNRefitT
          (BVHNRefitT<4,embree::TriangleMesh,embree::TriangleM<4>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


