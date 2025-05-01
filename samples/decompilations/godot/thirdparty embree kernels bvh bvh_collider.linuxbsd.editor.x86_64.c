
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
            if (lVar1 == lVar12) goto LAB_00100300;
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
LAB_00100300:
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
                    /* WARNING: Could not recover jumptable at 0x00100389. Too many branches */
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
  *(undefined ***)this = &PTR___cxa_pure_virtual_001037f8;
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
LAB_00100487:
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
    if ((param_4 & 8) == 0) goto LAB_00100487;
    if (*(code **)*param_1 != BVHNColliderUserGeom<4>::processLeaf) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001007bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*param_1)(param_1,param_2,param_4);
        return;
      }
      goto LAB_001007c1;
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
LAB_001007c1:
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
  bool bVar5;
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
  undefined3 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  undefined7 uVar32;
  ulong uVar33;
  ulong uVar34;
  undefined8 unaff_RBP;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  float fVar35;
  float fVar36;
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
  fVar38 = *(float *)(param_6 + 4);
  fVar48 = *(float *)(param_6 + 8);
  fVar57 = *(float *)param_5;
  fVar60 = *(float *)(param_5 + 4);
  fVar41 = *(float *)(param_5 + 8);
  fVar44 = *(float *)param_4;
  fVar36 = *(float *)(param_4 + 4);
  fVar39 = *(float *)(param_4 + 8);
  fVar55 = *(float *)param_1;
  fVar58 = *(float *)(param_1 + 4);
  fVar59 = *(float *)(param_1 + 8);
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  fVar61 = *(float *)(param_2 + 8);
  fVar56 = *(float *)param_3;
  fVar3 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  fVar40 = (fVar57 - fVar44) * (fVar38 - fVar36) - (fVar49 - fVar44) * (fVar60 - fVar36);
  fVar42 = (fVar60 - fVar36) * (fVar48 - fVar39) - (fVar38 - fVar36) * (fVar41 - fVar39);
  fVar43 = (fVar41 - fVar39) * (fVar49 - fVar44) - (fVar48 - fVar39) * (fVar57 - fVar44);
  fVar45 = fVar44 * fVar42 + fVar36 * fVar43 + fVar39 * fVar40;
  fVar37 = (fVar55 * fVar42 + fVar58 * fVar43 + fVar59 * fVar40) - fVar45;
  fVar35 = (fVar1 * fVar42 + fVar2 * fVar43 + fVar61 * fVar40) - fVar45;
  fVar45 = (fVar56 * fVar42 + fVar3 * fVar43 + fVar4 * fVar40) - fVar45;
  if (fVar35 <= fVar37) {
    fVar46 = fVar45;
    if (fVar45 <= fVar37) {
      fVar46 = fVar37;
    }
    if (fVar46 < _LC3) {
      return 0;
    }
    fVar46 = fVar37;
    fVar24 = fVar35;
    fVar47 = fVar35;
    if (fVar45 <= fVar35) {
      fVar47 = fVar45;
    }
  }
  else {
    fVar46 = fVar35;
    if (fVar35 < fVar45) {
      fVar46 = fVar45;
    }
    if (fVar46 < _LC3) {
      return 0;
    }
    fVar46 = fVar35;
    fVar24 = fVar37;
    fVar47 = fVar37;
    if (fVar45 <= fVar37) {
      fVar47 = fVar45;
    }
  }
  if (_LC4 < fVar47) {
    return 0;
  }
  fVar47 = (fVar1 - fVar55) * (fVar3 - fVar58) - (fVar56 - fVar55) * (fVar2 - fVar58);
  fVar50 = (fVar2 - fVar58) * (fVar4 - fVar59) - (fVar3 - fVar58) * (fVar61 - fVar59);
  fVar51 = (fVar61 - fVar59) * (fVar56 - fVar55) - (fVar4 - fVar59) * (fVar1 - fVar55);
  fVar53 = fVar55 * fVar50 + fVar58 * fVar51 + fVar59 * fVar47;
  fVar52 = (fVar36 * fVar51 + fVar44 * fVar50 + fVar39 * fVar47) - fVar53;
  fVar62 = (fVar60 * fVar51 + fVar57 * fVar50 + fVar41 * fVar47) - fVar53;
  fVar53 = (fVar49 * fVar50 + fVar38 * fVar51 + fVar48 * fVar47) - fVar53;
  if (fVar62 <= fVar52) {
    fVar25 = fVar62;
    fVar26 = fVar52;
    fVar54 = fVar53;
    if (fVar53 <= fVar52) {
      fVar54 = fVar52;
    }
  }
  else {
    fVar25 = fVar52;
    fVar26 = fVar62;
    fVar54 = fVar62;
    if (fVar62 < fVar53) {
      fVar54 = fVar53;
    }
  }
  if (fVar54 < _LC3) {
    return 0;
  }
  fVar54 = fVar25;
  if (fVar53 <= fVar25) {
    fVar54 = fVar53;
  }
  if (_LC4 < fVar54) {
    return 0;
  }
  if (((((float)((uint)fVar37 & _LC7) < _LC4) && ((float)((uint)fVar35 & _LC7) < _LC4)) &&
      ((float)((uint)fVar45 & _LC7) < _LC4)) ||
     ((((float)((uint)fVar52 & _LC7) < _LC4 && ((float)((uint)fVar62 & _LC7) < _LC4)) &&
      ((float)((uint)fVar53 & _LC7) < _LC4)))) {
    if ((float)(_LC7 & (uint)fVar50) <= (float)(_LC7 & (uint)fVar51)) {
      iVar31 = 1;
      if ((float)(_LC7 & (uint)fVar51) <= (float)(_LC7 & (uint)fVar47)) {
        iVar31 = 2;
      }
    }
    else {
      iVar31 = (uint)((float)(_LC7 & (uint)fVar50) <= (float)(_LC7 & (uint)fVar47)) * 2;
    }
    uVar33 = (ulong)(long)(iVar31 + 1) % 3;
    uVar34 = (uVar33 + 1) % 3;
    fVar49 = *(float *)(param_1 + uVar33 * 4);
    fVar38 = *(float *)(param_4 + uVar33 * 4);
    fVar48 = *(float *)(param_2 + uVar33 * 4);
    fVar57 = *(float *)(param_5 + uVar33 * 4);
    fVar39 = fVar49 - fVar48;
    fVar58 = fVar38 - fVar57;
    fVar60 = *(float *)(param_1 + uVar34 * 4);
    fVar41 = *(float *)(param_4 + uVar34 * 4);
    fVar44 = *(float *)(param_2 + uVar34 * 4);
    fVar36 = *(float *)(param_5 + uVar34 * 4);
    fVar55 = fVar60 - fVar44;
    fVar59 = fVar41 - fVar36;
    bVar5 = 0.0 <= (fVar38 - fVar49) * fVar55 - (fVar41 - fVar60) * fVar39;
    uVar30 = CONCAT31((int3)((ulong)param_5 >> 8),bVar5);
    bVar6 = 0.0 <= (fVar57 - fVar49) * fVar55 - (fVar36 - fVar60) * fVar39;
    uVar29 = CONCAT31((int3)((ulong)param_1 >> 8),bVar6);
    bVar7 = 0.0 <= (fVar49 - fVar38) * fVar59 - (fVar60 - fVar41) * fVar58;
    bVar8 = 0.0 <= (fVar48 - fVar38) * fVar59 - (fVar44 - fVar41) * fVar58;
    uVar28 = uVar30 ^ uVar29;
    bVar27 = (byte)uVar28 & bVar7 != bVar8;
    if (bVar27 != 0) {
      return (ulong)CONCAT31((int3)(uVar28 >> 8),bVar27);
    }
    fVar1 = *(float *)(param_6 + uVar33 * 4);
    fVar2 = *(float *)(param_6 + uVar34 * 4);
    fVar61 = fVar36 - fVar2;
    bVar9 = 0.0 <= (fVar1 - fVar49) * fVar55 - fVar39 * (fVar2 - fVar60);
    fVar39 = fVar57 - fVar1;
    uVar28 = CONCAT31((int3)((ulong)param_2 >> 8),bVar9);
    bVar10 = 0.0 <= (fVar49 - fVar57) * fVar61 - (fVar60 - fVar36) * fVar39;
    bVar11 = 0.0 <= (fVar48 - fVar57) * fVar61 - (fVar44 - fVar36) * fVar39;
    uVar29 = uVar29 ^ uVar28;
    bVar27 = (byte)uVar29 & bVar10 != bVar11;
    if (bVar27 != 0) {
      return (ulong)CONCAT31((int3)(uVar29 >> 8),bVar27);
    }
    fVar55 = fVar2 - fVar41;
    fVar56 = fVar1 - fVar38;
    bVar12 = 0.0 <= (fVar49 - fVar1) * fVar55 - (fVar60 - fVar2) * fVar56;
    bVar13 = 0.0 <= (fVar48 - fVar1) * fVar55 - (fVar44 - fVar2) * fVar56;
    uVar30 = uVar30 ^ uVar28;
    bVar27 = (byte)uVar30 & bVar12 != bVar13;
    if (bVar27 != 0) {
      return (ulong)CONCAT31((int3)(uVar30 >> 8),bVar27);
    }
    fVar3 = *(float *)(param_3 + uVar34 * 4);
    fVar4 = *(float *)(param_3 + uVar33 * 4);
    fVar35 = fVar44 - fVar3;
    fVar37 = fVar48 - fVar4;
    bVar14 = 0.0 <= fVar35 * (fVar38 - fVar48) - fVar37 * (fVar41 - fVar44);
    bVar15 = 0.0 <= (fVar57 - fVar48) * fVar35 - fVar37 * (fVar36 - fVar44);
    bVar16 = 0.0 <= fVar59 * (fVar4 - fVar38) - (fVar3 - fVar41) * fVar58;
    uVar23 = (undefined3)((ulong)param_3 >> 8);
    if (bVar15 != bVar14 && bVar8 != bVar16) {
      return (ulong)CONCAT31(uVar23,bVar15 != bVar14 && bVar8 != bVar16);
    }
    bVar17 = 0.0 <= fVar35 * (fVar1 - fVar48) - (fVar2 - fVar44) * fVar37;
    bVar18 = 0.0 <= (fVar4 - fVar57) * fVar61 - (fVar3 - fVar36) * fVar39;
    if (bVar15 != bVar17 && bVar11 != bVar18) {
      return (ulong)(bVar15 != bVar17 && bVar11 != bVar18);
    }
    bVar19 = 0.0 <= (fVar4 - fVar1) * fVar55 - (fVar3 - fVar2) * fVar56;
    if (bVar17 != bVar14 && bVar13 != bVar19) {
      return (ulong)CONCAT31(uVar23,bVar17 != bVar14 && bVar13 != bVar19);
    }
    fVar60 = fVar3 - fVar60;
    fVar49 = fVar4 - fVar49;
    bVar20 = 0.0 <= (fVar38 - fVar4) * fVar60 - (fVar41 - fVar3) * fVar49;
    bVar21 = 0.0 <= (fVar57 - fVar4) * fVar60 - (fVar36 - fVar3) * fVar49;
    if (bVar7 != bVar16 && bVar21 != bVar20) {
      return (ulong)(bVar7 != bVar16 && bVar21 != bVar20);
    }
    bVar22 = 0.0 <= (fVar1 - fVar4) * fVar60 - (fVar2 - fVar3) * fVar49;
    if (bVar10 != bVar18 && bVar21 != bVar22) {
      return (ulong)CONCAT31((int3)((ulong)unaff_R13 >> 8),bVar10 != bVar18 && bVar21 != bVar22);
    }
    uVar28 = (uint)CONCAT71((int7)((ulong)unaff_R12 >> 8),bVar12) ^
             CONCAT31((int3)((ulong)unaff_RBP >> 8),bVar19);
    uVar23 = (undefined3)(uVar28 >> 8);
    bVar27 = (byte)uVar28 & bVar22 != bVar20;
    uVar33 = (ulong)CONCAT31(uVar23,bVar27);
    if (bVar27 != 0) {
      return uVar33;
    }
    if (((bVar7 == bVar10) && (bVar7 == bVar12)) &&
       ((bVar8 == bVar11 &&
        ((bVar8 == bVar13 &&
         (uVar33 = (ulong)CONCAT31(uVar23,bVar16 == bVar18 && bVar16 == bVar19),
         bVar16 == bVar18 && bVar16 == bVar19)))))) {
      return uVar33;
    }
    uVar32 = (undefined7)(uVar33 >> 8);
    if (bVar5 != bVar14 || bVar5 != bVar20) {
      return CONCAT71(uVar32,bVar5 == bVar14 && bVar5 == bVar20);
    }
    if (bVar6 != bVar15 || bVar6 != bVar21) {
      return CONCAT71(uVar32,bVar6 == bVar15 && bVar6 == bVar21);
    }
    return (ulong)((uint)CONCAT71(uVar32,bVar9 == bVar17) & (uint)(bVar9 == bVar22));
  }
  fVar54 = fVar43 * fVar50 - fVar51 * fVar42;
  fVar43 = fVar40 * fVar51 - fVar47 * fVar43;
  fVar40 = fVar42 * fVar47 - fVar50 * fVar40;
  fVar55 = fVar55 * fVar43 + fVar58 * fVar40 + fVar59 * fVar54;
  fVar59 = fVar1 * fVar43 + fVar2 * fVar40 + fVar61 * fVar54;
  fVar58 = fVar56 * fVar43 + fVar3 * fVar40 + fVar4 * fVar54;
  fVar44 = fVar44 * fVar43 + fVar36 * fVar40 + fVar39 * fVar54;
  fVar57 = fVar57 * fVar43 + fVar60 * fVar40 + fVar41 * fVar54;
  fVar48 = fVar38 * fVar40 + fVar49 * fVar43 + fVar48 * fVar54;
  fVar49 = _LC2;
  fVar38 = _LC1;
  if ((((fVar24 <= 0.0) && (0.0 <= fVar46)) && (0.0 < (float)((uint)(fVar37 - fVar35) & _LC7))) &&
     (fVar49 = ((fVar59 - fVar55) * fVar37) / (fVar37 - fVar35) + fVar55, fVar38 = fVar49,
     fVar49 < __LC8)) {
    fVar38 = _LC1;
  }
  fVar36 = fVar38;
  fVar60 = fVar45;
  fVar41 = fVar37;
  if (fVar45 <= fVar35) {
    if (fVar45 <= 0.0) {
      if (0.0 <= fVar35) goto LAB_00100e36;
LAB_00100e8e:
      fVar39 = fVar37;
      if (fVar37 <= fVar45) goto joined_r0x00100cbf;
      goto LAB_00100b7d;
    }
    if (fVar37 <= fVar45) goto joined_r0x00100cbf;
  }
  else {
    if (fVar35 <= 0.0) {
      if (fVar45 < 0.0) goto LAB_00100e8e;
LAB_00100e36:
      if (0.0 < (float)((uint)(fVar35 - fVar45) & _LC7)) {
        fVar36 = ((fVar58 - fVar59) * fVar35) / (fVar35 - fVar45) + fVar59;
        if (fVar36 <= fVar49) {
          fVar49 = fVar36;
        }
        if (fVar36 <= fVar38) {
          fVar36 = fVar38;
        }
      }
    }
    fVar38 = fVar36;
    if (fVar45 < fVar37) {
      fVar60 = fVar37;
      fVar41 = fVar45;
    }
joined_r0x00100cbf:
    fVar36 = fVar38;
    fVar39 = fVar60;
    if (fVar41 <= 0.0) {
LAB_00100b7d:
      fVar36 = fVar38;
      if ((0.0 <= fVar39) && (0.0 < (float)((uint)(fVar45 - fVar37) & _LC7))) {
        fVar36 = ((fVar55 - fVar58) * fVar45) / (fVar45 - fVar37) + fVar58;
        if (fVar36 <= fVar49) {
          fVar49 = fVar36;
        }
        if (fVar36 <= fVar38) {
          fVar36 = fVar38;
        }
      }
    }
  }
  fVar38 = _LC2;
  fVar60 = _LC1;
  if (((fVar25 <= 0.0) && (0.0 <= fVar26)) &&
     ((0.0 < (float)((uint)(fVar52 - fVar62) & _LC7) &&
      (fVar38 = ((fVar57 - fVar44) * fVar52) / (fVar52 - fVar62) + fVar44, fVar60 = fVar38,
      fVar38 < __LC8)))) {
    fVar60 = _LC1;
  }
  fVar41 = fVar52;
  fVar39 = fVar60;
  if (fVar53 <= fVar62) {
    if (0.0 < fVar53) {
      fVar57 = fVar60;
      fVar41 = fVar53;
      fVar39 = fVar52;
      if (fVar53 < fVar52) goto LAB_00100c53;
      goto joined_r0x00100c97;
    }
    if (0.0 <= fVar62) goto LAB_00100ddd;
LAB_00100d96:
    if (fVar52 <= fVar53) goto LAB_00100da5;
  }
  else {
    if (fVar62 <= 0.0) {
      if (fVar53 < 0.0) goto LAB_00100d96;
LAB_00100ddd:
      if (0.0 < (float)((uint)(fVar62 - fVar53) & _LC7)) {
        fVar39 = ((fVar48 - fVar57) * fVar62) / (fVar62 - fVar53) + fVar57;
        if (fVar39 <= fVar38) {
          fVar38 = fVar39;
        }
        if (fVar39 <= fVar60) {
          fVar39 = fVar60;
        }
      }
    }
    fVar60 = fVar39;
    fVar39 = fVar53;
    if (fVar52 <= fVar53) {
LAB_00100da5:
      fVar41 = fVar53;
      fVar39 = fVar52;
    }
joined_r0x00100c97:
    fVar57 = fVar60;
    if (0.0 < fVar39) goto LAB_00100c53;
  }
  fVar57 = fVar60;
  if ((0.0 <= fVar41) && (0.0 < (float)((uint)(fVar53 - fVar52) & _LC7))) {
    fVar57 = ((fVar44 - fVar48) * fVar53) / (fVar53 - fVar52) + fVar48;
    if (fVar57 <= fVar38) {
      fVar38 = fVar57;
    }
    if (fVar57 <= fVar60) {
      fVar57 = fVar60;
    }
  }
LAB_00100c53:
  if (fVar57 <= fVar36) {
    fVar36 = fVar57;
  }
  if (fVar38 <= fVar49) {
    fVar38 = fVar49;
  }
  return (ulong)(fVar38 <= fVar36);
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
  uStack_50 = _UNK_00103878;
  local_68._8_8_ = _UNK_00103888;
  local_68._0_8_ = __LC10;
  local_78._8_8_ = _UNK_00103898;
  local_78._0_8_ = __LC11;
  local_88 = __LC12;
  uStack_80 = _UNK_001038a8;
  local_98._8_8_ = _UNK_001038b8;
  local_98._0_8_ = __LC13;
  local_a8._8_8_ = _UNK_001038c8;
  local_a8._0_8_ = __LC14;
  bVar1 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_58 = __LC15;
  uStack_50 = _UNK_001038d8;
  local_68 = ZEXT416(_LC16);
  local_88 = __LC15;
  uStack_80 = _UNK_001038d8;
  local_98 = ZEXT416(_LC16);
  bVar2 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._8_8_ = _UNK_00103918;
  local_78._0_8_ = __LC19;
  local_58 = __LC17;
  uStack_50 = _UNK_001038f8;
  local_68._8_8_ = _UNK_00103908;
  local_68._0_8_ = __LC18;
  bVar3 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC15;
  uStack_50 = _UNK_001038d8;
  local_68 = ZEXT416(_LC16);
  bVar4 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78 = (undefined1  [16])0x0;
  local_58 = __LC17;
  uStack_50 = _UNK_001038f8;
  local_68._8_8_ = _UNK_00103908;
  local_68._0_8_ = __LC18;
  bVar5 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC20;
  local_78._8_8_ = _UNK_00103928;
  bVar6 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._8_8_ = _UNK_00103938;
  local_78._0_8_ = __LC21;
  bVar7 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC15;
  uStack_50 = _UNK_001038d8;
  local_68 = ZEXT416(_LC16);
  local_78 = (undefined1  [16])0x0;
  bVar8 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC22;
  uStack_50 = _UNK_00103948;
  local_68 = ZEXT416(_LC23);
  bVar9 = TriangleTriangleIntersector::intersect_triangle_triangle
                    ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                     (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC20;
  local_78._8_8_ = _UNK_00103928;
  bVar10 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC24;
  uStack_50 = _UNK_00103968;
  local_68._0_8_ = __LC25;
  local_68._8_8_ = _UNK_00103978;
  bVar11 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC26;
  local_78._8_8_ = _UNK_00103988;
  bVar12 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_78._0_8_ = __LC27;
  local_78._8_8_ = _UNK_00103998;
  bVar13 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC28;
  uStack_50 = _UNK_001039a8;
  local_68._0_8_ = __LC29;
  local_68._8_8_ = _UNK_001039b8;
  local_78._0_8_ = __LC30;
  local_78._8_8_ = _UNK_001039c8;
  bVar14 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC31;
  uStack_50 = _UNK_001039d8;
  local_68._0_8_ = __LC32;
  local_68._8_8_ = _UNK_001039e8;
  local_78._0_8_ = __LC33;
  local_78._8_8_ = _UNK_001039f8;
  bVar15 = TriangleTriangleIntersector::intersect_triangle_triangle
                     ((Vec3fa *)local_a8,(Vec3fa *)local_98,(Vec3fa *)&local_88,(Vec3fa *)local_78,
                      (Vec3fa *)local_68,(Vec3fa *)&local_58);
  local_58 = __LC34;
  uStack_50 = _UNK_00103a08;
  local_68._8_8_ = _UNK_00103a18;
  local_68._0_8_ = __LC35;
  local_78._8_8_ = _UNK_00103a28;
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



/* WARNING: Removing unreachable block (ram,0x00101ce5) */
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
      *(undefined ***)pTVar15 = &PTR_execute_00103840;
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
      }
      else {
        local_48 = pTVar18;
        std::__exception_ptr::exception_ptr::_M_addref();
        std::rethrow_exception(&local_48);
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



/* embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,
   embree::BBox<embree::Vec3fa> const&, embree::NodeRefPtr<4>, embree::BBox<embree::Vec3fa> const&)
    */

void __thiscall
embree::sse2::BVHNCollider<4>::collide_recurse_entry
          (BVHNCollider<4> *this,long *param_2,undefined1 (*param_3) [16],long *param_4,
          undefined1 (*param_5) [16])

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  TaskScheduler *this_00;
  undefined4 uVar21;
  long *plVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  long lVar26;
  long **pplVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long in_FS_OFFSET;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  ulong local_1b8;
  ulong uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  uint local_124;
  long *local_120;
  undefined1 *local_118;
  uint *local_110;
  BVHNCollider<4> *local_108;
  long *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 **ppuStack_e0;
  TaskGroupContext *local_d8;
  long *local_c0;
  undefined1 local_88 [8];
  long *local_80 [2];
  ulong local_70 [2];
  long *local_60;
  ulong local_58;
  undefined8 *local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80[0] = (long *)0x0;
  local_80[1] = (long *)0x0;
  local_70[0] = 0;
  local_60 = (long *)0x0;
  local_58 = 0;
  local_50 = (undefined8 *)0x0;
  plVar22 = param_4;
  local_70[0] = embree::alignedMalloc(0x38000,0x10);
  if (local_80[0] != (long *)0x0) {
    plVar22 = (long *)0x0;
    puVar24 = (undefined8 *)0x0;
    do {
      puVar14 = (undefined8 *)(local_70[0] + (long)puVar24);
      plVar22 = (long *)((long)plVar22 + 1);
      *puVar14 = *puVar24;
      uVar8 = puVar24[3];
      puVar14[2] = puVar24[2];
      puVar14[3] = uVar8;
      uVar8 = puVar24[5];
      puVar14[4] = puVar24[4];
      puVar14[5] = uVar8;
      puVar14[6] = puVar24[6];
      puVar14[7] = puVar24[7];
      uVar8 = puVar24[9];
      puVar14[8] = puVar24[8];
      puVar14[9] = uVar8;
      uVar8 = puVar24[0xb];
      puVar14[10] = puVar24[10];
      puVar14[0xb] = uVar8;
      puVar14[0xc] = puVar24[0xc];
      puVar24 = puVar24 + 0xe;
    } while (plVar22 < local_80[0]);
  }
  embree::alignedFree((void *)0x0);
  puVar24 = local_50;
  plVar37 = local_60;
  local_80[0] = (long *)0x0;
  local_80[1] = (long *)0x800;
  if (local_58 < 0x800) {
    local_50 = (undefined8 *)embree::alignedMalloc(0x38000,0x10);
    if (local_60 != (long *)0x0) {
      lVar26 = 0;
      plVar22 = (long *)0x0;
      puVar14 = puVar24;
      do {
        puVar17 = (undefined8 *)((long)local_50 + lVar26);
        plVar22 = (long *)((long)plVar22 + 1);
        lVar26 = lVar26 + 0x70;
        *puVar17 = *puVar14;
        uVar8 = puVar14[3];
        puVar17[2] = puVar14[2];
        puVar17[3] = uVar8;
        uVar8 = puVar14[5];
        puVar17[4] = puVar14[4];
        puVar17[5] = uVar8;
        puVar17[6] = puVar14[6];
        puVar17[7] = puVar14[7];
        uVar8 = puVar14[9];
        puVar17[8] = puVar14[8];
        puVar17[9] = uVar8;
        uVar8 = puVar14[0xb];
        puVar17[10] = puVar14[10];
        puVar17[0xb] = uVar8;
        puVar17[0xc] = puVar14[0xc];
        puVar14 = puVar14 + 0xe;
      } while (plVar22 < local_60);
    }
    embree::alignedFree(puVar24);
    local_1a8 = *param_3;
    local_188 = *param_5;
    local_60 = plVar37;
    local_58 = 0x800;
    local_198 = param_3[1];
    plVar37 = (long *)((long)local_80[0] + 1);
    local_1b8 = *(ulong *)param_5[1];
    uStack_1b0 = *(ulong *)(param_5[1] + 8);
    pplVar27 = (long **)((long)local_80[0] * 0x70);
    local_f8 = param_2;
    local_c0 = param_4;
    if (local_80[1] < plVar37) {
      plVar36 = plVar37;
      plVar31 = local_80[1];
      if (local_80[1] == (long *)0x0) goto LAB_00102c92;
      do {
        plVar31 = (long *)((long)plVar31 * 2);
        if (plVar31 == (long *)0x0) {
          plVar31 = (long *)0x1;
        }
        plVar36 = plVar31;
        if (plVar37 <= plVar31) goto LAB_00102c92;
      } while( true );
    }
  }
  else {
    local_1a8 = *param_3;
    plVar37 = (long *)0x1;
    pplVar27 = (long **)0x0;
    local_198 = param_3[1];
    local_f8 = param_2;
    local_188 = *param_5;
    local_1b8 = *(ulong *)param_5[1];
    uStack_1b0 = *(ulong *)(param_5[1] + 8);
    local_c0 = param_4;
  }
  do {
    local_80[0] = plVar37;
    puVar25 = (ulong *)((long)pplVar27 + local_70[0]);
    local_124 = 0;
    *puVar25 = (ulong)local_f8;
    plVar31 = local_80[0];
    puVar25[2] = local_1a8._0_8_;
    puVar25[3] = local_1a8._8_8_;
    puVar25[4] = local_198._0_8_;
    puVar25[5] = local_198._8_8_;
    puVar25[6] = 0;
    puVar25[0xc] = 0;
    puVar25[7] = (ulong)local_c0;
    *(undefined4 *)(puVar25 + 8) = local_188._0_4_;
    *(undefined4 *)((long)puVar25 + 0x44) = local_188._4_4_;
    *(undefined4 *)(puVar25 + 9) = local_188._8_4_;
    *(undefined4 *)((long)puVar25 + 0x4c) = local_188._12_4_;
    puVar25[10] = local_1b8;
    puVar25[0xb] = uStack_1b0;
    if (plVar31 + 1 < (long *)0x801) {
      uVar16 = 0;
      plVar36 = local_60;
      uVar32 = 1;
      do {
        lVar26 = (long)(int)uVar32;
        plVar28 = (long *)0x0;
        uVar23 = (uint)uVar16;
        uVar15 = (ulong)(int)uVar23;
        if (plVar31 != (long *)0x0) {
          do {
            puVar25 = (ulong *)((long)plVar28 * 0x70 + local_70[uVar15 * 4]);
            if ((ulong)(((long)(plVar31 + 1) + (long)plVar36) - (long)plVar28) < 0x801) {
              plVar29 = (long *)puVar25[7];
              plVar30 = (long *)*puVar25;
              if (((ulong)plVar30 & 8) == 0) {
                if ((((ulong)plVar29 & 8) != 0) ||
                   (fVar44 = *(float *)((long)puVar25 + 0x24) - *(float *)((long)puVar25 + 0x14),
                   fVar41 = *(float *)((long)puVar25 + 0x54) - *(float *)((long)puVar25 + 0x44),
                   fVar44 = (*(float *)(puVar25 + 4) - *(float *)(puVar25 + 2)) *
                            (fVar44 + (*(float *)(puVar25 + 5) - *(float *)(puVar25 + 3))) +
                            fVar44 * (*(float *)(puVar25 + 5) - *(float *)(puVar25 + 3)),
                   fVar41 = (*(float *)(puVar25 + 10) - *(float *)(puVar25 + 8)) *
                            (fVar41 + (*(float *)(puVar25 + 0xb) - *(float *)(puVar25 + 9))) +
                            fVar41 * (*(float *)(puVar25 + 0xb) - *(float *)(puVar25 + 9)),
                   fVar41 + fVar41 < fVar44 + fVar44)) {
                  uVar21 = (undefined4)puVar25[8];
                  uVar2 = *(undefined4 *)((long)puVar25 + 0x44);
                  uVar7 = (undefined4)puVar25[10];
                  uVar3 = *(undefined4 *)((long)puVar25 + 0x54);
                  uVar4 = (undefined4)puVar25[9];
                  uVar5 = (undefined4)puVar25[0xb];
                  auVar38._4_4_ = uVar21;
                  auVar38._0_4_ = uVar21;
                  auVar38._8_4_ = uVar21;
                  auVar38._12_4_ = uVar21;
                  auVar45._4_4_ = uVar2;
                  auVar45._0_4_ = uVar2;
                  auVar45._8_4_ = uVar2;
                  auVar45._12_4_ = uVar2;
                  auVar39 = maxps(auVar38,*(undefined1 (*) [16])(plVar30 + 4));
                  auVar46 = maxps(auVar45,*(undefined1 (*) [16])(plVar30 + 8));
                  auVar47._4_4_ = uVar7;
                  auVar47._0_4_ = uVar7;
                  auVar47._8_4_ = uVar7;
                  auVar47._12_4_ = uVar7;
                  auVar50._4_4_ = uVar3;
                  auVar50._0_4_ = uVar3;
                  auVar50._8_4_ = uVar3;
                  auVar50._12_4_ = uVar3;
                  auVar48 = minps(auVar47,*(undefined1 (*) [16])(plVar30 + 6));
                  auVar51 = minps(auVar50,*(undefined1 (*) [16])(plVar30 + 10));
                  auVar42._4_4_ = uVar4;
                  auVar42._0_4_ = uVar4;
                  auVar42._8_4_ = uVar4;
                  auVar42._12_4_ = uVar4;
                  auVar52._4_4_ = uVar5;
                  auVar52._0_4_ = uVar5;
                  auVar52._8_4_ = uVar5;
                  auVar52._12_4_ = uVar5;
                  auVar43 = maxps(auVar42,*(undefined1 (*) [16])(plVar30 + 0xc));
                  auVar53 = minps(auVar52,*(undefined1 (*) [16])(plVar30 + 0xe));
                  auVar40._0_4_ =
                       -(uint)((auVar39._0_4_ <= auVar48._0_4_ && auVar46._0_4_ <= auVar51._0_4_) &&
                              auVar43._0_4_ <= auVar53._0_4_);
                  auVar40._4_4_ =
                       -(uint)((auVar39._4_4_ <= auVar48._4_4_ && auVar46._4_4_ <= auVar51._4_4_) &&
                              auVar43._4_4_ <= auVar53._4_4_);
                  auVar40._8_4_ =
                       -(uint)((auVar39._8_4_ <= auVar48._8_4_ && auVar46._8_4_ <= auVar51._8_4_) &&
                              auVar43._8_4_ <= auVar53._8_4_);
                  auVar40._12_4_ =
                       -(uint)((auVar39._12_4_ <= auVar48._12_4_ && auVar46._12_4_ <= auVar51._12_4_
                               ) && auVar43._12_4_ <= auVar53._12_4_);
                  uVar23 = movmskps((uint)plVar29 & 8,auVar40);
                  uVar34 = (ulong)uVar23;
                  plVar22 = (long *)0x0;
                  if (uVar34 != 0) {
                    for (; (uVar23 >> (long)plVar22 & 1) == 0; plVar22 = (long *)((long)plVar22 + 1)
                        ) {
                    }
                  }
                  plVar35 = plVar22;
                  if (uVar34 == 0) goto LAB_0010226f;
                  while( true ) {
                    local_1b8 = puVar25[0xc];
                    local_198._8_4_ = *(uint *)((long)plVar30 + (long)plVar35 * 4 + 0x60);
                    plVar37 = (long *)((long)plVar36 + 1);
                    plVar31 = (long *)local_70[lVar26 * 4 + -1];
                    uVar16 = puVar25[6];
                    local_1a8._0_8_ = uVar16 + 1;
                    auVar54._0_8_ =
                         CONCAT44(*(undefined4 *)((long)plVar30 + (long)plVar35 * 4 + 0x40),
                                  *(undefined4 *)((long)plVar30 + (long)plVar35 * 4 + 0x20));
                    auVar54._8_4_ = local_198._8_4_;
                    auVar54._12_4_ = 0;
                    local_188._8_4_ = *(uint *)((long)plVar30 + (long)plVar35 * 4 + 0x70);
                    auVar49._0_8_ =
                         CONCAT44(*(undefined4 *)((long)plVar30 + (long)plVar35 * 4 + 0x50),
                                  *(undefined4 *)((long)plVar30 + (long)plVar35 * 4 + 0x30));
                    auVar49._8_4_ = local_188._8_4_;
                    auVar49._12_4_ = 0;
                    uVar15 = puVar25[8];
                    uVar13 = puVar25[9];
                    auVar39 = *(undefined1 (*) [16])(puVar25 + 10);
                    local_f8 = (long *)plVar30[(long)plVar35];
                    local_c0 = plVar29;
                    if (plVar31 < plVar37) {
                      plVar29 = plVar37;
                      if (plVar31 != (long *)0x0) {
                        do {
                          plVar31 = (long *)((long)plVar31 * 2);
                          if (plVar31 == (long *)0x0) {
                            plVar31 = (long *)0x1;
                          }
                          plVar29 = plVar31;
                        } while (plVar31 < plVar37);
                      }
                      puVar24 = (undefined8 *)local_70[lVar26 * 4];
                      uVar18 = embree::alignedMalloc((long)plVar29 * 0x70,0x10);
                      local_70[lVar26 * 4] = uVar18;
                      if (local_80[lVar26 * 4] != (long *)0x0) {
                        lVar33 = 0;
                        plVar31 = (long *)0x0;
                        puVar14 = puVar24;
                        while( true ) {
                          puVar17 = (undefined8 *)(uVar18 + lVar33);
                          plVar31 = (long *)((long)plVar31 + 1);
                          lVar33 = lVar33 + 0x70;
                          *puVar17 = *puVar14;
                          uVar8 = puVar14[3];
                          puVar17[2] = puVar14[2];
                          puVar17[3] = uVar8;
                          uVar21 = *(undefined4 *)((long)puVar14 + 0x24);
                          uVar2 = *(undefined4 *)(puVar14 + 5);
                          uVar7 = *(undefined4 *)((long)puVar14 + 0x2c);
                          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar14 + 4);
                          *(undefined4 *)((long)puVar17 + 0x24) = uVar21;
                          *(undefined4 *)(puVar17 + 5) = uVar2;
                          *(undefined4 *)((long)puVar17 + 0x2c) = uVar7;
                          puVar17[6] = puVar14[6];
                          puVar17[7] = puVar14[7];
                          *(undefined1 (*) [16])(puVar17 + 8) = *(undefined1 (*) [16])(puVar14 + 8);
                          *(undefined1 (*) [16])(puVar17 + 10) =
                               *(undefined1 (*) [16])(puVar14 + 10);
                          plVar22 = (long *)puVar14[0xc];
                          puVar17[0xc] = plVar22;
                          if (local_80[lVar26 * 4] <= plVar31) break;
                          uVar18 = local_70[lVar26 * 4];
                          puVar14 = puVar14 + 0xe;
                        }
                      }
                      embree::alignedFree(puVar24);
                      local_70[lVar26 * 4 + -1] = (ulong)plVar29;
                    }
                    local_198._12_4_ = 0;
                    local_80[lVar26 * 4] = plVar37;
                    puVar19 = (ulong *)((long)plVar36 * 0x70 + local_70[lVar26 * 4]);
                    puVar19[2] = auVar54._0_8_;
                    puVar19[3] = local_198._8_8_;
                    local_188._12_4_ = 0;
                    puVar19[6] = uVar16 + 1;
                    puVar19[4] = auVar49._0_8_;
                    puVar19[5] = local_188._8_8_;
                    *puVar19 = (ulong)local_f8;
                    uVar34 = uVar34 ^ 1L << ((ulong)plVar35 & 0x3f);
                    puVar19[7] = (ulong)local_c0;
                    puVar19[0xc] = local_1b8;
                    puVar19[8] = uVar15;
                    puVar19[9] = uVar13;
                    *(undefined1 (*) [16])(puVar19 + 10) = auVar39;
                    plVar35 = (long *)0x0;
                    if (uVar34 != 0) {
                      for (; (uVar34 >> (long)plVar35 & 1) == 0;
                          plVar35 = (long *)((long)plVar35 + 1)) {
                      }
                    }
                    plVar37 = plVar36;
                    local_198 = auVar54;
                    local_188 = auVar49;
                    if (uVar34 == 0) break;
                    plVar29 = (long *)puVar25[7];
                    plVar36 = local_80[lVar26 * 4];
                  }
                }
                else {
LAB_00102638:
                  uVar21 = (undefined4)puVar25[2];
                  uVar2 = *(undefined4 *)((long)puVar25 + 0x14);
                  uVar7 = (undefined4)puVar25[4];
                  uVar3 = *(undefined4 *)((long)puVar25 + 0x24);
                  uVar4 = (undefined4)puVar25[3];
                  uVar5 = (undefined4)puVar25[5];
                  auVar39._4_4_ = uVar21;
                  auVar39._0_4_ = uVar21;
                  auVar39._8_4_ = uVar21;
                  auVar39._12_4_ = uVar21;
                  auVar48._4_4_ = uVar2;
                  auVar48._0_4_ = uVar2;
                  auVar48._8_4_ = uVar2;
                  auVar48._12_4_ = uVar2;
                  auVar39 = maxps(auVar39,*(undefined1 (*) [16])(plVar29 + 4));
                  auVar48 = maxps(auVar48,*(undefined1 (*) [16])(plVar29 + 8));
                  auVar51._4_4_ = uVar7;
                  auVar51._0_4_ = uVar7;
                  auVar51._8_4_ = uVar7;
                  auVar51._12_4_ = uVar7;
                  auVar53._4_4_ = uVar3;
                  auVar53._0_4_ = uVar3;
                  auVar53._8_4_ = uVar3;
                  auVar53._12_4_ = uVar3;
                  auVar51 = minps(auVar51,*(undefined1 (*) [16])(plVar29 + 6));
                  auVar53 = minps(auVar53,*(undefined1 (*) [16])(plVar29 + 10));
                  auVar46._4_4_ = uVar4;
                  auVar46._0_4_ = uVar4;
                  auVar46._8_4_ = uVar4;
                  auVar46._12_4_ = uVar4;
                  auVar55._4_4_ = uVar5;
                  auVar55._0_4_ = uVar5;
                  auVar55._8_4_ = uVar5;
                  auVar55._12_4_ = uVar5;
                  auVar46 = maxps(auVar46,*(undefined1 (*) [16])(plVar29 + 0xc));
                  auVar55 = minps(auVar55,*(undefined1 (*) [16])(plVar29 + 0xe));
                  auVar43._0_4_ =
                       -(uint)((auVar39._0_4_ <= auVar51._0_4_ && auVar48._0_4_ <= auVar53._0_4_) &&
                              auVar46._0_4_ <= auVar55._0_4_);
                  auVar43._4_4_ =
                       -(uint)((auVar39._4_4_ <= auVar51._4_4_ && auVar48._4_4_ <= auVar53._4_4_) &&
                              auVar46._4_4_ <= auVar55._4_4_);
                  auVar43._8_4_ =
                       -(uint)((auVar39._8_4_ <= auVar51._8_4_ && auVar48._8_4_ <= auVar53._8_4_) &&
                              auVar46._8_4_ <= auVar55._8_4_);
                  auVar43._12_4_ =
                       -(uint)((auVar39._12_4_ <= auVar51._12_4_ && auVar48._12_4_ <= auVar53._12_4_
                               ) && auVar46._12_4_ <= auVar55._12_4_);
                  uVar21 = movmskps((int)plVar22,auVar43);
                  plVar22 = (long *)CONCAT44((int)((ulong)plVar22 >> 0x20),uVar21);
                  uVar34 = 0;
                  if (plVar22 != (long *)0x0) {
                    for (; ((ulong)plVar22 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
                    }
                  }
                  plVar35 = plVar22;
                  if (plVar22 == (long *)0x0) goto LAB_0010226f;
                  while( true ) {
                    plVar37 = (long *)((long)plVar36 + 1);
                    uVar15 = puVar25[2];
                    uVar13 = puVar25[3];
                    auVar39 = *(undefined1 (*) [16])(puVar25 + 4);
                    local_1b8 = puVar25[0xc] + 1;
                    plVar31 = (long *)local_70[lVar26 * 4 + -1];
                    local_1a8._4_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x40);
                    local_1a8._0_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x20);
                    local_1a8._8_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x60);
                    local_1a8._12_4_ = 0;
                    uVar16 = puVar25[6];
                    local_188._0_8_ = uVar16;
                    local_f8 = plVar30;
                    local_c0 = (long *)plVar29[uVar34];
                    local_198._4_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x50);
                    local_198._0_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x30);
                    local_198._8_4_ = *(undefined4 *)((long)plVar29 + uVar34 * 4 + 0x70);
                    local_198._12_4_ = 0;
                    if (plVar31 < plVar37) {
                      plVar30 = plVar37;
                      if (plVar31 != (long *)0x0) {
                        do {
                          plVar31 = (long *)((long)plVar31 * 2);
                          if (plVar31 == (long *)0x0) {
                            plVar31 = (long *)0x1;
                          }
                          plVar30 = plVar31;
                        } while (plVar31 < plVar37);
                      }
                      puVar24 = (undefined8 *)local_70[lVar26 * 4];
                      uVar18 = embree::alignedMalloc((long)plVar30 * 0x70,0x10);
                      local_70[lVar26 * 4] = uVar18;
                      if (local_80[lVar26 * 4] != (long *)0x0) {
                        lVar33 = 0;
                        plVar31 = (long *)0x0;
                        puVar14 = puVar24;
                        while( true ) {
                          puVar17 = (undefined8 *)(uVar18 + lVar33);
                          plVar31 = (long *)((long)plVar31 + 1);
                          lVar33 = lVar33 + 0x70;
                          *puVar17 = *puVar14;
                          uVar8 = puVar14[3];
                          puVar17[2] = puVar14[2];
                          puVar17[3] = uVar8;
                          uVar21 = *(undefined4 *)((long)puVar14 + 0x24);
                          uVar2 = *(undefined4 *)(puVar14 + 5);
                          uVar7 = *(undefined4 *)((long)puVar14 + 0x2c);
                          *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(puVar14 + 4);
                          *(undefined4 *)((long)puVar17 + 0x24) = uVar21;
                          *(undefined4 *)(puVar17 + 5) = uVar2;
                          *(undefined4 *)((long)puVar17 + 0x2c) = uVar7;
                          puVar17[6] = puVar14[6];
                          puVar17[7] = puVar14[7];
                          uVar8 = puVar14[9];
                          puVar17[8] = puVar14[8];
                          puVar17[9] = uVar8;
                          uVar21 = *(undefined4 *)((long)puVar14 + 0x54);
                          uVar2 = *(undefined4 *)(puVar14 + 0xb);
                          uVar7 = *(undefined4 *)((long)puVar14 + 0x5c);
                          *(undefined4 *)(puVar17 + 10) = *(undefined4 *)(puVar14 + 10);
                          *(undefined4 *)((long)puVar17 + 0x54) = uVar21;
                          *(undefined4 *)(puVar17 + 0xb) = uVar2;
                          *(undefined4 *)((long)puVar17 + 0x5c) = uVar7;
                          plVar22 = (long *)puVar14[0xc];
                          puVar17[0xc] = plVar22;
                          if (local_80[lVar26 * 4] <= plVar31) break;
                          uVar18 = local_70[lVar26 * 4];
                          puVar14 = puVar14 + 0xe;
                        }
                      }
                      embree::alignedFree(puVar24);
                      local_70[lVar26 * 4 + -1] = (ulong)plVar30;
                    }
                    local_80[lVar26 * 4] = plVar37;
                    puVar19 = (ulong *)((long)plVar36 * 0x70 + local_70[lVar26 * 4]);
                    puVar19[6] = uVar16;
                    *puVar19 = (ulong)local_f8;
                    puVar19[2] = uVar15;
                    puVar19[3] = uVar13;
                    *(undefined1 (*) [16])(puVar19 + 4) = auVar39;
                    plVar35 = (long *)((ulong)plVar35 ^ 1L << (uVar34 & 0x3f));
                    puVar19[7] = (ulong)local_c0;
                    puVar19[0xc] = local_1b8;
                    *(undefined1 (*) [16])(puVar19 + 8) = local_1a8;
                    *(undefined1 (*) [16])(puVar19 + 10) = local_198;
                    uVar34 = 0;
                    if (plVar35 != (long *)0x0) {
                      for (; ((ulong)plVar35 >> uVar34 & 1) == 0; uVar34 = uVar34 + 1) {
                      }
                    }
                    plVar37 = plVar36;
                    if (plVar35 == (long *)0x0) break;
                    plVar30 = (long *)*puVar25;
                    plVar36 = local_80[lVar26 * 4];
                  }
                }
                uVar15 = (ulong)(int)local_124;
                plVar36 = local_80[lVar26 * 4];
                plVar31 = local_80[uVar15 * 4];
                uVar16 = uVar15;
              }
              else {
                if (((ulong)plVar29 & 8) == 0) goto LAB_00102638;
                local_f8 = plVar30;
                local_198._0_8_ = puVar25[6];
                plVar22 = (long *)((long)plVar36 + 1);
                local_1b8 = puVar25[2];
                uStack_1b0 = puVar25[3];
                uVar13 = *(ulong *)*(undefined1 (*) [16])(puVar25 + 4);
                uVar18 = puVar25[5];
                local_1a8 = *(undefined1 (*) [16])(puVar25 + 4);
                local_c0 = (long *)puVar25[7];
                plVar37 = (long *)(long)(int)uVar32;
                uVar34 = puVar25[0xc];
                uVar9 = *(ulong *)*(undefined1 (*) [16])(puVar25 + 8);
                uVar10 = puVar25[9];
                auVar39 = *(undefined1 (*) [16])(puVar25 + 8);
                uVar11 = puVar25[10];
                uVar12 = puVar25[0xb];
                plVar31 = (long *)local_70[(long)plVar37 * 4 + -1];
                if (plVar31 < plVar22) {
                  plVar29 = plVar22;
                  if (plVar31 != (long *)0x0) {
                    do {
                      plVar31 = (long *)((long)plVar31 * 2);
                      if (plVar31 == (long *)0x0) {
                        plVar31 = (long *)0x1;
                      }
                      plVar29 = plVar31;
                    } while (plVar31 < plVar22);
                  }
                  puVar24 = (undefined8 *)local_70[(long)plVar37 * 4];
                  uVar16 = embree::alignedMalloc((long)plVar29 * 0x70,0x10);
                  local_70[(long)plVar37 * 4] = uVar16;
                  if (local_80[(long)plVar37 * 4] != (long *)0x0) {
                    lVar33 = 0;
                    plVar31 = (long *)0x0;
                    puVar14 = puVar24;
                    while( true ) {
                      puVar17 = (undefined8 *)(uVar16 + lVar33);
                      plVar31 = (long *)((long)plVar31 + 1);
                      lVar33 = lVar33 + 0x70;
                      *puVar17 = *puVar14;
                      uVar8 = puVar14[3];
                      puVar17[2] = puVar14[2];
                      puVar17[3] = uVar8;
                      uVar8 = puVar14[5];
                      puVar17[4] = puVar14[4];
                      puVar17[5] = uVar8;
                      puVar17[6] = puVar14[6];
                      puVar17[7] = puVar14[7];
                      uVar8 = puVar14[9];
                      puVar17[8] = puVar14[8];
                      puVar17[9] = uVar8;
                      uVar8 = puVar14[0xb];
                      puVar17[10] = puVar14[10];
                      puVar17[0xb] = uVar8;
                      puVar17[0xc] = puVar14[0xc];
                      if (local_80[(long)plVar37 * 4] <= plVar31) break;
                      uVar16 = local_70[(long)plVar37 * 4];
                      puVar14 = puVar14 + 0xe;
                    }
                  }
                  embree::alignedFree(puVar24);
                  local_70[(long)plVar37 * 4 + -1] = (ulong)plVar29;
                  uVar15 = (ulong)(int)local_124;
                  uVar16 = uVar15;
                }
                puVar25 = (ulong *)((long)plVar36 * 0x70 + local_70[(long)plVar37 * 4]);
                local_80[(long)plVar37 * 4] = plVar22;
                *puVar25 = (ulong)local_f8;
                puVar25[2] = local_1b8;
                puVar25[3] = uStack_1b0;
                local_188._0_4_ = (undefined4)uVar9;
                local_188._4_4_ = (undefined4)(uVar9 >> 0x20);
                local_188._8_4_ = (undefined4)uVar10;
                local_188._12_4_ = (undefined4)(uVar10 >> 0x20);
                puVar25[4] = uVar13;
                puVar25[5] = uVar18;
                puVar25[6] = local_198._0_8_;
                *(undefined4 *)(puVar25 + 8) = local_188._0_4_;
                *(undefined4 *)((long)puVar25 + 0x44) = local_188._4_4_;
                *(undefined4 *)(puVar25 + 9) = local_188._8_4_;
                *(undefined4 *)((long)puVar25 + 0x4c) = local_188._12_4_;
                puVar25[7] = (ulong)local_c0;
                puVar25[10] = uVar11;
                puVar25[0xb] = uVar12;
                plVar36 = local_80[(long)plVar37 * 4];
                puVar25[0xc] = uVar34;
                plVar22 = (long *)(uVar15 * 0x20);
                plVar31 = local_80[uVar15 * 4];
                local_188 = auVar39;
              }
            }
            else {
              plVar22 = (long *)local_70[lVar26 * 4 + -1];
              plVar37 = (long *)((long)plVar36 + 1);
              local_f8 = (long *)*puVar25;
              local_1b8 = *(ulong *)*(undefined1 (*) [16])(puVar25 + 2);
              uStack_1b0 = puVar25[3];
              auVar39 = *(undefined1 (*) [16])(puVar25 + 2);
              local_1a8 = *(undefined1 (*) [16])(puVar25 + 4);
              local_198._0_8_ = puVar25[6];
              local_c0 = (long *)puVar25[7];
              local_188 = *(undefined1 (*) [16])(puVar25 + 8);
              uVar13 = puVar25[10];
              uVar21 = *(undefined4 *)((long)puVar25 + 0x54);
              uVar18 = puVar25[0xb];
              uVar2 = *(undefined4 *)((long)puVar25 + 0x5c);
              uVar34 = puVar25[0xc];
              if (plVar22 < plVar37) {
                plVar31 = plVar37;
                if (plVar22 != (long *)0x0) {
                  do {
                    plVar22 = (long *)((long)plVar22 * 2);
                    if (plVar22 == (long *)0x0) {
                      plVar22 = (long *)0x1;
                    }
                    plVar31 = plVar22;
                  } while (plVar22 < plVar37);
                }
                puVar24 = (undefined8 *)local_70[lVar26 * 4];
                uVar16 = embree::alignedMalloc((long)plVar31 * 0x70,0x10);
                local_70[lVar26 * 4] = uVar16;
                if (local_80[lVar26 * 4] != (long *)0x0) {
                  lVar33 = 0;
                  plVar22 = (long *)0x0;
                  puVar14 = puVar24;
                  while( true ) {
                    puVar17 = (undefined8 *)(uVar16 + lVar33);
                    plVar22 = (long *)((long)plVar22 + 1);
                    lVar33 = lVar33 + 0x70;
                    *puVar17 = *puVar14;
                    uVar8 = puVar14[3];
                    puVar17[2] = puVar14[2];
                    puVar17[3] = uVar8;
                    *(undefined1 (*) [16])(puVar17 + 4) = *(undefined1 (*) [16])(puVar14 + 4);
                    puVar17[6] = puVar14[6];
                    puVar17[7] = puVar14[7];
                    uVar8 = puVar14[9];
                    puVar17[8] = puVar14[8];
                    puVar17[9] = uVar8;
                    uVar8 = puVar14[0xb];
                    puVar17[10] = puVar14[10];
                    puVar17[0xb] = uVar8;
                    puVar17[0xc] = puVar14[0xc];
                    if (local_80[lVar26 * 4] <= plVar22) break;
                    uVar16 = local_70[lVar26 * 4];
                    puVar14 = puVar14 + 0xe;
                  }
                }
                embree::alignedFree(puVar24);
                uVar15 = (ulong)(int)local_124;
                local_70[lVar26 * 4 + -1] = (ulong)plVar31;
                uVar16 = uVar15;
              }
              local_80[lVar26 * 4] = plVar37;
              puVar25 = (ulong *)((long)plVar36 * 0x70 + local_70[lVar26 * 4]);
              *puVar25 = (ulong)local_f8;
              puVar25[6] = local_198._0_8_;
              *(undefined1 (*) [16])(puVar25 + 2) = auVar39;
              *(undefined1 (*) [16])(puVar25 + 4) = local_1a8;
              puVar25[0xc] = uVar34;
              puVar25[7] = (ulong)local_c0;
              plVar36 = local_80[lVar26 * 4];
              *(undefined1 (*) [16])(puVar25 + 8) = local_188;
              *(int *)(puVar25 + 10) = (int)uVar13;
              *(undefined4 *)((long)puVar25 + 0x54) = uVar21;
              *(int *)(puVar25 + 0xb) = (int)uVar18;
              *(undefined4 *)((long)puVar25 + 0x5c) = uVar2;
              plVar31 = local_80[uVar15 * 4];
              plVar22 = local_c0;
            }
LAB_0010226f:
            uVar23 = (uint)uVar16;
            plVar28 = (long *)((long)plVar28 + 1);
          } while (plVar28 < plVar31);
        }
        if (plVar31 == plVar36) {
          local_118 = local_88;
          local_110 = &local_124;
          local_108 = this;
          if (plVar31 == (long *)0x0) goto LAB_00102911;
          break;
        }
        local_124 = uVar32;
        plVar36 = (long *)0x0;
        local_80[(long)(int)uVar23 * 4] = (long *)0x0;
        plVar31 = local_80[(long)(int)uVar32 * 4];
        if ((long *)0x800 < plVar31 + 1) break;
        uVar16 = (ulong)uVar32;
        uVar32 = uVar23;
      } while( true );
    }
    plVar22 = plVar31;
    local_110 = &local_124;
    local_118 = local_88;
    ppuStack_e0 = &local_118;
    local_120 = (long *)0x0;
    uStack_f0 = 0;
    local_e8 = 1;
    local_108 = this;
    local_f8 = plVar22;
    local_d8 = (TaskGroupContext *)&local_120;
    lVar26 = embree::TaskScheduler::thread();
    if (lVar26 == 0) {
      this_00 = (TaskScheduler *)embree::TaskScheduler::instance();
      TaskScheduler::
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (this_00,(_lambda___1_ *)&local_f8,(TaskGroupContext *)&local_120,(ulong)plVar22,
                 true);
    }
    else {
      if (0xfff < *(ulong *)(lVar26 + 0x40080)) {
LAB_00102f40:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar33 = *(long *)(lVar26 + 0xc00c0);
      uVar16 = lVar33 + 0x30 + (ulong)(-(int)lVar33 & 0x3f);
      if (0x80000 < uVar16) goto LAB_00102f40;
      *(ulong *)(lVar26 + 0xc00c0) = uVar16;
      puVar24 = (undefined8 *)(lVar26 + 0x40090 + uVar16);
      *puVar24 = &PTR_execute_00103840;
      puVar24[1] = local_f8;
      puVar24[2] = uStack_f0;
      puVar24[3] = local_e8;
      puVar24[4] = ppuStack_e0;
      puVar24[5] = local_d8;
      lVar20 = *(long *)(lVar26 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar26 + 0x40 + lVar20);
      lVar6 = *(long *)(lVar26 + 0xc0100);
      *(undefined4 *)(lVar26 + 0x44 + lVar20) = 1;
      *(undefined1 *)(lVar26 + 0x48 + lVar20) = 1;
      lVar20 = lVar20 + lVar26;
      *(undefined8 **)(lVar20 + 0x50) = puVar24;
      *(long *)(lVar20 + 0x58) = lVar6;
      *(TaskGroupContext **)(lVar20 + 0x60) = (TaskGroupContext *)&local_120;
      *(long *)(lVar20 + 0x68) = lVar33;
      *(long **)(lVar20 + 0x70) = plVar22;
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
      *(long *)(lVar26 + 0x40080) = *(long *)(lVar26 + 0x40080) + 1;
      UNLOCK();
      plVar22 = (long *)(lVar26 + 0x40040);
      if (*(long *)(lVar26 + 0x40080) - 1U <= *(ulong *)(lVar26 + 0x40040)) {
        LOCK();
        *plVar22 = *(long *)(lVar26 + 0x40080) + -1;
        UNLOCK();
      }
    }
    embree::TaskScheduler::wait();
    if (local_120 == (long *)0x0) {
LAB_00102911:
      embree::alignedFree(local_50);
      embree::alignedFree((void *)local_70[0]);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pplVar27 = &local_f8;
    local_f8 = local_120;
    std::__exception_ptr::exception_ptr::_M_addref();
    std::rethrow_exception(pplVar27);
    plVar36 = plVar37;
LAB_00102c92:
    uVar16 = local_70[0];
    local_70[0] = embree::alignedMalloc((long)plVar36 * 0x70,0x10);
    if (local_80[0] != (long *)0x0) {
      lVar26 = 0;
      plVar31 = (long *)0x0;
      puVar24 = (undefined8 *)uVar16;
      do {
        puVar14 = (undefined8 *)(local_70[0] + lVar26);
        plVar31 = (long *)((long)plVar31 + 1);
        lVar26 = lVar26 + 0x70;
        *puVar14 = *puVar24;
        uVar8 = puVar24[3];
        puVar14[2] = puVar24[2];
        puVar14[3] = uVar8;
        uVar8 = puVar24[5];
        puVar14[4] = puVar24[4];
        puVar14[5] = uVar8;
        puVar14[6] = puVar24[6];
        puVar14[7] = puVar24[7];
        uVar8 = puVar24[9];
        puVar14[8] = puVar24[8];
        puVar14[9] = uVar8;
        uVar8 = puVar24[0xb];
        puVar14[10] = puVar24[10];
        puVar14[0xb] = uVar8;
        plVar22 = (long *)puVar24[0xc];
        puVar14[0xc] = plVar22;
        puVar24 = puVar24 + 0xe;
      } while (plVar31 < local_80[0]);
    }
    embree::alignedFree((void *)uVar16);
    local_80[1] = plVar36;
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
  local_38 = &PTR_processLeaf_00103828;
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
  int *piVar1;
  long *plVar2;
  TaskGroupContext *pTVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  TaskScheduler *pTVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  TaskGroupContext *local_68;
  ulong local_58;
  long lStack_50;
  ulong local_48;
  long *plStack_40;
  TaskGroupContext *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = *(long *)(this + 0x10);
  plVar2 = *(long **)(this + 0x20);
  if (*(ulong *)(this + 0x18) < (ulong)(*(long *)(this + 8) - lVar8)) {
    pTVar3 = *(TaskGroupContext **)(this + 0x28);
    uVar12 = (ulong)(*(long *)(this + 8) + lVar8) >> 1;
    local_58 = uVar12;
    lStack_50 = lVar8;
    local_48 = *(ulong *)(this + 0x18);
    plStack_40 = plVar2;
    local_38 = pTVar3;
    lVar5 = embree::TaskScheduler::thread();
    if (lVar5 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_58,pTVar3,uVar12 - lVar8,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar5 + 0x40080)) goto LAB_0010338e;
      lVar4 = *(long *)(lVar5 + 0xc00c0);
      uVar7 = lVar4 + 0x30 + (ulong)(-(int)lVar4 & 0x3f);
      if (0x80000 < uVar7) goto LAB_0010338e;
      *(ulong *)(lVar5 + 0xc00c0) = uVar7;
      puVar10 = (undefined8 *)(lVar5 + 0x40090 + uVar7);
      *puVar10 = &PTR_execute_00103840;
      puVar10[1] = local_58;
      puVar10[2] = lStack_50;
      puVar10[5] = local_38;
      puVar10[3] = local_48;
      puVar10[4] = plStack_40;
      lVar6 = *(long *)(lVar5 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar5 + 0x40 + lVar6);
      lVar9 = *(long *)(lVar5 + 0xc0100);
      *(undefined4 *)(lVar5 + 0x44 + lVar6) = 1;
      *(undefined1 *)(lVar5 + 0x48 + lVar6) = 1;
      lVar6 = lVar6 + lVar5;
      *(undefined8 **)(lVar6 + 0x50) = puVar10;
      *(long *)(lVar6 + 0x58) = lVar9;
      *(TaskGroupContext **)(lVar6 + 0x60) = pTVar3;
      *(long *)(lVar6 + 0x68) = lVar4;
      *(ulong *)(lVar6 + 0x70) = uVar12 - lVar8;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar5 + 0x40080) = *(long *)(lVar5 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar5 + 0x40080) - 1U <= *(ulong *)(lVar5 + 0x40040)) {
        LOCK();
        *(long *)(lVar5 + 0x40040) = *(long *)(lVar5 + 0x40080) + -1;
        UNLOCK();
      }
    }
    local_88 = *(long *)(this + 8);
    uStack_70 = *(undefined8 *)(this + 0x20);
    pTVar3 = *(TaskGroupContext **)(this + 0x28);
    local_78 = *(undefined8 *)(this + 0x18);
    uVar7 = local_88 - uVar12;
    uStack_80 = uVar12;
    local_68 = pTVar3;
    lVar8 = embree::TaskScheduler::thread();
    if (lVar8 == 0) {
      pTVar11 = (TaskScheduler *)embree::TaskScheduler::instance();
      spawn_root<embree::TaskScheduler::spawn<unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_>(unsigned_long,unsigned_long,unsigned_long,embree::parallel_for<unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_>(unsigned_long,embree::sse2::BVHNCollider<4>::collide_recurse_entry(embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&,embree::NodeRefPtr<4>,embree::BBox<embree::Vec3fa>const&)::_lambda(unsigned_long)_1_const&)::_lambda(embree::range<unsigned_long>const&)_1_const&,embree::TaskScheduler::TaskGroupContext*)::_lambda()_1_>
                (pTVar11,(_lambda___1_ *)&local_88,pTVar3,uVar7,true);
    }
    else {
      if (0xfff < *(ulong *)(lVar8 + 0x40080)) {
LAB_0010338e:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = *(long *)(lVar8 + 0xc00c0);
      uVar12 = lVar5 + 0x30 + (ulong)(-(int)lVar5 & 0x3f);
      if (0x80000 < uVar12) goto LAB_0010338e;
      *(ulong *)(lVar8 + 0xc00c0) = uVar12;
      puVar10 = (undefined8 *)(lVar8 + 0x40090 + uVar12);
      *puVar10 = &PTR_execute_00103840;
      puVar10[1] = local_88;
      puVar10[2] = uStack_80;
      puVar10[5] = local_68;
      puVar10[3] = local_78;
      puVar10[4] = uStack_70;
      lVar9 = *(long *)(lVar8 + 0x40080) * 0x40;
      piVar1 = (int *)(lVar8 + 0x40 + lVar9);
      lVar4 = *(long *)(lVar8 + 0xc0100);
      *(undefined4 *)(lVar8 + 0x44 + lVar9) = 1;
      *(undefined1 *)(lVar8 + 0x48 + lVar9) = 1;
      lVar9 = lVar9 + lVar8;
      *(undefined8 **)(lVar9 + 0x50) = puVar10;
      *(long *)(lVar9 + 0x58) = lVar4;
      *(TaskGroupContext **)(lVar9 + 0x60) = pTVar3;
      *(long *)(lVar9 + 0x68) = lVar5;
      *(ulong *)(lVar9 + 0x70) = uVar7;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
        UNLOCK();
      }
      LOCK();
      if (*piVar1 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      LOCK();
      *(long *)(lVar8 + 0x40080) = *(long *)(lVar8 + 0x40080) + 1;
      UNLOCK();
      if (*(long *)(lVar8 + 0x40080) - 1U <= *(ulong *)(lVar8 + 0x40040)) {
        LOCK();
        *(long *)(lVar8 + 0x40040) = *(long *)(lVar8 + 0x40080) + -1;
        UNLOCK();
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      embree::TaskScheduler::wait();
      return;
    }
  }
  else {
    puVar10 = (undefined8 *)
              (lVar8 * 0x70 + *(long *)((long)*(int *)plVar2[1] * 0x20 + *plVar2 + 0x18));
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      sse2::BVHNCollider<4>::collide_recurse(plVar2[2],*puVar10,puVar10 + 2,puVar10[7],puVar10 + 8);
      return;
    }
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
  uVar1 = _UNK_00103a38;
  local_48[0] = local_60;
  *__src = __LC39;
  __src[1] = uVar1;
  uVar2 = _UNK_00103a48;
  *(undefined8 *)((long)__src + 9) = __LC40;
  *(undefined8 *)((long)__src + 0x11) = uVar2;
  local_50 = local_60;
  *(undefined1 *)((long)__src + local_60) = 0;
  collision_regression._0_8_ = &PTR___cxa_pure_virtual_001037f8;
  collision_regression._8_8_ = 0x1001f8;
  local_58 = __src;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      collision_regression[0x18] = (char)*__src;
      goto LAB_00103468;
    }
    if (local_60 == 0) goto LAB_00103468;
  }
  else {
    collision_regression._8_8_ =
         std::__cxx11::string::_M_create((ulong *)(collision_regression + 8),(ulong)&local_60);
    collision_regression._24_8_ = local_60;
  }
  memcpy((void *)collision_regression._8_8_,__src,__n);
LAB_00103468:
  collision_regression._16_8_ = local_60;
  *(undefined1 *)(collision_regression._8_8_ + local_60) = 0;
  if (local_58 != local_48) {
    operator_delete(local_58,local_48[0] + 1);
  }
  collision_regression._0_8_ = &PTR_run_00103810;
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


