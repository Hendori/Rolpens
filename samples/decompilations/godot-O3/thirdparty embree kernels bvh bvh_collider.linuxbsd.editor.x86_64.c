
/* embree::sse2::intersect_triangle_triangle(embree::Scene*, unsigned int, unsigned int,
   embree::Scene*, unsigned int, unsigned int) */

undefined4
embree::sse2::intersect_triangle_triangle
          (Scene *param_1,uint param_2,uint param_3,Scene *param_4,uint param_5,uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint *puVar13;
  long in_FS_OFFSET;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = *(long *)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8);
  lVar8 = *(long *)(*(long *)(param_4 + 0x1e0) + (ulong)param_5 * 8);
  puVar12 = (uint *)((ulong)param_3 * *(long *)(lVar7 + 0x60) + *(long *)(lVar7 + 0x58));
  puVar13 = (uint *)((ulong)param_6 * *(long *)(lVar8 + 0x60) + *(long *)(lVar8 + 0x58));
  if ((param_1 == param_4) && (param_2 == param_5)) {
    uVar11 = 0;
    if (param_3 == param_6) goto LAB_0010019a;
    uVar14 = puVar12[2];
    uVar2 = *puVar12;
    uVar3 = puVar12[1];
    uVar4 = *puVar13;
    auVar15._0_4_ = -(uint)(uVar4 == uVar2);
    auVar15._4_4_ = -(uint)(uVar4 == uVar3);
    auVar15._8_4_ = -(uint)(uVar4 == uVar14);
    auVar15._12_4_ = -(uint)(uVar4 == uVar14);
    iVar10 = movmskps((int)puVar12,auVar15);
    if (iVar10 != 0) goto LAB_0010019a;
    uVar5 = puVar13[1];
    auVar17._0_4_ = -(uint)(uVar5 == uVar2);
    auVar17._4_4_ = -(uint)(uVar5 == uVar3);
    auVar17._8_4_ = -(uint)(uVar5 == uVar14);
    auVar17._12_4_ = -(uint)(uVar5 == uVar14);
    iVar10 = movmskps(0,auVar17);
    if (iVar10 != 0) goto LAB_0010019a;
    uVar6 = puVar13[2];
    auVar16._0_4_ = -(uint)(uVar2 == uVar6);
    auVar16._4_4_ = -(uint)((uint)((ulong)*(undefined8 *)puVar12 >> 0x20) == uVar6);
    auVar16._8_4_ = -(uint)(uVar14 == uVar6);
    auVar16._12_4_ = -(uint)(uVar14 == uVar6);
    iVar10 = movmskps(0,auVar16);
    uVar11 = 0;
    if (iVar10 != 0) goto LAB_0010019a;
  }
  else {
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    uVar14 = puVar12[2];
    uVar3 = puVar12[1];
    uVar2 = *puVar12;
    uVar6 = puVar13[2];
  }
  lVar9 = *(long *)(lVar7 + 0x90);
  lVar7 = *(long *)(lVar7 + 0x88);
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar2 * lVar9);
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar3 * lVar9);
  local_68 = *puVar1;
  uStack_60 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar14 * lVar9);
  local_58 = *puVar1;
  uStack_50 = puVar1[1];
  lVar7 = *(long *)(lVar8 + 0x88);
  lVar8 = *(long *)(lVar8 + 0x90);
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar4 * lVar8);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar6 * lVar8);
  local_28 = *puVar1;
  uStack_20 = puVar1[1];
  puVar1 = (undefined8 *)(lVar7 + (ulong)uVar5 * lVar8);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  uVar11 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)&local_78,(Vec3fa *)&local_68,(Vec3fa *)&local_58,
                      (Vec3fa *)&local_48,(Vec3fa *)&local_38,(Vec3fa *)&local_28);
LAB_0010019a:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



/* embree::sse2::BVH4ColliderUserGeom() */

undefined1  [16] embree::sse2::BVH4ColliderUserGeom(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = "sse2::BVH4ColliderUserGeom";
  auVar1._0_8_ = BVHNColliderUserGeom<4>::collide;
  return auVar1;
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long> const&)#1}
   const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  TaskScheduler *this;
  long in_FS_OFFSET;
  ulong local_48;
  ulong uStack_40;
  ulong local_38;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Stack_30;
  TaskGroupContext *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  uStack_40 = param_1;
  local_38 = param_3;
  p_Stack_30 = param_4;
  local_28 = param_5;
  lVar6 = embree::TaskScheduler::thread();
  if (lVar6 == 0) {
    this = (TaskScheduler *)embree::TaskScheduler::instance();
    spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
              (this,(_lambda___1_ *)&local_48,param_5,param_2 - param_1,true);
LAB_0010030c:
    if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (*(ulong *)(lVar6 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(lVar6 + 0xc00c0);
    uVar2 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar2 < 0x80001) {
      *(ulong *)(lVar6 + 0xc00c0) = uVar2;
      puVar3 = (undefined8 *)(lVar6 + 0x40090 + uVar2);
      *puVar3 = &PTR_execute_001035c0;
      puVar3[1] = local_48;
      puVar3[2] = uStack_40;
      puVar3[5] = local_28;
      puVar3[3] = local_38;
      puVar3[4] = p_Stack_30;
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
      *(ulong *)(lVar7 + 0x70) = param_2 - param_1;
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
      goto LAB_0010030c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::sse2::BVHNColliderUserGeom<4>::processLeaf(embree::NodeRefPtr<4>, embree::NodeRefPtr<4>)
    */

void __thiscall
embree::sse2::BVHNColliderUserGeom<4>::processLeaf
          (BVHNColliderUserGeom<4> *this,ulong param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long in_FS_OFFSET;
  int local_148 [66];
  long local_40;
  
  piVar10 = (int *)(param_2 & 0xfffffffffffffff0);
  uVar11 = (ulong)((uint)param_3 & 0xf);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (ulong)((uint)param_2 & 0xf);
  if (uVar5 != 8) {
    lVar1 = uVar11 - 8;
    lVar9 = 0;
    lVar6 = 0;
    do {
      lVar12 = 0;
      lVar7 = lVar6;
      piVar8 = (int *)(param_3 & 0xfffffffffffffff0);
      if (uVar11 != 8) {
        do {
          while( true ) {
            iVar2 = piVar10[1];
            iVar3 = *piVar8;
            iVar4 = piVar8[1];
            if (((*(long *)(this + 8) != *(long *)(this + 0x10)) || (iVar3 != *piVar10)) ||
               (iVar4 != iVar2)) break;
            lVar12 = lVar12 + 1;
            piVar8 = piVar8 + 2;
            lVar6 = lVar7;
            if (lVar1 == lVar12) goto LAB_001004a0;
          }
          lVar6 = lVar7 + 1;
          local_148[lVar7 * 4] = *piVar10;
          local_148[lVar7 * 4 + 1] = iVar2;
          local_148[lVar7 * 4 + 2] = iVar3;
          local_148[lVar7 * 4 + 3] = iVar4;
          if (lVar6 == 0x10) {
            (**(code **)(this + 0x18))(*(undefined8 *)(this + 0x20),local_148);
            lVar6 = 0;
          }
          lVar12 = lVar12 + 1;
          piVar8 = piVar8 + 2;
          lVar7 = lVar6;
        } while (lVar1 != lVar12);
      }
LAB_001004a0:
      lVar9 = lVar9 + 1;
      piVar10 = piVar10 + 2;
    } while (lVar9 != uVar5 - 8);
    if (lVar6 != 0) {
      (**(code **)(this + 0x18))(*(undefined8 *)(this + 0x20),local_148);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* embree::RefCount::refDec() */

void __thiscall embree::RefCount::refDec(RefCount *this)

{
  RefCount *pRVar1;
  
  LOCK();
  pRVar1 = this + 8;
  *(long *)pRVar1 = *(long *)pRVar1 + -1;
  UNLOCK();
  if ((this != (RefCount *)0x0) && (*(long *)pRVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}



/* embree::sse2::collision_regression_test::~collision_regression_test() */

void __thiscall
embree::sse2::collision_regression_test::~collision_regression_test(collision_regression_test *this)

{
  *(undefined ***)this = &PTR___cxa_pure_virtual_00103578;
  if (*(collision_regression_test **)(this + 8) != this + 0x18) {
    operator_delete(*(collision_regression_test **)(this + 8),*(long *)(this + 0x18) + 1);
    return;
  }
  return;
}



/* embree::sse2::BVHNCollider<4>::collide_recurse(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa> const&,
   unsigned long, unsigned long) [clone .isra.0] */

void embree::sse2::BVHNCollider<4>::collide_recurse
               (undefined8 *param_1,ulong param_2,float *param_3,ulong param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 unaff_RBX;
  undefined4 uVar14;
  ulong uVar12;
  long lVar13;
  int *piVar15;
  int *piVar16;
  long lVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  int local_148 [66];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar14 = (undefined4)((ulong)unaff_RBX >> 0x20);
  if ((param_2 & 8) == 0) {
    if (((param_4 & 8) != 0) ||
       (fVar22 = (param_3[4] - *param_3) * ((param_3[5] - param_3[1]) + (param_3[6] - param_3[2])) +
                 (param_3[5] - param_3[1]) * (param_3[6] - param_3[2]),
       fVar18 = (param_5[4] - *param_5) * ((param_5[5] - param_5[1]) + (param_5[6] - param_5[2])) +
                (param_5[5] - param_5[1]) * (param_5[6] - param_5[2]),
       fVar18 + fVar18 < fVar22 + fVar22)) {
      fVar18 = *param_5;
      fVar22 = param_5[1];
      fVar1 = param_5[4];
      fVar2 = param_5[5];
      fVar3 = param_5[2];
      fVar4 = param_5[6];
      auVar20._4_4_ = fVar18;
      auVar20._0_4_ = fVar18;
      auVar20._8_4_ = fVar18;
      auVar20._12_4_ = fVar18;
      auVar28._4_4_ = fVar22;
      auVar28._0_4_ = fVar22;
      auVar28._8_4_ = fVar22;
      auVar28._12_4_ = fVar22;
      auVar20 = maxps(auVar20,*(undefined1 (*) [16])(param_2 + 0x20));
      auVar28 = maxps(auVar28,*(undefined1 (*) [16])(param_2 + 0x40));
      auVar30._4_4_ = fVar1;
      auVar30._0_4_ = fVar1;
      auVar30._8_4_ = fVar1;
      auVar30._12_4_ = fVar1;
      auVar32._4_4_ = fVar2;
      auVar32._0_4_ = fVar2;
      auVar32._8_4_ = fVar2;
      auVar32._12_4_ = fVar2;
      auVar30 = minps(auVar30,*(undefined1 (*) [16])(param_2 + 0x30));
      auVar32 = minps(auVar32,*(undefined1 (*) [16])(param_2 + 0x50));
      auVar26._4_4_ = fVar3;
      auVar26._0_4_ = fVar3;
      auVar26._8_4_ = fVar3;
      auVar26._12_4_ = fVar3;
      auVar33._4_4_ = fVar4;
      auVar33._0_4_ = fVar4;
      auVar33._8_4_ = fVar4;
      auVar33._12_4_ = fVar4;
      auVar26 = maxps(auVar26,*(undefined1 (*) [16])(param_2 + 0x60));
      auVar33 = minps(auVar33,*(undefined1 (*) [16])(param_2 + 0x70));
      auVar24._0_4_ =
           -(uint)((auVar20._0_4_ <= auVar30._0_4_ && auVar28._0_4_ <= auVar32._0_4_) &&
                  auVar26._0_4_ <= auVar33._0_4_);
      auVar24._4_4_ =
           -(uint)((auVar20._4_4_ <= auVar30._4_4_ && auVar28._4_4_ <= auVar32._4_4_) &&
                  auVar26._4_4_ <= auVar33._4_4_);
      auVar24._8_4_ =
           -(uint)((auVar20._8_4_ <= auVar30._8_4_ && auVar28._8_4_ <= auVar32._8_4_) &&
                  auVar26._8_4_ <= auVar33._8_4_);
      auVar24._12_4_ =
           -(uint)((auVar20._12_4_ <= auVar30._12_4_ && auVar28._12_4_ <= auVar32._12_4_) &&
                  auVar26._12_4_ <= auVar33._12_4_);
      uVar11 = movmskps((int)unaff_RBX,auVar24);
      uVar12 = CONCAT44(uVar14,uVar11);
      uVar8 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      while (uVar12 != 0) {
        lVar13 = param_2 + uVar8 * 4;
        lVar9 = uVar8 * 8;
        auStack_158._4_4_ = *(undefined4 *)(lVar13 + 0x50);
        auStack_158._0_4_ = *(undefined4 *)(lVar13 + 0x30);
        auStack_158._8_4_ = *(undefined4 *)(param_2 + 0x70 + uVar8 * 4);
        auStack_158._12_4_ = 0;
        uVar12 = uVar12 ^ 1L << (uVar8 & 0x3f);
        local_168._4_4_ = *(undefined4 *)(lVar13 + 0x40);
        local_168._0_4_ = *(undefined4 *)(lVar13 + 0x20);
        local_168._8_4_ = *(undefined4 *)(lVar13 + 0x60);
        local_168._12_4_ = 0;
        uVar8 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        collide_recurse(param_1,*(undefined8 *)(param_2 + lVar9),local_168,param_4);
      }
    }
    else {
LAB_00100627:
      fVar18 = *param_3;
      fVar22 = param_3[1];
      fVar1 = param_3[4];
      fVar2 = param_3[5];
      fVar3 = param_3[2];
      fVar4 = param_3[6];
      auVar19._4_4_ = fVar18;
      auVar19._0_4_ = fVar18;
      auVar19._8_4_ = fVar18;
      auVar19._12_4_ = fVar18;
      auVar25._4_4_ = fVar22;
      auVar25._0_4_ = fVar22;
      auVar25._8_4_ = fVar22;
      auVar25._12_4_ = fVar22;
      auVar20 = maxps(auVar19,*(undefined1 (*) [16])(param_4 + 0x20));
      auVar26 = maxps(auVar25,*(undefined1 (*) [16])(param_4 + 0x40));
      auVar27._4_4_ = fVar1;
      auVar27._0_4_ = fVar1;
      auVar27._8_4_ = fVar1;
      auVar27._12_4_ = fVar1;
      auVar29._4_4_ = fVar2;
      auVar29._0_4_ = fVar2;
      auVar29._8_4_ = fVar2;
      auVar29._12_4_ = fVar2;
      auVar28 = minps(auVar27,*(undefined1 (*) [16])(param_4 + 0x30));
      auVar30 = minps(auVar29,*(undefined1 (*) [16])(param_4 + 0x50));
      auVar23._4_4_ = fVar3;
      auVar23._0_4_ = fVar3;
      auVar23._8_4_ = fVar3;
      auVar23._12_4_ = fVar3;
      auVar31._4_4_ = fVar4;
      auVar31._0_4_ = fVar4;
      auVar31._8_4_ = fVar4;
      auVar31._12_4_ = fVar4;
      auVar24 = maxps(auVar23,*(undefined1 (*) [16])(param_4 + 0x60));
      auVar32 = minps(auVar31,*(undefined1 (*) [16])(param_4 + 0x70));
      auVar21._0_4_ =
           -(uint)((auVar20._0_4_ <= auVar28._0_4_ && auVar26._0_4_ <= auVar30._0_4_) &&
                  auVar24._0_4_ <= auVar32._0_4_);
      auVar21._4_4_ =
           -(uint)((auVar20._4_4_ <= auVar28._4_4_ && auVar26._4_4_ <= auVar30._4_4_) &&
                  auVar24._4_4_ <= auVar32._4_4_);
      auVar21._8_4_ =
           -(uint)((auVar20._8_4_ <= auVar28._8_4_ && auVar26._8_4_ <= auVar30._8_4_) &&
                  auVar24._8_4_ <= auVar32._8_4_);
      auVar21._12_4_ =
           -(uint)((auVar20._12_4_ <= auVar28._12_4_ && auVar26._12_4_ <= auVar30._12_4_) &&
                  auVar24._12_4_ <= auVar32._12_4_);
      uVar11 = movmskps((int)unaff_RBX,auVar21);
      uVar12 = CONCAT44(uVar14,uVar11);
      uVar8 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
      if (uVar12 != 0) {
        do {
          lVar13 = param_4 + uVar8 * 4;
          lVar9 = uVar8 * 8;
          auStack_158._4_4_ = *(undefined4 *)(lVar13 + 0x50);
          auStack_158._0_4_ = *(undefined4 *)(lVar13 + 0x30);
          auStack_158._8_4_ = *(undefined4 *)(param_4 + 0x70 + uVar8 * 4);
          auStack_158._12_4_ = 0;
          uVar12 = uVar12 ^ 1L << (uVar8 & 0x3f);
          local_168._4_4_ = *(undefined4 *)(lVar13 + 0x40);
          local_168._0_4_ = *(undefined4 *)(lVar13 + 0x20);
          local_168._8_4_ = *(undefined4 *)(lVar13 + 0x60);
          local_168._12_4_ = 0;
          uVar8 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
            }
          }
          collide_recurse(param_1,param_2,param_3,*(undefined8 *)(param_4 + lVar9),local_168);
        } while (uVar12 != 0);
      }
    }
  }
  else {
    if ((param_4 & 8) == 0) goto LAB_00100627;
    if (*(code **)*param_1 != BVHNColliderUserGeom<4>::processLeaf) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010095f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*param_1)(param_1,param_2,param_4);
        return;
      }
      goto LAB_00100961;
    }
    uVar8 = (ulong)((uint)param_2 & 0xf);
    uVar12 = (ulong)((uint)param_4 & 0xf);
    piVar15 = (int *)(param_2 & 0xfffffffffffffff0);
    lVar9 = 0;
    lVar13 = 0;
    if (uVar8 != 8) {
      do {
        lVar17 = 0;
        piVar16 = (int *)(param_4 & 0xfffffffffffffff0);
        if (uVar12 != 8) {
          do {
            iVar5 = piVar15[1];
            iVar6 = *piVar16;
            iVar7 = piVar16[1];
            if (((param_1[1] != param_1[2]) || (*piVar15 != iVar6)) || (iVar5 != iVar7)) {
              lVar10 = lVar9 + 1;
              local_148[lVar9 * 4] = *piVar15;
              local_148[lVar9 * 4 + 1] = iVar5;
              local_148[lVar9 * 4 + 2] = iVar6;
              local_148[lVar9 * 4 + 3] = iVar7;
              lVar9 = lVar10;
              if (lVar10 == 0x10) {
                (*(code *)param_1[3])(param_1[4],local_148);
                lVar9 = 0;
              }
            }
            lVar17 = lVar17 + 1;
            piVar16 = piVar16 + 2;
          } while (uVar12 - 8 != lVar17);
        }
        lVar13 = lVar13 + 1;
        piVar15 = piVar15 + 2;
      } while (uVar8 - 8 != lVar13);
      if (lVar9 != 0) {
        (*(code *)param_1[3])(param_1[4],local_148);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100961:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::TriangleTriangleIntersector::intersect_triangle_triangle(embree::Vec3fa const&,
   embree::Vec3fa const&, embree::Vec3fa const&, embree::Vec3fa const&, embree::Vec3fa const&,
   embree::Vec3fa const&) */

ulong embree::sse2::TriangleTriangleIntersector::intersect_triangle_triangle
                (Vec3fa *param_1,Vec3fa *param_2,Vec3fa *param_3,Vec3fa *param_4,Vec3fa *param_5,
                Vec3fa *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined3 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  undefined7 uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  
  fVar49 = *(float *)param_6;
  fVar40 = *(float *)(param_6 + 4);
  fVar48 = *(float *)(param_6 + 8);
  fVar57 = *(float *)param_5;
  fVar60 = *(float *)(param_5 + 4);
  fVar1 = *(float *)(param_5 + 8);
  fVar45 = *(float *)param_4;
  fVar38 = *(float *)(param_4 + 4);
  fVar41 = *(float *)(param_4 + 8);
  fVar55 = *(float *)param_1;
  fVar58 = *(float *)(param_1 + 4);
  fVar59 = *(float *)(param_1 + 8);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar61 = *(float *)(param_2 + 8);
  fVar56 = *(float *)param_3;
  fVar4 = *(float *)(param_3 + 4);
  fVar5 = *(float *)(param_3 + 8);
  fVar42 = (fVar57 - fVar45) * (fVar40 - fVar38) - (fVar49 - fVar45) * (fVar60 - fVar38);
  fVar43 = (fVar60 - fVar38) * (fVar48 - fVar41) - (fVar40 - fVar38) * (fVar1 - fVar41);
  fVar44 = (fVar1 - fVar41) * (fVar49 - fVar45) - (fVar48 - fVar41) * (fVar57 - fVar45);
  fVar46 = fVar45 * fVar43 + fVar38 * fVar44 + fVar41 * fVar42;
  fVar39 = (fVar55 * fVar43 + fVar58 * fVar44 + fVar59 * fVar42) - fVar46;
  fVar37 = (fVar2 * fVar43 + fVar3 * fVar44 + fVar61 * fVar42) - fVar46;
  fVar46 = (fVar56 * fVar43 + fVar4 * fVar44 + fVar5 * fVar42) - fVar46;
  if (fVar37 <= fVar39) {
    fVar25 = fVar39;
    fVar26 = fVar37;
    fVar47 = fVar46;
    if (fVar46 <= fVar39) {
      fVar47 = fVar39;
    }
  }
  else {
    fVar25 = fVar37;
    fVar26 = fVar39;
    fVar47 = fVar37;
    if (fVar37 < fVar46) {
      fVar47 = fVar46;
    }
  }
  if (fVar47 < _LC3) {
    return 0;
  }
  fVar47 = fVar26;
  if (fVar46 <= fVar26) {
    fVar47 = fVar46;
  }
  if (_LC4 < fVar47) {
    return 0;
  }
  fVar47 = (fVar2 - fVar55) * (fVar4 - fVar58) - (fVar56 - fVar55) * (fVar3 - fVar58);
  fVar50 = (fVar3 - fVar58) * (fVar5 - fVar59) - (fVar4 - fVar58) * (fVar61 - fVar59);
  fVar51 = (fVar61 - fVar59) * (fVar56 - fVar55) - (fVar5 - fVar59) * (fVar2 - fVar55);
  fVar53 = fVar55 * fVar50 + fVar58 * fVar51 + fVar59 * fVar47;
  fVar52 = (fVar38 * fVar51 + fVar45 * fVar50 + fVar41 * fVar47) - fVar53;
  fVar62 = (fVar60 * fVar51 + fVar57 * fVar50 + fVar1 * fVar47) - fVar53;
  fVar53 = (fVar49 * fVar50 + fVar40 * fVar51 + fVar48 * fVar47) - fVar53;
  if (fVar62 <= fVar52) {
    fVar27 = fVar52;
    fVar28 = fVar62;
    fVar54 = fVar53;
    if (fVar53 <= fVar52) {
      fVar54 = fVar52;
    }
  }
  else {
    fVar27 = fVar62;
    fVar28 = fVar52;
    fVar54 = fVar62;
    if (fVar62 < fVar53) {
      fVar54 = fVar53;
    }
  }
  if (fVar54 < _LC3) {
    return 0;
  }
  fVar54 = fVar28;
  if (fVar53 <= fVar28) {
    fVar54 = fVar53;
  }
  if (_LC4 < fVar54) {
    return 0;
  }
  if (((((float)((uint)fVar39 & _LC7) < _LC4) && ((float)((uint)fVar37 & _LC7) < _LC4)) &&
      ((float)((uint)fVar46 & _LC7) < _LC4)) ||
     ((((float)((uint)fVar52 & _LC7) < _LC4 && ((float)((uint)fVar62 & _LC7) < _LC4)) &&
      ((float)((uint)fVar53 & _LC7) < _LC4)))) {
    if ((float)(_LC7 & (uint)fVar50) <= (float)(_LC7 & (uint)fVar51)) {
      iVar33 = 1;
      if ((float)(_LC7 & (uint)fVar51) <= (float)(_LC7 & (uint)fVar47)) {
        iVar33 = 2;
      }
    }
    else {
      iVar33 = (uint)((float)(_LC7 & (uint)fVar50) <= (float)(_LC7 & (uint)fVar47)) * 2;
    }
    uVar35 = (ulong)(long)(iVar33 + 1) % 3;
    uVar36 = (uVar35 + 1) % 3;
    fVar49 = *(float *)(param_1 + uVar35 * 4);
    fVar40 = *(float *)(param_4 + uVar35 * 4);
    fVar48 = *(float *)(param_2 + uVar35 * 4);
    fVar57 = *(float *)(param_5 + uVar35 * 4);
    fVar41 = fVar49 - fVar48;
    fVar58 = fVar40 - fVar57;
    fVar60 = *(float *)(param_1 + uVar36 * 4);
    fVar1 = *(float *)(param_4 + uVar36 * 4);
    fVar45 = *(float *)(param_2 + uVar36 * 4);
    fVar38 = *(float *)(param_5 + uVar36 * 4);
    fVar55 = fVar60 - fVar45;
    fVar59 = fVar1 - fVar38;
    bVar6 = 0.0 <= (fVar40 - fVar49) * fVar55 - (fVar1 - fVar60) * fVar41;
    uVar32 = CONCAT31((int3)((ulong)param_5 >> 8),bVar6);
    bVar7 = 0.0 <= (fVar57 - fVar49) * fVar55 - (fVar38 - fVar60) * fVar41;
    uVar31 = CONCAT31((int3)((ulong)param_1 >> 8),bVar7);
    bVar8 = 0.0 <= (fVar49 - fVar40) * fVar59 - (fVar60 - fVar1) * fVar58;
    bVar9 = 0.0 <= (fVar48 - fVar40) * fVar59 - (fVar45 - fVar1) * fVar58;
    uVar30 = uVar32 ^ uVar31;
    bVar29 = (byte)uVar30 & bVar8 != bVar9;
    if (bVar29 != 0) {
      return (ulong)CONCAT31((int3)(uVar30 >> 8),bVar29);
    }
    fVar2 = *(float *)(param_6 + uVar35 * 4);
    fVar3 = *(float *)(param_6 + uVar36 * 4);
    fVar61 = fVar38 - fVar3;
    bVar10 = 0.0 <= (fVar2 - fVar49) * fVar55 - fVar41 * (fVar3 - fVar60);
    fVar41 = fVar57 - fVar2;
    uVar30 = CONCAT31((int3)((ulong)param_2 >> 8),bVar10);
    bVar11 = 0.0 <= (fVar49 - fVar57) * fVar61 - (fVar60 - fVar38) * fVar41;
    bVar12 = 0.0 <= (fVar48 - fVar57) * fVar61 - (fVar45 - fVar38) * fVar41;
    uVar31 = uVar31 ^ uVar30;
    bVar29 = (byte)uVar31 & bVar11 != bVar12;
    if (bVar29 != 0) {
      return (ulong)CONCAT31((int3)(uVar31 >> 8),bVar29);
    }
    fVar55 = fVar3 - fVar1;
    fVar56 = fVar2 - fVar40;
    bVar13 = 0.0 <= (fVar49 - fVar2) * fVar55 - (fVar60 - fVar3) * fVar56;
    bVar14 = 0.0 <= (fVar48 - fVar2) * fVar55 - (fVar45 - fVar3) * fVar56;
    uVar32 = uVar32 ^ uVar30;
    bVar29 = (byte)uVar32 & bVar13 != bVar14;
    if (bVar29 != 0) {
      return (ulong)CONCAT31((int3)(uVar32 >> 8),bVar29);
    }
    fVar4 = *(float *)(param_3 + uVar36 * 4);
    fVar5 = *(float *)(param_3 + uVar35 * 4);
    fVar37 = fVar45 - fVar4;
    fVar39 = fVar48 - fVar5;
    bVar15 = 0.0 <= fVar37 * (fVar40 - fVar48) - fVar39 * (fVar1 - fVar45);
    bVar16 = 0.0 <= (fVar57 - fVar48) * fVar37 - fVar39 * (fVar38 - fVar45);
    bVar17 = 0.0 <= fVar59 * (fVar5 - fVar40) - (fVar4 - fVar1) * fVar58;
    uVar24 = (undefined3)((ulong)param_3 >> 8);
    if (bVar16 != bVar15 && bVar9 != bVar17) {
      return (ulong)CONCAT31(uVar24,bVar16 != bVar15 && bVar9 != bVar17);
    }
    bVar18 = 0.0 <= fVar37 * (fVar2 - fVar48) - (fVar3 - fVar45) * fVar39;
    bVar19 = 0.0 <= (fVar5 - fVar57) * fVar61 - (fVar4 - fVar38) * fVar41;
    if (bVar16 != bVar18 && bVar12 != bVar19) {
      return (ulong)(bVar16 != bVar18 && bVar12 != bVar19);
    }
    bVar20 = 0.0 <= (fVar5 - fVar2) * fVar55 - (fVar4 - fVar3) * fVar56;
    if (bVar18 != bVar15 && bVar14 != bVar20) {
      return (ulong)CONCAT31(uVar24,bVar18 != bVar15 && bVar14 != bVar20);
    }
    fVar60 = fVar4 - fVar60;
    fVar49 = fVar5 - fVar49;
    bVar21 = 0.0 <= (fVar40 - fVar5) * fVar60 - (fVar1 - fVar4) * fVar49;
    bVar22 = 0.0 <= (fVar57 - fVar5) * fVar60 - (fVar38 - fVar4) * fVar49;
    if (bVar8 != bVar17 && bVar22 != bVar21) {
      return (ulong)(bVar8 != bVar17 && bVar22 != bVar21);
    }
    bVar23 = 0.0 <= (fVar2 - fVar5) * fVar60 - (fVar3 - fVar4) * fVar49;
    if (bVar11 != bVar19 && bVar22 != bVar23) {
      return (ulong)CONCAT31((int3)((ulong)unaff_R13 >> 8),bVar11 != bVar19 && bVar22 != bVar23);
    }
    uVar30 = (uint)CONCAT71((int7)((ulong)unaff_R12 >> 8),bVar13) ^
             CONCAT31((int3)((ulong)unaff_RBP >> 8),bVar20);
    uVar24 = (undefined3)(uVar30 >> 8);
    bVar29 = (byte)uVar30 & bVar23 != bVar21;
    uVar35 = (ulong)CONCAT31(uVar24,bVar29);
    if (bVar29 != 0) {
      return uVar35;
    }
    if (((bVar8 == bVar11) && (bVar8 == bVar13)) &&
       ((bVar9 == bVar12 &&
        ((bVar9 == bVar14 &&
         (uVar35 = (ulong)CONCAT31(uVar24,bVar17 == bVar19 && bVar17 == bVar20),
         bVar17 == bVar19 && bVar17 == bVar20)))))) {
      return uVar35;
    }
    uVar34 = (undefined7)(uVar35 >> 8);
    if (bVar6 != bVar15 || bVar6 != bVar21) {
      return CONCAT71(uVar34,bVar6 == bVar15 && bVar6 == bVar21);
    }
    if (bVar7 != bVar16 || bVar7 != bVar22) {
      return CONCAT71(uVar34,bVar7 == bVar16 && bVar7 == bVar22);
    }
    return (ulong)((uint)CONCAT71(uVar34,bVar10 == bVar18) & (uint)(bVar10 == bVar23));
  }
  fVar54 = fVar44 * fVar50 - fVar51 * fVar43;
  fVar44 = fVar42 * fVar51 - fVar47 * fVar44;
  fVar42 = fVar43 * fVar47 - fVar50 * fVar42;
  fVar55 = fVar55 * fVar44 + fVar58 * fVar42 + fVar59 * fVar54;
  fVar59 = fVar2 * fVar44 + fVar3 * fVar42 + fVar61 * fVar54;
  fVar58 = fVar56 * fVar44 + fVar4 * fVar42 + fVar5 * fVar54;
  fVar45 = fVar45 * fVar44 + fVar38 * fVar42 + fVar41 * fVar54;
  fVar57 = fVar57 * fVar44 + fVar60 * fVar42 + fVar1 * fVar54;
  fVar48 = fVar40 * fVar42 + fVar49 * fVar44 + fVar48 * fVar54;
  fVar49 = _LC2;
  fVar40 = _LC1;
  if ((((fVar26 <= 0.0) && (0.0 <= fVar25)) && (0.0 < (float)((uint)(fVar39 - fVar37) & _LC7))) &&
     (fVar49 = ((fVar59 - fVar55) * fVar39) / (fVar39 - fVar37) + fVar55, fVar40 = fVar49,
     fVar49 < __LC8)) {
    fVar40 = _LC1;
  }
  fVar38 = fVar40;
  fVar60 = fVar46;
  fVar1 = fVar39;
  if (fVar46 <= fVar37) {
    if (fVar46 <= 0.0) {
      if (0.0 <= fVar37) goto LAB_00100fea;
LAB_00101072:
      fVar41 = fVar39;
      if (fVar39 <= fVar46) goto joined_r0x00100e97;
      goto LAB_00100d3a;
    }
    if (fVar39 <= fVar46) goto joined_r0x00100e97;
  }
  else {
    if (fVar37 <= 0.0) {
      if (fVar46 < 0.0) goto LAB_00101072;
LAB_00100fea:
      if (0.0 < (float)((uint)(fVar37 - fVar46) & _LC7)) {
        fVar38 = ((fVar58 - fVar59) * fVar37) / (fVar37 - fVar46) + fVar59;
        if (fVar38 <= fVar49) {
          fVar49 = fVar38;
        }
        if (fVar38 <= fVar40) {
          fVar38 = fVar40;
        }
      }
    }
    fVar40 = fVar38;
    if (fVar46 < fVar39) {
      fVar60 = fVar39;
      fVar1 = fVar46;
    }
joined_r0x00100e97:
    fVar38 = fVar40;
    fVar41 = fVar60;
    if (fVar1 <= 0.0) {
LAB_00100d3a:
      fVar38 = fVar40;
      if ((0.0 <= fVar41) && (0.0 < (float)((uint)(fVar46 - fVar39) & _LC7))) {
        fVar38 = ((fVar55 - fVar58) * fVar46) / (fVar46 - fVar39) + fVar58;
        if (fVar38 <= fVar49) {
          fVar49 = fVar38;
        }
        if (fVar38 <= fVar40) {
          fVar38 = fVar40;
        }
      }
    }
  }
  fVar40 = _LC2;
  fVar60 = _LC1;
  if (((fVar28 <= 0.0) && (0.0 <= fVar27)) &&
     ((0.0 < (float)((uint)(fVar52 - fVar62) & _LC7) &&
      (fVar40 = ((fVar57 - fVar45) * fVar52) / (fVar52 - fVar62) + fVar45, fVar60 = fVar40,
      fVar40 < __LC8)))) {
    fVar60 = _LC1;
  }
  fVar41 = fVar60;
  fVar1 = fVar53;
  fVar55 = fVar52;
  if (fVar53 <= fVar62) {
    if (0.0 < fVar53) {
      fVar57 = fVar60;
      if (fVar53 < fVar52) goto LAB_00100b8f;
      goto joined_r0x00100e6b;
    }
    if (0.0 <= fVar62) goto LAB_00100f91;
LAB_0010104a:
    fVar41 = fVar52;
    if (fVar52 <= fVar53) goto joined_r0x00100e6b;
  }
  else {
    if (fVar62 <= 0.0) {
      if (fVar53 < 0.0) goto LAB_0010104a;
LAB_00100f91:
      if (0.0 < (float)((uint)(fVar62 - fVar53) & _LC7)) {
        fVar41 = ((fVar48 - fVar57) * fVar62) / (fVar62 - fVar53) + fVar57;
        if (fVar41 <= fVar40) {
          fVar40 = fVar41;
        }
        if (fVar41 <= fVar60) {
          fVar41 = fVar60;
        }
      }
    }
    fVar60 = fVar41;
    if (fVar53 < fVar52) {
      fVar1 = fVar52;
      fVar55 = fVar53;
    }
joined_r0x00100e6b:
    fVar41 = fVar1;
    fVar57 = fVar60;
    if (0.0 < fVar55) goto LAB_00100b8f;
  }
  fVar57 = fVar60;
  if ((0.0 <= fVar41) && (0.0 < (float)((uint)(fVar53 - fVar52) & _LC7))) {
    fVar57 = ((fVar45 - fVar48) * fVar53) / (fVar53 - fVar52) + fVar48;
    if (fVar57 <= fVar40) {
      fVar40 = fVar57;
    }
    if (fVar57 <= fVar60) {
      fVar57 = fVar60;
    }
  }
LAB_00100b8f:
  if (fVar57 <= fVar38) {
    fVar38 = fVar57;
  }
  if (fVar40 <= fVar49) {
    fVar40 = fVar49;
  }
  return (ulong)(fVar40 <= fVar38);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::collision_regression_test::run() */

byte embree::sse2::collision_regression_test::run(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  long in_FS_OFFSET;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = __LC9;
  uStack_50 = _UNK_001035f8;
  local_68._8_8_ = _UNK_00103608;
  local_68._0_8_ = __LC10;
  local_78._8_8_ = _UNK_00103618;
  local_78._0_8_ = __LC11;
  local_88 = __LC12;
  uStack_80 = _UNK_00103628;
  local_98._8_8_ = _UNK_00103638;
  local_98._0_8_ = __LC13;
  local_a8._8_8_ = _UNK_00103648;
  local_a8._0_8_ = __LC14;
  bVar1 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_58 = __LC15;
  uStack_50 = _UNK_00103658;
  local_68 = ZEXT416(_LC16);
  local_88 = __LC15;
  uStack_80 = _UNK_00103658;
  local_98 = ZEXT416(_LC16);
  bVar2 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._8_8_ = _UNK_00103698;
  local_78._0_8_ = __LC19;
  local_58 = __LC17;
  uStack_50 = _UNK_00103678;
  local_68._8_8_ = _UNK_00103688;
  local_68._0_8_ = __LC18;
  bVar3 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC15;
  uStack_50 = _UNK_00103658;
  local_68 = ZEXT416(_LC16);
  bVar4 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78 = (undefined1  [16])0x0;
  local_58 = __LC17;
  uStack_50 = _UNK_00103678;
  local_68._8_8_ = _UNK_00103688;
  local_68._0_8_ = __LC18;
  bVar5 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC20;
  local_78._8_8_ = _UNK_001036a8;
  bVar6 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._8_8_ = _UNK_001036b8;
  local_78._0_8_ = __LC21;
  bVar7 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC15;
  uStack_50 = _UNK_00103658;
  local_68 = ZEXT416(_LC16);
  local_78 = (undefined1  [16])0x0;
  bVar8 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC22;
  uStack_50 = _UNK_001036c8;
  local_68 = ZEXT416(_LC23);
  bVar9 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC20;
  local_78._8_8_ = _UNK_001036a8;
  bVar10 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC24;
  uStack_50 = _UNK_001036e8;
  local_68._0_8_ = __LC25;
  local_68._8_8_ = _UNK_001036f8;
  bVar11 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC26;
  local_78._8_8_ = _UNK_00103708;
  bVar12 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC27;
  local_78._8_8_ = _UNK_00103718;
  bVar13 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC28;
  uStack_50 = _UNK_00103728;
  local_68._0_8_ = __LC29;
  local_68._8_8_ = _UNK_00103738;
  local_78._0_8_ = __LC30;
  local_78._8_8_ = _UNK_00103748;
  bVar14 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC31;
  uStack_50 = _UNK_00103758;
  local_68._0_8_ = __LC32;
  local_68._8_8_ = _UNK_00103768;
  local_78._0_8_ = __LC33;
  local_78._8_8_ = _UNK_00103778;
  bVar15 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC34;
  uStack_50 = _UNK_00103788;
  local_68._8_8_ = _UNK_00103798;
  local_68._0_8_ = __LC35;
  local_78._8_8_ = _UNK_001037a8;
  local_78._0_8_ = __LC36;
  bVar16 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (bVar16 ^ 1) &
           (bVar15 ^ 1) &
           (bVar14 ^ 1) &
           (bVar1 ^ 1) &
           bVar13 & bVar2 & bVar4 & bVar5 & bVar6 & bVar7 & bVar8 & bVar9 & bVar10 & bVar11 & bVar12
           & (bVar3 ^ 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00101ec5) */
/* void embree::TaskScheduler::spawn_root<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long> const&)#1}
   const&,
   embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>(embree::TaskScheduler::spawn<unsigned
   long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long> const&)#1}
   const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1} const&,
   embree::TaskScheduler::TaskGroupContext*, unsigned long, bool) */

void __thiscall
embree::TaskScheduler::
spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          (TaskScheduler *this,_lambda___1_ *param_1,TaskGroupContext *param_2,ulong param_3,
          bool param_4)

{
  TaskScheduler *pTVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  long lVar13;
  Thread *pTVar14;
  Thread *pTVar15;
  Thread *pTVar16;
  long lVar17;
  Thread *pTVar18;
  long in_FS_OFFSET;
  Thread *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4) {
    embree::TaskScheduler::startThreads();
  }
  lVar13 = embree::TaskScheduler::allocThreadIndex();
  pTVar14 = (Thread *)embree::alignedMalloc(0xc0140,0x40);
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
  *(long *)pTVar14 = lVar13;
  pTVar18 = pTVar14 + 0x40;
  pTVar16 = pTVar18;
  do {
    *(undefined4 *)pTVar16 = 0;
    pTVar15 = pTVar16 + 0x80;
    *(undefined4 *)(pTVar16 + 0x40) = 0;
    pTVar16 = pTVar15;
  } while (pTVar14 + 0x40040 != pTVar15);
  *(undefined8 *)(pTVar14 + 0x40040) = 0;
  *(undefined8 *)(pTVar14 + 0x40080) = 0;
  *(undefined8 *)(pTVar14 + 0xc00c0) = 0;
  *(undefined8 *)(pTVar14 + 0xc0100) = 0;
  *(TaskScheduler **)(pTVar14 + 0xc0108) = this;
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
  *(Thread **)(*(long *)(this + 0x10) + lVar13 * 8) = pTVar14;
  UNLOCK();
  local_48 = pTVar14;
  pTVar16 = (Thread *)embree::TaskScheduler::swapThread(pTVar14);
  if (*(ulong *)(pTVar14 + 0x40080) < 0x1000) {
    lVar4 = *(long *)(pTVar14 + 0xc00c0);
    uVar3 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
    if (uVar3 < 0x80001) {
      *(ulong *)(pTVar14 + 0xc00c0) = uVar3;
      pTVar15 = pTVar14 + uVar3 + 0x40090;
      uVar8 = *(undefined8 *)param_1;
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined ***)pTVar15 = &PTR_execute_001035c0;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(pTVar15 + 8) = uVar8;
      *(undefined8 *)(pTVar15 + 0x10) = uVar9;
      *(undefined8 *)(pTVar15 + 0x28) = uVar5;
      *(undefined8 *)(pTVar15 + 0x18) = uVar10;
      *(undefined8 *)(pTVar15 + 0x20) = uVar11;
      lVar17 = *(long *)(pTVar14 + 0x40080) * 0x40;
      lVar6 = *(long *)(pTVar14 + 0xc0100);
      pTVar14[lVar17 + 0x48] = (Thread)0x1;
      *(undefined4 *)(pTVar14 + lVar17 + 0x44) = 1;
      *(Thread **)(pTVar14 + lVar17 + 0x50) = pTVar15;
      *(long *)(pTVar14 + lVar17 + 0x58) = lVar6;
      *(TaskGroupContext **)(pTVar14 + lVar17 + 0x60) = param_2;
      *(long *)(pTVar14 + lVar17 + 0x68) = lVar4;
      *(ulong *)(pTVar14 + lVar17 + 0x70) = param_3;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*(int *)(pTVar18 + lVar17) == 0) {
        *(undefined4 *)(pTVar18 + lVar17) = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(pTVar14 + 0x40080) = *(long *)(pTVar14 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(pTVar14 + 0x40080) - 1U <= *(ulong *)(pTVar14 + 0x40040)) {
        LOCK();
        *(long *)(pTVar14 + 0x40040) = *(long *)(pTVar14 + 0x40080) + -1;
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
            pTVar15 = local_48 + 8;
            *(long *)pTVar15 = *(long *)pTVar15 + -1;
            UNLOCK();
            if (*(long *)pTVar15 == 0) {
              (**(code **)(*(long *)local_48 + 8))();
            }
          }
          else {
            (**(code **)(*(long *)local_48 + 0x18))();
          }
        }
      }
      do {
        cVar12 = embree::TaskScheduler::TaskQueue::execute_local(pTVar18,(Task *)pTVar14);
      } while (cVar12 != '\0');
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
      *(undefined8 *)(lVar13 * 8 + *(long *)(this + 0x10)) = 0;
      UNLOCK();
      embree::TaskScheduler::swapThread(pTVar16);
      pTVar18 = *(Thread **)param_2;
      if (pTVar18 != (Thread *)0x0) {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        pTVar18 = local_48;
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
      if (pTVar18 == (Thread *)0x0) {
        if (pTVar14 == (Thread *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return;
          }
        }
        else {
          plVar7 = *(long **)(pTVar14 + 0xc0108);
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
            embree::alignedFree(pTVar14);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      local_48 = pTVar18;
      std::__exception_ptr::exception_ptr::_M_addref();
      std::rethrow_exception(&local_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* void embree::TaskScheduler::spawn<unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long> const&)#1}
   const&, embree::TaskScheduler::TaskGroupContext*) [clone .isra.0] [clone .cold] */

void embree::TaskScheduler::
     spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
               (ulong param_1,ulong param_2,ulong param_3,
               _lambda_embree__range<unsigned_long>_const___1_ *param_4,TaskGroupContext *param_5)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::TaskScheduler::ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned long,
   embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long>
   const&)#1}>(unsigned long, unsigned long, unsigned long, embree::parallel_for<unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1}>(unsigned long,
   embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa>
   const&)::{lambda(unsigned long)#1} const&)::{lambda(embree::range<unsigned long> const&)#1}
   const&, embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>::execute() */

void __thiscall
embree::TaskScheduler::
ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::{lambda(unsigned_long)#1}>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::{lambda(unsigned_long)#1}>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::{lambda(unsigned_long)#1}const&)::{lambda(embree::range<unsigned_long>const&)#1}const&,embree::TaskScheduler::TaskGroupContext*)::{lambda()#1}>
::execute(ClosureTaskFunction<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
          *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 0x18) < *(long *)(this + 8) - uVar1) {
    uVar4 = *(long *)(this + 8) + uVar1 >> 1;
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar1,uVar4,*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (uVar4,*(ulong *)(this + 8),*(ulong *)(this + 0x18),
               *(_lambda_embree__range<unsigned_long>_const___1_ **)(this + 0x20),
               *(TaskGroupContext **)(this + 0x28));
    embree::TaskScheduler::wait();
    return;
  }
  plVar2 = *(long **)(this + 0x20);
  puVar3 = (undefined8 *)(uVar1 * 0x70 + *(long *)((long)*(int *)plVar2[1] * 0x20 + *plVar2 + 0x18))
  ;
  sse2::BVHNCollider<4>::collide_recurse(plVar2[2],*puVar3,puVar3 + 2,puVar3[7],puVar3 + 8);
  return;
}



/* embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa> const&)
    */

void __thiscall
embree::sse2::BVHNCollider<4>::collide_recurse_entry
          (BVHNCollider<4> *this,undefined1 *param_2,ulong *param_3,
          _lambda_embree__range<unsigned_long>_const___1_ *param_4,undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var19;
  undefined4 uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var24;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var25;
  long lVar26;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var27;
  _lambda_embree__range<unsigned_long>_const___1_ *p_Var28;
  ulong *puVar29;
  long in_FS_OFFSET;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  _lambda_embree__range<unsigned_long>_const___1_ *local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  uint local_124;
  uint local_10c;
  long local_108;
  long local_100;
  undefined1 *local_f8;
  uint *local_f0;
  BVHNCollider<4> *local_e8;
  _lambda_embree__range<unsigned_long>_const___1_ *local_c0;
  undefined1 local_88 [8];
  _lambda_embree__range<unsigned_long>_const___1_ *local_80 [2];
  ulong local_70 [2];
  _lambda_embree__range<unsigned_long>_const___1_ *local_60;
  ulong local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80[0] = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
  local_80[1] = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
  local_70[0] = 0;
  local_60 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
  local_58 = 0;
  local_50 = (undefined8 *)0x0;
  p_Var19 = param_4;
  local_70[0] = embree::alignedMalloc(0x38000,0x10);
  if (local_80[0] != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
    p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
    puVar15 = (undefined8 *)0x0;
    do {
      puVar10 = (undefined8 *)(local_70[0] + (long)puVar15);
      p_Var19 = p_Var19 + 1;
      *puVar10 = *puVar15;
      uVar8 = puVar15[3];
      puVar10[2] = puVar15[2];
      puVar10[3] = uVar8;
      uVar8 = puVar15[5];
      puVar10[4] = puVar15[4];
      puVar10[5] = uVar8;
      puVar10[6] = puVar15[6];
      puVar10[7] = puVar15[7];
      uVar8 = puVar15[9];
      puVar10[8] = puVar15[8];
      puVar10[9] = uVar8;
      uVar8 = puVar15[0xb];
      puVar10[10] = puVar15[10];
      puVar10[0xb] = uVar8;
      puVar10[0xc] = puVar15[0xc];
      puVar15 = puVar15 + 0xe;
    } while (p_Var19 < local_80[0]);
  }
  embree::alignedFree((void *)0x0);
  puVar15 = local_50;
  p_Var27 = local_60;
  local_80[0] = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
  local_80[1] = (_lambda_embree__range<unsigned_long>_const___1_ *)0x800;
  if (local_58 < 0x800) {
    local_50 = (undefined8 *)embree::alignedMalloc(0x38000,0x10);
    if (local_60 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
      lVar23 = 0;
      p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
      puVar10 = puVar15;
      do {
        puVar13 = (undefined8 *)((long)local_50 + lVar23);
        p_Var19 = p_Var19 + 1;
        lVar23 = lVar23 + 0x70;
        *puVar13 = *puVar10;
        uVar8 = puVar10[3];
        puVar13[2] = puVar10[2];
        puVar13[3] = uVar8;
        uVar8 = puVar10[5];
        puVar13[4] = puVar10[4];
        puVar13[5] = uVar8;
        puVar13[6] = puVar10[6];
        puVar13[7] = puVar10[7];
        uVar8 = puVar10[9];
        puVar13[8] = puVar10[8];
        puVar13[9] = uVar8;
        uVar8 = puVar10[0xb];
        puVar13[10] = puVar10[10];
        puVar13[0xb] = uVar8;
        puVar13[0xc] = puVar10[0xc];
        puVar10 = puVar10 + 0xe;
      } while (p_Var19 < local_60);
    }
    embree::alignedFree(puVar15);
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    local_188 = *param_5;
    local_60 = p_Var27;
    local_58 = 0x800;
    local_1b8 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_3[2];
    uStack_1b0 = param_3[3];
    p_Var27 = local_80[0] + 1;
    local_198 = param_5[1];
    plVar22 = (long *)((long)local_80[0] * 0x70);
    local_f8 = param_2;
    local_c0 = param_4;
    if (local_80[1] < p_Var27) {
      p_Var25 = p_Var27;
      p_Var28 = local_80[1];
      if (local_80[1] == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) goto LAB_00102f0b;
      do {
        p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)((long)p_Var28 * 2);
        if (p_Var28 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
          p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
        }
        p_Var25 = p_Var28;
        if (p_Var27 <= p_Var28) goto LAB_00102f0b;
      } while( true );
    }
  }
  else {
    local_1a8 = *param_3;
    uStack_1a0 = param_3[1];
    plVar22 = (long *)0x0;
    p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
    local_1b8 = (_lambda_embree__range<unsigned_long>_const___1_ *)param_3[2];
    uStack_1b0 = param_3[3];
    local_f8 = param_2;
    local_188 = *param_5;
    local_198 = param_5[1];
    local_c0 = param_4;
  }
  while( true ) {
    local_80[0] = p_Var27;
    plVar22 = (long *)((long)plVar22 + local_70[0]);
    local_10c = 0;
    *plVar22 = (long)local_f8;
    p_Var28 = local_80[0];
    plVar22[2] = local_1a8;
    plVar22[3] = uStack_1a0;
    plVar22[4] = (long)local_1b8;
    plVar22[5] = uStack_1b0;
    plVar22[6] = 0;
    plVar22[0xc] = 0;
    plVar22[7] = (long)local_c0;
    plVar22[8] = local_188._0_8_;
    plVar22[9] = local_188._8_8_;
    plVar22[10] = local_198._0_8_;
    plVar22[0xb] = local_198._8_8_;
    if (p_Var28 + 8 < (_lambda_embree__range<unsigned_long>_const___1_ *)0x801) break;
LAB_00102fec:
    local_f0 = &local_10c;
    local_f8 = local_88;
    p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)&local_f8;
    local_108 = 0;
    local_e8 = this;
    TaskScheduler::
    spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>
              (0,(ulong)p_Var28,1,p_Var19,(TaskGroupContext *)&local_108);
    embree::TaskScheduler::wait();
    if (local_108 == 0) {
LAB_00102ba5:
      embree::alignedFree(local_50);
      embree::alignedFree((void *)local_70[0]);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    plVar22 = &local_100;
    local_100 = local_108;
    std::__exception_ptr::exception_ptr::_M_addref();
    std::rethrow_exception(plVar22);
    p_Var25 = p_Var27;
LAB_00102f0b:
    uVar21 = local_70[0];
    local_70[0] = embree::alignedMalloc((long)p_Var25 * 0x70,0x10);
    if (local_80[0] != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
      lVar23 = 0;
      p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
      puVar15 = (undefined8 *)uVar21;
      do {
        puVar10 = (undefined8 *)(local_70[0] + lVar23);
        p_Var28 = p_Var28 + 1;
        lVar23 = lVar23 + 0x70;
        *puVar10 = *puVar15;
        uVar8 = puVar15[3];
        puVar10[2] = puVar15[2];
        puVar10[3] = uVar8;
        uVar8 = puVar15[5];
        puVar10[4] = puVar15[4];
        puVar10[5] = uVar8;
        puVar10[6] = puVar15[6];
        puVar10[7] = puVar15[7];
        uVar8 = puVar15[9];
        puVar10[8] = puVar15[8];
        puVar10[9] = uVar8;
        uVar8 = puVar15[0xb];
        puVar10[10] = puVar15[10];
        puVar10[0xb] = uVar8;
        p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)puVar15[0xc];
        puVar10[0xc] = p_Var19;
        puVar15 = puVar15 + 0xe;
      } while (p_Var28 < local_80[0]);
    }
    embree::alignedFree((void *)uVar21);
    local_80[1] = p_Var25;
  }
  uVar21 = 0;
  local_124 = 1;
  p_Var25 = local_60;
  do {
    lVar23 = (long)(int)local_124;
    uVar11 = (ulong)(int)uVar21;
    uVar16 = uVar21;
    if (p_Var28 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
      local_1b8 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
      do {
        puVar29 = (ulong *)((long)local_1b8 * 0x70 + local_70[uVar11 * 4]);
        if ((ulong)((long)(p_Var28 + 8 + (long)p_Var25) - (long)local_1b8) < 0x801) {
          p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)puVar29[7];
          uVar16 = *puVar29;
          if ((uVar16 & 8) == 0) {
            if ((((ulong)p_Var28 & 8) != 0) ||
               (fVar37 = *(float *)((long)puVar29 + 0x24) - *(float *)((long)puVar29 + 0x14),
               fVar33 = *(float *)((long)puVar29 + 0x54) - *(float *)((long)puVar29 + 0x44),
               fVar37 = (*(float *)(puVar29 + 4) - *(float *)(puVar29 + 2)) *
                        (fVar37 + (*(float *)(puVar29 + 5) - *(float *)(puVar29 + 3))) +
                        fVar37 * (*(float *)(puVar29 + 5) - *(float *)(puVar29 + 3)),
               fVar33 = (*(float *)(puVar29 + 10) - *(float *)(puVar29 + 8)) *
                        (fVar33 + (*(float *)(puVar29 + 0xb) - *(float *)(puVar29 + 9))) +
                        fVar33 * (*(float *)(puVar29 + 0xb) - *(float *)(puVar29 + 9)),
               fVar33 + fVar33 < fVar37 + fVar37)) {
              uVar20 = (undefined4)puVar29[8];
              uVar1 = *(undefined4 *)((long)puVar29 + 0x44);
              uVar7 = (undefined4)puVar29[10];
              uVar2 = *(undefined4 *)((long)puVar29 + 0x54);
              uVar3 = (undefined4)puVar29[9];
              uVar4 = (undefined4)puVar29[0xb];
              auVar30._4_4_ = uVar20;
              auVar30._0_4_ = uVar20;
              auVar30._8_4_ = uVar20;
              auVar30._12_4_ = uVar20;
              auVar38._4_4_ = uVar1;
              auVar38._0_4_ = uVar1;
              auVar38._8_4_ = uVar1;
              auVar38._12_4_ = uVar1;
              auVar30 = maxps(auVar30,*(undefined1 (*) [16])(uVar16 + 0x20));
              auVar38 = maxps(auVar38,*(undefined1 (*) [16])(uVar16 + 0x40));
              auVar40._4_4_ = uVar7;
              auVar40._0_4_ = uVar7;
              auVar40._8_4_ = uVar7;
              auVar40._12_4_ = uVar7;
              auVar42._4_4_ = uVar2;
              auVar42._0_4_ = uVar2;
              auVar42._8_4_ = uVar2;
              auVar42._12_4_ = uVar2;
              auVar40 = minps(auVar40,*(undefined1 (*) [16])(uVar16 + 0x30));
              auVar42 = minps(auVar42,*(undefined1 (*) [16])(uVar16 + 0x50));
              auVar34._4_4_ = uVar3;
              auVar34._0_4_ = uVar3;
              auVar34._8_4_ = uVar3;
              auVar34._12_4_ = uVar3;
              auVar44._4_4_ = uVar4;
              auVar44._0_4_ = uVar4;
              auVar44._8_4_ = uVar4;
              auVar44._12_4_ = uVar4;
              auVar34 = maxps(auVar34,*(undefined1 (*) [16])(uVar16 + 0x60));
              auVar44 = minps(auVar44,*(undefined1 (*) [16])(uVar16 + 0x70));
              auVar36._0_4_ =
                   -(uint)((auVar30._0_4_ <= auVar40._0_4_ && auVar38._0_4_ <= auVar42._0_4_) &&
                          auVar34._0_4_ <= auVar44._0_4_);
              auVar36._4_4_ =
                   -(uint)((auVar30._4_4_ <= auVar40._4_4_ && auVar38._4_4_ <= auVar42._4_4_) &&
                          auVar34._4_4_ <= auVar44._4_4_);
              auVar36._8_4_ =
                   -(uint)((auVar30._8_4_ <= auVar40._8_4_ && auVar38._8_4_ <= auVar42._8_4_) &&
                          auVar34._8_4_ <= auVar44._8_4_);
              auVar36._12_4_ =
                   -(uint)((auVar30._12_4_ <= auVar40._12_4_ && auVar38._12_4_ <= auVar42._12_4_) &&
                          auVar34._12_4_ <= auVar44._12_4_);
              uVar20 = movmskps((int)uVar21,auVar36);
              p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                        CONCAT44((int)(uVar21 >> 0x20),uVar20);
              uVar21 = 0;
              if (p_Var19 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                for (; ((ulong)p_Var19 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                }
              }
              if (p_Var19 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0)
              goto LAB_001024d9;
              while( true ) {
                local_1a8 = puVar29[0xc];
                local_188._8_4_ = *(uint *)(uVar16 + 0x60 + uVar21 * 4);
                p_Var27 = p_Var25 + 1;
                p_Var24 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                          local_70[lVar23 * 4 + -1];
                uVar11 = puVar29[6];
                local_198._0_8_ = uVar11 + 1;
                lVar26 = uVar16 + uVar21 * 4;
                uVar20 = *(undefined4 *)(lVar26 + 0x50);
                auVar45._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar26 + 0x40),*(undefined4 *)(lVar26 + 0x20));
                uVar1 = *(undefined4 *)(lVar26 + 0x30);
                auVar45._8_4_ = local_188._8_4_;
                auVar45._12_4_ = 0;
                uVar5 = *(uint *)(lVar26 + 0x70);
                uVar6 = puVar29[8];
                uVar12 = puVar29[9];
                auVar30 = *(undefined1 (*) [16])(puVar29 + 10);
                local_f8 = (undefined1 *)*(undefined8 *)(uVar16 + uVar21 * 8);
                local_c0 = p_Var28;
                if (p_Var24 < p_Var27) {
                  p_Var28 = p_Var27;
                  if (p_Var24 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                    do {
                      p_Var24 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                                ((long)p_Var24 * 2);
                      if (p_Var24 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                        p_Var24 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
                      }
                      p_Var28 = p_Var24;
                    } while (p_Var24 < p_Var27);
                  }
                  puVar15 = (undefined8 *)local_70[lVar23 * 4];
                  uVar14 = embree::alignedMalloc((long)p_Var28 * 0x70,0x10);
                  local_70[lVar23 * 4] = uVar14;
                  if (local_80[lVar23 * 4] != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0
                     ) {
                    lVar26 = 0;
                    p_Var24 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
                    puVar10 = puVar15;
                    while( true ) {
                      puVar13 = (undefined8 *)(uVar14 + lVar26);
                      p_Var24 = p_Var24 + 1;
                      lVar26 = lVar26 + 0x70;
                      *puVar13 = *puVar10;
                      uVar8 = puVar10[3];
                      puVar13[2] = puVar10[2];
                      puVar13[3] = uVar8;
                      uVar8 = puVar10[5];
                      puVar13[4] = puVar10[4];
                      puVar13[5] = uVar8;
                      puVar13[6] = puVar10[6];
                      puVar13[7] = puVar10[7];
                      *(undefined1 (*) [16])(puVar13 + 8) = *(undefined1 (*) [16])(puVar10 + 8);
                      *(undefined1 (*) [16])(puVar13 + 10) = *(undefined1 (*) [16])(puVar10 + 10);
                      puVar13[0xc] = puVar10[0xc];
                      if (local_80[lVar23 * 4] <= p_Var24) break;
                      uVar14 = local_70[lVar23 * 4];
                      puVar10 = puVar10 + 0xe;
                    }
                  }
                  embree::alignedFree(puVar15);
                  local_70[lVar23 * 4 + -1] = (ulong)p_Var28;
                }
                local_188._12_4_ = 0;
                local_80[lVar23 * 4] = p_Var27;
                puVar15 = (undefined8 *)((long)p_Var25 * 0x70 + local_70[lVar23 * 4]);
                puVar15[2] = auVar45._0_8_;
                puVar15[3] = local_188._8_8_;
                uStack_170 = (ulong)uVar5;
                puVar15[6] = uVar11 + 1;
                puVar15[4] = CONCAT44(uVar20,uVar1);
                puVar15[5] = uStack_170;
                *puVar15 = local_f8;
                p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                          ((ulong)p_Var19 ^ 1L << (uVar21 & 0x3f));
                puVar15[7] = local_c0;
                puVar15[0xc] = local_1a8;
                puVar15[8] = uVar6;
                puVar15[9] = uVar12;
                *(undefined1 (*) [16])(puVar15 + 10) = auVar30;
                uVar21 = 0;
                if (p_Var19 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                  for (; ((ulong)p_Var19 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                p_Var27 = p_Var19;
                local_188 = auVar45;
                if (p_Var19 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) break;
                p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)puVar29[7];
                p_Var25 = local_80[lVar23 * 4];
              }
            }
            else {
LAB_001028a8:
              uVar20 = (undefined4)puVar29[2];
              uVar1 = *(undefined4 *)((long)puVar29 + 0x14);
              uVar7 = (undefined4)puVar29[4];
              uVar2 = *(undefined4 *)((long)puVar29 + 0x24);
              uVar3 = (undefined4)puVar29[3];
              uVar4 = (undefined4)puVar29[5];
              auVar31._4_4_ = uVar20;
              auVar31._0_4_ = uVar20;
              auVar31._8_4_ = uVar20;
              auVar31._12_4_ = uVar20;
              auVar39._4_4_ = uVar1;
              auVar39._0_4_ = uVar1;
              auVar39._8_4_ = uVar1;
              auVar39._12_4_ = uVar1;
              auVar30 = maxps(auVar31,*(undefined1 (*) [16])(p_Var28 + 0x20));
              auVar34 = maxps(auVar39,*(undefined1 (*) [16])(p_Var28 + 0x40));
              auVar41._4_4_ = uVar7;
              auVar41._0_4_ = uVar7;
              auVar41._8_4_ = uVar7;
              auVar41._12_4_ = uVar7;
              auVar43._4_4_ = uVar2;
              auVar43._0_4_ = uVar2;
              auVar43._8_4_ = uVar2;
              auVar43._12_4_ = uVar2;
              auVar38 = minps(auVar41,*(undefined1 (*) [16])(p_Var28 + 0x30));
              auVar40 = minps(auVar43,*(undefined1 (*) [16])(p_Var28 + 0x50));
              auVar35._4_4_ = uVar3;
              auVar35._0_4_ = uVar3;
              auVar35._8_4_ = uVar3;
              auVar35._12_4_ = uVar3;
              auVar46._4_4_ = uVar4;
              auVar46._0_4_ = uVar4;
              auVar46._8_4_ = uVar4;
              auVar46._12_4_ = uVar4;
              auVar36 = maxps(auVar35,*(undefined1 (*) [16])(p_Var28 + 0x60));
              auVar42 = minps(auVar46,*(undefined1 (*) [16])(p_Var28 + 0x70));
              auVar32._0_4_ =
                   -(uint)((auVar30._0_4_ <= auVar38._0_4_ && auVar34._0_4_ <= auVar40._0_4_) &&
                          auVar36._0_4_ <= auVar42._0_4_);
              auVar32._4_4_ =
                   -(uint)((auVar30._4_4_ <= auVar38._4_4_ && auVar34._4_4_ <= auVar40._4_4_) &&
                          auVar36._4_4_ <= auVar42._4_4_);
              auVar32._8_4_ =
                   -(uint)((auVar30._8_4_ <= auVar38._8_4_ && auVar34._8_4_ <= auVar40._8_4_) &&
                          auVar36._8_4_ <= auVar42._8_4_);
              auVar32._12_4_ =
                   -(uint)((auVar30._12_4_ <= auVar38._12_4_ && auVar34._12_4_ <= auVar40._12_4_) &&
                          auVar36._12_4_ <= auVar42._12_4_);
              uVar20 = movmskps((int)p_Var19,auVar32);
              uVar11 = CONCAT44((int)((ulong)p_Var19 >> 0x20),uVar20);
              uVar21 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                }
              }
              if (uVar11 == 0) goto LAB_001024d9;
              while( true ) {
                uVar12 = puVar29[2];
                uVar14 = puVar29[3];
                p_Var19 = p_Var25 + 1;
                auVar30 = *(undefined1 (*) [16])(puVar29 + 4);
                local_1a8 = puVar29[0xc] + 1;
                p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                          local_70[lVar23 * 4 + -1];
                local_198._4_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x40);
                local_198._0_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x20);
                local_198._8_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x60);
                local_198._12_4_ = 0;
                uVar6 = puVar29[6];
                local_f8 = (undefined1 *)uVar16;
                local_c0 = *(_lambda_embree__range<unsigned_long>_const___1_ **)
                            (p_Var28 + uVar21 * 8);
                local_188._4_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x50);
                local_188._0_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x30);
                local_188._8_4_ = *(undefined4 *)(p_Var28 + uVar21 * 4 + 0x70);
                local_188._12_4_ = 0;
                if (p_Var27 < p_Var19) {
                  p_Var24 = p_Var19;
                  if (p_Var27 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                    do {
                      p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                                ((long)p_Var27 * 2);
                      if (p_Var27 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                        p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
                      }
                      p_Var24 = p_Var27;
                    } while (p_Var27 < p_Var19);
                  }
                  puVar15 = (undefined8 *)local_70[lVar23 * 4];
                  uVar16 = embree::alignedMalloc((long)p_Var24 * 0x70,0x10);
                  local_70[lVar23 * 4] = uVar16;
                  if (local_80[lVar23 * 4] != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0
                     ) {
                    lVar26 = 0;
                    p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
                    puVar10 = puVar15;
                    while( true ) {
                      puVar13 = (undefined8 *)(uVar16 + lVar26);
                      p_Var27 = p_Var27 + 1;
                      lVar26 = lVar26 + 0x70;
                      *puVar13 = *puVar10;
                      uVar8 = puVar10[3];
                      puVar13[2] = puVar10[2];
                      puVar13[3] = uVar8;
                      uVar20 = *(undefined4 *)((long)puVar10 + 0x24);
                      uVar1 = *(undefined4 *)(puVar10 + 5);
                      uVar7 = *(undefined4 *)((long)puVar10 + 0x2c);
                      *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar10 + 4);
                      *(undefined4 *)((long)puVar13 + 0x24) = uVar20;
                      *(undefined4 *)(puVar13 + 5) = uVar1;
                      *(undefined4 *)((long)puVar13 + 0x2c) = uVar7;
                      puVar13[6] = puVar10[6];
                      puVar13[7] = puVar10[7];
                      uVar8 = puVar10[9];
                      puVar13[8] = puVar10[8];
                      puVar13[9] = uVar8;
                      uVar8 = puVar10[0xb];
                      puVar13[10] = puVar10[10];
                      puVar13[0xb] = uVar8;
                      puVar13[0xc] = puVar10[0xc];
                      if (local_80[lVar23 * 4] <= p_Var27) break;
                      uVar16 = local_70[lVar23 * 4];
                      puVar10 = puVar10 + 0xe;
                    }
                  }
                  embree::alignedFree(puVar15);
                  local_70[lVar23 * 4 + -1] = (ulong)p_Var24;
                }
                local_80[lVar23 * 4] = p_Var19;
                puVar17 = (ulong *)((long)p_Var25 * 0x70 + local_70[lVar23 * 4]);
                *puVar17 = (ulong)local_f8;
                puVar17[2] = uVar12;
                puVar17[3] = uVar14;
                puVar17[6] = uVar6;
                *(undefined1 (*) [16])(puVar17 + 4) = auVar30;
                uVar11 = uVar11 ^ 1L << (uVar21 & 0x3f);
                puVar17[7] = (ulong)local_c0;
                puVar17[0xc] = local_1a8;
                *(undefined1 (*) [16])(puVar17 + 8) = local_198;
                *(undefined1 (*) [16])(puVar17 + 10) = local_188;
                uVar21 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar21 & 1) == 0; uVar21 = uVar21 + 1) {
                  }
                }
                p_Var27 = p_Var25;
                if (uVar11 == 0) break;
                uVar16 = *puVar29;
                p_Var25 = local_80[lVar23 * 4];
              }
            }
            p_Var25 = local_80[lVar23 * 4];
          }
          else {
            if (((ulong)p_Var28 & 8) == 0) goto LAB_001028a8;
            local_f8 = (undefined1 *)uVar16;
            local_188._0_8_ = puVar29[6];
            p_Var19 = p_Var25 + 1;
            p_Var27 = (_lambda_embree__range<unsigned_long>_const___1_ *)(long)(int)local_124;
            local_1a8 = puVar29[2];
            uStack_1a0 = puVar29[3];
            uVar16 = *(ulong *)*(undefined1 (*) [16])(puVar29 + 4);
            uVar11 = puVar29[5];
            local_198 = *(undefined1 (*) [16])(puVar29 + 4);
            local_c0 = (_lambda_embree__range<unsigned_long>_const___1_ *)puVar29[7];
            uVar21 = puVar29[0xc];
            uVar6 = puVar29[8];
            uVar12 = puVar29[9];
            uVar14 = puVar29[10];
            uVar9 = puVar29[0xb];
            p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)
                      local_70[(long)p_Var27 * 4 + -1];
            if (p_Var28 < p_Var19) {
              p_Var24 = p_Var19;
              if (p_Var28 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                do {
                  p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)((long)p_Var28 * 2);
                  if (p_Var28 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                    p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
                  }
                  p_Var24 = p_Var28;
                } while (p_Var28 < p_Var19);
              }
              puVar15 = (undefined8 *)local_70[(long)p_Var27 * 4];
              uVar18 = embree::alignedMalloc((long)p_Var24 * 0x70,0x10);
              local_70[(long)p_Var27 * 4] = uVar18;
              if (local_80[(long)p_Var27 * 4] !=
                  (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                lVar26 = 0;
                p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
                puVar10 = puVar15;
                while( true ) {
                  puVar13 = (undefined8 *)(uVar18 + lVar26);
                  p_Var28 = p_Var28 + 1;
                  lVar26 = lVar26 + 0x70;
                  *puVar13 = *puVar10;
                  uVar8 = puVar10[3];
                  puVar13[2] = puVar10[2];
                  puVar13[3] = uVar8;
                  uVar8 = puVar10[5];
                  puVar13[4] = puVar10[4];
                  puVar13[5] = uVar8;
                  puVar13[6] = puVar10[6];
                  puVar13[7] = puVar10[7];
                  uVar8 = puVar10[9];
                  puVar13[8] = puVar10[8];
                  puVar13[9] = uVar8;
                  uVar8 = puVar10[0xb];
                  puVar13[10] = puVar10[10];
                  puVar13[0xb] = uVar8;
                  puVar13[0xc] = puVar10[0xc];
                  if (local_80[(long)p_Var27 * 4] <= p_Var28) break;
                  uVar18 = local_70[(long)p_Var27 * 4];
                  puVar10 = puVar10 + 0xe;
                }
              }
              embree::alignedFree(puVar15);
              local_70[(long)p_Var27 * 4 + -1] = (ulong)p_Var24;
            }
            puVar29 = (ulong *)((long)p_Var25 * 0x70 + local_70[(long)p_Var27 * 4]);
            local_80[(long)p_Var27 * 4] = p_Var19;
            *puVar29 = (ulong)local_f8;
            puVar29[2] = local_1a8;
            puVar29[3] = uStack_1a0;
            puVar29[4] = uVar16;
            puVar29[5] = uVar11;
            puVar29[6] = local_188._0_8_;
            puVar29[0xc] = uVar21;
            puVar29[7] = (ulong)local_c0;
            p_Var25 = local_80[(long)p_Var27 * 4];
            puVar29[8] = uVar6;
            puVar29[9] = uVar12;
            puVar29[10] = uVar14;
            puVar29[0xb] = uVar9;
          }
        }
        else {
          p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)local_70[lVar23 * 4 + -1];
          p_Var19 = p_Var25 + 1;
          local_f8 = (undefined1 *)*puVar29;
          local_1a8 = *(ulong *)*(undefined1 (*) [16])(puVar29 + 2);
          uStack_1a0 = puVar29[3];
          auVar30 = *(undefined1 (*) [16])(puVar29 + 2);
          local_198 = *(undefined1 (*) [16])(puVar29 + 4);
          uVar21 = puVar29[6];
          local_c0 = (_lambda_embree__range<unsigned_long>_const___1_ *)puVar29[7];
          local_188 = *(undefined1 (*) [16])(puVar29 + 8);
          uVar11 = puVar29[10];
          uVar6 = puVar29[0xb];
          uVar16 = puVar29[0xc];
          p_Var27 = p_Var28;
          if (p_Var28 < p_Var19) {
            p_Var27 = p_Var19;
            if (p_Var28 != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
              do {
                p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)((long)p_Var28 * 2);
                if (p_Var28 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
                  p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x1;
                }
                p_Var27 = p_Var28;
              } while (p_Var28 < p_Var19);
            }
            puVar15 = (undefined8 *)local_70[lVar23 * 4];
            uVar12 = embree::alignedMalloc((long)p_Var27 * 0x70,0x10);
            local_70[lVar23 * 4] = uVar12;
            if (local_80[lVar23 * 4] != (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) {
              lVar26 = 0;
              p_Var28 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
              puVar10 = puVar15;
              while( true ) {
                puVar13 = (undefined8 *)(uVar12 + lVar26);
                p_Var28 = p_Var28 + 1;
                lVar26 = lVar26 + 0x70;
                *puVar13 = *puVar10;
                uVar8 = puVar10[3];
                puVar13[2] = puVar10[2];
                puVar13[3] = uVar8;
                *(undefined1 (*) [16])(puVar13 + 4) = *(undefined1 (*) [16])(puVar10 + 4);
                puVar13[6] = puVar10[6];
                puVar13[7] = puVar10[7];
                uVar8 = puVar10[9];
                puVar13[8] = puVar10[8];
                puVar13[9] = uVar8;
                uVar8 = puVar10[0xb];
                puVar13[10] = puVar10[10];
                puVar13[0xb] = uVar8;
                puVar13[0xc] = puVar10[0xc];
                if (local_80[lVar23 * 4] <= p_Var28) break;
                uVar12 = local_70[lVar23 * 4];
                puVar10 = puVar10 + 0xe;
              }
            }
            embree::alignedFree(puVar15);
            local_70[lVar23 * 4 + -1] = (ulong)p_Var27;
          }
          local_80[lVar23 * 4] = p_Var19;
          puVar29 = (ulong *)((long)p_Var25 * 0x70 + local_70[lVar23 * 4]);
          local_178 = (undefined4)uVar11;
          uStack_174 = (undefined4)(uVar11 >> 0x20);
          uStack_170._0_4_ = (undefined4)uVar6;
          uStack_170._4_4_ = (undefined4)(uVar6 >> 0x20);
          *puVar29 = (ulong)local_f8;
          puVar29[6] = uVar21;
          *(undefined1 (*) [16])(puVar29 + 2) = auVar30;
          *(undefined1 (*) [16])(puVar29 + 4) = local_198;
          puVar29[0xc] = uVar16;
          puVar29[7] = (ulong)local_c0;
          p_Var25 = local_80[lVar23 * 4];
          *(undefined1 (*) [16])(puVar29 + 8) = local_188;
          *(undefined4 *)(puVar29 + 10) = local_178;
          *(undefined4 *)((long)puVar29 + 0x54) = uStack_174;
          *(undefined4 *)(puVar29 + 0xb) = (undefined4)uStack_170;
          *(undefined4 *)((long)puVar29 + 0x5c) = uStack_170._4_4_;
        }
LAB_001024d9:
        uVar11 = (ulong)(int)local_10c;
        local_1b8 = local_1b8 + 1;
        p_Var19 = (_lambda_embree__range<unsigned_long>_const___1_ *)(uVar11 * 0x20);
        p_Var28 = local_80[uVar11 * 4];
        uVar16 = uVar11;
        uVar21 = uVar11;
      } while (local_1b8 < p_Var28);
    }
    if (p_Var28 == p_Var25) {
      local_e8 = this;
      p_Var28 = local_80[(long)(int)local_10c * 4];
      local_f8 = local_88;
      local_f0 = &local_10c;
      if (p_Var28 == (_lambda_embree__range<unsigned_long>_const___1_ *)0x0) goto LAB_00102ba5;
      goto LAB_00102fec;
    }
    p_Var25 = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
    local_80[(long)(int)(uint)uVar16 * 4] = (_lambda_embree__range<unsigned_long>_const___1_ *)0x0;
    local_10c = local_124;
    p_Var28 = local_80[(long)(int)local_124 * 4];
    if ((_lambda_embree__range<unsigned_long>_const___1_ *)0x800 < p_Var28 + 8) goto LAB_00102fec;
    uVar21 = (ulong)local_124;
    local_124 = (uint)uVar16;
  } while( true );
}



/* embree::sse2::BVHNColliderUserGeom<4>::collide(embree::BVHN<4>*, embree::BVHN<4>*, void
   (*)(void*, RTCCollision*, unsigned int), void*) */

void embree::sse2::BVHNColliderUserGeom<4>::collide
               (BVHN *param_1,BVHN *param_2,_func_void_void_ptr_RTCCollision_ptr_uint *param_3,
               void *param_4)

{
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  _func_void_void_ptr_RTCCollision_ptr_uint *local_20;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *(undefined8 *)(param_2 + 0x68);
  local_48 = maxps(*(undefined1 (*) [16])(param_2 + 0x20),*(undefined1 (*) [16])(param_2 + 0x40));
  local_58 = minps(*(undefined1 (*) [16])(param_2 + 0x10),*(undefined1 (*) [16])(param_2 + 0x30));
  local_30 = *(undefined8 *)(param_1 + 0x68);
  local_78 = minps(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_1 + 0x30));
  local_68 = maxps(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x40));
  local_38 = &PTR_processLeaf_001035a8;
  local_20 = param_3;
  local_18 = param_4;
  BVHNCollider<4>::collide_recurse_entry
            ((BVHNCollider<4> *)&local_38,*(undefined8 *)(param_1 + 0x70),local_78,
             *(undefined8 *)(param_2 + 0x70),local_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* embree::sse2::parallel_depth_threshold */

void embree::sse2::_GLOBAL__sub_I_parallel_depth_threshold(void)

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
  local_60 = 0x19;
  local_58 = local_48;
  __src = (ulong *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
  __n = local_60;
  uVar1 = _UNK_001037b8;
  local_48[0] = local_60;
  *__src = __LC40;
  __src[1] = uVar1;
  uVar2 = _UNK_001037c8;
  *(undefined8 *)((long)__src + 9) = __LC41;
  *(undefined8 *)((long)__src + 0x11) = uVar2;
  local_50 = local_60;
  *(undefined1 *)((long)__src + local_60) = 0;
  collision_regression._0_8_ = &PTR___cxa_pure_virtual_00103578;
  collision_regression._8_8_ = 0x100398;
  local_58 = __src;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      collision_regression[0x18] = (char)*__src;
      goto LAB_001031e8;
    }
    if (local_60 == 0) goto LAB_001031e8;
  }
  else {
    collision_regression._8_8_ =
         std::__cxx11::string::_M_create((ulong *)(collision_regression + 8),(ulong)&local_60);
    collision_regression._24_8_ = local_60;
  }
  memcpy((void *)collision_regression._8_8_,__src,__n);
LAB_001031e8:
  collision_regression._16_8_ = local_60;
  *(undefined1 *)(collision_regression._8_8_ + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  collision_regression._0_8_ = &PTR_run_00103590;
  embree::registerRegressionTest((RegressionTest *)collision_regression);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __cxa_atexit(collision_regression_test::~collision_regression_test,collision_regression,
               &__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* embree::sse2::collision_regression_test::~collision_regression_test() */

void __thiscall
embree::sse2::collision_regression_test::~collision_regression_test(collision_regression_test *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


